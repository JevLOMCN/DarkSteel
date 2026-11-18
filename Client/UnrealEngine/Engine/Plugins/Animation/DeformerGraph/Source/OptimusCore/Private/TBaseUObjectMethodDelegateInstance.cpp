// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 96

// CreateCopy @ 14e19b740

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIMeshDeformerProducer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerDynamicInstanceManager____A6AXPEAVIMeshDeformerProducer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_36822c87 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19b7d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIMeshDeformerProducer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerDynamicInstanceManager____A6AXPEAVIMeshDeformerProducer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_36822c87 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19b820

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIMeshDeformerProducer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerDynamicInstanceManager____A6AXPEAVIMeshDeformerProducer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_36822c87 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19b8d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUOptimusDeformer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AXPEAVUOptimusDeformer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_84c5e077 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19b960

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUOptimusDeformer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AXPEAVUOptimusDeformer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_84c5e077 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19b9b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUOptimusDeformer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AXPEAVUOptimusDeformer___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_84c5e077 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19ba60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TSoftObjectPtr_VUObject____AEBUFOptimusValueContainerStruct___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AXU__TSoftObjectPtr_VUObject____AEBUFOptimusValueContainerStruct___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_32a85410 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19baf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TSoftObjectPtr_VUObject____AEBUFOptimusValueContainerStruct___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AXU__TSoftObjectPtr_VUObject____AEBUFOptimusValueContainerStruct___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_32a85410 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19bb40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TSoftObjectPtr_VUObject____AEBUFOptimusValueContainerStruct___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AXU__TSoftObjectPtr_VUObject____AEBUFOptimusValueContainerStruct___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_32a85410 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19bbf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ab986fdf *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19bc80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ab986fdf *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19bcd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusDeformerInstance____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ab986fdf *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19bd80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_41a08624 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19be10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_41a08624 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19be60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_41a08624 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19bf10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_75e74b20 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19bfa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_75e74b20 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14e19bff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_75e74b20 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14e19c0a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode_GraphTerminal____A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19c130

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode_GraphTerminal____A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14e19c180

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode_GraphTerminal____A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14e19c230

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode_SubGraphReference____A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14e19c2c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode_SubGraphReference____A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14e19c310

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode_SubGraphReference____A6AXVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// Execute @ 14e1aac90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
          *this,IMeshDeformerProducer *param_1)

{
  UOptimusDeformerDynamicInstanceManager *pUVar1;
  UOptimusDeformerDynamicInstanceManager *local_res8;
  
  local_res8 = (UOptimusDeformerDynamicInstanceManager *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UOptimusDeformerDynamicInstanceManager,UOptimusDeformerDynamicInstanceManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14e1aace0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
          *this,UOptimusDeformer *param_1)

{
  UOptimusDeformerInstance *pUVar1;
  UOptimusDeformerInstance *local_res8;
  
  local_res8 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14e1aad30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
          *this,TSoftObjectPtr<UObject> *param_1,FOptimusValueContainerStruct *param_2)

{
  pmf_32a85410 pVar1;
  void *pvVar2;
  UOptimusDeformerInstance *pUVar3;
  UOptimusDeformerInstance *local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res8 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&>
                     (&local_res8);
  local_38 = *(undefined8 *)&param_1->SoftObjectPtr;
  local_30 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x8;
  uStack_2c = *(undefined4 *)&(param_1->SoftObjectPtr).field_0xc;
  uStack_28 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x10;
  uStack_24 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x14;
  pVar1 = this->MethodPtr;
  local_20 = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
  *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18 = 0;
  local_14 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x24;
  local_18 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x20;
  *(undefined8 *)&(param_1->SoftObjectPtr).field_0x20 = 0;
  (*(code *)pVar1)(pUVar3,&local_38,param_2);
  pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// Execute @ 14e1aadd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UOptimusDeformerInstance *pUVar1;
  UOptimusDeformerInstance *local_res8;
  
  local_res8 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14e1aae20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
          *this,FName param_1,FName param_2)

{
  UOptimusNode *pUVar1;
  UOptimusNode *local_res8;
  
  local_res8 = (UOptimusNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UOptimusNode,UOptimusNode_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14e1aae80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  UOptimusNode *pUVar1;
  UOptimusNode *local_res8 [4];
  
  local_res8[0] = (UOptimusNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UOptimusNode,UOptimusNode_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14e1aaec0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
          *this,FName param_1)

{
  UOptimusNode_GraphTerminal *pUVar1;
  UOptimusNode_GraphTerminal *local_res8;
  
  local_res8 = (UOptimusNode_GraphTerminal *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UOptimusNode_GraphTerminal,UOptimusNode_GraphTerminal_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14e1aaf10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
          *this,FName param_1)

{
  UOptimusNode_SubGraphReference *pUVar1;
  UOptimusNode_SubGraphReference *local_res8;
  
  local_res8 = (UOptimusNode_SubGraphReference *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UOptimusNode_SubGraphReference,UOptimusNode_SubGraphReference_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 14e1ac3b0

/* WARNING: Removing unreachable block (ram,0x00014e1ac41e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
                *this,IMeshDeformerProducer *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOptimusDeformerDynamicInstanceManager *pUVar3;
  UOptimusDeformerDynamicInstanceManager *pUVar4;
  UObject *pUVar5;
  UOptimusDeformerDynamicInstanceManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOptimusDeformerDynamicInstanceManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOptimusDeformerDynamicInstanceManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOptimusDeformerDynamicInstanceManager *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOptimusDeformerDynamicInstanceManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOptimusDeformerDynamicInstanceManager,UOptimusDeformerDynamicInstanceManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOptimusDeformerDynamicInstanceManager *)0x0;
}

// ExecuteIfSafe @ 14e1ac490

/* WARNING: Removing unreachable block (ram,0x00014e1ac4fe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
                *this,UOptimusDeformer *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOptimusDeformerInstance *pUVar3;
  UOptimusDeformerInstance *pUVar4;
  UObject *pUVar5;
  UOptimusDeformerInstance *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOptimusDeformerInstance *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOptimusDeformerInstance *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOptimusDeformerInstance *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOptimusDeformerInstance *)0x0;
}

// ExecuteIfSafe @ 14e1ac570

/* WARNING: Removing unreachable block (ram,0x00014e1ac5f0) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
                *this,TSoftObjectPtr<UObject> *param_1,FOptimusValueContainerStruct *param_2)

{
  pmf_32a85410 pVar1;
  void *pvVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UOptimusDeformerInstance *pUVar5;
  UObject *pUVar6;
  UOptimusDeformerInstance *local_res8;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UOptimusDeformerInstance *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UOptimusDeformerInstance *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar5 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 != (UOptimusDeformerInstance *)0x0) {
    local_res8 = pUVar5;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&>
                       (&local_res8);
    local_58 = *(undefined8 *)&param_1->SoftObjectPtr;
    local_50 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x8;
    uStack_4c = *(undefined4 *)&(param_1->SoftObjectPtr).field_0xc;
    uStack_48 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x10;
    uStack_44 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x14;
    pVar1 = this->MethodPtr;
    local_40 = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18 = 0;
    local_34 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x24;
    local_38 = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x20;
    *(undefined8 *)&(param_1->SoftObjectPtr).field_0x20 = 0;
    (*(code *)pVar1)(pUVar5,&local_58,param_2);
    if (pUVar6 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
    }
    pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    return true;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return false;
}

// ExecuteIfSafe @ 14e1ac6d0

/* WARNING: Removing unreachable block (ram,0x00014e1ac73f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOptimusDeformerInstance *pUVar3;
  UOptimusDeformerInstance *pUVar4;
  UObject *pUVar5;
  UOptimusDeformerInstance *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOptimusDeformerInstance *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOptimusDeformerInstance *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOptimusDeformerInstance *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOptimusDeformerInstance *)0x0;
}

// ExecuteIfSafe @ 14e1ac7b0

/* WARNING: Removing unreachable block (ram,0x00014e1ac7ec) */
/* WARNING: Removing unreachable block (ram,0x00014e1ac830) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
                *this,FName param_1,FName param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOptimusNode *pUVar3;
  UOptimusNode *pUVar4;
  UObject *pUVar5;
  UOptimusNode *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOptimusNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOptimusNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOptimusNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOptimusNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UOptimusNode,UOptimusNode_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOptimusNode *)0x0;
}

// ExecuteIfSafe @ 14e1ac8b0

/* WARNING: Removing unreachable block (ram,0x00014e1ac916) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOptimusNode *pUVar3;
  UOptimusNode *pUVar4;
  UObject *pUVar5;
  UOptimusNode *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOptimusNode *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOptimusNode *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UOptimusNode *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOptimusNode *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UOptimusNode,UOptimusNode_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOptimusNode *)0x0;
}

// ExecuteIfSafe @ 14e1ac980

/* WARNING: Removing unreachable block (ram,0x00014e1ac9b4) */
/* WARNING: Removing unreachable block (ram,0x00014e1ac9f8) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
                *this,FName param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOptimusNode_GraphTerminal *pUVar3;
  UOptimusNode_GraphTerminal *pUVar4;
  UObject *pUVar5;
  UOptimusNode_GraphTerminal *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOptimusNode_GraphTerminal *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOptimusNode_GraphTerminal *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOptimusNode_GraphTerminal *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOptimusNode_GraphTerminal *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOptimusNode_GraphTerminal,UOptimusNode_GraphTerminal_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOptimusNode_GraphTerminal *)0x0;
}

// ExecuteIfSafe @ 14e1aca70

/* WARNING: Removing unreachable block (ram,0x00014e1acaa4) */
/* WARNING: Removing unreachable block (ram,0x00014e1acae8) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
                *this,FName param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOptimusNode_SubGraphReference *pUVar3;
  UOptimusNode_SubGraphReference *pUVar4;
  UObject *pUVar5;
  UOptimusNode_SubGraphReference *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOptimusNode_SubGraphReference *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOptimusNode_SubGraphReference *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOptimusNode_SubGraphReference *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOptimusNode_SubGraphReference *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOptimusNode_SubGraphReference,UOptimusNode_SubGraphReference_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOptimusNode_SubGraphReference *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc050

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc060

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc070

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc080

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc090

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc0a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc0b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14e1bc0c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14e1cb970

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e1cb980

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e1cb990

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e1cb9a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e1cb9b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e1cb9c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e1cb9d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14e1cb9e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7ec0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7ed0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7ee0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7ef0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7f00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7f10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7f20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14e1e7f30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14e1e9b10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e1e9b40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e1e9b70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e1e9ba0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e1e9bd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e1e9c00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e1e9c30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14e1e9c60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14e1eea10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e1eea30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e1eea50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e1eea70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e1eea90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e1eeab0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e1eead0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14e1eeaf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14e1eff50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e1eff70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e1eff90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e1effb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e1effd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e1efff0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e1f0010

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14e1f0030

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14e228d00

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerDynamicInstanceManager,void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228d10

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228d20

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228d30

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusDeformerInstance,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228d40

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228d50

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228d60

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode_GraphTerminal,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14e228d70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOptimusNode_SubGraphReference,void___cdecl(FName),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

