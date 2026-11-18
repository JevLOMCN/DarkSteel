// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ee9d10

UClass * __cdecl UMaterialExpressionScalarBlueNoise::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionScalarBlueNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionScalarBlueNoise,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionScalarBlueNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionScalarBlueNoise>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton;
}

// UMaterialExpressionScalarBlueNoise @ 147ef1d10

UMaterialExpressionScalarBlueNoise * __thiscall
UMaterialExpressionScalarBlueNoise::UMaterialExpressionScalarBlueNoise
          (UMaterialExpressionScalarBlueNoise *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionScalarBlueNoise__6B_;
  return this;
}

// UMaterialExpressionScalarBlueNoise @ 147ef1d40

UMaterialExpressionScalarBlueNoise * __thiscall
UMaterialExpressionScalarBlueNoise::UMaterialExpressionScalarBlueNoise
          (UMaterialExpressionScalarBlueNoise *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  *(undefined ***)this = &___7UMaterialExpressionScalarBlueNoise__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Utility,L"MaterialExpressionNoise",L"Noise",L"Noise");
      atexit(`UMaterialExpressionScalarBlueNoise::UMaterialExpressionScalarBlueNoise'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionScalarBlueNoise @ 147ef2910

void __thiscall
UMaterialExpressionScalarBlueNoise::~UMaterialExpressionScalarBlueNoise
          (UMaterialExpressionScalarBlueNoise *this)

{
  *(undefined ***)this = &___7UMaterialExpressionScalarBlueNoise__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 147efdaa0

UClass * __cdecl UMaterialExpressionScalarBlueNoise::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionScalarBlueNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionScalarBlueNoise,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionScalarBlueNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionScalarBlueNoise>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionScalarBlueNoise.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionScalarBlueNoise @ 147f08580

void __cdecl
UMaterialExpressionScalarBlueNoise::StaticRegisterNativesUMaterialExpressionScalarBlueNoise(void)

{
  return;
}

