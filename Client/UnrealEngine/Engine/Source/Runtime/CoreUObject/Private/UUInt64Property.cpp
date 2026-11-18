// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47ba0

UClass * __cdecl UUInt64Property::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt64Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt64Property",
               &Z_Registration_Info_UClass_UUInt64Property.InnerSingleton,
               StaticRegisterNativesUUInt64Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FUInt64Property
               ,L"Engine",InternalConstructor<UUInt64Property>,
               InternalVTableHelperCtorCaller<UUInt64Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt64Property.InnerSingleton;
}

// UUInt64Property @ 141e57440

UUInt64Property * __thiscall
UUInt64Property::UUInt64Property(UUInt64Property *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UUInt64Property__6B_;
  return this;
}

// ~UUInt64Property @ 141e57d70

void __thiscall UUInt64Property::~UUInt64Property(UUInt64Property *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d930

UClass * __cdecl UUInt64Property::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt64Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt64Property",
               &Z_Registration_Info_UClass_UUInt64Property.InnerSingleton,
               StaticRegisterNativesUUInt64Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FUInt64Property
               ,L"Engine",InternalConstructor<UUInt64Property>,
               InternalVTableHelperCtorCaller<UUInt64Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt64Property.InnerSingleton;
}

// StaticRegisterNativesUUInt64Property @ 141e60900

void __cdecl UUInt64Property::StaticRegisterNativesUUInt64Property(void)

{
  return;
}

