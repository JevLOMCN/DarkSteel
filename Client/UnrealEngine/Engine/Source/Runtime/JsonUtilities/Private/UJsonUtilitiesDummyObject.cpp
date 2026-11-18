// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 6

// StaticClass @ 14461c2f0

UClass * __cdecl UJsonUtilitiesDummyObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/JsonUtilities",L"JsonUtilitiesDummyObject",
               &Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton,
               StaticRegisterNativesUJsonUtilitiesDummyObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UJsonUtilitiesDummyObject>,
               InternalVTableHelperCtorCaller<UJsonUtilitiesDummyObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton;
}

// UJsonUtilitiesDummyObject @ 144625720

UJsonUtilitiesDummyObject * __thiscall
UJsonUtilitiesDummyObject::UJsonUtilitiesDummyObject
          (UJsonUtilitiesDummyObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UJsonUtilitiesDummyObject__6B_;
  return this;
}

// UJsonUtilitiesDummyObject @ 144625750

UJsonUtilitiesDummyObject * __thiscall
UJsonUtilitiesDummyObject::UJsonUtilitiesDummyObject
          (UJsonUtilitiesDummyObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UJsonUtilitiesDummyObject__6B_;
  return this;
}

// ~UJsonUtilitiesDummyObject @ 1446258c0

void __thiscall
UJsonUtilitiesDummyObject::~UJsonUtilitiesDummyObject(UJsonUtilitiesDummyObject *this)

{
  *(undefined ***)this = &___7UJsonUtilitiesDummyObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14462d4e0

UClass * __cdecl UJsonUtilitiesDummyObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/JsonUtilities",L"JsonUtilitiesDummyObject",
               &Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton,
               StaticRegisterNativesUJsonUtilitiesDummyObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UJsonUtilitiesDummyObject>,
               InternalVTableHelperCtorCaller<UJsonUtilitiesDummyObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.InnerSingleton;
}

// StaticRegisterNativesUJsonUtilitiesDummyObject @ 14462f7b0

void __cdecl UJsonUtilitiesDummyObject::StaticRegisterNativesUJsonUtilitiesDummyObject(void)

{
  return;
}

