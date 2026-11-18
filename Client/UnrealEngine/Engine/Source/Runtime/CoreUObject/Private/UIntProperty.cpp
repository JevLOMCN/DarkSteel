// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e477e0

UClass * __cdecl UIntProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"IntProperty",
               &Z_Registration_Info_UClass_UIntProperty.InnerSingleton,
               StaticRegisterNativesUIntProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FIntProperty,
               L"Engine",InternalConstructor<UIntProperty>,
               InternalVTableHelperCtorCaller<UIntProperty>,local_res8,UNumericProperty::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntProperty.InnerSingleton;
}

// UIntProperty @ 141e56a70

UIntProperty * __thiscall UIntProperty::UIntProperty(UIntProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UIntProperty__6B_;
  return this;
}

// ~UIntProperty @ 141e578b0

void __thiscall UIntProperty::~UIntProperty(UIntProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5bfa0

UClass * __cdecl UIntProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"IntProperty",
               &Z_Registration_Info_UClass_UIntProperty.InnerSingleton,
               StaticRegisterNativesUIntProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FIntProperty,
               L"Engine",InternalConstructor<UIntProperty>,
               InternalVTableHelperCtorCaller<UIntProperty>,local_res8,UNumericProperty::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntProperty.InnerSingleton;
}

// StaticRegisterNativesUIntProperty @ 141e606d0

void __cdecl UIntProperty::StaticRegisterNativesUIntProperty(void)

{
  return;
}

