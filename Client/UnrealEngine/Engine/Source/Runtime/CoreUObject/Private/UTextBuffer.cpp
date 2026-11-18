// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// StaticClass @ 141ec5080

UClass * __cdecl UTextBuffer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TextBuffer",
               &Z_Registration_Info_UClass_UTextBuffer.InnerSingleton,
               StaticRegisterNativesUTextBuffer,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextBuffer>,InternalVTableHelperCtorCaller<UTextBuffer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBuffer.InnerSingleton;
}

// UTextBuffer @ 141ed4120

UTextBuffer * __thiscall UTextBuffer::UTextBuffer(UTextBuffer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FOutputDevice::FOutputDevice((FOutputDevice *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  return this;
}

// UTextBuffer @ 141ed4170

UTextBuffer * __thiscall UTextBuffer::UTextBuffer(UTextBuffer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FOutputDevice::FOutputDevice((FOutputDevice *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  return this;
}

// UTextBuffer @ 141ed41c0

UTextBuffer * __thiscall
UTextBuffer::UTextBuffer(UTextBuffer *this,FObjectInitializer *param_1,wchar_t *param_2)

{
  UObject::UObject((UObject *)this,param_1);
  FOutputDevice::FOutputDevice((FOutputDevice *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  ::FString::FString(&this->Text,param_2);
  return this;
}

// UTextBuffer @ 141ed4220

UTextBuffer * __thiscall UTextBuffer::UTextBuffer(UTextBuffer *this,wchar_t *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  FOutputDevice::FOutputDevice((FOutputDevice *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  ::FString::FString(&this->Text,param_1);
  return this;
}

// ~UTextBuffer @ 141ed5d40

void __thiscall UTextBuffer::~UTextBuffer(UTextBuffer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 141efa320

UClass * __cdecl UTextBuffer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TextBuffer",
               &Z_Registration_Info_UClass_UTextBuffer.InnerSingleton,
               StaticRegisterNativesUTextBuffer,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextBuffer>,InternalVTableHelperCtorCaller<UTextBuffer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextBuffer.InnerSingleton;
}

// Serialize @ 141f10770

void __thiscall UTextBuffer::Serialize(UTextBuffer *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  UObject::Serialize((UObject *)this,param_1);
  piVar1 = &this->Pos;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->Top;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->Text);
  return;
}

// Serialize @ 141f10840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTextBuffer::Serialize(UTextBuffer *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  ::FString::AppendChars((FString *)&this->_padding_,param_1,(int)sVar1);
  return;
}

// Serialize @ 141f10880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTextBuffer::Serialize
          (UTextBuffer *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  ::FString::AppendChars((FString *)&this->_padding_,param_1,(int)sVar1);
  return;
}

// Serialize @ 141f108c0

void __thiscall UTextBuffer::Serialize(UTextBuffer *this,FStructuredArchiveRecord param_1)

{
  int *piVar1;
  int *piVar2;
  FArchive *this_00;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,this_00);
  piVar1 = (int *)**(undefined8 **)&this_00->field_0x8;
  if ((int *)(*(undefined8 **)&this_00->field_0x8)[1] < piVar1 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&this->Pos,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)&this->Pos);
    }
  }
  else {
    this->Pos = *piVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  piVar1 = &this->Top;
  piVar2 = (int *)**(undefined8 **)&this_00->field_0x8;
  if ((int *)(*(undefined8 **)&this_00->field_0x8)[1] < piVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  ::operator<<(this_00,&this->Text);
  return;
}

// StaticRegisterNativesUTextBuffer @ 141f146c0

void __cdecl UTextBuffer::StaticRegisterNativesUTextBuffer(void)

{
  return;
}

