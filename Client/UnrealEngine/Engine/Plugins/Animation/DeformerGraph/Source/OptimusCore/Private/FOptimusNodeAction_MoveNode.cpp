// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10c7e0

UScriptStruct * __cdecl FOptimusNodeAction_MoveNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_MoveNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_MoveNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode,(UObject *)pUVar1,
                         L"OptimusNodeAction_MoveNode");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_MoveNode.OuterSingleton;
}

// Do @ 14e10c940

bool __thiscall
FOptimusNodeAction_MoveNode::Do(FOptimusNodeAction_MoveNode *this,IOptimusPathResolver *param_1)

{
  double _X;
  double _X_00;
  int iVar1;
  UOptimusNode *this_00;
  double dVar2;
  
  this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if (this_00 == (UOptimusNode *)0x0) {
    return false;
  }
  _X_00 = (double)*(float *)&this->NewPosition;
  _X = (double)*(float *)&(this->NewPosition).field_0x4;
  iVar1 = _finite(_X_00);
  if (((iVar1 != 0) && (iVar1 = _finite(_X), iVar1 != 0)) &&
     ((dVar2 = _X_00 - (this_00->GraphPosition).field0_0x0._s_0.X,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
      (dVar2 = _X - (this_00->GraphPosition).field0_0x0._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    (this_00->GraphPosition).field0_0x0._s_0.X = _X_00;
    (this_00->GraphPosition).field0_0x0._s_0.Y = _X;
    UOptimusNode::Notify(this_00,NodePositionChanged);
    return true;
  }
  return false;
}

// Undo @ 14e10cad0

bool __thiscall
FOptimusNodeAction_MoveNode::Undo(FOptimusNodeAction_MoveNode *this,IOptimusPathResolver *param_1)

{
  double _X;
  double _X_00;
  int iVar1;
  UOptimusNode *this_00;
  double dVar2;
  
  this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if (this_00 == (UOptimusNode *)0x0) {
    return false;
  }
  _X_00 = (double)*(float *)&this->OldPosition;
  _X = (double)*(float *)&(this->OldPosition).field_0x4;
  iVar1 = _finite(_X_00);
  if (((iVar1 != 0) && (iVar1 = _finite(_X), iVar1 != 0)) &&
     ((dVar2 = _X_00 - (this_00->GraphPosition).field0_0x0._s_0.X,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
      (dVar2 = _X - (this_00->GraphPosition).field0_0x0._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    (this_00->GraphPosition).field0_0x0._s_0.X = _X_00;
    (this_00->GraphPosition).field0_0x0._s_0.Y = _X;
    UOptimusNode::Notify(this_00,NodePositionChanged);
    return true;
  }
  return false;
}

// FOptimusNodeAction_MoveNode @ 14e152f60

FOptimusNodeAction_MoveNode * __thiscall
FOptimusNodeAction_MoveNode::FOptimusNodeAction_MoveNode
          (FOptimusNodeAction_MoveNode *this,UOptimusNode *param_1,TVector2<double> *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  FString *pFVar4;
  FString local_28;
  
  pFVar1 = &this->NodePath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_MoveNode__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  pFVar4 = UOptimusNode::GetNodePath(param_1,&local_28);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodePath).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->NodePath).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(float *)&this->NewPosition = (float)(param_2->field0_0x0)._s_0.X;
  *(float *)&(this->NewPosition).field_0x4 = (float)(param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_1->GraphPosition).field0_0x0._s_0.Y;
  *(float *)&this->OldPosition = (float)(param_1->GraphPosition).field0_0x0._s_0.X;
  *(float *)&(this->OldPosition).field_0x4 = (float)dVar3;
  return this;
}

