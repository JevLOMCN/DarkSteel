// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e47c60

UClass * __cdecl UFloatProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"FloatProperty",
               &Z_Registration_Info_UClass_UFloatProperty.InnerSingleton,
               StaticRegisterNativesUFloatProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FFloatProperty,
               L"Engine",InternalConstructor<UFloatProperty>,
               InternalVTableHelperCtorCaller<UFloatProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatProperty.InnerSingleton;
}

// UFloatProperty @ 141e56950

UFloatProperty * __thiscall
UFloatProperty::UFloatProperty(UFloatProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UFloatProperty__6B_;
  return this;
}

// ~UFloatProperty @ 141e57810

void __thiscall UFloatProperty::~UFloatProperty(UFloatProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5bb40

UClass * __cdecl UFloatProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"FloatProperty",
               &Z_Registration_Info_UClass_UFloatProperty.InnerSingleton,
               StaticRegisterNativesUFloatProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FFloatProperty,
               L"Engine",InternalConstructor<UFloatProperty>,
               InternalVTableHelperCtorCaller<UFloatProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatProperty.InnerSingleton;
}

// StaticRegisterNativesUFloatProperty @ 141e60670

void __cdecl UFloatProperty::StaticRegisterNativesUFloatProperty(void)

{
  return;
}

