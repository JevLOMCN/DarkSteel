// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 65

// StaticClass @ 147ba95e0

UClass * __cdecl AGameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameMode",&Z_Registration_Info_UClass_AGameMode.InnerSingleton,
               StaticRegisterNativesAGameMode,0x3a0,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameMode>,
               InternalVTableHelperCtorCaller<AGameMode>,local_res8,AGameModeBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameMode.InnerSingleton;
}

// AGameMode @ 147bb82a0

AGameMode * __thiscall AGameMode::AGameMode(AGameMode *this,FVTableHelper *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->_padding_ = (longlong)&___7AGameMode__6B_;
  (this->MatchState).ComparisonIndex = 0;
  (this->MatchState).Number = 0;
  (this->EngineMessageClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InactivePlayerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InactivePlayerArray).ArrayNum = 0;
  (this->InactivePlayerArray).ArrayMax = 0;
  return this;
}

// AGameMode @ 147bb82f0

AGameMode * __thiscall AGameMode::AGameMode(AGameMode *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  UClass *pUVar2;
  
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->bDelayedStart = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&___7AGameMode__6B_;
  (this->MatchState).ComparisonIndex = 0;
  (this->MatchState).Number = 0;
  (this->EngineMessageClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->InactivePlayerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InactivePlayerArray).ArrayNum = 0;
  (this->InactivePlayerArray).ArrayMax = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->MatchState = MatchState::EnteringMap;
  pUVar2 = Z_Construct_UClass_UEngineMessage_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->EngineMessageClass).Class.field0_0x0.DebugPtr = pUVar2;
  pUVar2 = Z_Construct_UClass_AGameState_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  this->MinRespawnDelay = 1.0;
  this->InactivePlayerStateLifeSpan = 300.0;
  this->MaxInactivePlayers = 0x10;
  return this;
}

// ~AGameMode @ 147bbe930

void __thiscall AGameMode::~AGameMode(AGameMode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AGameMode__6B_;
  pFVar1 = (this->InactivePlayerArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// AbortMatch @ 147bc6ff0

void __thiscall AGameMode::AbortMatch(AGameMode *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147bc6ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x998))(this,MatchState::Aborted);
  return;
}

// AddInactivePlayer @ 147bc8700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AGameMode::AddInactivePlayer(AGameMode *this,APlayerState *param_1,APlayerController *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<APlayerState>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  AActor *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UWorld *pUVar9;
  AActor *pAVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  AActor *local_48 [2];
  
  if ((param_1 == (APlayerState *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayerState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameMode.cpp"
                         ,0x25b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = AActor::GetWorld((AActor *)this);
  if ((((param_1->bFromPreviousLevel == '\0') &&
       (bVar5 = AGameModeBase::MustSpectate((AGameModeBase *)this,param_2), !bVar5)) &&
      (pUVar9->bIsTearingDown == '\0')) &&
     (pAVar10 = (AActor *)(**(code **)(param_1->_padding_ + 0x7e0))(param_1),
     pAVar10 != (AActor *)0x0)) {
    (**(code **)(*(longlong *)this->_padding_ + 0x7b8))();
    AActor::SetReplicates(pAVar10,false);
    (**(code **)(pAVar10->_padding_ + 0x400))(pAVar10,this->InactivePlayerStateLifeSpan);
    bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&pAVar10[1]._padding_);
    iVar7 = *(int *)&pAVar10[1].field_0x58;
    uVar12 = 0;
    if (0 < (this->InactivePlayerArray).ArrayNum) {
      pTVar2 = &this->InactivePlayerArray;
      lVar15 = 0;
      iVar14 = 1;
      do {
        uVar11 = 0;
        if ((int)uVar12 < (this->InactivePlayerArray).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(AActor **)((pTVar2->AllocatorInstance).Data + lVar15);
        if ((this_00 == (AActor *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
LAB_147bc8914:
          uVar11 = 0;
          if (iVar14 <= (this->InactivePlayerArray).ArrayNum) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 8;
          iVar13 = ~uVar12 + (this->InactivePlayerArray).ArrayNum;
          if (iVar13 != 0) {
            memmove(pFVar3,pFVar3 + 8,(longlong)iVar13 << 3);
          }
          piVar1 = &(this->InactivePlayerArray).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->InactivePlayerArray).ArrayNum,
                     &(this->InactivePlayerArray).ArrayMax);
          uVar12 = uVar12 - 1;
          iVar14 = iVar14 + -1;
          lVar15 = lVar15 + -8;
        }
        else {
          if (bVar5) {
            bVar6 = ::operator==((FUniqueNetIdWrapper *)&this_00[1]._padding_,
                                 (FUniqueNetIdWrapper *)&pAVar10[1]._padding_);
            goto LAB_147bc88ff;
          }
          if (1 < iVar7) {
            iVar13 = *(int *)&this_00[1].field_0x58;
            if (iVar13 == *(int *)&pAVar10[1].field_0x58) {
              if (1 < iVar13) {
                iVar13 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)this_00[1].PrimaryActorTick.Target,
                                    (wchar_t *)pAVar10[1].PrimaryActorTick.Target);
                bVar6 = iVar13 == 0;
                goto LAB_147bc88ff;
              }
            }
            else {
              bVar6 = iVar13 + *(int *)&pAVar10[1].field_0x58 == 1;
LAB_147bc88ff:
              if (bVar6 == false) goto LAB_147bc89b1;
            }
            AActor::Destroy(this_00,false,true);
            goto LAB_147bc8914;
          }
        }
LAB_147bc89b1:
        uVar12 = uVar12 + 1;
        iVar14 = iVar14 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar12 < (this->InactivePlayerArray).ArrayNum);
    }
    pTVar2 = &this->InactivePlayerArray;
    local_48[0] = pAVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar3 + (longlong)(this->InactivePlayerArray).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->InactivePlayerArray).ArrayNum;
    piVar1 = &(this->InactivePlayerArray).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->InactivePlayerArray).ArrayNum = iVar7 + 1;
    *(AActor **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48[0]);
    }
    iVar7 = (this->InactivePlayerArray).ArrayNum;
    if (this->MaxInactivePlayers < iVar7) {
      uVar11 = iVar7 - this->MaxInactivePlayers;
      uVar12 = 0;
      if (0 < (int)uVar11) {
        lVar15 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar12 < (this->InactivePlayerArray).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pAVar10 = *(AActor **)((this->InactivePlayerArray).AllocatorInstance.Data + lVar15 * 8);
          if (pAVar10 != (AActor *)0x0) {
            AActor::Destroy(pAVar10,false,true);
          }
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uVar11);
      }
      uVar12 = 0;
      if ((int)uVar11 <= (this->InactivePlayerArray).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        pFVar3 = (this->InactivePlayerArray).AllocatorInstance.Data;
        iVar7 = (this->InactivePlayerArray).ArrayNum - uVar11;
        if (iVar7 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar11 * 8,(longlong)iVar7 << 3);
        }
        iVar7 = (this->InactivePlayerArray).ArrayNum - uVar11;
        (this->InactivePlayerArray).ArrayNum = iVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->InactivePlayerArray).AllocatorInstance,iVar7,piVar1);
      }
    }
  }
  return;
}

// Broadcast @ 147bcb020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::Broadcast(AGameMode *this,AActor *param_1,FString *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UWorld *this_00;
  APlayerController *this_01;
  APlayerState *pAVar7;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_38 [2];
  
  if (param_1 != (AActor *)0x0) {
    pUVar6 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        param_1 = (AActor *)0x0;
      }
      pAVar7 = (APlayerState *)param_1[1]._padding_;
      goto LAB_147bcb0f5;
    }
  }
  pAVar7 = (APlayerState *)0x0;
  if (param_1 != (AActor *)0x0) {
    pUVar6 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pAVar7 = (APlayerState *)0x0,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_AController_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        param_1 = (AActor *)0x0;
      }
      pAVar7 = (APlayerState *)param_1[1]._padding_;
    }
  }
LAB_147bcb0f5:
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,local_38);
  while( true ) {
    iVar1 = local_38[0].Index;
    pTVar3 = local_38[0].Container;
    if (local_38[0].Index < 0) {
      return;
    }
    if ((local_38[0].Container)->ArrayNum <= local_38[0].Index) break;
    uVar5 = 0;
    if (local_38[0].Index < (local_38[0].Container)->ArrayNum) {
      uVar5 = (uint)~local_38[0].Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_01 = (APlayerController *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar1 * 8));
    if (this_01 != (APlayerController *)0x0) {
      APlayerController::ClientTeamMessage(this_01,pAVar7,param_2,param_3,0.0);
    }
    local_38[0].Index = local_38[0].Index + 1;
  }
  return;
}

// BroadcastLocalized @ 147bcb430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AGameMode::BroadcastLocalized
          (AGameMode *this,AActor *param_1,TSubclassOf<ULocalMessage> param_2,int param_3,
          APlayerState *param_4,APlayerState *param_5,UObject *param_6)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_00;
  APlayerController *this_01;
  UObject *local_38;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_30;
  
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(this_00,&local_30);
  while( true ) {
    iVar3 = local_30.Index;
    pTVar2 = local_30.Container;
    if (local_30.Index < 0) {
      return;
    }
    if ((local_30.Container)->ArrayNum <= local_30.Index) break;
    uVar5 = 0;
    if (local_30.Index < (local_30.Container)->ArrayNum) {
      uVar5 = (uint)~local_30.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_01 = (APlayerController *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (this_01 != (APlayerController *)0x0) {
      local_38 = *(UObject **)param_2.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_38);
      }
      APlayerController::ClientReceiveLocalizedMessage
                (this_01,(TSubclassOf<ULocalMessage>)&local_38,param_3,param_4,param_5,param_6);
    }
    local_30.Index = local_30.Index + 1;
  }
  return;
}

// CanServerTravel @ 147bcb940

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AGameMode::CanServerTravel(AGameMode *this,FString *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = AGameModeBase::CanServerTravel((AGameModeBase *)this,param_1,param_2);
  if (bVar1) {
    if (this->MatchState != MatchState::Aborted) {
      return true;
    }
    if (4 < (byte)LogGameMode._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    }
  }
  return false;
}

// EndMatch @ 147bd8c80

void __thiscall AGameMode::EndMatch(AGameMode *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x970))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147bd8ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x998))(this,MatchState::WaitingPostMatch);
    return;
  }
  return;
}

// FindInactivePlayer @ 147bdc2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall AGameMode::FindInactivePlayer(AGameMode *this,APlayerController *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TArray<TObjectPtr<APlayerState>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  APlayerState *this_00;
  longlong lVar5;
  APlayerState *this_01;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  undefined1 auStackY_e8 [32];
  FString local_90;
  FString local_80;
  FUniqueNetIdRepl local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar9 = false;
  plVar2 = &param_1->_padding_;
  if (((param_1 == (APlayerController *)0x0) || (*plVar2 == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PC && PC->PlayerState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameMode.cpp"
                         ,0x2b1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (((this->InactivePlayerArray).ArrayNum == 0) ||
     (bVar7 = AGameModeBase::MustSpectate((AGameModeBase *)this,param_1), bVar7)) {
    bVar9 = false;
  }
  else {
    APlayerState::GetPlayerName((APlayerState *)*plVar2,&local_90);
    uVar15 = 0;
    if (0 < (this->InactivePlayerArray).ArrayNum) {
      pTVar3 = &this->InactivePlayerArray;
      iVar14 = 1;
      lVar18 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar15 < (this->InactivePlayerArray).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        this_00 = *(APlayerState **)((pTVar3->AllocatorInstance).Data + lVar18);
        if ((this_00 == (APlayerState *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
          uVar10 = 0;
          if (iVar14 <= (this->InactivePlayerArray).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar15 * 8;
          iVar11 = ~uVar15 + (this->InactivePlayerArray).ArrayNum;
          if (iVar11 != 0) {
            memmove(pFVar4,pFVar4 + 8,(longlong)iVar11 << 3);
          }
          piVar1 = &(this->InactivePlayerArray).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar3->AllocatorInstance,(this->InactivePlayerArray).ArrayNum,
                     &(this->InactivePlayerArray).ArrayMax);
          uVar15 = uVar15 - 1;
          iVar14 = iVar14 + -1;
          lVar18 = lVar18 + -8;
        }
        else {
          bVar7 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(*plVar2 + 0x2d0));
          lVar5 = *plVar2;
          if (bVar7) {
            bVar7 = ::operator==((FUniqueNetIdWrapper *)&this_00->UniqueId,
                                 (FUniqueNetIdWrapper *)(lVar5 + 0x2d0));
          }
          else {
            if (*(int *)(lVar5 + 0x318) < 2) {
LAB_147bdc4a1:
              bVar7 = false;
            }
            else {
              if ((this_00->SavedNetworkAddress).Data.ArrayNum == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)(this_00->SavedNetworkAddress).Data.AllocatorInstance.Data;
              }
              iVar11 = FGenericPlatformStricmp::Stricmp(pwVar13,*(wchar_t **)(lVar5 + 0x310));
              if (iVar11 != 0) goto LAB_147bdc4a1;
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_90.Data.ArrayNum != 0) {
                FVar17.Data = local_90.Data.AllocatorInstance.Data;
              }
              bVar9 = true;
              pFVar12 = APlayerState::GetPlayerName(this_00,&local_80);
              if ((pFVar12->Data).ArrayNum == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
              iVar11 = FGenericPlatformStricmp::Stricmp(pwVar13,(wchar_t *)FVar17.Data);
              if (iVar11 != 0) goto LAB_147bdc4a1;
              bVar7 = true;
            }
            if ((bVar9) &&
               (bVar9 = false,
               local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          if (bVar7 != false) {
            this_01 = (APlayerState *)param_1->_padding_;
            AController::SetPlayerState((AController *)param_1,this_00);
            (**(code **)(*(longlong *)param_1->_padding_ + 0x500))
                      ((longlong *)param_1->_padding_,param_1);
            AActor::SetReplicates((AActor *)param_1->_padding_,true);
            (**(code **)(*(longlong *)param_1->_padding_ + 0x400))((longlong *)param_1->_padding_,0)
            ;
            (**(code **)(this->_padding_ + 0xa08))(this,param_1,this_01);
            (**(code **)(*(longlong *)this->_padding_ + 0x7b0))
                      ((longlong *)this->_padding_,param_1->_padding_);
            uVar10 = 0;
            if ((int)(uVar15 + 1) <= (this->InactivePlayerArray).ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            pFVar4 = (this->InactivePlayerArray).AllocatorInstance.Data + (longlong)(int)uVar15 * 8;
            iVar14 = (this->InactivePlayerArray).ArrayNum + ~uVar15;
            if (iVar14 != 0) {
              memmove(pFVar4,pFVar4 + 8,(longlong)iVar14 << 3);
            }
            iVar14 = (this->InactivePlayerArray).ArrayNum + -1;
            (this->InactivePlayerArray).ArrayNum = iVar14;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&(this->InactivePlayerArray).AllocatorInstance,iVar14,
                       &(this->InactivePlayerArray).ArrayMax);
            APlayerState::SetIsInactive(this_01,true);
            local_70._padding_._0_1_ = 0;
            local_70.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_70._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
            local_70.ReplicationBytes.ArrayNum = 0;
            local_70.ReplicationBytes.ArrayMax = 0;
            local_70._padding_ = 0;
            local_70._padding_ = 0;
            APlayerState::SetUniqueId(this_01,&local_70);
            local_70._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
            if (local_70.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_70.ReplicationBytes.AllocatorInstance.Data);
            }
            uVar16 = (ulonglong)(byte)local_70._padding_;
            if ((1 < (byte)local_70._padding_) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar16] ==
                UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct)
            {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_70._padding_);
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar16])(&local_70._padding_);
            }
            AActor::Destroy((AActor *)this_01,false,true);
            (**(code **)(*(longlong *)param_1->_padding_ + 0x7f0))();
            bVar9 = true;
            goto LAB_147bdc760;
          }
        }
        uVar15 = uVar15 + 1;
        iVar14 = iVar14 + 1;
        lVar18 = lVar18 + 8;
      } while ((int)uVar15 < (this->InactivePlayerArray).ArrayNum);
    }
    bVar9 = false;
LAB_147bdc760:
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  return bVar9;
}

// GetNetworkNumber @ 147be3760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall AGameMode::GetNetworkNumber(AGameMode *this,FString *__return_storage_ptr__)

{
  UNetDriver *pUVar1;
  UWorld *pUVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_28;
  void *local_18 [2];
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  pUVar1 = (pUVar2->NetDriver).field0_0x0.DebugPtr;
  bVar4 = pUVar1 == (UNetDriver *)0x0;
  if (bVar4) {
    pFVar3 = ::FString::FString(&local_28,L"");
  }
  else {
    pFVar3 = (FString *)(**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetNumPlayers @ 147be3830

int __thiscall AGameMode::GetNumPlayers(AGameMode *this)

{
  return this->NumTravellingPlayers + this->NumPlayers;
}

// GetNumSpectators @ 147be3850

int __thiscall AGameMode::GetNumSpectators(AGameMode *this)

{
  return this->NumSpectators;
}

// GetPrivateStaticClass @ 147be47e0

UClass * __cdecl AGameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameMode",&Z_Registration_Info_UClass_AGameMode.InnerSingleton,
               StaticRegisterNativesAGameMode,0x3a0,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AGameMode>,
               InternalVTableHelperCtorCaller<AGameMode>,local_res8,AGameModeBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameMode.InnerSingleton;
}

// GetTravelType @ 147bec130

bool __thiscall AGameMode::GetTravelType(AGameMode *this)

{
  return false;
}

// HandleDisconnect @ 147bed080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::HandleDisconnect(AGameMode *this,UWorld *param_1,UNetDriver *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147bed083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x990))();
  return;
}

// HandleLeavingMap @ 147bed280

void __thiscall AGameMode::HandleLeavingMap(AGameMode *this)

{
  return;
}

// HandleMatchAborted @ 147bed290

void __thiscall AGameMode::HandleMatchAborted(AGameMode *this)

{
  return;
}

// HandleMatchHasEnded @ 147bed2a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::HandleMatchHasEnded(AGameMode *this)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  UGameInstance *pUVar2;
  
  (**(code **)(*(longlong *)this->_padding_ + 0x840))();
  cVar1 = (**(code **)(this->_padding_ + 0x8f0))(this);
  if (cVar1 != '\0') {
    pUVar2 = AActor::GetGameInstance((AActor *)this);
    if (pUVar2 != (UGameInstance *)0x0) {
      pUVar2 = AActor::GetGameInstance((AActor *)this);
      UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x368);
                    /* WARNING: Could not recover jumptable at 0x000147bed2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pUVar2,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}

// HandleMatchHasStarted @ 147bed300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::HandleMatchHasStarted(AGameMode *this)

{
  longlong *plVar1;
  code *pcVar2;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  UWorld *pUVar7;
  APlayerController *pAVar8;
  AWorldSettings *pAVar9;
  FString *pFVar10;
  UObject *pUVar11;
  UGameInstance *pUVar12;
  FString *pFVar13;
  FString *local_c8;
  undefined8 local_c0;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_b8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (**(code **)(*(longlong *)this->_padding_ + 0x838))();
  pUVar7 = AActor::GetWorld((AActor *)this);
  UWorld::GetPlayerControllerIterator(pUVar7,&local_b8);
LAB_147bed350:
  do {
    iVar4 = local_b8.Index;
    pTVar3 = local_b8.Container;
    if (local_b8.Index < 0) break;
    if ((local_b8.Container)->ArrayNum <= local_b8.Index) break;
    if (local_b8.Index < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pAVar8 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
    if (pAVar8 != (APlayerController *)0x0) {
      pUVar11 = (UObject *)pAVar8->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar11 != (UObject *)0x0) goto LAB_147bed407;
      }
      else if (pUVar11 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar11);
        local_b8.Index = local_b8.Index + 1;
        goto LAB_147bed350;
      }
      bVar5 = AGameModeBase::PlayerCanRestart((AGameModeBase *)this,pAVar8);
      if (bVar5) {
        (**(code **)(this->_padding_ + 0x8c8))(this,pAVar8);
      }
    }
LAB_147bed407:
    local_b8.Index = local_b8.Index + 1;
  } while( true );
  pUVar7 = AActor::GetWorld((AActor *)this);
  UEngine::BlockTillLevelStreamingCompleted(GEngine,pUVar7);
  pAVar9 = AActor::GetWorldSettings((AActor *)this);
  (**(code **)(pAVar9->_padding_ + 0x7b8))(pAVar9);
  pAVar9 = AActor::GetWorldSettings((AActor *)this);
  (**(code **)(pAVar9->_padding_ + 0x7c0))(pAVar9);
  ::FString::FString(&local_78,L"BugLoc");
  pFVar10 = ::FString::FString(&local_28,(FString *)&this->_padding_);
  UGameplayStatics::ParseOption(&local_88,pFVar10,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_68,L"BugRot");
  pFVar10 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  UGameplayStatics::ParseOption(&local_98,pFVar10,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((1 < local_88.Data.ArrayNum) || (1 < local_98.Data.ArrayNum)) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    UWorld::GetPlayerControllerIterator(pUVar7,&local_a8);
    for (; iVar4 = local_a8.Index, pTVar3 = local_a8.Container, -1 < local_a8.Index;
        local_a8.Index = local_a8.Index + 1) {
      if ((local_a8.Container)->ArrayNum <= local_a8.Index) break;
      if (local_a8.Index < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 8));
      if ((pUVar11 != (UObject *)0x0) &&
         (plVar1 = *(longlong **)&pUVar11[0x1b].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x3f8))(plVar1,&local_88,&local_98);
      }
    }
  }
  cVar6 = (**(code **)(this->_padding_ + 0x8f0))(this);
  if (cVar6 != '\0') {
    pUVar12 = AActor::GetGameInstance((AActor *)this);
    if (pUVar12 != (UGameInstance *)0x0) {
      pUVar12 = AActor::GetGameInstance((AActor *)this);
      local_58 = 0;
      uStack_50 = 0;
      local_c8 = (FString *)0x0;
      local_c0 = 0;
      pcVar2 = *(code **)(pUVar12->_padding_ + 0x360);
      pUVar7 = AActor::GetWorld((AActor *)this);
      pFVar10 = UWorld::GetMapName(pUVar7,&local_38);
      pUVar7 = AActor::GetWorld((AActor *)this);
      pFVar13 = UWorld::GetMapName(pUVar7,&local_48);
      (*pcVar2)(pUVar12,pFVar13,pFVar10,&local_c8,&local_58);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>(local_c8,(int)local_c0);
      if (local_c8 != (FString *)0x0) {
        FMemory::Free(local_c8);
      }
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleMatchIsWaitingToStart @ 147bed6b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::HandleMatchIsWaitingToStart(AGameMode *this)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  AWorldSettings *pAVar2;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x830))();
  }
  bVar1 = ReadyToStartMatch(this);
  if (!bVar1) {
    pAVar2 = AActor::GetWorldSettings((AActor *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar2->_padding_ + 0x7b8);
                    /* WARNING: Could not recover jumptable at 0x000147bed6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pAVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// HandleSeamlessTravelPlayer @ 147bedde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameMode::HandleSeamlessTravelPlayer(AGameMode *this,AController **param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TObjectPtr<APlayerState>_u_0 TVar10;
  TObjectPtr<APlayerState>_u_0 this_00;
  TObjectPtr<APlayerState>_u_0 this_01;
  TObjectPtr<APlayerState>_u_0 local_res8;
  undefined1 local_res10 [8];
  FString local_68;
  void *local_50 [3];
  
  if (4 < (byte)LogGameMode._0_1_) {
    local_res8 = (TObjectPtr<APlayerState>_u_0)(*param_1)->_padding_;
    ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_68);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  this_01.DebugPtr = (APlayerState *)*param_1;
  TVar10.DebugPtr = (APlayerState *)0x0;
  if ((APlayerController *)this_01.DebugPtr == (APlayerController *)0x0) {
LAB_147bede7f:
    this_01.DebugPtr = TVar10.DebugPtr;
  }
  else {
    pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)((this_01.DebugPtr)->_padding_ + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((this_01.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_147bede7f;
  }
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x850))(this,local_res10,this_01.DebugPtr);
  lVar2 = *plVar7;
  if ((lVar2 != 0) &&
     (pUVar6 = Z_Construct_UClass_APlayerController_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      TVar10.DebugPtr = (APlayerState *)*plVar7;
    }
  }
  if (((APlayerController *)this_01.DebugPtr == (APlayerController *)0x0) ||
     ((APlayerController *)(this_01.DebugPtr)->_padding_ == (APlayerController *)TVar10.DebugPtr)) {
    (**(code **)((((*param_1)->PlayerState).field0_0x0.DebugPtr)->_padding_ + 0x6f8))();
    this_00 = (TObjectPtr<APlayerState>_u_0)((*param_1)->PlayerState).field0_0x0.DebugPtr;
    (**(code **)((*param_1)->_padding_ + 0x830))();
    (**(code **)((this_00.DebugPtr)->_padding_ + 0x7f8))(this_00.DebugPtr);
  }
  else {
    lVar2._0_4_ = (((FString *)((longlong)this_01 + 0x370))->Data).ArrayNum;
    lVar2._4_4_ = (((FString *)((longlong)this_01 + 0x370))->Data).ArrayMax;
    this_00 = this_01;
    if (lVar2 != 0) {
      pcVar3 = *(code **)(this->_padding_ + 0x958);
      local_res8 = TVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((APlayerController *)TVar10.DebugPtr != (APlayerController *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
      }
      uVar8 = (**(code **)((this_01.DebugPtr)->_padding_ + 0x7a8))(this_01.DebugPtr,local_50);
      uVar9 = (**(code **)((this_01.DebugPtr)->_padding_ + 0xf20))(this_01.DebugPtr,&local_68);
      if (((((this_01.DebugPtr)->PlayerNamePrivate).Data.ArrayNum & 2) == 0) ||
         (cVar5 = (**(code **)((this_01.DebugPtr)->_padding_ + 0x7f0))(), cVar5 == '\0')) {
        cVar5 = '\x01';
      }
      else {
        cVar5 = '\0';
      }
      TVar10.DebugPtr = (APlayerState *)(*pcVar3)(this,cVar5 + '\x01',uVar9,uVar8,&local_res8);
      if ((APlayerController *)TVar10.DebugPtr == (APlayerController *)0x0) {
        if (2 < (byte)LogGameMode._0_1_) {
          local_res8 = *(TObjectPtr<APlayerState>_u_0 *)((this_01.DebugPtr)->_padding_ + 0x18);
          ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_68);
          (**(code **)((this_01.DebugPtr)->_padding_ + 0x6f0))(this_01.DebugPtr,local_50);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
          if (local_50[0] != (void *)0x0) {
            FMemory::Free(local_50[0]);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        AActor::Destroy((AActor *)this_01.DebugPtr,false,true);
        return;
      }
      (**(code **)((this_01.DebugPtr)->_padding_ + 0xc98))(this_01.DebugPtr,TVar10.DebugPtr);
      (**(code **)((TVar10.DebugPtr)->_padding_ + 0xca0))(TVar10.DebugPtr,this_01.DebugPtr);
      (**(code **)(this->_padding_ + 0x848))(this,this_01.DebugPtr,TVar10.DebugPtr);
      *param_1 = (AController *)TVar10;
      this_01.DebugPtr = TVar10.DebugPtr;
      goto LAB_147bee09e;
    }
  }
  AActor::Destroy((AActor *)this_00.DebugPtr,false,true);
LAB_147bee09e:
  (**(code **)(this->_padding_ + 0x950))(this,*param_1);
  (**(code **)(this->_padding_ + 0x920))(this,*param_1);
  if ((APlayerController *)this_01.DebugPtr != (APlayerController *)0x0) {
    AGameModeBase::HandleStartingNewPlayer
              ((AGameModeBase *)this,(APlayerController *)this_01.DebugPtr);
  }
  if (4 < (byte)LogGameMode._0_1_) {
    local_res8 = (TObjectPtr<APlayerState>_u_0)(*param_1)->_padding_;
    ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_68);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleStartingNewPlayer_Implementation @ 147bee140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameMode::HandleStartingNewPlayer_Implementation(AGameMode *this,APlayerController *param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((this->_padding_ & 2) == 0) {
    bVar1 = AGameModeBase::MustSpectate((AGameModeBase *)this,param_1);
    if (!bVar1) {
      cVar2 = (**(code **)(this->_padding_ + 0x970))(this);
      if (cVar2 != '\0') {
        bVar1 = AGameModeBase::PlayerCanRestart((AGameModeBase *)this,param_1);
        if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000147bee194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(this->_padding_ + 0x8c8))(this,param_1);
          return;
        }
      }
      if (this->MatchState == MatchState::WaitingToStart) {
        bVar1 = ReadyToStartMatch(this);
        if (bVar1) {
          (**(code **)(this->_padding_ + 0x978))(this);
        }
      }
    }
  }
  return;
}

// HasMatchEnded @ 147bee370

bool __thiscall AGameMode::HasMatchEnded(AGameMode *this)

{
  if (this->MatchState != MatchState::WaitingPostMatch) {
    return this->MatchState == MatchState::LeavingMap;
  }
  return true;
}

// HasMatchStarted @ 147bee3a0

bool __thiscall AGameMode::HasMatchStarted(AGameMode *this)

{
  if (this->MatchState != MatchState::EnteringMap) {
    return this->MatchState != MatchState::WaitingToStart;
  }
  return false;
}

// InitGame @ 147befa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AGameMode::InitGame(AGameMode *this,FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  FGameDelegates *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FName local_res8;
  FString local_18;
  
  AGameModeBase::InitGame((AGameModeBase *)this,param_1,param_2,param_3);
  (**(code **)(this->_padding_ + 0x998))(this,MatchState::EnteringMap);
  lVar2 = this->_padding_;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_AGameStateBase_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = this->_padding_, lVar2 != 0)) {
      pUVar4 = Z_Construct_UClass_AGameStateBase_NoRegister();
      lVar6 = 0;
      lVar7 = lVar6;
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar7 = this->_padding_;
        }
      }
      pUVar4 = Z_Construct_UClass_AGameState_NoRegister();
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_147befc3b;
      }
      if (1 < (byte)LogGameMode._0_1_) {
        lVar2 = this->_padding_;
        if ((lVar2 != 0) &&
           (pUVar4 = Z_Construct_UClass_AGameStateBase_NoRegister(), pUVar4 != (UClass *)0x0)) {
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar6 = this->_padding_;
          }
        }
        local_res8 = *(FName *)(lVar6 + 0x18);
        ::FName::ToString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_147befc3b;
    }
  }
  if (1 < (byte)LogGameMode._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
  }
  pUVar4 = Z_Construct_UClass_AGameState_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
LAB_147befc3b:
  pFVar5 = FGameDelegates::Get();
  TMulticastDelegateRegistration<void___cdecl(FUniqueNetIdRepl_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<AGameMode>
            ((TMulticastDelegateRegistration<void___cdecl(FUniqueNetIdRepl_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar5->PendingConnectionLostDelegate,(AGameMode *)&local_res8,(pmf_cec4eac2)this);
  pFVar5 = FGameDelegates::Get();
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<AGameMode>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar5->PreCommitMapChangeDelegate,(AGameMode *)&local_res8,(pmf_14660d96)this);
  pFVar5 = FGameDelegates::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<AGameMode>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar5->PostCommitMapChangeDelegate,(AGameMode *)&local_res8,(pmf_7af7c568)this);
  pFVar5 = FGameDelegates::Get();
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,UNetDriver_*),FDefaultDelegateUserPolicy>::
  AddUObject<AGameMode>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,UNetDriver_*),FDefaultDelegateUserPolicy>
              *)&pFVar5->HandleDisconnectDelegate,(AGameMode *)&local_res8,(pmf_6b5eee03)this);
  return;
}

// InitSeamlessTravelPlayer @ 147befcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameMode::InitSeamlessTravelPlayer(AGameMode *this,AController *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  AGameModeBase::InitSeamlessTravelPlayer((AGameModeBase *)this,param_1);
  if (param_1 != (AController *)0x0) {
    pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      (**(code **)(this->_padding_ + 0xa10))(this,param_1);
      bVar2 = AGameModeBase::MustSpectate((AGameModeBase *)this,(APlayerController *)param_1);
      if (bVar2) {
        return;
      }
      this->NumPlayers = this->NumPlayers + 1;
      this->NumTravellingPlayers = this->NumTravellingPlayers + -1;
      return;
    }
  }
  this->NumBots = this->NumBots + 1;
  return;
}

// IsHandlingReplays @ 147bf0fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AGameMode::IsHandlingReplays(AGameMode *this)

{
  bool bVar1;
  ENetMode EVar2;
  UWorld *pUVar3;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 != (UWorld *)0x0) {
    pUVar3 = AActor::GetWorld((AActor *)this);
    bVar1 = UWorld::IsPlayInEditor(pUVar3);
    if (bVar1) {
      return false;
    }
  }
  if ((this->bHandleDedicatedServerReplays != false) &&
     (EVar2 = AActor::InternalGetNetMode((AActor *)this), EVar2 == NM_DedicatedServer)) {
    return true;
  }
  return false;
}

// IsMatchInProgress @ 147bf1060

bool __thiscall AGameMode::IsMatchInProgress(AGameMode *this)

{
  return this->MatchState == MatchState::InProgress;
}

// K2_OnSetMatchState @ 147bf1800

void __thiscall AGameMode::K2_OnSetMatchState(AGameMode *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameMode_K2_OnSetMatchState);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Logout @ 147bf1c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall AGameMode::Logout(AGameMode *this,AController *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UWorld *this_00;
  
  if (param_1 == (AController *)0x0) goto LAB_147bf1cd3;
  pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_)) goto LAB_147bf1cd3;
  bVar2 = AGameModeBase::MustSpectate((AGameModeBase *)this,(APlayerController *)param_1);
  if (bVar2) {
    this->NumSpectators = this->NumSpectators + -1;
  }
  else {
    this_00 = AActor::GetWorld((AActor *)this);
    bVar2 = UWorld::IsInSeamlessTravel(this_00);
    if (!bVar2) {
      bVar2 = APlayerController::HasClientLoadedCurrentWorld((APlayerController *)param_1);
      if (!bVar2) {
        this->NumTravellingPlayers = this->NumTravellingPlayers + -1;
        goto LAB_147bf1cbd;
      }
    }
    this->NumPlayers = this->NumPlayers + -1;
  }
LAB_147bf1cbd:
  (**(code **)(this->_padding_ + 0x9f8))(this,(param_1->PlayerState).field0_0x0.DebugPtr,param_1);
LAB_147bf1cd3:
  AGameModeBase::Logout((AGameModeBase *)this,param_1);
  return;
}

// NotifyPendingConnectionLost @ 147bf4e80

void __thiscall AGameMode::NotifyPendingConnectionLost(AGameMode *this,FUniqueNetIdRepl *param_1)

{
  return;
}

// OnMatchStateSet @ 147bf5d50

void __thiscall AGameMode::OnMatchStateSet(AGameMode *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FGameModeEvents::GameModeMatchStateSetEvent,(FWriteAccessScope *)&local_38);
  bVar3 = false;
  FGameModeEvents::GameModeMatchStateSetEvent._28_4_ =
       FGameModeEvents::GameModeMatchStateSetEvent._28_4_ + 1;
  uVar7 = FGameModeEvents::GameModeMatchStateSetEvent._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)FGameModeEvents::GameModeMatchStateSetEvent._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + FGameModeEvents::GameModeMatchStateSetEvent._8_8_) == 0) ||
          (*(longlong **)(lVar8 + FGameModeEvents::GameModeMatchStateSetEvent._8_8_) ==
           (longlong *)0x0)) ||
         (cVar5 = (**(code **)(**(longlong **)
                                 (lVar8 + FGameModeEvents::GameModeMatchStateSetEvent._8_8_) + 0x68)
                  )(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  FGameModeEvents::GameModeMatchStateSetEvent._28_4_ =
       FGameModeEvents::GameModeMatchStateSetEvent._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FGameModeEvents::GameModeMatchStateSetEvent,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  FVar1 = this->MatchState;
  if (FVar1 == MatchState::WaitingToStart) {
                    /* WARNING: Could not recover jumptable at 0x000147bf5eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x9a8))(this);
    return;
  }
  if (FVar1 == MatchState::InProgress) {
                    /* WARNING: Could not recover jumptable at 0x000147bf5ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x9b0))(this);
    return;
  }
  if (FVar1 == MatchState::WaitingPostMatch) {
                    /* WARNING: Could not recover jumptable at 0x000147bf5ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x9b8))(this);
    return;
  }
  if (FVar1 == MatchState::LeavingMap) {
                    /* WARNING: Could not recover jumptable at 0x000147bf5efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x9c0))(this);
    return;
  }
  if (FVar1 != MatchState::Aborted) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147bf5f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x9c8))(this);
  return;
}

// OverridePlayerState @ 147bf6af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
AGameMode::OverridePlayerState(AGameMode *this,APlayerController *param_1,APlayerState *param_2)

{
  APlayerState::DispatchOverrideWith((APlayerState *)param_1->_padding_,param_2);
  return;
}

// PlayerCanRestart_Implementation @ 147bf6c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
AGameMode::PlayerCanRestart_Implementation(AGameMode *this,APlayerController *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x970))();
  if (cVar1 == '\0') {
    return false;
  }
  bVar2 = AGameModeBase::PlayerCanRestart_Implementation((AGameModeBase *)this,param_1);
  return bVar2;
}

// PlayerSwitchedToSpectatorOnly @ 147bf6c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameMode::PlayerSwitchedToSpectatorOnly(AGameMode *this,APlayerController *param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if (param_1 == (APlayerController *)0x0) {
    this->NumSpectators = this->NumSpectators + 1;
    return;
  }
  bVar1 = AGameModeBase::MustSpectate((AGameModeBase *)this,param_1);
  if (bVar1) {
    this->NumSpectators = this->NumSpectators + -1;
    this->NumSpectators = this->NumSpectators + 1;
    return;
  }
  this_00 = AActor::GetWorld((AActor *)this);
  bVar1 = UWorld::IsInSeamlessTravel(this_00);
  if (!bVar1) {
    bVar1 = APlayerController::HasClientLoadedCurrentWorld(param_1);
    if (!bVar1) {
      this->NumTravellingPlayers = this->NumTravellingPlayers + -1;
      this->NumSpectators = this->NumSpectators + 1;
      return;
    }
  }
  this->NumPlayers = this->NumPlayers + -1;
  this->NumSpectators = this->NumSpectators + 1;
  return;
}

// PostCommitMapChange @ 147bf6d10

void __thiscall AGameMode::PostCommitMapChange(AGameMode *this)

{
  return;
}

// PostLogin @ 147bf6e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameMode::PostLogin(AGameMode *this,APlayerController *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UWorld *this_00;
  int iVar6;
  ForAnyElementType FVar7;
  FString *pFVar8;
  FString *pFVar9;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = AActor::GetWorld((AActor *)this);
  bVar4 = AGameModeBase::MustSpectate((AGameModeBase *)this,param_1);
  if (bVar4) {
    this->NumSpectators = this->NumSpectators + 1;
  }
  else {
    bVar4 = UWorld::IsInSeamlessTravel(this_00);
    if (!bVar4) {
      bVar4 = APlayerController::HasClientLoadedCurrentWorld(param_1);
      if (!bVar4) {
        this->NumTravellingPlayers = this->NumTravellingPlayers + 1;
        goto LAB_147bf6ece;
      }
    }
    this->NumPlayers = this->NumPlayers + 1;
  }
LAB_147bf6ece:
  APlayerController::GetPlayerNetworkAddress(param_1,&local_38);
  bVar3 = true;
  bVar4 = false;
  iVar5 = ::FString::Find(&local_38,L":",1,CaseSensitive,FromStart,-1);
  FVar7.Data = local_38.Data.AllocatorInstance.Data;
  if (iVar5 < 1) {
    bVar3 = false;
    bVar4 = true;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,FVar7.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    pFVar8 = &local_48;
  }
  else {
    iVar6 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar7.Data,iVar5);
    pFVar8 = &local_28;
  }
  lVar1 = param_1->_padding_;
  pFVar9 = (FString *)(lVar1 + 0x310);
  if (pFVar9 != pFVar8) {
    pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar9->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar1 + 0x318) = (pFVar8->Data).ArrayNum;
    *(int *)(lVar1 + 0x31c) = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (bVar4) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0xa00))(this,param_1);
  AGameModeBase::PostLogin((AGameModeBase *)this,param_1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// PostSeamlessTravel @ 147bf7060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::PostSeamlessTravel(AGameMode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  APlayerController *this_00;
  code *pcVar3;
  TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UWorld *this_01;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  APlayerController *local_res10;
  UObject *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<AController,FWeakObjectPtr>_const_,int>
  local_40;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x7e8))();
  }
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  this_01 = AActor::GetWorld((AActor *)this);
  UWorld::GetControllerIterator(this_01,&local_40);
  for (; (iVar7 = local_40.Index, pTVar4 = local_40.Container, -1 < local_40.Index &&
         (local_40.Index < (local_40.Container)->ArrayNum)); local_40.Index = local_40.Index + 1) {
    uVar6 = 0;
    if (local_40.Index < (local_40.Container)->ArrayNum) {
      uVar6 = (uint)~local_40.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_58 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar4->AllocatorInstance).Data + (longlong)iVar7 * 8));
    if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (int)local_48;
    if ((int)local_48 == local_48._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_50,(int *)((longlong)&local_48 + 4));
    }
    local_48 = CONCAT44(local_48._4_4_,iVar7 + 1);
    *(UObject **)(local_50.Data + (longlong)iVar7 * 8) = local_58;
  }
  iVar7 = (int)local_48;
  pFVar1 = local_50.Data + (longlong)(int)local_48 * 8;
  FVar9.Data = local_50.Data;
  do {
    if ((int)local_48 != iVar7) {
      `TCheckedPointerIterator<AController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar9.Data == pFVar1) {
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      return;
    }
    this_00 = *(APlayerController **)FVar9.Data;
    local_res10 = this_00;
    if (this_00->_padding_ != 0) {
      pUVar8 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if (((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar8->_padding_)) && (this_00 != (APlayerController *)0x0)) {
        bVar5 = AGameModeBase::MustSpectate((AGameModeBase *)this,this_00);
        if (bVar5) {
          this->NumSpectators = this->NumSpectators + 1;
        }
        else {
          this->NumTravellingPlayers = this->NumTravellingPlayers + 1;
        }
        bVar5 = APlayerController::HasClientLoadedCurrentWorld(this_00);
        if (!bVar5) goto LAB_147bf725c;
      }
      (**(code **)(this->_padding_ + 0x858))(this,&local_res10);
    }
LAB_147bf725c:
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// PreCommitMapChange @ 147bf7290

void __thiscall AGameMode::PreCommitMapChange(AGameMode *this,FString *param_1,FString *param_2)

{
  return;
}

// ReadyToEndMatch @ 147bf9810

bool __thiscall AGameMode::ReadyToEndMatch(AGameMode *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameMode_ReadyToEndMatch);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000147bf9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x960))(this);
  return (bool)uVar1;
}

// ReadyToEndMatch_Implementation @ 147bf9890

bool __thiscall AGameMode::ReadyToEndMatch_Implementation(AGameMode *this)

{
  return false;
}

// ReadyToStartMatch @ 147bf98a0

bool __thiscall AGameMode::ReadyToStartMatch(AGameMode *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameMode_ReadyToStartMatch);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000147bf9904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x968))(this);
  return (bool)uVar1;
}

// ReadyToStartMatch_Implementation @ 147bf9920

bool __thiscall AGameMode::ReadyToStartMatch_Implementation(AGameMode *this)

{
  if ((this->bDelayedStart == 0) && (this->MatchState == MatchState::WaitingToStart)) {
    return 0 < this->NumBots + this->NumPlayers;
  }
  return false;
}

// RemovePlayerControllerFromPlayerCount @ 147bfd540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AGameMode::RemovePlayerControllerFromPlayerCount(AGameMode *this,APlayerController *param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if (param_1 != (APlayerController *)0x0) {
    bVar1 = AGameModeBase::MustSpectate((AGameModeBase *)this,param_1);
    if (bVar1) {
      this->NumSpectators = this->NumSpectators + -1;
      return;
    }
    this_00 = AActor::GetWorld((AActor *)this);
    bVar1 = UWorld::IsInSeamlessTravel(this_00);
    if (!bVar1) {
      bVar1 = APlayerController::HasClientLoadedCurrentWorld(param_1);
      if (!bVar1) {
        this->NumTravellingPlayers = this->NumTravellingPlayers + -1;
        return;
      }
    }
    this->NumPlayers = this->NumPlayers + -1;
  }
  return;
}

// RestartGame @ 147bfe0e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::RestartGame(AGameMode *this)

{
  char cVar1;
  bool bVar2;
  UWorld *this_00;
  FString local_18;
  
  cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x848))();
  if ((cVar1 != '\0') && (this->MatchState != MatchState::LeavingMap)) {
    this_00 = AActor::GetWorld((AActor *)this);
    bVar2 = (bool)(**(code **)(this->_padding_ + 0x9d8))(this);
    ::FString::FString(&local_18,"?Restart");
    UWorld::ServerTravel(this_00,&local_18,bVar2,false);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Say @ 147bfe8e0

void __thiscall AGameMode::Say(AGameMode *this,FString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147bfe8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x9e8))(this,0,param_1,0);
  return;
}

// SetMatchState @ 147c011a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AGameMode::SetMatchState(AGameMode *this,FName param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if (this->MatchState != param_1) {
    local_res10 = param_1;
    if (3 < (byte)LogGameMode._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      ::FName::ToString(&this->MatchState,&local_38);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    FMoviePlayerProxy::BlockingStarted();
    this->MatchState = local_res10;
    (**(code **)(this->_padding_ + 0x9a0))(this);
    if (this->_padding_ != 0) {
      pUVar2 = Z_Construct_UClass_AGameState_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
      if ((bVar1) && ((AGameState *)this->_padding_ != (AGameState *)0x0)) {
        AGameState::SetMatchState((AGameState *)this->_padding_,local_res10);
      }
    }
    local_res8 = local_res10;
    pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameMode_K2_OnSetMatchState);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_res8);
    FMoviePlayerProxy::BlockingFinished();
  }
  return;
}

// SetSeamlessTravelViewTarget @ 147c01c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AGameMode::SetSeamlessTravelViewTarget(AGameMode *this,APlayerController *param_1)

{
  undefined4 local_18;
  undefined1 uStack_14;
  undefined3 uStack_13;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = uStack_c & 0xfffffffe;
  _uStack_14 = CONCAT31(uStack_13,1);
  local_18 = 0;
  uStack_10 = 0x40000000;
  (**(code **)(param_1->_padding_ + 0xef8))(param_1,param_1,&local_18);
  return;
}

// SpawnPlayerFromSimulate @ 147c02400

bool __thiscall
AGameMode::SpawnPlayerFromSimulate
          (AGameMode *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  return true;
}

// StartMatch @ 147c03020

void __thiscall AGameMode::StartMatch(AGameMode *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x7f0))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x828))();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c0305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x998))(this,MatchState::InProgress);
      return;
    }
  }
  return;
}

// StartPlay @ 147c03070

void __thiscall AGameMode::StartPlay(AGameMode *this)

{
  bool bVar1;
  
  if (this->MatchState == MatchState::EnteringMap) {
    (**(code **)(this->_padding_ + 0x998))(this,MatchState::WaitingToStart);
  }
  if (this->MatchState == MatchState::WaitingToStart) {
    bVar1 = ReadyToStartMatch(this);
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000147c030c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x978))(this);
      return;
    }
  }
  return;
}

// StartToLeaveMap @ 147c03170

void __thiscall AGameMode::StartToLeaveMap(AGameMode *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147c0317a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x998))(this,MatchState::LeavingMap);
  return;
}

// StaticRegisterNativesAGameMode @ 147c03420

void __cdecl AGameMode::StaticRegisterNativesAGameMode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_AGameMode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 147c03c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGameMode::Tick(AGameMode *this,float param_1)

{
  bool bVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char cVar3;
  char local_res8 [8];
  
  AActor::Tick((AActor *)this,param_1);
  if (this->MatchState == MatchState::WaitingToStart) {
    bVar1 = ReadyToStartMatch(this);
    if (bVar1) {
      if (4 < (byte)LogGameMode._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      }
      (**(code **)(this->_padding_ + 0x978))(this);
    }
  }
  if (this->MatchState == MatchState::InProgress) {
    this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_AGameMode_ReadyToEndMatch);
    pUVar2 = UField::GetOwnerClass((UField *)this_00);
    if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
      local_res8[0] = '\0';
      (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res8);
      cVar3 = local_res8[0] != '\0';
    }
    else {
      cVar3 = (**(code **)(this->_padding_ + 0x960))(this);
    }
    if (cVar3 != '\0') {
      if (4 < (byte)LogGameMode._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGameMode);
      }
                    /* WARNING: Could not recover jumptable at 0x000147c03ce9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x980))(this);
      return;
    }
  }
  return;
}

// execAbortMatch @ 147c12280

void __cdecl AGameMode::execAbortMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c12298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x990))();
  return;
}

// execEndMatch @ 147c13a90

void __cdecl AGameMode::execEndMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c13aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x980))();
  return;
}

// execGetMatchState @ 147c14200

void __cdecl AGameMode::execGetMatchState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x15].field_0x10;
  return;
}

// execIsMatchInProgress @ 147c14810

void __cdecl AGameMode::execIsMatchInProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x970))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execReadyToEndMatch @ 147c14f60

void __cdecl AGameMode::execReadyToEndMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x960))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execReadyToStartMatch @ 147c14fa0

void __cdecl AGameMode::execReadyToStartMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x968))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRestartGame @ 147c15550

void __cdecl AGameMode::execRestartGame(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c15568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x988))();
  return;
}

// execSay @ 147c155c0

void __cdecl AGameMode::execSay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x9e0))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execStartMatch @ 147c16650

void __cdecl AGameMode::execStartMatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c16668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x978))();
  return;
}

