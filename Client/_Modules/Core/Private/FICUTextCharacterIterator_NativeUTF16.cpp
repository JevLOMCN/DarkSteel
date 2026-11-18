// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FICUTextCharacterIterator_NativeUTF16 @ 1416d5740

FICUTextCharacterIterator_NativeUTF16 * __thiscall
FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
          (FICUTextCharacterIterator_NativeUTF16 *this,
          FICUTextCharacterIterator_NativeUTF16 *param_1)

{
  int iVar1;
  ConstChar16Ptr CVar2;
  int iVar3;
  
  icu_64::UCharCharacterIterator::UCharCharacterIterator
            ((UCharCharacterIterator *)this,(UCharCharacterIterator *)param_1);
  this->_padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  ::FString::ConstructFromPtrSize
            (&this->InternalString,(param_1->StringRef).DataPtr,(param_1->StringRef).Size);
  CVar2.u_ = (<unnamed_type_u_>)(this->InternalString).Data.AllocatorInstance.Data;
  (this->StringRef).DataPtr = (wchar_t *)CVar2.u_;
  iVar1 = (this->InternalString).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  (this->StringRef).Size = iVar3;
  icu_64::UCharCharacterIterator::setText((UCharCharacterIterator *)this,CVar2,iVar3);
  return this;
}

// FICUTextCharacterIterator_NativeUTF16 @ 1416d57c0

FICUTextCharacterIterator_NativeUTF16 * __thiscall
FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
          (FICUTextCharacterIterator_NativeUTF16 *this,FString *param_1)

{
  int iVar1;
  ConstChar16Ptr CVar2;
  int iVar3;
  
  icu_64::UCharCharacterIterator::UCharCharacterIterator((UCharCharacterIterator *)this);
  this->_padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  ::FString::FString(&this->InternalString,param_1);
  CVar2.u_ = (<unnamed_type_u_>)(this->InternalString).Data.AllocatorInstance.Data;
  (this->StringRef).DataPtr = (wchar_t *)CVar2.u_;
  iVar1 = (this->InternalString).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  (this->StringRef).Size = iVar3;
  icu_64::UCharCharacterIterator::setText((UCharCharacterIterator *)this,CVar2,iVar3);
  return this;
}

// FICUTextCharacterIterator_NativeUTF16 @ 1416d5830

FICUTextCharacterIterator_NativeUTF16 * __thiscall
FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
          (FICUTextCharacterIterator_NativeUTF16 *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 uVar3;
  
  icu_64::UCharCharacterIterator::UCharCharacterIterator((UCharCharacterIterator *)this);
  pwVar1 = param_1->DataPtr;
  iVar2 = param_1->Size;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->_padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  (this->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalString).Data.ArrayNum = 0;
  (this->InternalString).Data.ArrayMax = 0;
  (this->StringRef).DataPtr = pwVar1;
  (this->StringRef).Size = iVar2;
  *(undefined4 *)&(this->StringRef).field_0xc = uVar3;
  icu_64::UCharCharacterIterator::setText
            ((UCharCharacterIterator *)this,(ConstChar16Ptr)(this->StringRef).DataPtr,
             (this->StringRef).Size);
  return this;
}

// ~FICUTextCharacterIterator_NativeUTF16 @ 1416d8d50

void __thiscall
FICUTextCharacterIterator_NativeUTF16::~FICUTextCharacterIterator_NativeUTF16
          (FICUTextCharacterIterator_NativeUTF16 *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  pFVar1 = (this->InternalString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  icu_64::UCharCharacterIterator::~UCharCharacterIterator((UCharCharacterIterator *)this);
  return;
}

// InternalIndexToSourceIndex @ 141701540

int __thiscall
FICUTextCharacterIterator_NativeUTF16::InternalIndexToSourceIndex
          (FICUTextCharacterIterator_NativeUTF16 *this,int param_1)

{
  return param_1;
}

// SetTextFromStringRef @ 141712170

void __thiscall
FICUTextCharacterIterator_NativeUTF16::SetTextFromStringRef
          (FICUTextCharacterIterator_NativeUTF16 *this)

{
  icu_64::UCharCharacterIterator::setText
            ((UCharCharacterIterator *)this,(ConstChar16Ptr)(this->StringRef).DataPtr,
             (this->StringRef).Size);
  return;
}

// SourceIndexToInternalIndex @ 141712b30

int __thiscall
FICUTextCharacterIterator_NativeUTF16::SourceIndexToInternalIndex
          (FICUTextCharacterIterator_NativeUTF16 *this,int param_1)

{
  return param_1;
}

// clone @ 14171ae00

CharacterIterator * __thiscall
FICUTextCharacterIterator_NativeUTF16::clone(FICUTextCharacterIterator_NativeUTF16 *this)

{
  int iVar1;
  <unnamed_type_u_> <Var2;
  UCharCharacterIterator *this_00;
  int iVar3;
  
  this_00 = icu_64::UMemory::operator_new(0x40);
  if (this_00 != (UCharCharacterIterator *)0x0) {
    icu_64::UCharCharacterIterator::UCharCharacterIterator(this_00,(UCharCharacterIterator *)this);
    this_00->_padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
    ::FString::ConstructFromPtrSize
              ((FString *)(this_00 + 1),(this->StringRef).DataPtr,(this->StringRef).Size);
    <Var2 = *(<unnamed_type_u_> *)(this_00 + 1);
    this_00[1]._padding_ = (longlong)<Var2;
    iVar1 = (int)this_00[1]._padding_;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    *(int *)&this_00[1].text = iVar3;
    icu_64::UCharCharacterIterator::setText(this_00,(ConstChar16Ptr)<Var2,iVar3);
    return (CharacterIterator *)this_00;
  }
  return (CharacterIterator *)0x0;
}

// getDynamicClassID @ 14171af10

void * __thiscall
FICUTextCharacterIterator_NativeUTF16::getDynamicClassID
          (FICUTextCharacterIterator_NativeUTF16 *this)

{
  return &classID;
}

// getStaticClassID @ 14171af30

void * __cdecl FICUTextCharacterIterator_NativeUTF16::getStaticClassID(void)

{
  return &classID;
}

