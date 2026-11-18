// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FFABRIKChainLink @ 14a50ad40

FFABRIKChainLink * __thiscall
FFABRIKChainLink::FFABRIKChainLink(FFABRIKChainLink *this,FFABRIKChainLink *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  dVar4 = (param_1->Position).field0_0x0._s_0.Y;
  pTVar1 = &this->ChildZeroLengthTransformIndices;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar4;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  this->Length = param_1->Length;
  this->BoneIndex = param_1->BoneIndex;
  this->TransformIndex = param_1->TransformIndex;
  piVar2 = &(this->ChildZeroLengthTransformIndices).ArrayMax;
  dVar4 = (param_1->DefaultDirToParent).field0_0x0._s_0.Y;
  (this->DefaultDirToParent).field0_0x0._s_0.X = (param_1->DefaultDirToParent).field0_0x0._s_0.X;
  (this->DefaultDirToParent).field0_0x0._s_0.Y = dVar4;
  (this->DefaultDirToParent).field0_0x0._s_0.Z = (param_1->DefaultDirToParent).field0_0x0._s_0.Z;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ChildZeroLengthTransformIndices).ArrayNum;
  _Src = (param_1->ChildZeroLengthTransformIndices).AllocatorInstance.Data;
  (this->ChildZeroLengthTransformIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

