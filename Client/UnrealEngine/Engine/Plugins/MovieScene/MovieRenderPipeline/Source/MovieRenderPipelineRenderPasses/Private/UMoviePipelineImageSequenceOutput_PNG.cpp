// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 7

// StaticClass @ 14ddbb030

UClass * __cdecl UMoviePipelineImageSequenceOutput_PNG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_PNG.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_PNG",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_PNG.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_PNG,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_PNG>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_PNG>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_PNG.InnerSingleton;
}

// UMoviePipelineImageSequenceOutput_PNG @ 14ddc8900

UMoviePipelineImageSequenceOutput_PNG * __thiscall
UMoviePipelineImageSequenceOutput_PNG::UMoviePipelineImageSequenceOutput_PNG
          (UMoviePipelineImageSequenceOutput_PNG *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMoviePipelineImageSequenceOutput_PNG__6B_;
  return this;
}

// ~UMoviePipelineImageSequenceOutput_PNG @ 14ddcbe40

void __thiscall
UMoviePipelineImageSequenceOutput_PNG::~UMoviePipelineImageSequenceOutput_PNG
          (UMoviePipelineImageSequenceOutput_PNG *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineImageSequenceOutputBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dde43e0

UClass * __cdecl UMoviePipelineImageSequenceOutput_PNG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_PNG.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_PNG",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_PNG.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_PNG,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_PNG>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_PNG>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_PNG.InnerSingleton;
}

// IsAlphaAllowed @ 14dde7ca0

bool __thiscall
UMoviePipelineImageSequenceOutput_PNG::IsAlphaAllowed(UMoviePipelineImageSequenceOutput_PNG *this)

{
  return this->bWriteAlpha;
}

// StaticRegisterNativesUMoviePipelineImageSequenceOutput_PNG @ 14ddff2d0

void __cdecl
UMoviePipelineImageSequenceOutput_PNG::StaticRegisterNativesUMoviePipelineImageSequenceOutput_PNG
          (void)

{
  return;
}

// UpdateTelemetry @ 14de02f20

void __thiscall
UMoviePipelineImageSequenceOutput_PNG::UpdateTelemetry
          (UMoviePipelineImageSequenceOutput_PNG *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesPNG = true;
  return;
}

