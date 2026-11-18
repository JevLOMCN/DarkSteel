// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e49930

UClass * __cdecl UTextProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TextProperty",
               &Z_Registration_Info_UClass_UTextProperty.InnerSingleton,
               StaticRegisterNativesUTextProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FTextProperty,
               L"Engine",InternalConstructor<UTextProperty>,
               InternalVTableHelperCtorCaller<UTextProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextProperty.InnerSingleton;
}

// UTextProperty @ 141e573b0

UTextProperty * __thiscall UTextProperty::UTextProperty(UTextProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UTextProperty__6B_;
  return this;
}

// ~UTextProperty @ 141e57d10

void __thiscall UTextProperty::~UTextProperty(UTextProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d6f0

UClass * __cdecl UTextProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TextProperty",
               &Z_Registration_Info_UClass_UTextProperty.InnerSingleton,
               StaticRegisterNativesUTextProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FTextProperty,
               L"Engine",InternalConstructor<UTextProperty>,
               InternalVTableHelperCtorCaller<UTextProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextProperty.InnerSingleton;
}

// StaticRegisterNativesUTextProperty @ 141e608d0

void __cdecl UTextProperty::StaticRegisterNativesUTextProperty(void)

{
  return;
}

