// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 44

// CreateCopy @ 1436d7c30

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1436d7cc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1436d7d10

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1436d7dc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3dcba2ce *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1436d7e50

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3dcba2ce *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1436d7ea0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_3dcba2ce *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1436d7f50

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3dcba2ce *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1436d7fe0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3dcba2ce *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1436d8030

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_3dcba2ce *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1436d80e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e2ef1d40 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1436d8170

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e2ef1d40 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1436d81c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e2ef1d40 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1436d8de0

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::Execute(void *this,EConnectionType param_1,FString *param_2)

{
  FChaosVDRuntimeModule *pFVar1;
  FChaosVDRuntimeModule *local_res8;
  
  local_res8 = *(FChaosVDRuntimeModule **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2);
  return;
}

// Execute @ 1436d8e40

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FChaosVDRuntimeModule *pFVar1;
  FChaosVDRuntimeModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 1436d8e80

void __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
          *this)

{
  FChaosVDRuntimeModule *pFVar1;
  FChaosVDRuntimeModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 1436d8ec0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FChaosVDRuntimeModule *pFVar2;
  FChaosVDRuntimeModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 1436d8f10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(void *this,EConnectionType param_1,FString *param_2)

{
  FChaosVDRuntimeModule *pFVar1;
  FChaosVDRuntimeModule *local_res8;
  
  local_res8 = *(FChaosVDRuntimeModule **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 1436d8f70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FChaosVDRuntimeModule *pFVar1;
  FChaosVDRuntimeModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 1436d8fb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this)

{
  FChaosVDRuntimeModule *pFVar1;
  FChaosVDRuntimeModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 1436d8ff0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FChaosVDRuntimeModule *pFVar1;
  FChaosVDRuntimeModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FChaosVDRuntimeModule,FChaosVDRuntimeModule_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1436d9240

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 1436d9250

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1436d9260

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1436d9270

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1436d9770

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 1436d9780

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1436d9790

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1436d97a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1436d97c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1436d97d0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1436d97e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1436d97f0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1436d9cb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 1436d9cc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1436d9cd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1436d9ce0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1436d9e50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1436d9e60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1436d9e70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1436d9e80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1436e1dc0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1436e1dd0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1436e1de0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1436e1df0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FChaosVDRuntimeModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

