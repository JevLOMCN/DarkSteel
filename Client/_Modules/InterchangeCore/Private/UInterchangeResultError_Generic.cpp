// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 7

// StaticClass @ 14e321be0

UClass * __cdecl UInterchangeResultError_Generic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultError_Generic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultError_Generic",
               &Z_Registration_Info_UClass_UInterchangeResultError_Generic.InnerSingleton,
               StaticRegisterNativesUInterchangeResultError_Generic,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultError_Generic>,
               InternalVTableHelperCtorCaller<UInterchangeResultError_Generic>,local_res8,
               UInterchangeResultError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultError_Generic.InnerSingleton;
}

// UInterchangeResultError_Generic @ 14e4017a0

UInterchangeResultError_Generic * __thiscall
UInterchangeResultError_Generic::UInterchangeResultError_Generic
          (UInterchangeResultError_Generic *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultError_Generic__6B_;
  FText::FText(&this->Text);
  return this;
}

// UInterchangeResultError_Generic @ 14e401800

UInterchangeResultError_Generic * __thiscall
UInterchangeResultError_Generic::UInterchangeResultError_Generic
          (UInterchangeResultError_Generic *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInterchangeResultError_Generic__6B_;
  FText::FText(&this->Text);
  return this;
}

// ~UInterchangeResultError_Generic @ 14e404d50

void __thiscall
UInterchangeResultError_Generic::~UInterchangeResultError_Generic
          (UInterchangeResultError_Generic *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultError_Generic__6B_;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UInterchangeResult__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e441ce0

UClass * __cdecl UInterchangeResultError_Generic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultError_Generic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultError_Generic",
               &Z_Registration_Info_UClass_UInterchangeResultError_Generic.InnerSingleton,
               StaticRegisterNativesUInterchangeResultError_Generic,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultError_Generic>,
               InternalVTableHelperCtorCaller<UInterchangeResultError_Generic>,local_res8,
               UInterchangeResultError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultError_Generic.InnerSingleton;
}

// GetText @ 14e443150

FText * __thiscall
UInterchangeResultError_Generic::GetText
          (UInterchangeResultError_Generic *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Text).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Text).Flags;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeResultError_Generic @ 14e45ffe0

void __cdecl
UInterchangeResultError_Generic::StaticRegisterNativesUInterchangeResultError_Generic(void)

{
  return;
}

