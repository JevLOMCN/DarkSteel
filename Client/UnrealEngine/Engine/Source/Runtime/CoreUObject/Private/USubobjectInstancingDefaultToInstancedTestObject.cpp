// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c5270

UClass * __cdecl USubobjectInstancingDefaultToInstancedTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingDefaultToInstancedTestObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingDefaultToInstancedTestObject",
               &Z_Registration_Info_UClass_USubobjectInstancingDefaultToInstancedTestObject.
                InnerSingleton,StaticRegisterNativesUSubobjectInstancingDefaultToInstancedTestObject
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingDefaultToInstancedTestObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingDefaultToInstancedTestObject>,
               local_res8,USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingDefaultToInstancedTestObject.InnerSingleton;
}

// USubobjectInstancingDefaultToInstancedTestObject @ 1422ce6b0

USubobjectInstancingDefaultToInstancedTestObject * __thiscall
USubobjectInstancingDefaultToInstancedTestObject::USubobjectInstancingDefaultToInstancedTestObject
          (USubobjectInstancingDefaultToInstancedTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 100;
  *(undefined ***)this = &___7USubobjectInstancingDefaultToInstancedTestObject__6B_;
  return this;
}

// USubobjectInstancingDefaultToInstancedTestObject @ 1422ce6e0

USubobjectInstancingDefaultToInstancedTestObject * __thiscall
USubobjectInstancingDefaultToInstancedTestObject::USubobjectInstancingDefaultToInstancedTestObject
          (USubobjectInstancingDefaultToInstancedTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 100;
  *(undefined ***)this = &___7USubobjectInstancingDefaultToInstancedTestObject__6B_;
  return this;
}

// ~USubobjectInstancingDefaultToInstancedTestObject @ 1422d13d0

void __thiscall
USubobjectInstancingDefaultToInstancedTestObject::~USubobjectInstancingDefaultToInstancedTestObject
          (USubobjectInstancingDefaultToInstancedTestObject *this)

{
  *(undefined ***)this = &___7USubobjectInstancingTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d3010

UClass * __cdecl USubobjectInstancingDefaultToInstancedTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingDefaultToInstancedTestObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingDefaultToInstancedTestObject",
               &Z_Registration_Info_UClass_USubobjectInstancingDefaultToInstancedTestObject.
                InnerSingleton,StaticRegisterNativesUSubobjectInstancingDefaultToInstancedTestObject
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingDefaultToInstancedTestObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingDefaultToInstancedTestObject>,
               local_res8,USubobjectInstancingTestObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingDefaultToInstancedTestObject.InnerSingleton;
}

// StaticRegisterNativesUSubobjectInstancingDefaultToInstancedTestObject @ 1422e3da0

void __cdecl
USubobjectInstancingDefaultToInstancedTestObject::
StaticRegisterNativesUSubobjectInstancingDefaultToInstancedTestObject(void)

{
  return;
}

