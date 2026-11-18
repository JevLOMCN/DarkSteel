// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e4f180

UClass * __cdecl UNumericProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNumericProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"NumericProperty",
               &Z_Registration_Info_UClass_UNumericProperty.InnerSingleton,
               StaticRegisterNativesUNumericProperty,0x70,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_FNumericProperty,L"Engine",InternalConstructor<UNumericProperty>,
               InternalVTableHelperCtorCaller<UNumericProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNumericProperty.InnerSingleton;
}

// UNumericProperty @ 141e56d30

UNumericProperty * __thiscall
UNumericProperty::UNumericProperty(UNumericProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UNumericProperty__6B_;
  return this;
}

// ~UNumericProperty @ 141e57a10

void __thiscall UNumericProperty::~UNumericProperty(UNumericProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c7d0

UClass * __cdecl UNumericProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNumericProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"NumericProperty",
               &Z_Registration_Info_UClass_UNumericProperty.InnerSingleton,
               StaticRegisterNativesUNumericProperty,0x70,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_FNumericProperty,L"Engine",InternalConstructor<UNumericProperty>,
               InternalVTableHelperCtorCaller<UNumericProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNumericProperty.InnerSingleton;
}

// StaticRegisterNativesUNumericProperty @ 141e60780

void __cdecl UNumericProperty::StaticRegisterNativesUNumericProperty(void)

{
  return;
}

