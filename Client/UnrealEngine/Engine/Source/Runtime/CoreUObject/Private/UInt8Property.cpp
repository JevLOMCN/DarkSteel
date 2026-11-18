// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47660

UClass * __cdecl UInt8Property::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt8Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int8Property",
               &Z_Registration_Info_UClass_UInt8Property.InnerSingleton,
               StaticRegisterNativesUInt8Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FInt8Property,
               L"Engine",InternalConstructor<UInt8Property>,
               InternalVTableHelperCtorCaller<UInt8Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt8Property.InnerSingleton;
}

// UInt8Property @ 141e56a40

UInt8Property * __thiscall UInt8Property::UInt8Property(UInt8Property *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UInt8Property__6B_;
  return this;
}

// ~UInt8Property @ 141e57890

void __thiscall UInt8Property::~UInt8Property(UInt8Property *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5bee0

UClass * __cdecl UInt8Property::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt8Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int8Property",
               &Z_Registration_Info_UClass_UInt8Property.InnerSingleton,
               StaticRegisterNativesUInt8Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FInt8Property,
               L"Engine",InternalConstructor<UInt8Property>,
               InternalVTableHelperCtorCaller<UInt8Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt8Property.InnerSingleton;
}

// StaticRegisterNativesUInt8Property @ 141e606c0

void __cdecl UInt8Property::StaticRegisterNativesUInt8Property(void)

{
  return;
}

