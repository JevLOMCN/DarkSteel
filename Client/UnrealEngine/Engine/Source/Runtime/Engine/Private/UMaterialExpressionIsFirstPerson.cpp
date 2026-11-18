// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a47d0

UClass * __cdecl UMaterialExpressionIsFirstPerson::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIsFirstPerson.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIsFirstPerson",
               &Z_Registration_Info_UClass_UMaterialExpressionIsFirstPerson.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIsFirstPerson,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIsFirstPerson>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIsFirstPerson>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIsFirstPerson.InnerSingleton;
}

// UMaterialExpressionIsFirstPerson @ 1472adf60

UMaterialExpressionIsFirstPerson * __thiscall
UMaterialExpressionIsFirstPerson::UMaterialExpressionIsFirstPerson
          (UMaterialExpressionIsFirstPerson *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionIsFirstPerson__6B_;
  return this;
}

// UMaterialExpressionIsFirstPerson @ 1472adfa0

UMaterialExpressionIsFirstPerson * __thiscall
UMaterialExpressionIsFirstPerson::UMaterialExpressionIsFirstPerson
          (UMaterialExpressionIsFirstPerson *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined ***)this = &___7UMaterialExpressionIsFirstPerson__6B_;
  return this;
}

// ~UMaterialExpressionIsFirstPerson @ 1472afa50

void __thiscall
UMaterialExpressionIsFirstPerson::~UMaterialExpressionIsFirstPerson
          (UMaterialExpressionIsFirstPerson *this)

{
  *(undefined ***)this = &___7UMaterialExpressionExternalCodeBase__6B_;
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3320

UClass * __cdecl UMaterialExpressionIsFirstPerson::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionIsFirstPerson.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionIsFirstPerson",
               &Z_Registration_Info_UClass_UMaterialExpressionIsFirstPerson.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionIsFirstPerson,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionIsFirstPerson>,
               InternalVTableHelperCtorCaller<UMaterialExpressionIsFirstPerson>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionIsFirstPerson.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionIsFirstPerson @ 1472b4680

void __cdecl
UMaterialExpressionIsFirstPerson::StaticRegisterNativesUMaterialExpressionIsFirstPerson(void)

{
  return;
}

