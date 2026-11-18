// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c4bd0

UClass * __cdecl USubobjectInstancingTestDerivedObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDerivedObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestDerivedObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDerivedObject.InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestDerivedObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubobjectInstancingTestDerivedObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDerivedObject>,local_res8,
               USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDerivedObject.InnerSingleton;
}

// USubobjectInstancingTestDerivedObject @ 1422ce710

USubobjectInstancingTestDerivedObject * __thiscall
USubobjectInstancingTestDerivedObject::USubobjectInstancingTestDerivedObject
          (USubobjectInstancingTestDerivedObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 100;
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedObject__6B_;
  return this;
}

// USubobjectInstancingTestDerivedObject @ 1422ce740

USubobjectInstancingTestDerivedObject * __thiscall
USubobjectInstancingTestDerivedObject::USubobjectInstancingTestDerivedObject
          (USubobjectInstancingTestDerivedObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 100;
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedObject__6B_;
  return this;
}

// ~USubobjectInstancingTestDerivedObject @ 1422d13f0

void __thiscall
USubobjectInstancingTestDerivedObject::~USubobjectInstancingTestDerivedObject
          (USubobjectInstancingTestDerivedObject *this)

{
  *(undefined ***)this = &___7USubobjectInstancingTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d30d0

UClass * __cdecl USubobjectInstancingTestDerivedObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDerivedObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestDerivedObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDerivedObject.InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestDerivedObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubobjectInstancingTestDerivedObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDerivedObject>,local_res8,
               USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDerivedObject.InnerSingleton;
}

// StaticRegisterNativesUSubobjectInstancingTestDerivedObject @ 1422e3db0

void __cdecl
USubobjectInstancingTestDerivedObject::StaticRegisterNativesUSubobjectInstancingTestDerivedObject
          (void)

{
  return;
}

