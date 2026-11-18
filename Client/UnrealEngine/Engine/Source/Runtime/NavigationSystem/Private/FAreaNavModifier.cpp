// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FAreaNavModifier @ 146d727f0

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier(FAreaNavModifier *this,FAreaNavModifier *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  byte bVar13;
  
  pTVar1 = &this->Points;
  this->_padding_ = param_1->_padding_;
  this->Cost = param_1->Cost;
  this->FixedCost = param_1->FixedCost;
  (this->AreaClassOb).WeakPtr = (param_1->AreaClassOb).WeakPtr;
  (this->ReplaceAreaClassOb).WeakPtr = (param_1->ReplaceAreaClassOb).WeakPtr;
  piVar2 = &(this->Points).ArrayMax;
  dVar5 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar5;
  uVar6 = (param_1->Bounds).Pad[0];
  uVar7 = (param_1->Bounds).Pad[1];
  uVar8 = (param_1->Bounds).Pad[2];
  uVar9 = (param_1->Bounds).Pad[3];
  uVar10 = (param_1->Bounds).Pad[4];
  uVar11 = (param_1->Bounds).Pad[5];
  uVar12 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar6;
  (this->Bounds).Pad[1] = uVar7;
  (this->Bounds).Pad[2] = uVar8;
  (this->Bounds).Pad[3] = uVar9;
  (this->Bounds).Pad[4] = uVar10;
  (this->Bounds).Pad[5] = uVar11;
  (this->Bounds).Pad[6] = uVar12;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Points).ArrayNum;
  _Src = (param_1->Points).AllocatorInstance.Data;
  (this->Points).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
  }
  (this->ShapeType).Value = (param_1->ShapeType).Value;
  (this->ApplyMode).Value = (param_1->ApplyMode).Value;
  bVar13 = (this->bExpandTopByCellHeight ^ param_1->bExpandTopByCellHeight) & 1 ^ this->field_0x6a;
  this->field_0x6a = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x6a) & 2 ^ bVar13;
  this->field_0x6a = bVar13;
  this->field_0x6a = (bVar13 ^ param_1->field_0x6a) & 4 ^ bVar13;
  return this;
}

// FAreaNavModifier @ 146e35d20

FAreaNavModifier * __thiscall
FAreaNavModifier::FAreaNavModifier(FAreaNavModifier *this,FAreaNavModifier *param_1)

{
  undefined1 uVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  byte bVar10;
  
  this->_padding_ = param_1->_padding_;
  this->Cost = param_1->Cost;
  this->FixedCost = param_1->FixedCost;
  (this->AreaClassOb).WeakPtr = (param_1->AreaClassOb).WeakPtr;
  (this->ReplaceAreaClassOb).WeakPtr = (param_1->ReplaceAreaClassOb).WeakPtr;
  dVar2 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->Bounds).Pad[0];
  uVar4 = (param_1->Bounds).Pad[1];
  uVar5 = (param_1->Bounds).Pad[2];
  uVar6 = (param_1->Bounds).Pad[3];
  uVar7 = (param_1->Bounds).Pad[4];
  uVar8 = (param_1->Bounds).Pad[5];
  uVar9 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar3;
  (this->Bounds).Pad[1] = uVar4;
  (this->Bounds).Pad[2] = uVar5;
  (this->Bounds).Pad[3] = uVar6;
  (this->Bounds).Pad[4] = uVar7;
  (this->Bounds).Pad[5] = uVar8;
  (this->Bounds).Pad[6] = uVar9;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).AllocatorInstance.Data = (param_1->Points).AllocatorInstance.Data;
  (param_1->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = (param_1->Points).ArrayNum;
  (this->Points).ArrayMax = (param_1->Points).ArrayMax;
  (param_1->Points).ArrayNum = 0;
  (param_1->Points).ArrayMax = 0;
  (this->ShapeType).Value = (param_1->ShapeType).Value;
  (this->ApplyMode).Value = (param_1->ApplyMode).Value;
  bVar10 = (this->bExpandTopByCellHeight ^ param_1->bExpandTopByCellHeight) & 1 ^ this->field_0x6a;
  this->field_0x6a = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x6a) & 2 ^ bVar10;
  this->field_0x6a = bVar10;
  this->field_0x6a = (bVar10 ^ param_1->field_0x6a) & 4 ^ bVar10;
  return this;
}

