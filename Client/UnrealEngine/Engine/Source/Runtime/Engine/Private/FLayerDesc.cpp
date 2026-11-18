// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FLayerDesc @ 1479a3640

FLayerDesc * __thiscall IStereoLayers::FLayerDesc::FLayerDesc(FLayerDesc *this)

{
  IStereoLayerShape *pIVar1;
  undefined8 local_res8;
  
  this->Id = 0;
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
  (this->LayerSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->Priority = 0;
  this->PositionType = FaceLocked;
  local_res8 = 0;
  (this->TextureObj).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TextureObj).WeakPtr,(FObjectPtr)&local_res8);
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->LeftTextureObj).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->LeftTextureObj).WeakPtr,(FObjectPtr)&local_res8);
  (this->LeftTexture).Reference = (FRHITexture *)0x0;
  this->Flags = 0;
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (IStereoLayerShape *)0x0) {
    *pIVar1 = (IStereoLayerShape)&___7FQuadLayer__6B_;
    (this->Shape).Wrapped.Ptr = pIVar1;
    return this;
  }
  (this->Shape).Wrapped.Ptr = (IStereoLayerShape *)0x0;
  return this;
}

