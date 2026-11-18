// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 84

// CreateCopy @ 146d46760

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerCategoryReplicator____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6245bad7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d467f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerCategoryReplicator____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6245bad7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d46840

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerCategoryReplicator____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6245bad7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d468f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAGameModeBase__PEAVAController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerPlayerManager____A6AXPEAVAGameModeBase__PEAVAController___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146d46980

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAGameModeBase__PEAVAController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerPlayerManager____A6AXPEAVAGameModeBase__PEAVAController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146d469d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAGameModeBase__PEAVAController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerPlayerManager____A6AXPEAVAGameModeBase__PEAVAController___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146d46a80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerPlayerManager____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146d46b10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerPlayerManager____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146d46b60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAGameplayDebuggerPlayerManager____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146d46c10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c1cd347a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d46ca0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c1cd347a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d46cf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c1cd347a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d46da0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f91aab7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d46e30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f91aab7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d46e80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f91aab7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d46f30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HH__6B_;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_93321c4d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d46fc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HH__6B_;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_93321c4d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d47020

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HH__6B_;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_93321c4d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d470d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f91aab7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d47160

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f91aab7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146d471b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8f91aab7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146d4b600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  AGameplayDebuggerCategoryReplicator *pAVar1;
  AGameplayDebuggerCategoryReplicator *local_res8 [4];
  
  local_res8[0] =
       (AGameplayDebuggerCategoryReplicator *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AGameplayDebuggerCategoryReplicator,AGameplayDebuggerCategoryReplicator_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pAVar1);
  return;
}

// Execute @ 146d4b640

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
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
          *this,AGameModeBase *param_1,AController *param_2)

{
  AGameplayDebuggerPlayerManager *pAVar1;
  AGameplayDebuggerPlayerManager *local_res8;
  
  local_res8 = (AGameplayDebuggerPlayerManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AGameplayDebuggerPlayerManager,AGameplayDebuggerPlayerManager_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 146d4b6a0

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
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1)

{
  AGameplayDebuggerPlayerManager *pAVar1;
  AGameplayDebuggerPlayerManager *local_res8;
  
  local_res8 = (AGameplayDebuggerPlayerManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AGameplayDebuggerPlayerManager,AGameplayDebuggerPlayerManager_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 146d4b6f0

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
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
          *this,UCanvas *param_1,APlayerController *param_2)

{
  UGameplayDebuggerLocalController *pUVar1;
  UGameplayDebuggerLocalController *local_res8;
  
  local_res8 = (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 146d4b750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UGameplayDebuggerLocalController *pUVar1;
  UGameplayDebuggerLocalController *local_res8 [4];
  
  local_res8[0] =
       (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 146d4b790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::Execute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
          *this)

{
  UGameplayDebuggerLocalController *pUVar1;
  UGameplayDebuggerLocalController *local_res8 [4];
  
  local_res8[0] =
       (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)
            (pUVar1,(int)this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
  return;
}

// Execute @ 146d4b7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UGameplayDebuggerLocalController *pUVar1;
  UGameplayDebuggerLocalController *local_res8 [4];
  
  local_res8[0] =
       (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 146d4b910

/* WARNING: Removing unreachable block (ram,0x000146d4b976) */
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
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AGameplayDebuggerCategoryReplicator *pAVar3;
  AGameplayDebuggerCategoryReplicator *pAVar4;
  UObject *pUVar5;
  AGameplayDebuggerCategoryReplicator *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AGameplayDebuggerCategoryReplicator *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AGameplayDebuggerCategoryReplicator *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (AGameplayDebuggerCategoryReplicator *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AGameplayDebuggerCategoryReplicator *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AGameplayDebuggerCategoryReplicator,AGameplayDebuggerCategoryReplicator_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AGameplayDebuggerCategoryReplicator *)0x0;
}

// ExecuteIfSafe @ 146d4b9e0

/* WARNING: Removing unreachable block (ram,0x000146d4ba56) */
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
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
                *this,AGameModeBase *param_1,AController *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AGameplayDebuggerPlayerManager *pAVar3;
  AGameplayDebuggerPlayerManager *pAVar4;
  UObject *pUVar5;
  AGameplayDebuggerPlayerManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AGameplayDebuggerPlayerManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AGameplayDebuggerPlayerManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AGameplayDebuggerPlayerManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AGameplayDebuggerPlayerManager *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AGameplayDebuggerPlayerManager,AGameplayDebuggerPlayerManager_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AGameplayDebuggerPlayerManager *)0x0;
}

// ExecuteIfSafe @ 146d4bad0

/* WARNING: Removing unreachable block (ram,0x000146d4bb3e) */
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
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AGameplayDebuggerPlayerManager *pAVar3;
  AGameplayDebuggerPlayerManager *pAVar4;
  UObject *pUVar5;
  AGameplayDebuggerPlayerManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AGameplayDebuggerPlayerManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AGameplayDebuggerPlayerManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AGameplayDebuggerPlayerManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AGameplayDebuggerPlayerManager *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AGameplayDebuggerPlayerManager,AGameplayDebuggerPlayerManager_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AGameplayDebuggerPlayerManager *)0x0;
}

// ExecuteIfSafe @ 146d4bbb0

/* WARNING: Removing unreachable block (ram,0x000146d4bc26) */
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
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,UCanvas *param_1,APlayerController *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UGameplayDebuggerLocalController *pUVar3;
  UGameplayDebuggerLocalController *pUVar4;
  UObject *pUVar5;
  UGameplayDebuggerLocalController *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UGameplayDebuggerLocalController *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UGameplayDebuggerLocalController *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UGameplayDebuggerLocalController *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UGameplayDebuggerLocalController *)0x0;
}

// ExecuteIfSafe @ 146d4bca0

/* WARNING: Removing unreachable block (ram,0x000146d4bd06) */
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
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UGameplayDebuggerLocalController *pUVar3;
  UGameplayDebuggerLocalController *pUVar4;
  UObject *pUVar5;
  UGameplayDebuggerLocalController *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UGameplayDebuggerLocalController *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UGameplayDebuggerLocalController *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UGameplayDebuggerLocalController *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UGameplayDebuggerLocalController *)0x0;
}

// ExecuteIfSafe @ 146d4bd70

/* WARNING: Removing unreachable block (ram,0x000146d4bd9c) */
/* WARNING: Removing unreachable block (ram,0x000146d4bde0) */
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
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UGameplayDebuggerLocalController *pUVar3;
  UGameplayDebuggerLocalController *pUVar4;
  UObject *pUVar5;
  UGameplayDebuggerLocalController *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UGameplayDebuggerLocalController *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UGameplayDebuggerLocalController *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UGameplayDebuggerLocalController *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)
              (pUVar4,(int)this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UGameplayDebuggerLocalController *)0x0;
}

// ExecuteIfSafe @ 146d4be50

/* WARNING: Removing unreachable block (ram,0x000146d4beb6) */
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
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UGameplayDebuggerLocalController *pUVar3;
  UGameplayDebuggerLocalController *pUVar4;
  UObject *pUVar5;
  UGameplayDebuggerLocalController *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UGameplayDebuggerLocalController *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UGameplayDebuggerLocalController *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UGameplayDebuggerLocalController *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UGameplayDebuggerLocalController *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UGameplayDebuggerLocalController,UGameplayDebuggerLocalController_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UGameplayDebuggerLocalController *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146d4bfc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d4bfd0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d4bfe0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d4bff0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d4c000

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d4c010

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146d4c020

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146d4d170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d4d180

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d4d190

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d4d1a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d4d1b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d4d1c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146d4d1d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146d4ddc0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146d4ddd0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146d4dde0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146d4ddf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146d4de00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146d4de10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146d4de20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146d4e3e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146d4e410

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146d4e440

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146d4e470

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146d4e4a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146d4e4d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146d4e500

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146d4f270

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146d4f290

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146d4f2b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146d4f2d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146d4f2f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146d4f310

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146d4f330

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146d4f650

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146d4f670

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146d4f690

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146d4f6b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146d4f6d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146d4f6f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146d4f710

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146d5d3e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerCategoryReplicator,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146d5d3f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146d5d400

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AGameplayDebuggerPlayerManager,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146d5d410

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146d5d420

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146d5d430

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146d5d440

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UGameplayDebuggerLocalController,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

