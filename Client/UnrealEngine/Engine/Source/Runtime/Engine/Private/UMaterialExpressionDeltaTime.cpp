// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472954e0

UClass * __cdecl UMaterialExpressionDeltaTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDeltaTime",
               &Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDeltaTime,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDeltaTime>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDeltaTime>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.InnerSingleton;
}

// UMaterialExpressionDeltaTime @ 14729cf60

UMaterialExpressionDeltaTime * __thiscall
UMaterialExpressionDeltaTime::UMaterialExpressionDeltaTime
          (UMaterialExpressionDeltaTime *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDeltaTime__6B_;
  return this;
}

// UMaterialExpressionDeltaTime @ 14729cf90

UMaterialExpressionDeltaTime * __thiscall
UMaterialExpressionDeltaTime::UMaterialExpressionDeltaTime
          (UMaterialExpressionDeltaTime *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionDeltaTime__6B_;
  return this;
}

// ~UMaterialExpressionDeltaTime @ 14729dc70

void __thiscall
UMaterialExpressionDeltaTime::~UMaterialExpressionDeltaTime(UMaterialExpressionDeltaTime *this)

{
  *(undefined ***)this = &___7UMaterialExpressionDeltaTime__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1250

UClass * __cdecl UMaterialExpressionDeltaTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDeltaTime",
               &Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDeltaTime,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDeltaTime>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDeltaTime>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDeltaTime @ 1472a1e70

void __cdecl UMaterialExpressionDeltaTime::StaticRegisterNativesUMaterialExpressionDeltaTime(void)

{
  return;
}

