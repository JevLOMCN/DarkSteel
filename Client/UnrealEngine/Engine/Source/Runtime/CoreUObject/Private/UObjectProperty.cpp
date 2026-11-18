// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47fe0

UClass * __cdecl UObjectProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectProperty",
               &Z_Registration_Info_UClass_UObjectProperty.InnerSingleton,
               StaticRegisterNativesUObjectProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FObjectProperty
               ,L"Engine",InternalConstructor<UObjectProperty>,
               InternalVTableHelperCtorCaller<UObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectProperty.InnerSingleton;
}

// UObjectProperty @ 141e56d60

UObjectProperty * __thiscall
UObjectProperty::UObjectProperty(UObjectProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7UObjectProperty__6B_;
  return this;
}

// ~UObjectProperty @ 141e57a50

void __thiscall UObjectProperty::~UObjectProperty(UObjectProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c940

UClass * __cdecl UObjectProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectProperty",
               &Z_Registration_Info_UClass_UObjectProperty.InnerSingleton,
               StaticRegisterNativesUObjectProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FObjectProperty
               ,L"Engine",InternalConstructor<UObjectProperty>,
               InternalVTableHelperCtorCaller<UObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectProperty.InnerSingleton;
}

// StaticRegisterNativesUObjectProperty @ 141e607a0

void __cdecl UObjectProperty::StaticRegisterNativesUObjectProperty(void)

{
  return;
}

