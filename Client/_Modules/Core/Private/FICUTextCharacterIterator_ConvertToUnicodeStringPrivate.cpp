// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FICUTextCharacterIterator_ConvertToUnicodeStringPrivate @ 1416d5640

FICUTextCharacterIterator_ConvertToUnicodeStringPrivate * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeStringPrivate::
FICUTextCharacterIterator_ConvertToUnicodeStringPrivate
          (FICUTextCharacterIterator_ConvertToUnicodeStringPrivate *this,
          FICUTextCharacterIterator_ConvertToUnicodeStringPrivate *param_1)

{
  ::FString::FString(&this->SourceString,&param_1->SourceString);
  icu_64::UnicodeString::UnicodeString(&this->InternalString,&param_1->InternalString);
  return this;
}

// FICUTextCharacterIterator_ConvertToUnicodeStringPrivate @ 1416d5680

FICUTextCharacterIterator_ConvertToUnicodeStringPrivate * __thiscall
FICUTextCharacterIterator_ConvertToUnicodeStringPrivate::
FICUTextCharacterIterator_ConvertToUnicodeStringPrivate
          (FICUTextCharacterIterator_ConvertToUnicodeStringPrivate *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  wchar16 *_Dst;
  int iVar2;
  
  (this->SourceString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->SourceString).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  iVar1 = (this->SourceString).Data.ArrayNum;
  _Src = (this->SourceString).Data.AllocatorInstance.Data;
  (this->InternalString).fUnion.fStackFields.fLengthAndFlags = 2;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  (this->InternalString)._padding_ = (longlong)icu_64::UnicodeString::vftable;
  if (0 < iVar2) {
    _Dst = icu_64::UnicodeString::getBuffer(&this->InternalString,iVar2 + 1);
    memcpy(_Dst,_Src,(longlong)iVar2 * 2);
    _Dst[iVar2] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&this->InternalString,iVar2);
  }
  return this;
}

