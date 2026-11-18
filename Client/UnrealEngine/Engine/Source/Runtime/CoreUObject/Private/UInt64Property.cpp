// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e478a0

UClass * __cdecl UInt64Property::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt64Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int64Property",
               &Z_Registration_Info_UClass_UInt64Property.InnerSingleton,
               StaticRegisterNativesUInt64Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FInt64Property,
               L"Engine",InternalConstructor<UInt64Property>,
               InternalVTableHelperCtorCaller<UInt64Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt64Property.InnerSingleton;
}

// UInt64Property @ 141e56a10

UInt64Property * __thiscall
UInt64Property::UInt64Property(UInt64Property *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UInt64Property__6B_;
  return this;
}

// ~UInt64Property @ 141e57870

void __thiscall UInt64Property::~UInt64Property(UInt64Property *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5be20

UClass * __cdecl UInt64Property::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt64Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int64Property",
               &Z_Registration_Info_UClass_UInt64Property.InnerSingleton,
               StaticRegisterNativesUInt64Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FInt64Property,
               L"Engine",InternalConstructor<UInt64Property>,
               InternalVTableHelperCtorCaller<UInt64Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt64Property.InnerSingleton;
}

// StaticRegisterNativesUInt64Property @ 141e606b0

void __cdecl UInt64Property::StaticRegisterNativesUInt64Property(void)

{
  return;
}

