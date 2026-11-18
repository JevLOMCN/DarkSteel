// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FromString @ 145ca6990

void __thiscall
FBlendStateInitializerRHI::FRenderTarget::FromString
          (FRenderTarget *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *_Str;
  
  _Str = L"";
  if (param_1->ArrayNum < param_2 + 7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index + NUM_STRING_FIELDS <= Parts.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x1ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar6 = param_2 + 1;
  if (*(int *)(pFVar1 + (longlong)param_2 * 0x10 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)(pFVar1 + (longlong)param_2 * 0x10);
  }
  iVar4 = _wtoi(pwVar5);
  (this->ColorBlendOp).Value = (uchar)iVar4;
  uVar7 = 0;
  if ((int)uVar6 < param_1->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar7 = param_2 + 2;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x10 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x10);
  }
  iVar4 = _wtoi(pwVar5);
  (this->ColorSrcBlend).Value = (uchar)iVar4;
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar6 = param_2 + 3;
  if (*(int *)(pFVar1 + (longlong)(int)uVar7 * 0x10 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)(pFVar1 + (longlong)(int)uVar7 * 0x10);
  }
  iVar4 = _wtoi(pwVar5);
  (this->ColorDestBlend).Value = (uchar)iVar4;
  uVar7 = 0;
  if ((int)uVar6 < param_1->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar7 = param_2 + 4;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x10 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x10);
  }
  iVar4 = _wtoi(pwVar5);
  (this->AlphaBlendOp).Value = (uchar)iVar4;
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar6 = param_2 + 5;
  if (*(int *)(pFVar1 + (longlong)(int)uVar7 * 0x10 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)(pFVar1 + (longlong)(int)uVar7 * 0x10);
  }
  iVar4 = _wtoi(pwVar5);
  (this->AlphaSrcBlend).Value = (uchar)iVar4;
  uVar7 = 0;
  if ((int)uVar6 < param_1->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar7 = param_2 + 6;
  if (*(int *)(pFVar1 + (longlong)(int)uVar6 * 0x10 + 8) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)(pFVar1 + (longlong)(int)uVar6 * 0x10);
  }
  iVar4 = _wtoi(pwVar5);
  (this->AlphaDestBlend).Value = (uchar)iVar4;
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + (longlong)(int)uVar7 * 0x10 + 8) != 0) {
    _Str = *(wchar_t **)(pFVar1 + (longlong)(int)uVar7 * 0x10);
  }
  iVar4 = _wtoi(_Str);
  (this->ColorWriteMask).Value = (uchar)iVar4;
  return;
}

// FromString @ 145ca6d00

void __thiscall
FBlendStateInitializerRHI::FRenderTarget::FromString
          (FRenderTarget *this,TArrayView<TStringView<wchar_t>_const_,int> *param_1)

{
  TStringView<wchar_t> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->ArrayNum != 7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parts.Num() == NUM_STRING_FIELDS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x1da,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = param_1->DataPtr;
  ::LexFromString((uchar *)this,pTVar1);
  ::LexFromString(&(this->ColorSrcBlend).Value,pTVar1 + 1);
  ::LexFromString(&(this->ColorDestBlend).Value,pTVar1 + 2);
  ::LexFromString(&(this->AlphaBlendOp).Value,pTVar1 + 3);
  ::LexFromString(&(this->AlphaSrcBlend).Value,pTVar1 + 4);
  ::LexFromString(&(this->AlphaDestBlend).Value,pTVar1 + 5);
  ::LexFromString(&(this->ColorWriteMask).Value,pTVar1 + 6);
  return;
}

// ToString @ 145cc4b20

FString * __thiscall
FBlendStateInitializerRHI::FRenderTarget::ToString
          (FRenderTarget *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u %u %u %u %u %u %u ");
  return __return_storage_ptr__;
}

