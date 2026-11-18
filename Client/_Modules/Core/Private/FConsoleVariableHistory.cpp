// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// Log @ 14164c630

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableHistory<int>::Log(FConsoleVariableHistory<int> *this,FOutputDevice *param_1)

{
  uint uVar1;
  EConsoleVariableFlags EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FName *this_00;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar5 = false;
  bVar4 = false;
  local_res18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  uVar1 = (this->History).Pairs.ArrayNum;
  uVar7 = (ulonglong)(int)uVar1;
  pFVar9 = (this->History).Pairs.AllocatorInstance.Data;
  pFVar8 = pFVar9 + uVar7 * 0x18;
  pFVar11 = pFVar9 + 0x10;
  do {
    if ((this->History).Pairs.ArrayNum != (int)uVar7) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar8) {
      return;
    }
    EVar2 = *(EConsoleVariableFlags *)pFVar11;
    this_00 = *(FName **)(pFVar11 + -8);
    pFVar10 = this_00 + (longlong)(int)EVar2 * 2;
    while( true ) {
      if (*(EConsoleVariableFlags *)pFVar11 != EVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<int>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar10) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&local_58);
        bVar5 = true;
        bVar4 = true;
        ::FString::PrintfImpl(&local_68,L" [%s]");
      }
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::PrintfImpl(&local_78,L"%d");
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)pFVar9);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((bVar4) &&
         (bVar4 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 2;
    }
    pFVar9 = pFVar9 + 0x18;
    uVar7 = (ulonglong)uVar1;
    pFVar11 = pFVar11 + 0x18;
  } while( true );
}

// Log @ 14164c850

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableHistory<float>::Log(FConsoleVariableHistory<float> *this,FOutputDevice *param_1)

{
  uint uVar1;
  EConsoleVariableFlags EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FName *this_00;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar5 = false;
  bVar4 = false;
  local_res18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  uVar1 = (this->History).Pairs.ArrayNum;
  uVar7 = (ulonglong)(int)uVar1;
  pFVar9 = (this->History).Pairs.AllocatorInstance.Data;
  pFVar8 = pFVar9 + uVar7 * 0x18;
  pFVar11 = pFVar9 + 0x10;
  do {
    if ((this->History).Pairs.ArrayNum != (int)uVar7) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar8) {
      return;
    }
    EVar2 = *(EConsoleVariableFlags *)pFVar11;
    this_00 = *(FName **)(pFVar11 + -8);
    pFVar10 = this_00 + (longlong)(int)EVar2 * 2;
    while( true ) {
      if (*(EConsoleVariableFlags *)pFVar11 != EVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<float>_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar10) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&local_58);
        bVar5 = true;
        bVar4 = true;
        ::FString::PrintfImpl(&local_68,L" [%s]");
      }
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::PrintfImpl(&local_78,L"%f");
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)pFVar9);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((bVar4) &&
         (bVar4 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 2;
    }
    pFVar9 = pFVar9 + 0x18;
    uVar7 = (ulonglong)uVar1;
    pFVar11 = pFVar11 + 0x18;
  } while( true );
}

// Log @ 14164ca80

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableHistory<FString>::Log(FConsoleVariableHistory<FString> *this,FOutputDevice *param_1)

{
  FName _Src;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ForAnyElementType _Src_00;
  uint uVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FName *this_00;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  int local_9c;
  ForAnyElementType local_98;
  uint local_90;
  int local_8c;
  EConsoleVariableFlags local_88;
  uint local_84;
  FScriptContainerElement *local_80;
  FName *local_78;
  FScriptContainerElement *local_70;
  FString local_68;
  FString local_58;
  
  bVar3 = false;
  bVar2 = false;
  local_res18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  local_84 = (this->History).Pairs.ArrayNum;
  uVar8 = (ulonglong)(int)local_84;
  pFVar10 = (this->History).Pairs.AllocatorInstance.Data;
  local_70 = pFVar10 + uVar8 * 0x18;
  pFVar11 = pFVar10 + 0x10;
  do {
    pFVar6 = local_70;
    local_80 = pFVar10;
    if ((this->History).Pairs.ArrayNum != (int)uVar8) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar10 == pFVar6) {
      return;
    }
    local_88 = *(EConsoleVariableFlags *)pFVar11;
    uVar8 = (ulonglong)(int)local_88;
    this_00 = *(FName **)(pFVar11 + -8);
    local_78 = this_00 + uVar8 * 5;
    while( true ) {
      pFVar5 = local_78;
      if (*(EConsoleVariableFlags *)pFVar11 != (EConsoleVariableFlags)uVar8) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<FString>_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar5) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&local_58);
        bVar3 = true;
        bVar2 = true;
        ::FString::PrintfImpl(&local_68,L" [%s]");
      }
      bVar7 = IsInParallelGameThread();
      if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_90 = this_00[2].ComparisonIndex.Value;
      lVar9 = (longlong)(int)local_90;
      _Src = this_00[1];
      local_98.Data = (FScriptContainerElement *)0x0;
      if (local_90 == 0) {
        local_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_90,0,&local_98,local_90,&local_8c);
        memcpy(local_98.Data,(void *)_Src,lVar9 * 2);
      }
      uVar4 = local_90;
      _Src_00.Data = local_98.Data;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = local_90;
      if (local_90 == 0) {
        local_9c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_90,0,&local_a8,local_90,&local_9c);
        memcpy(local_a8.Data,_Src_00.Data,(longlong)(int)uVar4 * 2);
      }
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)local_80);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      if ((bVar2) &&
         (bVar2 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((bVar3) &&
         (bVar3 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)local_88;
      this_00 = this_00 + 5;
    }
    pFVar10 = local_80 + 0x18;
    uVar8 = (ulonglong)local_84;
    pFVar11 = pFVar11 + 0x18;
  } while( true );
}

// Log @ 14164cd30

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableHistory<bool>::Log(FConsoleVariableHistory<bool> *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  uint uVar3;
  EConsoleVariableFlags EVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  FName *this_00;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar7 = false;
  bVar6 = false;
  local_res18[0] = 0;
  FOutputDevice::Log(param_1,L"\nHISTORY");
  uVar3 = (this->History).Pairs.ArrayNum;
  uVar9 = (ulonglong)(int)uVar3;
  pFVar11 = (this->History).Pairs.AllocatorInstance.Data;
  pFVar1 = pFVar11 + uVar9 * 0x18;
  pFVar12 = pFVar11 + 0x10;
  do {
    if ((this->History).Pairs.ArrayNum != (int)uVar9) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<TTuple<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar1) {
      return;
    }
    EVar4 = *(EConsoleVariableFlags *)pFVar12;
    this_00 = *(FName **)(pFVar12 + -8);
    pFVar2 = (FName *)((longlong)this_00 + (longlong)(int)EVar4 * 0xc);
    while( true ) {
      if (*(EConsoleVariableFlags *)pFVar12 != EVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TConsoleVariableData<bool>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar2) break;
      if (*this_00 != (FName)0x0) {
        ::FName::ToString(this_00,&local_58);
        bVar7 = true;
        bVar6 = true;
        ::FString::PrintfImpl(&local_68,L" [%s]");
      }
      bVar8 = IsInParallelGameThread();
      if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pwVar10 = L"true";
      if ((char)this_00[1].ComparisonIndex.Value == '\0') {
        pwVar10 = L"false";
      }
      ::FString::FString(&local_78,pwVar10);
      GetConsoleVariableSetByName(*(EConsoleVariableFlags *)pFVar11);
      FOutputDevice::LogfImpl(param_1,L"%s: %s%s");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         (bVar6 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((bVar7) &&
         (bVar7 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      this_00 = (FName *)&this_00[1].Number;
    }
    pFVar11 = pFVar11 + 0x18;
    uVar9 = (ulonglong)uVar3;
    pFVar12 = pFVar12 + 0x18;
  } while( true );
}

// Track @ 141664790

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<int>::Track
          (FConsoleVariableHistory<int> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  wchar_t *_Str;
  TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *this_00;
  EConsoleVariableFlags EVar8;
  uint uVar9;
  longlong lVar10;
  EConsoleVariableFlags local_48 [8];
  
  _Str = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
  iVar5 = _wtoi(_Str);
  EVar8 = param_2 & ECVF_SetByMask;
  local_48[0] = EVar8;
  this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            ::Find(&this->History,EVar8);
  if (this_00 == (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              ::Emplace<int>(&this->History,(int *)local_48);
  }
  if ((param_2 >> 0x12 & 1) != 0) {
    iVar7 = this_00->ArrayNum;
    uVar9 = 0;
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < iVar7) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this_00->AllocatorInstance).Data;
        if (*(FName *)(pFVar1 + lVar10) == param_3) {
          *(ulonglong *)(pFVar1 + lVar10 + 8) = CONCAT44(iVar5,iVar5);
          return uVar9 == this_00->ArrayNum - 1U;
        }
        iVar7 = this_00->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < iVar7);
    }
  }
  if (((((EVar8 == ECVF_SetByPluginLowPriority) || (EVar8 == ECVF_SetByPluginHighPriority)) ||
       (EVar8 == ECVF_SetByHotfix)) ||
      ((EVar8 == ECVF_SetByDeviceProfile || (EVar8 == ECVF_SetByScalability)))) ||
     ((EVar8 == ECVF_SetByPreview || (this_00->ArrayNum < 1)))) {
    iVar7 = this_00->ArrayNum;
    uVar9 = 0;
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < iVar7) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(FName *)((this_00->AllocatorInstance).Data + lVar10) == param_3) {
          TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,uVar9,Default);
          break;
        }
        iVar7 = this_00->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < iVar7);
    }
    iVar7 = this_00->ArrayNum;
    if (iVar7 == this_00->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this_00->AllocatorInstance,&this_00->ArrayMax);
      this_00->ArrayNum = iVar7;
    }
    this_00->ArrayNum = iVar7 + 1;
    lVar10 = (longlong)iVar7;
    pFVar1 = (this_00->AllocatorInstance).Data;
    *(FName *)(pFVar1 + lVar10 * 0x10) = param_3;
    *(int *)(pFVar1 + lVar10 * 0x10 + 8) = iVar5;
    *(int *)(pFVar1 + lVar10 * 0x10 + 0xc) = iVar5;
  }
  else {
    *(ulonglong *)((this_00->AllocatorInstance).Data + 8) = CONCAT44(iVar5,iVar5);
  }
  return true;
}

// Track @ 1416649b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<float>::Track
          (FConsoleVariableHistory<float> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *_Str;
  TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar7;
  uint uVar8;
  EConsoleVariableFlags EVar9;
  double dVar10;
  float fVar11;
  EConsoleVariableFlags local_58 [2];
  char *local_50;
  undefined8 local_48;
  char **local_40 [3];
  
  _Str = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
  local_50 = (char *)0x0;
  local_40[0] = &local_50;
  local_48 = 0;
  `UE::ConsoleManager::Private::FConsoleManagerLocaleScope::FConsoleManagerLocaleScope'::__l2::
  <lambda_2>::operator()(local_40);
  dVar10 = _wtof(_Str);
  fVar11 = (float)dVar10;
  setlocale(4,local_50);
  if (local_50 != (char *)0x0) {
    FMemory::Free(local_50);
  }
  EVar9 = param_2 & ECVF_SetByMask;
  local_58[0] = EVar9;
  this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            ::Find(&this->History,EVar9);
  if (this_00 ==
      (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              ::Emplace<int>(&this->History,(int *)local_58);
  }
  if ((param_2 >> 0x12 & 1) != 0) {
    iVar6 = this_00->ArrayNum;
    uVar8 = 0;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this_00->AllocatorInstance).Data;
        if (*(FName *)(pFVar1 + lVar7) == param_3) {
          *(float *)(pFVar1 + lVar7 + 8) = fVar11;
          *(float *)(pFVar1 + lVar7 + 0xc) = fVar11;
          return uVar8 == this_00->ArrayNum - 1U;
        }
        iVar6 = this_00->ArrayNum;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar8 < iVar6);
    }
  }
  if (((((EVar9 == ECVF_SetByPluginLowPriority) || (EVar9 == ECVF_SetByPluginHighPriority)) ||
       (EVar9 == ECVF_SetByHotfix)) ||
      ((EVar9 == ECVF_SetByDeviceProfile || (EVar9 == ECVF_SetByScalability)))) ||
     ((EVar9 == ECVF_SetByPreview || (this_00->ArrayNum < 1)))) {
    iVar6 = this_00->ArrayNum;
    uVar8 = 0;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(FName *)((this_00->AllocatorInstance).Data + lVar7) == param_3) {
          TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,uVar8,Default);
          break;
        }
        iVar6 = this_00->ArrayNum;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar8 < iVar6);
    }
    iVar6 = this_00->ArrayNum;
    if (iVar6 == this_00->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this_00->AllocatorInstance,&this_00->ArrayMax);
      this_00->ArrayNum = iVar6;
    }
    this_00->ArrayNum = iVar6 + 1;
    lVar7 = (longlong)iVar6;
    pFVar1 = (this_00->AllocatorInstance).Data;
    *(FName *)(pFVar1 + lVar7 * 0x10) = param_3;
    *(float *)(pFVar1 + lVar7 * 0x10 + 8) = fVar11;
    *(float *)(pFVar1 + lVar7 * 0x10 + 0xc) = fVar11;
  }
  else {
    pFVar1 = (this_00->AllocatorInstance).Data;
    *(float *)(pFVar1 + 8) = fVar11;
    *(float *)(pFVar1 + 0xc) = fVar11;
  }
  return true;
}

// Track @ 141664c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<FString>::Track
          (FConsoleVariableHistory<FString> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  FName *pFVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  wchar_t *pwVar11;
  TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar12;
  uint uVar13;
  longlong lVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong *puVar18;
  EConsoleVariableFlags EVar19;
  FName *pFVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  undefined1 auStackY_108 [32];
  FString local_c8;
  EConsoleVariableFlags local_b8 [2];
  FString local_b0;
  FString local_a0;
  FString local_90;
  TConsoleVariableData<FString> local_80;
  undefined1 local_60 [16];
  ForAnyElementType local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong uVar14;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar16 = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  pwVar11 = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
  ::FString::operator=(&local_c8,pwVar11);
  EVar19 = param_2 & ECVF_SetByMask;
  local_b8[0] = EVar19;
  this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            ::Find(&this->History,EVar19);
  if (this_00 ==
      (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              ::Emplace<int>(&this->History,(int *)local_b8);
  }
  if (((param_2 >> 0x12 & 1) != 0) &&
     (iVar10 = this_00->ArrayNum, uVar14 = uVar16, uVar22 = uVar16, 0 < iVar10)) {
    do {
      uVar13 = (uint)uVar14;
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      FVar6.Data = local_c8.Data.AllocatorInstance.Data;
      pFVar20 = (FName *)((this_00->AllocatorInstance).Data + uVar22);
      if (*pFVar20 == param_3) {
        lVar15 = (longlong)local_c8.Data.ArrayNum;
        lVar12 = 2;
        local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.Data.ArrayNum = local_c8.Data.ArrayNum;
        if (local_c8.Data.ArrayNum == 0) {
          local_b0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_b0,
                     local_c8.Data.ArrayNum,&local_b0.Data.ArrayMax);
          memcpy(local_b0.Data.AllocatorInstance.Data,FVar6.Data,lVar15 * 2);
        }
        TConsoleVariableData<FString>::TConsoleVariableData<FString>(&local_80,&local_b0);
        pFVar1 = pFVar20 + 1;
        if (pFVar1 != (FName *)&local_80) {
          if (*pFVar1 != (FName)0x0) {
            FMemory::Free((void *)*pFVar1);
          }
          *pFVar1 = (FName)local_80.ShadowedValue[0].Data.AllocatorInstance.Data;
          pFVar20[2].ComparisonIndex.Value = local_80.ShadowedValue[0].Data.ArrayNum;
          pFVar20[2].Number = local_80.ShadowedValue[0].Data.ArrayMax;
          local_80.ShadowedValue[0].Data.ArrayNum = 0;
          local_80.ShadowedValue[0].Data.ArrayMax = 0;
          local_80.ShadowedValue[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        pFVar1 = pFVar20 + 3;
        if (pFVar1 != (FName *)(local_80.ShadowedValue + 1)) {
          if (*pFVar1 != (FName)0x0) {
            FMemory::Free((void *)*pFVar1);
          }
          *pFVar1 = (FName)local_80.ShadowedValue[1].Data.AllocatorInstance.Data;
          pFVar20[4].ComparisonIndex.Value = local_80.ShadowedValue[1].Data.ArrayNum;
          pFVar20[4].Number = local_80.ShadowedValue[1].Data.ArrayMax;
          local_80.ShadowedValue[1].Data.ArrayNum = 0;
          local_80.ShadowedValue[1].Data.ArrayMax = 0;
          local_80.ShadowedValue[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        puVar21 = local_60;
        do {
          puVar2 = (undefined8 *)(puVar21 + -0x10);
          puVar21 = puVar21 + -0x10;
          lVar12 = lVar12 + -1;
          if ((void *)*puVar2 != (void *)0x0) {
            FMemory::Free((void *)*puVar2);
          }
        } while (lVar12 != 0);
        bVar7 = uVar13 == this_00->ArrayNum - 1U;
        goto LAB_1416650d5;
      }
      iVar10 = this_00->ArrayNum;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar22 = uVar22 + 0x28;
    } while ((int)(uVar13 + 1) < iVar10);
  }
  FVar6.Data = local_c8.Data.AllocatorInstance.Data;
  if (((((EVar19 == ECVF_SetByPluginLowPriority) || (EVar19 == ECVF_SetByPluginHighPriority)) ||
       (EVar19 == ECVF_SetByHotfix)) ||
      ((EVar19 == ECVF_SetByDeviceProfile || (EVar19 == ECVF_SetByScalability)))) ||
     ((EVar19 == ECVF_SetByPreview || (this_00->ArrayNum < 1)))) {
    iVar10 = this_00->ArrayNum;
    uVar14 = uVar16;
    if (0 < iVar10) {
      do {
        uVar13 = (uint)uVar16;
        uVar9 = 0;
        if ((int)uVar13 < iVar10) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (*(FName *)((this_00->AllocatorInstance).Data + uVar14) == param_3) {
          TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,uVar13,Default);
          break;
        }
        iVar10 = this_00->ArrayNum;
        uVar16 = (ulonglong)(uVar13 + 1);
        uVar14 = uVar14 + 0x28;
      } while ((int)(uVar13 + 1) < iVar10);
    }
    iVar10 = this_00->ArrayNum;
    if (iVar10 == this_00->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&this_00->AllocatorInstance,&this_00->ArrayMax);
      this_00->ArrayNum = iVar10;
    }
    FVar6.Data = local_c8.Data.AllocatorInstance.Data;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->ArrayNum = iVar10 + 1;
    pFVar4 = (this_00->AllocatorInstance).Data;
    *(FName *)(pFVar4 + (longlong)iVar10 * 0x28) = param_3;
    lVar12 = (longlong)local_c8.Data.ArrayNum;
    local_90.Data.ArrayNum = local_c8.Data.ArrayNum;
    if (local_c8.Data.ArrayNum == 0) {
      local_90.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_90,local_c8.Data.ArrayNum,
                 &local_90.Data.ArrayMax);
      memcpy(local_90.Data.AllocatorInstance.Data,FVar6.Data,lVar12 * 2);
    }
    TConsoleVariableData<FString>::TConsoleVariableData<FString>
              ((TConsoleVariableData<FString> *)(pFVar4 + (longlong)iVar10 * 0x28 + 8),&local_90);
  }
  else {
    lVar15 = (longlong)local_c8.Data.ArrayNum;
    lVar12 = 2;
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = local_c8.Data.ArrayNum;
    if (local_c8.Data.ArrayNum == 0) {
      local_a0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_a0,local_c8.Data.ArrayNum,
                 &local_a0.Data.ArrayMax);
      memcpy(local_a0.Data.AllocatorInstance.Data,FVar6.Data,lVar15 * 2);
    }
    TConsoleVariableData<FString>::TConsoleVariableData<FString>
              ((TConsoleVariableData<FString> *)local_60,&local_a0);
    if ((this_00->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar4 = (this_00->AllocatorInstance).Data;
    pFVar17 = pFVar4 + 8;
    if (pFVar17 != (FScriptContainerElement *)local_60) {
      if (*(void **)pFVar17 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar17);
      }
      *(undefined8 *)pFVar17 = local_60._0_8_;
      local_60._0_8_ = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar4 + 0x10) = local_60._8_4_;
      *(undefined4 *)(pFVar4 + 0x14) = local_60._12_4_;
      local_60._8_4_ = 0;
      local_60._12_4_ = 0;
    }
    pFVar17 = pFVar4 + 0x18;
    if (pFVar17 != (FScriptContainerElement *)(local_60 + 0x10)) {
      if (*(void **)pFVar17 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar17);
      }
      *(FScriptContainerElement **)pFVar17 = local_50.Data;
      local_50.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar4 + 0x20) = (int)local_48;
      *(int *)(pFVar4 + 0x24) = local_48._4_4_;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
    }
    puVar18 = &local_40;
    do {
      puVar3 = puVar18 + -2;
      puVar18 = puVar18 + -2;
      lVar12 = lVar12 + -1;
      if ((void *)*puVar3 != (void *)0x0) {
        FMemory::Free((void *)*puVar3);
      }
    } while (lVar12 != 0);
  }
  bVar7 = true;
LAB_1416650d5:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// Track @ 141665140

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<bool>::Track
          (FConsoleVariableHistory<bool> *this,wchar_t *param_1,EConsoleVariableFlags param_2,
          FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *this_00;
  EConsoleVariableFlags EVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 local_res8;
  undefined2 local_res18;
  EConsoleVariableFlags local_38 [4];
  
  pwVar8 = UE::ConfigUtilities::ConvertValueFromHumanFriendlyValue(param_1);
  FVar3 = (FScriptContainerElement)FToBoolHelper::FromCStringWide(pwVar8);
  EVar9 = param_2 & ECVF_SetByMask;
  local_38[0] = EVar9;
  this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            ::Find(&this->History,EVar9);
  if (this_00 ==
      (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              ::Emplace<int>(&this->History,(int *)local_38);
  }
  if ((param_2 >> 0x12 & 1) != 0) {
    iVar7 = this_00->ArrayNum;
    uVar10 = 0;
    if (0 < iVar7) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < iVar7) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar1 = (this_00->AllocatorInstance).Data;
        if (*(FName *)(pFVar1 + lVar11) == param_3) {
          local_res18 = CONCAT11(FVar3,FVar3);
          *(undefined2 *)(pFVar1 + lVar11 + 8) = local_res18;
          return uVar10 == this_00->ArrayNum - 1U;
        }
        iVar7 = this_00->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0xc;
      } while ((int)uVar10 < iVar7);
    }
  }
  if (((((EVar9 == ECVF_SetByPluginLowPriority) || (EVar9 == ECVF_SetByPluginHighPriority)) ||
       (EVar9 == ECVF_SetByHotfix)) ||
      ((EVar9 == ECVF_SetByDeviceProfile || (EVar9 == ECVF_SetByScalability)))) ||
     ((EVar9 == ECVF_SetByPreview || (this_00->ArrayNum < 1)))) {
    iVar7 = this_00->ArrayNum;
    uVar10 = 0;
    if (0 < iVar7) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < iVar7) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (*(FName *)((this_00->AllocatorInstance).Data + lVar11) == param_3) {
          TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,uVar10,Default);
          break;
        }
        iVar7 = this_00->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0xc;
      } while ((int)uVar10 < iVar7);
    }
    iVar7 = this_00->ArrayNum;
    if (iVar7 == this_00->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&this_00->AllocatorInstance,&this_00->ArrayMax);
      this_00->ArrayNum = iVar7;
    }
    lVar11 = (longlong)iVar7;
    this_00->ArrayNum = iVar7 + 1;
    pFVar1 = (this_00->AllocatorInstance).Data;
    *(FName *)(pFVar1 + lVar11 * 0xc) = param_3;
    pFVar1[lVar11 * 0xc + 8] = FVar3;
    pFVar1[lVar11 * 0xc + 9] = FVar3;
  }
  else {
    local_res8 = CONCAT11(FVar3,FVar3);
    *(undefined2 *)((this_00->AllocatorInstance).Data + 8) = local_res8;
  }
  return true;
}

// Unset @ 141668360

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<int>::Unset
          (FConsoleVariableHistory<int> *this,EConsoleVariableFlags param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  EConsoleVariableFlags EVar6;
  int iVar7;
  
  EVar6 = param_1 & ECVF_SetByMask;
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if (pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    return false;
  }
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if ((pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_> *)0x0
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                               ,0x141,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = false;
  if (param_2 == (FName)0x0) {
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
  }
  else {
    if (((((EVar6 == ECVF_SetByPluginLowPriority) || (EVar6 == ECVF_SetByPluginHighPriority)) ||
         (EVar6 == ECVF_SetByHotfix)) ||
        ((EVar6 == ECVF_SetByDeviceProfile || (EVar6 == ECVF_SetByScalability)))) ||
       (EVar6 == ECVF_SetByPreview)) {
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < pTVar5->ArrayNum)); iVar7 = iVar7 + 1) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar7 * 0x10) == param_2) {
          bVar2 = true;
          TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (pTVar5,iVar7,Default);
          iVar7 = iVar7 + -1;
        }
      }
      if (pTVar5->ArrayNum != 0) {
        return bVar2;
      }
      goto LAB_1416684bf;
    }
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
    if (*(FName *)(pTVar5->AllocatorInstance).Data != param_2) {
      return false;
    }
  }
  bVar2 = true;
LAB_1416684bf:
  TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<int>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  ::Remove(&this->History,EVar6);
  return bVar2;
}

// Unset @ 1416684f0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<float>::Unset
          (FConsoleVariableHistory<float> *this,EConsoleVariableFlags param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  EConsoleVariableFlags EVar6;
  int iVar7;
  
  EVar6 = param_1 & ECVF_SetByMask;
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if (pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
                0x0) {
    return false;
  }
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if ((pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_> *)
                 0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = false;
  if (param_2 == (FName)0x0) {
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
  }
  else {
    if (((((EVar6 == ECVF_SetByPluginLowPriority) || (EVar6 == ECVF_SetByPluginHighPriority)) ||
         (EVar6 == ECVF_SetByHotfix)) ||
        ((EVar6 == ECVF_SetByDeviceProfile || (EVar6 == ECVF_SetByScalability)))) ||
       (EVar6 == ECVF_SetByPreview)) {
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < pTVar5->ArrayNum)); iVar7 = iVar7 + 1) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar7 * 0x10) == param_2) {
          bVar2 = true;
          TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (pTVar5,iVar7,Default);
          iVar7 = iVar7 + -1;
        }
      }
      if (pTVar5->ArrayNum != 0) {
        return bVar2;
      }
      goto LAB_14166864f;
    }
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
    if (*(FName *)(pTVar5->AllocatorInstance).Data != param_2) {
      return false;
    }
  }
  bVar2 = true;
LAB_14166864f:
  TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<float>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  ::Remove(&this->History,EVar6);
  return bVar2;
}

// Unset @ 141668680

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<FString>::Unset
          (FConsoleVariableHistory<FString> *this,EConsoleVariableFlags param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  EConsoleVariableFlags EVar6;
  int iVar7;
  
  EVar6 = param_1 & ECVF_SetByMask;
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if (pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *)
                0x0) {
    return false;
  }
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if ((pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_> *
                 )0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = false;
  if (param_2 == (FName)0x0) {
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
  }
  else {
    if (((((EVar6 == ECVF_SetByPluginLowPriority) || (EVar6 == ECVF_SetByPluginHighPriority)) ||
         (EVar6 == ECVF_SetByHotfix)) ||
        ((EVar6 == ECVF_SetByDeviceProfile || (EVar6 == ECVF_SetByScalability)))) ||
       (EVar6 == ECVF_SetByPreview)) {
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < pTVar5->ArrayNum)); iVar7 = iVar7 + 1) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar7 * 0x28) == param_2) {
          bVar2 = true;
          TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (pTVar5,iVar7,Default);
          iVar7 = iVar7 + -1;
        }
      }
      if (pTVar5->ArrayNum != 0) {
        return bVar2;
      }
      goto LAB_1416687e0;
    }
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
    if (*(FName *)(pTVar5->AllocatorInstance).Data != param_2) {
      return false;
    }
  }
  bVar2 = true;
LAB_1416687e0:
  TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<FString>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  ::Remove(&this->History,EVar6);
  return bVar2;
}

// Unset @ 141668810

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FConsoleVariableHistory<bool>::Unset
          (FConsoleVariableHistory<bool> *this,EConsoleVariableFlags param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *pTVar5;
  EConsoleVariableFlags EVar6;
  int iVar7;
  
  EVar6 = param_1 & ECVF_SetByMask;
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if (pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    return false;
  }
  pTVar5 = TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->History,EVar6);
  if ((pTVar5 == (TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_> *)
                 0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = false;
  if (param_2 == (FName)0x0) {
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
  }
  else {
    if (((((EVar6 == ECVF_SetByPluginLowPriority) || (EVar6 == ECVF_SetByPluginHighPriority)) ||
         (EVar6 == ECVF_SetByHotfix)) ||
        ((EVar6 == ECVF_SetByDeviceProfile || (EVar6 == ECVF_SetByScalability)))) ||
       (EVar6 == ECVF_SetByPreview)) {
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < pTVar5->ArrayNum)); iVar7 = iVar7 + 1) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar7 * 0xc) == param_2) {
          bVar2 = true;
          TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (pTVar5,iVar7,Default);
          iVar7 = iVar7 + -1;
        }
      }
      if (pTVar5->ArrayNum != 0) {
        return bVar2;
      }
      goto LAB_141668970;
    }
    if (pTVar5->ArrayNum < 1) {
      return false;
    }
    if (*(FName *)(pTVar5->AllocatorInstance).Data != param_2) {
      return false;
    }
  }
  bVar2 = true;
LAB_141668970:
  TSortedMap<int,TArray<TTuple<FName,TConsoleVariableData<bool>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  ::Remove(&this->History,EVar6);
  return bVar2;
}

