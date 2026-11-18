// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 205

// TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_> @ 146d714b0

TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
* __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
           *this,TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FAsyncPathFindingQuery *pFVar4;
  
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TArray_UFAsyncPathFindingQuery__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  pFVar4 = (FAsyncPathFindingQuery *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe8,8,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    ConstructItems<FAsyncPathFindingQuery,FAsyncPathFindingQuery,int>((void *)*plVar1,pFVar4,iVar3);
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXXZUFDefaultDelegateUserPolicy__V__TArray_UFAsyncPathFindingQuery__V__TSizedDefaultAllocator__0CA_______6B_
  ;
  (this->UserObject).WeakPtr = (param_1->UserObject).WeakPtr;
  this->MethodPtr = param_1->MethodPtr;
  return this;
}

// CreateCopy @ 146d8c260

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationInvokerComponent____A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146d8c2f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationInvokerComponent____A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146d8c340

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationInvokerComponent____A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146d8c3f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8c480

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8c4d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8c580

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_15915281 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8c610

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_15915281 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d8c660

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationPath____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_15915281 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8c710

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8c7a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8c7f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8c8a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXAEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e07a45fb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8c930

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXAEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e07a45fb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d8c980

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXAEBU__TBox_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e07a45fb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8ca30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_98acc025 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8cac0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_98acc025 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d8cb10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVULevel__PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_98acc025 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8cbc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4cdeb1a8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8cc50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4cdeb1a8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d8cca0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4cdeb1a8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8cd50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4cdeb1a8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8cde0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4cdeb1a8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d8ce30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4cdeb1a8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8cee0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8cf70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8cfc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8d070

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EReloadCompleteReason___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXW4EReloadCompleteReason___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8d100

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EReloadCompleteReason___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXW4EReloadCompleteReason___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146d8d150

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EReloadCompleteReason___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavigationSystemV1____A6AXW4EReloadCompleteReason___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8d200

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8d270

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 146d8d2b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
  *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146d932f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
          *this,UNavigationSystemBase *param_1)

{
  UNavigationInvokerComponent *pUVar1;
  UNavigationInvokerComponent *local_res8;
  
  local_res8 = (UNavigationInvokerComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNavigationInvokerComponent,UNavigationInvokerComponent_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 146d93340

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FNavigationPath *param_1,Type param_2)

{
  UNavigationPath *pUVar1;
  UNavigationPath *local_res8;
  
  local_res8 = (UNavigationPath *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationPath,UNavigationPath_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1,param_2);
  return;
}

// Execute @ 146d933a0

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
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
          *this,UCanvas *param_1,APlayerController *param_2)

{
  UNavigationPath *pUVar1;
  UNavigationPath *local_res8;
  
  local_res8 = (UNavigationPath *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationPath,UNavigationPath_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 146d93400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::Execute(void *this,
         TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
         *param_1)

{
  UNavigationSystemV1 *pUVar1;
  UNavigationSystemV1 *local_res8;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1);
  return;
}

// Execute @ 146d93450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
          *this,TBox<double> *param_1)

{
  UNavigationSystemV1 *pUVar1;
  UNavigationSystemV1 *local_res8;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146d934a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
          *this,ULevel *param_1,UWorld *param_2)

{
  UNavigationSystemV1 *pUVar1;
  UNavigationSystemV1 *local_res8;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 146d93500

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
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1)

{
  UNavigationSystemV1 *pUVar1;
  UNavigationSystemV1 *local_res8;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146d93550

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
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
          *this,UWorld *param_1)

{
  UNavigationSystemV1 *pUVar1;
  UNavigationSystemV1 *local_res8;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 146d935a0

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
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::Execute(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  UNavigationSystemV1 *pUVar1;
  UNavigationSystemV1 *local_res8;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 146d93610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::Execute(void *this,EReloadCompleteReason param_1)

{
  UNavigationSystemV1 *pUVar1;
  UNavigationSystemV1 *local_res8;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1);
  return;
}

// Execute @ 146d93660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
          *this)

{
  int iVar1;
  pmf_b36d893b pVar2;
  FAsyncPathFindingQuery *pFVar3;
  UNavigationSystemV1 *pUVar4;
  UNavigationSystemV1 *local_res8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_res8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                     (&local_res8);
  iVar1 = (int)this->_padding_;
  pVar2 = this->MethodPtr;
  pFVar3 = (FAsyncPathFindingQuery *)this->_padding_;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe8,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FAsyncPathFindingQuery,FAsyncPathFindingQuery,int>(local_18.Data,pFVar3,iVar1);
  }
  (*(code *)pVar2)(pUVar4,&local_18);
  return;
}

// ExecuteIfSafe @ 146d93eb0

/* WARNING: Removing unreachable block (ram,0x000146d93f1e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                *this,UNavigationSystemBase *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationInvokerComponent *pUVar3;
  UNavigationInvokerComponent *pUVar4;
  UObject *pUVar5;
  UNavigationInvokerComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationInvokerComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationInvokerComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationInvokerComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavigationInvokerComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNavigationInvokerComponent,UNavigationInvokerComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationInvokerComponent *)0x0;
}

// ExecuteIfSafe @ 146d93f90

/* WARNING: Removing unreachable block (ram,0x000146d94006) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FNavigationPath *param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationPath *pUVar3;
  UNavigationPath *pUVar4;
  UObject *pUVar5;
  UNavigationPath *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationPath *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationPath *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationPath *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UNavigationPath *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationPath,UNavigationPath_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationPath *)0x0;
}

// ExecuteIfSafe @ 146d94080

/* WARNING: Removing unreachable block (ram,0x000146d940f6) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,UCanvas *param_1,APlayerController *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationPath *pUVar3;
  UNavigationPath *pUVar4;
  UObject *pUVar5;
  UNavigationPath *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationPath *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationPath *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationPath *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavigationPath *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationPath,UNavigationPath_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationPath *)0x0;
}

// ExecuteIfSafe @ 146d94170

/* WARNING: Removing unreachable block (ram,0x000146d941de) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,
               TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
               *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationSystemV1 *pUVar3;
  UNavigationSystemV1 *pUVar4;
  UObject *pUVar5;
  UNavigationSystemV1 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationSystemV1 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationSystemV1 *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationSystemV1 *)0x0;
}

// ExecuteIfSafe @ 146d94250

/* WARNING: Removing unreachable block (ram,0x000146d942be) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
                *this,TBox<double> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationSystemV1 *pUVar3;
  UNavigationSystemV1 *pUVar4;
  UObject *pUVar5;
  UNavigationSystemV1 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationSystemV1 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationSystemV1 *)0x0;
}

// ExecuteIfSafe @ 146d94330

/* WARNING: Removing unreachable block (ram,0x000146d943a6) */
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
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *this,ULevel *param_1,UWorld *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationSystemV1 *pUVar3;
  UNavigationSystemV1 *pUVar4;
  UObject *pUVar5;
  UNavigationSystemV1 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationSystemV1 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationSystemV1 *)0x0;
}

// ExecuteIfSafe @ 146d94420

/* WARNING: Removing unreachable block (ram,0x000146d9448e) */
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
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationSystemV1 *pUVar3;
  UNavigationSystemV1 *pUVar4;
  UObject *pUVar5;
  UNavigationSystemV1 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationSystemV1 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationSystemV1 *)0x0;
}

// ExecuteIfSafe @ 146d94500

/* WARNING: Removing unreachable block (ram,0x000146d9456e) */
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
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                *this,UWorld *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationSystemV1 *pUVar3;
  UNavigationSystemV1 *pUVar4;
  UObject *pUVar5;
  UNavigationSystemV1 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationSystemV1 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationSystemV1 *)0x0;
}

// ExecuteIfSafe @ 146d945e0

/* WARNING: Removing unreachable block (ram,0x000146d9465e) */
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
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationSystemV1 *pUVar3;
  UNavigationSystemV1 *pUVar4;
  UObject *pUVar5;
  UNavigationSystemV1 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationSystemV1 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationSystemV1 *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationSystemV1 *)0x0;
}

// ExecuteIfSafe @ 146d946e0

/* WARNING: Removing unreachable block (ram,0x000146d9474e) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EReloadCompleteReason param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavigationSystemV1 *pUVar3;
  UNavigationSystemV1 *pUVar4;
  UObject *pUVar5;
  UNavigationSystemV1 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavigationSystemV1 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavigationSystemV1 *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavigationSystemV1 *)0x0;
}

// ExecuteIfSafe @ 146d947c0

/* WARNING: Removing unreachable block (ram,0x000146d9483a) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
                *this)

{
  int iVar1;
  pmf_b36d893b pVar2;
  FAsyncPathFindingQuery *pFVar3;
  bool bVar4;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar5;
  UNavigationSystemV1 *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UNavigationSystemV1 *local_res8;
  undefined8 local_res10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  pUVar7 = (UObject *)0x0;
  bVar4 = IsInGameThread();
  if (bVar4) {
    local_res8 = (UNavigationSystemV1 *)0x0;
    pUVar8 = pUVar7;
  }
  else {
    TVar5 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar8 = *TVar5.Object;
    *(undefined8 *)TVar5.Object = 0;
    if (local_res8 != (UNavigationSystemV1 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar6 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar6 != (UNavigationSystemV1 *)0x0) {
    local_res8 = pUVar6;
    pUVar6 = UE::Core::Private::DereferenceIfNecessary<UNavigationSystemV1,UNavigationSystemV1_*_&>
                       (&local_res8);
    iVar1 = (int)this->_padding_;
    pVar2 = this->MethodPtr;
    pFVar3 = (FAsyncPathFindingQuery *)this->_padding_;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = iVar1;
    if (iVar1 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe8,8,iVar1,0,&local_38,iVar1,&local_2c);
      ConstructItems<FAsyncPathFindingQuery,FAsyncPathFindingQuery,int>(local_38.Data,pFVar3,iVar1);
    }
    (*(code *)pVar2)(pUVar6,&local_38);
    pUVar7 = (UObject *)&DAT_00000001;
  }
  if (pUVar8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar8);
  }
  return (bool)(char)pUVar7;
}

// GetBoundProgramCounterForTimerManager @ 146d99e00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99e10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146d99e20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99e30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146d99e40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99e50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99e60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99e70

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d99e80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146d99e90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146d99ea0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146d9e710

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e720

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e730

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e740

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e750

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e760

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e770

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e780

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e790

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e7a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146d9e7b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146da2c10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146da2c20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2c30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146da2c40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2c50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146da2c60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146da2c70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146da2c80

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146da2c90

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2ca0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146da2cb0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146da3a40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3a70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3aa0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3ad0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3b00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3b30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3b60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3b90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3bc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3bf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146da3c20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146da46a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da46c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da46e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4700

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4720

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4740

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4760

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da4780

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da47a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da47c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146da47e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146da53e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da5400

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da5420

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da5440

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da5460

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da5480

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da54a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da54c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da54e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da5500

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146da5520

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146dbdd70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavigationInvokerComponent,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdd90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavigationPath,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdda0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbddb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbddc0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbddd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdde0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbddf0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbde00

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(enum_EReloadCompleteReason),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbde10

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),FDefaultDelegateUserPolicy,TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32>_>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146de5b40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VANavigationTestingActor____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de5bd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VANavigationTestingActor____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146de5c20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VANavigationTestingActor____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de5cd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VARecastNavMesh____A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de5d60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VARecastNavMesh____A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146de5db0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VARecastNavMesh____A6AXAEBVUNavigationSystemBase___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de5e60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VARecastNavMesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de5ef0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VARecastNavMesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146de5f40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VARecastNavMesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de5ff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavLinkCustomComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de6080

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavLinkCustomComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146de60d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavLinkCustomComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de6180

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavMeshRenderingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146de6210

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavMeshRenderingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146de6260

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavMeshRenderingComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// Execute @ 146df2860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FNavigationPath *param_1,Type param_2)

{
  ANavigationTestingActor *pAVar1;
  ANavigationTestingActor *local_res8;
  
  local_res8 = (ANavigationTestingActor *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<ANavigationTestingActor,ANavigationTestingActor_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2);
  return;
}

// Execute @ 146df28c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
          *this,UNavigationSystemBase *param_1)

{
  ARecastNavMesh *pAVar1;
  ARecastNavMesh *local_res8;
  
  local_res8 = (ARecastNavMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<ARecastNavMesh,ARecastNavMesh_*_&>(&local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 146df2910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  ARecastNavMesh *pAVar1;
  ARecastNavMesh *local_res8 [4];
  
  local_res8[0] = (ARecastNavMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<ARecastNavMesh,ARecastNavMesh_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146df2950

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UNavLinkCustomComponent *pUVar1;
  UNavLinkCustomComponent *local_res8 [4];
  
  local_res8[0] = (UNavLinkCustomComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNavLinkCustomComponent,UNavLinkCustomComponent_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146df2990

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UNavMeshRenderingComponent *pUVar1;
  UNavMeshRenderingComponent *local_res8 [4];
  
  local_res8[0] = (UNavMeshRenderingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNavMeshRenderingComponent,UNavMeshRenderingComponent_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 146df29d0

/* WARNING: Removing unreachable block (ram,0x000146df2a46) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FNavigationPath *param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ANavigationTestingActor *pAVar3;
  ANavigationTestingActor *pAVar4;
  UObject *pUVar5;
  ANavigationTestingActor *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ANavigationTestingActor *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ANavigationTestingActor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (ANavigationTestingActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  if (pAVar3 != (ANavigationTestingActor *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<ANavigationTestingActor,ANavigationTestingActor_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (ANavigationTestingActor *)0x0;
}

// ExecuteIfSafe @ 146df2ac0

/* WARNING: Removing unreachable block (ram,0x000146df2b2e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                *this,UNavigationSystemBase *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ARecastNavMesh *pAVar3;
  ARecastNavMesh *pAVar4;
  UObject *pUVar5;
  ARecastNavMesh *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ARecastNavMesh *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ARecastNavMesh *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (ARecastNavMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (ARecastNavMesh *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<ARecastNavMesh,ARecastNavMesh_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (ARecastNavMesh *)0x0;
}

// ExecuteIfSafe @ 146df2ba0

/* WARNING: Removing unreachable block (ram,0x000146df2c06) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ARecastNavMesh *pAVar3;
  ARecastNavMesh *pAVar4;
  UObject *pUVar5;
  ARecastNavMesh *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ARecastNavMesh *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ARecastNavMesh *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (ARecastNavMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (ARecastNavMesh *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<ARecastNavMesh,ARecastNavMesh_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (ARecastNavMesh *)0x0;
}

// ExecuteIfSafe @ 146df2c70

/* WARNING: Removing unreachable block (ram,0x000146df2cd6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavLinkCustomComponent *pUVar3;
  UNavLinkCustomComponent *pUVar4;
  UObject *pUVar5;
  UNavLinkCustomComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavLinkCustomComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavLinkCustomComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UNavLinkCustomComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavLinkCustomComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNavLinkCustomComponent,UNavLinkCustomComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavLinkCustomComponent *)0x0;
}

// ExecuteIfSafe @ 146df2d40

/* WARNING: Removing unreachable block (ram,0x000146df2da6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavMeshRenderingComponent *pUVar3;
  UNavMeshRenderingComponent *pUVar4;
  UObject *pUVar5;
  UNavMeshRenderingComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavMeshRenderingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavMeshRenderingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UNavMeshRenderingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNavMeshRenderingComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNavMeshRenderingComponent,UNavMeshRenderingComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavMeshRenderingComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146e008c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146e008d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146e008e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146e008f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146e00900

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146e0ab90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 146e0aba0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146e0abb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146e0abc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146e0abd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e139b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146e139c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e139d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e139e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146e139f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146e14760

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 146e14790

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146e147c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146e147f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146e14820

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146e15750

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146e15770

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146e15790

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146e157b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146e157d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146e15aa0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146e15ac0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146e15ae0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146e15b00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146e15b20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146e2b5e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ANavigationTestingActor,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146e2b5f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146e2b600

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ARecastNavMesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146e2b610

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavLinkCustomComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146e2b620

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNavMeshRenderingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146e463d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavModifierComponent____A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146e46460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavModifierComponent____A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146e464b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNavModifierComponent____A6AXPEAVUSceneComponent__W4EUpdateTransformFlags__W4ETeleportType___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 146e48320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::Execute(void *this,USceneComponent *param_1,EUpdateTransformFlags param_2,ETeleportType param_3)

{
  UNavModifierComponent *pUVar1;
  UNavModifierComponent *local_res8;
  
  local_res8 = (UNavModifierComponent *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNavModifierComponent,UNavModifierComponent_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146e48390

/* WARNING: Removing unreachable block (ram,0x000146e4840f) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
               ETeleportType param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNavModifierComponent *pUVar3;
  UNavModifierComponent *pUVar4;
  UObject *pUVar5;
  UNavModifierComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNavModifierComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNavModifierComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNavModifierComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UNavModifierComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNavModifierComponent,UNavModifierComponent_*_&>(&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNavModifierComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146e5b820

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 146e5d070

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 146e5e690

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 146e5f020

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 146e5fbb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146e5fde0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146e74ed0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

