// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FVolumetricFogIntegrationParameterData @ 1458594f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVolumetricFogIntegrationParameterData * __thiscall
FVolumetricFogIntegrationParameterData::FVolumetricFogIntegrationParameterData
          (FVolumetricFogIntegrationParameterData *this,
          FVolumetricFogIntegrationParameterData *param_1)

{
  ForElementType<UE::Math::TVector4<float>_> FVar1;
  
  this->bTemporalHistoryIsValid = param_1->bTemporalHistoryIsValid;
  (this->FrameJitterOffsetValues).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector4<float>_>)0x0;
  if ((param_1->FrameJitterOffsetValues).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    memmove(&this->FrameJitterOffsetValues,&param_1->FrameJitterOffsetValues,0x100);
  }
  FVar1 = (this->FrameJitterOffsetValues).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->FrameJitterOffsetValues).AllocatorInstance.SecondaryData =
       (param_1->FrameJitterOffsetValues).AllocatorInstance.SecondaryData;
  (param_1->FrameJitterOffsetValues).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector4<float>_>)0x0;
  (this->FrameJitterOffsetValues).ArrayNum = (param_1->FrameJitterOffsetValues).ArrayNum;
  (this->FrameJitterOffsetValues).ArrayMax = (param_1->FrameJitterOffsetValues).ArrayMax;
  (param_1->FrameJitterOffsetValues).ArrayNum = 0;
  (param_1->FrameJitterOffsetValues).ArrayMax = 0x10;
  this->VBufferA = param_1->VBufferA;
  this->VBufferB = param_1->VBufferB;
  this->VBufferA_UAV = param_1->VBufferA_UAV;
  this->VBufferB_UAV = param_1->VBufferB_UAV;
  this->LightScattering = param_1->LightScattering;
  this->LightScatteringUAV = param_1->LightScatteringUAV;
  return this;
}

// FVolumetricFogIntegrationParameterData @ 145859600

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVolumetricFogIntegrationParameterData * __thiscall
FVolumetricFogIntegrationParameterData::FVolumetricFogIntegrationParameterData
          (FVolumetricFogIntegrationParameterData *this,
          FVolumetricFogIntegrationParameterData *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Math::TVector4<float>_> _Dst;
  ForElementType<UE::Math::TVector4<float>_> _Src;
  
  this->bTemporalHistoryIsValid = param_1->bTemporalHistoryIsValid;
  (this->FrameJitterOffsetValues).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector4<float>_>)0x0;
  _Src = (param_1->FrameJitterOffsetValues).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->FrameJitterOffsetValues).ArrayNum;
  (this->FrameJitterOffsetValues).ArrayNum = iVar2;
  if (_Src == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
    _Src = (ForElementType<UE::Math::TVector4<float>_>)&param_1->FrameJitterOffsetValues;
  }
  piVar1 = &(this->FrameJitterOffsetValues).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
              (0x10,0x10,iVar2,0,&(this->FrameJitterOffsetValues).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->FrameJitterOffsetValues).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      _Dst = (ForElementType<UE::Math::TVector4<float>_>)&this->FrameJitterOffsetValues;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 4);
  }
  this->VBufferA = param_1->VBufferA;
  this->VBufferB = param_1->VBufferB;
  this->VBufferA_UAV = param_1->VBufferA_UAV;
  this->VBufferB_UAV = param_1->VBufferB_UAV;
  this->LightScattering = param_1->LightScattering;
  this->LightScatteringUAV = param_1->LightScatteringUAV;
  return this;
}

