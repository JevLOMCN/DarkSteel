// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FRecastDebugPathfindingNode @ 146dd7120

FRecastDebugPathfindingNode * __thiscall
FRecastDebugPathfindingNode::FRecastDebugPathfindingNode
          (FRecastDebugPathfindingNode *this,FRecastDebugPathfindingNode *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  byte bVar4;
  ForElementType<UE::Math::TVector<float>_> _Dst;
  ForElementType<UE::Math::TVector<float>_> _Src;
  
  this->PolyRef = param_1->PolyRef;
  this->ParentRef = param_1->ParentRef;
  this->Cost = param_1->Cost;
  this->TotalCost = param_1->TotalCost;
  this->Length = param_1->Length;
  dVar3 = (param_1->NodePos).field0_0x0._s_0.Y;
  (this->NodePos).field0_0x0._s_0.X = (param_1->NodePos).field0_0x0._s_0.X;
  (this->NodePos).field0_0x0._s_0.Y = dVar3;
  (this->NodePos).field0_0x0._s_0.Z = (param_1->NodePos).field0_0x0._s_0.Z;
  (this->Verts).AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TVector<float>_>)0x0;
  _Src = (param_1->Verts).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Verts).ArrayNum;
  (this->Verts).ArrayNum = iVar2;
  if (_Src == (ForElementType<UE::Math::TVector<float>_>)0x0) {
    _Src = (ForElementType<UE::Math::TVector<float>_>)&param_1->Verts;
  }
  piVar1 = &(this->Verts).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 6;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<float>_>_>
              (0xc,4,iVar2,0,&(this->Verts).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->Verts).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      _Dst = (ForElementType<UE::Math::TVector<float>_>)&this->Verts;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0xc);
  }
  this->NumVerts = param_1->NumVerts;
  bVar4 = (this->bOpenSet ^ param_1->bOpenSet) & 1 ^ this->field_0x99;
  this->field_0x99 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x99) & 2 ^ bVar4;
  this->field_0x99 = bVar4;
  this->field_0x99 = (bVar4 ^ param_1->field_0x99) & 4 ^ bVar4;
  return this;
}

