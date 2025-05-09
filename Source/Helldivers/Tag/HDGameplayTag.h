
#pragma once

#include "GameplayTagContainer.h"

#define HDTAG_ACTOR_ROTATE                  FGameplayTag::RequestGameplayTag(FName("Actor.Action.Rotate"))
#define HDTAG_ACTOR_ISROTATING              FGameplayTag::RequestGameplayTag(FName("Actor.State.IsRotating"))

#define HDTAG_EVENT_STRATAGEMHUD_INPUTMODE  FGameplayTag::RequestGameplayTag(FName("Character.State.IsStratagemInputMode"))

#define HDTAG_EVENT_STRATAGEMHUD_APPEAR     FGameplayTag::RequestGameplayTag(FName("Event.StratagemHUD.Active"))
#define HDTAG_EVENT_STRATAGEMHUD_DISAPPEAR  FGameplayTag::RequestGameplayTag(FName("Event.StratagemHUD.Deactive"))

#define HDTAG_DATA_PROJECTILE_DAMAGE        FGameplayTag::RequestGameplayTag(FName("Data.Projectile.Damage"))