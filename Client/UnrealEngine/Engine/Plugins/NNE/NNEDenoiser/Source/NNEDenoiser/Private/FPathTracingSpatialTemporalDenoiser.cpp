// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 5

// FPathTracingSpatialTemporalDenoiser @ 14eae5f60

FPathTracingSpatialTemporalDenoiser * __thiscall
UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser::FPathTracingSpatialTemporalDenoiser
          (FPathTracingSpatialTemporalDenoiser *this,
          TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
          param_1)

{
  this->_padding_ = (longlong)&___7FPathTracingSpatialTemporalDenoiser_Private_NNEDenoiser_UE__6B_;
  (this->Denoiser).Ptr = (FGenericDenoiser *)((param_1.Ptr)->ModelInstance).Ptr;
  ((param_1.Ptr)->ModelInstance).Ptr = (IModelInstance *)0x0;
  return this;
}

// AddMotionVectorPass @ 14eaec0a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser::AddMotionVectorPass
          (FPathTracingSpatialTemporalDenoiser *this,FRDGBuilder *param_1,FSceneView *param_2,
          FMotionVectorInputs *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserPathTracingSpatialTemporalDenoiser.cpp"
                     ,0x26,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddPasses @ 14eaed250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FOutputs __thiscall
UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser::AddPasses
          (FPathTracingSpatialTemporalDenoiser *this,FRDGBuilder *param_1,FSceneView *param_2,
          FInputs *param_3)

{
  undefined8 *in_stack_00000028;
  
  FGenericDenoiser::AddPasses
            ((this->Denoiser).Ptr,(FRDGBuilder *)&stack0x00000028,(FRDGTexture *)param_2,
             (FRDGTexture *)*in_stack_00000028,(FRDGTexture *)in_stack_00000028[1],
             (FRDGTexture *)in_stack_00000028[2],(FRDGTexture *)in_stack_00000028[5],
             (FRHIGPUMask *)in_stack_00000028[6],(FHistory *)&param_3[0x2c].VarianceTex);
  param_1->_padding_ = 0;
  if (in_stack_00000028 != (undefined8 *)0x0) {
    param_1->_padding_ = (longlong)in_stack_00000028;
    LOCK();
    *(int *)(in_stack_00000028 + 1) = *(int *)(in_stack_00000028 + 1) + 1;
    UNLOCK();
  }
  return (FOutputs)
         (TRefCountPtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::IHistory>)param_1
  ;
}

// GetDebugName @ 14eaf8e20

wchar_t * __thiscall
UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser::GetDebugName
          (FPathTracingSpatialTemporalDenoiser *this)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"";
  if (FGenericDenoiser::DebugName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)FGenericDenoiser::DebugName.Data.AllocatorInstance.Data;
  }
  return pwVar1;
}

// NeedTextureCreateExtraFlags @ 14eafbfb0

bool __thiscall
UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser::NeedTextureCreateExtraFlags
          (FPathTracingSpatialTemporalDenoiser *this)

{
  return true;
}

