// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dc97f00

UClass * __cdecl UMovieGraphEvaluationNodeInjector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEvaluationNodeInjector",
               &Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton,
               StaticRegisterNativesUMovieGraphEvaluationNodeInjector,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphEvaluationNodeInjector>,
               InternalVTableHelperCtorCaller<UMovieGraphEvaluationNodeInjector>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton;
}

// UMovieGraphEvaluationNodeInjector @ 14dcafec0

UMovieGraphEvaluationNodeInjector * __thiscall
UMovieGraphEvaluationNodeInjector::UMovieGraphEvaluationNodeInjector
          (UMovieGraphEvaluationNodeInjector *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphEvaluationNodeInjector__6B_;
  return this;
}

// UMovieGraphEvaluationNodeInjector @ 14dcafef0

UMovieGraphEvaluationNodeInjector * __thiscall
UMovieGraphEvaluationNodeInjector::UMovieGraphEvaluationNodeInjector
          (UMovieGraphEvaluationNodeInjector *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphEvaluationNodeInjector__6B_;
  return this;
}

// ~UMovieGraphEvaluationNodeInjector @ 14dcb2e00

void __thiscall
UMovieGraphEvaluationNodeInjector::~UMovieGraphEvaluationNodeInjector
          (UMovieGraphEvaluationNodeInjector *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dcd2760

UClass * __cdecl UMovieGraphEvaluationNodeInjector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEvaluationNodeInjector",
               &Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton,
               StaticRegisterNativesUMovieGraphEvaluationNodeInjector,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphEvaluationNodeInjector>,
               InternalVTableHelperCtorCaller<UMovieGraphEvaluationNodeInjector>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEvaluationNodeInjector.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphEvaluationNodeInjector @ 14dce6530

void __cdecl
UMovieGraphEvaluationNodeInjector::StaticRegisterNativesUMovieGraphEvaluationNodeInjector(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphEvaluationNodeInjector_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

