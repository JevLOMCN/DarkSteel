// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// StaticClass @ 141e48f70

UClass * __cdecl USetProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USetProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SetProperty",
               &Z_Registration_Info_UClass_USetProperty.InnerSingleton,
               StaticRegisterNativesUSetProperty,0x90,8,CLASS_Intrinsic,CASTCLASS_FSetProperty,
               L"Engine",InternalConstructor<USetProperty>,
               InternalVTableHelperCtorCaller<USetProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USetProperty.InnerSingleton;
}

// USetProperty @ 141e57280

USetProperty * __thiscall USetProperty::USetProperty(USetProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7USetProperty__6B_;
  this->_padding_ = 0;
  (this->ElementProp).field0_0x0.DebugPtr = (UProperty *)0x0;
  return this;
}

// ~USetProperty @ 141e57c70

void __thiscall USetProperty::~USetProperty(USetProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d330

UClass * __cdecl USetProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USetProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SetProperty",
               &Z_Registration_Info_UClass_USetProperty.InnerSingleton,
               StaticRegisterNativesUSetProperty,0x90,8,CLASS_Intrinsic,CASTCLASS_FSetProperty,
               L"Engine",InternalConstructor<USetProperty>,
               InternalVTableHelperCtorCaller<USetProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USetProperty.InnerSingleton;
}

// Serialize @ 141e5ff60

void __thiscall USetProperty::Serialize(USetProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUSetProperty @ 141e60880

void __cdecl USetProperty::StaticRegisterNativesUSetProperty(void)

{
  return;
}

// USetProperty @ 142163020

USetProperty * __thiscall
USetProperty::USetProperty
          (USetProperty *this,FObjectInitializer *param_1,ECppProperty param_2,int param_3,
          EPropertyFlags param_4)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = param_4;
  this->_padding_ = (longlong)&___7USetProperty__6B_;
  *(int *)((longlong)&this->_padding_ + 4) = param_3;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  (this->ElementProp).field0_0x0.DebugPtr = (UProperty *)0x0;
  return this;
}

// Serialize @ 14218b140

void __thiscall USetProperty::Serialize(USetProperty *this,FArchive *param_1)

{
  UProperty::Serialize((UProperty *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014218b169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ElementProp);
  return;
}

