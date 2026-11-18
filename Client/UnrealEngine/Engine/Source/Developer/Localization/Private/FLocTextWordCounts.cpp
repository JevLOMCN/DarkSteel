// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 8

// AddRow @ 146b4fb60

FRowData * __thiscall FLocTextWordCounts::AddRow(FLocTextWordCounts *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FRowData *pFVar6;
  
  uVar4 = (this->Rows).ArrayNum;
  piVar1 = &(this->Rows).ArrayMax;
  if (uVar4 == *piVar1) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,(ForAnyElementType *)this,piVar1);
  }
  (this->Rows).ArrayNum = uVar4 + 1;
  DefaultConstructItems<FLocTextWordCounts::FRowData,int>
            ((this->Rows).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60,1);
  if (param_1 != (int *)0x0) {
    *param_1 = uVar4;
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->Rows).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRowData *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FRowData *)((this->Rows).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60);
}

// FromCSV @ 146b60240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FLocTextWordCounts::FromCSV(FLocTextWordCounts *this,FString *param_1,FText *param_2)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  FRowData *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  byte bVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  FLocTextWordCounts *pFVar22;
  uint *puVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [4];
  uint local_294;
  uint local_290;
  int local_28c;
  uint local_288;
  uint local_284;
  FLocTextWordCounts *local_280;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_278;
  longlong local_268;
  FCsvParser local_260;
  undefined1 local_230 [16];
  FScriptContainerElement *local_220;
  int *local_218;
  longlong *local_210;
  uint uStack_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  uint local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  FString local_1b0;
  FString local_1a0;
  longlong local_190;
  int *local_188;
  FFormatArgumentValue local_180;
  FTextFormat local_160;
  FText local_150;
  FString *local_140;
  uint *local_138;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FTextFormat local_e0;
  FTextFormat local_d0 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_280 = this;
  FCsvParser::FCsvParser(&local_260,param_1);
  iVar9 = local_260.Rows.ArrayNum;
  FVar5.Data = local_260.Rows.AllocatorInstance.Data;
  if (local_260.Rows.ArrayNum < 2) {
    if (param_2 != (FText *)0x0) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_130,L"LocTextHelper",L"Error_WordCountsFromCSV_TooFewRows",
                           L"Failed to parse the CSV string as it contained too few rows (expected at least 2, got {0})."
                          );
      pFVar11 = FTextFormat::FTextFormat(local_d0,pFVar10,Default);
      local_180.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar9;
      local_180.Type = Int;
      local_180.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_180.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_278.AllocatorInstance,1,&local_278.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_278.AllocatorInstance.Data,&local_180,1);
      local_160.TextFormatData.Object = (pFVar11->TextFormatData).Object;
      local_160.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar11->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_160.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_160.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_160.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_150,&local_160,&local_278);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
      if ((FFormatArgumentValue *)local_278.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
      if (local_180.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_180.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->TextFormatData).SharedReferenceCount.ReferenceController);
      FText::operator=(param_2,&local_150);
      if (local_150.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
      }
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
    }
    bVar7 = false;
    goto LAB_146b60bc0;
  }
  uVar21 = 0xffffffff;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  uVar19 = 0xffffffff;
  local_78 = (uint *)0x0;
  uVar24 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  iVar9 = *(int *)(local_260.Rows.AllocatorInstance.Data + 8);
  local_294 = 0;
  if (iVar9 < 1) {
LAB_146b60aee:
    if (param_2 != (FText *)0x0) {
      pFVar10 = FText::FromString(&local_100,&ColHeadingWordCount);
      pFVar12 = FText::FromString(&local_f0,&ColHeadingDateTime);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_110,L"LocTextHelper",L"Error_WordCountsFromCSV_InvalidHeader",
                           L"Failed to parse the CSV string as the header was missing one of the required rows (either \'{0}\' or \'{1}\')."
                          );
      pFVar11 = FTextFormat::FTextFormat(&local_e0,pFVar13,Default);
      pFVar10 = FText::Format<FText,FText>(&local_120,pFVar11,pFVar12,pFVar10);
      FText::operator=(param_2,pFVar10);
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
    }
    bVar7 = false;
  }
  else {
    do {
      uVar17 = local_294;
      uVar26 = uVar24;
      if ((int)local_294 < iVar9) {
        uVar26 = ~local_294 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pwVar16 = L"";
      if (ColHeadingDateTime.Data.ArrayNum != 0) {
        pwVar16 = (wchar_t *)ColHeadingDateTime.Data.AllocatorInstance.Data;
      }
      pwVar2 = *(wchar_t **)(*(longlong *)FVar5.Data + (longlong)(int)uVar17 * 8);
      iVar9 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar16);
      if ((iVar9 != 0) || (uVar17 = uVar19, uVar26 = local_294, uVar21 != 0xffffffff)) {
        pwVar16 = L"";
        if (ColHeadingWordCount.Data.ArrayNum != 0) {
          pwVar16 = (wchar_t *)ColHeadingWordCount.Data.AllocatorInstance;
        }
        iVar9 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar16);
        uVar26 = uVar21;
        if ((iVar9 != 0) || (uVar17 = local_294, uVar19 != 0xffffffff)) {
          ::FString::FString(&local_1b0,pwVar2);
          local_140 = &local_1b0;
          local_138 = &local_294;
          TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,int_const_&>_>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)local_98,(TPairInitializer<FString_&&,int_const_&> *)local_230,
                     (bool *)&local_140);
          uVar17 = uVar19;
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar21 = uVar26;
      uVar19 = uVar17;
      pFVar22 = local_280;
      iVar9 = *(int *)(FVar5.Data + 8);
      local_294 = local_294 + 1;
    } while ((int)local_294 < iVar9);
    local_288 = uVar21;
    local_284 = uVar19;
    if ((uVar21 == 0xffffffff) || (uVar19 == 0xffffffff)) goto LAB_146b60aee;
    uVar17 = local_260.Rows.ArrayNum - 1;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar20 = &(local_280->Rows).ArrayMax;
    pFVar3 = (FRowData *)(local_280->Rows).AllocatorInstance.Data;
    iVar9 = (local_280->Rows).ArrayNum;
    local_218 = piVar20;
    if (*piVar20 < (int)uVar17) {
      DestructItems<FLocTextWordCounts::FRowData,int>(pFVar3,iVar9);
      (pFVar22->Rows).ArrayNum = 0;
      if (*piVar20 != uVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,uVar17,(ForAnyElementType *)pFVar22,0,piVar20);
      }
    }
    else {
      DestructItems<FLocTextWordCounts::FRowData,int>(pFVar3,iVar9);
      (pFVar22->Rows).ArrayNum = 0;
    }
    local_290 = 1;
    if (1 < local_260.Rows.ArrayNum) {
      local_268 = 0x10;
      iVar9 = local_260.Rows.ArrayNum;
      do {
        lVar15 = local_268;
        uVar17 = uVar24;
        if ((int)local_290 < iVar9) {
          uVar17 = ~local_290 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar9 = local_260.Rows.ArrayNum, bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar25 = local_260.Rows.AllocatorInstance.Data + lVar15;
        if ((((-1 < (int)uVar21) && ((int)uVar21 < *(int *)(pFVar25 + 8))) && (-1 < (int)uVar19)) &&
           ((int)uVar19 < *(int *)(pFVar25 + 8))) {
          uVar17 = (pFVar22->Rows).ArrayNum;
          if (uVar17 == *piVar20) {
            uVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,(ForAnyElementType *)pFVar22,piVar20);
          }
          (pFVar22->Rows).ArrayNum = uVar17 + 1;
          DefaultConstructItems<FLocTextWordCounts::FRowData,int>
                    ((local_280->Rows).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x60,1);
          uVar26 = uVar24;
          if ((int)uVar17 < (local_280->Rows).ArrayNum) {
            uVar26 = ~uVar17 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar18 = (local_280->Rows).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x60;
          uVar17 = 0;
          uVar26 = uVar17;
          if ((int)uVar21 < *(int *)(pFVar25 + 8)) {
            uVar26 = ~uVar21 >> 0x1f;
          }
          local_220 = pFVar18;
          if ((uVar26 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          ::FString::FString(&local_1a0,
                             *(wchar_t **)(*(longlong *)pFVar25 + (longlong)(int)uVar21 * 8));
          FDateTime::Parse(&local_1a0,(FDateTime *)pFVar18);
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          uVar21 = uVar17;
          if ((int)uVar19 < *(int *)(pFVar25 + 8)) {
            uVar21 = ~uVar19 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar9 = _wtoi(*(wchar_t **)(*(longlong *)pFVar25 + (longlong)(int)uVar19 * 8));
          uVar26 = local_70;
          *(int *)&pFVar18[8].field_0x0 = iVar9;
          uStack_204 = 1;
          uStack_1f4 = 0;
          local_1f0 = uVar17;
          if (local_70 != 0) {
            puVar23 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar23 = local_78;
            }
            uVar19 = *puVar23;
            local_1f0 = 0;
            uVar17 = 0;
            while (uVar19 == 0) {
              lVar15 = (longlong)(int)uVar17;
              local_1f0 = local_1f0 + 0x20;
              uVar17 = uVar17 + 1;
              uStack_1f4 = local_70;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
              goto LAB_146b60880;
              uVar19 = (puVar23 + 1)[lVar15];
            }
            uStack_204 = -uVar19 & uVar19;
            uVar1 = (ulonglong)uStack_204 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_230._4_4_ = (undefined4)lVar15;
            uStack_1f4 = (local_1f0 - 1) + local_230._4_4_;
            if ((int)local_70 < (int)uStack_1f4) {
              uStack_1f4 = local_70;
            }
          }
LAB_146b60880:
          local_210 = (longlong *)local_98;
          uStack_1ec = local_a4;
          local_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          uVar19 = local_70 & 0xffffffe0;
          iStack_1e8 = local_98._8_4_ - local_64;
          TStack_1d8._padding_ = CONCAT44(uStack_204,uVar17);
          uStack_1f8 = 0xffffffff;
          TStack_1d8.CurrentBitIndex = uStack_1f4;
          TStack_1d8.UnvisitedBitMask = 0xffffffff;
          iVar9 = (int)local_70 >> 5;
          TStack_1d8._28_4_ = local_a4;
          TStack_1d8.BaseBitIndex = local_1f0;
          uStack_1b8 = CONCAT44(uStack_1e4,iStack_1e8);
          bVar14 = (byte)local_70;
          uStack_208 = uVar17;
          local_1e0 = local_210;
          TStack_1d8.Array = local_200;
          if (((int)local_70 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar18 = local_220;
          if (uVar26 != local_70) {
            puVar23 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar23 = local_78;
            }
            uVar21 = -1 << (bVar14 & 0x1f) & puVar23[iVar9];
            while (uVar21 == 0) {
              lVar15 = (longlong)iVar9;
              uVar19 = uVar19 + 0x20;
              iVar9 = iVar9 + 1;
              uVar26 = local_70;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
              goto LAB_146b609b0;
              uVar21 = (puVar23 + 1)[lVar15];
            }
            uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_230._8_4_ = (undefined4)lVar15;
            uVar26 = (uVar19 - 1) + local_230._8_4_;
            if ((int)local_70 < (int)uVar26) {
              uVar26 = local_70;
            }
          }
LAB_146b609b0:
          while( true ) {
            plVar6 = local_1e0;
            if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
              local_298[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_298);
            }
            if (((TStack_1d8.CurrentBitIndex == uVar26) &&
                (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
               (lVar15 = local_268, piVar20 = local_218, pFVar22 = local_280, uVar19 = local_284,
               uVar21 = local_288, iVar9 = local_260.Rows.ArrayNum, plVar6 == (longlong *)local_98))
            break;
            lVar15 = (longlong)TStack_1d8.CurrentBitIndex * 0x20 + *plVar6;
            iVar9 = *(int *)(lVar15 + 0x10);
            if ((-1 < iVar9) && (iVar9 < *(int *)(pFVar25 + 8))) {
              local_28c = 0;
              if ((iVar9 < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              local_28c = _wtoi(*(wchar_t **)(*(longlong *)pFVar25 + (longlong)iVar9 * 8));
              local_188 = &local_28c;
              local_190 = lVar15;
              TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                        ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          *)(pFVar18 + 0x10),
                         (TPairInitializer<FString_const_&,int_const_&> *)(local_230 + 0xc),
                         (bool *)&local_190);
            }
            TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
          }
        }
        local_290 = local_290 + 1;
        local_268 = lVar15 + 0x10;
      } while ((int)local_290 < iVar9);
    }
    bVar7 = true;
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
LAB_146b60bc0:
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_260.Rows.AllocatorInstance.Data,local_260.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_260.Rows.AllocatorInstance.Data
      != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_260.Rows.AllocatorInstance.Data);
  }
  if (local_260.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.SourceString.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// GetRow @ 146b76b90

FRowData * __thiscall FLocTextWordCounts::GetRow(FLocTextWordCounts *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FRowData *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->Rows).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRowData *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FRowData *)((this->Rows).AllocatorInstance.Data + (longlong)param_1 * 0x60);
  }
  return (FRowData *)0x0;
}

// GetRow @ 146b76c10

FRowData * __thiscall FLocTextWordCounts::GetRow(FLocTextWordCounts *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FRowData *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->Rows).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FRowData *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FRowData *)((this->Rows).AllocatorInstance.Data + (longlong)param_1 * 0x60);
  }
  return (FRowData *)0x0;
}

// GetRowCount @ 146b76c90

int __thiscall FLocTextWordCounts::GetRowCount(FLocTextWordCounts *this)

{
  return (this->Rows).ArrayNum;
}

// SortRowsByDate @ 146b88fd0

void __thiscall FLocTextWordCounts::SortRowsByDate(FLocTextWordCounts *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FLocTextWordCounts::FRowData,int,FIdentityFunctor,TDereferenceWrapper<FLocTextWordCounts::FRowData,_FLocTextWordCounts::SortRowsByDate_::__l2::<lambda_1>_>_>
            ((FRowData *)(this->Rows).AllocatorInstance.Data,(this->Rows).ArrayNum,local_res8[0],
             (<lambda_1> *)local_res8);
  return;
}

// ToCSV @ 146b8d680

FString * __thiscall
FLocTextWordCounts::ToCSV(FLocTextWordCounts *this,FString *__return_storage_ptr__)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FString *pFVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  FIdentityFunctor local_res8;
  FScriptContainerElement *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134 [4];
  TArray<FString,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  FScriptContainerElement *local_118;
  int local_110;
  int local_10c;
  FScriptContainerElement *local_108;
  FString local_100;
  FString local_f0;
  FScriptContainerElement *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  FScriptContainerElement *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FString local_80 [2];
  undefined4 local_54;
  
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FLocTextWordCounts::FRowData,int,FIdentityFunctor,TDereferenceWrapper<FLocTextWordCounts::FRowData,_FLocTextWordCounts::SortRowsByDate_::__l2::<lambda_1>_>_>
            ((FRowData *)(this->Rows).AllocatorInstance.Data,(this->Rows).ArrayNum,local_res8,
             (<lambda_1> *)&local_138);
  local_120 = (this->Rows).ArrayNum;
  uVar6 = (ulonglong)(int)local_120;
  pFVar9 = (this->Rows).AllocatorInstance.Data;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  pFVar13 = pFVar9 + 0x30;
  local_108 = pFVar9 + uVar6 * 0x60;
  do {
    pFVar3 = local_108;
    local_118 = pFVar9;
    if ((this->Rows).ArrayNum != (int)uVar6) {
      local_res18 = (FScriptContainerElement *)((ulonglong)local_res18 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FLocTextWordCounts::FRowData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    uVar14 = 0;
    if (pFVar9 == pFVar3) {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_130.AllocatorInstance.Data,local_130.ArrayNum,local_res8,
                 (TLess<void> *)&local_137);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      uVar12 = ColHeadingDateTime.Data.ArrayNum - 1;
      if (ColHeadingDateTime.Data.ArrayNum == 0) {
        uVar12 = uVar14;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)ColHeadingDateTime.Data.AllocatorInstance.Data,
                 uVar12);
      ::FString::AppendChars(__return_storage_ptr__,L",",1);
      uVar12 = ColHeadingWordCount.Data.ArrayNum - 1;
      if (ColHeadingWordCount.Data.ArrayNum == 0) {
        uVar12 = uVar14;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)ColHeadingWordCount.Data.AllocatorInstance.Data,
                 uVar12);
      iVar8 = local_130.ArrayNum;
      uVar6 = (ulonglong)local_130.ArrayNum;
      pFVar13 = local_130.AllocatorInstance.Data + uVar6 * 0x10;
      FVar10.Data = local_130.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar6 != iVar8) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_136);
        }
        if (FVar10.Data == pFVar13) break;
        ::FString::AppendChars(__return_storage_ptr__,L",",1);
        uVar12 = *(int *)(FVar10.Data + 8) - 1;
        if (*(int *)(FVar10.Data + 8) == 0) {
          uVar12 = uVar14;
        }
        ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar10.Data,uVar12);
        uVar6 = local_130._8_8_ & 0xffffffff;
        FVar10.Data = FVar10.Data + 0x10;
      }
      ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
      uVar14 = (this->Rows).ArrayNum;
      uVar6 = (ulonglong)(int)uVar14;
      pFVar13 = (this->Rows).AllocatorInstance.Data;
      local_res18 = pFVar13 + uVar6 * 0x60;
      while( true ) {
        pFVar9 = local_res18;
        if ((this->Rows).ArrayNum != (int)uVar6) {
          `TCheckedPointerIterator<FLocTextWordCounts::FRowData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_135);
        }
        if (pFVar13 == pFVar9) break;
        pFVar5 = FDateTime::ToString((FDateTime *)pFVar13,local_80);
        iVar15 = (pFVar5->Data).ArrayNum;
        iVar8 = iVar15 + -1;
        if (iVar15 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
        if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(__return_storage_ptr__,L",",1);
        ::FString::PrintfImpl(&local_100,L"%d");
        iVar8 = local_100.Data.ArrayNum + -1;
        if (local_100.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_100.Data.AllocatorInstance.Data,iVar8);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        iVar8 = local_130.ArrayNum;
        uVar6 = (ulonglong)local_130.ArrayNum;
        pFVar9 = local_130.AllocatorInstance.Data + uVar6 * 0x10;
        FVar10.Data = local_130.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar6 != iVar8) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_134);
          }
          if (FVar10.Data == pFVar9) break;
          TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
          Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                *)(pFVar13 + 0x10),(FString *)FVar10.Data);
          ::FString::AppendChars(__return_storage_ptr__,L",",1);
          ::FString::PrintfImpl(&local_f0,L"%d");
          iVar15 = local_f0.Data.ArrayNum + -1;
          if (local_f0.Data.ArrayNum == 0) {
            iVar15 = 0;
          }
          ::FString::AppendChars
                    (__return_storage_ptr__,(wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar15);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          uVar6 = local_130._8_8_ & 0xffffffff;
          FVar10.Data = FVar10.Data + 0x10;
        }
        ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
        uVar6 = (ulonglong)uVar14;
        pFVar13 = pFVar13 + 0x60;
      }
      DestructItems<FString,int>((FString *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
      if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    uStack_d4 = 1;
    uVar12 = *(uint *)(pFVar13 + 8);
    uStack_c4 = uVar14;
    local_c0 = uVar14;
    if (uVar12 != 0) {
      pFVar9 = *(FScriptContainerElement **)pFVar13;
      if (*(FScriptContainerElement **)pFVar13 == (FScriptContainerElement *)0x0) {
        pFVar9 = pFVar13 + -0x10;
      }
      uVar11 = *(uint *)pFVar9;
      local_c0 = 0;
      uVar14 = 0;
      while (uVar11 == 0) {
        lVar7 = (longlong)(int)uVar14;
        local_c0 = local_c0 + 0x20;
        uVar14 = uVar14 + 1;
        uStack_c4 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_146b8d790;
        uVar11 = *(uint *)(pFVar9 + (lVar7 + 1) * 4);
      }
      uStack_d4 = -uVar11 & uVar11;
      uVar6 = (ulonglong)uStack_d4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_110 = (int)lVar7;
      uStack_c4 = (local_c0 - 1) + local_110;
      if ((int)uVar12 < (int)uStack_c4) {
        uStack_c4 = uVar12;
      }
    }
LAB_146b8d790:
    pFVar9 = pFVar13 + -0x20;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar13 + -0x10);
    uStack_bc = local_54;
    iStack_b8 = *(int *)(pFVar13 + -0x18) - *(int *)(pFVar13 + 0x14);
    uVar11 = uVar12 & 0xffffffe0;
    TStack_a8._padding_ = CONCAT44(uStack_d4,uVar14);
    uStack_c8 = 0xffffffff;
    TStack_a8.CurrentBitIndex = uStack_c4;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    TStack_a8._28_4_ = local_54;
    TStack_a8.BaseBitIndex = local_c0;
    uStack_88 = CONCAT44(uStack_b4,iStack_b8);
    iVar8 = (int)uVar12 >> 5;
    local_e0 = pFVar9;
    uStack_d8 = uVar14;
    local_d0 = pTVar1;
    local_b0 = pFVar9;
    TStack_a8.Array = pTVar1;
    if (((int)uVar12 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    uVar14 = *(uint *)(pFVar13 + 8);
    if (uVar12 != uVar14) {
      pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar13;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar13 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = pTVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) &
               *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
      while (uVar12 == 0) {
        lVar7 = (longlong)iVar8;
        uVar11 = uVar11 + 0x20;
        iVar8 = iVar8 + 1;
        uVar12 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_146b8d8a0;
        uVar12 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uVar6 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_10c = (int)lVar7;
      uVar12 = local_10c + -1 + uVar11;
      if ((int)uVar14 < (int)uVar12) {
        uVar12 = uVar14;
      }
    }
LAB_146b8d8a0:
    while( true ) {
      pFVar3 = local_b0;
      if (*(int *)(local_b0 + 8) - *(int *)(local_b0 + 0x34) != (int)uStack_88) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_a8.CurrentBitIndex == uVar12) && (TStack_a8.Array == pTVar1)) &&
         (pFVar3 == pFVar9)) break;
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&local_130,
                 (FString *)((longlong)TStack_a8.CurrentBitIndex * 0x20 + *(longlong *)pFVar3));
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    pFVar13 = pFVar13 + 0x60;
    pFVar9 = local_118 + 0x60;
    uVar6 = (ulonglong)local_120;
  } while( true );
}

// TrimReport @ 146b8fa40

void __thiscall FLocTextWordCounts::TrimReport(FLocTextWordCounts *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  FIdentityFunctor local_res8 [8];
  uint local_res10;
  
  AlgoImpl::
  IntroSortInternal<FLocTextWordCounts::FRowData,int,FIdentityFunctor,TDereferenceWrapper<FLocTextWordCounts::FRowData,_FLocTextWordCounts::SortRowsByDate_::__l2::<lambda_1>_>_>
            ((FRowData *)(this->Rows).AllocatorInstance.Data,(this->Rows).ArrayNum,local_res8[0],
             (<lambda_1> *)local_res8);
  iVar5 = (this->Rows).ArrayNum;
  uVar8 = 1;
  if (1 < iVar5) {
    lVar11 = 1;
    lVar12 = 0x60;
    do {
      uVar6 = uVar8 - 1;
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res10 = ~uVar8;
      pFVar7 = (this->Rows).AllocatorInstance.Data;
      uVar9 = local_res10 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < (this->Rows).ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FRowData::IdenticalWordCounts
                        ((FRowData *)(pFVar7 + (longlong)(int)uVar6 * 0x60),
                         (FRowData *)((this->Rows).AllocatorInstance.Data + lVar12));
      lVar10 = lVar11;
      if (bVar3) {
        lVar10 = lVar11 + -1;
        lVar12 = lVar12 + -0x60;
        uVar4 = 0;
        if ((int)uVar8 < (this->Rows).ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar7 = (this->Rows).AllocatorInstance.Data + lVar11 * 0x60;
        *(undefined4 *)(pFVar7 + 0x58) = 0;
        if (*(void **)(pFVar7 + 0x50) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar7 + 0x50));
        }
        TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(pFVar7 + 0x10));
        iVar5 = local_res10 + (this->Rows).ArrayNum;
        if (iVar5 != 0) {
          memmove(pFVar7,pFVar7 + 0x60,(longlong)iVar5 * 0x60);
        }
        piVar1 = &(this->Rows).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar8 = uVar6;
      }
      iVar5 = (this->Rows).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar11 = lVar10 + 1;
      lVar12 = lVar12 + 0x60;
    } while ((int)uVar8 < iVar5);
  }
  return;
}

