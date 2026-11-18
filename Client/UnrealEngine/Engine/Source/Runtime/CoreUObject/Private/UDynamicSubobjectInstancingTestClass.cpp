// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c5100

UClass * __cdecl UDynamicSubobjectInstancingTestClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicSubobjectInstancingTestClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DynamicSubobjectInstancingTestClass",
               &Z_Registration_Info_UClass_UDynamicSubobjectInstancingTestClass.InnerSingleton,
               StaticRegisterNativesUDynamicSubobjectInstancingTestClass,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicSubobjectInstancingTestClass>,
               InternalVTableHelperCtorCaller<UDynamicSubobjectInstancingTestClass>,local_res8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicSubobjectInstancingTestClass.InnerSingleton;
}

// UDynamicSubobjectInstancingTestClass @ 1422ce640

UDynamicSubobjectInstancingTestClass * __thiscall
UDynamicSubobjectInstancingTestClass::UDynamicSubobjectInstancingTestClass
          (UDynamicSubobjectInstancingTestClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  *(undefined ***)this = &___7UDynamicSubobjectInstancingTestClass__6B_;
  return this;
}

// UDynamicSubobjectInstancingTestClass @ 1422ce670

UDynamicSubobjectInstancingTestClass * __thiscall
UDynamicSubobjectInstancingTestClass::UDynamicSubobjectInstancingTestClass
          (UDynamicSubobjectInstancingTestClass *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UClass::UClass((UClass *)this,pFVar1);
  this->field_0x128 = 1;
  *(undefined ***)this = &___7UDynamicSubobjectInstancingTestClass__6B_;
  return this;
}

// ~UDynamicSubobjectInstancingTestClass @ 1422d13b0

void __thiscall
UDynamicSubobjectInstancingTestClass::~UDynamicSubobjectInstancingTestClass
          (UDynamicSubobjectInstancingTestClass *this)

{
  *(undefined ***)this = &___7UDynamicSubobjectInstancingTestClass__6B_;
  UClass::~UClass((UClass *)this);
  return;
}

// GetPrivateStaticClass @ 1422d2f50

UClass * __cdecl UDynamicSubobjectInstancingTestClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicSubobjectInstancingTestClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DynamicSubobjectInstancingTestClass",
               &Z_Registration_Info_UClass_UDynamicSubobjectInstancingTestClass.InnerSingleton,
               StaticRegisterNativesUDynamicSubobjectInstancingTestClass,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicSubobjectInstancingTestClass>,
               InternalVTableHelperCtorCaller<UDynamicSubobjectInstancingTestClass>,local_res8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicSubobjectInstancingTestClass.InnerSingleton;
}

// StaticRegisterNativesUDynamicSubobjectInstancingTestClass @ 1422e3d90

void __cdecl
UDynamicSubobjectInstancingTestClass::StaticRegisterNativesUDynamicSubobjectInstancingTestClass
          (void)

{
  return;
}

