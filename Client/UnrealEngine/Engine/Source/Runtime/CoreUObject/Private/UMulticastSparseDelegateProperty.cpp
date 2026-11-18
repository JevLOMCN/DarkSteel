// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e49770

UClass * __cdecl UMulticastSparseDelegateProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastSparseDelegateProperty",
               &Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton,
               StaticRegisterNativesUMulticastSparseDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FMulticastSparseDelegateProperty,L"Engine",
               InternalConstructor<UMulticastSparseDelegateProperty>,
               InternalVTableHelperCtorCaller<UMulticastSparseDelegateProperty>,local_res8,
               UMulticastDelegateProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton;
}

// UMulticastSparseDelegateProperty @ 141e56cc0

UMulticastSparseDelegateProperty * __thiscall
UMulticastSparseDelegateProperty::UMulticastSparseDelegateProperty
          (UMulticastSparseDelegateProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7UMulticastSparseDelegateProperty__6B_;
  return this;
}

// ~UMulticastSparseDelegateProperty @ 141e579d0

void __thiscall
UMulticastSparseDelegateProperty::~UMulticastSparseDelegateProperty
          (UMulticastSparseDelegateProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c650

UClass * __cdecl UMulticastSparseDelegateProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastSparseDelegateProperty",
               &Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton,
               StaticRegisterNativesUMulticastSparseDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FMulticastSparseDelegateProperty,L"Engine",
               InternalConstructor<UMulticastSparseDelegateProperty>,
               InternalVTableHelperCtorCaller<UMulticastSparseDelegateProperty>,local_res8,
               UMulticastDelegateProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton;
}

// StaticRegisterNativesUMulticastSparseDelegateProperty @ 141e60760

void __cdecl
UMulticastSparseDelegateProperty::StaticRegisterNativesUMulticastSparseDelegateProperty(void)

{
  return;
}

