// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 33

// CreateCopy @ 1462d6210

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1462d62a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1462d62f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBUFEdGraphEditAction___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1462d63a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVUDataflowSubGraph___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBVUDataflowSubGraph___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1462d6430

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUDataflowSubGraph___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBVUDataflowSubGraph___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1462d6480

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVUDataflowSubGraph___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXAEBVUDataflowSubGraph___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1462d6530

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUDataflow__AEBUFGuid__W4ESubGraphChangedReason_Dataflow_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXPEBVUDataflow__AEBUFGuid__W4ESubGraphChangedReason_Dataflow_UE___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1462d65c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUDataflow__AEBUFGuid__W4ESubGraphChangedReason_Dataflow_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXPEBVUDataflow__AEBUFGuid__W4ESubGraphChangedReason_Dataflow_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1462d6610

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUDataflow__AEBUFGuid__W4ESubGraphChangedReason_Dataflow_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDataflowCallSubGraphNode____A6AXPEBVUDataflow__AEBUFGuid__W4ESubGraphChangedReason_Dataflow_UE___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 1462db620

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
          *this,FEdGraphEditAction *param_1)

{
  FDataflowCallSubGraphNode *pFVar1;
  FDataflowCallSubGraphNode *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 1462db670

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
          *this,UDataflowSubGraph *param_1)

{
  FDataflowCallSubGraphNode *pFVar1;
  FDataflowCallSubGraphNode *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 1462db6c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::Execute(void *this,UDataflow *param_1,FGuid *param_2,ESubGraphChangedReason param_3)

{
  FDataflowCallSubGraphNode *pFVar1;
  FDataflowCallSubGraphNode *local_res8;
  
  local_res8 = *(FDataflowCallSubGraphNode **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2,param_3);
  return;
}

// ExecuteIfSafe @ 1462db820

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
                *this,FEdGraphEditAction *param_1)

{
  FDataflowCallSubGraphNode *pFVar1;
  FDataflowCallSubGraphNode *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 1462db870

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
                *this,UDataflowSubGraph *param_1)

{
  FDataflowCallSubGraphNode *pFVar1;
  FDataflowCallSubGraphNode *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 1462db8c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UDataflow *param_1,FGuid *param_2,ESubGraphChangedReason param_3)

{
  FDataflowCallSubGraphNode *pFVar1;
  FDataflowCallSubGraphNode *local_res8;
  
  local_res8 = *(FDataflowCallSubGraphNode **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FDataflowCallSubGraphNode,FDataflowCallSubGraphNode_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2,param_3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1462dc0d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1462dc0e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1462dc0f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 1462dd6a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1462dd6b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1462dd6c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 1462df0a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1462df0b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1462df0c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1462df850

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1462df860

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1462df870

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 1462dfdd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1462dfde0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1462dfdf0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1462e6a00

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1462e6a10

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1462e6a20

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDataflowCallSubGraphNode,void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

