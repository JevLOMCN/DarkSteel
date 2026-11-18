// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47ae0

UClass * __cdecl UUInt32Property::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt32Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt32Property",
               &Z_Registration_Info_UClass_UUInt32Property.InnerSingleton,
               StaticRegisterNativesUUInt32Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FUInt32Property
               ,L"Engine",InternalConstructor<UUInt32Property>,
               InternalVTableHelperCtorCaller<UUInt32Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt32Property.InnerSingleton;
}

// UUInt32Property @ 141e57410

UUInt32Property * __thiscall
UUInt32Property::UUInt32Property(UUInt32Property *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UUInt32Property__6B_;
  return this;
}

// ~UUInt32Property @ 141e57d50

void __thiscall UUInt32Property::~UUInt32Property(UUInt32Property *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d870

UClass * __cdecl UUInt32Property::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt32Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt32Property",
               &Z_Registration_Info_UClass_UUInt32Property.InnerSingleton,
               StaticRegisterNativesUUInt32Property,0x70,8,CLASS_Intrinsic,CASTCLASS_FUInt32Property
               ,L"Engine",InternalConstructor<UUInt32Property>,
               InternalVTableHelperCtorCaller<UUInt32Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt32Property.InnerSingleton;
}

// StaticRegisterNativesUUInt32Property @ 141e608f0

void __cdecl UUInt32Property::StaticRegisterNativesUUInt32Property(void)

{
  return;
}

