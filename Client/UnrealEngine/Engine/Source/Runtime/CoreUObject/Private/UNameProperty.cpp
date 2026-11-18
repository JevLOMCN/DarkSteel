// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e48a10

UClass * __cdecl UNameProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNameProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"NameProperty",
               &Z_Registration_Info_UClass_UNameProperty.InnerSingleton,
               StaticRegisterNativesUNameProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FNameProperty,
               L"Engine",InternalConstructor<UNameProperty>,
               InternalVTableHelperCtorCaller<UNameProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNameProperty.InnerSingleton;
}

// UNameProperty @ 141e56d00

UNameProperty * __thiscall UNameProperty::UNameProperty(UNameProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UNameProperty__6B_;
  return this;
}

// ~UNameProperty @ 141e579f0

void __thiscall UNameProperty::~UNameProperty(UNameProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c710

UClass * __cdecl UNameProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNameProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"NameProperty",
               &Z_Registration_Info_UClass_UNameProperty.InnerSingleton,
               StaticRegisterNativesUNameProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FNameProperty,
               L"Engine",InternalConstructor<UNameProperty>,
               InternalVTableHelperCtorCaller<UNameProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNameProperty.InnerSingleton;
}

// StaticRegisterNativesUNameProperty @ 141e60770

void __cdecl UNameProperty::StaticRegisterNativesUNameProperty(void)

{
  return;
}

