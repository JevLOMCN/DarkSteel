// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// Broadcast @ 142131c30

void __thiscall
TMulticastDelegate<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
::Broadcast(void *this,EPackageReloadPhase param_1,FPackageReloadedEvent *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + 1;
  bVar3 = false;
  uVar7 = *(int *)((longlong)this + 0x10) - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)((longlong)this + 8)) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)((longlong)this + 8)),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 1421be100

void __thiscall
TMulticastDelegate<void___cdecl(FRemoteObjectData_const_&,FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FRemoteObjectData_const_&,FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
            *this,FRemoteObjectData *param_1,FUObjectMigrationContext *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar3 = false;
  uVar7 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x10) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)&this->field_0x8) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)&this->field_0x8), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 1421be240

void __thiscall
TMulticastDelegate<void___cdecl(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_const_&,FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_const_&,FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
            *this,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
           FUObjectMigrationContext *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar3 = false;
  uVar7 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x10) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)&this->field_0x8) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)&this->field_0x8), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 1421be380

void __thiscall
TMulticastDelegate<void___cdecl(FRemoteTransactionId,FRemoteObjectId),FDefaultDelegateUserPolicy>::
Broadcast(TMulticastDelegate<void___cdecl(FRemoteTransactionId,FRemoteObjectId),FDefaultDelegateUserPolicy>
          *this,FRemoteTransactionId param_1,FRemoteObjectId param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar3 = false;
  uVar7 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x10) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)&this->field_0x8) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)&this->field_0x8), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1.Id,param_2.field0_0x0),
                cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 142261600

void __thiscall
TMulticastDelegate<void___cdecl(FName,enum_ECompiledInUObjectsRegisteredStatus),FDefaultDelegateUserPolicy>
::Broadcast(void *this,FName param_1,ECompiledInUObjectsRegisteredStatus param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + 1;
  bVar3 = false;
  uVar7 = *(int *)((longlong)this + 0x10) - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)((longlong)this + 8)) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)((longlong)this + 8)),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 1422bb2b0

void __thiscall
TMulticastDelegate<void___cdecl(enum_Verse::ERuntimeDiagnostic,FText_const_&),FDefaultDelegateUserPolicy>
::Broadcast(void *this,ERuntimeDiagnostic param_1,FText *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + 1;
  bVar3 = false;
  uVar7 = *(int *)((longlong)this + 0x10) - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)((longlong)this + 8)) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)((longlong)this + 8)),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

