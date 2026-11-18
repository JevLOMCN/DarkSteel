// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FQueryShape @ 1477ede90

FQueryShape * __thiscall Chaos::FQueryShape::FQueryShape(FQueryShape *this,FQueryShape *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)((longlong)&(param_1->CollisionShape).field1_0x4 + 4);
  pTVar1 = &this->ConvexData;
  piVar2 = &(this->ConvexData).ArrayMax;
  *(undefined8 *)&this->CollisionShape = *(undefined8 *)&param_1->CollisionShape;
  *(undefined8 *)((longlong)&(this->CollisionShape).field1_0x4 + 4) = uVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ConvexData).ArrayNum;
  _Src = (param_1->ConvexData).AllocatorInstance.Data;
  (this->ConvexData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  uVar4 = *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = uVar4;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x10;
  uVar4 = *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar4;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x10;
  return this;
}

