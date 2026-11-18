// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 4

// FWordCountCSVParser @ 146b435c0

/* WARNING: Removing unreachable block (ram,0x000146b436bb) */
/* WARNING: Removing unreachable block (ram,0x000146b43798) */

FWordCountCSVParser * __thiscall
_anon_C0D83FF9::FWordCountCSVParser::FWordCountCSVParser
          (FWordCountCSVParser *this,FLocalizationTargetSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FWordCountCSVParser *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_28;
  FString local_18;
  
  (this->MandatoryColumnNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MandatoryColumnNames).ArrayNum = 0;
  (this->MandatoryColumnNames).ArrayMax = 0;
  (this->CultureNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CultureNames).ArrayNum = 0;
  (this->CultureNames).ArrayMax = 0;
  ::FString::FString(&local_28,L"Date/Time");
  pFVar5 = (this->MandatoryColumnNames).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar5 + (longlong)(this->MandatoryColumnNames).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWordCountCSVParser *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->MandatoryColumnNames).ArrayNum;
  if (iVar3 == (this->MandatoryColumnNames).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->MandatoryColumnNames).ArrayMax);
  }
  (this->MandatoryColumnNames).ArrayNum = iVar3 + 1;
  pFVar5 = (this->MandatoryColumnNames).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_18,L"Word Count");
  pFVar5 = (this->MandatoryColumnNames).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar5 + (longlong)(this->MandatoryColumnNames).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWordCountCSVParser *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->MandatoryColumnNames).ArrayNum;
  if (iVar3 == (this->MandatoryColumnNames).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->MandatoryColumnNames).ArrayMax);
  }
  (this->MandatoryColumnNames).ArrayNum = iVar3 + 1;
  pFVar5 = (this->MandatoryColumnNames).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return this;
}

// Execute @ 146b57c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
_anon_C0D83FF9::FWordCountCSVParser::Execute(FLocalizationTargetSettings *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  FString local_e0;
  FWordCountCSVParser local_d0;
  FCsvParser local_b0;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar4 = FFileHelper::LoadFileToString(&local_e0,pwVar10,None,0);
  if (bVar4) {
    FCsvParser::FCsvParser(&local_b0,&local_e0);
    FWordCountCSVParser(&local_d0,param_1);
    if ((local_b0.Rows.ArrayNum < 1) ||
       (bVar4 = ParseHeaderRow(&local_d0,
                               (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                               local_b0.Rows.AllocatorInstance.Data), !bVar4)) {
      bVar4 = false;
    }
    else {
      local_78.Elements._0_8_ = 0;
      local_78.Elements._8_8_ = 0;
      local_78.Elements._32_8_ = 0;
      uVar12 = local_b0.Rows.ArrayNum - 1;
      local_78.Elements._40_4_ = 0;
      local_78.Elements._44_4_ = 0x80;
      local_78.Elements._48_4_ = 0xffffffff;
      local_78.Elements._52_4_ = 0;
      local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      uVar6 = 0;
      if ((int)uVar12 < local_b0.Rows.ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      local_78.HashSize = 0;
      if (uVar6 == 0) {
        local_f8 = (longlong)(int)uVar12;
        local_f0 = (longlong)local_b0.Rows.ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      bVar4 = ParseWordCountRow(&local_d0,
                                (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                                (local_b0.Rows.AllocatorInstance.Data +
                                (longlong)(local_b0.Rows.ArrayNum + -1) * 0x10),
                                (TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                                 *)&local_78);
      if (bVar4) {
        pFVar11 = (param_1->SupportedCulturesStatistics).AllocatorInstance.Data;
        iVar2 = (param_1->SupportedCulturesStatistics).ArrayNum;
        pFVar1 = pFVar11 + (longlong)iVar2 * 0x18;
        while( true ) {
          if ((param_1->SupportedCulturesStatistics).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FCultureStatistics,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_e8);
          }
          if (pFVar11 == pFVar1) break;
          iVar7 = *(int *)(pFVar11 + 8) + -1;
          if (*(int *)(pFVar11 + 8) == 0) {
            pwVar10 = L"";
            iVar7 = 0;
          }
          else {
            pwVar10 = *(wchar_t **)pFVar11;
          }
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
          iVar7 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>(&local_78,uVar6,(FString *)pFVar11);
          if (iVar7 != -1) {
            lVar8 = (longlong)iVar7 * 0x20 + local_78.Elements._0_8_;
            puVar9 = (undefined4 *)(lVar8 + 0x10);
            if (lVar8 == 0) {
              puVar9 = (undefined4 *)0x0;
            }
            if (puVar9 != (undefined4 *)0x0) {
              *(undefined4 *)&pFVar11[0x10].field_0x0 = *puVar9;
            }
          }
          pFVar11 = pFVar11 + 0x18;
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      local_78.HashSize = 0;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_78.Elements);
    }
    DestructItems<FString,int>
              ((FString *)local_d0.CultureNames.AllocatorInstance.Data,
               local_d0.CultureNames.ArrayNum);
    if (local_d0.CultureNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.CultureNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_d0.MandatoryColumnNames.AllocatorInstance.Data,
               local_d0.MandatoryColumnNames.ArrayNum);
    if (local_d0.MandatoryColumnNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.MandatoryColumnNames.AllocatorInstance.Data);
    }
    DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
              ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
               local_b0.Rows.AllocatorInstance.Data,local_b0.Rows.ArrayNum);
    if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_b0.Rows.AllocatorInstance.Data
        != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_b0.Rows.AllocatorInstance.Data);
    }
    if (local_b0.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.SourceString.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = false;
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// ParseHeaderRow @ 146b81090

/* WARNING: Removing unreachable block (ram,0x000146b81329) */

bool __thiscall
_anon_C0D83FF9::FWordCountCSVParser::ParseHeaderRow
          (FWordCountCSVParser *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar12;
  longlong lVar13;
  FString local_48;
  FString local_38;
  ulonglong uVar11;
  
  iVar6 = param_1->ArrayNum;
  uVar8 = (this->MandatoryColumnNames).ArrayNum;
  if (iVar6 < (int)uVar8) {
LAB_146b81346:
    bVar3 = false;
  }
  else {
    uVar9 = 0;
    uVar11 = uVar9;
    uVar12 = uVar9;
    if (0 < (int)uVar8) {
      do {
        uVar10 = (uint)uVar11;
        uVar5 = 0;
        if ((int)uVar10 < (int)uVar8) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar7 = (this->MandatoryColumnNames).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        ::FString::FString(&local_38,*(wchar_t **)((param_1->AllocatorInstance).Data + uVar9 * 8));
        FVar2.Data = local_38.Data.AllocatorInstance.Data;
        iVar6 = *(int *)(pFVar7 + uVar12 + 8);
        if (iVar6 == local_38.Data.ArrayNum) {
          if (iVar6 < 2) {
            bVar3 = false;
          }
          else {
            iVar6 = wcscmp(*(wchar_t **)(pFVar7 + uVar12),
                           (wchar_t *)local_38.Data.AllocatorInstance.Data);
            bVar3 = iVar6 != 0;
          }
        }
        else {
          bVar3 = iVar6 + local_38.Data.ArrayNum != 1;
        }
        if (FVar2.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar2.Data);
        }
        if (bVar3) goto LAB_146b81346;
        uVar8 = (this->MandatoryColumnNames).ArrayNum;
        uVar9 = uVar9 + 1;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 0x10;
      } while ((int)(uVar10 + 1) < (int)uVar8);
      iVar6 = param_1->ArrayNum;
    }
    if ((int)uVar8 < iVar6) {
      lVar13 = (longlong)(int)uVar8 * 8;
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
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        ::FString::FString(&local_48,*(wchar_t **)((param_1->AllocatorInstance).Data + lVar13));
        pFVar7 = (this->CultureNames).AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar7 + (longlong)(this->CultureNames).ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        iVar6 = (this->CultureNames).ArrayNum;
        if (iVar6 == (this->CultureNames).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->CultureNames).AllocatorInstance,
                             &(this->CultureNames).ArrayMax);
        }
        (this->CultureNames).ArrayNum = iVar6 + 1;
        pFVar7 = (this->CultureNames).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_48.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        iVar6 = param_1->ArrayNum;
        uVar8 = uVar8 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar8 < iVar6);
    }
    bVar3 = true;
  }
  return bVar3;
}

// ParseWordCountRow @ 146b816c0

bool __thiscall
_anon_C0D83FF9::FWordCountCSVParser::ParseWordCountRow
          (FWordCountCSVParser *this,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FDateTime local_res8;
  FString local_38;
  
  if (param_1->ArrayNum == (this->CultureNames).ArrayNum + (this->MandatoryColumnNames).ArrayNum) {
    local_res8.Ticks = 0;
    if ((param_1->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::FString(&local_38,*(wchar_t **)(param_1->AllocatorInstance).Data);
    bVar2 = FDateTime::Parse(&local_38,&local_res8);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      iVar7 = (this->MandatoryColumnNames).ArrayNum;
      uVar11 = (ulonglong)iVar7;
      iVar8 = param_1->ArrayNum;
      if (iVar7 < iVar8) {
        lVar14 = uVar11 * 8;
        do {
          uVar10 = (uint)uVar11;
          uVar5 = 0;
          if ((int)uVar10 < iVar8) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          uVar4 = _wtoi(*(wchar_t **)((param_1->AllocatorInstance).Data + lVar14));
          uVar12 = uVar10 - (this->MandatoryColumnNames).ArrayNum;
          uVar5 = 0;
          if ((int)uVar12 < (this->CultureNames).ArrayNum) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar13 = (this->CultureNames).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
          iVar7 = *(int *)(pFVar13 + 8) + -1;
          if (*(int *)(pFVar13 + 8) == 0) {
            pwVar9 = L"";
            iVar7 = 0;
          }
          else {
            pwVar9 = *(wchar_t **)&pFVar13->field_0x0;
          }
          uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
          puVar6 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                   ::FindOrAddImpl<FString_const_&>
                             ((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                               *)param_2,uVar5,(FString *)pFVar13);
          uVar11 = (ulonglong)(uVar10 + 1);
          lVar14 = lVar14 + 8;
          *puVar6 = uVar4;
          iVar8 = param_1->ArrayNum;
        } while ((int)(uVar10 + 1) < iVar8);
      }
      return true;
    }
  }
  return false;
}

