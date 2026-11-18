// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticClass @ 141e49870

UClass * __cdecl UEnumProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnumProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"EnumProperty",
               &Z_Registration_Info_UClass_UEnumProperty.InnerSingleton,
               StaticRegisterNativesUEnumProperty,0x80,8,CLASS_Intrinsic,CASTCLASS_FEnumProperty,
               L"Engine",InternalConstructor<UEnumProperty>,
               InternalVTableHelperCtorCaller<UEnumProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnumProperty.InnerSingleton;
}

// UEnumProperty @ 141e56910

UEnumProperty * __thiscall UEnumProperty::UEnumProperty(UEnumProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UEnumProperty__6B_;
  this->_padding_ = 0;
  (this->UnderlyingProp).field0_0x0.DebugPtr = (UNumericProperty *)0x0;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// ~UEnumProperty @ 141e577f0

void __thiscall UEnumProperty::~UEnumProperty(UEnumProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5ba80

UClass * __cdecl UEnumProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnumProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"EnumProperty",
               &Z_Registration_Info_UClass_UEnumProperty.InnerSingleton,
               StaticRegisterNativesUEnumProperty,0x80,8,CLASS_Intrinsic,CASTCLASS_FEnumProperty,
               L"Engine",InternalConstructor<UEnumProperty>,
               InternalVTableHelperCtorCaller<UEnumProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnumProperty.InnerSingleton;
}

// Serialize @ 141e5fe40

void __thiscall UEnumProperty::Serialize(UEnumProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUEnumProperty @ 141e60660

void __cdecl UEnumProperty::StaticRegisterNativesUEnumProperty(void)

{
  return;
}

// UEnumProperty @ 142162dc0

UEnumProperty * __thiscall
UEnumProperty::UEnumProperty(UEnumProperty *this,FObjectInitializer *param_1,UEnum *param_2)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEnumProperty__6B_;
  this->_padding_ = 0;
  (this->UnderlyingProp).field0_0x0.DebugPtr = (UNumericProperty *)0x0;
  (this->Enum).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->UnderlyingProp).field0_0x0.DebugPtr = (UNumericProperty *)0x0;
  return this;
}

// UEnumProperty @ 142162e30

UEnumProperty * __thiscall
UEnumProperty::UEnumProperty
          (UEnumProperty *this,FObjectInitializer *param_1,ECppProperty param_2,int param_3,
          EPropertyFlags param_4,UEnum *param_5)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = param_4 | CPF_HasGetValueTypeHash;
  this->_padding_ = (longlong)&___7UEnumProperty__6B_;
  *(int *)((longlong)&this->_padding_ + 4) = param_3;
  this->_padding_ = 0;
  (this->UnderlyingProp).field0_0x0.DebugPtr = (UNumericProperty *)0x0;
  (this->Enum).field0_0x0.DebugPtr = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_5);
  }
  (this->UnderlyingProp).field0_0x0.DebugPtr = (UNumericProperty *)0x0;
  return this;
}

// Serialize @ 14218ad30

void __thiscall UEnumProperty::Serialize(UEnumProperty *this,FArchive *param_1)

{
  UProperty::Serialize((UProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Enum);
  if ((this->Enum).field0_0x0.DebugPtr != (UEnum *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->UnderlyingProp);
  if ((this->UnderlyingProp).field0_0x0.DebugPtr != (UNumericProperty *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
  }
  return;
}

