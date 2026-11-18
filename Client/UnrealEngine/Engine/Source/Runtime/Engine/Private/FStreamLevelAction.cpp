// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FStreamLevelAction @ 147e54da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStreamLevelAction * __thiscall
FStreamLevelAction::FStreamLevelAction
          (FStreamLevelAction *this,bool param_1,FName *param_2,bool param_3,bool param_4,
          FLatentActionInfo *param_5,UWorld *param_6)

{
  UObject *pUVar1;
  ULevelStreaming *pUVar2;
  
  this->bLoading = param_1;
  this->_padding_ = (longlong)&___7FStreamLevelAction__6B_;
  this->bShouldBlock = param_4;
  (this->Level).WeakPtr = (FWeakObjectPtr)0x0;
  this->bMakeVisibleAfterLoad = param_3;
  this->LevelName = *param_2;
  (this->LatentInfo).Linkage = param_5->Linkage;
  (this->LatentInfo).UUID = param_5->UUID;
  (this->LatentInfo).ExecutionFunction = param_5->ExecutionFunction;
  pUVar1 = (param_5->CallbackTarget).field0_0x0.DebugPtr;
  (this->LatentInfo).CallbackTarget.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar2 = FindAndCacheLevelStreamingObject(this->LevelName,param_6);
  param_5 = (FLatentActionInfo *)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (ULevelStreaming *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=(&(this->Level).WeakPtr,(FObjectPtr)&param_5);
  ActivateLevel(this,pUVar2);
  return this;
}

// ActivateLevel @ 147e5a7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FStreamLevelAction::ActivateLevel(FStreamLevelAction *this,ULevelStreaming *param_1)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  UWorld *this_00;
  APlayerController *this_01;
  byte bVar10;
  FName local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  FString local_48;
  
  if (param_1 == (ULevelStreaming *)0x0) {
    if (2 < (byte)LogLevel._0_1_) {
      ::FName::ToString(&this->LevelName,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    if (this->bLoading == false) {
      if (4 < (byte)LogStreaming._0_1_) {
        pFVar9 = (FName *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_58);
        ::FName::ToString(pFVar9,&local_78);
        local_res18 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res18,&local_88);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      ULevelStreaming::SetShouldBeVisible(param_1,false);
      bVar4 = param_1->field_0x122;
      bVar10 = (this->bShouldBlock << 3 ^ bVar4) & 8;
    }
    else {
      if (4 < (byte)LogStreaming._0_1_) {
        pFVar9 = (FName *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_res20);
        ::FName::ToString(pFVar9,&local_98);
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_a8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      if ((param_1->bShouldBeVisible == '\0') && (this->bMakeVisibleAfterLoad == false)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      ULevelStreaming::SetShouldBeVisible(param_1,bVar5);
      bVar4 = param_1->field_0x122;
      bVar10 = (this->bShouldBlock << 2 ^ bVar4) & 4;
    }
    param_1->field_0x122 = bVar10 ^ bVar4;
    bVar5 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((!bVar5) &&
       (this_00 = CastChecked<UWorld,UObject>((UObject *)param_1->_padding_),
       this_00 != (UWorld *)0x0)) {
      bVar5 = (bool)(**(code **)(param_1->_padding_ + 0x2e8))(param_1);
      bVar6 = (bool)(**(code **)(param_1->_padding_ + 0x2f0))(param_1);
      if (4 < (byte)LogLevel._0_1_) {
        pFVar9 = (FName *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_50);
        ::FName::ToString(pFVar9,&local_68);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevel);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      UWorld::GetPlayerControllerIterator(this_00,&local_b8);
      for (; (iVar3 = local_b8.Index, pTVar2 = local_b8.Container, -1 < local_b8.Index &&
             (local_b8.Index < (local_b8.Container)->ArrayNum)); local_b8.Index = local_b8.Index + 1
          ) {
        uVar8 = 0;
        if (local_b8.Index < (local_b8.Container)->ArrayNum) {
          uVar8 = (uint)~local_b8.Index >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = (APlayerController *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
        if (this_01 != (APlayerController *)0x0) {
          APlayerController::LevelStreamingStatusChanged
                    (this_01,param_1,bVar5,bVar6,this->bShouldBlock,this->bShouldBlock,-1);
        }
      }
    }
  }
  return;
}

// FindAndCacheLevelStreamingObject @ 147e654b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreaming * __cdecl
FStreamLevelAction::FindAndCacheLevelStreamingObject(FName param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  ULevelStreaming *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString *pFVar5;
  FName *this;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  FName local_res8;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar9 = false;
  iVar8 = 0;
  local_res18[0] = 0;
  if (param_1 != (FName)0x0) {
    local_res8 = param_1;
    if ((param_2->StreamingLevelsPrefix).Data.ArrayNum < 2) {
      ::FName::ToString(&local_res8,&local_88);
    }
    else {
      FPackageName::GetShortName(&local_98,&local_res8);
      iVar10 = (param_2->StreamingLevelsPrefix).Data.ArrayNum;
      if (iVar10 == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_2->StreamingLevelsPrefix).Data.AllocatorInstance.Data;
        iVar8 = iVar10 + -1;
      }
      bVar4 = ::FString::StartsWith(&local_98,pwVar6,iVar8,IgnoreCase);
      if (!bVar4) {
        ::FString::ConcatFF(&local_78,&param_2->StreamingLevelsPrefix,&local_98);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        local_98.Data.ArrayNum = local_78.Data.ArrayNum;
        local_98.Data.ArrayMax = local_78.Data.ArrayMax;
      }
      bVar4 = FPackageName::IsShortPackageName(local_res8);
      if (!bVar4) {
        pFVar5 = ::FName::ToString(&local_res8,&local_48);
        pFVar5 = FPackageName::GetLongPackagePath(&local_58,pFVar5);
        ::FString::ConcatFC(&local_68,pFVar5,L"/");
        ::FString::ConcatFF(&local_78,&local_68,&local_98);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        local_98.Data.ArrayNum = local_78.Data.ArrayNum;
        local_98.Data.ArrayMax = local_78.Data.ArrayMax;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      local_88.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = local_98.Data.ArrayNum;
      local_88.Data.ArrayMax = local_98.Data.ArrayMax;
    }
    bVar4 = FPackageName::IsShortPackageName(&local_88);
    if (bVar4) {
      ::FString::ConcatCF(&local_78,L"/",&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = local_78.Data.ArrayNum;
      local_88.Data.ArrayMax = local_78.Data.ArrayMax;
    }
    pFVar7 = (param_2->StreamingLevels).AllocatorInstance.Data;
    iVar8 = (param_2->StreamingLevels).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar8 * 8;
    while( true ) {
      if ((param_2->StreamingLevels).ArrayNum != iVar8) {
        `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar7 == pFVar1) break;
      pUVar2 = *(ULevelStreaming **)pFVar7;
      if (pUVar2 == (ULevelStreaming *)0x0) {
LAB_147e656f5:
        bVar4 = false;
      }
      else {
        bVar9 = true;
        this = (FName *)(**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,local_res20);
        ::FName::ToString(this,&local_68);
        iVar10 = local_88.Data.ArrayNum + -1;
        FVar3.Data = local_88.Data.AllocatorInstance.Data;
        if (local_88.Data.ArrayNum == 0) {
          iVar10 = 0;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        bVar4 = ::FString::EndsWith(&local_68,(wchar_t *)FVar3.Data,iVar10,IgnoreCase);
        if (!bVar4) goto LAB_147e656f5;
        bVar4 = true;
      }
      if ((bVar9) &&
         (bVar9 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pUVar2;
        }
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        return pUVar2;
      }
      pFVar7 = pFVar7 + 8;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return (ULevelStreaming *)0x0;
}

// MakeSafeLevelName @ 147e705e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
FStreamLevelAction::MakeSafeLevelName
          (FString *__return_storage_ptr__,FName *param_1,UWorld *param_2)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_2->StreamingLevelsPrefix).Data.ArrayNum < 2) {
    ::FName::ToString(param_1,__return_storage_ptr__);
  }
  else {
    FPackageName::GetShortName(&local_58,param_1);
    iVar1 = (param_2->StreamingLevelsPrefix).Data.ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_2->StreamingLevelsPrefix).Data.AllocatorInstance.Data;
    }
    bVar2 = ::FString::StartsWith(&local_58,pwVar4,iVar5,IgnoreCase);
    if (!bVar2) {
      ::FString::ConcatFF(&local_48,&param_2->StreamingLevelsPrefix,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_58.Data.ArrayNum = local_48.Data.ArrayNum;
      local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    }
    bVar2 = FPackageName::IsShortPackageName(*param_1);
    if (!bVar2) {
      pFVar3 = ::FName::ToString(param_1,&local_18);
      pFVar3 = FPackageName::GetLongPackagePath(&local_28,pFVar3);
      ::FString::ConcatFC(&local_38,pFVar3,L"/");
      ::FString::ConcatFF(&local_48,&local_38,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_58.Data.ArrayNum = local_48.Data.ArrayNum;
      local_58.Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// UpdateLevel @ 147e83ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FStreamLevelAction::UpdateLevel(FStreamLevelAction *this,ULevelStreaming *param_1)

{
  char cVar1;
  
  if ((param_1 != (ULevelStreaming *)0x0) &&
     (((param_1->LoadedLevel).field0_0x0.DebugPtr != (ULevel *)0x0 ||
      (cVar1 = (**(code **)(param_1->_padding_ + 0x2e8))(param_1), cVar1 != '\0')))) {
    if ((param_1->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0) {
      return false;
    }
    cVar1 = (**(code **)(param_1->_padding_ + 0x2e8))(param_1);
    if ((cVar1 != '\0') || (GUseBackgroundLevelStreaming != 0)) {
      if ((param_1->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0) {
        return false;
      }
      cVar1 = (**(code **)(param_1->_padding_ + 0x2e8))(param_1);
      if (cVar1 == '\0') {
        return false;
      }
      if (this->bMakeVisibleAfterLoad != false) {
        return ((param_1->LoadedLevel).field0_0x0.DebugPtr)->bIsVisible;
      }
    }
  }
  return true;
}

// UpdateOperation @ 147e84170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamLevelAction::UpdateOperation(FStreamLevelAction *this,FLatentResponse *param_1)

{
  char cVar1;
  UObject *pUVar2;
  bool bVar3;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FString local_28;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->Level).WeakPtr);
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ::FName::ToString(&this->LevelName,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (pUVar2 == (UObject *)0x0) {
    pUVar2 = (this->LatentInfo).CallbackTarget.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,(this->LatentInfo).ExecutionFunction,(this->LatentInfo).Linkage,
               local_res8);
    return;
  }
  if (*(longlong *)&pUVar2[10].field_0x20 == 0) {
    cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2);
    if (cVar1 == '\0') {
      bVar3 = true;
      goto LAB_147e84271;
    }
    if (*(longlong *)&pUVar2[10].field_0x20 != 0) goto LAB_147e8421c;
  }
  else {
LAB_147e8421c:
    cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2);
    if ((cVar1 == '\0') && (GUseBackgroundLevelStreaming == 0)) {
      bVar3 = true;
      goto LAB_147e84271;
    }
    if (((*(longlong *)&pUVar2[10].field_0x20 != 0) &&
        (cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2), cVar1 != '\0')) &&
       ((this->bMakeVisibleAfterLoad == false ||
        ((*(byte *)(*(longlong *)&pUVar2[10].field_0x20 + 0x240) & 0x20) != 0)))) {
      bVar3 = true;
      goto LAB_147e84271;
    }
  }
  bVar3 = false;
LAB_147e84271:
  pUVar2 = (this->LatentInfo).CallbackTarget.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  FLatentResponse::FinishAndTriggerIf
            (param_1,bVar3,(this->LatentInfo).ExecutionFunction,(this->LatentInfo).Linkage,
             local_res8);
  return;
}

