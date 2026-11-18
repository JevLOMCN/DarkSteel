// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47d20

UClass * __cdecl UDoubleProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DoubleProperty",
               &Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton,
               StaticRegisterNativesUDoubleProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FDoubleProperty
               ,L"Engine",InternalConstructor<UDoubleProperty>,
               InternalVTableHelperCtorCaller<UDoubleProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton;
}

// UDoubleProperty @ 141e568e0

UDoubleProperty * __thiscall
UDoubleProperty::UDoubleProperty(UDoubleProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UDoubleProperty__6B_;
  return this;
}

// ~UDoubleProperty @ 141e577d0

void __thiscall UDoubleProperty::~UDoubleProperty(UDoubleProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5b9c0

UClass * __cdecl UDoubleProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DoubleProperty",
               &Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton,
               StaticRegisterNativesUDoubleProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FDoubleProperty
               ,L"Engine",InternalConstructor<UDoubleProperty>,
               InternalVTableHelperCtorCaller<UDoubleProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton;
}

// StaticRegisterNativesUDoubleProperty @ 141e60650

void __cdecl UDoubleProperty::StaticRegisterNativesUDoubleProperty(void)

{
  return;
}

