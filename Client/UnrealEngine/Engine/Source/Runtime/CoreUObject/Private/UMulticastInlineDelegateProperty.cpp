// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e49610

UClass * __cdecl UMulticastInlineDelegateProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastInlineDelegateProperty",
               &Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton,
               StaticRegisterNativesUMulticastInlineDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FMulticastInlineDelegateProperty,L"Engine",
               InternalConstructor<UMulticastInlineDelegateProperty>,
               InternalVTableHelperCtorCaller<UMulticastInlineDelegateProperty>,local_res8,
               UMulticastDelegateProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton;
}

// UMulticastInlineDelegateProperty @ 141e56c50

UMulticastInlineDelegateProperty * __thiscall
UMulticastInlineDelegateProperty::UMulticastInlineDelegateProperty
          (UMulticastInlineDelegateProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7UMulticastInlineDelegateProperty__6B_;
  return this;
}

// ~UMulticastInlineDelegateProperty @ 141e57990

void __thiscall
UMulticastInlineDelegateProperty::~UMulticastInlineDelegateProperty
          (UMulticastInlineDelegateProperty *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c4d0

UClass * __cdecl UMulticastInlineDelegateProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastInlineDelegateProperty",
               &Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton,
               StaticRegisterNativesUMulticastInlineDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FMulticastInlineDelegateProperty,L"Engine",
               InternalConstructor<UMulticastInlineDelegateProperty>,
               InternalVTableHelperCtorCaller<UMulticastInlineDelegateProperty>,local_res8,
               UMulticastDelegateProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton;
}

// StaticRegisterNativesUMulticastInlineDelegateProperty @ 141e60740

void __cdecl
UMulticastInlineDelegateProperty::StaticRegisterNativesUMulticastInlineDelegateProperty(void)

{
  return;
}

