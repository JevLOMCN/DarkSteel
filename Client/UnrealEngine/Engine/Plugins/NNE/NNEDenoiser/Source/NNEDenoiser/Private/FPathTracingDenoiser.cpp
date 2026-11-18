// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 3

// FPathTracingDenoiser @ 14eae5f30

FPathTracingDenoiser * __thiscall
UE::NNEDenoiser::Private::FPathTracingDenoiser::FPathTracingDenoiser
          (FPathTracingDenoiser *this,
          TUniquePtr<UE::NNEDenoiser::Private::FGenericDenoiser,TDefaultDelete<UE::NNEDenoiser::Private::FGenericDenoiser>_>
          param_1)

{
  this->_padding_ = (longlong)&___7FPathTracingDenoiser_Private_NNEDenoiser_UE__6B_;
  (this->Denoiser).Ptr = (FGenericDenoiser *)((param_1.Ptr)->ModelInstance).Ptr;
  ((param_1.Ptr)->ModelInstance).Ptr = (IModelInstance *)0x0;
  return this;
}

// AddPasses @ 14eaed1a0

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
UE::NNEDenoiser::Private::FPathTracingDenoiser::AddPasses
          (FPathTracingDenoiser *this,FRDGBuilder *param_1,FSceneView *param_2,FInputs *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *local_res8;
  
  FGenericDenoiser::AddPasses
            ((this->Denoiser).Ptr,(FRDGBuilder *)&local_res8,(FRDGTexture *)param_1,
             param_3->ColorTex,param_3->AlbedoTex,param_3->NormalTex,param_3->OutputTex,
             (FRHIGPUMask *)0x0,(FHistory *)&param_2->GPUMask);
  if (local_res8 != (undefined8 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!History.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserPathTracingDenoiser.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_res8 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eaed233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*local_res8)(local_res8,1);
      return;
    }
  }
  return;
}

// NeedTextureCreateExtraFlags @ 14eafbfa0

bool __thiscall
UE::NNEDenoiser::Private::FPathTracingDenoiser::NeedTextureCreateExtraFlags
          (FPathTracingDenoiser *this)

{
  return true;
}

