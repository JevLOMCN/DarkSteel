// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 44

// CreateCopy @ 14e19b100

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6db62032 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19b190

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6db62032 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19b1e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXAEBUFAssetData___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_6db62032 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19b290

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1fcf3c98 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19b320

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1fcf3c98 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19b370

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXAEBUFAssetData__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_1fcf3c98 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19b420

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_301fe290 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19b4b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_301fe290 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19b500

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXPEBVUScriptStruct___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_301fe290 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19b5b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_82d146d2 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19b640

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_82d146d2 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19b690

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFOptimusDataTypeRegistry____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_82d146d2 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14e1aab40

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
          *this,FAssetData *param_1)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14e1aab90

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
          *this,FAssetData *param_1,FString *param_2)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 14e1aabf0

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
          *this,UScriptStruct *param_1,bool param_2)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 14e1aac50

void __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
          *this)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>(local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 14e1ac260

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
                *this,FAssetData *param_1)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14e1ac2b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                *this,FAssetData *param_1,FString *param_2)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14e1ac310

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
                *this,UScriptStruct *param_1,bool param_2)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14e1ac370

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this)

{
  FOptimusDataTypeRegistry *pFVar1;
  FOptimusDataTypeRegistry *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>(local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc010

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc020

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc030

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc040

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14e1cb930

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14e1cb940

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14e1cb950

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14e1cb960

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14e1e7e80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e1e7e90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e1e7ea0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14e1e7eb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14e1e9ad0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14e1e9ae0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14e1e9af0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14e1e9b00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14e1eff10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14e1eff20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14e1eff30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14e1eff40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14e228cc0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228cd0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228ce0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228cf0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FOptimusDataTypeRegistry,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

