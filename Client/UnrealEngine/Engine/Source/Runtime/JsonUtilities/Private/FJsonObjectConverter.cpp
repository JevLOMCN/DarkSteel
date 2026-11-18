// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: JsonUtilities
// Functions: 11

// GetTextFromField @ 14462d5e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
FJsonObjectConverter::GetTextFromField
          (FString *param_1,TSharedPtr<FJsonValue,1> *param_2,FText *param_3)

{
  EJson EVar1;
  double dVar2;
  bool bVar3;
  FJsonValue *pFVar4;
  TSharedPtr<FJsonObject,1> *this;
  TSharedRef<FJsonObject,1> *pTVar5;
  FText *pFVar6;
  FString *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  wchar_t *pwVar9;
  FDateTime local_res10;
  TSharedPtr<FCulture,1> local_48;
  TSharedPtr<FCulture,1> local_38;
  FText local_28;
  
  if (param_2->Object != (FJsonValue *)0x0) {
    EVar1 = param_2->Object->Type;
    if (EVar1 == String) {
      bVar3 = ::FString::StartsWith(param_1,L"date-",5,IgnoreCase);
      if (bVar3) {
        local_res10.Ticks = 0;
        pFVar4 = TSharedPtr<FJsonValue,1>::operator->(param_2);
        pFVar7 = FJsonValue::AsString(pFVar4,(FString *)&local_38);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        bVar3 = FDateTime::ParseIso8601(pwVar9,&local_res10);
        if (local_38.Object != (FCulture *)0x0) {
          FMemory::Free(local_38.Object);
        }
        if (!bVar3) {
          return false;
        }
        local_48.Object = (FCulture *)0x0;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_38.Object = (FCulture *)0x0;
        local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar6 = FText::AsDate(&local_28,&local_res10,Default,(FString *)&local_48,&local_38);
      }
      else {
        bVar3 = ::FString::StartsWith(param_1,L"datetime-",9,IgnoreCase);
        if (!bVar3) {
          pFVar4 = TSharedPtr<FJsonValue,1>::operator->(param_2);
          pFVar7 = FJsonValue::AsString(pFVar4,(FString *)&local_38);
          pFVar6 = FText::FromString(&local_28,pFVar7);
          FText::operator=(param_3,pFVar6);
          if (local_28.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
          }
          if (local_38.Object == (FCulture *)0x0) {
            return true;
          }
          FMemory::Free(local_38.Object);
          return true;
        }
        local_res10.Ticks = 0;
        pFVar4 = TSharedPtr<FJsonValue,1>::operator->(param_2);
        pFVar7 = FJsonValue::AsString(pFVar4,(FString *)&local_28);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        bVar3 = FDateTime::ParseIso8601(pwVar9,&local_res10);
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_28.TextData.Reference);
        }
        if (!bVar3) {
          return false;
        }
        local_48.Object = (FCulture *)0x0;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_38.Object = (FCulture *)0x0;
        local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar6 = FText::AsDateTime(&local_28,&local_res10,Default,Default,(FString *)&local_48,
                                   &local_38);
      }
      FText::operator=(param_3,pFVar6);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      if (local_48.Object != (FCulture *)0x0) {
        FMemory::Free(local_48.Object);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return true;
    }
    if (EVar1 == Number) {
      local_48.Object = (FCulture *)0x0;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar4 = TSharedPtr<FJsonValue,1>::operator->(param_2);
      dVar2 = FJsonValue::AsNumber(pFVar4);
      pFVar6 = FText::AsNumber((FText *)&local_38,dVar2,(FNumberFormattingOptions *)0x0,&local_48);
      FText::operator=(param_3,pFVar6);
      if (local_38.Object != (FCulture *)0x0) {
        (**(code **)((((local_38.Object)->Implementation).Ptr)->ICULocale).language)();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return true;
    }
    if (EVar1 == Object) {
      pFVar4 = TSharedPtr<FJsonValue,1>::operator->(param_2);
      this = (TSharedPtr<FJsonObject,1> *)(**(code **)pFVar4->_padding_)(pFVar4);
      pTVar5 = TSharedPtr<FJsonObject,1>::ToSharedRef(this,(TSharedRef<FJsonObject,1> *)&local_38);
      bVar3 = GetTextFromObject(pTVar5,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (bVar3) {
        return true;
      }
      if ((byte)LogJson._0_1_ < 2) {
        return false;
      }
      pFVar8 = &::LOG_Static;
    }
    else {
      if ((byte)LogJson._0_1_ < 2) {
        return false;
      }
      pFVar8 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogJson);
  }
  return false;
}

// GetTextFromObject @ 14462d910

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
FJsonObjectConverter::GetTextFromObject(TSharedRef<FJsonObject,1> *param_1,FText *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FCulture *this;
  short *psVar3;
  FJsonObject *pFVar4;
  uint *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  code *pcVar8;
  FJsonObject *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  FInternationalization *pFVar12;
  FText *pFVar13;
  ulonglong uVar14;
  FString *pFVar15;
  short *psVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  int iVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TReferenceControllerBase<1> *pTVar27;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_160;
  uint local_150;
  TReferenceControllerBase<1> *local_148;
  FString local_140;
  int local_130;
  int local_12c;
  FScriptContainerElement *local_128;
  FJsonObject *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FJsonObject *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  FText local_98;
  FText local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  pFVar12 = FInternationalization::Get();
  if (((pFVar12->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pTVar27 = (pFVar12->CurrentLanguage).SharedReferenceCount.ReferenceController;
  this = (pFVar12->CurrentLanguage).Object;
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_148 = pTVar27;
  if ((this == (FCulture *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  FCulture::GetPrioritizedParentCultureNames(this,&local_160);
  iVar24 = local_160.ArrayNum;
  pFVar23 = local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 0x10;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  FVar20.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if (local_160.ArrayNum != iVar24) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar20.Data == pFVar23) break;
    local_b8 = *(wchar_t **)FVar20.Data;
    iStack_b0 = *(int *)(FVar20.Data + 8) + -1;
    if (*(int *)(FVar20.Data + 8) == 0) {
      iStack_b0 = 0;
    }
    local_a8._12_4_ = uStack_ac;
    local_a8.Size = iStack_b0;
    local_a8.DataPtr = local_b8;
    bVar10 = FJsonObject::TryGetStringField(param_1->Object,&local_a8,&local_140);
    if (bVar10) {
      pFVar13 = FText::FromString(&local_98,&local_140);
      FText::operator=(param_2,pFVar13);
      if (local_98.TextData.Reference == (ITextData *)0x0) {
LAB_14462ddc8:
        bVar10 = true;
      }
      else {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        bVar10 = true;
      }
LAB_14462ddd3:
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
      if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
      return bVar10;
    }
    FVar20.Data = FVar20.Data + 0x10;
  }
  uVar14 = (ulonglong)local_160.ArrayNum;
  pFVar23 = local_160.AllocatorInstance.Data + uVar14 * 0x10;
  local_150 = local_160.ArrayNum;
  FVar20.Data = local_160.AllocatorInstance.Data;
  local_128 = pFVar23;
  while( true ) {
    if (local_160.ArrayNum != (uint)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar20.Data == pFVar23) break;
    psVar3 = *(short **)FVar20.Data;
    for (psVar16 = psVar3; psVar16 != psVar3 + *(int *)(FVar20.Data + 8); psVar16 = psVar16 + 1) {
      if (*psVar16 == 0x2d) {
        if ((int)((longlong)psVar16 - (longlong)psVar3 >> 1) != -1) goto LAB_14462dd45;
        break;
      }
    }
    pFVar4 = param_1->Object;
    iStack_118 = 0;
    iVar24 = *(int *)&(pFVar4->Values).field_0x28;
    local_110 = &(pFVar4->Values).field_0x10;
    uStack_114 = 1;
    local_100 = 0;
    iStack_104 = iStack_118;
    if (iVar24 != 0) {
      puVar5 = *(uint **)&(pFVar4->Values).field_0x20;
      puVar26 = (uint *)local_110;
      if (puVar5 != (uint *)0x0) {
        puVar26 = puVar5;
      }
      uVar22 = *puVar26;
      local_100 = 0;
      iStack_118 = 0;
      while (uVar22 == 0) {
        lVar17 = (longlong)iStack_118;
        local_100 = local_100 + 0x20;
        iStack_118 = iStack_118 + 1;
        iStack_104 = iVar24;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118)
        goto LAB_14462db6f;
        uVar22 = puVar26[lVar17 + 1];
      }
      uStack_114 = -uVar22 & uVar22;
      uVar14 = (ulonglong)uStack_114 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_130 = (int)lVar17;
      iStack_104 = local_100 + -1 + local_130;
      if (iVar24 < iStack_104) {
        iStack_104 = iVar24;
      }
    }
LAB_14462db6f:
    uVar22 = *(uint *)&(pFVar4->Values).field_0x28;
    puVar1 = &(pFVar4->Values).field_0x10;
    uStack_fc = local_4c;
    iStack_f8 = *(int *)&(pFVar4->Values).field_0x8 - *(int *)&(pFVar4->Values).field_0x34;
    uVar21 = uVar22 & 0xffffffe0;
    TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
    uStack_108 = 0xffffffff;
    TStack_e8.CurrentBitIndex = iStack_104;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar22 >> 5;
    TStack_e8._28_4_ = local_4c;
    TStack_e8.BaseBitIndex = local_100;
    uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
    local_120 = pFVar4;
    local_f0 = pFVar4;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
    if ((((int)uVar22 < 0) || (iVar24 < (int)uVar22)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    uVar2 = *(uint *)&(pFVar4->Values).field_0x28;
    if (uVar22 != uVar2) {
      puVar6 = *(undefined1 **)&(pFVar4->Values).field_0x20;
      puVar25 = puVar1;
      if (puVar6 != (undefined1 *)0x0) {
        puVar25 = puVar6;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar19 * 4);
      while (uVar22 == 0) {
        lVar17 = (longlong)iVar19;
        uVar21 = uVar21 + 0x20;
        iVar19 = iVar19 + 1;
        uVar22 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14462dc80;
        uVar22 = *(uint *)(puVar25 + lVar17 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_12c = (int)lVar17;
      uVar22 = local_12c + -1 + uVar21;
      if ((int)uVar2 < (int)uVar22) {
        uVar22 = uVar2;
      }
    }
LAB_14462dc80:
    while( true ) {
      pFVar9 = local_f0;
      if (*(int *)&(local_f0->Values).field_0x8 - *(int *)&(local_f0->Values).field_0x34 !=
          (int)uStack_c8) {
        local_168[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      lVar17 = (longlong)TStack_e8.CurrentBitIndex;
      if (((TStack_e8.CurrentBitIndex == uVar22) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pFVar23 = local_128, pFVar9 == pFVar4)) break;
      lVar7 = *(longlong *)&pFVar9->Values;
      psVar3 = *(short **)(lVar7 + lVar17 * 0x28);
      pFVar15 = (FString *)(lVar7 + lVar17 * 0x28);
      for (psVar16 = psVar3; psVar16 != psVar3 + *(int *)(lVar7 + 8 + lVar17 * 0x28);
          psVar16 = psVar16 + 1) {
        if (*psVar16 == 0x2d) {
          if ((int)((longlong)psVar16 - (longlong)psVar3 >> 1) != -1) {
            iVar24 = *(int *)(FVar20.Data + 8) + -1;
            if (*(int *)(FVar20.Data + 8) == 0) {
              iVar24 = 0;
              pwVar18 = L"";
            }
            else {
              pwVar18 = *(wchar_t **)FVar20.Data;
            }
            bVar10 = ::FString::StartsWith(pFVar15,pwVar18,iVar24,IgnoreCase);
            if (bVar10) {
              if ((pFVar15[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              pFVar15 = FJsonValue::AsString
                                  ((FJsonValue *)pFVar15[1].Data.AllocatorInstance.Data,local_78);
              pFVar13 = FText::FromString(&local_88,pFVar15);
              FText::operator=(param_2,pFVar13);
              if (local_88.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
              }
              pTVar27 = local_148;
              if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
                pTVar27 = local_148;
              }
              goto LAB_14462ddc8;
            }
          }
          break;
        }
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
LAB_14462dd45:
    uVar14 = (ulonglong)local_150;
    FVar20.Data = FVar20.Data + 0x10;
  }
  bVar10 = false;
  pTVar27 = local_148;
  goto LAB_14462ddd3;
}

// JsonAttributesToUStruct @ 14462dfb0

bool __cdecl
FJsonObjectConverter::JsonAttributesToUStruct
          (TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *param_1,UStruct *param_2,void *param_3,long64 param_4,long64 param_5,bool param_6,
          FText *param_7,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_8)

{
  bool bVar1;
  
  bVar1 = ::`anonymous_namespace'::JsonAttributesToUStructWithContainer
                    (param_1,param_2,param_3,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                    );
  return bVar1;
}

// JsonObjectToUStruct @ 14462e750

bool __cdecl
FJsonObjectConverter::JsonObjectToUStruct
          (TSharedRef<FJsonObject,1> *param_1,UStruct *param_2,void *param_3,long64 param_4,
          long64 param_5,bool param_6,FText *param_7,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_8)

{
  bool bVar1;
  
  bVar1 = ::`anonymous_namespace'::JsonAttributesToUStructWithContainer
                    (&param_1->Object->Values,param_2,param_3,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  return bVar1;
}

// JsonValueToUProperty @ 14462edb0

bool __cdecl
FJsonObjectConverter::JsonValueToUProperty
          (TSharedPtr<FJsonValue,1> *param_1,FProperty *param_2,void *param_3,long64 param_4,
          long64 param_5,bool param_6,FText *param_7,
          TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
          *param_8)

{
  bool bVar1;
  
  bVar1 = ::`anonymous_namespace'::JsonValueToFPropertyWithContainer
                    (param_1,param_2,param_3,(UStruct *)0x0,(void *)0x0,param_4,param_5,param_6,
                     param_7,param_8);
  return bVar1;
}

// ParseTextArgumentsFromJson @ 14462ee10

/* WARNING: Type propagation algorithm not settling */

TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> * __cdecl
FJsonObjectConverter::ParseTextArgumentsFromJson
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *__return_storage_ptr__,TSharedPtr<FJsonObject_const_,1> *param_1)

{
  FString *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  FKeyForward FVar7;
  FJsonObject *pFVar8;
  bool bVar9;
  int iVar10;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> *pTVar11;
  longlong lVar12;
  wchar_t *_Str1;
  wchar_t *_Str2;
  int iVar13;
  uint uVar14;
  TTuple<FString,FFormatArgumentValue> *this;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  FJsonObject *pFVar18;
  FKeyForward local_res8 [8];
  int local_res10;
  int local_res18;
  undefined1 local_res20 [8];
  FText local_c0;
  FJsonObject *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FJsonObject *local_80;
  FJsonObject *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  (__return_storage_ptr__->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Pairs).ArrayNum = 0;
  (__return_storage_ptr__->Pairs).ArrayMax = 0;
  pFVar18 = param_1->Object;
  if (pFVar18 == (FJsonObject *)0x0) {
    return __return_storage_ptr__;
  }
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  puVar3 = &(pFVar18->Values).field_0x10;
  iVar10 = *(int *)&(pFVar18->Values).field_0x28;
  iStack_94 = iStack_a8;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(pFVar18->Values).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar3;
    }
    uVar15 = *puVar17;
    local_90 = 0;
    iStack_a8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14462eedd;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iStack_94 = local_90 + -1 + local_res10;
    if (iVar10 < iStack_94) {
      iStack_94 = iVar10;
    }
  }
LAB_14462eedd:
  uVar15 = *(uint *)&(pFVar18->Values).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_88 = *(int *)&(pFVar18->Values).field_0x8 - *(int *)&(pFVar18->Values).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_70.CurrentBitIndex = iStack_94;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_94;
  TStack_70.BaseBitIndex = local_90;
  uStack_50 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pFVar18;
  local_a0 = puVar3;
  iStack_8c = iStack_94;
  local_80 = pFVar18;
  local_78 = pFVar18;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
               *)(*pcVar6)();
    return pTVar11;
  }
  FVar7 = local_res8[0];
  uVar4 = *(uint *)&(pFVar18->Values).field_0x28;
  if (uVar15 != uVar4) {
    puVar5 = *(undefined1 **)&(pFVar18->Values).field_0x20;
    puVar16 = puVar3;
    if (puVar5 != (undefined1 *)0x0) {
      puVar16 = puVar5;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14462eff0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar15 = local_res18 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14462eff0:
  do {
    pFVar8 = local_78;
    if (*(int *)&(local_78->Values).field_0x8 - *(int *)&(local_78->Values).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = (FKeyForward)0x0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pFVar8 == pFVar18))
    {
      return __return_storage_ptr__;
    }
    pFVar1 = (FString *)(*(longlong *)&pFVar8->Values + (longlong)TStack_70.CurrentBitIndex * 0x28);
    FText::FText(&local_c0);
    bVar9 = GetTextFromField(pFVar1,(TSharedPtr<FJsonValue,1> *)(pFVar1 + 1),&local_c0);
    if (bVar9) {
      iVar10 = AlgoImpl::
               LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                         ((TTuple<FString,FFormatArgumentValue> *)
                          (__return_storage_ptr__->Pairs).AllocatorInstance.Data,
                          (__return_storage_ptr__->Pairs).ArrayNum,pFVar1,FVar7,
                          (FLocKeySortedMapLess)FVar7);
      if ((iVar10 < 0) || ((__return_storage_ptr__->Pairs).ArrayNum < iVar10)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x249,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                     *)(*pcVar6)();
          return pTVar11;
        }
        if (-1 < iVar10) goto LAB_14462f0a4;
LAB_14462f137:
        TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
        InsertUninitializedImpl(&__return_storage_ptr__->Pairs,iVar10,1);
        this = (TTuple<FString,FFormatArgumentValue> *)
               ((__return_storage_ptr__->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x30);
      }
      else {
LAB_14462f0a4:
        if ((__return_storage_ptr__->Pairs).ArrayNum <= iVar10) goto LAB_14462f137;
        if ((iVar10 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                     *)(*pcVar6)();
          return pTVar11;
        }
        this = (TTuple<FString,FFormatArgumentValue> *)
               ((__return_storage_ptr__->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x30);
        if (*(int *)&this->field_0x8 == 0) {
          _Str2 = L"";
        }
        else {
          _Str2 = *(wchar_t **)this;
        }
        if ((pFVar1->Data).ArrayNum == 0) {
          _Str1 = L"";
        }
        else {
          _Str1 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
        }
        iVar13 = wcscmp(_Str1,_Str2);
        if (iVar13 < 0) goto LAB_14462f137;
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>(this,1);
      }
      ::FString::FString((FString *)this,pFVar1);
      *(undefined4 *)&this->field_0x10 = 4;
      *(undefined8 *)&this->field_0x20 = 0;
      *(ITextData **)&this->field_0x20 = local_c0.TextData.Reference;
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 8))
                  (local_c0.TextData.Reference,local_res20);
      }
      *(uint *)&this->field_0x28 = local_c0.Flags;
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                   *)(*pcVar6)();
        return pTVar11;
      }
    }
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pFVar18 = local_80;
  } while( true );
}

// StandardizeCase @ 14462f6c0

FString * __cdecl
FJsonObjectConverter::StandardizeCase(FString *__return_storage_ptr__,FString *param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  uVar1 = *(ushort *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  *(ushort *)(__return_storage_ptr__->Data).AllocatorInstance.Data =
       (-(ushort)(uVar1 - 0x41 < 0x1a) & 0x20) + uVar1;
  ::FString::ReplaceInline(__return_storage_ptr__,L"ID",L"Id",CaseSensitive);
  return __return_storage_ptr__;
}

// UPropertyToJsonValue @ 14462f9d0

TSharedPtr<FJsonValue,1> * __cdecl
FJsonObjectConverter::UPropertyToJsonValue
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,FProperty *param_1,void *param_2,
          long64 param_3,long64 param_4,
          TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
          *param_5,FProperty *param_6,EJsonObjectConversionFlags param_7)

{
  ::`anonymous_namespace'::FPropertyToJsonValueWithContainer
            (__return_storage_ptr__,param_1,param_2,(UObject *)0x0,
             (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)0x0,
             param_3,param_4,param_5,param_6,param_7);
  return __return_storage_ptr__;
}

// UStructToJsonAttributes @ 14462fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FJsonObjectConverter::UStructToJsonAttributes
          (UStruct *param_1,void *param_2,
          TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
          *param_3,long64 param_4,long64 param_5,
          TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
          *param_6,EJsonObjectConversionFlags param_7)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  pUVar4 = (UObject *)0x0;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     (pUVar4 = (UObject *)0x0,
     (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
     &pUVar3->_padding_)) {
    pUVar4 = param_2;
  }
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  bVar2 = ::`anonymous_namespace'::UStructToJsonAttributesWithContainer
                    (param_1,param_2,pUVar4,
                     (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>
                      *)local_a8,param_3,param_4,param_5,param_6,param_7);
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  iVar1 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return bVar2;
}

// UStructToJsonObject @ 14462ff30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FJsonObjectConverter::UStructToJsonObject
          (UStruct *param_1,void *param_2,TSharedRef<FJsonObject,1> *param_3,long64 param_4,
          long64 param_5,
          TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
          *param_6,EJsonObjectConversionFlags param_7)

{
  TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar1 = &param_3->Object->Values;
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  iVar2 = (int)pUVar4->_padding_;
  pUVar5 = (UObject *)0x0;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar4->_padding_)) {
    pUVar5 = param_2;
  }
  local_7c = 0x80;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_78 = 0xffffffff;
  bVar3 = ::`anonymous_namespace'::UStructToJsonAttributesWithContainer
                    (param_1,param_2,pUVar5,
                     (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>
                      *)local_a8,pTVar1,param_4,param_5,param_6,param_7);
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  iVar2 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// UStructToJsonObjectString @ 1446300b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonObjectConverter::UStructToJsonObjectString
          (UStruct *param_1,void *param_2,FString *param_3,long64 param_4,long64 param_5,int param_6
          ,TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
           *param_7,bool param_8)

{
  int iVar1;
  FSharedReferencer<1> FVar2;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar3;
  bool bVar4;
  UClass *pUVar5;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar6;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar7;
  undefined1 auStackY_118 [32];
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_c8;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_b8;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_b8.Object = (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)param_7;
  MakeShared<FJsonObject,1>((TSharedRef<FJsonObject,1> *)&local_c8);
  FVar2.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0;
  pUVar5 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  pTVar6 = pTVar7;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     (pTVar6 = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0,
     (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
     &pUVar5->_padding_)) {
    pTVar6 = param_2;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  bVar4 = ::`anonymous_namespace'::UStructToJsonAttributesWithContainer
                    (param_1,param_2,(UObject *)pTVar6,
                     (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>
                      *)local_98,
                     (TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                      *)local_c8.Object,param_4,param_5,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)local_b8.Object,None);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  if (bVar4) {
    if (param_8) {
      pTVar6 = ::operator_new(0x40);
      if (pTVar6 != (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)0x0) {
        pTVar7 = TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::
                 TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>(pTVar6,param_3,param_6);
      }
      local_b8.Object = (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)pTVar7;
      TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
      TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
                (&local_a8,
                 (TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> *)&local_b8);
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      local_b8.Object = (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_c8.Object;
      local_b8.SharedReferenceCount.ReferenceController =
           local_c8.SharedReferenceCount.ReferenceController;
      if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar2.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
                (&local_c8,(TSharedPtr<FJsonObject,1> *)&local_b8);
      bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                        (&local_c8,
                         (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_a8.Object,
                         true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      (**(code **)((local_a8.Object)->_padding_ + 8))(local_a8.Object);
    }
    else {
      TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
                (&local_b8,param_3,param_6);
      if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar2.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
                ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)&local_a8,
                 (TSharedPtr<FJsonObject,1> *)&local_c8);
      pTVar3 = local_b8.Object;
      bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                        ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)&local_a8,
                         local_b8.Object,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3);
      local_a8.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if (bVar4 != false) {
      bVar4 = true;
      goto LAB_14463035d;
    }
    if (2 < (byte)LogJson._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
  }
  bVar4 = false;
LAB_14463035d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return bVar4;
}

