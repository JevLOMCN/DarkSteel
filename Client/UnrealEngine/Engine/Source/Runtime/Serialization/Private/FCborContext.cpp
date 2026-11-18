// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 7

// AsBool @ 148ba2030

bool __thiscall FCborContext::AsBool(FCborContext *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  
  bVar4 = (this->Header).Header;
  if (((bVar4 & 0xe0) != 0xe0) || ((bVar4 = bVar4 & 0x1f, bVar4 != 0x14 && (bVar4 != 0x15)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MajorType() == ECborCode::Prim && (AdditionalValue() == ECborCode::False || AdditionalValue() == ECborCode::True)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (this->field1_0x8).BoolValue;
}

// AsByteArray @ 148ba2090

TArrayView<unsigned_char_const_,int> * __thiscall
FCborContext::AsByteArray
          (FCborContext *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<unsigned_char_const_,int> *pTVar4;
  
  if (((this->Header).Header & 0xe0) != 0x40) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MajorType() == ECborCode::ByteString",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)(this->RawTextValue).AllocatorInstance.Data;
  iVar3 = (this->RawTextValue).ArrayNum + -1;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// AsDouble @ 148ba2120

double __thiscall FCborContext::AsDouble(FCborContext *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((this->Header).Header == 0xfb) {
    return (double)(this->field1_0x8).IntValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header.RawCode() == (ECborCode::Prim | ECborCode::Value_8Bytes)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                     ,0xf9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)(this->field1_0x8).IntValue;
}

// AsFloat @ 148ba2170

float __thiscall FCborContext::AsFloat(FCborContext *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->Header).Header == 0xfa) {
    return (this->field1_0x8).FloatValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header.RawCode() == (ECborCode::Prim | ECborCode::Value_4Bytes)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                     ,0xf2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field1_0x8).FloatValue;
}

// AsInt @ 148ba21c0

long64 __thiscall FCborContext::AsInt(FCborContext *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  long64 lVar4;
  
  bVar2 = (this->Header).Header & 0xe0;
  if ((bVar2 != 0x20) && (bVar2 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MajorType() == ECborCode::Int || MajorType() == ECborCode::Uint",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                       ,0xe4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
    return (this->field1_0x8).IntValue;
  }
  return (this->field1_0x8).IntValue;
}

// AsString @ 148ba2220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall FCborContext::AsString(FCborContext *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *_Str;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  size_t sVar5;
  uint uVar6;
  undefined1 auStack_168 [32];
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((((this->Header).Header & 0xe0) != 0x60) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MajorType() == ECborCode::TextString",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                         ,0x100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  _Str = (this->RawTextValue).AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (_Str == (FScriptContainerElement *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    goto LAB_148ba2346;
  }
  sVar5 = strlen((char *)_Str);
  local_38 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)_Str,(int)sVar5);
  uVar1 = local_38 + 1;
  uVar6 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar6 = 0;
      goto LAB_148ba22de;
    }
  }
  else {
LAB_148ba22de:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar6,2);
  }
  local_40 = local_148;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_40,uVar1,(uchar *)_Str,(int)sVar5 + 1);
LAB_148ba2346:
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// AsUInt @ 148ba2390

ulong64 __thiscall FCborContext::AsUInt(FCborContext *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (((this->Header).Header & 0xe0) == 0) {
    return (this->field1_0x8).IntValue;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MajorType() == ECborCode::Uint",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Public\\CborTypes.h"
                     ,0xdd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (this->field1_0x8).IntValue;
}

