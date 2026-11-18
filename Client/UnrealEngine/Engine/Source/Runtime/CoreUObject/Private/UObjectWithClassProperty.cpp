// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e4a2f0

UClass * __cdecl UObjectWithClassProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectWithClassProperty",
               &Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton,
               StaticRegisterNativesUObjectWithClassProperty,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectWithClassProperty>,
               InternalVTableHelperCtorCaller<UObjectWithClassProperty>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton;
}

// UObjectWithClassProperty @ 141e570a0

UObjectWithClassProperty * __thiscall
UObjectWithClassProperty::UObjectWithClassProperty
          (UObjectWithClassProperty *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectWithClassProperty__6B_;
  (this->ClassPtr).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SubClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UObjectWithClassProperty @ 141e570e0

UObjectWithClassProperty * __thiscall
UObjectWithClassProperty::UObjectWithClassProperty
          (UObjectWithClassProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectWithClassProperty__6B_;
  (this->ClassPtr).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SubClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UObjectWithClassProperty @ 141e57b90

void __thiscall UObjectWithClassProperty::~UObjectWithClassProperty(UObjectWithClassProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5cfb0

UClass * __cdecl UObjectWithClassProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectWithClassProperty",
               &Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton,
               StaticRegisterNativesUObjectWithClassProperty,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectWithClassProperty>,
               InternalVTableHelperCtorCaller<UObjectWithClassProperty>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton;
}

// StaticRegisterNativesUObjectWithClassProperty @ 141e60830

void __cdecl UObjectWithClassProperty::StaticRegisterNativesUObjectWithClassProperty(void)

{
  return;
}

