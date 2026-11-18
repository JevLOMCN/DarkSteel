// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 8

// operator== @ 14eb37070

bool __thiscall FOnlinePartyData::operator==(FOnlinePartyData *this,FOnlinePartyData *param_1)

{
  FOnlineKeyValuePairs<FString,FVariantData> *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  FVariantData *this_00;
  longlong lVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FOnlineKeyValuePairs<FString,FVariantData> *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  pFVar1 = &this->KeyValAttrs;
  if (*(int *)&(this->KeyValAttrs).field_0x8 - *(int *)&(this->KeyValAttrs).field_0x34 !=
      *(int *)&(param_1->KeyValAttrs).field_0x8 - *(int *)&(param_1->KeyValAttrs).field_0x34) {
    return false;
  }
  iStack_38 = 0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyValAttrs).field_0x10;
  uStack_34 = 1;
  iVar3 = *(int *)&(this->KeyValAttrs).field_0x28;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar3 != 0) {
    puVar7 = *(uint **)&(this->KeyValAttrs).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_60.Array;
    }
    uVar4 = *puVar7;
    while (uVar4 == 0) {
      lVar6 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14eb3713a;
      uVar4 = puVar7[lVar6 + 1];
    }
    uStack_34 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_34 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_24 = local_20 + -1 + (int)lVar6;
    if (iVar3 < iStack_24) {
      iStack_24 = iVar3;
    }
  }
LAB_14eb3713a:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = pFVar1;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar3) {
    do {
      lVar6 = (longlong)TStack_60.CurrentBitIndex;
      this_00 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                        *)&param_1->KeyValAttrs,(FString *)(*(longlong *)pFVar1 + lVar6 * 0x38));
      if ((this_00 == (FVariantData *)0x0) ||
         (bVar5 = FVariantData::operator==
                            (this_00,(FVariantData *)(*(longlong *)pFVar1 + 0x10 + lVar6 * 0x38)),
         !bVar5)) {
        return false;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return true;
}

// operator!= @ 14eb37440

bool __thiscall FOnlinePartyData::operator!=(FOnlinePartyData *this,FOnlinePartyData *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// FromJson @ 14ebf9780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOnlinePartyData::FromJson(FOnlinePartyData *this,FString *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *pTVar12;
  TSharedPtr<FJsonObject,1> *this_00;
  FJsonObject *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res18 [8];
  int local_res20;
  TSharedPtr<FJsonObject,1> local_208;
  FString local_1f8;
  FVariantData local_1e8;
  StackState local_1c8;
  int local_190;
  undefined1 local_18c [12];
  TSharedRef<FJsonValue,1> local_180;
  FString local_170;
  FJsonObject *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  FJsonObject *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FString *local_d8;
  FVariantData *local_d0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TSharedRef<TJsonReader<wchar_t>,1> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [2];
  undefined4 local_3c;
  
  local_208.Object = (FJsonObject *)0x0;
  local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TJsonReaderFactory<wchar_t>::Create(&local_a8,param_1);
  local_1c8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Object.Object = (FJsonObject *)0x0;
  local_1c8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c8.Identifier.Data.ArrayNum = 0;
  local_1c8.Identifier.Data.ArrayMax = 0;
  local_1c8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Array.ArrayNum = 0;
  local_1c8.Array.ArrayMax = 0;
  bVar10 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                     (local_a8.Object,&local_1c8,None);
  if (bVar10) {
    bVar10 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_1c8,&local_208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data,
               local_1c8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1c8.Array.AllocatorInstance.Data);
    }
    if (local_1c8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar10) &&
       ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)local_208.Object !=
        (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)0x0)) {
      if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)local_208.Object ==
           (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = local_208.Object;
      uStack_f0 = 5;
      local_f8 = L"Attrs";
      local_98._12_4_ = uStack_ec;
      local_98.Size = 5;
      local_98.DataPtr = L"Attrs";
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(5,L"Attrs");
      pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>
                          ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            *)pFVar13,uVar11,&local_98);
      if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0))
         && (pTVar12->Object->Type == Object)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_208.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_e8 = L"Attrs";
        uStack_e0 = 5;
        local_88._12_4_ = uStack_dc;
        local_88.Size = 5;
        local_88.DataPtr = L"Attrs";
        this_00 = FJsonObject::GetObjectField(local_208.Object,&local_88);
        pFVar13 = TSharedPtr<FJsonObject,1>::operator->(this_00);
        iVar4 = *(int *)&(pFVar13->Values).field_0x28;
        iStack_158 = 0;
        uStack_154 = 1;
        puVar1 = &(pFVar13->Values).field_0x10;
        local_140 = 0;
        iStack_144 = iStack_158;
        if (iVar4 != 0) {
          puVar18 = *(uint **)&(pFVar13->Values).field_0x20;
          if (puVar18 == (uint *)0x0) {
            puVar18 = (uint *)puVar1;
          }
          uVar11 = *puVar18;
          local_140 = 0;
          iStack_158 = 0;
          while (uVar11 == 0) {
            lVar14 = (longlong)iStack_158;
            local_140 = local_140 + 0x20;
            iStack_158 = iStack_158 + 1;
            iStack_144 = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
            goto LAB_14ebf9a20;
            uVar11 = puVar18[lVar14 + 1];
          }
          uStack_154 = -uVar11 & uVar11;
          uVar3 = (ulonglong)uStack_154 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_res20 = (int)lVar14;
          iStack_144 = local_140 + -1 + local_res20;
          if (iVar4 < iStack_144) {
            iStack_144 = iVar4;
          }
        }
LAB_14ebf9a20:
        uVar11 = *(uint *)&(pFVar13->Values).field_0x28;
        uStack_13c = local_3c;
        iStack_138 = *(int *)&(pFVar13->Values).field_0x8 - *(int *)&(pFVar13->Values).field_0x34;
        uVar16 = uVar11 & 0xffffffe0;
        uStack_148 = 0xffffffff;
        TStack_128._padding_ = CONCAT44(uStack_154,iStack_158);
        TStack_128.CurrentBitIndex = iStack_144;
        TStack_128.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar11 >> 5;
        TStack_128._28_4_ = local_3c;
        TStack_128.BaseBitIndex = local_140;
        uStack_108 = CONCAT44(uStack_134,iStack_138);
        local_18c._4_8_ = pFVar13;
        local_160 = pFVar13;
        local_150 = puVar1;
        local_130 = pFVar13;
        TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = local_18c._4_8_;
        uVar5 = *(uint *)&(pFVar13->Values).field_0x28;
        if (uVar11 != uVar5) {
          puVar17 = *(undefined1 **)&(pFVar13->Values).field_0x20;
          if (puVar17 == (undefined1 *)0x0) {
            puVar17 = puVar1;
          }
          uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
          while (uVar11 == 0) {
            lVar14 = (longlong)iVar15;
            uVar16 = uVar16 + 0x20;
            iVar15 = iVar15 + 1;
            uVar11 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_14ebf9b21;
            uVar11 = *(uint *)(puVar17 + lVar14 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_190 = (int)lVar14;
          uVar11 = local_190 + -1 + uVar16;
          if ((int)uVar5 < (int)uVar11) {
            uVar11 = uVar5;
          }
        }
LAB_14ebf9b21:
        while( true ) {
          pFVar13 = local_130;
          if (*(int *)&(local_130->Values).field_0x8 - *(int *)&(local_130->Values).field_0x34 !=
              (int)uStack_108) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_128.CurrentBitIndex == uVar11) &&
              (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pFVar13 == (FJsonObject *)uVar9)) break;
          pFVar2 = (FString *)
                   (*(longlong *)&pFVar13->Values + (longlong)TStack_128.CurrentBitIndex * 0x28);
          local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1f8.Data.ArrayNum = 0;
          local_1f8.Data.ArrayMax = 0;
          local_1e8.Type = Empty;
          local_1e8.Value.AsInt64 = 0;
          local_1e8.Value._8_8_ = 0;
          local_1e8.CachedEstimatedMaxEscapedStringSize = 0;
          if ((pFVar2[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar6 = *(TReferenceControllerBase<1> **)&pFVar2[1].Data.ArrayNum;
          local_180.Object = (FJsonValue *)pFVar2[1].Data.AllocatorInstance.Data;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_180.SharedReferenceCount.ReferenceController = pTVar6;
          if ((local_180.Object == (FJsonValue *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar10 = FVariantData::FromJsonValue(&local_1e8,pFVar2,&local_180,&local_1f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          if (bVar10) {
            local_d8 = &local_1f8;
            local_d0 = &local_1e8;
            TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
                      ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                        *)&this->KeyValAttrs,
                       (TPairInitializer<FString_const_&,FVariantData_const_&> *)local_18c,
                       (bool *)&local_d8);
          }
          if (((local_1e8.Type == String) || (local_1e8.Type == Blob)) || (local_1e8.Type == Json))
          {
            operator_delete__(local_1e8.Value.AsTCHAR);
          }
          local_1e8.Type = Empty;
          local_1e8.CachedEstimatedMaxEscapedStringSize = 0;
          local_1e8.Value.AsInt64 = 0;
          local_1e8.Value._8_8_ = 0;
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
        }
      }
      if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)local_208.Object ==
           (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = local_208.Object;
      local_c8 = L"Rev";
      uStack_c0 = 3;
      local_78._12_4_ = uStack_bc;
      local_78.Size = 3;
      local_78.DataPtr = L"Rev";
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(3,L"Rev");
      pTVar12 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                ::FindByHash<TStringView<wchar_t>_>
                          ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                            *)pFVar13,uVar11,&local_78);
      if (((pTVar12 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar12->Object != (FJsonValue *)0x0))
         && (pTVar12->Object->Type == Number)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_208.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_b8 = L"Rev";
        uStack_b0 = 3;
        local_68[0]._12_4_ = uStack_ac;
        local_68[0].Size = 3;
        local_68[0].DataPtr = L"Rev";
        dVar8 = FJsonObject::GetNumberField(local_208.Object,local_68);
        iVar4 = this->RevisionCount;
        iVar15 = (int)dVar8;
        if ((((iVar4 != 0) && (iVar15 != iVar4)) && (iVar15 != iVar4 + 1)) &&
           (2 < (byte)LogOnlineParty._0_1_)) {
          ::FString::PrintfImpl(&local_170,L"Unexpected revision received.  Current %d, new %d");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineParty);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
        this->RevisionCount = iVar15;
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data,
               local_1c8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_1c8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_1c8.Array.AllocatorInstance.Data);
    }
    if (local_1c8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  return;
}

// GetAllAttributesAsJsonObject @ 14ebfd5f0

TSharedRef<FJsonObject,1> * __thiscall
FOnlinePartyData::GetAllAttributesAsJsonObject
          (FOnlinePartyData *this,TSharedRef<FJsonObject,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSharedRef<FJsonObject,1> *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  FString *pFVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  MakeShared<FJsonObject,1>(__return_storage_ptr__);
  iVar3 = *(int *)&(this->KeyValAttrs).field_0x28;
  puVar1 = &(this->KeyValAttrs).field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->KeyValAttrs).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar15 = iVar15 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ebfd69d;
      uVar11 = puVar16[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar15 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ebfd69d:
  uVar11 = *(uint *)&(this->KeyValAttrs).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->KeyValAttrs).field_0x8 -
                       *(int *)&(this->KeyValAttrs).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedRef<FJsonObject,1> *)(*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&(this->KeyValAttrs).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->KeyValAttrs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ebfd7a0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14ebfd7a0:
  while( true ) {
    if (*(int *)&(this->KeyValAttrs).field_0x8 - *(int *)&(this->KeyValAttrs).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar14 = (FString *)
              ((longlong)TStack_60.CurrentBitIndex * 0x38 + *(longlong *)&this->KeyValAttrs);
    FVariantData::AddToJsonObject((FVariantData *)(pFVar14 + 1),__return_storage_ptr__,pFVar14,true)
    ;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// GetAllAttributesAsJsonObjectString @ 14ebfd820

FString * __thiscall
FOnlinePartyData::GetAllAttributesAsJsonObjectString
          (FOnlinePartyData *this,FString *__return_storage_ptr__)

{
  FSharedReferencer<1> FVar1;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_48;
  TSharedRef<FJsonObject,1> local_38;
  TSharedPtr<FJsonObject,1> local_28 [2];
  
  GetAllAttributesAsJsonObject(this,&local_38);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
            (&local_48,__return_storage_ptr__,0);
  FVar1.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  local_28[0].Object = local_38.Object;
  local_28[0].SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(local_28,&local_48,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  (**(code **)((local_48.Object)->_padding_ + 8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetDirtyKeyValAttrs @ 14ebff8f0

void __thiscall
FOnlinePartyData::GetDirtyKeyValAttrs
          (FOnlinePartyData *this,FOnlineKeyValuePairs<FString,FVariantData> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  FVariantData *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  *this_00;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  FVariantData *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  *local_res10;
  TPairInitializer<FString_const_&,FVariantData_const_&> local_b8;
  FVariantData *local_a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  puVar1 = &(this->DirtyKeys).Elements.field_0x10;
  iVar8 = *(int *)&(this->DirtyKeys).Elements.field_0x28;
  local_a0 = &this->DirtyKeys;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(this->DirtyKeys).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ebff99d;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = (int)lVar10 + -1 + local_80;
    if (iVar8 < iStack_84) {
      iStack_84 = iVar8;
    }
  }
LAB_14ebff99d:
  uVar12 = *(uint *)&(this->DirtyKeys).Elements.field_0x28;
  iStack_78 = *(int *)&(this->DirtyKeys).Elements.field_0x8 -
              *(int *)&(this->DirtyKeys).Elements.field_0x34;
  uVar15 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  uStack_88 = 0xffffffff;
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_res10 = (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                 *)param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = local_a0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = local_res10;
  uVar4 = *(uint *)&(this->DirtyKeys).Elements.field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->DirtyKeys).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ebffaab;
      uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14ebffaab:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar12) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->DirtyKeys)) break;
    pFVar2 = (FVariantData *)
             (*(longlong *)&pTVar6->Elements + (longlong)TStack_68.CurrentBitIndex * 0x18);
    pFVar9 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
             ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                     *)&this->KeyValAttrs,(FString *)pFVar2);
    if (pFVar9 == (FVariantData *)0x0) {
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      ::FString::FString((FString *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
                         (FString *)pFVar2);
    }
    else {
      local_b8.Value = pFVar2;
      local_a8 = pFVar9;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
                (this_00,&local_b8,(bool *)&local_b8.Value);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// ToJsonDirty @ 14ec15d40

void __thiscall FOnlinePartyData::ToJsonDirty(FOnlinePartyData *this,FString *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  FString *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FJsonObject *pFVar11;
  FVariantData *this_00;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  FJsonObject *pFVar15;
  FJsonObject *this_01;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  int local_res20;
  TReferenceControllerBase<1> *local_158;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_140;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_130;
  uint uStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0;
  TSharedRef<FJsonObject,1> local_b8;
  FString local_a8;
  TSharedPtr<FJsonObject,1> local_98;
  TSharedPtr<FJsonObject,1> local_88 [2];
  undefined4 local_5c;
  
  ::FString::Empty(param_1);
  pFVar11 = ::operator_new(0x50);
  pFVar15 = (FJsonObject *)0x0;
  uVar13 = 0;
  this_01 = pFVar15;
  if (pFVar11 != (FJsonObject *)0x0) {
    *(undefined8 *)&(pFVar11->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar11->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar11->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar11->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar11->Values = 0;
    *(undefined8 *)&(pFVar11->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar11->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar11->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar11->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar11->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar11->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar11->Values).field_0x40 = 0;
    this_01 = pFVar11;
  }
  local_158 = ::operator_new(0x18);
  uVar9 = 1;
  if (local_158 == (TReferenceControllerBase<1> *)0x0) {
    local_158 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_158->SharedReferenceCount = (atomic<int>)0x1;
    local_158->WeakReferenceCount = (atomic<int>)0x1;
    local_158->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonObject__U__DefaultDeleter_VFJsonObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_158[1]._padding_ = (longlong)this_01;
  }
  if ((this_01 == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  MakeShared<FJsonObject,1>(&local_b8);
  puVar2 = &(this->DirtyKeys).Elements.field_0x10;
  uVar5 = *(uint *)&(this->DirtyKeys).Elements.field_0x28;
  pTVar1 = &this->DirtyKeys;
  local_110 = 0;
  uStack_114 = uVar13;
  if (uVar5 != 0) {
    puVar17 = *(uint **)&(this->DirtyKeys).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar10 = *puVar17;
    pFVar11 = pFVar15;
    local_110 = 0;
    uVar13 = 0;
    while (uVar10 == 0) {
      iVar14 = (int)pFVar15;
      local_110 = (int)pFVar11 + 0x20;
      pFVar11 = (FJsonObject *)(ulonglong)local_110;
      uVar13 = iVar14 + 1;
      pFVar15 = (FJsonObject *)(ulonglong)uVar13;
      uStack_114 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14ec15eb1;
      uVar10 = puVar17[(longlong)iVar14 + 1];
    }
    uVar9 = -uVar10 & uVar10;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uStack_114 = (local_110 - 1) + local_res20;
    if ((int)uVar5 < (int)uStack_114) {
      uStack_114 = uVar5;
    }
  }
LAB_14ec15eb1:
  uStack_10c = local_5c;
  iStack_108 = *(int *)&(this->DirtyKeys).Elements.field_0x8 -
               *(int *)&(this->DirtyKeys).Elements.field_0x34;
  uVar10 = *(uint *)&(this->DirtyKeys).Elements.field_0x28;
  TStack_f8._padding_ = CONCAT44(uVar9,uVar13);
  uStack_118 = 0xffffffff;
  uVar18 = uVar10 & 0xffffffe0;
  TStack_f8.CurrentBitIndex = uStack_114;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar10 >> 5;
  TStack_f8._28_4_ = local_5c;
  TStack_f8.BaseBitIndex = local_110;
  uStack_d8 = CONCAT44(uStack_104,iStack_108);
  local_130 = pTVar1;
  uStack_128 = uVar13;
  uStack_124 = uVar9;
  local_120 = puVar2;
  local_100 = pTVar1;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || ((int)uVar5 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = *(uint *)&(this->DirtyKeys).Elements.field_0x28;
  if (uVar10 != uVar13) {
    puVar16 = *(undefined1 **)&(this->DirtyKeys).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar10 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14ec15fe0;
      uVar9 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar10 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar13 < (int)uVar10) {
      uVar10 = uVar13;
    }
  }
LAB_14ec15fe0:
  while( true ) {
    pTVar7 = local_100;
    if (*(int *)&(local_100->Elements).field_0x8 - *(int *)&(local_100->Elements).field_0x34 !=
        (int)uStack_d8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_f8.CurrentBitIndex == uVar10) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == pTVar1))
    break;
    pFVar3 = (FString *)
             (*(longlong *)&pTVar7->Elements + (longlong)TStack_f8.CurrentBitIndex * 0x18);
    this_00 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
              ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                      *)&this->KeyValAttrs,pFVar3);
    if ((this_00 == (FVariantData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PropertyValue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Private\\OnlinePartyInterface.cpp"
                           ,0x40,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVariantData::AddToJsonObject(this_00,&local_b8,pFVar3,true);
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  iVar14 = this->RevisionCount;
  ::FString::FString(&local_d0,L"Rev");
  FJsonObject::SetNumberField(this_01,&local_d0,(double)iVar14);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  local_98.Object = local_b8.Object;
  local_98.SharedReferenceCount.ReferenceController =
       local_b8.SharedReferenceCount.ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_a8,L"Attrs");
  FJsonObject::SetObjectField(this_01,&local_a8,&local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_140,param_1,0);
  local_88[0].SharedReferenceCount.ReferenceController = local_158;
  if (local_158 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_158->SharedReferenceCount = (atomic<int>)((int)local_158->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88[0].Object = this_01;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(local_88,&local_140,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_158);
  (**(code **)((local_140.Object)->_padding_ + 8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_158);
  return;
}

// ToJsonFull @ 14ec161a0

void __thiscall FOnlinePartyData::ToJsonFull(FOnlinePartyData *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *this_00;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_78;
  FString local_68;
  FString local_58;
  TSharedPtr<FJsonObject,1> local_48;
  TSharedPtr<FJsonObject,1> local_38;
  TSharedRef<FJsonObject,1> local_28 [2];
  
  ::FString::Empty(param_1);
  pTVar4 = ::operator_new(0x50);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this_00 = pTVar5;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar4->_padding_ = 0;
    pTVar4->SharedReferenceCount = (atomic<int>)0x0;
    pTVar4->WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[3]._padding_ + 4) = 0;
    pTVar4[4]._padding_ = 0;
    this_00 = pTVar4;
  }
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonObject__U__DefaultDeleter_VFJsonObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)this_00;
    pTVar5 = pTVar4;
  }
  if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GetAllAttributesAsJsonObject(this,local_28);
  iVar1 = this->RevisionCount;
  ::FString::FString(&local_68,L"Rev");
  FJsonObject::SetNumberField((FJsonObject *)this_00,&local_68,(double)iVar1);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_48.Object = local_28[0].Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_28[0].SharedReferenceCount.ReferenceController;
  if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_58,L"Attrs");
  FJsonObject::SetObjectField((FJsonObject *)this_00,&local_58,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_78,param_1,0);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (FJsonObject *)this_00;
  local_38.SharedReferenceCount.ReferenceController = pTVar5;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_38,&local_78,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (**(code **)((local_78.Object)->_padding_ + 8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

