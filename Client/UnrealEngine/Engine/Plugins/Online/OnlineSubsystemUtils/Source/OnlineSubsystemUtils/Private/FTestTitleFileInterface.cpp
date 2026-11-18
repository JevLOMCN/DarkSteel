// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 5

// FTestTitleFileInterface @ 14ecd8a10

FTestTitleFileInterface * __thiscall
FTestTitleFileInterface::FTestTitleFileInterface(FTestTitleFileInterface *this,FString *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTestTitleFileInterface *pFVar6;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  ::FString::FString(&this->SubsystemName,param_1);
  puVar1 = &(this->OnEnumerateFilesCompleteDelegate).field_0x8;
  (this->OnlineTitleFile).Object = (IOnlineTitleFile *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->OnEnumerateFilesCompleteDelegate).field_0x10 = 0;
  (this->OnlineTitleFile).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnEnumerateFilesCompleteDelegate = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnEnumerateFilesCompleteDelegate,(FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AX_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    puVar4[4] = OnEnumerateFilesComplete;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestTitleFileInterface____A6AX_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = this;
    if (this == (FTestTitleFileInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FTestTitleFileInterface *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  puVar1 = &(this->OnReadFileCompleteDelegate).field_0x8;
  *(undefined8 *)&this->OnReadFileCompleteDelegate = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->OnReadFileCompleteDelegate).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnReadFileCompleteDelegate,(FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AX_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    puVar4[4] = OnReadFileComplete;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestTitleFileInterface____A6AX_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = this;
    if (this == (FTestTitleFileInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FTestTitleFileInterface *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (this->OnEnumerateFilesCompleteDelegateHandle).ID = 0;
  (this->OnReadFileCompleteDelegateHandle).ID = 0;
  this->NumPendingFileReads = 0;
  return this;
}

// FinishTest @ 14ece6c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestTitleFileInterface::FinishTest(FTestTitleFileInterface *this)

{
  IOnlineTitleFile *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString local_18;
  
  pIVar1 = (this->OnlineTitleFile).Object;
  if (pIVar1 != (IOnlineTitleFile *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x20))(pIVar1,0);
    if (((this->OnlineTitleFile).Object == (IOnlineTitleFile *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar1 = (this->OnlineTitleFile).Object;
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,&this->OnEnumerateFilesCompleteDelegateHandle);
    if (((this->OnlineTitleFile).Object == (IOnlineTitleFile *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar1 = (this->OnlineTitleFile).Object;
    (**(code **)(pIVar1->_padding_ + 0x68))(pIVar1,&this->OnReadFileCompleteDelegateHandle);
  }
  if (4 < (byte)LogOnlineTitleFile._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Test finished");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineTitleFile);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReadFileCompleteDelegate);
  pvVar2 = *(void **)&(this->OnReadFileCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReadFileCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnumerateFilesCompleteDelegate);
  pvVar2 = *(void **)&(this->OnEnumerateFilesCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnumerateFilesCompleteDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineTitleFile).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  ::operator_delete(this,0x68);
  return;
}

// OnEnumerateFilesComplete @ 14ecebf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestTitleFileInterface::OnEnumerateFilesComplete
          (FTestTitleFileInterface *this,bool param_1,FString *param_2)

{
  IOnlineTitleFile *pIVar1;
  code *pcVar2;
  FCloudFileHeader *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FCloudFileHeader *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (FCloudFileHeader *)0x0;
  local_20 = 0;
  if (((this->OnlineTitleFile).Object == (IOnlineTitleFile *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->OnlineTitleFile).Object;
  (**(code **)(pIVar1->_padding_ + 0x50))(pIVar1,&local_28);
  if (4 < (byte)LogOnlineTitleFile._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Found %i files");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineTitleFile);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->NumPendingFileReads = (int)local_20;
  if ((int)local_20 < 1) {
    FinishTest(this);
    iVar6 = (int)local_20;
  }
  else {
    for (uVar7 = 0; (iVar6 = (int)local_20, -1 < (int)uVar7 && ((int)uVar7 < (int)local_20));
        uVar7 = uVar7 + 1) {
      uVar5 = 0;
      if ((int)uVar7 < (int)local_20) {
        uVar5 = ~uVar7 >> 0x1f;
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
      pFVar3 = local_28;
      if (((this->OnlineTitleFile).Object == (IOnlineTitleFile *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar1 = (this->OnlineTitleFile).Object;
      (**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,&pFVar3[(int)uVar7].DLName);
    }
  }
  DestructItems<FCloudFileHeader,int>(local_28,iVar6);
  if (local_28 != (FCloudFileHeader *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// OnReadFileComplete @ 14ecf2110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestTitleFileInterface::OnReadFileComplete
          (FTestTitleFileInterface *this,bool param_1,FString *param_2)

{
  IOnlineTitleFile *pIVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1) {
    if (4 < (byte)LogOnlineTitleFile._0_1_) {
      ::FString::PrintfImpl(&local_38,L"File read. file=[%s]");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineTitleFile);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    local_48 = (FScriptContainerElement *)0x0;
    local_40 = 0;
    if (((this->OnlineTitleFile).Object == (IOnlineTitleFile *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->OnlineTitleFile).Object;
    (**(code **)(pIVar1->_padding_ + 8))(pIVar1,param_2,&local_48);
    if (4 < (byte)LogOnlineTitleFile._0_1_) {
      ::FString::PrintfImpl(&local_28,L"File length=%d. file=[%s]");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineTitleFile);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (((this->OnlineTitleFile).Object == (IOnlineTitleFile *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->OnlineTitleFile).Object;
    (**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,param_2);
    local_18.Data.AllocatorInstance.Data = local_48;
  }
  else {
    if ((byte)LogOnlineTitleFile._0_1_ < 5) goto LAB_14ecf22e3;
    ::FString::PrintfImpl(&local_18,L"File not read. file=[%s]");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineTitleFile);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14ecf22e3:
  this->NumPendingFileReads = this->NumPendingFileReads + -1;
  if (this->NumPendingFileReads < 1) {
    FinishTest(this);
    return;
  }
  return;
}

// Test @ 14ed00f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestTitleFileInterface::Test(FTestTitleFileInterface *this,UWorld *param_1)

{
  TSharedPtr<IOnlineTitleFile,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  undefined8 *puVar8;
  ulong64 *puVar9;
  FSharedReferencer<1> FVar10;
  IOnlineTitleFile *pIVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  FName local_res18;
  FName local_res20;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  IOnlineTitleFile *local_78;
  FSharedReferencer<1> local_70;
  FString local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar2 = (this->SubsystemName).Data.ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
  }
  else if (iVar2 == 0) {
    pFVar6 = ::FName::FName(&local_res20,L"",FNAME_Find);
    local_res18 = *pFVar6;
  }
  else {
    pFVar6 = ::FName::FName(&local_res20,
                            (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,FNAME_Find)
    ;
    local_res18 = *pFVar6;
  }
  pIVar7 = IOnlineSubsystem::Get(&local_res18);
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    local_50 = 0;
    local_78 = (IOnlineTitleFile *)0x0;
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pIVar11 = (IOnlineTitleFile *)FVar10.ReferenceController;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0x88))(pIVar7,local_48);
    pIVar11 = (IOnlineTitleFile *)*puVar8;
    FVar10.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    local_78 = pIVar11;
    local_70.ReferenceController = FVar10.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  pTVar1 = &this->OnlineTitleFile;
  if (pTVar1 != (TSharedPtr<IOnlineTitleFile,1> *)&local_78) {
    pTVar1->Object = pIVar11;
    local_78 = (IOnlineTitleFile *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OnlineTitleFile).SharedReferenceCount,&local_70);
    FVar10.ReferenceController = local_70.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  pIVar11 = pTVar1->Object;
  if (pIVar11 == (IOnlineTitleFile *)0x0) {
    if (2 < (byte)LogOnlineTitleFile._0_1_) {
      ::FString::PrintfImpl(&local_68,L"Failed to get title file interface for %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineTitleFile);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  puVar9 = (ulong64 *)
           (**(code **)(pIVar11->_padding_ + 0x30))
                     (pIVar11,local_88,&this->OnEnumerateFilesCompleteDelegate);
  (this->OnEnumerateFilesCompleteDelegateHandle).ID = *puVar9;
  if ((pTVar1->Object == (IOnlineTitleFile *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar9 = (ulong64 *)
           (**(code **)(pTVar1->Object->_padding_ + 0x60))
                     (pTVar1->Object,local_80,&this->OnReadFileCompleteDelegate);
  (this->OnReadFileCompleteDelegateHandle).ID = *puVar9;
  if ((pTVar1->Object == (IOnlineTitleFile *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res8 = 0;
  local_resc = 0xffffffff;
  (**(code **)(pTVar1->Object->_padding_ + 0x28))(pTVar1->Object,&local_res8);
  return;
}

