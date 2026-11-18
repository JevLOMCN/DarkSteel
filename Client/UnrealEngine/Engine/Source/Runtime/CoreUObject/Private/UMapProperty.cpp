// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// StaticClass @ 141e48d50

UClass * __cdecl UMapProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMapProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MapProperty",
               &Z_Registration_Info_UClass_UMapProperty.InnerSingleton,
               StaticRegisterNativesUMapProperty,0x98,8,CLASS_Intrinsic,CASTCLASS_FMapProperty,
               L"Engine",InternalConstructor<UMapProperty>,
               InternalVTableHelperCtorCaller<UMapProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMapProperty.InnerSingleton;
}

// UMapProperty @ 141e56b20

UMapProperty * __thiscall UMapProperty::UMapProperty(UMapProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UMapProperty__6B_;
  this->_padding_ = 0;
  (this->KeyProp).field0_0x0.DebugPtr = (UProperty *)0x0;
  (this->ValueProp).field0_0x0.DebugPtr = (UProperty *)0x0;
  return this;
}

// ~UMapProperty @ 141e57910

void __thiscall UMapProperty::~UMapProperty(UMapProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c1e0

UClass * __cdecl UMapProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMapProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MapProperty",
               &Z_Registration_Info_UClass_UMapProperty.InnerSingleton,
               StaticRegisterNativesUMapProperty,0x98,8,CLASS_Intrinsic,CASTCLASS_FMapProperty,
               L"Engine",InternalConstructor<UMapProperty>,
               InternalVTableHelperCtorCaller<UMapProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMapProperty.InnerSingleton;
}

// Serialize @ 141e5fea0

void __thiscall UMapProperty::Serialize(UMapProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUMapProperty @ 141e60700

void __cdecl UMapProperty::StaticRegisterNativesUMapProperty(void)

{
  return;
}

// UMapProperty @ 142162ec0

UMapProperty * __thiscall
UMapProperty::UMapProperty
          (UMapProperty *this,FObjectInitializer *param_1,ECppProperty param_2,int param_3,
          EPropertyFlags param_4)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = param_4;
  this->_padding_ = (longlong)&___7UMapProperty__6B_;
  *(int *)((longlong)&this->_padding_ + 4) = param_3;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  (this->KeyProp).field0_0x0.DebugPtr = (UProperty *)0x0;
  (this->ValueProp).field0_0x0.DebugPtr = (UProperty *)0x0;
  return this;
}

// Serialize @ 14218ae90

void __thiscall UMapProperty::Serialize(UMapProperty *this,FArchive *param_1)

{
  UProperty::Serialize((UProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->KeyProp);
                    /* WARNING: Could not recover jumptable at 0x00014218aec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ValueProp);
  return;
}

