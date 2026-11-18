// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// FStereoLayerToRender @ 14cf7dbc0

FStereoLayerToRender * __thiscall
FDefaultStereoLayers::FStereoLayerToRender::FStereoLayerToRender
          (FStereoLayerToRender *this,FStereoLayerToRenderTransfer *param_1)

{
  FTextureResource *pFVar1;
  FRHITexture *this_00;
  double dVar2;
  undefined7 uVar3;
  TRefCountPtr<FRHITexture> *pTVar4;
  
  this->Id = param_1->Id;
  this->Priority = param_1->Priority;
  this->Flags = param_1->Flags;
  this->PositionType = param_1->PositionType;
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
  pFVar1 = param_1->Texture;
  (this->Texture).Reference = (FRHITexture *)0x0;
  pTVar4 = (TRefCountPtr<FRHITexture> *)&pFVar1->_padding_;
  if (pFVar1 == (FTextureResource *)0x0) {
    pTVar4 = &param_1->Texture_Deprecated;
  }
  this_00 = pTVar4->Reference;
  (this->Texture).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return this;
}

