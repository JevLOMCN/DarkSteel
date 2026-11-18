// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FTextFormatArgumentModifier_HangulPostPositions @ 141735610

FTextFormatArgumentModifier_HangulPostPositions * __thiscall
FTextFormatArgumentModifier_HangulPostPositions::FTextFormatArgumentModifier_HangulPostPositions
          (FTextFormatArgumentModifier_HangulPostPositions *this,FTextFormatString *param_1,
          FTextFormatString *param_2)

{
  int iVar1;
  
  this->_padding_ = (longlong)&___7FTextFormatArgumentModifier_HangulPostPositions__6B_;
  (this->ConsonantSuffix).StringPtr = param_1->StringPtr;
  (this->ConsonantSuffix).StringLen = param_1->StringLen;
  (this->ConsonantSuffix).InternalString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConsonantSuffix).InternalString.Data.AllocatorInstance.Data =
       (param_1->InternalString).Data.AllocatorInstance.Data;
  (param_1->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsonantSuffix).InternalString.Data.ArrayNum = (param_1->InternalString).Data.ArrayNum;
  (this->ConsonantSuffix).InternalString.Data.ArrayMax = (param_1->InternalString).Data.ArrayMax;
  (param_1->InternalString).Data.ArrayNum = 0;
  (param_1->InternalString).Data.ArrayMax = 0;
  (this->VowelSuffix).StringPtr = param_2->StringPtr;
  iVar1 = param_2->StringLen;
  (this->VowelSuffix).InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VowelSuffix).StringLen = iVar1;
  (this->VowelSuffix).InternalString.Data.AllocatorInstance.Data =
       (param_2->InternalString).Data.AllocatorInstance.Data;
  (param_2->InternalString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VowelSuffix).InternalString.Data.ArrayNum = (param_2->InternalString).Data.ArrayNum;
  (this->VowelSuffix).InternalString.Data.ArrayMax = (param_2->InternalString).Data.ArrayMax;
  (param_2->InternalString).Data.ArrayNum = 0;
  (param_2->InternalString).Data.ArrayMax = 0;
  iVar1 = (this->ConsonantSuffix).StringLen;
  this->SuffixMode = ConsonantOrVowel;
  if (((iVar1 == 2) && ((this->VowelSuffix).StringLen == 1)) &&
     (iVar1 = wcsncmp((this->ConsonantSuffix).StringPtr,L"으로",2), iVar1 == 0)) {
    iVar1 = wcsncmp((this->VowelSuffix).StringPtr,L"로",1);
    if (iVar1 == 0) {
      this->SuffixMode = ConsonantNotRieulOrVowel;
      return this;
    }
  }
  return this;
}

// Create @ 14174e380

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
FTextFormatArgumentModifier_HangulPostPositions::Create
          (TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,
          FTextFormatString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FTextFormatArgumentModifier_HangulPostPositions *pFVar5;
  TSharedPtr<ITextFormatArgumentModifier,1> *pTVar6;
  TRawPtrProxy<FTextFormatArgumentModifier_HangulPostPositions> local_res18;
  TArray<FTextFormatString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar3 = ITextFormatArgumentModifier::ParseValueArgs(param_1,&local_18,L',');
  if ((bVar3) && (local_18.ArrayNum == 2)) {
    pFVar5 = ::operator_new(0x50);
    if (pFVar5 == (FTextFormatArgumentModifier_HangulPostPositions *)0x0) {
      pFVar5 = (FTextFormatArgumentModifier_HangulPostPositions *)0x0;
    }
    else {
      if (local_18.ArrayNum < 2) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar1)();
          return pTVar6;
        }
      }
      FVar2.Data = local_18.AllocatorInstance.Data;
      if (local_18.ArrayNum < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar1)();
          return pTVar6;
        }
      }
      pFVar5->_padding_ = (longlong)&___7FTextFormatArgumentModifier_HangulPostPositions__6B_;
      (pFVar5->ConsonantSuffix).StringPtr = *(wchar_t **)local_18.AllocatorInstance.Data;
      iVar4 = *(int *)(local_18.AllocatorInstance.Data + 8);
      (pFVar5->ConsonantSuffix).InternalString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar5->ConsonantSuffix).StringLen = iVar4;
      (pFVar5->ConsonantSuffix).InternalString.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(local_18.AllocatorInstance.Data + 0x10);
      *(undefined8 *)(local_18.AllocatorInstance.Data + 0x10) = 0;
      (pFVar5->ConsonantSuffix).InternalString.Data.ArrayNum =
           *(int *)(local_18.AllocatorInstance.Data + 0x18);
      (pFVar5->ConsonantSuffix).InternalString.Data.ArrayMax =
           *(int *)(local_18.AllocatorInstance.Data + 0x1c);
      *(undefined8 *)(local_18.AllocatorInstance.Data + 0x18) = 0;
      (pFVar5->VowelSuffix).StringPtr = ((FTextFormatString *)(FVar2.Data + 0x20))->StringPtr;
      iVar4 = *(int *)(FVar2.Data + 0x28);
      (pFVar5->VowelSuffix).InternalString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar5->VowelSuffix).StringLen = iVar4;
      (pFVar5->VowelSuffix).InternalString.Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)(FVar2.Data + 0x30);
      *(undefined8 *)(FVar2.Data + 0x30) = 0;
      (pFVar5->VowelSuffix).InternalString.Data.ArrayNum = *(int *)(FVar2.Data + 0x38);
      (pFVar5->VowelSuffix).InternalString.Data.ArrayMax = *(int *)(FVar2.Data + 0x3c);
      *(undefined8 *)(FVar2.Data + 0x38) = 0;
      iVar4 = (pFVar5->ConsonantSuffix).StringLen;
      pFVar5->SuffixMode = ConsonantOrVowel;
      if ((iVar4 == 2) && ((pFVar5->VowelSuffix).StringLen == 1)) {
        iVar4 = wcsncmp((pFVar5->ConsonantSuffix).StringPtr,L"으로",2);
        if (iVar4 == 0) {
          iVar4 = wcsncmp((pFVar5->VowelSuffix).StringPtr,L"로",1);
          if (iVar4 == 0) {
            pFVar5->SuffixMode = ConsonantNotRieulOrVowel;
          }
        }
      }
    }
    local_res18.Object = pFVar5;
    TSharedPtr<ITextFormatArgumentModifier,1>::
    TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_HangulPostPositions>
              (__return_storage_ptr__,&local_res18);
    DestructItems<FTextFormatString,int>
              ((FTextFormatString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  }
  else {
    __return_storage_ptr__->Object = (ITextFormatArgumentModifier *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    DestructItems<FTextFormatString,int>
              ((FTextFormatString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  }
  if ((FTextFormatString *)local_18.AllocatorInstance.Data != (FTextFormatString *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EstimateLength @ 1417545a0

void __thiscall
FTextFormatArgumentModifier_HangulPostPositions::EstimateLength
          (FTextFormatArgumentModifier_HangulPostPositions *this,int *param_1,bool *param_2)

{
  *param_1 = 2;
  *param_2 = false;
  return;
}

// Evaluate @ 141754650

void __thiscall
FTextFormatArgumentModifier_HangulPostPositions::Evaluate
          (FTextFormatArgumentModifier_HangulPostPositions *this,FFormatArgumentValue *param_1,
          FPrivateTextFormatArguments *param_2,FString *param_3)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  
  iVar2 = (param_3->Data).ArrayNum;
  FFormatArgumentValue::ToFormattedString
            (param_1,param_2->bRebuildText,param_2->bRebuildAsSource,param_3);
  iVar5 = (param_3->Data).ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != iVar6) {
    if ((iVar6 + -1 < 0) || (iVar6 <= iVar6 + -1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar1 = *(ushort *)((param_3->Data).AllocatorInstance.Data + (longlong)iVar6 * 2 + -2);
    if (((0xabff < uVar1) && (uVar1 < 0xd7a4)) || ((ushort)(uVar1 - 0x30) < 10)) {
      iVar6 = uVar1 - 0xac00;
      if (((iVar6 == (iVar6 / 0x1c) * 0x1c) &&
          ((0x38 < uVar1 || ((0x1cb000000000000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)))) ||
         ((this->SuffixMode == ConsonantNotRieulOrVowel &&
          (((iVar6 % 0x1c == 8 || (uVar1 == 0x31)) || ((ushort)(uVar1 - 0x37) < 2)))))) {
        iVar6 = (this->VowelSuffix).StringLen;
        pwVar7 = (this->VowelSuffix).StringPtr;
      }
      else {
        iVar6 = (this->ConsonantSuffix).StringLen;
        pwVar7 = (this->ConsonantSuffix).StringPtr;
      }
      ::FString::AppendChars(param_3,pwVar7,iVar6);
    }
  }
  return;
}

// GetFormatArgumentNames @ 14175d310

void __thiscall
FTextFormatArgumentModifier_HangulPostPositions::GetFormatArgumentNames
          (FTextFormatArgumentModifier_HangulPostPositions *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// Validate @ 141782fb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextFormatArgumentModifier_HangulPostPositions::Validate
          (FTextFormatArgumentModifier_HangulPostPositions *this,TSharedRef<FCulture,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return true;
}

