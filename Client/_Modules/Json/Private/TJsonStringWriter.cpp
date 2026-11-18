// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 10

// ~TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> @ 141dc5d70

void __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>::
~TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>
          (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy_D____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter_DU__TCondensedJsonPrintPolicy_D____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> @ 141dc5e10

void __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>::
~TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>
          (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__Q____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TCondensedJsonPrintPolicy__Q____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> @ 141dc5eb0

void __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>
          (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> @ 141dc5f50

void __thiscall
TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>::
~TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>
          (TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__Q____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__QU__TPrettyJsonPrintPolicy__Q____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ~TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> @ 141dc5ff0

void __thiscall
TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
~TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>
          (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x210))();
  if (cVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->Stream->Close()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0x2ef,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)this->_padding_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pFVar2 = (this->Bytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__TJsonWriter__WU__TPrettyJsonPrintPolicy__W____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// Close @ 141dce660

bool __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<char>_>::Close
          (TJsonStringWriter<TCondensedJsonPrintPolicy<char>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  FAnsiString::Reset(this->OutString,(this->Bytes).ArrayNum);
  uVar7 = 0;
  if (0 < (this->Bytes).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Bytes).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FAnsiString::AppendChar(this->OutString,(char)(this->Bytes).AllocatorInstance.Data[lVar6]);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar7 < (this->Bytes).ArrayNum);
  }
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || ((iVar1 - 3U & 0xfffffffd) == 0)) && ((int)this->_padding_ == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dce730

bool __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_>::Close
          (TJsonStringWriter<TCondensedJsonPrintPolicy<char8_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  FUtf8String::Reset(this->OutString,(this->Bytes).ArrayNum);
  uVar7 = 0;
  if (0 < (this->Bytes).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Bytes).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FUtf8String::AppendChar(this->OutString,(uchar)(this->Bytes).AllocatorInstance.Data[lVar6]);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar7 < (this->Bytes).ArrayNum);
  }
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || ((iVar1 - 3U & 0xfffffffd) == 0)) && ((int)this->_padding_ == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dce800

bool __thiscall
TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close
          (TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  ::FString::Reset(this->OutString,(int)((ulonglong)(longlong)(this->Bytes).ArrayNum >> 1));
  uVar7 = 0;
  if (0 < (this->Bytes).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Bytes).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::AppendChar
                (this->OutString,*(wchar_t *)((this->Bytes).AllocatorInstance.Data + lVar6));
      uVar7 = uVar7 + 2;
      lVar6 = lVar6 + 2;
    } while ((int)uVar7 < (this->Bytes).ArrayNum);
  }
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || ((iVar1 - 3U & 0xfffffffd) == 0)) && ((int)this->_padding_ == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dce8d0

bool __thiscall
TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_>::Close
          (TJsonStringWriter<TPrettyJsonPrintPolicy<char8_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  FUtf8String::Reset(this->OutString,(this->Bytes).ArrayNum);
  uVar7 = 0;
  if (0 < (this->Bytes).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Bytes).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FUtf8String::AppendChar(this->OutString,(uchar)(this->Bytes).AllocatorInstance.Data[lVar6]);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar7 < (this->Bytes).ArrayNum);
  }
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || ((iVar1 - 3U & 0xfffffffd) == 0)) && ((int)this->_padding_ == 0)) {
    return true;
  }
  return false;
}

// Close @ 141dce9a0

bool __thiscall
TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::Close
          (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  ::FString::Reset(this->OutString,(int)((ulonglong)(longlong)(this->Bytes).ArrayNum >> 1));
  uVar7 = 0;
  if (0 < (this->Bytes).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Bytes).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ::FString::AppendChar
                (this->OutString,*(wchar_t *)((this->Bytes).AllocatorInstance.Data + lVar6));
      uVar7 = uVar7 + 2;
      lVar6 = lVar6 + 2;
    } while ((int)uVar7 < (this->Bytes).ArrayNum);
  }
  iVar1 = (int)this->_padding_;
  if (((iVar1 == 0) || ((iVar1 - 3U & 0xfffffffd) == 0)) && ((int)this->_padding_ == 0)) {
    return true;
  }
  return false;
}

