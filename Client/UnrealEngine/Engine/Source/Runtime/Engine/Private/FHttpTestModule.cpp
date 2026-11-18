// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FHttpTestModule @ 148805970

FHttpTestModule * __thiscall FHttpTestModule::FHttpTestModule(FHttpTestModule *this)

{
  FHttpManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  FHttpTestModule *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [8];
  FDelegateAllocation local_98;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  this->_padding_ = (longlong)IModuleInterface::vftable;
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IModuleInterface__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ActiveRequests = 0;
  FHttpModule::StartupModule((FHttpModule *)this);
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HttpManager != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FHttpTestModule *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (FHttpManager *)this->_padding_;
  local_b8 = (undefined1  [8])0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_b0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_b0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIHttpRequest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TSharedRef_VIHttpRequest___00___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FHttpTestModule__QEAA_XZ___V__6B_
    ;
    puVar5[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  FHttpManager::SetRequestAddedDelegate
            (pFVar1,(TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>
                     *)local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_88);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HttpManager != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FHttpTestModule *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (FHttpManager *)this->_padding_;
  local_a0 = (undefined1  [8])0x0;
  local_98.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_98.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_98;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_98);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIHttpRequest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TSharedRef_VIHttpRequest___00___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0FHttpTestModule__QEAA_XZ___V__6B_
    ;
    puVar5[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  FHttpManager::SetRequestCompletedDelegate
            (pFVar1,(TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>
                     *)local_a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_70);
  if ((local_98.DelegateSize != 0) &&
     (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_98.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_98.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_98.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  return this;
}

