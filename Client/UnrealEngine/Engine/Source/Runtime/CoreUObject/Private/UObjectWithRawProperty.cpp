// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e4a3a0

UClass * __cdecl UObjectWithRawProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectWithRawProperty",
               &Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton,
               StaticRegisterNativesUObjectWithRawProperty,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectWithRawProperty>,
               InternalVTableHelperCtorCaller<UObjectWithRawProperty>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton;
}

// UObjectWithRawProperty @ 141e57120

UObjectWithRawProperty * __thiscall
UObjectWithRawProperty::UObjectWithRawProperty(UObjectWithRawProperty *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectWithRawProperty__6B_;
  return this;
}

// UObjectWithRawProperty @ 141e57150

UObjectWithRawProperty * __thiscall
UObjectWithRawProperty::UObjectWithRawProperty
          (UObjectWithRawProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectWithRawProperty__6B_;
  return this;
}

// ~UObjectWithRawProperty @ 141e57bb0

void __thiscall UObjectWithRawProperty::~UObjectWithRawProperty(UObjectWithRawProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d060

UClass * __cdecl UObjectWithRawProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectWithRawProperty",
               &Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton,
               StaticRegisterNativesUObjectWithRawProperty,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectWithRawProperty>,
               InternalVTableHelperCtorCaller<UObjectWithRawProperty>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton;
}

// StaticRegisterNativesUObjectWithRawProperty @ 141e60840

void __cdecl UObjectWithRawProperty::StaticRegisterNativesUObjectWithRawProperty(void)

{
  return;
}

