// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Clone @ 1479b85b0

IStereoLayerShape * __thiscall FEquirectLayer::Clone(FEquirectLayer *this)

{
  IStereoLayerShape IVar1;
  IStereoLayerShape *pIVar2;
  
  pIVar2 = ::operator_new(0xa0);
  if (pIVar2 != (IStereoLayerShape *)0x0) {
    *pIVar2 = (IStereoLayerShape)&___7FEquirectLayer__6B_;
    IVar1 = (IStereoLayerShape)(this->LeftUVRect).Min.field0_0x0._s_0.Y;
    pIVar2[1] = (IStereoLayerShape)(this->LeftUVRect).Min.field0_0x0._s_0.X;
    pIVar2[2] = IVar1;
    IVar1 = (IStereoLayerShape)(this->LeftUVRect).Max.field0_0x0._s_0.Y;
    pIVar2[3] = (IStereoLayerShape)(this->LeftUVRect).Max.field0_0x0._s_0.X;
    pIVar2[4] = IVar1;
    pIVar2[5] = *(IStereoLayerShape *)&(this->LeftUVRect).bIsValid;
    IVar1 = (IStereoLayerShape)(this->RightUVRect).Min.field0_0x0._s_0.Y;
    pIVar2[6] = (IStereoLayerShape)(this->RightUVRect).Min.field0_0x0._s_0.X;
    pIVar2[7] = IVar1;
    IVar1 = (IStereoLayerShape)(this->RightUVRect).Max.field0_0x0._s_0.Y;
    pIVar2[8] = (IStereoLayerShape)(this->RightUVRect).Max.field0_0x0._s_0.X;
    pIVar2[9] = IVar1;
    pIVar2[10] = *(IStereoLayerShape *)&(this->RightUVRect).bIsValid;
    IVar1 = (IStereoLayerShape)(this->LeftScale).field0_0x0._s_0.Y;
    pIVar2[0xb] = (IStereoLayerShape)(this->LeftScale).field0_0x0._s_0.X;
    pIVar2[0xc] = IVar1;
    IVar1 = (IStereoLayerShape)(this->RightScale).field0_0x0._s_0.Y;
    pIVar2[0xd] = (IStereoLayerShape)(this->RightScale).field0_0x0._s_0.X;
    pIVar2[0xe] = IVar1;
    IVar1 = (IStereoLayerShape)(this->LeftBias).field0_0x0._s_0.Y;
    pIVar2[0xf] = (IStereoLayerShape)(this->LeftBias).field0_0x0._s_0.X;
    pIVar2[0x10] = IVar1;
    IVar1 = (IStereoLayerShape)(this->RightBias).field0_0x0._s_0.Y;
    pIVar2[0x11] = (IStereoLayerShape)(this->RightBias).field0_0x0._s_0.X;
    pIVar2[0x12] = IVar1;
    *(float *)(pIVar2 + 0x13) = this->Radius;
    return pIVar2;
  }
  return (IStereoLayerShape *)0x0;
}

// GetShapeName @ 1479d0a10

FName __thiscall FEquirectLayer::GetShapeName(FEquirectLayer *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = ShapeName;
  return in_RDX;
}

