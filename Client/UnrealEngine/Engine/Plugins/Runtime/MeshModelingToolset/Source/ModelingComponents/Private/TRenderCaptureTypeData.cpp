// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// operator[] @ 14ca6c320

ECaptureTypeStatus * __thiscall
UE::Geometry::TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>::
operator[](void *this,ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  ECaptureTypeStatus *pEVar3;
  
  if ((int)param_1 < 0x21) {
    if (param_1 == WorldNormal) {
      return (ECaptureTypeStatus *)((longlong)this + 0x14);
    }
    if (param_1 == BaseColor) {
      return this;
    }
    if (param_1 == Roughness) {
      return (ECaptureTypeStatus *)((longlong)this + 4);
    }
    if (param_1 == Metallic) {
      return (ECaptureTypeStatus *)((longlong)this + 0xc);
    }
    if (param_1 == Specular) {
      return (ECaptureTypeStatus *)((longlong)this + 8);
    }
    if (param_1 == Emissive) {
      return (ECaptureTypeStatus *)((longlong)this + 0x18);
    }
  }
  else {
    if (param_1 == DeviceDepth) {
      return (ECaptureTypeStatus *)((longlong)this + 0x24);
    }
    if (param_1 == CombinedMRS) {
      return (ECaptureTypeStatus *)((longlong)this + 0x10);
    }
    if (param_1 == Opacity) {
      return (ECaptureTypeStatus *)((longlong)this + 0x1c);
    }
    if (param_1 == SubsurfaceColor) {
      return (ECaptureTypeStatus *)((longlong)this + 0x20);
    }
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6000718612782907552>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Scene\\WorldRenderCapture.h"
                     ,0xa0,"false");
  if (!bVar2) {
    return this;
  }
  pcVar1 = (code *)swi(3);
  pEVar3 = (ECaptureTypeStatus *)(*pcVar1)();
  return pEVar3;
}

// operator[] @ 14cb659f0

FRenderCaptureConfig * __thiscall
UE::Geometry::TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig>::operator[]
          (TRenderCaptureTypeData<UE::Geometry::FRenderCaptureConfig> *this,
          ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCaptureConfig *pFVar3;
  
  if ((int)param_1 < 0x21) {
    if (param_1 == WorldNormal) {
      return &this->WorldNormal;
    }
    if (param_1 == BaseColor) {
      return &this->BaseColor;
    }
    if (param_1 == Roughness) {
      return &this->Roughness;
    }
    if (param_1 == Metallic) {
      return &this->Metallic;
    }
    if (param_1 == Specular) {
      return &this->Specular;
    }
    if (param_1 == Emissive) {
      return &this->Emissive;
    }
  }
  else {
    if (param_1 == DeviceDepth) {
      return &this->DeviceDepth;
    }
    if (param_1 == CombinedMRS) {
      return &this->CombinedMRS;
    }
    if (param_1 == Opacity) {
      return &this->Opacity;
    }
    if (param_1 == SubsurfaceColor) {
      return &this->SubsurfaceColor;
    }
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6000718612782907552>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Scene\\WorldRenderCapture.h"
                     ,0xa0,"false");
  if (!bVar2) {
    return &this->BaseColor;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FRenderCaptureConfig *)(*pcVar1)();
  return pFVar3;
}

// operator[] @ 14cb65ad0

ECaptureTypeStatus * __thiscall
UE::Geometry::TRenderCaptureTypeData<enum_UE::Geometry::FSceneCapturePhotoSet::ECaptureTypeStatus>::
operator[](void *this,ERenderCaptureType param_1)

{
  code *pcVar1;
  bool bVar2;
  ECaptureTypeStatus *pEVar3;
  
  if ((int)param_1 < 0x21) {
    if (param_1 == WorldNormal) {
      return (ECaptureTypeStatus *)((longlong)this + 0x14);
    }
    if (param_1 == BaseColor) {
      return this;
    }
    if (param_1 == Roughness) {
      return (ECaptureTypeStatus *)((longlong)this + 4);
    }
    if (param_1 == Metallic) {
      return (ECaptureTypeStatus *)((longlong)this + 0xc);
    }
    if (param_1 == Specular) {
      return (ECaptureTypeStatus *)((longlong)this + 8);
    }
    if (param_1 == Emissive) {
      return (ECaptureTypeStatus *)((longlong)this + 0x18);
    }
  }
  else {
    if (param_1 == DeviceDepth) {
      return (ECaptureTypeStatus *)((longlong)this + 0x24);
    }
    if (param_1 == CombinedMRS) {
      return (ECaptureTypeStatus *)((longlong)this + 0x10);
    }
    if (param_1 == Opacity) {
      return (ECaptureTypeStatus *)((longlong)this + 0x1c);
    }
    if (param_1 == SubsurfaceColor) {
      return (ECaptureTypeStatus *)((longlong)this + 0x20);
    }
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6000718612782907552>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Scene\\WorldRenderCapture.h"
                     ,0xa0,"false");
  if (!bVar2) {
    return this;
  }
  pcVar1 = (code *)swi(3);
  pEVar3 = (ECaptureTypeStatus *)(*pcVar1)();
  return pEVar3;
}

