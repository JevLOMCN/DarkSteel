// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Execute @ 14a407e20

void __cdecl
UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FApplyControlRigParameterValuesTask>::Execute
          (ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  int iVar1;
  ITaskContext IVar2;
  FControlRigParameterBuffer *this;
  FControlRigParameterBuffer *pFVar3;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 2) != '\0') {
    IVar2 = param_1[1];
    iVar1 = *(int *)((longlong)IVar2 + 0x58);
    this = *(FControlRigParameterBuffer **)((longlong)IVar2 + 0x50);
    pFVar3 = (FControlRigParameterBuffer *)((longlong)iVar1 * 0x88 + (longlong)this);
    while( true ) {
      if (*(int *)((longlong)IVar2 + 0x58) != iVar1) {
        `TCheckedPointerIterator<UE::MovieScene::FAccumulatedControlRigValues::FEntry_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this == pFVar3) break;
      FControlRigParameterBuffer::Apply(this);
      this = (FControlRigParameterBuffer *)&this[1].Values.Headers[0].Capacity;
    }
  }
  return;
}

