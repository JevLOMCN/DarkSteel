// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticClass @ 141e475a0

UClass * __cdecl UByteProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UByteProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ByteProperty",
               &Z_Registration_Info_UClass_UByteProperty.InnerSingleton,
               StaticRegisterNativesUByteProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FByteProperty,
               L"Engine",InternalConstructor<UByteProperty>,
               InternalVTableHelperCtorCaller<UByteProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UByteProperty.InnerSingleton;
}

// UByteProperty @ 141e567a0

UByteProperty * __thiscall UByteProperty::UByteProperty(UByteProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UByteProperty__6B_;
  this->_padding_ = 0;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// ~UByteProperty @ 141e57740

void __thiscall UByteProperty::~UByteProperty(UByteProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5b6c0

UClass * __cdecl UByteProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UByteProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ByteProperty",
               &Z_Registration_Info_UClass_UByteProperty.InnerSingleton,
               StaticRegisterNativesUByteProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FByteProperty,
               L"Engine",InternalConstructor<UByteProperty>,
               InternalVTableHelperCtorCaller<UByteProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UByteProperty.InnerSingleton;
}

// Serialize @ 141e5fdb0

void __thiscall UByteProperty::Serialize(UByteProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUByteProperty @ 141e60610

void __cdecl UByteProperty::StaticRegisterNativesUByteProperty(void)

{
  return;
}

// Serialize @ 14218abb0

void __thiscall UByteProperty::Serialize(UByteProperty *this,FArchive *param_1)

{
  UProperty::Serialize((UProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Enum);
  if ((this->Enum).field0_0x0.DebugPtr != (UEnum *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
  }
  return;
}

