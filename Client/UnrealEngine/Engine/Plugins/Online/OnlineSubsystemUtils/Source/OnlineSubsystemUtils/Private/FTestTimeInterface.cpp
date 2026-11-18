// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// OnQueryServerUtcTimeComplete @ 14ecf0450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestTimeInterface::OnQueryServerUtcTimeComplete
          (FTestTimeInterface *this,bool param_1,FString *param_2,FString *param_3)

{
  IOnlineTime *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString local_28;
  FString local_18;
  
  if (((this->OnlineTime).Object == (IOnlineTime *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar1 = (this->OnlineTime).Object;
  (**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,&this->OnQueryServerUtcTimeCompleteDelegateHandle);
  if (param_1) {
    if ((byte)LogOnline._0_1_ < 5) goto LAB_14ecf0574;
    ::FString::PrintfImpl(&local_28,L"Successful query for server time. Result=[%s]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
  }
  else {
    if ((byte)LogOnline._0_1_ < 5) goto LAB_14ecf0574;
    ::FString::PrintfImpl(&local_18,L"Failed to query server time. Error=[%s]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14ecf0574:
  if (this != (FTestTimeInterface *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &this->OnQueryServerUtcTimeCompleteDelegate);
    pvVar2 = *(void **)&(this->OnQueryServerUtcTimeCompleteDelegate).field_0x8;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this->OnQueryServerUtcTimeCompleteDelegate);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->OnlineTime).SharedReferenceCount.ReferenceController);
    pFVar3 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(this,0x40);
  }
  return;
}

// Test @ 14ed00c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestTimeInterface::Test(FTestTimeInterface *this,UWorld *param_1)

{
  TSharedPtr<IOnlineTime,1> *pTVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  IOnlineSubsystem *pIVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  ulong64 *puVar12;
  FSharedReferencer<1> FVar13;
  IOnlineTime *pIVar14;
  FName local_res8 [2];
  FName local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  IOnlineTime *local_b0;
  FSharedReferencer<1> local_a8;
  FString local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar2 = (this->SubsystemName).Data.ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  if (iVar7 == 0) {
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
  }
  else if (iVar2 == 0) {
    pFVar8 = ::FName::FName(&local_res18,L"",FNAME_Find);
    local_res8[0] = *pFVar8;
  }
  else {
    pFVar8 = ::FName::FName(&local_res18,
                            (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,FNAME_Find)
    ;
    local_res8[0] = *pFVar8;
  }
  pIVar9 = IOnlineSubsystem::Get(local_res8);
  if (pIVar9 == (IOnlineSubsystem *)0x0) {
    local_50 = 0;
    local_b0 = (IOnlineTime *)0x0;
    local_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pIVar14 = (IOnlineTime *)FVar13.ReferenceController;
  }
  else {
    puVar10 = (undefined8 *)(**(code **)(pIVar9->_padding_ + 0x78))(pIVar9,local_48);
    pIVar14 = (IOnlineTime *)*puVar10;
    FVar13.ReferenceController = (TReferenceControllerBase<1> *)puVar10[1];
    puVar10[1] = 0;
    *puVar10 = 0;
    local_b0 = pIVar14;
    local_a8.ReferenceController = FVar13.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  pTVar1 = &this->OnlineTime;
  if (pTVar1 != (TSharedPtr<IOnlineTime,1> *)&local_b0) {
    pTVar1->Object = pIVar14;
    local_b0 = (IOnlineTime *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OnlineTime).SharedReferenceCount,&local_a8);
    FVar13.ReferenceController = local_a8.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  if (pTVar1->Object == (IOnlineTime *)0x0) {
    if (2 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_a0,L"Failed to get server time interface for %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &this->OnQueryServerUtcTimeCompleteDelegate);
    pvVar3 = *(void **)&(this->OnQueryServerUtcTimeCompleteDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this->OnQueryServerUtcTimeCompleteDelegate);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->OnlineTime).SharedReferenceCount.ReferenceController);
    pFVar4 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(this,0x40);
    return;
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_78);
  local_60 = &local_c0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AX_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestTimeInterface____A6AX_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[4] = OnQueryServerUtcTimeComplete;
    puVar10[3] = this;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnQueryServerUtcTimeCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_90);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  if ((pTVar1->Object == (IOnlineTime *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar12 = (ulong64 *)
            (**(code **)(pTVar1->Object->_padding_ + 0x10))
                      (pTVar1->Object,local_res20,&this->OnQueryServerUtcTimeCompleteDelegate);
  (this->OnQueryServerUtcTimeCompleteDelegateHandle).ID = *puVar12;
  if ((pTVar1->Object == (IOnlineTime *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014ed00e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar1->Object->_padding_ + 8))();
  return;
}

