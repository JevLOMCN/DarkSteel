// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a5590

UClass * __cdecl UMaterialExpressionLightVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLightVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLightVector",
               &Z_Registration_Info_UClass_UMaterialExpressionLightVector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLightVector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLightVector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLightVector>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLightVector.InnerSingleton;
}

// UMaterialExpressionLightVector @ 1472ae100

UMaterialExpressionLightVector * __thiscall
UMaterialExpressionLightVector::UMaterialExpressionLightVector
          (UMaterialExpressionLightVector *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionLightVector__6B_;
  return this;
}

// UMaterialExpressionLightVector @ 1472ae140

UMaterialExpressionLightVector * __thiscall
UMaterialExpressionLightVector::UMaterialExpressionLightVector
          (UMaterialExpressionLightVector *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionLightVector__6B_;
  return this;
}

// ~UMaterialExpressionLightVector @ 1472afaf0

void __thiscall
UMaterialExpressionLightVector::~UMaterialExpressionLightVector
          (UMaterialExpressionLightVector *this)

{
  *(undefined ***)this = &___7UMaterialExpressionExternalCodeBase__6B_;
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3560

UClass * __cdecl UMaterialExpressionLightVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLightVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLightVector",
               &Z_Registration_Info_UClass_UMaterialExpressionLightVector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLightVector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLightVector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLightVector>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLightVector.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLightVector @ 1472b46b0

void __cdecl
UMaterialExpressionLightVector::StaticRegisterNativesUMaterialExpressionLightVector(void)

{
  return;
}

