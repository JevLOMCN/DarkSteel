// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732ac00

UClass * __cdecl UTextPropertyTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextPropertyTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextPropertyTestObject",
               &Z_Registration_Info_UClass_UTextPropertyTestObject.InnerSingleton,
               StaticRegisterNativesUTextPropertyTestObject,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextPropertyTestObject>,
               InternalVTableHelperCtorCaller<UTextPropertyTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextPropertyTestObject.InnerSingleton;
}

// UTextPropertyTestObject @ 147331270

UTextPropertyTestObject * __thiscall
UTextPropertyTestObject::UTextPropertyTestObject
          (UTextPropertyTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTextPropertyTestObject__6B_;
  FText::FText(&this->DefaultedText);
  FText::FText(&this->UndefaultedText);
  FText::FText(&this->TransientText);
  return this;
}

// ~UTextPropertyTestObject @ 147331560

void __thiscall UTextPropertyTestObject::~UTextPropertyTestObject(UTextPropertyTestObject *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UTextPropertyTestObject__6B_;
  pIVar1 = (this->TransientText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->UndefaultedText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->DefaultedText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147332fc0

UClass * __cdecl UTextPropertyTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextPropertyTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextPropertyTestObject",
               &Z_Registration_Info_UClass_UTextPropertyTestObject.InnerSingleton,
               StaticRegisterNativesUTextPropertyTestObject,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextPropertyTestObject>,
               InternalVTableHelperCtorCaller<UTextPropertyTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextPropertyTestObject.InnerSingleton;
}

// StaticRegisterNativesUTextPropertyTestObject @ 1473334a0

void __cdecl UTextPropertyTestObject::StaticRegisterNativesUTextPropertyTestObject(void)

{
  return;
}

// UTextPropertyTestObject @ 14887e060

UTextPropertyTestObject * __thiscall
UTextPropertyTestObject::UTextPropertyTestObject
          (UTextPropertyTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTextPropertyTestObject__6B_;
  FText::AsLocalizable_Advanced_LocText
            (&this->DefaultedText,L"TextPropertyTest",L"DefaultedText",L"DefaultValue");
  FText::FText(&this->UndefaultedText);
  FText::FText(&this->TransientText);
  return this;
}

