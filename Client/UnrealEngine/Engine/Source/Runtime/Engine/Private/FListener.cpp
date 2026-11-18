// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FListener @ 14761d750

FListener * __thiscall FListener::FListener(FListener *this,FAudioDevice *param_1)

{
  __m128d _Var1;
  
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
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  this->bUseAttenuationOverride = 0;
  *&(this->Transform).Scale3D.ZW.m128d_f64 = _Var1.m128d_f64;
  (this->Velocity).field0_0x0._s_0.X = 0.0;
  (this->Velocity).field0_0x0._s_0.Y = 0.0;
  (this->Velocity).field0_0x0._s_0.Z = 0.0;
  (this->AttenuationOverride).field0_0x0._s_0.X = 0.0;
  (this->AttenuationOverride).field0_0x0._s_0.Y = 0.0;
  (this->AttenuationOverride).field0_0x0._s_0.Z = 0.0;
  FInteriorSettings::FInteriorSettings(&this->InteriorSettings);
  this->AudioVolumeID = 0;
  this->ListenerIndex = 0;
  this->InteriorStartTime = 0.0;
  this->InteriorEndTime = 0.0;
  this->ExteriorEndTime = 0.0;
  this->InteriorLPFEndTime = 0.0;
  this->ExteriorLPFEndTime = 0.0;
  this->InteriorVolumeInterp = 0.0;
  this->InteriorLPFInterp = 0.0;
  this->ExteriorVolumeInterp = 0.0;
  this->ExteriorLPFInterp = 0.0;
  this->AudioDevice = param_1;
  return this;
}

// ApplyInteriorSettings @ 14762ae60

void __thiscall
FListener::ApplyInteriorSettings(FListener *this,uint param_1,FInteriorSettings *param_2)

{
  undefined3 uVar1;
  float fVar2;
  float fVar3;
  atomic<double> aVar4;
  bool bVar5;
  float fVar6;
  
  if ((param_1 == this->AudioVolumeID) &&
     (bVar5 = FInteriorSettings::operator!=(param_2,&this->InteriorSettings), !bVar5)) {
    return;
  }
  aVar4 = FApp::CurrentTime;
  this->InteriorStartTime = (double)FApp::CurrentTime;
  if (param_2->bIsWorldSettings == false) {
    fVar6 = param_2->InteriorTime;
  }
  else {
    fVar6 = (this->InteriorSettings).InteriorTime;
  }
  this->InteriorEndTime = (double)fVar6 + (double)aVar4;
  if (param_2->bIsWorldSettings == false) {
    fVar6 = param_2->ExteriorTime;
  }
  else {
    fVar6 = (this->InteriorSettings).ExteriorTime;
  }
  this->ExteriorEndTime = (double)fVar6 + (double)aVar4;
  if (param_2->bIsWorldSettings == false) {
    fVar6 = param_2->InteriorLPFTime;
  }
  else {
    fVar6 = (this->InteriorSettings).InteriorLPFTime;
  }
  this->InteriorLPFEndTime = (double)fVar6 + (double)aVar4;
  if (param_2->bIsWorldSettings == false) {
    fVar6 = param_2->ExteriorLPFTime;
  }
  else {
    fVar6 = (this->InteriorSettings).ExteriorLPFTime;
  }
  this->AudioVolumeID = param_1;
  this->ExteriorLPFEndTime = (double)fVar6 + (double)aVar4;
  uVar1 = *(undefined3 *)&param_2->field_0x1;
  fVar6 = param_2->ExteriorVolume;
  fVar2 = param_2->ExteriorTime;
  fVar3 = param_2->ExteriorLPF;
  (this->InteriorSettings).bIsWorldSettings = param_2->bIsWorldSettings;
  *(undefined3 *)&(this->InteriorSettings).field_0x1 = uVar1;
  (this->InteriorSettings).ExteriorVolume = fVar6;
  (this->InteriorSettings).ExteriorTime = fVar2;
  (this->InteriorSettings).ExteriorLPF = fVar3;
  fVar6 = param_2->InteriorVolume;
  fVar2 = param_2->InteriorTime;
  fVar3 = param_2->InteriorLPF;
  (this->InteriorSettings).ExteriorLPFTime = param_2->ExteriorLPFTime;
  (this->InteriorSettings).InteriorVolume = fVar6;
  (this->InteriorSettings).InteriorTime = fVar2;
  (this->InteriorSettings).InteriorLPF = fVar3;
  (this->InteriorSettings).InteriorLPFTime = param_2->InteriorLPFTime;
  return;
}

// GetPosition @ 14763f040

TVector<double> * __thiscall
FListener::GetPosition(FListener *this,TVector<double> *__return_storage_ptr__,bool param_1)

{
  double dVar1;
  double dVar2;
  
  if ((param_1) && (this->bUseAttenuationOverride != 0)) {
    dVar1 = (this->AttenuationOverride).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->AttenuationOverride).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->AttenuationOverride).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar2 = (this->Transform).Translation.XY.m128d_f64[1];
  dVar1 = (this->Transform).Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Transform).Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Interpolate @ 147648610

float __thiscall FListener::Interpolate(FListener *this,double param_1)

{
  float fVar1;
  
  if ((double)FApp::CurrentTime < this->InteriorStartTime) {
    return 0.0;
  }
  if (param_1 <= (double)FApp::CurrentTime) {
    return __real_3f800000;
  }
  fVar1 = (float)(((double)FApp::CurrentTime - this->InteriorStartTime) /
                 (param_1 - this->InteriorStartTime));
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// UpdateCurrentInteriorSettings @ 14766e580

void __thiscall FListener::UpdateCurrentInteriorSettings(FListener *this)

{
  float fVar1;
  
  fVar1 = Interpolate(this,this->InteriorEndTime);
  this->InteriorVolumeInterp = fVar1;
  fVar1 = Interpolate(this,this->ExteriorEndTime);
  this->ExteriorVolumeInterp = fVar1;
  fVar1 = Interpolate(this,this->InteriorLPFEndTime);
  this->InteriorLPFInterp = fVar1;
  fVar1 = Interpolate(this,this->ExteriorLPFEndTime);
  this->ExteriorLPFInterp = fVar1;
  return;
}

