// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 6

// StaticClass @ 14ddbb0f0

UClass * __cdecl UMoviePipelineImageSequenceOutput_JPG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_JPG.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_JPG",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_JPG.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_JPG,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_JPG>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_JPG>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_JPG.InnerSingleton;
}

// UMoviePipelineImageSequenceOutput_JPG @ 14ddc88c0

UMoviePipelineImageSequenceOutput_JPG * __thiscall
UMoviePipelineImageSequenceOutput_JPG::UMoviePipelineImageSequenceOutput_JPG
          (UMoviePipelineImageSequenceOutput_JPG *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UMoviePipelineImageSequenceOutput_JPG__6B_;
  return this;
}

// ~UMoviePipelineImageSequenceOutput_JPG @ 14ddcbe10

void __thiscall
UMoviePipelineImageSequenceOutput_JPG::~UMoviePipelineImageSequenceOutput_JPG
          (UMoviePipelineImageSequenceOutput_JPG *this)

{
  *(undefined ***)this = &___7UMoviePipelineImageSequenceOutputBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x60);
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dde4320

UClass * __cdecl UMoviePipelineImageSequenceOutput_JPG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_JPG.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_JPG",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_JPG.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_JPG,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_JPG>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_JPG>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_JPG.InnerSingleton;
}

// StaticRegisterNativesUMoviePipelineImageSequenceOutput_JPG @ 14ddff2c0

void __cdecl
UMoviePipelineImageSequenceOutput_JPG::StaticRegisterNativesUMoviePipelineImageSequenceOutput_JPG
          (void)

{
  return;
}

// UpdateTelemetry @ 14de02f10

void __thiscall
UMoviePipelineImageSequenceOutput_JPG::UpdateTelemetry
          (UMoviePipelineImageSequenceOutput_JPG *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesJPG = true;
  return;
}

