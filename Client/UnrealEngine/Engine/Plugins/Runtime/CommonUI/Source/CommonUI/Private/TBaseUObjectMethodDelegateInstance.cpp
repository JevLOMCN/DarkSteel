// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 684

// CreateCopy @ 14a7cafb0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUCommonUIActionRouterBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9a3b216f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cb040

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUCommonUIActionRouterBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9a3b216f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cb090

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUCommonUIActionRouterBase____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9a3b216f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cb140

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cb1d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cb220

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cb2d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cb360

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cb3b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cb460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cb4f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cb540

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAnalogSlider____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cb5f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActionWidget____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cb680

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActionWidget____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cb6d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActionWidget____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cb780

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cb810

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cb860

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cb910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cb9a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cb9f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cbaa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
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

// CreateCopy @ 14a7cbb30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cbb90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
    ;
    puVar6[1] = this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AXXZUFDefaultDelegateUserPolicy__PEAVUCommonActivatableWidget____6B_
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

// CreateCopy @ 14a7cbc40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cbcd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cbd20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetContainerBase____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cbdd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar2 + 1) = (char)this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetSwitcher____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
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

// CreateCopy @ 14a7cbe60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar2 + 1) = (char)this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetSwitcher____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cbec0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar6 + 1) = (char)this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidgetSwitcher____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
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

// CreateCopy @ 14a7cbf70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc000

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cc050

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc100

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc190

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cc1e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonAnimatedSwitcher____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc290

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBorder____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc320

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBorder____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cc370

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBorder____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc420

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc4b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cc500

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc5b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cc640

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cc690

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cc740

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar2 + 1) = (char)this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
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

// CreateCopy @ 14a7cc7d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar2 + 1) = (char)this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cc830

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar6 + 1) = (char)this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionBar____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
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

// CreateCopy @ 14a7cc8e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionButton____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cc970

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionButton____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cc9c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonBoundActionButton____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cca70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ccb00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ccb50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ccc00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ccc90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ccce0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ccd90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cce20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cce70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ccf20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ccfb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cd000

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd0b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd140

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cd190

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd240

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd2d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cd320

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd3d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cd460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cd4b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cd560

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd5f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cd640

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd6f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd780

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cd7d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd880

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cd910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cd960

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cda10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cdaa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cdaf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__AEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cdba0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cdc30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cdc80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cdd30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cddc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cde10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBUFGeometry__AEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cdec0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cdf50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cdfa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXAEBVFDragDropEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce050

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce0e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ce130

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonButtonInternalBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce1e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonCustomNavigation____A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7ce270

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonCustomNavigation____A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ce2c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonCustomNavigation____A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7ce370

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonDateTimeTextBlock____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce400

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonDateTimeTextBlock____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ce450

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonDateTimeTextBlock____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce500

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCommonUIVisibilitySubsystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonHardwareVisibilityBorder____A6AXPEAVUCommonUIVisibilitySubsystem___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce590

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCommonUIVisibilitySubsystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonHardwareVisibilityBorder____A6AXPEAVUCommonUIVisibilitySubsystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ce5e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCommonUIVisibilitySubsystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonHardwareVisibilityBorder____A6AXPEAVUCommonUIVisibilitySubsystem___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce690

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonHierarchicalScrollBox____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce720

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonHierarchicalScrollBox____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ce770

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonHierarchicalScrollBox____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce820

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyImage____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce8b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyImage____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7ce900

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyImage____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ce9b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyWidget____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cea40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyWidget____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cea90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyWidget____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ceb40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLoadGuard____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cebd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLoadGuard____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cec20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLoadGuard____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cecd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonNumericTextBlock____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7ced60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonNumericTextBlock____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cedb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonNumericTextBlock____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cee60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonRotator____A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7ceef0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonRotator____A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cef40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonRotator____A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7ceff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cf080

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cf0d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cf180

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cf210

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7cf260

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7cf310

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9eb5a73c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cf3a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9eb5a73c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cf3f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEAV__TArray_UFAutoCompleteCommand__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9eb5a73c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cf4a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUCommonActivatableWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEAVUCommonActivatableWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0050741e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cf530

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUCommonActivatableWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEAVUCommonActivatableWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0050741e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cf580

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUCommonActivatableWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEAVUCommonActivatableWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0050741e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cf630

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFFocusEvent__AEBVFWeakWidgetPath__AEBV__TSharedPtr_VSWidget___00__AEBVFWidgetPath__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEBUFFocusEvent__AEBVFWeakWidgetPath__AEBV__TSharedPtr_VSWidget___00__AEBVFWidgetPath__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_546395b4 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cf6c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFFocusEvent__AEBVFWeakWidgetPath__AEBV__TSharedPtr_VSWidget___00__AEBVFWidgetPath__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEBUFFocusEvent__AEBVFWeakWidgetPath__AEBV__TSharedPtr_VSWidget___00__AEBVFWidgetPath__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_546395b4 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cf710

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFFocusEvent__AEBVFWeakWidgetPath__AEBV__TSharedPtr_VSWidget___00__AEBVFWidgetPath__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXAEBUFFocusEvent__AEBVFWeakWidgetPath__AEBV__TSharedPtr_VSWidget___00__AEBVFWidgetPath__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_546395b4 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cf7c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAHUD__PEAVUCanvas__AEBVFDebugDisplayInfo__AEAM3_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXPEAVAHUD__PEAVUCanvas__AEBVFDebugDisplayInfo__AEAM3_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_078feaf1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cf850

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAHUD__PEAVUCanvas__AEBVFDebugDisplayInfo__AEAM3_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXPEAVAHUD__PEAVUCanvas__AEBVFDebugDisplayInfo__AEAM3_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_078feaf1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cf8a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAHUD__PEAVUCanvas__AEBVFDebugDisplayInfo__AEAM3_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXPEAVAHUD__PEAVUCanvas__AEBVFDebugDisplayInfo__AEAM3_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_078feaf1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cf950

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_83b3fc76 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cf9e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_83b3fc76 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cfa30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_83b3fc76 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cfae0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->UserObject).WeakPtr;
    *(pmf_691450a4 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cfb90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->UserObject).WeakPtr;
    *(pmf_691450a4 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cfc00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFActivatableTreeRoot___00____6B_
    ;
    *(FWeakObjectPtr *)(puVar4 + 4) = (this->UserObject).WeakPtr;
    *(pmf_691450a4 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cfcc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_99746d68 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cfd50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_99746d68 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7cfda0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIActionRouterBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_99746d68 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cfe50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIVisibilitySubsystem____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7cfee0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIVisibilitySubsystem____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14a7cff30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonUIVisibilitySubsystem____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7cffe0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonVideoPlayer____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7d0070

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonVideoPlayer____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7d00c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonVideoPlayer____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7d0170

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonVideoPlayer____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7d0200

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonVideoPlayer____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7d0250

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonVideoPlayer____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7d0300

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7d0390

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7d03e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_AV__TSharedRef_VSWidget___00__PEAVUPanelSlot___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7d0490

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7d0520

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7d0570

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7d0620

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7d06b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7d0700

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonWidgetCarousel____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14a7d07b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDEPRECATED_UCommonVisibilityWidgetBase____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7d0840

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDEPRECATED_UCommonVisibilityWidgetBase____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a7d0890

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDEPRECATED_UCommonVisibilityWidgetBase____A6AXW4ECommonInputType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a7d59d0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UCommonUIActionRouterBase *pUVar1;
  UCommonUIActionRouterBase *local_res8 [4];
  
  local_res8[0] = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14a7d5a10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
        *this,float param_1)

{
  UAnalogSlider *pUVar1;
  UAnalogSlider *local_res8 [4];
  
  local_res8[0] = (UAnalogSlider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d5a70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  UAnalogSlider *pUVar1;
  UAnalogSlider *local_res8;
  
  local_res8 = (UAnalogSlider *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  return;
}

// Execute @ 14a7d5ac0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  UAnalogSlider *pUVar1;
  UAnalogSlider *local_res8 [4];
  
  local_res8[0] = (UAnalogSlider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d5b00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  UCommonActionWidget *pUVar1;
  UCommonActionWidget *local_res8;
  
  local_res8 = (UCommonActionWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonActionWidget,UCommonActionWidget_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(&pUVar1->field_0x0 + *(int *)((longlong)this + 0x28),param_1)
  ;
  return;
}

// Execute @ 14a7d5b50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UCommonActivatableWidget *pUVar1;
  UCommonActivatableWidget *local_res8 [4];
  
  local_res8[0] = (UCommonActivatableWidget *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonActivatableWidget,UCommonActivatableWidget_*_&>(local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d5b90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
          *this,int param_1)

{
  UCommonActivatableWidgetContainerBase *pUVar1;
  UCommonActivatableWidgetContainerBase *local_res8;
  
  local_res8 = (UCommonActivatableWidgetContainerBase *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d5be0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
          *this)

{
  UCommonActivatableWidgetContainerBase *pUVar1;
  UCommonActivatableWidgetContainerBase *local_res8 [4];
  
  local_res8[0] =
       (UCommonActivatableWidgetContainerBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             this->_padding_);
  return;
}

// Execute @ 14a7d5c30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UCommonActivatableWidgetContainerBase *pUVar1;
  UCommonActivatableWidgetContainerBase *local_res8;
  
  local_res8 = (UCommonActivatableWidgetContainerBase *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d5c80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
          *this)

{
  UCommonActivatableWidgetSwitcher *pUVar1;
  UCommonActivatableWidgetSwitcher *local_res8 [4];
  
  local_res8[0] =
       (UCommonActivatableWidgetSwitcher *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonActivatableWidgetSwitcher,UCommonActivatableWidgetSwitcher_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (char)this->_padding_);
  return;
}

// Execute @ 14a7d5cd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
          *this,int param_1)

{
  UCommonAnimatedSwitcher *pUVar1;
  UCommonAnimatedSwitcher *local_res8;
  
  local_res8 = (UCommonAnimatedSwitcher *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonAnimatedSwitcher,UCommonAnimatedSwitcher_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d5d20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UCommonAnimatedSwitcher *pUVar1;
  UCommonAnimatedSwitcher *local_res8;
  
  local_res8 = (UCommonAnimatedSwitcher *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonAnimatedSwitcher,UCommonAnimatedSwitcher_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d5d70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  UCommonBorder *pUVar1;
  UCommonBorder *local_res8 [4];
  
  local_res8[0] = (UCommonBorder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonBorder,UCommonBorder_*_&>(local_res8);
  (**(code **)&this->MethodPtr)(&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d5db0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
          *this,int param_1)

{
  UCommonBoundActionBar *pUVar1;
  UCommonBoundActionBar *local_res8;
  
  local_res8 = (UCommonBoundActionBar *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d5e00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  UCommonBoundActionBar *pUVar1;
  UCommonBoundActionBar *local_res8;
  
  local_res8 = (UCommonBoundActionBar *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  return;
}

// Execute @ 14a7d5e50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
          *this)

{
  UCommonBoundActionBar *pUVar1;
  UCommonBoundActionBar *local_res8 [4];
  
  local_res8[0] = (UCommonBoundActionBar *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (char)this->_padding_);
  return;
}

// Execute @ 14a7d5ea0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  UCommonBoundActionButton *pUVar1;
  UCommonBoundActionButton *local_res8 [4];
  
  local_res8[0] = (UCommonBoundActionButton *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonBoundActionButton,UCommonBoundActionButton_*_&>(local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d5f00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8;
  
  local_res8 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 14a7d5f80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FDragDropEvent *param_2)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8;
  
  local_res8 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 14a7d6000

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8;
  
  local_res8 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a7d6060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8;
  
  local_res8 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a7d60c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FDragDropEvent *param_1)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8;
  
  local_res8 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d6110

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8 [4];
  
  local_res8[0] = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d6170

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8;
  
  local_res8 = (UCommonButtonBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  return;
}

// Execute @ 14a7d61c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UCommonButtonBase *pUVar1;
  UCommonButtonBase *local_res8 [4];
  
  local_res8[0] = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d6200

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  UCommonButtonBase *pUVar2;
  UCommonButtonBase *local_res8 [4];
  
  local_res8[0] = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                     (local_res8);
  uVar1 = (**(code **)&this->MethodPtr)
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                     param_1);
  return (bool)uVar1;
}

// Execute @ 14a7d6260

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  UCommonButtonInternalBase *pUVar1;
  UCommonButtonInternalBase *local_res8;
  
  local_res8 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,__return_storage_ptr__,
             param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 14a7d62e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FDragDropEvent *param_2)

{
  UCommonButtonInternalBase *pUVar1;
  UCommonButtonInternalBase *local_res8;
  
  local_res8 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,__return_storage_ptr__,
             param_1,param_2);
  return __return_storage_ptr__;
}

// Execute @ 14a7d6360

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__)

{
  UCommonButtonInternalBase *pUVar1;
  UCommonButtonInternalBase *local_res8;
  
  local_res8 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a7d63c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  UCommonButtonInternalBase *pUVar1;
  UCommonButtonInternalBase *local_res8;
  
  local_res8 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
  return;
}

// Execute @ 14a7d6420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FDragDropEvent *param_1)

{
  UCommonButtonInternalBase *pUVar1;
  UCommonButtonInternalBase *local_res8;
  
  local_res8 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d6470

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UCommonButtonInternalBase *pUVar1;
  UCommonButtonInternalBase *local_res8 [4];
  
  local_res8[0] = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)(&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d64b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::Execute(void *this,EUINavigation param_1)

{
  undefined1 uVar1;
  UCommonCustomNavigation *pUVar2;
  UCommonCustomNavigation *local_res8;
  
  local_res8 = (UCommonCustomNavigation *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UCommonCustomNavigation,UCommonCustomNavigation_*_&>(&local_res8);
  uVar1 = (**(code **)((longlong)this + 0x20))
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)((longlong)this + 0x28),
                     param_1);
  return (bool)uVar1;
}

// Execute @ 14a7d6500

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UCommonDateTimeTextBlock *pUVar1;
  UCommonDateTimeTextBlock *local_res8 [4];
  
  local_res8[0] = (UCommonDateTimeTextBlock *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonDateTimeTextBlock,UCommonDateTimeTextBlock_*_&>(local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d6540

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
          *this,UCommonUIVisibilitySubsystem *param_1)

{
  UCommonHardwareVisibilityBorder *pUVar1;
  UCommonHardwareVisibilityBorder *local_res8;
  
  local_res8 = (UCommonHardwareVisibilityBorder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonHardwareVisibilityBorder,UCommonHardwareVisibilityBorder_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d6590

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  UCommonHierarchicalScrollBox *pUVar1;
  UCommonHierarchicalScrollBox *local_res8 [4];
  
  local_res8[0] = (UCommonHierarchicalScrollBox *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonHierarchicalScrollBox,UCommonHierarchicalScrollBox_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)(&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d65f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UCommonLazyImage *pUVar1;
  UCommonLazyImage *local_res8;
  
  local_res8 = (UCommonLazyImage *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonLazyImage,UCommonLazyImage_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d6640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UCommonLazyWidget *pUVar1;
  UCommonLazyWidget *local_res8;
  
  local_res8 = (UCommonLazyWidget *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonLazyWidget,UCommonLazyWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d6690

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UCommonLoadGuard *pUVar1;
  UCommonLoadGuard *local_res8;
  
  local_res8 = (UCommonLoadGuard *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonLoadGuard,UCommonLoadGuard_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d66e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UCommonNumericTextBlock *pUVar1;
  UCommonNumericTextBlock *local_res8 [4];
  
  local_res8[0] = (UCommonNumericTextBlock *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonNumericTextBlock,UCommonNumericTextBlock_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d6720

TSharedPtr<SWidget,1> * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,EUINavigation param_1)

{
  UCommonRotator *pUVar1;
  UCommonRotator *local_res8;
  
  local_res8 = (UCommonRotator *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonRotator,UCommonRotator_*_&>(&local_res8)
  ;
  (**(code **)((longlong)this + 0x20))
            (&pUVar1->field_0x0 + *(int *)((longlong)this + 0x28),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 14a7d6790

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UCommonTabListWidgetBase *pUVar1;
  UCommonTabListWidgetBase *local_res8 [4];
  
  local_res8[0] = (UCommonTabListWidgetBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonTabListWidgetBase,UCommonTabListWidgetBase_*_&>(local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14a7d67d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  UCommonTabListWidgetBase *pUVar2;
  UCommonTabListWidgetBase *local_res8 [4];
  
  local_res8[0] = (UCommonTabListWidgetBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UCommonTabListWidgetBase,UCommonTabListWidgetBase_*_&>(local_res8)
  ;
  uVar1 = (**(code **)&this->MethodPtr)
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                     param_1);
  return (bool)uVar1;
}

// Execute @ 14a7d6830

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *param_1)

{
  UCommonUIActionRouterBase *pUVar1;
  UCommonUIActionRouterBase *local_res8;
  
  local_res8 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14a7d6880

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
          *this,UCommonActivatableWidget *param_1)

{
  UCommonUIActionRouterBase *pUVar1;
  UCommonUIActionRouterBase *local_res8;
  
  local_res8 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14a7d68d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
          *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,TSharedPtr<SWidget,1> *param_3,
         FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  UCommonUIActionRouterBase *pUVar1;
  UCommonUIActionRouterBase *local_res8;
  
  local_res8 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}

// Execute @ 14a7d6950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
          *this,AHUD *param_1,UCanvas *param_2,FDebugDisplayInfo *param_3,float *param_4,
         float *param_5)

{
  UCommonUIActionRouterBase *pUVar1;
  UCommonUIActionRouterBase *local_res8;
  
  local_res8 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}

// Execute @ 14a7d69d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UCommonUIActionRouterBase *pUVar1;
  UCommonUIActionRouterBase *local_res8 [4];
  
  local_res8[0] = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14a7d6a10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
          *this)

{
  pmf_691450a4 pVar1;
  UCommonUIActionRouterBase *pUVar2;
  UCommonUIActionRouterBase *local_res8 [4];
  longlong local_18;
  longlong local_10;
  
  local_res8[0] = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (local_res8);
  local_10 = this->_padding_;
  local_18 = this->_padding_;
  pVar1 = this->MethodPtr;
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  (*(code *)pVar1)(pUVar2,&local_18);
  return;
}

// Execute @ 14a7d6a70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  UCommonUIActionRouterBase *pUVar2;
  UCommonUIActionRouterBase *local_res8 [4];
  
  local_res8[0] = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pUVar2,param_1);
  return (bool)uVar1;
}

// Execute @ 14a7d6ac0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  UCommonUIVisibilitySubsystem *pUVar1;
  UCommonUIVisibilitySubsystem *local_res8;
  
  local_res8 = (UCommonUIVisibilitySubsystem *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonUIVisibilitySubsystem,UCommonUIVisibilitySubsystem_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1);
  return;
}

// Execute @ 14a7d6b10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

EActiveTimerReturnType __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,float param_2)

{
  EActiveTimerReturnType EVar1;
  UCommonVideoPlayer *pUVar2;
  UCommonVideoPlayer *local_res8 [4];
  
  local_res8[0] =
       (UCommonVideoPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar2 = UE::Core::Private::DereferenceIfNecessary<UCommonVideoPlayer,UCommonVideoPlayer_*_&>
                     (local_res8);
  EVar1 = (**(code **)((longlong)this + 0x20))
                    (&pUVar2->field_0x0 + *(int *)((longlong)this + 0x28),SUB84(param_1,0),param_2);
  return EVar1;
}

// Execute @ 14a7d6b80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::Execute(void *this,EMediaEvent param_1)

{
  UCommonVideoPlayer *pUVar1;
  UCommonVideoPlayer *local_res8;
  
  local_res8 = (UCommonVideoPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UCommonVideoPlayer,UCommonVideoPlayer_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(&pUVar1->field_0x0 + *(int *)((longlong)this + 0x28),param_1)
  ;
  return;
}

// Execute @ 14a7d6bd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SWidget,1> *__return_storage_ptr__,UPanelSlot *param_1)

{
  UCommonWidgetCarousel *pUVar1;
  UCommonWidgetCarousel *local_res8;
  
  local_res8 = (UCommonWidgetCarousel *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 14a7d6c40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
          *this,int param_1)

{
  UCommonWidgetCarousel *pUVar1;
  UCommonWidgetCarousel *local_res8;
  
  local_res8 = (UCommonWidgetCarousel *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a7d6c90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  UCommonWidgetCarousel *pUVar2;
  UCommonWidgetCarousel *local_res8 [4];
  
  local_res8[0] = (UCommonWidgetCarousel *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&>(local_res8);
  uVar1 = (**(code **)&this->MethodPtr)
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                     param_1);
  return (bool)uVar1;
}

// Execute @ 14a7d6cf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::Execute(void *this,ECommonInputType param_1)

{
  UDEPRECATED_UCommonVisibilityWidgetBase *pUVar1;
  UDEPRECATED_UCommonVisibilityWidgetBase *local_res8;
  
  local_res8 = (UDEPRECATED_UCommonVisibilityWidgetBase *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UDEPRECATED_UCommonVisibilityWidgetBase,UDEPRECATED_UCommonVisibilityWidgetBase_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  return;
}

// ExecuteIfSafe @ 14a7d7990

/* WARNING: Removing unreachable block (ram,0x00014a7d79f6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonUIActionRouterBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIActionRouterBase *)0x0;
}

// ExecuteIfSafe @ 14a7d7a60

/* WARNING: Removing unreachable block (ram,0x00014a7d7ace) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAnalogSlider *pUVar3;
  UAnalogSlider *pUVar4;
  UObject *pUVar5;
  UAnalogSlider *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAnalogSlider *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAnalogSlider *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAnalogSlider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAnalogSlider *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&>(&local_res8)
    ;
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAnalogSlider *)0x0;
}

// ExecuteIfSafe @ 14a7d7b50

/* WARNING: Removing unreachable block (ram,0x00014a7d7bbf) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAnalogSlider *pUVar3;
  UAnalogSlider *pUVar4;
  UObject *pUVar5;
  UAnalogSlider *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAnalogSlider *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAnalogSlider *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAnalogSlider *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UAnalogSlider *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&>(&local_res8)
    ;
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAnalogSlider *)0x0;
}

// ExecuteIfSafe @ 14a7d7c30

/* WARNING: Removing unreachable block (ram,0x00014a7d7c96) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAnalogSlider *pUVar3;
  UAnalogSlider *pUVar4;
  UObject *pUVar5;
  UAnalogSlider *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAnalogSlider *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAnalogSlider *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UAnalogSlider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAnalogSlider *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&>(&local_res8)
    ;
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAnalogSlider *)0x0;
}

// ExecuteIfSafe @ 14a7d7d00

/* WARNING: Removing unreachable block (ram,0x00014a7d7d6f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonActionWidget *pUVar3;
  UCommonActionWidget *pUVar4;
  UObject *pUVar5;
  UCommonActionWidget *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonActionWidget *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonActionWidget *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonActionWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UCommonActionWidget *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonActionWidget,UCommonActionWidget_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              (&pUVar4->field_0x0 + *(int *)((longlong)this + 0x28),param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonActionWidget *)0x0;
}

// ExecuteIfSafe @ 14a7d7de0

/* WARNING: Removing unreachable block (ram,0x00014a7d7e46) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonActivatableWidget *pUVar3;
  UCommonActivatableWidget *pUVar4;
  UObject *pUVar5;
  UCommonActivatableWidget *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonActivatableWidget *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonActivatableWidget *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonActivatableWidget *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonActivatableWidget *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonActivatableWidget,UCommonActivatableWidget_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonActivatableWidget *)0x0;
}

// ExecuteIfSafe @ 14a7d7eb0

/* WARNING: Removing unreachable block (ram,0x00014a7d7f1e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,int param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonActivatableWidgetContainerBase *pUVar3;
  UCommonActivatableWidgetContainerBase *pUVar4;
  UObject *pUVar5;
  UCommonActivatableWidgetContainerBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonActivatableWidgetContainerBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonActivatableWidgetContainerBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonActivatableWidgetContainerBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UCommonActivatableWidgetContainerBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonActivatableWidgetContainerBase *)0x0;
}

// ExecuteIfSafe @ 14a7d7f90

/* WARNING: Removing unreachable block (ram,0x00014a7d7ff6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonActivatableWidgetContainerBase *pUVar3;
  UCommonActivatableWidgetContainerBase *pUVar4;
  UObject *pUVar5;
  UCommonActivatableWidgetContainerBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonActivatableWidgetContainerBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonActivatableWidgetContainerBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonActivatableWidgetContainerBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UCommonActivatableWidgetContainerBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonActivatableWidgetContainerBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8060

/* WARNING: Removing unreachable block (ram,0x00014a7d80cf) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonActivatableWidgetContainerBase *pUVar3;
  UCommonActivatableWidgetContainerBase *pUVar4;
  UObject *pUVar5;
  UCommonActivatableWidgetContainerBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonActivatableWidgetContainerBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonActivatableWidgetContainerBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonActivatableWidgetContainerBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UCommonActivatableWidgetContainerBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonActivatableWidgetContainerBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8140

/* WARNING: Removing unreachable block (ram,0x00014a7d81a6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonActivatableWidgetSwitcher *pUVar3;
  UCommonActivatableWidgetSwitcher *pUVar4;
  UObject *pUVar5;
  UCommonActivatableWidgetSwitcher *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonActivatableWidgetSwitcher *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonActivatableWidgetSwitcher *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonActivatableWidgetSwitcher *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonActivatableWidgetSwitcher *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonActivatableWidgetSwitcher,UCommonActivatableWidgetSwitcher_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               (char)this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonActivatableWidgetSwitcher *)0x0;
}

// ExecuteIfSafe @ 14a7d8210

/* WARNING: Removing unreachable block (ram,0x00014a7d827e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,int param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonAnimatedSwitcher *pUVar3;
  UCommonAnimatedSwitcher *pUVar4;
  UObject *pUVar5;
  UCommonAnimatedSwitcher *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonAnimatedSwitcher *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonAnimatedSwitcher *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonAnimatedSwitcher *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonAnimatedSwitcher *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonAnimatedSwitcher,UCommonAnimatedSwitcher_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonAnimatedSwitcher *)0x0;
}

// ExecuteIfSafe @ 14a7d82f0

/* WARNING: Removing unreachable block (ram,0x00014a7d835f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonAnimatedSwitcher *pUVar3;
  UCommonAnimatedSwitcher *pUVar4;
  UObject *pUVar5;
  UCommonAnimatedSwitcher *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonAnimatedSwitcher *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonAnimatedSwitcher *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonAnimatedSwitcher *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonAnimatedSwitcher *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonAnimatedSwitcher,UCommonAnimatedSwitcher_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonAnimatedSwitcher *)0x0;
}

// ExecuteIfSafe @ 14a7d83d0

/* WARNING: Removing unreachable block (ram,0x00014a7d8436) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonBorder *pUVar3;
  UCommonBorder *pUVar4;
  UObject *pUVar5;
  UCommonBorder *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonBorder *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonBorder *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonBorder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonBorder *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonBorder,UCommonBorder_*_&>(&local_res8)
    ;
    (**(code **)&this->MethodPtr)(&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonBorder *)0x0;
}

// ExecuteIfSafe @ 14a7d84a0

/* WARNING: Removing unreachable block (ram,0x00014a7d850e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,int param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonBoundActionBar *pUVar3;
  UCommonBoundActionBar *pUVar4;
  UObject *pUVar5;
  UCommonBoundActionBar *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonBoundActionBar *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonBoundActionBar *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonBoundActionBar *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonBoundActionBar *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonBoundActionBar *)0x0;
}

// ExecuteIfSafe @ 14a7d8580

/* WARNING: Removing unreachable block (ram,0x00014a7d85ef) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonBoundActionBar *pUVar3;
  UCommonBoundActionBar *pUVar4;
  UObject *pUVar5;
  UCommonBoundActionBar *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonBoundActionBar *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonBoundActionBar *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonBoundActionBar *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UCommonBoundActionBar *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&>(&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonBoundActionBar *)0x0;
}

// ExecuteIfSafe @ 14a7d8660

/* WARNING: Removing unreachable block (ram,0x00014a7d86c6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonBoundActionBar *pUVar3;
  UCommonBoundActionBar *pUVar4;
  UObject *pUVar5;
  UCommonBoundActionBar *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonBoundActionBar *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonBoundActionBar *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonBoundActionBar *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonBoundActionBar *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               (char)this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonBoundActionBar *)0x0;
}

// ExecuteIfSafe @ 14a7d8730

/* WARNING: Removing unreachable block (ram,0x00014a7d879e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonBoundActionButton *pUVar3;
  UCommonBoundActionButton *pUVar4;
  UObject *pUVar5;
  UCommonBoundActionButton *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonBoundActionButton *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonBoundActionButton *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonBoundActionButton *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonBoundActionButton *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonBoundActionButton,UCommonBoundActionButton_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonBoundActionButton *)0x0;
}

// ExecuteIfSafe @ 14a7d8820

/* WARNING: Removing unreachable block (ram,0x00014a7d88a9) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  FReply local_e8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               &local_e8,param_1,param_2);
    FReply::~FReply(&local_e8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8950

/* WARNING: Removing unreachable block (ram,0x00014a7d89d9) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  FReply local_e8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               &local_e8,param_1,param_2);
    FReply::~FReply(&local_e8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8a80

/* WARNING: Removing unreachable block (ram,0x00014a7d8afb) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  undefined8 local_res10;
  FReply local_d8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               &local_d8);
    FReply::~FReply(&local_d8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8b80

/* WARNING: Removing unreachable block (ram,0x00014a7d8bf6) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8c70

/* WARNING: Removing unreachable block (ram,0x00014a7d8cde) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FDragDropEvent *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8d50

/* WARNING: Removing unreachable block (ram,0x00014a7d8dbe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8e40

/* WARNING: Removing unreachable block (ram,0x00014a7d8eaf) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8f20

/* WARNING: Removing unreachable block (ram,0x00014a7d8f86) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d8ff0

/* WARNING: Removing unreachable block (ram,0x00014a7d905e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonBase *pUVar3;
  UCommonButtonBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonBase *)0x0;
}

// ExecuteIfSafe @ 14a7d90e0

/* WARNING: Removing unreachable block (ram,0x00014a7d9169) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonInternalBase *pUVar3;
  UCommonButtonInternalBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonInternalBase *local_res8;
  FReply local_e8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonInternalBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonInternalBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonInternalBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              (&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,&local_e8,param_1,param_2);
    FReply::~FReply(&local_e8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonInternalBase *)0x0;
}

// ExecuteIfSafe @ 14a7d9210

/* WARNING: Removing unreachable block (ram,0x00014a7d9299) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonInternalBase *pUVar3;
  UCommonButtonInternalBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonInternalBase *local_res8;
  FReply local_e8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonInternalBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonInternalBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonInternalBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              (&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,&local_e8,param_1,param_2);
    FReply::~FReply(&local_e8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonInternalBase *)0x0;
}

// ExecuteIfSafe @ 14a7d9340

/* WARNING: Removing unreachable block (ram,0x00014a7d93bb) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonInternalBase *pUVar3;
  UCommonButtonInternalBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonInternalBase *local_res8;
  undefined8 local_res10;
  FReply local_d8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonInternalBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonInternalBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonInternalBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              (&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,&local_d8);
    FReply::~FReply(&local_d8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonInternalBase *)0x0;
}

// ExecuteIfSafe @ 14a7d9440

/* WARNING: Removing unreachable block (ram,0x00014a7d94b6) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonInternalBase *pUVar3;
  UCommonButtonInternalBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonInternalBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonInternalBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonInternalBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonInternalBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              (&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonInternalBase *)0x0;
}

// ExecuteIfSafe @ 14a7d9530

/* WARNING: Removing unreachable block (ram,0x00014a7d959e) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FDragDropEvent *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonInternalBase *pUVar3;
  UCommonButtonInternalBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonInternalBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonInternalBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonInternalBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonInternalBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)(&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1)
    ;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonInternalBase *)0x0;
}

// ExecuteIfSafe @ 14a7d9610

/* WARNING: Removing unreachable block (ram,0x00014a7d9676) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonButtonInternalBase *pUVar3;
  UCommonButtonInternalBase *pUVar4;
  UObject *pUVar5;
  UCommonButtonInternalBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonButtonInternalBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonButtonInternalBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonButtonInternalBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonButtonInternalBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)(&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonButtonInternalBase *)0x0;
}

// ExecuteIfSafe @ 14a7d96e0

/* WARNING: Removing unreachable block (ram,0x00014a7d974f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EUINavigation param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonCustomNavigation *pUVar3;
  UCommonCustomNavigation *pUVar4;
  UObject *pUVar5;
  UCommonCustomNavigation *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonCustomNavigation *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonCustomNavigation *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonCustomNavigation *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  if (pUVar3 != (UCommonCustomNavigation *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonCustomNavigation,UCommonCustomNavigation_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonCustomNavigation *)0x0;
}

// ExecuteIfSafe @ 14a7d97c0

/* WARNING: Removing unreachable block (ram,0x00014a7d9826) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonDateTimeTextBlock *pUVar3;
  UCommonDateTimeTextBlock *pUVar4;
  UObject *pUVar5;
  UCommonDateTimeTextBlock *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonDateTimeTextBlock *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonDateTimeTextBlock *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonDateTimeTextBlock *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonDateTimeTextBlock *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonDateTimeTextBlock,UCommonDateTimeTextBlock_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonDateTimeTextBlock *)0x0;
}

// ExecuteIfSafe @ 14a7d9890

/* WARNING: Removing unreachable block (ram,0x00014a7d98fe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
                *this,UCommonUIVisibilitySubsystem *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonHardwareVisibilityBorder *pUVar3;
  UCommonHardwareVisibilityBorder *pUVar4;
  UObject *pUVar5;
  UCommonHardwareVisibilityBorder *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonHardwareVisibilityBorder *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonHardwareVisibilityBorder *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonHardwareVisibilityBorder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonHardwareVisibilityBorder *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonHardwareVisibilityBorder,UCommonHardwareVisibilityBorder_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)(&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1)
    ;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonHardwareVisibilityBorder *)0x0;
}

// ExecuteIfSafe @ 14a7d9970

/* WARNING: Removing unreachable block (ram,0x00014a7d99de) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonHierarchicalScrollBox *pUVar3;
  UCommonHierarchicalScrollBox *pUVar4;
  UObject *pUVar5;
  UCommonHierarchicalScrollBox *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonHierarchicalScrollBox *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonHierarchicalScrollBox *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonHierarchicalScrollBox *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonHierarchicalScrollBox *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonHierarchicalScrollBox,UCommonHierarchicalScrollBox_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)(&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1)
    ;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonHierarchicalScrollBox *)0x0;
}

// ExecuteIfSafe @ 14a7d9a60

/* WARNING: Removing unreachable block (ram,0x00014a7d9acf) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonLazyImage *pUVar3;
  UCommonLazyImage *pUVar4;
  UObject *pUVar5;
  UCommonLazyImage *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonLazyImage *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonLazyImage *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonLazyImage *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonLazyImage *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonLazyImage,UCommonLazyImage_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonLazyImage *)0x0;
}

// ExecuteIfSafe @ 14a7d9b40

/* WARNING: Removing unreachable block (ram,0x00014a7d9baf) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonLazyWidget *pUVar3;
  UCommonLazyWidget *pUVar4;
  UObject *pUVar5;
  UCommonLazyWidget *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonLazyWidget *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonLazyWidget *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonLazyWidget *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonLazyWidget *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonLazyWidget,UCommonLazyWidget_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonLazyWidget *)0x0;
}

// ExecuteIfSafe @ 14a7d9c20

/* WARNING: Removing unreachable block (ram,0x00014a7d9c8f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonLoadGuard *pUVar3;
  UCommonLoadGuard *pUVar4;
  UObject *pUVar5;
  UCommonLoadGuard *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonLoadGuard *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonLoadGuard *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonLoadGuard *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonLoadGuard *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonLoadGuard,UCommonLoadGuard_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)(&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1)
    ;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonLoadGuard *)0x0;
}

// ExecuteIfSafe @ 14a7d9d00

/* WARNING: Removing unreachable block (ram,0x00014a7d9d66) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonNumericTextBlock *pUVar3;
  UCommonNumericTextBlock *pUVar4;
  UObject *pUVar5;
  UCommonNumericTextBlock *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonNumericTextBlock *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonNumericTextBlock *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonNumericTextBlock *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonNumericTextBlock *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonNumericTextBlock,UCommonNumericTextBlock_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonNumericTextBlock *)0x0;
}

// ExecuteIfSafe @ 14a7d9dd0

/* WARNING: Removing unreachable block (ram,0x00014a7d9e3f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EUINavigation param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonRotator *pUVar3;
  UCommonRotator *pUVar4;
  UObject *pUVar5;
  UCommonRotator *local_res8;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonRotator *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonRotator *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonRotator *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UCommonRotator *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonRotator,UCommonRotator_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              (&pUVar4->field_0x0 + *(int *)((longlong)this + 0x28),local_28,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonRotator *)0x0;
}

// ExecuteIfSafe @ 14a7d9ec0

/* WARNING: Removing unreachable block (ram,0x00014a7d9f26) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonTabListWidgetBase *pUVar3;
  UCommonTabListWidgetBase *pUVar4;
  UObject *pUVar5;
  UCommonTabListWidgetBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonTabListWidgetBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonTabListWidgetBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonTabListWidgetBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonTabListWidgetBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonTabListWidgetBase,UCommonTabListWidgetBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonTabListWidgetBase *)0x0;
}

// ExecuteIfSafe @ 14a7d9f90

/* WARNING: Removing unreachable block (ram,0x00014a7d9ffe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonTabListWidgetBase *pUVar3;
  UCommonTabListWidgetBase *pUVar4;
  UObject *pUVar5;
  UCommonTabListWidgetBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonTabListWidgetBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonTabListWidgetBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonTabListWidgetBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonTabListWidgetBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonTabListWidgetBase,UCommonTabListWidgetBase_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonTabListWidgetBase *)0x0;
}

// ExecuteIfSafe @ 14a7da080

/* WARNING: Removing unreachable block (ram,0x00014a7da0ee) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonUIActionRouterBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIActionRouterBase *)0x0;
}

// ExecuteIfSafe @ 14a7da160

/* WARNING: Removing unreachable block (ram,0x00014a7da1ce) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
                *this,UCommonActivatableWidget *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonUIActionRouterBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIActionRouterBase *)0x0;
}

// ExecuteIfSafe @ 14a7da240

/* WARNING: Removing unreachable block (ram,0x00014a7da2bb) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
                *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,TSharedPtr<SWidget,1> *param_3,
               FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonUIActionRouterBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3,param_4,param_5);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIActionRouterBase *)0x0;
}

// ExecuteIfSafe @ 14a7da360

/* WARNING: Removing unreachable block (ram,0x00014a7da3db) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                *this,AHUD *param_1,UCanvas *param_2,FDebugDisplayInfo *param_3,float *param_4,
               float *param_5)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonUIActionRouterBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3,param_4,param_5);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIActionRouterBase *)0x0;
}

// ExecuteIfSafe @ 14a7da480

/* WARNING: Removing unreachable block (ram,0x00014a7da4e6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonUIActionRouterBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIActionRouterBase *)0x0;
}

// ExecuteIfSafe @ 14a7da550

/* WARNING: Removing unreachable block (ram,0x00014a7da57c) */
/* WARNING: Removing unreachable block (ram,0x00014a7da5c0) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
                *this)

{
  pmf_691450a4 pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  undefined8 local_res10;
  longlong local_28;
  longlong local_20;
  
  pUVar5 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar4 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 == (UCommonUIActionRouterBase *)0x0) {
    bVar2 = false;
  }
  else {
    local_res8 = pUVar4;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    local_28 = this->_padding_;
    pVar1 = this->MethodPtr;
    local_20 = this->_padding_;
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    (*(code *)pVar1)(pUVar4,&local_28);
    bVar2 = true;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return bVar2;
}

// ExecuteIfSafe @ 14a7da650

/* WARNING: Removing unreachable block (ram,0x00014a7da6be) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIActionRouterBase *pUVar3;
  UCommonUIActionRouterBase *pUVar4;
  UObject *pUVar5;
  UCommonUIActionRouterBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIActionRouterBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIActionRouterBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonUIActionRouterBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIActionRouterBase *)0x0;
}

// ExecuteIfSafe @ 14a7da730

/* WARNING: Removing unreachable block (ram,0x00014a7da79f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonUIVisibilitySubsystem *pUVar3;
  UCommonUIVisibilitySubsystem *pUVar4;
  UObject *pUVar5;
  UCommonUIVisibilitySubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonUIVisibilitySubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonUIVisibilitySubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonUIVisibilitySubsystem *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UCommonUIVisibilitySubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonUIVisibilitySubsystem,UCommonUIVisibilitySubsystem_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonUIVisibilitySubsystem *)0x0;
}

// ExecuteIfSafe @ 14a7da810

/* WARNING: Removing unreachable block (ram,0x00014a7da88e) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonVideoPlayer *pUVar3;
  UCommonVideoPlayer *pUVar4;
  UObject *pUVar5;
  UCommonVideoPlayer *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonVideoPlayer *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonVideoPlayer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonVideoPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UCommonVideoPlayer *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonVideoPlayer,UCommonVideoPlayer_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              (&pUVar4->field_0x0 + *(int *)((longlong)this + 0x28),SUB84(param_1,0),param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonVideoPlayer *)0x0;
}

// ExecuteIfSafe @ 14a7da910

/* WARNING: Removing unreachable block (ram,0x00014a7da97e) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EMediaEvent param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonVideoPlayer *pUVar3;
  UCommonVideoPlayer *pUVar4;
  UObject *pUVar5;
  UCommonVideoPlayer *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonVideoPlayer *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonVideoPlayer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonVideoPlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UCommonVideoPlayer *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UCommonVideoPlayer,UCommonVideoPlayer_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              (&pUVar4->field_0x0 + *(int *)((longlong)this + 0x28),param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonVideoPlayer *)0x0;
}

// ExecuteIfSafe @ 14a7da9f0

/* WARNING: Removing unreachable block (ram,0x00014a7daa5e) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
                *this,UPanelSlot *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonWidgetCarousel *pUVar3;
  UCommonWidgetCarousel *pUVar4;
  UObject *pUVar5;
  UCommonWidgetCarousel *local_res8;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonWidgetCarousel *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonWidgetCarousel *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonWidgetCarousel *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonWidgetCarousel *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               local_28,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonWidgetCarousel *)0x0;
}

// ExecuteIfSafe @ 14a7daae0

/* WARNING: Removing unreachable block (ram,0x00014a7dab4e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,int param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonWidgetCarousel *pUVar3;
  UCommonWidgetCarousel *pUVar4;
  UObject *pUVar5;
  UCommonWidgetCarousel *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonWidgetCarousel *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonWidgetCarousel *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonWidgetCarousel *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonWidgetCarousel *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonWidgetCarousel *)0x0;
}

// ExecuteIfSafe @ 14a7dabc0

/* WARNING: Removing unreachable block (ram,0x00014a7dac2e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCommonWidgetCarousel *pUVar3;
  UCommonWidgetCarousel *pUVar4;
  UObject *pUVar5;
  UCommonWidgetCarousel *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCommonWidgetCarousel *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCommonWidgetCarousel *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCommonWidgetCarousel *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCommonWidgetCarousel *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCommonWidgetCarousel *)0x0;
}

// ExecuteIfSafe @ 14a7dacb0

/* WARNING: Removing unreachable block (ram,0x00014a7dad1f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECommonInputType param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UDEPRECATED_UCommonVisibilityWidgetBase *pUVar3;
  UDEPRECATED_UCommonVisibilityWidgetBase *pUVar4;
  UObject *pUVar5;
  UDEPRECATED_UCommonVisibilityWidgetBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UDEPRECATED_UCommonVisibilityWidgetBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UDEPRECATED_UCommonVisibilityWidgetBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UDEPRECATED_UCommonVisibilityWidgetBase *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UDEPRECATED_UCommonVisibilityWidgetBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UDEPRECATED_UCommonVisibilityWidgetBase,UDEPRECATED_UCommonVisibilityWidgetBase_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UDEPRECATED_UCommonVisibilityWidgetBase *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14a7e08d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e08e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e08f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0900

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0910

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0920

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0930

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0940

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0950

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0960

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0970

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0980

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0990

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e09a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e09b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e09c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e09d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e09e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e09f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a70

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0a90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0aa0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0ab0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0ac0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0ad0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0ae0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0af0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b70

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0b90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0ba0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0bb0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0bc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0bd0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0be0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0bf0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a7e0c50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14a7e3d10

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3d90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3da0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3db0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3dc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3dd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3de0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3df0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3e90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3ea0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3eb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3ec0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3ed0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3ee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3ef0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3f90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3fa0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3fb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3fc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3fd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3fe0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e3ff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4010

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4030

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4040

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4050

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4060

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4070

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a7e4090

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e93d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e93e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e93f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9400

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9410

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9420

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9430

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9440

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9450

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9460

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9470

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9480

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9490

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e94a0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e94b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e94c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e94d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e94e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e94f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9500

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9510

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9520

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9530

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9540

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9550

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9560

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9570

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9580

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9590

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e95a0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e95b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e95c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e95d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e95e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e95f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9600

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9610

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9620

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9630

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9640

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9650

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9660

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9670

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9680

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9690

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e96a0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e96b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e96c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e96d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e96e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e96f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9700

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9710

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a7e9720

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9730

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9740

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a7e9750

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14a7f1510

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1540

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1570

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f15a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f15d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1600

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1630

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1660

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1690

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f16c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f16f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1720

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1750

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1780

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f17b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f17e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1810

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1840

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1870

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f18a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f18d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1900

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1930

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1960

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1990

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f19c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f19f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1a20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1a50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1a80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1ab0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1ae0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1b10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1b40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1b70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1ba0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1bd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1c00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1c30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1c60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1c90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1cc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1cf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1d20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1d50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1d80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1db0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1de0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1e10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1e40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1e70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1ea0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1ed0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1f00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1f30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1f60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7f1f90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14a7f4b10

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4b30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4b50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4b70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4b90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4bb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4bd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4bf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4c10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4c30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4c50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4c70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4c90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4cb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4cd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4cf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4d10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4d30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4d50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4d70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4d90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4db0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4dd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4df0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4e10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4e30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4e50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4e70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4e90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4eb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4ed0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4ef0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4f10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4f30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4f50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4f70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4f90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4fb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4fd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f4ff0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5010

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5030

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5050

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5070

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5090

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f50b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f50d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f50f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5110

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5130

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5150

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5170

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5190

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f51b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f51d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f51f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7f5210

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6b10

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6b30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6b50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6b70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6b90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6bb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6bd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6bf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6c10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6c30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6c50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6c70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6c90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6cb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6cd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6cf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6d10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6d30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6d50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6d70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6d90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6db0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6dd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6df0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6e10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6e30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6e50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6e70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6e90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6eb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6ed0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6ef0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6f10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6f30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6f50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6f70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6f90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6fb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6fd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f6ff0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7010

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7030

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7050

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7070

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7090

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f70b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f70d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f70f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7110

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7130

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7150

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7170

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7190

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f71b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f71d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f71f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a7f7210

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14a824480

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UCommonUIActionRouterBase_const_,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824490

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8244a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8244b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAnalogSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8244c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActionWidget,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8244d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8244e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8244f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824500

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetContainerBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824510

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonActivatableWidgetSwitcher,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824520

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824530

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonAnimatedSwitcher,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824540

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonBorder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824550

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824560

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824570

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionBar,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824580

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonBoundActionButton,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824590

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8245a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8245b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8245c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8245d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8245e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8245f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824600

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824610

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824620

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824630

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824640

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824650

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824660

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824670

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonButtonInternalBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824680

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonCustomNavigation,bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824690

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonDateTimeTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8246a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonHardwareVisibilityBorder,void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8246b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonHierarchicalScrollBox,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8246c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonLazyImage,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8246d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonLazyWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8246e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonLoadGuard,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8246f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonNumericTextBlock,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824700

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonRotator,TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824710

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824720

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonTabListWidgetBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824730

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824740

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824750

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824760

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824770

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824780

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824790

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonUIActionRouterBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8247a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonUIVisibilitySubsystem,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8247b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8247c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonVideoPlayer,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8247d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8247e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a8247f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCommonWidgetCarousel,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a824800

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UDEPRECATED_UCommonVisibilityWidgetBase,void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

