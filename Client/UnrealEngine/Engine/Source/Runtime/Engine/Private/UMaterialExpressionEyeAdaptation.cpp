// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5690

UClass * __cdecl UMaterialExpressionEyeAdaptation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionEyeAdaptation",
               &Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionEyeAdaptation,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionEyeAdaptation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionEyeAdaptation>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.InnerSingleton;
}

// UMaterialExpressionEyeAdaptation @ 1472ace50

UMaterialExpressionEyeAdaptation * __thiscall
UMaterialExpressionEyeAdaptation::UMaterialExpressionEyeAdaptation
          (UMaterialExpressionEyeAdaptation *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionEyeAdaptation__6B_;
  return this;
}

// ~UMaterialExpressionEyeAdaptation @ 1472af6b0

void __thiscall
UMaterialExpressionEyeAdaptation::~UMaterialExpressionEyeAdaptation
          (UMaterialExpressionEyeAdaptation *this)

{
  *(undefined ***)this = &___7UMaterialExpressionExternalCodeBase__6B_;
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b21e0

UClass * __cdecl UMaterialExpressionEyeAdaptation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionEyeAdaptation",
               &Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionEyeAdaptation,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionEyeAdaptation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionEyeAdaptation>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionEyeAdaptation @ 1472b4510

void __cdecl
UMaterialExpressionEyeAdaptation::StaticRegisterNativesUMaterialExpressionEyeAdaptation(void)

{
  return;
}

// UMaterialExpressionEyeAdaptation @ 148afc220

UMaterialExpressionEyeAdaptation * __thiscall
UMaterialExpressionEyeAdaptation::UMaterialExpressionEyeAdaptation
          (UMaterialExpressionEyeAdaptation *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionEyeAdaptation__6B_;
  return this;
}

