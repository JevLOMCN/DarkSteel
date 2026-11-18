// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 2

// FSplashDesc @ 14cf7d990

FSplashDesc * __thiscall
IXRLoadingScreen::FSplashDesc::FSplashDesc(FSplashDesc *this,FSplashDesc *param_1)

{
  FRHITexture *pFVar1;
  double dVar2;
  undefined7 uVar3;
  
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
  dVar2 = (param_1->DeltaRotation).Y;
  (this->DeltaRotation).X = (param_1->DeltaRotation).X;
  (this->DeltaRotation).Y = dVar2;
  dVar2 = (param_1->DeltaRotation).W;
  (this->DeltaRotation).Z = (param_1->DeltaRotation).Z;
  (this->DeltaRotation).W = dVar2;
  this->bIgnoreAlpha = param_1->bIgnoreAlpha;
  this->bIsDynamic = param_1->bIsDynamic;
  this->bIsExternal = param_1->bIsExternal;
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
  return this;
}

// FSplashDesc @ 14cf7dac0

FSplashDesc * __thiscall IXRLoadingScreen::FSplashDesc::FSplashDesc(FSplashDesc *this)

{
  double dVar1;
  undefined8 local_res8;
  
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->QuadSize).field0_0x0._s_0.X = 1.0;
  (this->QuadSize).field0_0x0._s_0.Y = 1.0;
  (this->UVRect).Min.field0_0x0._s_0.X = 0.0;
  (this->UVRect).Min.field0_0x0._s_0.Y = 0.0;
  (this->UVRect).Max.field0_0x0._s_0.X = 1.0;
  (this->UVRect).Max.field0_0x0._s_0.Y = 1.0;
  (this->UVRect).bIsValid = true;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->DeltaRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->DeltaRotation).Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  local_res8 = 0;
  (this->DeltaRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->DeltaRotation).W = dVar1;
  this->bIgnoreAlpha = false;
  this->bIsDynamic = false;
  this->bIsExternal = false;
  (this->TextureObj).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TextureObj).WeakPtr,(FObjectPtr)&local_res8);
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->LeftTextureObj).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->LeftTextureObj).WeakPtr,(FObjectPtr)&local_res8);
  (this->LeftTexture).Reference = (FRHITexture *)0x0;
  return this;
}

