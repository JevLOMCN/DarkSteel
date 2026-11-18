// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e48b10

UClass * __cdecl UStrProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStrProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StrProperty",
               &Z_Registration_Info_UClass_UStrProperty.InnerSingleton,
               StaticRegisterNativesUStrProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FStrProperty,
               L"Engine",InternalConstructor<UStrProperty>,
               InternalVTableHelperCtorCaller<UStrProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStrProperty.InnerSingleton;
}

// UStrProperty @ 141e57340

UStrProperty * __thiscall UStrProperty::UStrProperty(UStrProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7UStrProperty__6B_;
  return this;
}

// ~UStrProperty @ 141e57cd0

void __thiscall UStrProperty::~UStrProperty(UStrProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d570

UClass * __cdecl UStrProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStrProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StrProperty",
               &Z_Registration_Info_UClass_UStrProperty.InnerSingleton,
               StaticRegisterNativesUStrProperty,0x70,8,CLASS_Intrinsic,CASTCLASS_FStrProperty,
               L"Engine",InternalConstructor<UStrProperty>,
               InternalVTableHelperCtorCaller<UStrProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStrProperty.InnerSingleton;
}

// StaticRegisterNativesUStrProperty @ 141e608b0

void __cdecl UStrProperty::StaticRegisterNativesUStrProperty(void)

{
  return;
}

