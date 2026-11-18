// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// ExecuteInternal @ 1499eee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGTagsToDataAttributesElement::ExecuteInternal
          (FPCGTagsToDataAttributesElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  ITextData *pIVar2;
  code *pcVar3;
  uint uVar4;
  FName FVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  UPCGTagsToDataAttributesSettings *pUVar10;
  ulonglong uVar11;
  UPCGData *pUVar12;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *pFVar13;
  long64 lVar14;
  FPCGAttributePropertyOutputSelector *this_02;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  byte bVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  uint uVar23;
  FPCGTaggedData *pFVar24;
  <lambda_1> <Var25;
  char cVar26;
  ulonglong uVar27;
  ForElementType<unsigned_int> FVar28;
  ulonglong *puVar29;
  FString *pFVar30;
  ForAnyElementType FVar31;
  longlong *plVar32;
  uint uVar33;
  FPCGDataCollection *pFVar34;
  bool bVar35;
  undefined1 auStackY_328 [32];
  <lambda_1> local_2e8;
  char local_2e7;
  undefined1 local_2e6 [6];
  UPCGTagsToDataAttributesSettings *local_2e0;
  uint local_2d8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_2d0;
  uint local_2c0;
  FName local_2b8;
  FPCGTaggedData *local_2b0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_2a8;
  int local_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  undefined4 local_288;
  undefined8 uStack_284;
  undefined4 uStack_27c;
  FName local_278;
  FPCGContext *local_270;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  FPCGMetadataDomain *local_240;
  FName local_238;
  FPCGTaggedData *local_230;
  FPCGDataCollection *local_228;
  FPCGTaggedData *local_220;
  undefined4 local_218;
  int local_214;
  int local_210;
  int local_20c;
  longlong *local_208;
  int iStack_200;
  uint uStack_1fc;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FPCGAttributePropertySelector local_1d8;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  FTextFormat local_168;
  FText local_158;
  FFormatArgumentValue local_148;
  FText local_128 [2];
  FPCGAttributePropertySelector local_108;
  FText local_c8;
  FTextFormat local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  bVar35 = CpuChannel->Enabled < 0;
  local_270 = param_1;
  if (bVar35) {
    local_2e7 = '\0';
  }
  else {
    local_2e7 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId202,"FPCGTagsToDataAttributesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
               ,0xca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId202);
  }
  cVar26 = !bVar35;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                          ,0xcc,L""), bVar35)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_00), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar24 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTagsToDataAttributesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_2e8);
      if (pFVar24 != (FPCGTaggedData *)0x0) {
        local_2e0 = Cast<UPCGTagsToDataAttributesSettings_const_>(&pFVar24->Data);
        goto LAB_1499eefe6;
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_00);
      pUVar10 = (UPCGTagsToDataAttributesSettings *)
                FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (pUVar10 != (UPCGTagsToDataAttributesSettings *)0x0) {
        local_2e0 = pUVar10;
        pUVar8 = UPCGTagsToDataAttributesSettings::StaticClass();
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) goto LAB_1499eefe6;
      }
    }
    local_2e0 = (UPCGTagsToDataAttributesSettings *)0x0;
  }
  else {
    pUVar8 = UPCGTagsToDataAttributesSettings::StaticClass();
    bVar35 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar35) {
      local_2e0 = (UPCGTagsToDataAttributesSettings *)
                  (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      local_2e0 = (UPCGTagsToDataAttributesSettings *)0x0;
    }
  }
LAB_1499eefe6:
  if ((local_2e0 == (UPCGTagsToDataAttributesSettings *)0x0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                          ,0xcf,L""), bVar35)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_2a8,&PCGPinConstants::DefaultInputLabel);
  uVar19 = (ulonglong)local_2a8.ArrayNum;
  pFVar34 = &param_1->OutputData;
  pFVar24 = (FPCGTaggedData *)(local_2a8.AllocatorInstance.Data + uVar19 * 0x78);
  local_2c0 = local_2a8.ArrayNum;
  FVar31.Data = local_2a8.AllocatorInstance.Data;
  <Var25 = local_2e8;
  local_228 = pFVar34;
  local_220 = pFVar24;
  do {
    while( true ) {
      local_2b0 = (FPCGTaggedData *)FVar31.Data;
      if (local_2a8.ArrayNum != (uint)uVar19) {
        local_2e6[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2e6);
      }
      if ((FPCGTaggedData *)FVar31.Data == pFVar24) {
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum);
        if ((FPCGTaggedData *)local_2a8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_2a8.AllocatorInstance.Data);
        }
        if (cVar26 != '\0') {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return true;
      }
      pUVar12 = (((FPCGTaggedData *)FVar31.Data)->Data).Data.field0_0x0.DebugPtr;
      if (pUVar12 != (UPCGData *)0x0) break;
LAB_1499efbad:
      uVar19 = (ulonglong)local_2c0;
      FVar31.Data = FVar31.Data + 0x78;
    }
    bVar35 = UPCGData::IsSupportedMetadataDomainID(pUVar12,&PCGMetadataDomainID::Data);
    if (bVar35) {
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (ForElementType<unsigned_int>)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = -1;
      local_54 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      uVar23 = *(int *)&(((FPCGTaggedData *)FVar31.Data)->Tags).Elements.field_0x8 -
               *(int *)&(((FPCGTaggedData *)FVar31.Data)->Tags).Elements.field_0x34;
      if (uVar23 != 0) {
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
        }
        TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_88,uVar23);
        if (uVar23 < 4) {
          uVar23 = 1;
        }
        else {
          uVar19 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar21 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_218 = (undefined4)lVar21;
          uVar23 = 1 << ((byte)lVar21 & 0x1f);
        }
        if ((local_40 == 0) || ((int)local_40 < (int)uVar23)) {
          local_40 = uVar23;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar23 != 0) {
            uVar33 = uVar23;
            if (uVar23 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar33 = 0;
                goto LAB_1499ef1f1;
              }
            }
            else {
LAB_1499ef1f1:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar33,4);
            }
            if (0 < (int)uVar23) {
              uVar19 = 0;
              uVar27 = (ulonglong)uVar23;
              do {
                FVar20.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar20.Data = local_48.Data;
                }
                uVar11 = (longlong)(int)uVar23 - 1U & uVar19;
                uVar19 = uVar19 + 1;
                *(undefined4 *)(FVar20.Data + uVar11 * 4) = 0xffffffff;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
          }
          if (local_40 != 0) {
            pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
            uStack_294 = 1;
            uVar23 = 0;
            local_298 = 0;
            uStack_284 = 0;
            if (local_60 != 0) {
              FVar28 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar28 = local_68;
              }
              uVar33 = *(uint *)FVar28;
              local_298 = 0;
              while (uVar33 == 0) {
                uVar23 = uVar23 + 0x20;
                lVar21 = (longlong)local_298;
                local_298 = local_298 + 1;
                uStack_284 = (ulonglong)uVar23 << 0x20;
                if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < local_298)
                {
                  uStack_284 = CONCAT44(uVar23,local_60);
                  goto LAB_1499ef310;
                }
                uVar33 = ((uint *)((longlong)FVar28 + 4))[lVar21];
              }
              uStack_294 = -uVar33 & uVar33;
              uVar19 = (ulonglong)uStack_294 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_214 = (int)lVar21;
              uVar23 = local_214 + -1 + uVar23;
              if ((int)local_60 < (int)uVar23) {
                uVar23 = local_60;
              }
              uStack_284._4_4_ = (int)((ulonglong)uStack_284 >> 0x20);
              uStack_284 = CONCAT44(uStack_284._4_4_,uVar23);
            }
LAB_1499ef310:
            local_288 = 0xffffffff;
            local_268 = (longlong *)local_88;
            local_260._padding_ = CONCAT44(uStack_294,local_298);
            local_260.UnvisitedBitMask = 0xffffffff;
            local_260.CurrentBitIndex = (int)uStack_284;
            local_260.BaseBitIndex = uStack_284._4_4_;
            local_260._28_4_ = uStack_27c;
            local_260.Array = pTStack_290;
            if ((int)uStack_284 < (int)local_60) {
              do {
                puVar29 = (ulonglong *)((longlong)local_260.CurrentBitIndex * 0x58 + *local_268);
                uVar23 = ((uint)(*puVar29 >> 0x14) & 0xffff ^ (uint)(*puVar29 >> 4)) * -0x7a143595;
                uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
                uVar23 = (uVar23 >> 0x10 ^ uVar23) & local_40 - 1;
                *(uint *)((longlong)puVar29 + 0x54) = uVar23;
                FVar20.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar20.Data = local_48.Data;
                }
                lVar21 = (longlong)(int)(local_40 - 1 & uVar23);
                *(undefined4 *)(puVar29 + 10) = *(undefined4 *)(FVar20.Data + lVar21 * 4);
                *(int *)(FVar20.Data + lVar21 * 4) = local_260.CurrentBitIndex;
                local_260.UnvisitedBitMask = local_260.UnvisitedBitMask & ~local_260._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
              } while (local_260.CurrentBitIndex < (local_260.Array)->NumBits);
            }
          }
        }
      }
      Algo::
      Transform<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TMap<FString_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_*,PCG::Private::FParseTagResult,0>_>_&,_FPCGTagsToDataAttributesElement::ExecuteInternal_::__l20::<lambda_1>_>
                (&((FPCGTaggedData *)FVar31.Data)->Tags,
                 (TMap<FString_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_*,PCG::Private::FParseTagResult,0>_>
                  *)local_88,<Var25);
      iVar7 = (pFVar34->TaggedData).ArrayNum;
      piVar1 = &(pFVar34->TaggedData).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar34,piVar1);
      }
      (pFVar34->TaggedData).ArrayNum = iVar7 + 1;
      pFVar24 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar34->TaggedData).AllocatorInstance.Data + (longlong)iVar7 * 0x78),
                           (FPCGTaggedData *)FVar31.Data);
      pUVar12 = (((FPCGTaggedData *)FVar31.Data)->Data).Data.field0_0x0.DebugPtr;
      local_230 = pFVar24;
      pUVar12 = (UPCGData *)(**(code **)(pUVar12->_padding_ + 0x310))(pUVar12,param_1);
      if (((pUVar12 == (UPCGData *)0x0) ||
          (lVar21 = (**(code **)(pUVar12->_padding_ + 0x328))(pUVar12), lVar21 == 0)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputData && OutputData->MutableMetadata()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                              ,0xe9,L""), bVar35)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_01 = (UPCGMetadata *)(**(code **)(pUVar12->_padding_ + 0x328))(pUVar12);
      pFVar13 = UPCGMetadata::GetMetadataDomain(this_01,&PCGMetadataDomainID::Data);
      local_240 = pFVar13;
      if ((pFVar13 == (FPCGMetadataDomain *)0x0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputMetadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                              ,0xeb,L""), bVar35)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      lVar14 = FPCGMetadataDomain::GetItemCountForChild(pFVar13);
      if (lVar14 == 0) {
        FPCGMetadataDomain::AddEntry(pFVar13,-1);
      }
      FPCGDataPtrWrapper::operator=(&pFVar24->Data,pUVar12);
      uVar23 = local_60;
      iStack_200 = 0;
      local_1e8 = 0;
      uStack_1fc = 1;
      uStack_1ec = 0;
      if (local_60 != 0) {
        FVar28 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_68;
        }
        uVar33 = *(uint *)FVar28;
        while (uVar33 == 0) {
          iStack_200 = iStack_200 + 1;
          local_1e8 = local_1e8 + 0x20;
          uStack_1ec = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_200)
          goto LAB_1499ef58f;
          uVar33 = *(uint *)((longlong)FVar28 + (longlong)iStack_200 * 4);
        }
        uStack_1fc = -uVar33 & uVar33;
        uVar19 = (ulonglong)uStack_1fc * 2 + 1;
        lVar21 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_210 = (int)lVar21;
        uStack_1ec = local_210 + -1 + local_1e8;
        if ((int)local_60 < (int)uStack_1ec) {
          uStack_1ec = local_60;
        }
      }
LAB_1499ef58f:
      local_208 = (longlong *)local_88;
      uStack_1e4 = local_8c;
      local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar33 = local_60 & 0xffffffe0;
      iStack_1e0 = local_88._8_4_ - local_54;
      TStack_190._padding_ = CONCAT44(uStack_1fc,iStack_200);
      uStack_1f0 = 0xffffffff;
      TStack_190.CurrentBitIndex = uStack_1ec;
      TStack_190.UnvisitedBitMask = 0xffffffff;
      iVar7 = (int)local_60 >> 5;
      TStack_190._28_4_ = local_8c;
      TStack_190.BaseBitIndex = local_1e8;
      uStack_170 = CONCAT44(uStack_1dc,iStack_1e0);
      bVar18 = (byte)local_60;
      local_2d8 = local_60;
      local_198 = local_208;
      TStack_190.Array = local_1f8;
      if (((int)local_60 < 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar35)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar13 = local_240;
      uVar4 = local_2d8;
      if (uVar23 != local_60) {
        FVar28 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_68;
        }
        uVar23 = -1 << (bVar18 & 0x1f) & *(uint *)((longlong)FVar28 + (longlong)iVar7 * 4);
        while (uVar23 == 0) {
          iVar7 = iVar7 + 1;
          uVar33 = uVar33 + 0x20;
          if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar7) {
            local_2d8 = local_60;
            uVar4 = local_60;
            goto LAB_1499ef6d0;
          }
          uVar23 = *(uint *)((longlong)FVar28 + (longlong)iVar7 * 4);
        }
        uVar19 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_20c = (int)lVar21;
        local_2d8 = (uVar33 - 1) + local_20c;
        uVar4 = local_2d8;
        if ((int)local_60 < (int)local_2d8) {
          local_2d8 = local_60;
          uVar4 = local_60;
        }
      }
LAB_1499ef6d0:
      while( true ) {
        plVar32 = local_198;
        if ((int)local_198[1] - *(int *)((longlong)local_198 + 0x34) != (int)uStack_170) {
          local_2e8 = (<lambda_1>)0x0;
          `TSparseArray<TSparseSetElement<TTuple<FString_const_*,PCG::Private::FParseTagResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e8);
        }
        cVar26 = local_2e7;
        <Var25 = local_2e8;
        if (((TStack_190.CurrentBitIndex == uVar4) &&
            (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar32 == (longlong *)local_88)) break;
        plVar32 = (longlong *)((longlong)TStack_190.CurrentBitIndex * 0x58 + *plVar32);
        if (*(int *)((longlong)plVar32 + 0x24) == -1) {
          pFVar30 = (FString *)(plVar32 + 1);
        }
        else {
          pFVar30 = (FString *)(plVar32 + 3);
          if ((*(int *)((longlong)plVar32 + 0x24) == -1) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar35)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        pUVar10 = local_2e0;
        this_02 = TMapBase<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>
                  ::Find((TMapBase<FString,FPCGAttributePropertyOutputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyOutputSelector,0>_>
                          *)&local_2e0->field_0xc8,pFVar30);
        if ((*(int *)(&pUVar10->field_0xc8 + 8) == *(int *)(&pUVar10->field_0xc8 + 0x34)) ||
           (this_02 != (FPCGAttributePropertyOutputSelector *)0x0)) {
          if ((int)plVar32[2] == 0) {
            pwVar22 = L"";
          }
          else {
            pwVar22 = (wchar_t *)plVar32[1];
          }
          ::FName::FName(&local_2b8,pwVar22);
          FVar5 = local_2b8;
          if (this_02 != (FPCGAttributePropertyOutputSelector *)0x0) {
            local_278.ComparisonIndex.Value = 0;
            local_278.Number = 0;
            FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                      ((FPCGAttributePropertyInputSelector *)&local_1d8);
            FPCGAttributePropertySelector::SetDomainName(&local_1d8,local_278,true);
            FPCGAttributePropertySelector::SetAttributeName(&local_1d8,FVar5,true);
            DestructItems<FString,int>
                      ((FString *)local_1d8.ExtraNames.AllocatorInstance.Data,
                       local_1d8.ExtraNames.ArrayNum);
            local_1d8.ExtraNames.ArrayNum = 0;
            if (local_1d8.ExtraNames.ArrayMax == 0) {
              local_1d8.ExtraNames.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,local_1d8.ExtraNames.ArrayMax,
                         &local_1d8.ExtraNames.AllocatorInstance,0,&local_1d8.ExtraNames.ArrayMax);
              ConstructItems<FString,FString,int>
                        (local_1d8.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
            }
            FPCGAttributePropertyOutputSelector::CopyAndFixSource
                      (this_02,(FPCGAttributePropertyOutputSelector *)&local_108,
                       (FPCGAttributePropertyInputSelector *)&local_1d8,
                       (local_2b0->Data).Data.field0_0x0.DebugPtr);
            local_2b8 = FPCGAttributePropertySelector::GetName(&local_108);
            local_2b8 = *(FName *)local_2b8;
            DestructItems<FString,int>
                      ((FString *)local_108.ExtraNames.AllocatorInstance.Data,
                       local_108.ExtraNames.ArrayNum);
            if (local_108.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.ExtraNames.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_1d8.ExtraNames.AllocatorInstance.Data,
                       local_1d8.ExtraNames.ArrayNum);
            if (local_1d8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.ExtraNames.AllocatorInstance.Data);
            }
          }
          local_238 = local_2b8;
          if ((local_2b8.ComparisonIndex.Value.Value == 0xffffffff) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar35)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          bVar35 = PCG::Private::SetAttributeFromTag
                             ((FParseTagResult *)(plVar32 + 1),pFVar13,0,CreateAttribute,
                              (TOptional<FName>)&local_238);
          if (bVar35) {
            if ((&local_2e0->field_0xc8)[0x50] != '\0') {
              if ((*plVar32 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("It.Key",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGDataAttributesAndTags.cpp"
                                      ,0x112,L""), bVar35)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              pFVar24 = local_230;
              pFVar30 = (FString *)*plVar32;
              if (*(int *)&(local_230->Tags).Elements.field_0x8 !=
                  *(int *)&(local_230->Tags).Elements.field_0x34) {
                iVar7 = (pFVar30->Data).ArrayNum;
                if (iVar7 == 0) {
                  pwVar22 = L"";
                  iVar7 = 0;
                }
                else {
                  pwVar22 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
                  iVar7 = iVar7 + -1;
                }
                uVar23 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar22);
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                          (&pFVar24->Tags,uVar23,pFVar30);
              }
            }
          }
          else {
            pFVar15 = FText::FromString(&local_c8,pFVar30);
            pFVar16 = FText::AsLocalizable_Advanced_LocText
                                (local_128,L"PCGDataAttributesAndTagsElement",L"InvalidTag",
                                 L"Failed to parse tag {0}");
            pFVar17 = FTextFormat::FTextFormat(local_b8,pFVar16,Default);
            local_148.Type = Text;
            FText::FText((FText *)&local_148.TextValue,pFVar15);
            if ((local_148.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar35)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2d0.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_2d0.AllocatorInstance,1,&local_2d0.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_2d0.AllocatorInstance.Data,&local_148,1);
            local_168.TextFormatData.Object = (pFVar17->TextFormatData).Object;
            local_168.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar17->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_168.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_168.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_168.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_158,&local_168,&local_2d0);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
            if ((FFormatArgumentValue *)local_2d0.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_2d0.AllocatorInstance.Data);
            }
            if (local_148.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_148.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar17->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar2 = (pFVar15->TextData).Reference;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
            }
            PCGLog::LogErrorOnGraph(&local_158,local_270);
            if (local_158.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
            }
            if (local_128[0].TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_128[0].TextData.Reference + 0x10))();
            }
          }
        }
        TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FString_const_*,PCG::Private::FParseTagResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString_const_*,PCG::Private::FParseTagResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString_const_*,PCG::Private::FParseTagResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      pFVar24 = local_220;
      FVar31.Data = (FScriptContainerElement *)local_2b0;
      param_1 = local_270;
      pFVar34 = local_228;
      goto LAB_1499efbad;
    }
    iVar7 = (pFVar34->TaggedData).ArrayNum;
    piVar1 = &(pFVar34->TaggedData).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,(ForAnyElementType *)pFVar34,piVar1);
    }
    (pFVar34->TaggedData).ArrayNum = iVar7 + 1;
    FPCGTaggedData::FPCGTaggedData
              ((FPCGTaggedData *)
               ((pFVar34->TaggedData).AllocatorInstance.Data + (longlong)iVar7 * 0x78),
               (FPCGTaggedData *)FVar31.Data);
    uVar19 = (ulonglong)local_2c0;
    FVar31.Data = FVar31.Data + 0x78;
  } while( true );
}

// ExecutionLoopMode @ 1499f1a90

EPCGElementExecutionLoopMode __thiscall
FPCGTagsToDataAttributesElement::ExecutionLoopMode
          (FPCGTagsToDataAttributesElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149a102a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGTagsToDataAttributesElement::SupportsBasePointDataInputs
          (FPCGTagsToDataAttributesElement *this,FPCGContext *param_1)

{
  return true;
}

