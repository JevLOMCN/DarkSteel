// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c4b20

UClass * __cdecl USubobjectInstancingTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestObject.InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubobjectInstancingTestObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestObject.InnerSingleton;
}

// USubobjectInstancingTestObject @ 1422cead0

USubobjectInstancingTestObject * __thiscall
USubobjectInstancingTestObject::USubobjectInstancingTestObject
          (USubobjectInstancingTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TestValue = 100;
  this->_padding_ = (longlong)&___7USubobjectInstancingTestObject__6B_;
  return this;
}

// USubobjectInstancingTestObject @ 1422ceb00

USubobjectInstancingTestObject * __thiscall
USubobjectInstancingTestObject::USubobjectInstancingTestObject
          (USubobjectInstancingTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TestValue = 100;
  this->_padding_ = (longlong)&___7USubobjectInstancingTestObject__6B_;
  return this;
}

// ~USubobjectInstancingTestObject @ 1422d1490

void __thiscall
USubobjectInstancingTestObject::~USubobjectInstancingTestObject
          (USubobjectInstancingTestObject *this)

{
  this->_padding_ = (longlong)&___7USubobjectInstancingTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d3490

UClass * __cdecl USubobjectInstancingTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestObject.InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubobjectInstancingTestObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestObject.InnerSingleton;
}

// StaticRegisterNativesUSubobjectInstancingTestObject @ 1422e3e00

void __cdecl
USubobjectInstancingTestObject::StaticRegisterNativesUSubobjectInstancingTestObject(void)

{
  return;
}

