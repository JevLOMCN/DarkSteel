// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FICUTextCharacterIterator_ConvertToUnicodeString @ 1416d5530

FICUTextCharacterIterator_ConvertToUnicodeString * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::FICUTextCharacterIterator_ConvertToUnicodeString
          (FICUTextCharacterIterator_ConvertToUnicodeString *this,
          FICUTextCharacterIterator_ConvertToUnicodeString *param_1)

{
  ::FString::FString((FString *)&this->field_0x60,(FString *)&param_1->field_0x60);
  icu_64::UnicodeString::UnicodeString
            ((UnicodeString *)&this->field_0x70,(UnicodeString *)&param_1->field_0x70);
  icu_64::StringCharacterIterator::StringCharacterIterator
            ((StringCharacterIterator *)this,(StringCharacterIterator *)param_1);
  *(undefined ***)this = &___7FICUTextCharacterIterator_ConvertToUnicodeString__6B_;
  return this;
}

// FICUTextCharacterIterator_ConvertToUnicodeString @ 1416d55a0

FICUTextCharacterIterator_ConvertToUnicodeString * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::FICUTextCharacterIterator_ConvertToUnicodeString
          (FICUTextCharacterIterator_ConvertToUnicodeString *this,FString *param_1)

{
  FICUTextCharacterIterator_ConvertToUnicodeStringPrivate::
  FICUTextCharacterIterator_ConvertToUnicodeStringPrivate
            ((FICUTextCharacterIterator_ConvertToUnicodeStringPrivate *)&this->field_0x60,param_1);
  icu_64::StringCharacterIterator::StringCharacterIterator
            ((StringCharacterIterator *)this,(UnicodeString *)&this->field_0x70);
  *(undefined ***)this = &___7FICUTextCharacterIterator_ConvertToUnicodeString__6B_;
  return this;
}

// FICUTextCharacterIterator_ConvertToUnicodeString @ 1416d55e0

FICUTextCharacterIterator_ConvertToUnicodeString * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::FICUTextCharacterIterator_ConvertToUnicodeString
          (FICUTextCharacterIterator_ConvertToUnicodeString *this,TStringView<wchar_t> *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::ConstructFromPtrSize(&local_18,param_1->DataPtr,param_1->Size);
  FICUTextCharacterIterator_ConvertToUnicodeStringPrivate::
  FICUTextCharacterIterator_ConvertToUnicodeStringPrivate
            ((FICUTextCharacterIterator_ConvertToUnicodeStringPrivate *)&this->field_0x60,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  icu_64::StringCharacterIterator::StringCharacterIterator
            ((StringCharacterIterator *)this,(UnicodeString *)&this->field_0x70);
  *(undefined ***)this = &___7FICUTextCharacterIterator_ConvertToUnicodeString__6B_;
  return this;
}

// ~FICUTextCharacterIterator_ConvertToUnicodeString @ 1416d8d10

void __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::~FICUTextCharacterIterator_ConvertToUnicodeString
          (FICUTextCharacterIterator_ConvertToUnicodeString *this)

{
  *(undefined ***)this = &___7FICUTextCharacterIterator_ConvertToUnicodeString__6B_;
  icu_64::StringCharacterIterator::~StringCharacterIterator((StringCharacterIterator *)this);
  icu_64::UnicodeString::~UnicodeString((UnicodeString *)&this->field_0x70);
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
    return;
  }
  return;
}

// InternalIndexToSourceIndex @ 141701520

int __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::InternalIndexToSourceIndex
          (FICUTextCharacterIterator_ConvertToUnicodeString *this,int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != -1) {
    iVar1 = param_1;
  }
  return iVar1;
}

// SourceIndexToInternalIndex @ 141712b10

int __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::SourceIndexToInternalIndex
          (FICUTextCharacterIterator_ConvertToUnicodeString *this,int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != -1) {
    iVar1 = param_1;
  }
  return iVar1;
}

// clone @ 14171ad70

CharacterIterator * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::clone
          (FICUTextCharacterIterator_ConvertToUnicodeString *this)

{
  StringCharacterIterator *this_00;
  
  this_00 = icu_64::UMemory::operator_new(0xb0);
  if (this_00 != (StringCharacterIterator *)0x0) {
    ::FString::FString((FString *)(this_00 + 1),(FString *)&this->field_0x60);
    icu_64::UnicodeString::UnicodeString
              ((UnicodeString *)&this_00[1]._padding_,(UnicodeString *)&this->field_0x70);
    icu_64::StringCharacterIterator::StringCharacterIterator
              (this_00,(StringCharacterIterator *)this);
    this_00->_padding_ = (longlong)&___7FICUTextCharacterIterator_ConvertToUnicodeString__6B_;
    return (CharacterIterator *)this_00;
  }
  return (CharacterIterator *)0x0;
}

// getDynamicClassID @ 14171af00

void * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeString::getDynamicClassID
          (FICUTextCharacterIterator_ConvertToUnicodeString *this)

{
  return &classID;
}

// getStaticClassID @ 14171af20

void * __cdecl FICUTextCharacterIterator_ConvertToUnicodeString::getStaticClassID(void)

{
  return &classID;
}

