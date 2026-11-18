// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 3

// FLayerDesc @ 14cf7d800

FLayerDesc * __thiscall IStereoLayers::FLayerDesc::FLayerDesc(FLayerDesc *this,FLayerDesc *param_1)

{
  FRHITexture *pFVar1;
  double dVar2;
  undefined7 uVar3;
  IStereoLayerShape *pIVar4;
  
  this->Id = param_1->Id;
  dVar2 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->QuadSize).field0_0x0._s_0.Y;
  (this->QuadSize).field0_0x0._s_0.X = (param_1->QuadSize).field0_0x0._s_0.X;
  (this->QuadSize).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->UVRect).Min.field0_0x0._s_0.Y;
  (this->UVRect).Min.field0_0x0._s_0.X = (param_1->UVRect).Min.field0_0x0._s_0.X;
  (this->UVRect).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->UVRect).Max.field0_0x0._s_0.Y;
  (this->UVRect).Max.field0_0x0._s_0.X = (param_1->UVRect).Max.field0_0x0._s_0.X;
  (this->UVRect).Max.field0_0x0._s_0.Y = dVar2;
  uVar3 = *(undefined7 *)&(param_1->UVRect).field_0x21;
  (this->UVRect).bIsValid = (param_1->UVRect).bIsValid;
  *(undefined7 *)&(this->UVRect).field_0x21 = uVar3;
  (this->LayerSize).field0_0x0 = (param_1->LayerSize).field0_0x0;
  this->Priority = param_1->Priority;
  this->PositionType = param_1->PositionType;
  (this->TextureObj).WeakPtr = (param_1->TextureObj).WeakPtr;
  (this->Texture).Reference = (FRHITexture *)0x0;
  pFVar1 = (param_1->Texture).Reference;
  (this->Texture).Reference = pFVar1;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->LeftTextureObj).WeakPtr = (param_1->LeftTextureObj).WeakPtr;
  (this->LeftTexture).Reference = (FRHITexture *)0x0;
  pFVar1 = (param_1->LeftTexture).Reference;
  (this->LeftTexture).Reference = pFVar1;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  this->Flags = param_1->Flags;
  pIVar4 = (param_1->Shape).Wrapped.Ptr;
  if (pIVar4 != (IStereoLayerShape *)0x0) {
    pIVar4 = (IStereoLayerShape *)(**(code **)((longlong)*pIVar4 + 8))();
    (this->Shape).Wrapped.Ptr = pIVar4;
    return this;
  }
  (this->Shape).Wrapped.Ptr = (IStereoLayerShape *)0x0;
  return this;
}

// operator= @ 14cf7f520

FLayerDesc * __thiscall IStereoLayers::FLayerDesc::operator=(FLayerDesc *this,FLayerDesc *param_1)

{
  FShapeWrapper *pFVar1;
  FRHITexture *pFVar2;
  FRHITexture *pFVar3;
  IStereoLayerShape *pIVar4;
  double dVar5;
  undefined7 uVar6;
  IStereoLayerShape *pIVar7;
  IStereoLayerShape IVar8;
  longlong local_18 [2];
  
  this->Id = param_1->Id;
  dVar5 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->QuadSize).field0_0x0._s_0.Y;
  (this->QuadSize).field0_0x0._s_0.X = (param_1->QuadSize).field0_0x0._s_0.X;
  (this->QuadSize).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->UVRect).Min.field0_0x0._s_0.Y;
  (this->UVRect).Min.field0_0x0._s_0.X = (param_1->UVRect).Min.field0_0x0._s_0.X;
  (this->UVRect).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->UVRect).Max.field0_0x0._s_0.Y;
  (this->UVRect).Max.field0_0x0._s_0.X = (param_1->UVRect).Max.field0_0x0._s_0.X;
  (this->UVRect).Max.field0_0x0._s_0.Y = dVar5;
  uVar6 = *(undefined7 *)&(param_1->UVRect).field_0x21;
  (this->UVRect).bIsValid = (param_1->UVRect).bIsValid;
  *(undefined7 *)&(this->UVRect).field_0x21 = uVar6;
  (this->LayerSize).field0_0x0 = (param_1->LayerSize).field0_0x0;
  this->Priority = param_1->Priority;
  this->PositionType = param_1->PositionType;
  (this->TextureObj).WeakPtr = (param_1->TextureObj).WeakPtr;
  pFVar2 = (param_1->Texture).Reference;
  pFVar3 = (this->Texture).Reference;
  if (pFVar3 != pFVar2) {
    (this->Texture).Reference = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  (this->LeftTextureObj).WeakPtr = (param_1->LeftTextureObj).WeakPtr;
  pFVar2 = (param_1->LeftTexture).Reference;
  pFVar3 = (this->LeftTexture).Reference;
  if (pFVar3 != pFVar2) {
    (this->LeftTexture).Reference = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (pFVar3 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pFVar1 = &this->Shape;
  this->Flags = param_1->Flags;
  pIVar4 = (param_1->Shape).Wrapped.Ptr;
  pIVar7 = (IStereoLayerShape *)0x0;
  if (pIVar4 != (IStereoLayerShape *)0x0) {
    pIVar7 = (IStereoLayerShape *)(**(code **)((longlong)*pIVar4 + 8))();
  }
  if (pFVar1 == (FShapeWrapper *)local_18) {
    if (pIVar7 == (IStereoLayerShape *)0x0) {
      return this;
    }
    IVar8 = *pIVar7;
  }
  else {
    pIVar4 = (pFVar1->Wrapped).Ptr;
    (pFVar1->Wrapped).Ptr = pIVar7;
    if (pIVar4 == (IStereoLayerShape *)0x0) {
      return this;
    }
    IVar8 = *pIVar4;
    pIVar7 = pIVar4;
  }
  (**(code **)((longlong)IVar8 + 0x10))(pIVar7,1);
  return this;
}

// IsVisible @ 14cf933d0

bool __thiscall IStereoLayers::FLayerDesc::IsVisible(FLayerDesc *this)

{
  bool bVar1;
  UTexture *this_00;
  FTextureResource *pFVar2;
  
  if ((this->Flags & 0x20) == 0) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->TextureObj).WeakPtr);
    if (bVar1) {
      this_00 = (UTexture *)FWeakObjectPtr::Get(&(this->TextureObj).WeakPtr);
      pFVar2 = UTexture::GetResource(this_00);
      if (pFVar2 != (FTextureResource *)0x0) {
        return true;
      }
    }
    if ((this->Texture).Reference != (FRHITexture *)0x0) {
      return true;
    }
  }
  return false;
}

