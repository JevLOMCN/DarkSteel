// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticClass @ 141e490f0

UClass * __cdecl UStructProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStructProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StructProperty",
               &Z_Registration_Info_UClass_UStructProperty.InnerSingleton,
               StaticRegisterNativesUStructProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FStructProperty
               ,L"Engine",InternalConstructor<UStructProperty>,
               InternalVTableHelperCtorCaller<UStructProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStructProperty.InnerSingleton;
}

// UStructProperty @ 141e57370

UStructProperty * __thiscall
UStructProperty::UStructProperty(UStructProperty *this,FVTableHelper *param_1)

{
  UField::UField((UField *)this,param_1);
  this->_padding_ = (longlong)&___7UStructProperty__6B_;
  this->_padding_ = 0;
  (this->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  return this;
}

// ~UStructProperty @ 141e57cf0

void __thiscall UStructProperty::~UStructProperty(UStructProperty *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d630

UClass * __cdecl UStructProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStructProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StructProperty",
               &Z_Registration_Info_UClass_UStructProperty.InnerSingleton,
               StaticRegisterNativesUStructProperty,0x78,8,CLASS_Intrinsic,CASTCLASS_FStructProperty
               ,L"Engine",InternalConstructor<UStructProperty>,
               InternalVTableHelperCtorCaller<UStructProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStructProperty.InnerSingleton;
}

// Serialize @ 141e5ffc0

void __thiscall UStructProperty::Serialize(UStructProperty *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUStructProperty @ 141e608c0

void __cdecl UStructProperty::StaticRegisterNativesUStructProperty(void)

{
  return;
}

// UStructProperty @ 142163080

UStructProperty * __thiscall
UStructProperty::UStructProperty
          (UStructProperty *this,FObjectInitializer *param_1,ECppProperty param_2,int param_3,
          EPropertyFlags param_4,UScriptStruct *param_5)

{
  ICppStructOps *pIVar1;
  
  pIVar1 = UScriptStruct::GetCppStructOps(param_5);
  if (pIVar1 != (ICppStructOps *)0x0) {
    pIVar1 = UScriptStruct::GetCppStructOps(param_5);
    param_4 = param_4 | (pIVar1->FakeVPtr->Capabilities).ComputedPropertyFlags;
  }
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStructProperty__6B_;
  this->_padding_ = param_4;
  *(int *)((longlong)&this->_padding_ + 4) = param_3;
  (this->Struct).field0_0x0.DebugPtr = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_5);
  }
  *(int *)((longlong)&this->_padding_ + 4) = (int)((this->Struct).field0_0x0.DebugPtr)->_padding_;
  return this;
}

// UStructProperty @ 142163150

UStructProperty * __thiscall
UStructProperty::UStructProperty
          (UStructProperty *this,ECppProperty param_1,int param_2,EPropertyFlags param_3,
          UScriptStruct *param_4)

{
  ICppStructOps *pIVar1;
  FObjectInitializer *pFVar2;
  
  pIVar1 = UScriptStruct::GetCppStructOps(param_4);
  if (pIVar1 != (ICppStructOps *)0x0) {
    pIVar1 = UScriptStruct::GetCppStructOps(param_4);
    param_3 = param_3 | (pIVar1->FakeVPtr->Capabilities).ComputedPropertyFlags;
  }
  pFVar2 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar2);
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStructProperty__6B_;
  this->_padding_ = param_3;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  (this->Struct).field0_0x0.DebugPtr = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  *(int *)((longlong)&this->_padding_ + 4) = (int)((this->Struct).field0_0x0.DebugPtr)->_padding_;
  return this;
}

// Serialize @ 14218b270

void __thiscall UStructProperty::Serialize(UStructProperty *this,FArchive *param_1)

{
  UScriptStruct *pUVar1;
  longlong lVar2;
  
  UProperty::Serialize((UProperty *)this,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FallbackStruct = GetFallbackStruct();
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((param_1->field_0x29 & 1) != 0) {
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
    pUVar1 = FallbackStruct;
    if (((lVar2 != 0) && ((param_1->field_0x28 & 1) != 0)) &&
       ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FallbackStruct != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FallbackStruct);
      }
      (this->Struct).field0_0x0.DebugPtr = pUVar1;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Struct);
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 != (UScriptStruct *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x378))();
  }
  return;
}

