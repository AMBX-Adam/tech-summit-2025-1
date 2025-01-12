// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"
#include "UObject/Object.h"

/**
 * 
 */

struct TECHSUMMIT2025_API FTSGameplayTags : public FGameplayTagNativeAdder
{
public:
	FGameplayTag TestTag;
	
protected:
	FTSGameplayTags()
	{
		UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

		//This crashes the game and it will not run
		Manager.AddTagIniSearchPath(FPaths::ProjectConfigDir() / TEXT("GameplayTags"));
	}
	
	virtual void AddTags() override
	{
		AddTag(TestTag, "TestTag", "TestTag for testing");
	}

	//========================================
	// Internal functions
	//========================================
public:
	static const FTSGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeTags();
	static FGameplayTag FindTagByString(FString TagString, bool bMatchPartialString = false);

protected:
	// @see FLyraGameplayTags
	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);

private:
	static FTSGameplayTags GameplayTags;
};
