// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 6

// StaticClass @ 14ddbaf70

UClass * __cdecl UMoviePipelineImageSequenceOutput_BMP::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_BMP.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_BMP",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_BMP.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_BMP,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_BMP>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_BMP>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_BMP.InnerSingleton;
}

// UMoviePipelineImageSequenceOutput_BMP @ 14ddc8840

UMoviePipelineImageSequenceOutput_BMP * __thiscall
UMoviePipelineImageSequenceOutput_BMP::UMoviePipelineImageSequenceOutput_BMP
          (UMoviePipelineImageSequenceOutput_BMP *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined ***)this = &___7UMoviePipelineImageSequenceOutput_BMP__6B_;
  return this;
}

// ~UMoviePipelineImageSequenceOutput_BMP @ 14ddcbdb0

void __thiscall
UMoviePipelineImageSequenceOutput_BMP::~UMoviePipelineImageSequenceOutput_BMP
          (UMoviePipelineImageSequenceOutput_BMP *this)

{
  *(undefined ***)this = &___7UMoviePipelineImageSequenceOutputBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x60);
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dde41a0

UClass * __cdecl UMoviePipelineImageSequenceOutput_BMP::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_BMP.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_BMP",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_BMP.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_BMP,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_BMP>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_BMP>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_BMP.InnerSingleton;
}

// StaticRegisterNativesUMoviePipelineImageSequenceOutput_BMP @ 14ddff2a0

void __cdecl
UMoviePipelineImageSequenceOutput_BMP::StaticRegisterNativesUMoviePipelineImageSequenceOutput_BMP
          (void)

{
  return;
}

// UpdateTelemetry @ 14de02ee0

void __thiscall
UMoviePipelineImageSequenceOutput_BMP::UpdateTelemetry
          (UMoviePipelineImageSequenceOutput_BMP *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesBMP = true;
  return;
}

