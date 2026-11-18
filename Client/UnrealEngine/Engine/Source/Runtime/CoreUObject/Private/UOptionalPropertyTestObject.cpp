// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e4e3d0

UClass * __cdecl UOptionalPropertyTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"OptionalPropertyTestObject",
               &Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton,
               StaticRegisterNativesUOptionalPropertyTestObject,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptionalPropertyTestObject>,
               InternalVTableHelperCtorCaller<UOptionalPropertyTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton;
}

// UOptionalPropertyTestObject @ 141e57180

UOptionalPropertyTestObject * __thiscall
UOptionalPropertyTestObject::UOptionalPropertyTestObject
          (UOptionalPropertyTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptionalPropertyTestObject__6B_;
  (this->OptionalString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->OptionalString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->OptionalString).field0_0x0 + 0xc) = 0xffffffff;
  (this->OptionalText).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->OptionalText).field0_0x0.TypedValue.Flags = 0;
  (this->OptionalName).field0_0x0.TypedValue.Number = 0;
  (this->OptionalInt).bIsSet = false;
  (this->OptionalName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  return this;
}

// UOptionalPropertyTestObject @ 141e571d0

UOptionalPropertyTestObject * __thiscall
UOptionalPropertyTestObject::UOptionalPropertyTestObject
          (UOptionalPropertyTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptionalPropertyTestObject__6B_;
  (this->OptionalString).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->OptionalString).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->OptionalString).field0_0x0 + 0xc) = 0xffffffff;
  (this->OptionalText).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->OptionalText).field0_0x0.TypedValue.Flags = 0;
  (this->OptionalName).field0_0x0.TypedValue.Number = 0;
  (this->OptionalInt).bIsSet = false;
  (this->OptionalName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  return this;
}

// ~UOptionalPropertyTestObject @ 141e57bd0

void __thiscall
UOptionalPropertyTestObject::~UOptionalPropertyTestObject(UOptionalPropertyTestObject *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UOptionalPropertyTestObject__6B_;
  plVar1 = *(longlong **)&(this->OptionalText).field0_0x0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((*(int *)((longlong)&(this->OptionalString).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->OptionalString).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d110

UClass * __cdecl UOptionalPropertyTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"OptionalPropertyTestObject",
               &Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton,
               StaticRegisterNativesUOptionalPropertyTestObject,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptionalPropertyTestObject>,
               InternalVTableHelperCtorCaller<UOptionalPropertyTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton;
}

// StaticRegisterNativesUOptionalPropertyTestObject @ 141e60850

void __cdecl UOptionalPropertyTestObject::StaticRegisterNativesUOptionalPropertyTestObject(void)

{
  return;
}

