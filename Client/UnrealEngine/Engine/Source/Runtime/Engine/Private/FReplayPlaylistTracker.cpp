// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FReplayPlaylistTracker @ 14808a5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FReplayPlaylistTracker * __thiscall
FReplayPlaylistTracker::FReplayPlaylistTracker
          (FReplayPlaylistTracker *this,FReplayPlaylistParams *param_1,UGameInstance *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FReplayPlaylistTracker *pFVar8;
  int iVar9;
  TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_>_u_0 *pTVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  UWorld *pUVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  UWorld *local_res8;
  UGameInstance *local_res10;
  FString local_58;
  TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_>_u_0 local_48;
  
  pUVar13 = (UWorld *)0x0;
  pTVar1 = &this->Playlist;
  this->_padding_ = 0;
  piVar2 = &(this->Playlist).ArrayMax;
  this->_padding_ = 0;
  this->bIsStartingReplay = false;
  uVar14 = 0;
  this->CurrentReplay = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = (param_1->Playlist).ArrayNum;
  pFVar16 = (param_1->Playlist).AllocatorInstance.Data;
  (this->Playlist).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar16,iVar9);
  }
  iVar9 = (param_1->InitialOptions).NewAdditionalOptions.field0_0x0.TypedValue.ArrayMax;
  pTVar3 = &this->AdditionalOptions;
  local_48.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar10 = &local_48;
  if (iVar9 != -1) {
    pTVar10 = &(param_1->InitialOptions).NewAdditionalOptions.field0_0x0;
  }
  local_48._8_8_ = 0;
  piVar2 = &(this->AdditionalOptions).ArrayMax;
  iVar9 = (pTVar10->TypedValue).ArrayNum;
  pFVar16 = (((TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_>_u_0 *)
             &(pTVar10->TypedValue).AllocatorInstance)->TypedValue).AllocatorInstance.Data;
  (this->AdditionalOptions).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&pTVar3->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FString,FString,int>((pTVar3->AllocatorInstance).Data,(FString *)pFVar16,iVar9);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  if ((param_1->InitialOptions).NewWorldOverride.bIsSet != false) {
    pUVar13 = (param_1->InitialOptions).NewWorldOverride.TypedValue;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->WorldOverride).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  FWeakObjectPtr::operator=(&(this->WorldOverride).WeakPtr,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UGameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->GameInstance).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UGameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->GameInstance).WeakPtr,(FObjectPtr)&local_res10);
  (this->DemoNetDriver).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OnDemoPlaybackFailedHandle).ID = 0;
  (this->OnDemoPlaybackFinishedHandle).ID = 0;
  (this->OnDemoStoppedHandle).ID = 0;
  TDelegate<void___cdecl(FReplayPlaylistTracker_const_&,FReplayPlaylistUpdatedOptions_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(FReplayPlaylistTracker_const_&,FReplayPlaylistUpdatedOptions_&),FDefaultDelegateUserPolicy>
            (&this->PreStartNextReplay,&param_1->PreStartNextPlaylistReplayDelegate);
  ::FString::FString(&local_58,L"\"");
  uVar12 = (this->Playlist).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar15 = (longlong)(int)uVar12 << 4;
    do {
      uVar6 = uVar14;
      if ((int)uVar12 < (this->Playlist).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FReplayPlaylistTracker *)(*pcVar4)();
        return pFVar8;
      }
      pFVar16 = (pTVar1->AllocatorInstance).Data + lVar15;
      ::FString::TrimStartAndEndInline((FString *)pFVar16);
      uVar6 = local_58.Data.ArrayNum - 1;
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.ArrayNum == 0) {
        uVar6 = uVar14;
        FVar11.Data = (FScriptContainerElement *)L"";
      }
      ::FString::StartsWith((FString *)pFVar16,(wchar_t *)FVar11.Data,uVar6,IgnoreCase);
      uVar6 = local_58.Data.ArrayNum - 1;
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.ArrayNum == 0) {
        uVar6 = uVar14;
        FVar11.Data = (FScriptContainerElement *)L"";
      }
      ::FString::EndsWith((FString *)pFVar16,(wchar_t *)FVar11.Data,uVar6,IgnoreCase);
      iVar9 = local_58.Data.ArrayNum;
      FVar11.Data = (FScriptContainerElement *)L"";
      if (iVar9 != 0) {
        FVar11.Data = local_58.Data.AllocatorInstance.Data;
      }
      uVar7 = 0;
      uVar6 = iVar9 - 1;
      if (iVar9 == 0) {
        uVar6 = uVar7;
      }
      bVar5 = ::FString::RemoveFromStart((FString *)pFVar16,(wchar_t *)FVar11.Data,uVar6,IgnoreCase)
      ;
      if (bVar5) {
LAB_14808a8d5:
        if (4 < (byte)LogDemo._0_1_) {
          uVar6 = uVar7;
          if ((int)uVar12 < (param_1->Playlist).ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FReplayPlaylistTracker *)(*pcVar4)();
            return pFVar8;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
      }
      else {
        uVar6 = local_58.Data.ArrayNum - 1;
        FVar11.Data = local_58.Data.AllocatorInstance.Data;
        if (local_58.Data.ArrayNum == 0) {
          uVar6 = uVar7;
          FVar11.Data = (FScriptContainerElement *)L"";
        }
        bVar5 = ::FString::RemoveFromEnd((FString *)pFVar16,(wchar_t *)FVar11.Data,uVar6,IgnoreCase)
        ;
        if (bVar5) goto LAB_14808a8d5;
      }
      ::FString::TrimStartAndEndInline((FString *)pFVar16);
      uVar6 = *(int *)(pFVar16 + 8) - 1;
      if (*(int *)(pFVar16 + 8) == 0) {
        uVar6 = uVar7;
      }
      if (uVar6 == 0) {
        if (4 < (byte)LogDemo._0_1_) {
          uVar6 = uVar7;
          if ((int)uVar12 < (param_1->Playlist).ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FReplayPlaylistTracker *)(*pcVar4)();
            return pFVar8;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        if ((int)uVar12 < (this->Playlist).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FReplayPlaylistTracker *)(*pcVar4)();
          return pFVar8;
        }
        pFVar16 = (pTVar1->AllocatorInstance).Data + lVar15;
        if (*(void **)pFVar16 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar16);
        }
        iVar9 = ~uVar12 + (this->Playlist).ArrayNum;
        if (iVar9 != 0) {
          memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar9 << 4);
        }
        piVar2 = &(this->Playlist).ArrayNum;
        *piVar2 = *piVar2 + -1;
      }
      lVar15 = lVar15 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  if (((this->Playlist).ArrayNum == 0) && (2 < (byte)LogDemo._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return this;
}

// OnDemoPlaybackFailed @ 1480b9f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FReplayPlaylistTracker::OnDemoPlaybackFailed
          (FReplayPlaylistTracker *this,UWorld *param_1,TNetResult<EReplayResult> *param_2)

{
  UWorld *pUVar1;
  UGameInstance *this_00;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldOverride).WeakPtr);
  if (pUVar1 == (UWorld *)0x0) {
    this_00 = (UGameInstance *)FWeakObjectPtr::Get(&(this->GameInstance).WeakPtr);
    pUVar1 = UGameInstance::GetWorld(this_00);
  }
  if (pUVar1 == param_1) {
    Quit(this);
  }
  return;
}

// OnDemoPlaybackFinished @ 1480b9f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FReplayPlaylistTracker::OnDemoPlaybackFinished(FReplayPlaylistTracker *this,UWorld *param_1)

{
  UWorld *pUVar1;
  UGameInstance *this_00;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldOverride).WeakPtr);
  if (pUVar1 == (UWorld *)0x0) {
    this_00 = (UGameInstance *)FWeakObjectPtr::Get(&(this->GameInstance).WeakPtr);
    pUVar1 = UGameInstance::GetWorld(this_00);
  }
  if (pUVar1 == param_1) {
    PlayNextReplay(this);
  }
  return;
}

// OnDemoStopped @ 1480b9fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FReplayPlaylistTracker::OnDemoStopped(FReplayPlaylistTracker *this,UWorld *param_1)

{
  UWorld *pUVar1;
  UGameInstance *this_00;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldOverride).WeakPtr);
  if (pUVar1 == (UWorld *)0x0) {
    this_00 = (UGameInstance *)FWeakObjectPtr::Get(&(this->GameInstance).WeakPtr);
    pUVar1 = UGameInstance::GetWorld(this_00);
  }
  if (pUVar1 == param_1) {
    Quit(this);
  }
  return;
}

// PlayNextReplay @ 1480bc7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReplayPlaylistTracker::PlayNextReplay(FReplayPlaylistTracker *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UObject *local_res20;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FReadAccessScope local_88;
  UObjectBaseUtility *local_70;
  char local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60 [2];
  
  pUVar4 = FWeakObjectPtr::Get(&(this->GameInstance).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    iVar1 = (this->Playlist).ArrayNum;
    iVar7 = this->CurrentReplay + 1;
    if (iVar1 < iVar7) {
      iVar7 = iVar1;
    }
    this->CurrentReplay = iVar7;
    if (iVar1 <= iVar7) {
      return;
    }
    bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PreStartNextReplay);
    if (bVar3) {
      plVar6 = (longlong *)0x0;
      local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60[0].ArrayNum = 0;
      local_68 = '\0';
      local_60[0].ArrayMax = -1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PreStartNextReplay
                 ,&local_88);
      if (*(int *)&(this->PreStartNextReplay).field_0x10 != 0) {
        plVar6 = *(longlong **)&(this->PreStartNextReplay).field_0x8;
      }
      (**(code **)(*plVar6 + 0x60))(plVar6,this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      if (local_68 != '\0') {
        if (4 < (byte)LogDemo._0_1_) {
          pUVar4 = FWeakObjectPtr::Get(&(this->WorldOverride).WeakPtr);
          if (pUVar4 == (UObject *)0x0) {
            ::FString::FString(&local_98,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar4,&local_98,(UObject *)0x0);
          }
          if ((local_68 == '\0') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_70 == (UObjectBaseUtility *)0x0) {
            ::FString::FString(&local_a8,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName(local_70,&local_a8,(UObject *)0x0);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        if ((local_68 == '\0') &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res20 = (UObject *)local_70;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_70 != (UObjectBaseUtility *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_70);
        }
        FWeakObjectPtr::operator=(&(this->WorldOverride).WeakPtr,(FObjectPtr)&local_res20);
      }
      if (local_60[0].ArrayMax != -1) {
        if (4 < (byte)LogDemo._0_1_) {
          pFVar10 = (this->AdditionalOptions).AllocatorInstance.Data;
          bVar3 = true;
          iVar1 = (this->AdditionalOptions).ArrayNum;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          while( true ) {
            if ((this->AdditionalOptions).ArrayNum != iVar1) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (pFVar10 == pFVar9) break;
            if (bVar3) {
              bVar3 = false;
            }
            else {
              ::FString::AppendChars(&local_b8,L",",1);
            }
            iVar7 = *(int *)(pFVar10 + 8) + -1;
            if (*(int *)(pFVar10 + 8) == 0) {
              iVar7 = 0;
            }
            ::FString::AppendChars(&local_b8,*(wchar_t **)pFVar10,iVar7);
            pFVar10 = pFVar10 + 0x10;
          }
          if ((local_60[0].ArrayMax == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar1 = local_60[0].ArrayNum;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          bVar3 = true;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          uVar5 = (ulonglong)local_60[0].ArrayNum;
          pFVar10 = local_60[0].AllocatorInstance.Data + uVar5 * 0x10;
          FVar8.Data = local_60[0].AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar5 != iVar1) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (FVar8.Data == pFVar10) break;
            if (bVar3) {
              bVar3 = false;
            }
            else {
              ::FString::AppendChars(&local_c8,L",",1);
            }
            iVar7 = *(int *)(FVar8.Data + 8) + -1;
            if (*(int *)(FVar8.Data + 8) == 0) {
              iVar7 = 0;
            }
            ::FString::AppendChars(&local_c8,*(wchar_t **)FVar8.Data,iVar7);
            uVar5 = (ulonglong)(uint)local_60[0].ArrayNum;
            FVar8.Data = FVar8.Data + 0x10;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        if ((local_60[0].ArrayMax == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->AdditionalOptions,local_60);
      }
      if ((local_60[0].ArrayMax != -1) &&
         (DestructItems<FString,int>
                    ((FString *)local_60[0].AllocatorInstance.Data,local_60[0].ArrayNum),
         local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60[0].AllocatorInstance.Data);
      }
    }
    bVar3 = Start(this);
    if (bVar3) {
      return;
    }
  }
  Quit(this);
  return;
}

// Quit @ 1480bf7b0

void __thiscall FReplayPlaylistTracker::Quit(FReplayPlaylistTracker *this)

{
  FDelegateHandle FVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->DemoNetDriver).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    (this->DemoNetDriver).WeakPtr = (FWeakObjectPtr)0x0;
    FVar1.ID = (this->OnDemoPlaybackFailedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnReplayPlaybackFailure,FVar1);
    }
    FVar1.ID = (this->OnDemoPlaybackFinishedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnReplayPlaybackComplete,FVar1);
    }
    FVar1.ID = (this->OnDemoStoppedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnReplayRecordingComplete,FVar1);
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&pUVar3[0x46].field_0x8;
    *(undefined8 *)(pUVar3 + 0x46) = 0;
    *(undefined8 *)&pUVar3[0x46].field_0x8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  (this->OnDemoPlaybackFailedHandle).ID = 0;
  (this->OnDemoPlaybackFinishedHandle).ID = 0;
  (this->OnDemoStoppedHandle).ID = 0;
  if (this->bIsStartingReplay == false) {
    this->CurrentReplay = 0;
  }
  return;
}

// Reset @ 1480cc3f0

void __thiscall FReplayPlaylistTracker::Reset(FReplayPlaylistTracker *this)

{
  FDelegateHandle FVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->DemoNetDriver).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    (this->DemoNetDriver).WeakPtr = (FWeakObjectPtr)0x0;
    FVar1.ID = (this->OnDemoPlaybackFailedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnReplayPlaybackFailure,FVar1);
    }
    FVar1.ID = (this->OnDemoPlaybackFinishedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnReplayPlaybackComplete,FVar1);
    }
    FVar1.ID = (this->OnDemoStoppedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnReplayRecordingComplete,FVar1);
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&pUVar3[0x46].field_0x8;
    *(undefined8 *)(pUVar3 + 0x46) = 0;
    *(undefined8 *)&pUVar3[0x46].field_0x8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  (this->OnDemoPlaybackFailedHandle).ID = 0;
  (this->OnDemoPlaybackFinishedHandle).ID = 0;
  (this->OnDemoStoppedHandle).ID = 0;
  if (this->bIsStartingReplay == false) {
    this->CurrentReplay = 0;
  }
  return;
}

// Restart @ 1480ccf60

bool __thiscall FReplayPlaylistTracker::Restart(FReplayPlaylistTracker *this)

{
  bool bVar1;
  
  this->CurrentReplay = 0;
  bVar1 = Start(this);
  return bVar1;
}

// Start @ 1480d4e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FReplayPlaylistTracker::Start(FReplayPlaylistTracker *this)

{
  int iVar1;
  code *pcVar2;
  UDemoNetDriver *this_00;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UWorld *pUVar8;
  UGameInstance *this_01;
  UObject *pUVar9;
  TSharedRef<FReplayPlaylistTracker,1> *pTVar10;
  FDelegateHandle FVar11;
  uint uVar12;
  UDemoNetDriver *local_res8;
  undefined1 local_res10 [24];
  TSharedRef<FReplayPlaylistTracker,1> local_c8;
  code *local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  TSharedRef<FReplayPlaylistTracker,1> local_98;
  code *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  TSharedRef<FReplayPlaylistTracker,1> local_78;
  TSharedRef<FReplayPlaylistTracker,1> local_68;
  TSharedPtr<FReplayPlaylistTracker,1> local_58;
  
  iVar1 = (this->Playlist).ArrayNum;
  if ((0 < iVar1) && (this->CurrentReplay < iVar1)) {
    pUVar8 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldOverride).WeakPtr);
    if (pUVar8 == (UWorld *)0x0) {
      this_01 = (UGameInstance *)FWeakObjectPtr::Get(&(this->GameInstance).WeakPtr);
      pUVar8 = UGameInstance::GetWorld(this_01);
    }
    bVar6 = this->bIsStartingReplay;
    this->bIsStartingReplay = true;
    pUVar9 = FWeakObjectPtr::Get(&(this->GameInstance).WeakPtr);
    uVar12 = this->CurrentReplay;
    pcVar2 = *(code **)(*(longlong *)pUVar9 + 0x370);
    uVar7 = 0;
    if ((int)uVar12 < (this->Playlist).ArrayNum) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar5 = (*pcVar2)(pUVar9,(this->Playlist).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10,
                      pUVar8,&this->AdditionalOptions);
    this->bIsStartingReplay = bVar6;
    if (cVar5 != '\0') {
      TSharedFromThis<FReplayPlaylistTracker,1>::AsShared
                ((TSharedFromThis<FReplayPlaylistTracker,1> *)this,&local_c8);
      this_00 = (pUVar8->DemoNetDriver).field0_0x0.DebugPtr;
      if (this_00 == (UDemoNetDriver *)0x0) {
        if (1 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        return false;
      }
      local_res8 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&(this->DemoNetDriver).WeakPtr,(FObjectPtr)&local_res8);
      uStack_b0._0_4_ = 0;
      local_b8 = OnDemoPlaybackFailed;
      pTVar10 = TSharedFromThis<FReplayPlaylistTracker,1>::AsShared
                          ((TSharedFromThis<FReplayPlaylistTracker,1> *)this,&local_98);
      local_a8 = local_b8;
      uStack_a0 = (undefined4)uStack_b0;
      uStack_9c = uStack_b0._4_4_;
      FVar11 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,UE::Net::TNetResult<enum_EReplayResult>_const_&),FDefaultDelegateUserPolicy>
               ::AddSP<FReplayPlaylistTracker,1>
                         (&FNetworkReplayDelegates::OnReplayPlaybackFailure,
                          (TSharedRef<FReplayPlaylistTracker,1> *)local_res10,
                          (pmf_bcf38c38 *)pTVar10);
                    /* WARNING: Load size is inaccurate */
      (this->OnDemoPlaybackFailedHandle).ID = *FVar11.ID;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      uStack_b0._0_4_ = 0;
      local_b8 = OnDemoPlaybackFinished;
      pTVar10 = TSharedFromThis<FReplayPlaylistTracker,1>::AsShared
                          ((TSharedFromThis<FReplayPlaylistTracker,1> *)this,&local_78);
      local_88 = local_b8;
      uStack_80 = (undefined4)uStack_b0;
      uStack_7c = uStack_b0._4_4_;
      FVar11 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
               AddSP<FReplayPlaylistTracker,1>
                         ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                           *)&FNetworkReplayDelegates::OnReplayPlaybackComplete,
                          (TSharedRef<FReplayPlaylistTracker,1> *)(local_res10 + 8),
                          (pmf_c3be2643 *)pTVar10);
                    /* WARNING: Load size is inaccurate */
      (this->OnDemoPlaybackFinishedHandle).ID = *FVar11.ID;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
      local_b8 = OnDemoStopped;
      pTVar10 = TSharedFromThis<FReplayPlaylistTracker,1>::AsShared
                          ((TSharedFromThis<FReplayPlaylistTracker,1> *)this,&local_68);
      FVar11 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
               AddSP<FReplayPlaylistTracker,1>
                         ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                           *)&FNetworkReplayDelegates::OnReplayRecordingComplete,
                          (TSharedRef<FReplayPlaylistTracker,1> *)(local_res10 + 0x10),
                          (pmf_c3be2643 *)pTVar10);
                    /* WARNING: Load size is inaccurate */
      (this->OnDemoStoppedHandle).ID = *FVar11.ID;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      local_58.Object = local_c8.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDemoNetDriver::SetPlayingPlaylist(this_00,&local_58);
      if (4 < (byte)LogDemo._0_1_) {
        uVar12 = 0;
        if (this->CurrentReplay < (this->Playlist).ArrayNum) {
          uVar12 = (uint)~this->CurrentReplay >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      return true;
    }
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
  }
  return false;
}

