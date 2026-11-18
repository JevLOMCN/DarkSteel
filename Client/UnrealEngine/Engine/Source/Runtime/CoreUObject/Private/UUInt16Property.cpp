// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47a20

UClass * __cdecl UUInt16Property::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt16Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt16Property",
               &Z_Registration_Info_UClass_UUInt16Property.InnerSingleton,
               StaticRegisterNativesUUInt16Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FUInt16Property
               ,L"Engine",InternalConstructor<UUInt16Property>,
               InternalVTableHelperCtorCaller<UUInt16Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt16Property.InnerSingleton;
}

// UUInt16Property @ 141e573e0

UUInt16Property * __thiscall
UUInt16Property::UUInt16Property(UUInt16Property *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UUInt16Property__6B_;
  return this;
}

// ~UUInt16Property @ 141e57d30

void __thiscall UUInt16Property::~UUInt16Property(UUInt16Property *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d7b0

UClass * __cdecl UUInt16Property::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt16Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt16Property",
               &Z_Registration_Info_UClass_UUInt16Property.InnerSingleton,
               StaticRegisterNativesUUInt16Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FUInt16Property
               ,L"Engine",InternalConstructor<UUInt16Property>,
               InternalVTableHelperCtorCaller<UUInt16Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt16Property.InnerSingleton;
}

// StaticRegisterNativesUUInt16Property @ 141e608e0

void __cdecl UUInt16Property::StaticRegisterNativesUUInt16Property(void)

{
  return;
}

