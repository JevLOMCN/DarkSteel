// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e480a0

UClass * __cdecl UWeakObjectProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"WeakObjectProperty",
               &Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton,
               StaticRegisterNativesUWeakObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FWeakObjectProperty,L"Engine",InternalConstructor<UWeakObjectProperty>,
               InternalVTableHelperCtorCaller<UWeakObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton;
}

// UWeakObjectProperty @ 141e57470

UWeakObjectProperty * __thiscall
UWeakObjectProperty::UWeakObjectProperty(UWeakObjectProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7UWeakObjectProperty__6B_;
  return this;
}

// ~UWeakObjectProperty @ 141e57d90

void __thiscall UWeakObjectProperty::~UWeakObjectProperty(UWeakObjectProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d9f0

UClass * __cdecl UWeakObjectProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"WeakObjectProperty",
               &Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton,
               StaticRegisterNativesUWeakObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FWeakObjectProperty,L"Engine",InternalConstructor<UWeakObjectProperty>,
               InternalVTableHelperCtorCaller<UWeakObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton;
}

// StaticRegisterNativesUWeakObjectProperty @ 141e60910

void __cdecl UWeakObjectProperty::StaticRegisterNativesUWeakObjectProperty(void)

{
  return;
}

