// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 17

// ~FTestPresenceInterface @ 14ecdb2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestPresenceInterface::~FTestPresenceInterface(FTestPresenceInterface *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FTestPresenceInterface__6B_;
  CleanupTest(this);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCreateSessionCompleteDelegate);
  pvVar1 = *(void **)&(this->OnCreateSessionCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCreateSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPresenceRecievedDelegate);
  pvVar1 = *(void **)&(this->OnPresenceRecievedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPresenceRecievedDelegate);
  *(undefined4 *)&(this->CachedPresence).Properties.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedPresence).Properties.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CachedPresence).Properties);
  pFVar2 = (this->CachedPresence).StatusStr.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentUser).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FOnlineFriend,1>,int>
            ((TSharedRef<FOnlineFriend,1> *)(this->FriendsCache).AllocatorInstance.Data,
             (this->FriendsCache).ArrayNum);
  pFVar2 = (this->FriendsCache).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionInt).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PresenceInt).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FriendsInt).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// CleanupTest @ 14ecde030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestPresenceInterface::CleanupTest(FTestPresenceInterface *this)

{
  IOnlinePresence *pIVar1;
  IOnlineSession *pIVar2;
  code *pcVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  FTimerManager *this_00;
  FTimerData *pFVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 uStackX_14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  pIVar1 = (this->PresenceInt).Object;
  if (pIVar1 != (IOnlinePresence *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,&this->OnPresenceRecievedDelegateHandle);
  }
  pIVar2 = (this->SessionInt).Object;
  if (pIVar2 != (IOnlineSession *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x58))(pIVar2,&this->OnCreateSessionCompleteDelegateHandle);
    if (this->bHasCreatedSession != false) {
      if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pIVar2 = (this->SessionInt).Object;
      local_38 = 0;
      local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_40.Data = (FScriptContainerElement *)0x0;
      pcVar3 = *(code **)(pIVar2->_padding_ + 0xe8);
      FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
      uStackX_14 = 0;
      local_res10 = *(undefined4 *)CONCAT44(extraout_var,FVar5.Value);
      (*pcVar3)(pIVar2,local_res10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_48,(FWriteAccessScope *)&local_30);
      if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_40.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
        local_38 = local_38 & 0xffffffff00000000;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
    }
  }
  if (this->World != (UWorld *)0x0) {
    this_00 = UWorld::GetTimerManager(this->World);
    pFVar6 = FTimerManager::FindTimer(this_00,&this->DelayedSessionPresenceWriteHandle);
    if (pFVar6 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->DelayedSessionPresenceWriteHandle).Handle);
    }
    (this->DelayedSessionPresenceWriteHandle).Handle = 0;
  }
  if (GEngine != (UEngine *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GEngine->WorldDestroyedEvent,
               this);
    return;
  }
  return;
}

// DelayedSessionPresenceWrite @ 14ece1930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestPresenceInterface::DelayedSessionPresenceWrite(FTestPresenceInterface *this)

{
  IOnlinePresence *pIVar1;
  code *pcVar2;
  bool bVar3;
  FVariantData *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  FString *local_a0;
  FVariantData *local_98;
  FString local_90;
  FVariantData local_80;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this->TasksAttempted = this->TasksAttempted | WorkingDelegate;
  local_80.Type = Empty;
  local_80.Value.AsInt64 = 0;
  local_80.Value._8_8_ = 0;
  local_80.CachedEstimatedMaxEscapedStringSize = 0;
  FVariantData::SetValue(&local_80,L"UnrealEngine");
  ::FString::FString(&local_90,L"Callsign");
  local_a0 = &local_90;
  local_98 = &local_80;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)&(this->CachedPresence).Properties,
             (TPairInitializer<FString_&&,FVariantData_const_&> *)&stack0x00000008,(bool *)&local_a0
            );
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  this_00 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
            ::FindChecked((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                           *)&(this->CachedPresence).Properties,&DefaultAppIdKey);
  FVariantData::SetValue(this_00,0x20);
  if ((this->PresenceInt).Object == (IOnlinePresence *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->PresenceInt).Object;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_48);
  local_30 = &local_b0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnPresencePushWithSessionComplete;
    puVar4[3] = this;
    if (this == (FTestPresenceInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if ((this->CurrentUser).Object == (FUniqueNetId *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*pcVar2)(pIVar1,(this->CurrentUser).Object,&this->CachedPresence,&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_60);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  FVariantData::Empty(&local_80);
  return;
}

// DoesPresenceMatchWithCache @ 14ece2380

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FTestPresenceInterface::DoesPresenceMatchWithCache
          (FTestPresenceInterface *this,TSharedPtr<FOnlineUserPresence,1> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FOnlineUserPresence *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  FVariantData *pFVar8;
  longlong lVar9;
  FString *pFVar10;
  uint *puVar11;
  bool bVar12;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FOnlineKeyValuePairs<FString,FVariantData> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  FOnlineKeyValuePairs<FString,FVariantData> *local_80;
  int iStack_78;
  uint uStack_74;
  undefined1 *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_34;
  
  pFVar3 = param_1->Object;
  if (pFVar3 == (FOnlineUserPresence *)0x0) {
    return false;
  }
  iVar7 = (this->CachedPresence).StatusStr.Data.ArrayNum;
  iVar6 = (pFVar3->Status).StatusStr.Data.ArrayNum;
  if (iVar7 == iVar6) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->CachedPresence).StatusStr.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar3->Status).StatusStr.Data.AllocatorInstance.Data);
      bVar12 = iVar7 == 0;
      goto LAB_14ece23d0;
    }
  }
  else {
    bVar12 = iVar7 + iVar6 == 1;
LAB_14ece23d0:
    if (!bVar12) {
      if ((byte)LogOnlinePresence._0_1_ < 3) {
        return false;
      }
      ::FString::PrintfImpl(&local_e8,L"Presence test fails, status strings are different");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      goto LAB_14ece2422;
    }
  }
  if ((param_1->Object == (FOnlineUserPresence *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return (bool)uVar5;
  }
  if (*(int *)&(this->CachedPresence).Properties.field_0x8 -
      *(int *)&(this->CachedPresence).Properties.field_0x34 <=
      *(int *)&(param_1->Object->Status).Properties.field_0x8 -
      *(int *)&(param_1->Object->Status).Properties.field_0x34) {
    iStack_78 = 0;
    local_a8 = &(this->CachedPresence).Properties;
    iVar7 = *(int *)&(this->CachedPresence).Properties.field_0x28;
    TStack_a0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedPresence).Properties.field_0x10;
    uStack_74 = 1;
    local_60 = 0;
    iVar6 = 0;
    if (iVar7 != 0) {
      puVar11 = *(uint **)&(this->CachedPresence).Properties.field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_a0.Array;
      }
      uVar2 = *puVar11;
      while (uVar2 == 0) {
        lVar9 = (longlong)iStack_78;
        local_60 = local_60 + 0x20;
        iStack_78 = iStack_78 + 1;
        iVar6 = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_14ece2580;
        uVar2 = puVar11[lVar9 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uStack_74 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar6 = local_60 + -1 + (int)lVar9;
      if (iVar7 < iVar6) {
        iVar6 = iVar7;
      }
    }
LAB_14ece2580:
    uStack_68 = 0xffffffff;
    uStack_5c = local_34;
    TStack_a0._padding_ = CONCAT44(uStack_74,iStack_78);
    TStack_a0.CurrentBitIndex = iVar6;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    TStack_a0._28_4_ = local_34;
    TStack_a0.BaseBitIndex = local_60;
    local_80 = local_a8;
    local_70 = (undefined1 *)TStack_a0.Array;
    iStack_64 = iVar6;
    if (iVar6 < iVar7) {
      do {
        pFVar10 = (FString *)((longlong)iVar6 * 0x38 + *(longlong *)local_a8);
        FVariantData::ToString((FVariantData *)(pFVar10 + 1),&local_f8);
        if ((param_1->Object == (FOnlineUserPresence *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar5 = (*pcVar4)();
          return (bool)uVar5;
        }
        pFVar8 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                 ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                         *)&(param_1->Object->Status).Properties,pFVar10);
        if (pFVar8 == (FVariantData *)0x0) {
          local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
          if (2 < (byte)LogOnlinePresence._0_1_) {
            ::FString::PrintfImpl(&local_b8,L"Presence test fails, missing key %s");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
LAB_14ece27e0:
            local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
            }
          }
          goto LAB_14ece2422;
        }
        if ((param_1->Object == (FOnlineUserPresence *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar5 = (*pcVar4)();
          return (bool)uVar5;
        }
        pFVar8 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                 ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                         *)&(param_1->Object->Status).Properties,pFVar10);
        FVariantData::ToString(pFVar8,&local_108);
        iVar7 = local_f8.Data.ArrayNum;
        if (iVar7 == local_108.Data.ArrayNum) {
          if (1 < iVar7) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_f8.Data.AllocatorInstance.Data,
                               (wchar_t *)local_108.Data.AllocatorInstance.Data);
            bVar12 = iVar7 == 0;
            goto LAB_14ece26b6;
          }
        }
        else {
          bVar12 = local_108.Data.ArrayNum + iVar7 == 1;
LAB_14ece26b6:
          if (!bVar12) {
            local_b8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
            if (2 < (byte)LogOnlinePresence._0_1_) {
              ::FString::PrintfImpl
                        (&local_c8,
                         L"Presence test fails, key %s has different values. Cached=%s Has=%s");
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              local_b8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                local_b8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
              }
            }
            goto LAB_14ece27e0;
          }
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
        iVar6 = TStack_a0.CurrentBitIndex;
      } while (TStack_a0.CurrentBitIndex < (TStack_a0.Array)->NumBits);
    }
    return true;
  }
  if ((byte)LogOnlinePresence._0_1_ < 3) {
    return false;
  }
  TSharedPtr<FOnlineUserPresence,1>::operator->(param_1);
  ::FString::PrintfImpl(&local_d8,L"Presence test fails. Tested presence has %d keys over %d keys");
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
  local_e8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
LAB_14ece2422:
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return false;
}

// OnCreateSessionComplete @ 14eceb7f0

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
FTestPresenceInterface::OnCreateSessionComplete
          (FTestPresenceInterface *this,FName param_1,bool param_2)

{
  FTimerManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateAllocation local_18;
  
  if (4 < (byte)LogOnlinePresence._0_1_) {
    ::FString::PrintfImpl
              ((FString *)&local_18,L"Session creation task for presence test complete. Success? %d"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_18.DelegateAllocator);
    }
  }
  if ((param_2) && (this->World != (UWorld *)0x0)) {
    this_00 = UWorld::GetTimerManager(this->World);
    local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_18.DelegateSize = 0;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      puVar1[4] = DelayedSessionPresenceWrite;
      puVar1[3] = this;
    }
    FTimerManager::SetTimer
              (this_00,&this->DelayedSessionPresenceWriteHandle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_18
               ,__real_3f800000,false,__real_40a00000);
    if (local_18.DelegateSize != 0) {
      if (local_18.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_18.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_18,0,0,0x10);
      local_18.DelegateSize = 0;
    }
    if (local_18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_18.DelegateAllocator);
      return;
    }
  }
  else {
    this->TasksAttempted = this->TasksAttempted | DelayedWriteFlags;
    this->bHasFailed = true;
  }
  return;
}

// OnFriendPresenceFetchComplete @ 14ececf10

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
FTestPresenceInterface::OnFriendPresenceFetchComplete
          (FTestPresenceInterface *this,FUniqueNetId *param_1,bool param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  IOnlinePresence *pIVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FUniqueNetId *pFVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FUniqueNetId_const_,1> *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  wchar_t *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FSharedReferencer<1> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  FSharedReferencer<1> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  FSharedReferencer<1> *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  void *local_78 [2];
  void *local_68 [5];
  undefined4 local_3c;
  
  if (4 < (byte)LogOnlinePresence._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_78);
    ::FString::PrintfImpl
              (&local_130,
               L"FTestPresenceInterface::OnFriendPresenceFetchComplete. User: %s. Success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  this->TasksAttempted = this->TasksAttempted | FetchFriend;
  if (param_2) {
    pIVar4 = (this->PresenceInt).Object;
    local_148 = (TSharedPtr<FUniqueNetId_const_,1> *)0x0;
    pTStack_140 = (TReferenceControllerBase<1> *)0x0;
    if ((pIVar4 != (IOnlinePresence *)0x0) &&
       (iVar8 = (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,param_1,&local_148), iVar8 == 0)) {
      cVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      if ((cVar6 == '\0') || (local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0)) {
        if (4 < (byte)LogOnlinePresence._0_1_) {
          ::FString::PrintfImpl(&local_e0,L"Could not print out status data as it is invalid!");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        iVar8 = 0;
        if (4 < (byte)LogOnlinePresence._0_1_) {
          if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_148->Object != (FUniqueNetId *)0x0) {
            pFVar9 = TSharedPtr<FUniqueNetId_const_,1>::operator->(local_148);
            (**(code **)(*(longlong *)pFVar9 + 0x28))(pFVar9);
          }
          if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_138 = EOnlinePresenceState::ToString(*(Type *)&local_148[3].Object);
          (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_68);
          ::FString::PrintfImpl
                    (&local_120,
                     L"UserId %s [%s] has presence: InSession[%d] Online[%d] Playing[%d] ThisGame[%d] Joinable[%d] StatusStr[%s]"
                    );
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
          if (4 < (byte)LogOnlinePresence._0_1_) {
            if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ::FString::PrintfImpl(&local_110,L"Properties [%d] Key=Value");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
          }
        }
        if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_9c = 1;
        local_d0 = &local_148[3].SharedReferenceCount;
        iVar2 = *(int *)&local_148[6].Object;
        TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&local_148[4].SharedReferenceCount
        ;
        local_88 = 0;
        iStack_8c = 0;
        if (iVar2 != 0) {
          pTVar11 = local_148[5].SharedReferenceCount.ReferenceController;
          if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)TStack_c8.Array;
          }
          uVar3 = *(uint *)&pTVar11->_padding_;
          local_88 = 0;
          iVar8 = 0;
          while (uVar3 == 0) {
            lVar10 = (longlong)iVar8;
            local_88 = local_88 + 0x20;
            iVar8 = iVar8 + 1;
            iStack_8c = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14eced2f9;
            uVar3 = *(uint *)((longlong)&pTVar11->_padding_ + lVar10 * 4 + 4);
          }
          uStack_9c = -uVar3 & uVar3;
          uVar1 = (ulonglong)uStack_9c * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iStack_8c = local_88 + -1 + (int)lVar10;
          if (iVar2 < iStack_8c) {
            iStack_8c = iVar2;
          }
        }
LAB_14eced2f9:
        uStack_90 = 0xffffffff;
        uStack_84 = local_3c;
        TStack_c8._padding_ = CONCAT44(uStack_9c,iVar8);
        TStack_c8.CurrentBitIndex = iStack_8c;
        TStack_c8.UnvisitedBitMask = 0xffffffff;
        TStack_c8._28_4_ = local_3c;
        TStack_c8.BaseBitIndex = local_88;
        local_a8 = local_d0;
        iStack_a0 = iVar8;
        local_98 = (FSharedReferencer<1> *)TStack_c8.Array;
        iVar8 = iStack_8c;
        if (iStack_8c < iVar2) {
          do {
            FVariantData::ToString
                      ((FVariantData *)
                       ((longlong)local_d0->ReferenceController + (longlong)iVar8 * 0x38 + 0x10),
                       &local_f0);
            if (4 < (byte)LogOnlinePresence._0_1_) {
              ::FString::PrintfImpl(&local_100,L"%s=%s");
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
            iVar8 = TStack_c8.CurrentBitIndex;
          } while (TStack_c8.CurrentBitIndex < (TStack_c8.Array)->NumBits);
        }
      }
      this->CompletedTasks = this->CompletedTasks | FetchFriend;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_140);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_140)
    ;
  }
  this->bHasFailed = true;
  return;
}

// OnPresencePushComplete @ 14ecee3d0

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
FTestPresenceInterface::OnPresencePushComplete
          (FTestPresenceInterface *this,FUniqueNetId *param_1,bool param_2)

{
  ulonglong uVar1;
  uint uVar2;
  IOnlinePresence *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FUniqueNetId *pFVar10;
  FVariantData *pFVar11;
  longlong lVar12;
  int iVar13;
  FString *pFVar14;
  int iVar15;
  uint *puVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined8 uVar18;
  TSharedPtr<FUniqueNetId_const_,1> *local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  uint local_1e8;
  FString local_1e0;
  FOnlineKeyValuePairs<FString,FVariantData> *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  FSharedReferencer<1> *local_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  FString local_1a0;
  undefined8 local_190;
  int local_188;
  int local_184;
  wchar_t *local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FSharedReferencer<1> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FOnlineKeyValuePairs<FString,FVariantData> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  void *local_88 [5];
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_2) {
    pIVar3 = (this->PresenceInt).Object;
    local_1f8 = (TSharedPtr<FUniqueNetId_const_,1> *)0x0;
    pTStack_1f0 = (TReferenceControllerBase<1> *)0x0;
    if (pIVar3 != (IOnlinePresence *)0x0) {
      pcVar4 = *(code **)(pIVar3->_padding_ + 0x68);
      if (((this->CurrentUser).Object == (FUniqueNetId *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (*pcVar4)(pIVar3,(this->CurrentUser).Object,&local_1f8);
      if (iVar7 == 0) {
        cVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        iVar13 = 0;
        uVar18 = 1;
        uVar9 = 1;
        local_190 = 1;
        iVar7 = 0;
        if ((cVar6 == '\0') || (local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0)) {
          if (4 < (byte)LogOnlinePresence._0_1_) {
            ::FString::PrintfImpl(&local_138,L"Could not print out status data as it is invalid!");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (4 < (byte)LogOnlinePresence._0_1_) {
            if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_1e8 = *(uint *)&local_1f8[1].Object >> 1 & 1;
            if (local_1f8->Object != (FUniqueNetId *)0x0) {
              pFVar10 = TSharedPtr<FUniqueNetId_const_,1>::operator->(local_1f8);
              (**(code **)(*(longlong *)pFVar10 + 0x28))(pFVar10);
            }
            if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_180 = EOnlinePresenceState::ToString(*(Type *)&local_1f8[3].Object);
            (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_88);
            ::FString::PrintfImpl
                      (&local_178,
                       L"UserId %s [%s] has presence: InSession[%d] Online[%d] Playing[%d] ThisGame[%d] Joinable[%d] StatusStr[%s]"
                      );
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
            if (local_88[0] != (void *)0x0) {
              FMemory::Free(local_88[0]);
            }
            uVar18 = local_190;
            if (4 < (byte)LogOnlinePresence._0_1_) {
              if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FString::PrintfImpl(&local_168,L"Properties [%d] Key=Value");
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
            }
          }
          uVar9 = (uint)uVar18;
          if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_1d0 = (FOnlineKeyValuePairs<FString,FVariantData> *)
                      &local_1f8[3].SharedReferenceCount;
          iVar8 = *(int *)&local_1f8[6].Object;
          local_1c0 = &local_1f8[4].SharedReferenceCount;
          iStack_1c8 = iVar7;
          uStack_1c4 = uVar9;
          local_1b0 = iVar7;
          iStack_1b4 = 0;
          if (iVar8 != 0) {
            pTVar17 = local_1f8[5].SharedReferenceCount.ReferenceController;
            if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
              pTVar17 = (TReferenceControllerBase<1> *)local_1c0;
            }
            uVar2 = *(uint *)&pTVar17->_padding_;
            while (uVar2 == 0) {
              lVar12 = (longlong)iStack_1c8;
              local_1b0 = local_1b0 + 0x20;
              iStack_1c8 = iStack_1c8 + 1;
              iStack_1b4 = iVar8;
              if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c8)
              goto LAB_14ecee770;
              uVar2 = *(uint *)((longlong)&pTVar17->_padding_ + lVar12 * 4 + 4);
            }
            uStack_1c4 = -uVar2 & uVar2;
            uVar1 = (ulonglong)uStack_1c4 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_188 = (int)lVar12;
            iStack_1b4 = local_1b0 + -1 + local_188;
            if (iVar8 < iStack_1b4) {
              iStack_1b4 = iVar8;
            }
          }
LAB_14ecee770:
          uStack_1b8 = 0xffffffff;
          uStack_1ac = local_5c;
          TStack_d0._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
          TStack_d0.CurrentBitIndex = iStack_1b4;
          TStack_d0.UnvisitedBitMask = 0xffffffff;
          TStack_d0._28_4_ = local_5c;
          TStack_d0.BaseBitIndex = local_1b0;
          local_d8 = (FSharedReferencer<1> *)local_1d0;
          TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c0;
          iVar15 = iStack_1b4;
          if (iStack_1b4 < iVar8) {
            do {
              FVariantData::ToString
                        ((FVariantData *)
                         ((longlong)local_d8->ReferenceController + (longlong)iVar15 * 0x38 + 0x10),
                         &local_148);
              if (4 < (byte)LogOnlinePresence._0_1_) {
                ::FString::PrintfImpl(&local_158,L"%s=%s");
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
                if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
              }
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
              iVar15 = TStack_d0.CurrentBitIndex;
            } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
          }
        }
        if (local_1f8 != (TSharedPtr<FUniqueNetId_const_,1> *)0x0) {
          if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (this->CachedPresence).StatusStr.Data.ArrayNum;
          iVar15 = *(int *)&local_1f8[2].SharedReferenceCount.ReferenceController;
          if (iVar8 == iVar15) {
            if (1 < iVar8) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)
                                 (this->CachedPresence).StatusStr.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_1f8[2].Object);
              bVar5 = iVar8 == 0;
              goto LAB_14ecee954;
            }
LAB_14eceea54:
            if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)&(this->CachedPresence).Properties.field_0x8 -
                *(int *)&(this->CachedPresence).Properties.field_0x34 <=
                *(int *)&local_1f8[4].Object -
                *(int *)((longlong)&local_1f8[6].SharedReferenceCount.ReferenceController + 4)) {
              local_1d0 = &(this->CachedPresence).Properties;
              iVar8 = *(int *)&(this->CachedPresence).Properties.field_0x28;
              local_1c0 = (FSharedReferencer<1> *)&(this->CachedPresence).Properties.field_0x10;
              iStack_1b4 = 0;
              if (iVar8 != 0) {
                puVar16 = *(uint **)&(this->CachedPresence).Properties.field_0x20;
                if (puVar16 == (uint *)0x0) {
                  puVar16 = (uint *)local_1c0;
                }
                uVar2 = *puVar16;
                iVar13 = iVar7;
                while (uVar2 == 0) {
                  lVar12 = (longlong)iVar13;
                  iVar7 = iVar7 + 0x20;
                  iVar13 = iVar13 + 1;
                  iStack_1b4 = iVar8;
                  if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13)
                  goto LAB_14eceeb9c;
                  uVar2 = puVar16[lVar12 + 1];
                }
                uVar9 = -uVar2 & uVar2;
                uVar1 = (ulonglong)uVar9 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                local_184 = (int)lVar12;
                iStack_1b4 = local_184 + -1 + iVar7;
                if (iVar8 < iStack_1b4) {
                  iStack_1b4 = iVar8;
                }
              }
LAB_14eceeb9c:
              uStack_1b8 = 0xffffffff;
              uStack_1ac = local_3c;
              TStack_a8._padding_ = CONCAT44(uVar9,iVar13);
              TStack_a8.CurrentBitIndex = iStack_1b4;
              TStack_a8.UnvisitedBitMask = 0xffffffff;
              TStack_a8._28_4_ = local_3c;
              TStack_a8.BaseBitIndex = iVar7;
              iStack_1c8 = iVar13;
              uStack_1c4 = uVar9;
              local_1b0 = iVar7;
              local_b0 = local_1d0;
              TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c0;
              iVar7 = iStack_1b4;
              if (iStack_1b4 < iVar8) {
                do {
                  pFVar14 = (FString *)((longlong)iVar7 * 0x38 + *(longlong *)local_b0);
                  FVariantData::ToString((FVariantData *)(pFVar14 + 1),&local_1e0);
                  if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar11 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                            ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                                    *)&local_1f8[3].SharedReferenceCount,pFVar14);
                  if (pFVar11 == (FVariantData *)0x0) {
                    local_128.Data.AllocatorInstance.Data = local_1e0.Data.AllocatorInstance.Data;
                    if (2 < (byte)LogOnlinePresence._0_1_) {
                      ::FString::PrintfImpl(&local_f8,L"Presence test fails, missing key %s");
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
LAB_14eceedb7:
                      local_128.Data.AllocatorInstance.Data = local_1e0.Data.AllocatorInstance.Data;
                      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                        local_128.Data.AllocatorInstance.Data =
                             local_1e0.Data.AllocatorInstance.Data;
                      }
                    }
                    goto LAB_14ecee9a1;
                  }
                  if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar11 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                            ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                                    *)&local_1f8[3].SharedReferenceCount,pFVar14);
                  FVariantData::ToString(pFVar11,&local_1a0);
                  iVar7 = local_1e0.Data.ArrayNum;
                  if (iVar7 == local_1a0.Data.ArrayNum) {
                    if (1 < iVar7) {
                      iVar7 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)local_1e0.Data.AllocatorInstance.Data,
                                         (wchar_t *)local_1a0.Data.AllocatorInstance.Data);
                      bVar5 = iVar7 == 0;
                      goto LAB_14eceecce;
                    }
                  }
                  else {
                    bVar5 = local_1a0.Data.ArrayNum + iVar7 == 1;
LAB_14eceecce:
                    if (!bVar5) {
                      local_f8.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
                      if (2 < (byte)LogOnlinePresence._0_1_) {
                        ::FString::PrintfImpl
                                  (&local_108,
                                   L"Presence test fails, key %s has different values. Cached=%s Has=%s"
                                  );
                        UE::Logging::Private::BasicLog<3>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
                        local_f8.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data
                        ;
                        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_108.Data.AllocatorInstance.Data);
                          local_f8.Data.AllocatorInstance.Data =
                               local_1a0.Data.AllocatorInstance.Data;
                        }
                      }
                      goto LAB_14eceedb7;
                    }
                  }
                  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                  }
                  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                  }
                  TStack_a8.UnvisitedBitMask =
                       TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
                  iVar7 = TStack_a8.CurrentBitIndex;
                } while (TStack_a8.CurrentBitIndex < (TStack_a8.Array)->NumBits);
              }
              this->CompletedTasks = this->CompletedTasks | PushSelf;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_1f0);
              goto LAB_14ecee9c0;
            }
            if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecee9ab;
            if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ::FString::PrintfImpl
                      (&local_118,L"Presence test fails. Tested presence has %d keys over %d keys");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
          }
          else {
            bVar5 = iVar8 + iVar15 == 1;
LAB_14ecee954:
            if (bVar5) goto LAB_14eceea54;
            if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecee9ab;
            ::FString::PrintfImpl(&local_128,L"Presence test fails, status strings are different");
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          }
LAB_14ecee9a1:
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
      }
    }
LAB_14ecee9ab:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f0)
    ;
  }
  this->bHasFailed = true;
LAB_14ecee9c0:
  this->TasksAttempted = this->TasksAttempted | PushSelf;
  if (4 < (byte)LogOnlinePresence._0_1_) {
    ::FString::PrintfImpl
              (&local_e8,
               L"FTestPresenceInterface::OnPresencePushComplete Task Success=%d. Data correct=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnPresencePushWithSessionComplete @ 14eceee30

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
FTestPresenceInterface::OnPresencePushWithSessionComplete
          (FTestPresenceInterface *this,FUniqueNetId *param_1,bool param_2)

{
  ulonglong uVar1;
  uint uVar2;
  IOnlinePresence *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FUniqueNetId *pFVar10;
  FVariantData *pFVar11;
  longlong lVar12;
  int iVar13;
  FString *pFVar14;
  int iVar15;
  uint *puVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined8 uVar18;
  TSharedPtr<FUniqueNetId_const_,1> *local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  uint local_1e8;
  FString local_1e0;
  FOnlineKeyValuePairs<FString,FVariantData> *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  FSharedReferencer<1> *local_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  FString local_1a0;
  undefined8 local_190;
  int local_188;
  int local_184;
  wchar_t *local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FSharedReferencer<1> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FOnlineKeyValuePairs<FString,FVariantData> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  void *local_88 [5];
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_2) {
    pIVar3 = (this->PresenceInt).Object;
    local_1f8 = (TSharedPtr<FUniqueNetId_const_,1> *)0x0;
    pTStack_1f0 = (TReferenceControllerBase<1> *)0x0;
    if (pIVar3 != (IOnlinePresence *)0x0) {
      pcVar4 = *(code **)(pIVar3->_padding_ + 0x68);
      if (((this->CurrentUser).Object == (FUniqueNetId *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (*pcVar4)(pIVar3,(this->CurrentUser).Object,&local_1f8);
      if (iVar7 == 0) {
        cVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        iVar13 = 0;
        uVar18 = 1;
        uVar9 = 1;
        local_190 = 1;
        iVar7 = 0;
        if ((cVar6 == '\0') || (local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0)) {
          if (4 < (byte)LogOnlinePresence._0_1_) {
            ::FString::PrintfImpl(&local_138,L"Could not print out status data as it is invalid!");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if (4 < (byte)LogOnlinePresence._0_1_) {
            if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_1e8 = *(uint *)&local_1f8[1].Object >> 1 & 1;
            if (local_1f8->Object != (FUniqueNetId *)0x0) {
              pFVar10 = TSharedPtr<FUniqueNetId_const_,1>::operator->(local_1f8);
              (**(code **)(*(longlong *)pFVar10 + 0x28))(pFVar10);
            }
            if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_180 = EOnlinePresenceState::ToString(*(Type *)&local_1f8[3].Object);
            (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_88);
            ::FString::PrintfImpl
                      (&local_178,
                       L"UserId %s [%s] has presence: InSession[%d] Online[%d] Playing[%d] ThisGame[%d] Joinable[%d] StatusStr[%s]"
                      );
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
            if (local_88[0] != (void *)0x0) {
              FMemory::Free(local_88[0]);
            }
            uVar18 = local_190;
            if (4 < (byte)LogOnlinePresence._0_1_) {
              if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FString::PrintfImpl(&local_168,L"Properties [%d] Key=Value");
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
            }
          }
          uVar9 = (uint)uVar18;
          if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_1d0 = (FOnlineKeyValuePairs<FString,FVariantData> *)
                      &local_1f8[3].SharedReferenceCount;
          iVar8 = *(int *)&local_1f8[6].Object;
          local_1c0 = &local_1f8[4].SharedReferenceCount;
          iStack_1c8 = iVar7;
          uStack_1c4 = uVar9;
          local_1b0 = iVar7;
          iStack_1b4 = 0;
          if (iVar8 != 0) {
            pTVar17 = local_1f8[5].SharedReferenceCount.ReferenceController;
            if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
              pTVar17 = (TReferenceControllerBase<1> *)local_1c0;
            }
            uVar2 = *(uint *)&pTVar17->_padding_;
            while (uVar2 == 0) {
              lVar12 = (longlong)iStack_1c8;
              local_1b0 = local_1b0 + 0x20;
              iStack_1c8 = iStack_1c8 + 1;
              iStack_1b4 = iVar8;
              if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c8)
              goto LAB_14ecef1d0;
              uVar2 = *(uint *)((longlong)&pTVar17->_padding_ + lVar12 * 4 + 4);
            }
            uStack_1c4 = -uVar2 & uVar2;
            uVar1 = (ulonglong)uStack_1c4 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_188 = (int)lVar12;
            iStack_1b4 = local_1b0 + -1 + local_188;
            if (iVar8 < iStack_1b4) {
              iStack_1b4 = iVar8;
            }
          }
LAB_14ecef1d0:
          uStack_1b8 = 0xffffffff;
          uStack_1ac = local_5c;
          TStack_d0._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
          TStack_d0.CurrentBitIndex = iStack_1b4;
          TStack_d0.UnvisitedBitMask = 0xffffffff;
          TStack_d0._28_4_ = local_5c;
          TStack_d0.BaseBitIndex = local_1b0;
          local_d8 = (FSharedReferencer<1> *)local_1d0;
          TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c0;
          iVar15 = iStack_1b4;
          if (iStack_1b4 < iVar8) {
            do {
              FVariantData::ToString
                        ((FVariantData *)
                         ((longlong)local_d8->ReferenceController + (longlong)iVar15 * 0x38 + 0x10),
                         &local_148);
              if (4 < (byte)LogOnlinePresence._0_1_) {
                ::FString::PrintfImpl(&local_158,L"%s=%s");
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
                if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
              }
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
              iVar15 = TStack_d0.CurrentBitIndex;
            } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
          }
        }
        if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((((ulonglong)local_1f8[1].Object & 2) != 0) &&
            (((ulonglong)local_1f8[1].Object & 4) != 0)) &&
           (local_1f8->Object != (FUniqueNetId *)0x0)) {
          pFVar10 = TSharedPtr<FUniqueNetId_const_,1>::operator->(local_1f8);
          cVar6 = (**(code **)(*(longlong *)pFVar10 + 0x28))(pFVar10);
          if ((cVar6 != '\0') && (local_1f8 != (TSharedPtr<FUniqueNetId_const_,1> *)0x0)) {
            if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (this->CachedPresence).StatusStr.Data.ArrayNum;
            iVar15 = *(int *)&local_1f8[2].SharedReferenceCount.ReferenceController;
            if (iVar8 == iVar15) {
              if (1 < iVar8) {
                iVar8 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)
                                   (this->CachedPresence).StatusStr.Data.AllocatorInstance.Data,
                                   (wchar_t *)local_1f8[2].Object);
                bVar5 = iVar8 == 0;
                goto LAB_14ecef41b;
              }
LAB_14ecef51b:
              if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(int *)&(this->CachedPresence).Properties.field_0x8 -
                  *(int *)&(this->CachedPresence).Properties.field_0x34 <=
                  *(int *)&local_1f8[4].Object -
                  *(int *)((longlong)&local_1f8[6].SharedReferenceCount.ReferenceController + 4)) {
                local_1d0 = &(this->CachedPresence).Properties;
                iVar8 = *(int *)&(this->CachedPresence).Properties.field_0x28;
                local_1c0 = (FSharedReferencer<1> *)&(this->CachedPresence).Properties.field_0x10;
                iStack_1b4 = 0;
                if (iVar8 != 0) {
                  puVar16 = *(uint **)&(this->CachedPresence).Properties.field_0x20;
                  if (puVar16 == (uint *)0x0) {
                    puVar16 = (uint *)local_1c0;
                  }
                  uVar2 = *puVar16;
                  iVar13 = iVar7;
                  while (uVar2 == 0) {
                    lVar12 = (longlong)iVar13;
                    iVar7 = iVar7 + 0x20;
                    iVar13 = iVar13 + 1;
                    iStack_1b4 = iVar8;
                    if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13)
                    goto LAB_14ecef65d;
                    uVar2 = puVar16[lVar12 + 1];
                  }
                  uVar9 = -uVar2 & uVar2;
                  uVar1 = (ulonglong)uVar9 * 2 + 1;
                  lVar12 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                    }
                  }
                  local_184 = (int)lVar12;
                  iStack_1b4 = local_184 + -1 + iVar7;
                  if (iVar8 < iStack_1b4) {
                    iStack_1b4 = iVar8;
                  }
                }
LAB_14ecef65d:
                uStack_1b8 = 0xffffffff;
                uStack_1ac = local_3c;
                TStack_a8._padding_ = CONCAT44(uVar9,iVar13);
                TStack_a8.CurrentBitIndex = iStack_1b4;
                TStack_a8.UnvisitedBitMask = 0xffffffff;
                TStack_a8._28_4_ = local_3c;
                TStack_a8.BaseBitIndex = iVar7;
                iStack_1c8 = iVar13;
                uStack_1c4 = uVar9;
                local_1b0 = iVar7;
                local_b0 = local_1d0;
                TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1c0;
                iVar7 = iStack_1b4;
                if (iStack_1b4 < iVar8) {
                  do {
                    pFVar14 = (FString *)((longlong)iVar7 * 0x38 + *(longlong *)local_b0);
                    FVariantData::ToString((FVariantData *)(pFVar14 + 1),&local_1e0);
                    if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pFVar11 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                              ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                                      *)&local_1f8[3].SharedReferenceCount,pFVar14);
                    if (pFVar11 == (FVariantData *)0x0) {
                      local_128.Data.AllocatorInstance.Data = local_1e0.Data.AllocatorInstance.Data;
                      if (2 < (byte)LogOnlinePresence._0_1_) {
                        ::FString::PrintfImpl(&local_f8,L"Presence test fails, missing key %s");
                        UE::Logging::Private::BasicLog<3>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
LAB_14ecef878:
                        local_128.Data.AllocatorInstance.Data =
                             local_1e0.Data.AllocatorInstance.Data;
                        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                          local_128.Data.AllocatorInstance.Data =
                               local_1e0.Data.AllocatorInstance.Data;
                        }
                      }
                      goto LAB_14ecef468;
                    }
                    if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pFVar11 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                              ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                                      *)&local_1f8[3].SharedReferenceCount,pFVar14);
                    FVariantData::ToString(pFVar11,&local_1a0);
                    iVar7 = local_1e0.Data.ArrayNum;
                    if (iVar7 == local_1a0.Data.ArrayNum) {
                      if (1 < iVar7) {
                        iVar7 = FGenericPlatformStricmp::Stricmp
                                          ((wchar_t *)local_1e0.Data.AllocatorInstance.Data,
                                           (wchar_t *)local_1a0.Data.AllocatorInstance.Data);
                        bVar5 = iVar7 == 0;
                        goto LAB_14ecef78f;
                      }
                    }
                    else {
                      bVar5 = local_1a0.Data.ArrayNum + iVar7 == 1;
LAB_14ecef78f:
                      if (!bVar5) {
                        local_f8.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data
                        ;
                        if (2 < (byte)LogOnlinePresence._0_1_) {
                          ::FString::PrintfImpl
                                    (&local_108,
                                     L"Presence test fails, key %s has different values. Cached=%s Has=%s"
                                    );
                          UE::Logging::Private::BasicLog<3>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
                          local_f8.Data.AllocatorInstance.Data =
                               local_1a0.Data.AllocatorInstance.Data;
                          if (local_108.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_108.Data.AllocatorInstance.Data);
                            local_f8.Data.AllocatorInstance.Data =
                                 local_1a0.Data.AllocatorInstance.Data;
                          }
                        }
                        goto LAB_14ecef878;
                      }
                    }
                    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                    }
                    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                    }
                    TStack_a8.UnvisitedBitMask =
                         TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
                    iVar7 = TStack_a8.CurrentBitIndex;
                  } while (TStack_a8.CurrentBitIndex < (TStack_a8.Array)->NumBits);
                }
                this->CompletedTasks = this->CompletedTasks | PushSelfSession;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_1f0);
                goto LAB_14ecef487;
              }
              if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecef472;
              if ((local_1f8 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FString::PrintfImpl
                        (&local_118,L"Presence test fails. Tested presence has %d keys over %d keys"
                        );
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
            }
            else {
              bVar5 = iVar8 + iVar15 == 1;
LAB_14ecef41b:
              if (bVar5) goto LAB_14ecef51b;
              if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecef472;
              ::FString::PrintfImpl(&local_128,L"Presence test fails, status strings are different")
              ;
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            }
LAB_14ecef468:
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
LAB_14ecef472:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f0)
    ;
  }
  this->bHasFailed = true;
LAB_14ecef487:
  this->TasksAttempted = this->TasksAttempted | PushSelfSession;
  if (4 < (byte)LogOnlinePresence._0_1_) {
    ::FString::PrintfImpl
              (&local_e8,
               L"FTestPresenceInterface::OnPresencePushWithSessionComplete Task Success=%d. Data correct=%d"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnPresenceRecieved @ 14ecef8f0

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
FTestPresenceInterface::OnPresenceRecieved
          (FTestPresenceInterface *this,FUniqueNetId *param_1,
          TSharedRef<FOnlineUserPresence,1> *param_2)

{
  FString local_28;
  void *local_18 [2];
  
  if (5 < (byte)LogOnlinePresence._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_18);
    ::FString::PrintfImpl(&local_28,L"Received a presence update event about user %s");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  this->CompletedTasks = this->CompletedTasks | WorkingDelegate;
  this->TasksAttempted = this->TasksAttempted | WorkingDelegate;
  return;
}

// OnRandomUserFetchComplete @ 14ecf1a20

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
FTestPresenceInterface::OnRandomUserFetchComplete
          (FTestPresenceInterface *this,FUniqueNetId *param_1,bool param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  IOnlinePresence *pIVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FUniqueNetId *pFVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FUniqueNetId_const_,1> *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  wchar_t *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FSharedReferencer<1> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  FSharedReferencer<1> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  FSharedReferencer<1> *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  void *local_78 [2];
  void *local_68 [5];
  undefined4 local_3c;
  
  if (4 < (byte)LogOnlinePresence._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_78);
    ::FString::PrintfImpl
              (&local_130,L"FTestPresenceInterface::OnRandomUserFetchComplete User: %s Success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  this->TasksAttempted = this->TasksAttempted | FetchRandom;
  if (param_2) {
    pIVar4 = (this->PresenceInt).Object;
    local_148 = (TSharedPtr<FUniqueNetId_const_,1> *)0x0;
    pTStack_140 = (TReferenceControllerBase<1> *)0x0;
    if ((pIVar4 != (IOnlinePresence *)0x0) &&
       (iVar8 = (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,param_1,&local_148), iVar8 == 0)) {
      cVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      if ((cVar6 == '\0') || (local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0)) {
        if (4 < (byte)LogOnlinePresence._0_1_) {
          ::FString::PrintfImpl(&local_e0,L"Could not print out status data as it is invalid!");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        iVar8 = 0;
        if (4 < (byte)LogOnlinePresence._0_1_) {
          if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_148->Object != (FUniqueNetId *)0x0) {
            pFVar9 = TSharedPtr<FUniqueNetId_const_,1>::operator->(local_148);
            (**(code **)(*(longlong *)pFVar9 + 0x28))(pFVar9);
          }
          if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_138 = EOnlinePresenceState::ToString(*(Type *)&local_148[3].Object);
          (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_68);
          ::FString::PrintfImpl
                    (&local_120,
                     L"UserId %s [%s] has presence: InSession[%d] Online[%d] Playing[%d] ThisGame[%d] Joinable[%d] StatusStr[%s]"
                    );
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
          if (4 < (byte)LogOnlinePresence._0_1_) {
            if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ::FString::PrintfImpl(&local_110,L"Properties [%d] Key=Value");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
          }
        }
        if ((local_148 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_9c = 1;
        local_d0 = &local_148[3].SharedReferenceCount;
        iVar2 = *(int *)&local_148[6].Object;
        TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&local_148[4].SharedReferenceCount
        ;
        local_88 = 0;
        iStack_8c = 0;
        if (iVar2 != 0) {
          pTVar11 = local_148[5].SharedReferenceCount.ReferenceController;
          if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)TStack_c8.Array;
          }
          uVar3 = *(uint *)&pTVar11->_padding_;
          local_88 = 0;
          iVar8 = 0;
          while (uVar3 == 0) {
            lVar10 = (longlong)iVar8;
            local_88 = local_88 + 0x20;
            iVar8 = iVar8 + 1;
            iStack_8c = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ecf1e09;
            uVar3 = *(uint *)((longlong)&pTVar11->_padding_ + lVar10 * 4 + 4);
          }
          uStack_9c = -uVar3 & uVar3;
          uVar1 = (ulonglong)uStack_9c * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iStack_8c = local_88 + -1 + (int)lVar10;
          if (iVar2 < iStack_8c) {
            iStack_8c = iVar2;
          }
        }
LAB_14ecf1e09:
        uStack_90 = 0xffffffff;
        uStack_84 = local_3c;
        TStack_c8._padding_ = CONCAT44(uStack_9c,iVar8);
        TStack_c8.CurrentBitIndex = iStack_8c;
        TStack_c8.UnvisitedBitMask = 0xffffffff;
        TStack_c8._28_4_ = local_3c;
        TStack_c8.BaseBitIndex = local_88;
        local_a8 = local_d0;
        iStack_a0 = iVar8;
        local_98 = (FSharedReferencer<1> *)TStack_c8.Array;
        iVar8 = iStack_8c;
        if (iStack_8c < iVar2) {
          do {
            FVariantData::ToString
                      ((FVariantData *)
                       ((longlong)local_d0->ReferenceController + (longlong)iVar8 * 0x38 + 0x10),
                       &local_f0);
            if (4 < (byte)LogOnlinePresence._0_1_) {
              ::FString::PrintfImpl(&local_100,L"%s=%s");
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
            iVar8 = TStack_c8.CurrentBitIndex;
          } while (TStack_c8.CurrentBitIndex < (TStack_c8.Array)->NumBits);
        }
      }
      this->CompletedTasks = this->CompletedTasks | FetchRandom;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_140);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_140)
    ;
  }
  this->bHasFailed = true;
  return;
}

// OnReadFriendsListComplete @ 14ecf2310

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
FTestPresenceInterface::OnReadFriendsListComplete
          (FTestPresenceInterface *this,int param_1,bool param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  IOnlineFriends *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  IOnlinePresence *pIVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if (4 < (byte)LogOnlinePresence._0_1_) {
    ::FString::PrintfImpl
              (&local_d0,L"Friends list fetch task for presence test complete. Success=%d. Error=%s"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    if (((this->FriendsInt).Object == (IOnlineFriends *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar2 = (this->FriendsInt).Object;
    pcVar4 = *(code **)(pIVar2->_padding_ + 0x1c8);
    ::FString::FString(&local_80,L"default");
    (*pcVar4)(pIVar2,0,&local_80,&this->FriendsCache);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlinePresence._0_1_) {
      ::FString::PrintfImpl(&local_c0,L"Found %d friends!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    iVar1 = (this->FriendsCache).ArrayNum;
    if (iVar1 < 1) {
      if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecf2736;
      ::FString::PrintfImpl
                (&local_90,
                 L"Test user has no friends! Cannot fetch friend presence data if user has no friends!"
                );
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      local_a0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    }
    else {
      uVar6 = rand();
      uVar7 = (uint)((float)(uVar6 & 0x7fff) * (float)iVar1 * __real_38000100);
      uVar6 = iVar1 - 1U;
      if ((int)uVar7 < (int)(iVar1 - 1U)) {
        uVar6 = uVar7;
      }
      if ((-1 < (int)uVar6) && ((int)uVar6 < (this->FriendsCache).ArrayNum)) {
        if (4 < (byte)LogOnlinePresence._0_1_) {
          ::FString::PrintfImpl(&local_b0,L"Fetching presence for friend number %d");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        pIVar8 = TSharedPtr<IOnlinePresence,1>::operator->(&this->PresenceInt);
        local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        pcVar4 = *(code **)(pIVar8->_padding_ + 0x20);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_e8,(FWriteAccessScope *)&local_58);
        local_40 = &local_e0;
        puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_e0);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar9[4] = OnFriendPresenceFetchComplete;
          puVar9[3] = this;
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
        uVar7 = 0;
        if ((int)uVar6 < (this->FriendsCache).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)
                  ((this->FriendsCache).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
        puVar9 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_38);
        (*pcVar4)(pIVar8,*puVar9);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_e8,(FWriteAccessScope *)&local_70);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
        return;
      }
      if ((byte)LogOnlinePresence._0_1_ < 5) goto LAB_14ecf2736;
      ::FString::PrintfImpl(&local_a0,L"Friend index not valid: %d");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
LAB_14ecf2736:
  this->TasksAttempted = this->TasksAttempted | FetchFriend;
  this->bHasFailed = true;
  return;
}

// OnSelfPresenceFetchComplete @ 14ecf2ef0

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
FTestPresenceInterface::OnSelfPresenceFetchComplete
          (FTestPresenceInterface *this,FUniqueNetId *param_1,bool param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  IOnlinePresence *pIVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FUniqueNetId *pFVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FUniqueNetId_const_,1> *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  wchar_t *local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FSharedReferencer<1> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  FSharedReferencer<1> *local_98;
  int iStack_90;
  uint uStack_8c;
  FSharedReferencer<1> *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  void *local_68 [5];
  undefined4 local_3c;
  
  if (4 < (byte)LogOnlinePresence._0_1_) {
    ::FString::PrintfImpl
              (&local_120,L"FTestPresenceInterface::OnSelfPresenceFetchComplete Success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  this->TasksAttempted = this->TasksAttempted | FetchSelf;
  if (param_2) {
    pIVar4 = (this->PresenceInt).Object;
    local_138 = (TSharedPtr<FUniqueNetId_const_,1> *)0x0;
    pTStack_130 = (TReferenceControllerBase<1> *)0x0;
    if ((pIVar4 != (IOnlinePresence *)0x0) &&
       (iVar8 = (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,param_1,&local_138), iVar8 == 0)) {
      cVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      if ((cVar6 == '\0') || (local_138 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0)) {
        if (4 < (byte)LogOnlinePresence._0_1_) {
          ::FString::PrintfImpl(&local_d0,L"Could not print out status data as it is invalid!");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        iVar8 = 0;
        if (4 < (byte)LogOnlinePresence._0_1_) {
          if ((local_138 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_138->Object != (FUniqueNetId *)0x0) {
            pFVar9 = TSharedPtr<FUniqueNetId_const_,1>::operator->(local_138);
            (**(code **)(*(longlong *)pFVar9 + 0x28))(pFVar9);
          }
          if ((local_138 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_128 = EOnlinePresenceState::ToString(*(Type *)&local_138[3].Object);
          (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_68);
          ::FString::PrintfImpl
                    (&local_110,
                     L"UserId %s [%s] has presence: InSession[%d] Online[%d] Playing[%d] ThisGame[%d] Joinable[%d] StatusStr[%s]"
                    );
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
          if (4 < (byte)LogOnlinePresence._0_1_) {
            if ((local_138 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ::FString::PrintfImpl(&local_100,L"Properties [%d] Key=Value");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
          }
        }
        if ((local_138 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_8c = 1;
        local_c0 = &local_138[3].SharedReferenceCount;
        iVar2 = *(int *)&local_138[6].Object;
        TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&local_138[4].SharedReferenceCount
        ;
        local_78 = 0;
        iStack_7c = 0;
        if (iVar2 != 0) {
          pTVar11 = local_138[5].SharedReferenceCount.ReferenceController;
          if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)TStack_b8.Array;
          }
          uVar3 = *(uint *)&pTVar11->_padding_;
          local_78 = 0;
          iVar8 = 0;
          while (uVar3 == 0) {
            lVar10 = (longlong)iVar8;
            local_78 = local_78 + 0x20;
            iVar8 = iVar8 + 1;
            iStack_7c = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ecf32a9;
            uVar3 = *(uint *)((longlong)&pTVar11->_padding_ + lVar10 * 4 + 4);
          }
          uStack_8c = -uVar3 & uVar3;
          uVar1 = (ulonglong)uStack_8c * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iStack_7c = local_78 + -1 + (int)lVar10;
          if (iVar2 < iStack_7c) {
            iStack_7c = iVar2;
          }
        }
LAB_14ecf32a9:
        uStack_80 = 0xffffffff;
        uStack_74 = local_3c;
        TStack_b8._padding_ = CONCAT44(uStack_8c,iVar8);
        TStack_b8.CurrentBitIndex = iStack_7c;
        TStack_b8.UnvisitedBitMask = 0xffffffff;
        TStack_b8._28_4_ = local_3c;
        TStack_b8.BaseBitIndex = local_78;
        local_98 = local_c0;
        iStack_90 = iVar8;
        local_88 = (FSharedReferencer<1> *)TStack_b8.Array;
        iVar8 = iStack_7c;
        if (iStack_7c < iVar2) {
          do {
            FVariantData::ToString
                      ((FVariantData *)
                       ((longlong)local_c0->ReferenceController + (longlong)iVar8 * 0x38 + 0x10),
                       &local_e0);
            if (4 < (byte)LogOnlinePresence._0_1_) {
              ::FString::PrintfImpl(&local_f0,L"%s=%s");
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
            }
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
            iVar8 = TStack_b8.CurrentBitIndex;
          } while (TStack_b8.CurrentBitIndex < (TStack_b8.Array)->NumBits);
        }
      }
      this->CompletedTasks = this->CompletedTasks | FetchSelf;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_130);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_130)
    ;
  }
  this->bHasFailed = true;
  return;
}

// OnWorldDestroyed @ 14ecf39e0

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
FTestPresenceInterface::OnWorldDestroyed(FTestPresenceInterface *this,UWorld *param_1)

{
  if (param_1 == this->World) {
    this->World = (UWorld *)0x0;
  }
  return;
}

// PrintPresence @ 14ecf44b0

/* WARNING: Type propagation algorithm not settling */
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
FTestPresenceInterface::PrintPresence
          (FTestPresenceInterface *this,FUniqueNetId *param_1,
          TSharedPtr<FOnlineUserPresence,1> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FOnlineUserPresence *pFVar7;
  FUniqueNetId *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FOnlineKeyValuePairs<FString,FVariantData> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  FOnlineKeyValuePairs<FString,FVariantData> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  void *local_68 [5];
  undefined4 local_3c;
  
  cVar5 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  if ((cVar5 == '\0') || (param_2->Object == (FOnlineUserPresence *)0x0)) {
    if (4 < (byte)LogOnlinePresence._0_1_) {
      ::FString::PrintfImpl(&local_d0,L"Could not print out status data as it is invalid!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    iVar10 = 0;
    iVar11 = 0;
    if (4 < (byte)LogOnlinePresence._0_1_) {
      pFVar7 = TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      if (1 < (pFVar7->Status).StatusStr.Data.ArrayNum) {
        TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      }
      TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      pFVar7 = TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      if ((pFVar7->SessionId).Object != (FUniqueNetId *)0x0) {
        pFVar7 = TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
        pFVar8 = TSharedPtr<FUniqueNetId_const_,1>::operator->(&pFVar7->SessionId);
        (**(code **)(*(longlong *)pFVar8 + 0x28))(pFVar8);
      }
      pFVar7 = TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
      EOnlinePresenceState::ToString((pFVar7->Status).State);
      (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_68);
      ::FString::PrintfImpl
                (&local_110,
                 L"UserId %s [%s] has presence: InSession[%d] Online[%d] Playing[%d] ThisGame[%d] Joinable[%d] StatusStr[%s]"
                );
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
      if (4 < (byte)LogOnlinePresence._0_1_) {
        TSharedPtr<FOnlineUserPresence,1>::operator->(param_2);
        ::FString::PrintfImpl(&local_100,L"Properties [%d] Key=Value");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((param_2->Object == (FOnlineUserPresence *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = param_2->Object;
    uStack_8c = 1;
    local_c0 = &(pFVar7->Status).Properties;
    iVar2 = *(int *)&(pFVar7->Status).Properties.field_0x28;
    TStack_b8.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar7->Status).Properties.field_0x10;
    iStack_7c = 0;
    if (iVar2 != 0) {
      puVar12 = *(uint **)&(pFVar7->Status).Properties.field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_b8.Array;
      }
      uVar3 = *puVar12;
      iVar11 = 0;
      iVar10 = 0;
      while (uVar3 == 0) {
        lVar9 = (longlong)iVar10;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar10 + 1;
        iStack_7c = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ecf4799;
        uVar3 = puVar12[lVar9 + 1];
      }
      uStack_8c = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_8c * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_7c = iVar11 + -1 + (int)lVar9;
      if (iVar2 < iStack_7c) {
        iStack_7c = iVar2;
      }
    }
LAB_14ecf4799:
    uStack_80 = 0xffffffff;
    uStack_74 = local_3c;
    TStack_b8._padding_ = CONCAT44(uStack_8c,iVar10);
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._28_4_ = local_3c;
    TStack_b8.BaseBitIndex = iVar11;
    local_98 = local_c0;
    iStack_90 = iVar10;
    local_88 = (undefined1 *)TStack_b8.Array;
    local_78 = iVar11;
    TStack_b8.CurrentBitIndex = iStack_7c;
    if (iStack_7c < iVar2) {
      do {
        FVariantData::ToString
                  ((FVariantData *)
                   ((longlong)TStack_b8.CurrentBitIndex * 0x38 + *(longlong *)local_c0 + 0x10),
                   &local_e0);
        if (4 < (byte)LogOnlinePresence._0_1_) {
          ::FString::PrintfImpl(&local_f0,L"%s=%s");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      } while (TStack_b8.CurrentBitIndex < (TStack_b8.Array)->NumBits);
    }
  }
  return;
}

// PrintTestFailure @ 14ecf4920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FTestPresenceInterface::PrintTestFailure
          (FTestPresenceInterface *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if ((this->CompletedTasks & this->RequiredFlags) == this->RequiredFlags) {
    ::FString::FString(__return_storage_ptr__,L"No failures");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    if ((this->CompletedTasks & PushSelf) == None) {
      ::FString::AppendChars(&local_18,L"<Self Push> ",0xc);
    }
    if ((this->CompletedTasks & PushSelfSession) == None) {
      ::FString::AppendChars(&local_18,L"<Self Session Push> ",0x14);
    }
    if ((this->CompletedTasks & FetchSelf) == None) {
      ::FString::AppendChars(&local_18,L"<Self Fetch> ",0xd);
    }
    if ((this->CompletedTasks & FetchFriend) == None) {
      ::FString::AppendChars(&local_18,L"<Friend Fetch> ",0xf);
    }
    if ((this->CompletedTasks & WorkingDelegate) == None) {
      ::FString::AppendChars(&local_18,L"<Delegate Updates> ",0x13);
    }
    if (((this->RequiredFlags & FetchRandom) != None) &&
       ((this->CompletedTasks & FetchRandom) == None)) {
      ::FString::AppendChars(&local_18,L"<Random User Fetch> ",0x14);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// Test @ 14ecfd060

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
FTestPresenceInterface::Test(FTestPresenceInterface *this,UWorld *param_1,FString *param_2)

{
  TSharedPtr<IOnlineSession,1> *pTVar1;
  TSharedPtr<IOnlinePresence,1> *this_00;
  TSharedPtr<IOnlineFriends,1> *this_01;
  TSharedPtr<FUniqueNetId_const_,1> *this_02;
  code *pcVar2;
  double dVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FName *pFVar9;
  IOnlineSubsystem *pIVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulong64 uVar13;
  ulong64 *puVar14;
  FUniqueNetId *pFVar15;
  IOnlineFriends *pIVar16;
  IOnlinePresence *pIVar17;
  TSharedPtr<IOnlineIdentity,1> *this_03;
  IOnlineIdentity *pIVar18;
  wchar_t *pwVar19;
  TPairInitializer<FString_const_&,FVariantData_const_&> local_res8;
  FString *local_res18;
  undefined1 local_3f8 [8];
  FDelegateAllocation local_3f0;
  undefined1 local_3e0 [8];
  FDelegateAllocation local_3d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3c8;
  FDelegateAllocation local_3c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b0;
  FDelegateAllocation local_3a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_398;
  FDelegateAllocation local_390;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_380;
  FDelegateAllocation local_378;
  longlong local_368;
  TReferenceControllerBase<1> *local_360;
  TPairInitializer<FString_const_&,FVariantData_const_&> local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FVariantData local_2d8;
  FVariantData local_2b8;
  FVariantData local_298;
  FString local_278;
  FString local_268;
  FString *local_258;
  FVariantData *local_250;
  FString *local_248;
  FVariantData *local_240;
  FString *local_238;
  FVariantData *local_230;
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FName local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  TReferenceControllerBase<1> *local_b8;
  undefined1 local_b0 [8];
  TReferenceControllerBase<1> *local_a8;
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  undefined1 local_80 [40];
  undefined1 local_58 [8];
  IOnlineSubsystem *local_50;
  
  bVar6 = false;
  local_res8.Key._0_4_ = 0;
  local_res8.Value = (FVariantData *)param_1;
  local_res18 = param_2;
  if (4 < (byte)LogOnlinePresence._0_1_) {
    ::FString::PrintfImpl(&local_338,L"Starting Presence Interface Tests");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  if ((this->SubsystemName).Data.ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data;
  }
  pFVar9 = ::FName::FName(&local_d8,pwVar19);
  pIVar10 = IOnlineSubsystem::Get(pFVar9);
  this->OnlineSub = pIVar10;
  if ((pIVar10 == (IOnlineSubsystem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnlineSub",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestPresenceInterface.cpp"
                         ,0xab,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((GEngine == (UEngine *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestPresenceInterface.cpp"
                         ,0xac,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar11 = (undefined8 *)(**(code **)(this->OnlineSub->_padding_ + 0x20))(this->OnlineSub,local_90)
  ;
  pTVar1 = &this->SessionInt;
  if (pTVar1 != (TSharedPtr<IOnlineSession,1> *)puVar11) {
    pTVar1->Object = (IOnlineSession *)*puVar11;
    *puVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SessionInt).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  puVar11 = (undefined8 *)(**(code **)(this->OnlineSub->_padding_ + 200))(this->OnlineSub,local_a0);
  this_00 = &this->PresenceInt;
  if (this_00 != (TSharedPtr<IOnlinePresence,1> *)puVar11) {
    this_00->Object = (IOnlinePresence *)*puVar11;
    *puVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PresenceInt).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  puVar11 = (undefined8 *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_c0)
  ;
  this_01 = &this->FriendsInt;
  if (this_01 != (TSharedPtr<IOnlineFriends,1> *)puVar11) {
    this_01->Object = (IOnlineFriends *)*puVar11;
    *puVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FriendsInt).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  bVar5 = false;
  if (((pTVar1->Object == (IOnlineSession *)0x0) ||
      (bVar5 = false, this_00->Object == (IOnlinePresence *)0x0)) ||
     (this_01->Object == (IOnlineFriends *)0x0)) {
LAB_14ecfd24a:
    bVar6 = true;
  }
  else {
    bVar5 = true;
    plVar12 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_58)
    ;
    if (*plVar12 == 0) goto LAB_14ecfd24a;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_50);
  }
  if (bVar6) {
    if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecfdf54;
    ::FString::PrintfImpl
              (&local_328,
               L"The Presence test must be ran in an OSS that implements the Session, Identity, Presence and Friends interfaces"
              );
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
  }
  else {
    if ((pTVar1->Object == (IOnlineSession *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = (**(code **)(pTVar1->Object->_padding_ + 0x448))();
    if (iVar8 == 0) {
      QueryPerformanceCounter((LARGE_INTEGER *)&local_358.Value);
      local_3e0 = (undefined1  [8])0x0;
      local_3d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_3d8.DelegateSize = 0;
      this->TestTimeStart =
           (double)(longlong)local_358.Value * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e0,
                 (FWriteAccessScope *)&local_198);
      local_180 = &local_3d8;
      puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_3d8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId__AEBV__TSharedRef_VFOnlineUserPresence___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar13;
        *puVar11 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXAEBVFUniqueNetId__AEBV__TSharedRef_VFOnlineUserPresence___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar11[4] = OnPresenceRecieved;
        puVar11[3] = this;
      }
      if (local_198.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPresenceRecievedDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e0,
                 (FWriteAccessScope *)&local_228);
      if ((local_3d8.DelegateSize != 0) &&
         (local_3d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_3d8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_3d8,0,0,0x10);
        local_3d8.DelegateSize = 0;
      }
      if (local_228.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
      }
      if (local_3d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_3d8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_3e0);
      if ((this_00->Object == (IOnlinePresence *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar14 = (ulong64 *)
                (**(code **)(this_00->Object->_padding_ + 0x28))(this_00->Object,local_d0);
      local_3f8 = (undefined1  [8])0x0;
      local_3f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_3f0.DelegateSize = 0;
      (this->OnPresenceRecievedDelegateHandle).ID = *puVar14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f8,
                 (FWriteAccessScope *)&local_178);
      local_160 = &local_3f0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_3f0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar13;
        *puVar11 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar11[4] = OnCreateSessionComplete;
        puVar11[3] = this;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCreateSessionCompleteDelegate
                 ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f8,
                 (FWriteAccessScope *)&local_210);
      if ((local_3f0.DelegateSize != 0) &&
         (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_3f0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_3f0,0,0,0x10);
        local_3f0.DelegateSize = 0;
      }
      if (local_210.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
      }
      if (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_3f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_3f8);
      if ((pTVar1->Object == (IOnlineSession *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar14 = (ulong64 *)
                (**(code **)(pTVar1->Object->_padding_ + 0x50))
                          (pTVar1->Object,local_c8,&this->OnCreateSessionCompleteDelegate);
      (this->OnCreateSessionCompleteDelegateHandle).ID = *puVar14;
      plVar12 = (longlong *)
                (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_80 + 8);
      if ((*plVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar11 = (undefined8 *)
                (**(code **)(*(longlong *)*plVar12 + 0x110))((longlong *)*plVar12,local_b0,0);
      this_02 = &this->CurrentUser;
      if (this_02 != (TSharedPtr<FUniqueNetId_const_,1> *)puVar11) {
        this_02->Object = (FUniqueNetId *)*puVar11;
        *puVar11 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CurrentUser).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_80._16_8_);
      if (this_02->Object != (FUniqueNetId *)0x0) {
        pFVar15 = TSharedPtr<FUniqueNetId_const_,1>::operator->(this_02);
        cVar7 = (**(code **)(*(longlong *)pFVar15 + 0x28))(pFVar15);
        if (cVar7 != '\0') {
          this->World = (UWorld *)local_res8.Value;
          ::FString::FString(&local_278,L"Presence Test is running. Please wait until it completes."
                            );
          UEngine::AddOnScreenDebugMessage
                    (GEngine,0x32,__real_43110000,FColor::Yellow,&local_278,true,
                     &UE::Math::TVector2<double>::UnitVector);
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
          AddRaw<FTestPresenceInterface>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                      *)&GEngine->WorldDestroyedEvent,(FTestPresenceInterface *)local_80,
                     (pmf_f9ffcec3)this);
          if (4 < (byte)LogOnlinePresence._0_1_) {
            ::FString::PrintfImpl(&local_348,L"Reading Friends List");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
            if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Data.AllocatorInstance.Data);
            }
          }
          pIVar16 = TSharedPtr<IOnlineFriends,1>::operator->(this_01);
          local_3c8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_3c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3c0.DelegateSize = 0;
          pcVar2 = *(code **)(pIVar16->_padding_ + 0xe8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3c8,(FWriteAccessScope *)&local_158);
          local_140 = &local_3c0;
          puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_3c0);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar13 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar13;
            *puVar11 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar11[4] = OnReadFriendsListComplete;
            puVar11[3] = this;
          }
          if (local_158.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
          }
          ::FString::FString(&local_268,L"default");
          (*pcVar2)(pIVar16,0,&local_268,&local_3c8);
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3c8,(FWriteAccessScope *)&local_1f8);
          if ((local_3c0.DelegateSize != 0) &&
             (local_3c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_3c0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_3c0,0,0,0x10);
            local_3c0.DelegateSize = 0;
          }
          if (local_1f8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
          }
          if (local_3c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_3c0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3c8.AccessDetector);
          pIVar17 = TSharedPtr<IOnlinePresence,1>::operator->(this_00);
          local_380.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_378.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_378.DelegateSize = 0;
          pcVar2 = *(code **)(pIVar17->_padding_ + 0x20);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_380,(FWriteAccessScope *)&local_138);
          local_120 = &local_378;
          puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_378);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar13 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar13;
            *puVar11 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar11[4] = OnSelfPresenceFetchComplete;
            puVar11[3] = this;
          }
          if (local_138.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
          }
          pFVar15 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(this_02);
          (*pcVar2)(pIVar17,pFVar15);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_380,(FWriteAccessScope *)&local_1e0);
          if ((local_378.DelegateSize != 0) &&
             (local_378.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_378.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_378,0,0,0x10);
            local_378.DelegateSize = 0;
          }
          if (local_1e0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
          }
          if (local_378.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_378.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_380.AccessDetector);
          pFVar4 = local_res18;
          if ((local_res18->Data).ArrayNum < 2) {
            if (4 < (byte)LogOnlinePresence._0_1_) {
              ::FString::PrintfImpl
                        (&local_2f8,
                         L"Presence Interface Test is skipping random user presence fetch");
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            this_03 = (TSharedPtr<IOnlineIdentity,1> *)
                      (**(code **)(this->OnlineSub->_padding_ + 0x80))
                                (this->OnlineSub,local_80 + 0x18);
            pIVar18 = TSharedPtr<IOnlineIdentity,1>::operator->(this_03);
            (**(code **)(pIVar18->_padding_ + 0x120))(pIVar18,&local_368,pFVar4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_80._32_8_);
            if (local_368 == 0) {
              if (2 < (byte)LogOnline._0_1_) {
                ::FString::PrintfImpl
                          (&local_308,
                           L"Presence Interface Test could not create a player id for the given arbitrary user id! Skipping test!"
                          );
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u__s_s_15308b240,
                           (FLogCategoryBase *)&LogOnline);
                if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_308.Data.AllocatorInstance.Data);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_360);
            }
            else {
              pIVar17 = TSharedPtr<IOnlinePresence,1>::operator->(this_00);
              local_398.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              local_390.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_390.DelegateSize = 0;
              pcVar2 = *(code **)(pIVar17->_padding_ + 0x20);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_398,(FWriteAccessScope *)&local_118);
              local_100 = &local_390;
              puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_390);
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = &
                           ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar13 = FDelegateHandle::GenerateNewID();
                puVar11[2] = uVar13;
                *puVar11 = &
                           ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                puVar11[4] = OnRandomUserFetchComplete;
                puVar11[3] = this;
              }
              if (local_118.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
              }
              if ((local_368 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*pcVar2)(pIVar17,local_368);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_398,(FWriteAccessScope *)&local_1c8);
              if ((local_390.DelegateSize != 0) &&
                 (local_390.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_390.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_390,0,0,0x10);
                local_390.DelegateSize = 0;
              }
              if (local_1c8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
              }
              if (local_390.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_390.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_398.AccessDetector)
              ;
              dVar3 = FWindowsPlatformTime::Seconds();
              this->RequiredFlags = this->RequiredFlags | FetchRandom;
              this->ArbitraryFetchTimeStart = dVar3;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_360);
            }
          }
          local_298.Type = Empty;
          local_298.CachedEstimatedMaxEscapedStringSize = 0;
          local_2b8.Type = Empty;
          local_2b8.CachedEstimatedMaxEscapedStringSize = 0;
          local_298.Value.AsInt64 = 0;
          local_298.Value._8_8_ = 0;
          local_2d8.Type = Empty;
          local_2b8.Value.AsInt64 = 0;
          local_2b8.Value._8_8_ = 0;
          local_2d8.CachedEstimatedMaxEscapedStringSize = 0;
          local_2d8.Value.AsInt64 = 0;
          local_2d8.Value._8_8_ = 0;
          FVariantData::SetValue(&local_298,L"PresenceTestString");
          FVariantData::SetValue(&local_2b8,6);
          FVariantData::SetValue(&local_2d8,__real_c0600000);
          ::FString::operator=(&(this->CachedPresence).StatusStr,L"CurrentlyTesting");
          local_258 = &DefaultPlatformKey;
          local_250 = &local_298;
          TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
                    ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                      *)&(this->CachedPresence).Properties,&local_res8,(bool *)&local_258);
          local_248 = &DefaultAppIdKey;
          local_240 = &local_2b8;
          TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
                    ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                      *)&(this->CachedPresence).Properties,
                     (TPairInitializer<FString_const_&,FVariantData_const_&> *)&stack0x00000020,
                     (bool *)&local_248);
          local_238 = &CustomPresenceDataKey;
          local_230 = &local_2d8;
          TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
                    ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                      *)&(this->CachedPresence).Properties,&local_358,(bool *)&local_238);
          pIVar17 = TSharedPtr<IOnlinePresence,1>::operator->(this_00);
          local_3b0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_3a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3a8.DelegateSize = 0;
          pcVar2 = *(code **)(pIVar17->_padding_ + 0x10);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3b0,(FWriteAccessScope *)&local_f8);
          local_e0 = &local_3a8;
          puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_3a8);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar13 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar13;
            *puVar11 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestPresenceInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar11[4] = OnPresencePushComplete;
            puVar11[3] = this;
          }
          if (local_f8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
          }
          pFVar15 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(this_02);
          (*pcVar2)(pIVar17,pFVar15,&this->CachedPresence,&local_3b0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3b0,(FWriteAccessScope *)&local_1b0);
          if ((local_3a8.DelegateSize != 0) &&
             (local_3a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_3a8.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_3a8,0,0,0x10);
            local_3a8.DelegateSize = 0;
          }
          if (local_1b0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
          }
          if (local_3a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_3a8.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
          FVariantData::Empty(&local_2d8);
          FVariantData::Empty(&local_2b8);
          FVariantData::Empty(&local_298);
          return;
        }
      }
      if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecfdf54;
      ::FString::PrintfImpl(&local_2e8,L"Presence test requires a valid user logged in!");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      local_328.Data.AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogOnlinePresence._0_1_ < 3) goto LAB_14ecfdf54;
      ::FString::PrintfImpl(&local_318,L"Presence test cannot be run while already in a session.");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      local_328.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
    }
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
LAB_14ecfdf54:
  (**(code **)this->_padding_)(this,1);
  return;
}

// Tick @ 14ed05400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestPresenceInterface::Tick(FTestPresenceInterface *this,float param_1)

{
  int *piVar1;
  EPresenceTestStatus EVar2;
  code *pcVar3;
  FColor_u_0 FVar4;
  EPresenceTestStatus EVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FNameEntryId FVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestPresenceInterface::Tick(float)_::_2_::FStat_STAT_FTestPresenceInterface_Tick>
  FVar13;
  IOnlineSession *pIVar14;
  FString *pFVar15;
  undefined4 extraout_var;
  FUniqueNetId *pFVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined1 auStackY_1c8 [32];
  LARGE_INTEGER local_168;
  undefined4 local_160;
  undefined4 local_15c;
  LARGE_INTEGER local_158;
  undefined8 local_150;
  LARGE_INTEGER local_148;
  uint local_140;
  uint local_13c;
  LARGE_INTEGER local_138;
  FOnlineSessionSettings local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar19 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTestPresenceInterface_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestPresenceInterface::Tick(float)_::_2_::FStat_STAT_FTestPresenceInterface_Tick>
         )0x0) {
      pFVar12 = ::FName::FName((FName *)&local_168.s,"STAT_FTestPresenceInterface_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestPresenceInterface_Tick,*pFVar12,
                 L"STAT_FTestPresenceInterface_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_FTestPresenceInterface_Tick;
  if (StatPtr_STAT_FTestPresenceInterface_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestPresenceInterface::Tick(float)_::_2_::FStat_STAT_FTestPresenceInterface_Tick>
       )0x0) {
    pFVar12 = ::FName::FName((FName *)&local_158.s,"STAT_FTestPresenceInterface_Tick");
    FVar13 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestPresenceInterface::Tick(float)_::_2_::FStat_STAT_FTestPresenceInterface_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestPresenceInterface_Tick,
                          *pFVar12,L"STAT_FTestPresenceInterface_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar17 = *(LARGE_INTEGER *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_138.s.LowPart = 0;
  local_138.s.HighPart = 0;
  if ((LVar17.s.LowPart == 0) && (LVar17.s.HighPart == 0)) {
LAB_14ed05590:
    bVar7 = false;
    LVar17 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_168.QuadPart = local_168.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_168.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168 = LVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_168.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestPresenceInterface.cpp"
                   ,0x61);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ed05590;
    local_168 = LVar17;
    local_138 = LVar17;
    FThreadStats::AddMessage((FName)LVar17.s,CycleScopeStart);
    bVar7 = true;
    uVar19 = local_138._0_4_;
  }
  if ((this->CompletedTasks & WorkingDelegate) == None) {
    QueryPerformanceCounter(&local_168);
    if ((__real_405e000000000000 <
         ((double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000) - this->TestTimeStart) && (0.0 < this->TestTimeStart)) {
      this->bHasFailed = true;
      this->TasksAttempted = this->TasksAttempted | WorkingDelegate;
      this->TestTimeStart = 0.0;
    }
  }
  if (((this->CompletedTasks & FetchRandom) == None) &&
     ((this->RequiredFlags & FetchRandom) != None)) {
    QueryPerformanceCounter(&local_168);
    if ((__real_405e000000000000 <
         ((double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000) - this->ArbitraryFetchTimeStart) &&
       (0.0 < this->ArbitraryFetchTimeStart)) {
      this->bHasFailed = true;
      this->TasksAttempted = this->TasksAttempted | FetchRandom;
      this->ArbitraryFetchTimeStart = 0.0;
    }
  }
  EVar2 = this->RequiredFlags;
  EVar5 = EVar2 & this->CompletedTasks;
  if ((EVar5 == EVar2) || ((this->bHasFailed != false && ((this->TasksAttempted & EVar2) == EVar2)))
     ) {
    if (4 < (byte)LogOnlinePresence._0_1_) {
      local_158.s.LowPart = 0;
      local_158.s.HighPart = 0;
      local_150 = 0;
      if (EVar5 == EVar2) {
        ::FString::FString((FString *)&local_168.s,L"No failures");
        if ((FName)local_158.QuadPart != (FName)0x0) {
          FMemory::Free((void *)local_158);
        }
      }
      else {
        if ((this->CompletedTasks & PushSelf) == None) {
          ::FString::AppendChars((FString *)&local_158.s,L"<Self Push> ",0xc);
        }
        if ((this->CompletedTasks & PushSelfSession) == None) {
          ::FString::AppendChars((FString *)&local_158.s,L"<Self Session Push> ",0x14);
        }
        if ((this->CompletedTasks & FetchSelf) == None) {
          ::FString::AppendChars((FString *)&local_158.s,L"<Self Fetch> ",0xd);
        }
        if ((this->CompletedTasks & FetchFriend) == None) {
          ::FString::AppendChars((FString *)&local_158.s,L"<Friend Fetch> ",0xf);
        }
        if ((this->CompletedTasks & WorkingDelegate) == None) {
          ::FString::AppendChars((FString *)&local_158.s,L"<Delegate Updates> ",0x13);
        }
        if (((this->RequiredFlags & FetchRandom) != None) &&
           ((this->CompletedTasks & FetchRandom) == None)) {
          ::FString::AppendChars((FString *)&local_158.s,L"<Random User Fetch> ",0x14);
        }
        local_168 = local_158;
        local_160 = (undefined4)local_150;
        local_15c = local_150._4_4_;
      }
      ::FString::PrintfImpl
                ((FString *)&local_148.s,L"Presence testing completed! Success: %d Failed Tasks: %s"
                );
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
      if ((FName)local_148.QuadPart != (FName)0x0) {
        FMemory::Free((void *)local_148);
      }
      if ((FName)local_168.QuadPart != (FName)0x0) {
        FMemory::Free((void *)local_168);
      }
    }
    if (GEngine != (UEngine *)0x0) {
      ::FString::FString((FString *)&local_148.s,
                         L"Presence Test has completed. See log for details.");
      FVar4 = FColor::Green.field0_0x0;
      if (this->bHasFailed != false) {
        FVar4 = FColor::Red.field0_0x0;
      }
      UEngine::AddOnScreenDebugMessage
                (GEngine,0x32,__real_40a00000,(FColor)FVar4._s_0,(FString *)&local_148.s,true,
                 &UE::Math::TVector2<double>::UnitVector);
LAB_14ed05a67:
      if ((FName)local_148.QuadPart != (FName)0x0) {
        FMemory::Free((void *)local_148);
      }
    }
LAB_14ed05a71:
    (**(code **)this->_padding_)(this,1);
    bVar18 = false;
  }
  else {
    if (((this->TasksAttempted & PushSelf) != None) && (this->bHasCreatedSession == false)) {
      pIVar14 = TSharedPtr<IOnlineSession,1>::operator->(&this->SessionInt);
      iVar10 = (**(code **)(pIVar14->_padding_ + 0x448))(pIVar14);
      if (iVar10 != 0) {
        if (2 < (byte)LogOnlinePresence._0_1_) {
          ::FString::PrintfImpl
                    ((FString *)&local_158.s,
                     L"Presence testing was aborted as another session was detected.");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          local_148 = local_158;
          goto LAB_14ed05a67;
        }
        goto LAB_14ed05a71;
      }
      this->bHasCreatedSession = true;
      FOnlineSessionSettings::FOnlineSessionSettings(&local_128);
      pFVar15 = ::FString::FString((FString *)&local_148.s,L"PresenceTest");
      pFVar12 = ::FName::FName((FName *)&local_158.s,L"MAPNAME");
      FOnlineSessionSettings::Set<FString>(&local_128,*pFVar12,pFVar15,ViaOnlineService);
      if ((FName)local_148.QuadPart != (FName)0x0) {
        FMemory::Free((void *)local_148);
      }
      local_128.bUsesPresence = true;
      local_128.bAllowJoinViaPresence = true;
      local_128.NumPublicConnections = 2;
      local_128.bAllowJoinInProgress = true;
      local_128.bIsLANMatch = false;
      local_128.bUseLobbiesIfAvailable = true;
      local_128.bShouldAdvertise = true;
      local_128.bAllowInvites = true;
      pIVar14 = TSharedPtr<IOnlineSession,1>::operator->(&this->SessionInt);
      pcVar3 = *(code **)(pIVar14->_padding_ + 0x40);
      FVar11 = FNameEntryId::FromValidEName((EName)&local_168);
      local_168.s.HighPart = 0;
      local_168.s.LowPart = *(uint *)CONCAT44(extraout_var,FVar11.Value);
      pFVar16 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                          (&this->CurrentUser);
      cVar9 = (*pcVar3)(pIVar14,pFVar16,local_168.QuadPart,&local_128);
      if (cVar9 == '\0') {
        if (2 < (byte)LogOnlinePresence._0_1_) {
          ::FString::PrintfImpl((FString *)&local_158.s,L"Presence test session failed to create!");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlinePresence);
          if ((FName)local_158.QuadPart != (FName)0x0) {
            FMemory::Free((void *)local_158);
          }
        }
        this->TasksAttempted = this->TasksAttempted | DelayedWriteFlags;
        this->bHasFailed = true;
      }
      FOnlineSessionSettings::~FOnlineSessionSettings(&local_128);
    }
    bVar18 = true;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && ((FName)LVar17.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_13c = LVar17.s.HighPart & 0xffff6fffU | 0x6000;
      local_140 = uVar19;
      QueryPerformanceCounter(&local_168);
      local_148.QuadPart = local_168.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_148.s);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar18;
}

