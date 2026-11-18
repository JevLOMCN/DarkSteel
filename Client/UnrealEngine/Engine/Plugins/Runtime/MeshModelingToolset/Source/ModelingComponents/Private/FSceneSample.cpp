// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// FSceneSample @ 14cb623c0

FSceneSample * __thiscall
UE::Geometry::FSceneCapturePhotoSet::FSceneSample::FSceneSample(FSceneSample *this)

{
  (this->HaveValues).bBaseColor = false;
  (this->HaveValues).bRoughness = false;
  (this->HaveValues).bMetallic = false;
  (this->HaveValues).bSpecular = false;
  (this->HaveValues).bEmissive = false;
  (this->HaveValues).bWorldNormal = false;
  (this->HaveValues).bCombinedMRS = false;
  (this->HaveValues).bDeviceDepth = false;
  (this->HaveValues).bOpacity = false;
  (this->HaveValues).bSubsurfaceColor = false;
  *(undefined8 *)&(this->BaseColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->BaseColor).field0_0x0 + 8) = 0;
  this->Specular = 0.0;
  this->Metallic = 0.0;
  *(undefined8 *)&(this->Emissive).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Emissive).field0_0x0 + 8) = 0;
  *(undefined8 *)&this->Opacity = 0;
  *(undefined8 *)((longlong)&(this->SubsurfaceColor).field0_0x0 + 4) = 0;
  (this->WorldNormal).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)((longlong)&(this->WorldNormal).field0_0x0 + 8) = 0x3f800000;
  return this;
}

// GetValue3f @ 14cba04c0

TVector<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::FSceneSample::GetValue3f
          (FSceneSample *this,TVector<float> *__return_storage_ptr__,ERenderCaptureType param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  TVector<float> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((int)param_1 < 0x11) {
    if (param_1 == Emissive) {
      fVar6 = (this->Emissive).field0_0x0._s_0.Z;
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->Emissive).field0_0x0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
      return __return_storage_ptr__;
    }
    if (param_1 == BaseColor) {
      fVar6 = (this->BaseColor).field0_0x0._s_0.Z;
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->BaseColor).field0_0x0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
      return __return_storage_ptr__;
    }
    if (param_1 == Roughness) {
      fVar6 = this->Roughness;
    }
    else if (param_1 == Metallic) {
      fVar6 = this->Metallic;
    }
    else {
      if (param_1 != Specular) goto LAB_14cba058b;
      fVar6 = this->Specular;
    }
  }
  else {
    if (param_1 == WorldNormal) {
      fVar6 = (this->WorldNormal).field0_0x0._s_0.Z;
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->WorldNormal).field0_0x0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
      return __return_storage_ptr__;
    }
    if (param_1 == DeviceDepth) {
      fVar6 = this->DeviceDepth;
    }
    else {
      if (param_1 != Opacity) {
        if (param_1 == SubsurfaceColor) {
          fVar6 = (this->SubsurfaceColor).field0_0x0._s_0.Z;
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
               *(undefined8 *)&(this->SubsurfaceColor).field0_0x0;
          (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
          return __return_storage_ptr__;
        }
LAB_14cba058b:
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3311711688373305702>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                           ,0x166,"false");
        uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TVector<float> *)(*pcVar1)();
          return pTVar4;
        }
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
             UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar2;
        return __return_storage_ptr__;
      }
      fVar6 = this->Opacity;
    }
  }
  fVar5 = fVar6 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  fVar7 = fVar6 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar6 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar7;
  return __return_storage_ptr__;
}

// GetValue4f @ 14cba0620

TVector4<float> * __thiscall
UE::Geometry::FSceneCapturePhotoSet::FSceneSample::GetValue4f
          (FSceneSample *this,TVector4<float> *__return_storage_ptr__,ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector4<float> *pTVar3;
  float fVar4;
  
  if ((int)param_1 < 0x21) {
    if (param_1 == WorldNormal) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->WorldNormal).field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->WorldNormal).field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->WorldNormal).field0_0x0._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      return __return_storage_ptr__;
    }
    if (param_1 == BaseColor) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->BaseColor).field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->BaseColor).field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->BaseColor).field0_0x0._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      return __return_storage_ptr__;
    }
    if (param_1 == Roughness) {
      fVar4 = this->Roughness;
    }
    else if (param_1 == Metallic) {
      fVar4 = this->Metallic;
    }
    else {
      if (param_1 != Specular) {
        if (param_1 == Emissive) {
          (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Emissive).field0_0x0._s_0.X;
          (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->Emissive).field0_0x0._s_0.Y;
          (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->Emissive).field0_0x0._s_0.Z;
          (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
          return __return_storage_ptr__;
        }
        goto LAB_14cba06fe;
      }
      fVar4 = this->Specular;
    }
  }
  else if (param_1 == DeviceDepth) {
    fVar4 = this->DeviceDepth;
  }
  else {
    if (param_1 == CombinedMRS) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = this->Metallic;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = this->Roughness;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = this->Specular;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      return __return_storage_ptr__;
    }
    if (param_1 != Opacity) {
      if (param_1 == SubsurfaceColor) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = (this->SubsurfaceColor).field0_0x0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->SubsurfaceColor).field0_0x0._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->SubsurfaceColor).field0_0x0._s_0.Z;
        (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
        return __return_storage_ptr__;
      }
LAB_14cba06fe:
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3311711688373305732>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\SceneCapturePhotoSet.cpp"
                         ,0x184,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector4<float> *)(*pcVar1)();
        return pTVar3;
      }
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
      return __return_storage_ptr__;
    }
    fVar4 = this->Opacity;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  return __return_storage_ptr__;
}

