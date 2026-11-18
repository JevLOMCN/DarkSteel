// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e482a0

UClass * __cdecl USoftObjectProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SoftObjectProperty",
               &Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton,
               StaticRegisterNativesUSoftObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FSoftObjectProperty,L"Engine",InternalConstructor<USoftObjectProperty>,
               InternalVTableHelperCtorCaller<USoftObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton;
}

// USoftObjectProperty @ 141e57300

USoftObjectProperty * __thiscall
USoftObjectProperty::USoftObjectProperty(USoftObjectProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7USoftObjectProperty__6B_;
  return this;
}

// ~USoftObjectProperty @ 141e57cb0

void __thiscall USoftObjectProperty::~USoftObjectProperty(USoftObjectProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d4b0

UClass * __cdecl USoftObjectProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SoftObjectProperty",
               &Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton,
               StaticRegisterNativesUSoftObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FSoftObjectProperty,L"Engine",InternalConstructor<USoftObjectProperty>,
               InternalVTableHelperCtorCaller<USoftObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton;
}

// StaticRegisterNativesUSoftObjectProperty @ 141e608a0

void __cdecl USoftObjectProperty::StaticRegisterNativesUSoftObjectProperty(void)

{
  return;
}

