// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 66

// CreateCopy @ 14a0d3d40

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVIPlugin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEAVIPlugin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a0d3dd0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVIPlugin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEAVIPlugin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a0d3e20

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVIPlugin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEAVIPlugin___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a0d3ed0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a0d3f60

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a0d3fb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a0d4060

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a0d40f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a0d4140

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a0d41f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a0d4280

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a0d42d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a0d4380

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a0d4410

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a0d4460

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a0d4510

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView_PEAVUObject__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXV__TArrayView_PEAVUObject__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a0d45a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView_PEAVUObject__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXV__TArrayView_PEAVUObject__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a0d45f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView_PEAVUObject__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRigVMRegistry_RWLock____A6AXV__TArrayView_PEAVUObject__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a0d6f70

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
          *this,IPlugin *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a0d6fc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
          *this,FAssetData *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a0d7010

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
          *this,FAssetData *param_1,FString *param_2)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a0d7070

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
          *this,UScriptStruct *param_1,bool param_2)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a0d70d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
          *this,TArrayView<FName_const_,int> *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8 [4];
  FName *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return;
}

// Execute @ 14a0d7120

void __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
          *this,TArrayView<UObject_*,int> *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8 [4];
  UObject **local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return;
}

// ExecuteIfSafe @ 14a0d74b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
                *this,IPlugin *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 14a0d7500

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
                *this,FAssetData *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 14a0d7550

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                *this,FAssetData *param_1,FString *param_2)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return true;
}

// ExecuteIfSafe @ 14a0d75b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
                *this,UScriptStruct *param_1,bool param_2)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return true;
}

// ExecuteIfSafe @ 14a0d7610

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
                *this,TArrayView<FName_const_,int> *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8 [4];
  FName *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return true;
}

// ExecuteIfSafe @ 14a0d7660

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
                *this,TArrayView<UObject_*,int> *param_1)

{
  FRigVMRegistry_RWLock *pFVar1;
  FRigVMRegistry_RWLock *local_res8 [4];
  UObject **local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FRigVMRegistry_RWLock,FRigVMRegistry_RWLock_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a0e1fa0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a0e1fb0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a0e1fc0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a0e1fd0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a0e1fe0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a0e1ff0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14a0e8a00

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14a0e8a10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14a0e8a20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14a0e8a30

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14a0e8a40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14a0e8a50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14a0f2970

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a0f2980

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a0f2990

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a0f29a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a0f29b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a0f29c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a0f4b50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14a0f4b60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14a0f4b70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14a0f4b80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14a0f4b90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14a0f4ba0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14a0f9a90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14a0f9aa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14a0f9ab0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14a0f9ac0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14a0f9ad0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14a0f9ae0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a112270

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a112280

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a112290

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a1122a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a1122b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a1122c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRigVMRegistry_RWLock,void___cdecl(TArrayView<UObject_*,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

