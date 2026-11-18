// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 3

// FLensDistortionDisplacementMapGenerationShader @ 14d7c7290

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FLensDistortionDisplacementMapGenerationShader * __thiscall
FLensDistortionDisplacementMapGenerationShader::FLensDistortionDisplacementMapGenerationShader
          (FLensDistortionDisplacementMapGenerationShader *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->PixelUVSize;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->PixelUVSize).NumBytes = 0;
  (this->UndistortDisplacementMap).BaseIndex = 0;
  *(undefined4 *)&(this->UndistortDisplacementMap).NumResources = 0;
  (this->BilinearSampler).NumResources = '\0';
  (this->BilinearSampler).Type = LooseData;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"PixelUVSize",SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->UndistortDisplacementMap,param_1->ParameterMap,L"UndistortDisplacementMap",
             SPF_Optional);
  FShaderResourceParameter::Bind
            (&this->BilinearSampler,param_1->ParameterMap,L"BilinearClampedSampler",SPF_Optional);
  return this;
}

// InternalDestroy @ 14d7c9500

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FLensDistortionDisplacementMapGenerationShader::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0xf0);
  return;
}

// SetParameters @ 14d7c9580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLensDistortionDisplacementMapGenerationShader::SetParameters
          (FLensDistortionDisplacementMapGenerationShader *this,FRHIBatchedShaderParameters *param_1
          ,FTextureResource *param_2,TIntPoint<int> *param_3)

{
  ushort uVar1;
  uint uVar2;
  float local_res8;
  float local_resc;
  
  local_res8 = __real_3f800000 / (float)(param_3->field0_0x0)._s_0.X;
  uVar1 = (this->PixelUVSize).NumBytes;
  uVar2 = (uint)uVar1;
  if (8 < uVar1) {
    uVar2 = 8;
  }
  local_resc = __real_3f800000 / (float)(param_3->field0_0x0)._s_0.Y;
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PixelUVSize).BufferIndex,(uint)(this->PixelUVSize).BaseIndex,
               uVar2,&local_res8);
  }
  SetTextureParameter(param_1,&this->UndistortDisplacementMap,&this->BilinearSampler,
                      TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference,(FRHITexture *)param_2->_padding_);
  return;
}

