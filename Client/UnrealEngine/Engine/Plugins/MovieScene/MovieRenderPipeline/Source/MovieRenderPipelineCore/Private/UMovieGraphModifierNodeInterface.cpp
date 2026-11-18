// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dcf7c80

UClass * __cdecl UMovieGraphModifierNodeInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphModifierNodeInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphModifierNodeInterface",
               &Z_Registration_Info_UClass_UMovieGraphModifierNodeInterface.InnerSingleton,
               StaticRegisterNativesUMovieGraphModifierNodeInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphModifierNodeInterface>,
               InternalVTableHelperCtorCaller<UMovieGraphModifierNodeInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierNodeInterface.InnerSingleton;
}

// UMovieGraphModifierNodeInterface @ 14dd0aec0

UMovieGraphModifierNodeInterface * __thiscall
UMovieGraphModifierNodeInterface::UMovieGraphModifierNodeInterface
          (UMovieGraphModifierNodeInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphModifierNodeInterface__6B_;
  return this;
}

// UMovieGraphModifierNodeInterface @ 14dd0aef0

UMovieGraphModifierNodeInterface * __thiscall
UMovieGraphModifierNodeInterface::UMovieGraphModifierNodeInterface
          (UMovieGraphModifierNodeInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphModifierNodeInterface__6B_;
  return this;
}

// ~UMovieGraphModifierNodeInterface @ 14dd0dcc0

void __thiscall
UMovieGraphModifierNodeInterface::~UMovieGraphModifierNodeInterface
          (UMovieGraphModifierNodeInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dd2cc70

UClass * __cdecl UMovieGraphModifierNodeInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphModifierNodeInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphModifierNodeInterface",
               &Z_Registration_Info_UClass_UMovieGraphModifierNodeInterface.InnerSingleton,
               StaticRegisterNativesUMovieGraphModifierNodeInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphModifierNodeInterface>,
               InternalVTableHelperCtorCaller<UMovieGraphModifierNodeInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphModifierNodeInterface.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphModifierNodeInterface @ 14dd452b0

void __cdecl
UMovieGraphModifierNodeInterface::StaticRegisterNativesUMovieGraphModifierNodeInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphModifierNodeInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

