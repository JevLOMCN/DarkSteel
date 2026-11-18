// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47720

UClass * __cdecl UInt16Property::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt16Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int16Property",
               &Z_Registration_Info_UClass_UInt16Property.InnerSingleton,
               StaticRegisterNativesUInt16Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FInt16Property,
               L"Engine",InternalConstructor<UInt16Property>,
               InternalVTableHelperCtorCaller<UInt16Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt16Property.InnerSingleton;
}

// UInt16Property @ 141e569e0

UInt16Property * __thiscall
UInt16Property::UInt16Property(UInt16Property *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UInt16Property__6B_;
  return this;
}

// ~UInt16Property @ 141e57850

void __thiscall UInt16Property::~UInt16Property(UInt16Property *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5bd60

UClass * __cdecl UInt16Property::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt16Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int16Property",
               &Z_Registration_Info_UClass_UInt16Property.InnerSingleton,
               StaticRegisterNativesUInt16Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FInt16Property,
               L"Engine",InternalConstructor<UInt16Property>,
               InternalVTableHelperCtorCaller<UInt16Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt16Property.InnerSingleton;
}

// StaticRegisterNativesUInt16Property @ 141e606a0

void __cdecl UInt16Property::StaticRegisterNativesUInt16Property(void)

{
  return;
}

