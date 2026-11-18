// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 6

// FTestStoreInterface @ 14ecd8960

/* WARNING: Enum "Type": Some values do not have unique names */

FTestStoreInterface * __thiscall
FTestStoreInterface::FTestStoreInterface(FTestStoreInterface *this,FString *param_1)

{
  FString local_18;
  
  (this->SubsystemName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsystemName).Data.ArrayNum = 0;
  (this->SubsystemName).Data.ArrayMax = 0;
  this->OnlineSub = (IOnlineSubsystem *)0x0;
  (this->LocalUserId).Object = (FUniqueNetId *)0x0;
  (this->LocalUserId).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RequestOfferIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestOfferIds).ArrayNum = 0;
  (this->RequestOfferIds).ArrayMax = 0;
  if (3 < (byte)LogOnlineStoreV2._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestStoreInterface::FTestStoreInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::operator=(&this->SubsystemName,param_1);
  return this;
}

// ~FTestStoreInterface @ 14ecdb750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestStoreInterface::~FTestStoreInterface(FTestStoreInterface *this)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (3 < (byte)LogOnlineStoreV2._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestStoreInterface::~FTestStoreInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>
            ((FString *)(this->RequestOfferIds).AllocatorInstance.Data,
             (this->RequestOfferIds).ArrayNum);
  pFVar1 = (this->RequestOfferIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalUserId).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FinishTest @ 14ece6bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestStoreInterface::FinishTest(FTestStoreInterface *this)

{
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  if (this != (FTestStoreInterface *)0x0) {
    if (3 < (byte)LogOnlineStoreV2._0_1_) {
      ::FString::PrintfImpl(&local_18,L"FTestStoreInterface::~FTestStoreInterface");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>
              ((FString *)(this->RequestOfferIds).AllocatorInstance.Data,
               (this->RequestOfferIds).ArrayNum);
    pFVar1 = (this->RequestOfferIds).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->LocalUserId).SharedReferenceCount.ReferenceController);
    pFVar1 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(this,0x38);
  }
  return;
}

// OnQueryOnlineStoreOffersComplete @ 14ecefb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestStoreInterface::OnQueryOnlineStoreOffersComplete
          (FTestStoreInterface *this,bool param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int iVar1;
  FOnlineStoreOffer *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  FText *this_00;
  TSharedRef<FOnlineStoreOffer,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  TSharedRef<FOnlineStoreOffer,1> *pTVar13;
  undefined1 local_res10 [8];
  ForAnyElementType local_98;
  undefined8 local_90;
  TSharedRef<FOnlineStoreOffer,1> *local_88;
  ulonglong local_80;
  FString local_78;
  FString local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  longlong *local_48 [2];
  
  if (4 < (byte)LogOnlineStoreV2._0_1_) {
    ::FString::PrintfImpl
              (&local_78,
               L"Query store offers completed with status bWasSuccessful=[%d] Error=[%s] OfferIds=[%d]"
              );
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (param_1) {
    local_88 = (TSharedRef<FOnlineStoreOffer,1> *)0x0;
    local_80 = 0;
    plVar8 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x90))(this->OnlineSub,local_58);
    if ((*plVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)*plVar8 + 0x48))((longlong *)*plVar8,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    if (4 < (byte)LogOnline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    }
    uVar5 = local_80;
    uVar9 = (ulonglong)(int)local_80;
    pTVar10 = local_88 + uVar9;
    pTVar13 = local_88;
    while( true ) {
      if ((int)local_80 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FOnlineStoreOffer,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pTVar13 == pTVar10) break;
      if (4 < (byte)LogOnline._0_1_) {
        this_00 = (FText *)(**(code **)(pTVar13->Object->_padding_ + 0x10))
                                     (pTVar13->Object,local_48);
        FText::ToString(this_00);
        FText::ToString(&pTVar13->Object->Description);
        FText::ToString(&pTVar13->Object->Title);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
      }
      pFVar11 = (this->RequestOfferIds).AllocatorInstance.Data;
      pFVar2 = pTVar13->Object;
      pFVar12 = pFVar11 + (longlong)(this->RequestOfferIds).ArrayNum * 0x10;
      if (pFVar11 == pFVar12) {
LAB_14ecefea2:
        pTVar13 = pTVar13 + 1;
        uVar9 = uVar5 & 0xffffffff;
      }
      else {
        do {
          iVar7 = *(int *)(pFVar11 + 8);
          iVar1 = (pFVar2->OfferId).Data.ArrayNum;
          if (iVar7 == iVar1) {
            if (1 < iVar7) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)pFVar11,
                                 (wchar_t *)(pFVar2->OfferId).Data.AllocatorInstance.Data);
              bVar6 = iVar7 == 0;
              goto LAB_14ecefdd4;
            }
LAB_14ecefdf8:
            if (((local_98.Data <= pTVar13) &&
                (pTVar13 < (TSharedRef<FOnlineStoreOffer,1> *)
                           (local_98.Data + (longlong)local_90._4_4_ * 0x10))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = (int)local_90;
            if ((int)local_90 == local_90._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_98,(int *)((longlong)&local_90 + 4));
            }
            local_90 = CONCAT44(local_90._4_4_,iVar7 + 1);
            *(FOnlineStoreOffer **)&local_98.Data[(longlong)iVar7 * 0x10].field_0x0 =
                 pTVar13->Object;
            pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
            *(TReferenceControllerBase<1> **)(local_98.Data + (longlong)iVar7 * 0x10 + 8) = pTVar3;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_14ecefea2;
          }
          bVar6 = iVar7 + iVar1 == 1;
LAB_14ecefdd4:
          if (bVar6) goto LAB_14ecefdf8;
          pFVar11 = pFVar11 + 0x10;
        } while (pFVar11 != pFVar12);
        pTVar13 = pTVar13 + 1;
        uVar9 = uVar5 & 0xffffffff;
      }
    }
    if (4 < (byte)LogOnline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    }
    DestructItems<TSharedRef<FOnlineStoreOffer,1>,int>
              ((TSharedRef<FOnlineStoreOffer,1> *)local_98.Data,(int)local_90);
    if ((TSharedRef<FOnlineStoreOffer,1> *)local_98.Data != (TSharedRef<FOnlineStoreOffer,1> *)0x0)
    {
      FMemory::Free(local_98.Data);
    }
    DestructItems<TSharedRef<FOnlineStoreOffer,1>,int>(local_88,(int)local_80);
    if (local_88 != (TSharedRef<FOnlineStoreOffer,1> *)0x0) {
      FMemory::Free(local_88);
    }
  }
  if (this != (FTestStoreInterface *)0x0) {
    if (3 < (byte)LogOnlineStoreV2._0_1_) {
      ::FString::PrintfImpl(&local_68,L"FTestStoreInterface::~FTestStoreInterface");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>
              ((FString *)(this->RequestOfferIds).AllocatorInstance.Data,
               (this->RequestOfferIds).ArrayNum);
    pFVar11 = (this->RequestOfferIds).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->LocalUserId).SharedReferenceCount.ReferenceController);
    pFVar11 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    ::operator_delete(this,0x38);
  }
  return;
}

// StartNextTest @ 14ecfb160

void __thiscall FTestStoreInterface::StartNextTest(FTestStoreInterface *this)

{
  IOnlineSubsystem *pIVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FDelegateAllocation local_e8;
  FString *local_d8;
  undefined8 local_d0;
  FOnlineStoreCategory *local_c8;
  undefined8 local_c0;
  FOnlineStoreCategory *local_b8;
  undefined8 local_b0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pIVar1 = this->OnlineSub;
  if ((this->RequestOfferIds).ArrayNum < 1) {
    plVar4 = (longlong *)(**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,local_28);
    if (*plVar4 == 0) {
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
    plVar4 = (longlong *)*plVar4;
    local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    pcVar2 = *(code **)(*plVar4 + 0x38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_58);
    local_40 = &local_e8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_e8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestStoreInterface____A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = OnQueryOnlineStoreOffersComplete;
      puVar5[3] = this;
      if (this == (FTestStoreInterface *)0x0) {
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
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    local_d8 = (FString *)0x0;
    local_d0 = 0;
    local_c8 = (FOnlineStoreCategory *)0x0;
    local_c0 = 0;
    local_b8 = (FOnlineStoreCategory *)0x0;
    local_b0 = 0;
    if ((this->LocalUserId).Object == (FUniqueNetId *)0x0) {
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
    (*pcVar2)(plVar4,(this->LocalUserId).Object,&local_d8,&local_f0);
    DestructItems<FOnlineStoreCategory,int>(local_b8,(int)local_b0);
    if (local_b8 != (FOnlineStoreCategory *)0x0) {
      FMemory::Free(local_b8);
    }
    DestructItems<FOnlineStoreCategory,int>(local_c8,(int)local_c0);
    if (local_c8 != (FOnlineStoreCategory *)0x0) {
      FMemory::Free(local_c8);
    }
    DestructItems<FString,int>(local_d8,(int)local_d0);
    if (local_d8 != (FString *)0x0) {
      FMemory::Free(local_d8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_90);
    if ((local_e8.DelegateSize != 0) &&
       (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e8,0,0,0x10);
      local_e8.DelegateSize = 0;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
    local_30 = local_20;
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,local_38);
    if (*plVar4 == 0) {
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
    plVar4 = (longlong *)*plVar4;
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    pcVar2 = *(code **)(*plVar4 + 0x40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_78);
    local_60 = &local_100;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestStoreInterface____A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = OnQueryOnlineStoreOffersComplete;
      puVar5[3] = this;
      if (this == (FTestStoreInterface *)0x0) {
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
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if ((this->LocalUserId).Object == (FUniqueNetId *)0x0) {
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
    (*pcVar2)(plVar4,(this->LocalUserId).Object,&this->RequestOfferIds,&local_108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_a8);
    if ((local_100.DelegateSize != 0) &&
       (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_100,0,0,0x10);
      local_100.DelegateSize = 0;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_100.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// Test @ 14ed007a0

/* WARNING: Removing unreachable block (ram,0x00014ed00aab) */
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
FTestStoreInterface::Test
          (FTestStoreInterface *this,UWorld *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  IOnlineSubsystem *pIVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FName local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  if (3 < (byte)LogOnlineStoreV2._0_1_) {
    ::FString::PrintfImpl(&local_c8,L"FTestStoreInterface::Test");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->SubsystemName).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    pFVar7 = &local_res20;
  }
  else if (iVar2 == 0) {
    pFVar7 = ::FName::FName(&local_88,L"",FNAME_Find);
  }
  else {
    pFVar7 = ::FName::FName(&local_88,(wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,
                            FNAME_Find);
  }
  pIVar8 = IOnlineSubsystem::Get(pFVar7);
  this->OnlineSub = pIVar8;
  if (pIVar8 == (IOnlineSubsystem *)0x0) {
    if ((byte)LogOnlineStoreV2._0_1_ < 3) goto LAB_14ed00bd8;
    ::FString::PrintfImpl(&local_98,L"Failed to get OSS interface for %s.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
    local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  }
  else {
    plVar9 = (longlong *)(**(code **)(pIVar8->_padding_ + 0x80))(pIVar8,local_80);
    lVar3 = *plVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
    if (lVar3 != 0) {
      plVar9 = (longlong *)
               (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_60);
      if ((*plVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar10 = (undefined8 *)
                (**(code **)(*(longlong *)*plVar9 + 0x110))((longlong *)*plVar9,local_70,0);
      if (&this->LocalUserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar10) {
        (this->LocalUserId).Object = (FUniqueNetId *)*puVar10;
        *puVar10 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LocalUserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar10 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    }
    if ((this->LocalUserId).Object == (FUniqueNetId *)0x0) {
      if ((byte)LogOnlineStoreV2._0_1_ < 3) goto LAB_14ed00bd8;
      ::FString::PrintfImpl(&local_a8,L"No logged in user.");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
      local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    }
    else {
      plVar9 = (longlong *)
               (**(code **)(this->OnlineSub->_padding_ + 0x90))(this->OnlineSub,local_50);
      lVar3 = *plVar9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      if (lVar3 != 0) {
        pFVar12 = (param_2->AllocatorInstance).Data;
        iVar2 = param_2->ArrayNum;
        pFVar13 = pFVar12 + (longlong)iVar2 * 0x10;
        while( true ) {
          if (param_2->ArrayNum != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar12 == pFVar13) {
            StartNextTest(this);
            return;
          }
          iVar6 = *(int *)(pFVar12 + 8);
          local_d8.Data = (FScriptContainerElement *)0x0;
          _Src = *(void **)pFVar12;
          local_d0 = CONCAT44(local_d0._4_4_,iVar6);
          if (iVar6 == 0) {
            local_d0 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar6,0,&local_d8,iVar6,(int *)((longlong)&local_d0 + 4));
            memcpy(local_d8.Data,_Src,(longlong)iVar6 * 2);
          }
          pFVar11 = (this->RequestOfferIds).AllocatorInstance.Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               pFVar11 + (longlong)(this->RequestOfferIds).ArrayMax * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) break;
          iVar6 = (this->RequestOfferIds).ArrayNum;
          piVar1 = &(this->RequestOfferIds).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->RequestOfferIds).AllocatorInstance,piVar1);
          }
          (this->RequestOfferIds).ArrayNum = iVar6 + 1;
          pFVar11 = (this->RequestOfferIds).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_d8.Data;
          local_d8.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar11 + 8) = (undefined4)local_d0;
          *(undefined4 *)(pFVar11 + 0xc) = local_d0._4_4_;
          local_d0 = 0;
          pFVar12 = pFVar12 + 0x10;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((byte)LogOnlineStoreV2._0_1_ < 3) goto LAB_14ed00bd8;
      ::FString::PrintfImpl(&local_b8,L"Failed to get Store interface for %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineStoreV2);
    }
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
LAB_14ed00bd8:
  FinishTest(this);
  return;
}

