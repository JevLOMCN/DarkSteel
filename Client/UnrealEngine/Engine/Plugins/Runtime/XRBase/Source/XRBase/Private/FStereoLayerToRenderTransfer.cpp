// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 2

// FStereoLayerToRenderTransfer @ 14cf7dc90

FStereoLayerToRenderTransfer * __thiscall
FDefaultStereoLayers::FStereoLayerToRenderTransfer::FStereoLayerToRenderTransfer
          (FStereoLayerToRenderTransfer *this,FStereoLayerToRenderTransfer *param_1)

{
  FRHITexture *this_00;
  double dVar1;
  undefined7 uVar2;
  
  this->Id = param_1->Id;
  this->Priority = param_1->Priority;
  this->Flags = param_1->Flags;
  this->PositionType = param_1->PositionType;
  dVar1 = (param_1->QuadSize).field0_0x0._s_0.Y;
  (this->QuadSize).field0_0x0._s_0.X = (param_1->QuadSize).field0_0x0._s_0.X;
  (this->QuadSize).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->UVRect).Min.field0_0x0._s_0.Y;
  (this->UVRect).Min.field0_0x0._s_0.X = (param_1->UVRect).Min.field0_0x0._s_0.X;
  (this->UVRect).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->UVRect).Max.field0_0x0._s_0.Y;
  (this->UVRect).Max.field0_0x0._s_0.X = (param_1->UVRect).Max.field0_0x0._s_0.X;
  (this->UVRect).Max.field0_0x0._s_0.Y = dVar1;
  uVar2 = *(undefined7 *)&(param_1->UVRect).field_0x21;
  (this->UVRect).bIsValid = (param_1->UVRect).bIsValid;
  *(undefined7 *)&(this->UVRect).field_0x21 = uVar2;
  dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->Texture = param_1->Texture;
  (this->Texture_Deprecated).Reference = (FRHITexture *)0x0;
  this_00 = (param_1->Texture_Deprecated).Reference;
  (this->Texture_Deprecated).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return this;
}

// FStereoLayerToRenderTransfer @ 14cf7dd60

FStereoLayerToRenderTransfer * __thiscall
FDefaultStereoLayers::FStereoLayerToRenderTransfer::FStereoLayerToRenderTransfer
          (FStereoLayerToRenderTransfer *this,FLayerDesc *param_1)

{
  FRHITexture *this_00;
  double dVar1;
  undefined7 uVar2;
  bool bVar3;
  UTexture *this_01;
  FTextureResource *pFVar4;
  
  this->Id = param_1->Id;
  this->Priority = param_1->Priority;
  this->Flags = param_1->Flags;
  this->PositionType = param_1->PositionType;
  dVar1 = (param_1->QuadSize).field0_0x0._s_0.Y;
  (this->QuadSize).field0_0x0._s_0.X = (param_1->QuadSize).field0_0x0._s_0.X;
  (this->QuadSize).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->UVRect).Min.field0_0x0._s_0.Y;
  (this->UVRect).Min.field0_0x0._s_0.X = (param_1->UVRect).Min.field0_0x0._s_0.X;
  (this->UVRect).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->UVRect).Max.field0_0x0._s_0.Y;
  (this->UVRect).Max.field0_0x0._s_0.X = (param_1->UVRect).Max.field0_0x0._s_0.X;
  (this->UVRect).Max.field0_0x0._s_0.Y = dVar1;
  uVar2 = *(undefined7 *)&(param_1->UVRect).field_0x21;
  (this->UVRect).bIsValid = (param_1->UVRect).bIsValid;
  *(undefined7 *)&(this->UVRect).field_0x21 = uVar2;
  dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  bVar3 = FWeakObjectPtr::IsValid(&(param_1->TextureObj).WeakPtr);
  if (bVar3) {
    this_01 = (UTexture *)FWeakObjectPtr::Get(&(param_1->TextureObj).WeakPtr);
    pFVar4 = UTexture::GetResource(this_01);
  }
  else {
    pFVar4 = (FTextureResource *)0x0;
  }
  this->Texture = pFVar4;
  (this->Texture_Deprecated).Reference = (FRHITexture *)0x0;
  this_00 = (param_1->Texture).Reference;
  (this->Texture_Deprecated).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return this;
}

