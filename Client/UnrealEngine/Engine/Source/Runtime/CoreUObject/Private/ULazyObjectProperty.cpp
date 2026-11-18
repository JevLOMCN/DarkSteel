// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e481e0

UClass * __cdecl ULazyObjectProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LazyObjectProperty",
               &Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton,
               StaticRegisterNativesULazyObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FLazyObjectProperty,L"Engine",InternalConstructor<ULazyObjectProperty>,
               InternalVTableHelperCtorCaller<ULazyObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton;
}

// ULazyObjectProperty @ 141e56ae0

ULazyObjectProperty * __thiscall
ULazyObjectProperty::ULazyObjectProperty(ULazyObjectProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7ULazyObjectProperty__6B_;
  return this;
}

// ~ULazyObjectProperty @ 141e578f0

void __thiscall ULazyObjectProperty::~ULazyObjectProperty(ULazyObjectProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c120

UClass * __cdecl ULazyObjectProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LazyObjectProperty",
               &Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton,
               StaticRegisterNativesULazyObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FLazyObjectProperty,L"Engine",InternalConstructor<ULazyObjectProperty>,
               InternalVTableHelperCtorCaller<ULazyObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton;
}

// StaticRegisterNativesULazyObjectProperty @ 141e606f0

void __cdecl ULazyObjectProperty::StaticRegisterNativesULazyObjectProperty(void)

{
  return;
}

