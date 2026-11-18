// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 110

// CreateCopy @ 146f3afb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_92791eeb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3b040

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_92791eeb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f3b090

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_92791eeb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3b140

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_BehaviorTree____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_88ca7a33 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3b1d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_BehaviorTree____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_88ca7a33 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f3b220

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_BehaviorTree____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_88ca7a33 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3b2d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_EQS____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_218b404e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3b360

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_EQS____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_218b404e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f3b3b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_EQS____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_218b404e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3b460

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepDataPath_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c0e32550 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3b4f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepDataPath_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c0e32550 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f3b540

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepDataPath_FGameplayDebuggerCategory_AI____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_c0e32550 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3b5f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_EQS____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146f3b680

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_EQS____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146f3b6d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_EQS____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 146f460a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepData,FGameplayDebuggerCategory_AI::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146f460f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_BehaviorTree::FRepData,FGameplayDebuggerCategory_BehaviorTree::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146f46140

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_EQS::FRepData,FGameplayDebuggerCategory_EQS::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146f46190

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FRepDataPath *pFVar1;
  FRepDataPath *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepDataPath,FGameplayDebuggerCategory_AI::FRepDataPath_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146f461e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FGameplayDebuggerCategory_EQS *pFVar1;
  FGameplayDebuggerCategory_EQS *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_EQS,FGameplayDebuggerCategory_EQS_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 146f46b10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepData,FGameplayDebuggerCategory_AI::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146f46b60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_BehaviorTree::FRepData,FGameplayDebuggerCategory_BehaviorTree::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146f46bb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_EQS::FRepData,FGameplayDebuggerCategory_EQS::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146f46c00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FRepDataPath *pFVar1;
  FRepDataPath *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_AI::FRepDataPath,FGameplayDebuggerCategory_AI::FRepDataPath_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146f46c50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FGameplayDebuggerCategory_EQS *pFVar1;
  FGameplayDebuggerCategory_EQS *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_EQS,FGameplayDebuggerCategory_EQS_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146f50360

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146f50370

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146f50380

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146f50390

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146f503a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146f571c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146f571d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146f571e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146f571f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146f57200

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 146f5a920

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146f5a930

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146f5a940

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146f5a950

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146f5a960

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146f5b0e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146f5b0f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146f5b100

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146f5b110

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146f5b120

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 146f5ba30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146f5ba40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146f5ba50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146f5ba60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146f5ba70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146f7c140

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c150

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_BehaviorTree::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c160

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c170

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_AI::FRepDataPath,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c180

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_EQS,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146f9f070

void __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNavMeshSceneProxyData____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5dd92c63 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9f100

void __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNavMeshSceneProxyData____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5dd92c63 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f9f150

void __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFNavMeshSceneProxyData____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5dd92c63 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9f200

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1f90e234 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9f290

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1f90e234 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f9f2e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_1f90e234 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9f390

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_563d3151 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9f420

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_563d3151 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f9f470

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_NavLocalGrid____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_563d3151 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9f520

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_Navmesh____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6b43eb69 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9f5b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_Navmesh____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6b43eb69 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146f9f600

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRepData_FGameplayDebuggerCategory_Navmesh____A6AXAEAVFArchive___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_6b43eb69 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9f6b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_Navmesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146f9f740

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_Navmesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146f9f790

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerCategory_Navmesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 146fa6cb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FNavMeshSceneProxyData *pFVar1;
  FNavMeshSceneProxyData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNavMeshSceneProxyData,FNavMeshSceneProxyData_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146fa6d00

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FRepAgentData *pFVar1;
  FRepAgentData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146fa6d50

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepData,FGameplayDebuggerCategory_NavLocalGrid::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146fa6da0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
          *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh::FRepData,FGameplayDebuggerCategory_Navmesh::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 146fa6df0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FGameplayDebuggerCategory_Navmesh *pFVar1;
  FGameplayDebuggerCategory_Navmesh *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh,FGameplayDebuggerCategory_Navmesh_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 146fa7490

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FNavMeshSceneProxyData *pFVar1;
  FNavMeshSceneProxyData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FNavMeshSceneProxyData,FNavMeshSceneProxyData_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146fa74e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FRepAgentData *pFVar1;
  FRepAgentData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146fa7530

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_NavLocalGrid::FRepData,FGameplayDebuggerCategory_NavLocalGrid::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146fa7580

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,FArchive *param_1)

{
  FRepData *pFVar1;
  FRepData *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh::FRepData,FGameplayDebuggerCategory_Navmesh::FRepData_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146fa75d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FGameplayDebuggerCategory_Navmesh *pFVar1;
  FGameplayDebuggerCategory_Navmesh *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGameplayDebuggerCategory_Navmesh,FGameplayDebuggerCategory_Navmesh_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146fac230

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac240

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac250

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac260

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146fac270

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146fb2e90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146fb2ea0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146fb2eb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146fb2ec0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146fb2ed0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 146fb5b50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146fb5b60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146fb5b70

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146fb5b80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146fb5b90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146fb8090

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146fb80a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146fb80b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146fb80c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146fb80d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 146fb9d80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146fb9d90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146fb9da0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146fb9db0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146fb9dc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146fd9a60

FName __thiscall
TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FNavMeshSceneProxyData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9a70

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9a80

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_NavLocalGrid::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9a90

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh::FRepData,void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9aa0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGameplayDebuggerCategory_Navmesh,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

