// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bb570

UClass * __cdecl UMaterialExpressionParticleRelativeTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleRelativeTime",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleRelativeTime,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleRelativeTime>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleRelativeTime>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.InnerSingleton;
}

// UMaterialExpressionParticleRelativeTime @ 1472c0b40

UMaterialExpressionParticleRelativeTime * __thiscall
UMaterialExpressionParticleRelativeTime::UMaterialExpressionParticleRelativeTime
          (UMaterialExpressionParticleRelativeTime *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleRelativeTime__6B_;
  return this;
}

// UMaterialExpressionParticleRelativeTime @ 1472c0b70

UMaterialExpressionParticleRelativeTime * __thiscall
UMaterialExpressionParticleRelativeTime::UMaterialExpressionParticleRelativeTime
          (UMaterialExpressionParticleRelativeTime *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionParticleRelativeTime__6B_;
  return this;
}

// ~UMaterialExpressionParticleRelativeTime @ 1472c2370

void __thiscall
UMaterialExpressionParticleRelativeTime::~UMaterialExpressionParticleRelativeTime
          (UMaterialExpressionParticleRelativeTime *this)

{
  *(undefined ***)this = &___7UMaterialExpressionParticleRelativeTime__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c59b0

UClass * __cdecl UMaterialExpressionParticleRelativeTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleRelativeTime",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleRelativeTime,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleRelativeTime>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleRelativeTime>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleRelativeTime @ 1472c75f0

void __cdecl
UMaterialExpressionParticleRelativeTime::
StaticRegisterNativesUMaterialExpressionParticleRelativeTime(void)

{
  return;
}

