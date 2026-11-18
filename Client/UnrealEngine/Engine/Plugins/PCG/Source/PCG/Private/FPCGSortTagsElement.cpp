// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// operator() @ 149bf0090

bool __thiscall
`FPCGSortTagsElement::ExecuteInternal'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData **param_1,FPCGTaggedData **param_2)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FParseTagResult *pFVar8;
  FParseTagResult *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  
  pwVar11 = L"";
  if ((*param_1 == (FPCGTaggedData *)0x0) || (*param_2 == (FPCGTaggedData *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("A && B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortTags.cpp"
                       ,0x66,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar8 = TMapBase<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
           ::FindChecked(*(TMapBase<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
                           **)((longlong)this + 8),*param_1);
  pFVar9 = TMapBase<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
           ::FindChecked(*(TMapBase<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
                           **)((longlong)this + 8),*param_2);
  iVar3 = (pFVar8->Attribute).Data.ArrayNum;
  bVar5 = 1 < iVar3;
  if ((1 < iVar3) && (1 < (pFVar9->Attribute).Data.ArrayNum)) {
    iVar3 = *(int *)((longlong)&(pFVar8->Value).field0_0x0 + 0xc);
    bVar5 = iVar3 != -1;
    if ((bVar5) && (*(int *)((longlong)&(pFVar9->Value).field0_0x0 + 0xc) != -1)) {
      bVar2 = *(byte *)((longlong)this + 1);
      if (*(char *)this == '\0') {
        if (iVar3 == -1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        if (*(int *)((longlong)&(pFVar9->Value).field0_0x0 + 8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar9->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
        }
        if (*(int *)((longlong)&(pFVar8->Value).field0_0x0 + 8) != 0) {
          pwVar11 = (wchar_t *)(pFVar8->Value).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
        }
        uVar7 = FGenericPlatformStricmp::Stricmp(pwVar11,pwVar10);
        uVar7 = uVar7 >> 0x1f;
      }
      else {
        if ((pFVar8->NumericValue).bIsSet == false) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        dVar1 = (pFVar8->NumericValue).TypedValue;
        if ((pFVar9->NumericValue).bIsSet == false) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        uVar7 = (uint)(dVar1 < (pFVar9->NumericValue).TypedValue);
      }
      bVar5 = bVar2 == uVar7;
    }
  }
  return bVar5;
}

// ExecuteInternal @ 149c1ec80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGSortTagsElement::ExecuteInternal(FPCGSortTagsElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  UPCGNode *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  FPCGTaggedData *pFVar5;
  code *pcVar6;
  FString *pFVar7;
  char cVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  FPCGContext *pFVar10;
  FParseTagResult *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  UClass *pUVar15;
  UPCGSettings *pUVar16;
  TObjectPtr<UPCGSettings>_u_0 TVar17;
  FPCGTaggedData *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined8 uVar27;
  ForElementType<unsigned_int> FVar28;
  ulonglong *puVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  ForAnyElementType FVar33;
  uint uVar34;
  undefined1 auStackY_308 [32];
  FIdentityFunctor local_2b8;
  char local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  ForAnyElementType local_2b0;
  uint local_2a8;
  uint uStack_2a4;
  TBitArray<FDefaultBitArrayAllocator> *local_2a0;
  FScriptContainerElement *local_298;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_290;
  uint local_280;
  TObjectPtr<UPCGSettings>_u_0 local_278;
  uint local_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  undefined4 local_260;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  FScriptContainerElement *local_250;
  undefined8 local_248;
  void *local_240;
  undefined4 local_238;
  int local_234;
  void *local_230;
  undefined4 local_228;
  int local_224;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_217;
  undefined1 local_20f;
  undefined4 local_20e;
  undefined2 local_20a;
  FParseTagResult local_208;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  FPCGContext *local_178;
  undefined4 local_170;
  int local_16c;
  undefined1 local_168;
  undefined1 uStack_167;
  undefined6 uStack_166;
  TMap<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
  *pTStack_160;
  FString local_158;
  int local_148;
  int local_144;
  FParseTagResult *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [8];
  FParseTagResult *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FScriptContainerElement **local_d8;
  FParseTagResult *local_d0;
  FScriptContainerElement **local_c8;
  FScriptContainerElement **local_c0;
  <lambda_1> local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_178 = param_1;
  if (CpuChannel->Enabled < 0) {
    local_2b7 = '\0';
  }
  else {
    local_2b7 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"FPCGSortTagsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortTags.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortTags.cpp"
                          ,0x33,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar16 = UPCGNode::GetSettings(this_00), pUVar16 == (UPCGSettings *)0x0)) {
      pFVar18 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSortTagsSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,(<lambda_1>)local_2b8);
      if (pFVar18 != (FPCGTaggedData *)0x0) {
        local_278.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar18->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_278.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_278.DebugPtr);
        }
        if (local_278.DebugPtr != (UPCGSettings *)0x0) {
          pUVar15 = UPCGSortTagsSettings::StaticClass();
          bVar12 = FObjectPtr::IsA(&local_278.ObjectPtr,pUVar15);
          TVar17 = local_278;
          if (bVar12) goto LAB_149c1ee24;
        }
      }
    }
    else {
      pUVar16 = UPCGNode::GetSettings(this_00);
      TVar17.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar16);
      if (TVar17.DebugPtr != (UPCGSettings *)0x0) {
        pUVar15 = UPCGSortTagsSettings::StaticClass();
        iVar14 = (int)pUVar15->_padding_;
        if ((iVar14 <= *(int *)((TVar17.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar17.DebugPtr)->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar15->_padding_)) goto LAB_149c1ee24;
      }
    }
    TVar17.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar15 = UPCGSortTagsSettings::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar15);
    TVar17.DebugPtr = (UPCGSettings *)0x0;
    if (bVar12) {
      TVar17.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
  }
LAB_149c1ee24:
  uVar21 = 0;
  if ((TVar17.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSortTags.cpp"
                          ,0x36,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  ::FName::ToString((FName *)(TVar17.DebugPtr + 1),&local_158);
  local_2b4 = (char)TVar17.DebugPtr[1]._padding_ == '\0';
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_290,&PCGPinConstants::DefaultInputLabel);
  iVar14 = local_290.ArrayNum;
  uVar23 = (ulonglong)local_290.ArrayNum;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  uVar34 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = 0;
  uStack_2a4 = 0;
  local_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT71(local_2a0._1_7_,1);
  bVar12 = local_290.ArrayNum < 0;
  if (local_290.ArrayNum == 0) goto LAB_149c1f17f;
  if (bVar12) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar23);
  }
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,local_290.ArrayNum);
  if ((uint)iVar14 < 4) {
    uVar22 = 1;
  }
  else {
    uVar23 = (ulonglong)(((uint)iVar14 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_170 = (undefined4)lVar20;
    uVar22 = 1 << ((byte)lVar20 & 0x1f);
  }
  if ((local_40 == 0) || ((int)local_40 < (int)uVar22)) {
    local_40 = uVar22;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
    }
    if (uVar22 != 0) {
      uVar24 = uVar22;
      if (uVar22 < 2) {
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          uVar24 = 0;
          goto LAB_149c1ef80;
        }
      }
      else {
LAB_149c1ef80:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar24,4);
      }
      if (0 < (int)uVar22) {
        uVar25 = (ulonglong)uVar22;
        uVar23 = uVar21;
        do {
          FVar33.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar33.Data = local_48.Data;
          }
          uVar19 = (longlong)(int)uVar22 - 1U & uVar23;
          uVar23 = uVar23 + 1;
          *(undefined4 *)(FVar33.Data + uVar19 * 4) = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    if (local_40 != 0) {
      pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      local_270 = 0;
      uStack_26c = 1;
      uStack_25c = 0;
      if (local_60 != 0) {
        FVar28 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_68;
        }
        uVar22 = *(uint *)FVar28;
        uVar24 = uVar34;
        uVar23 = uVar21;
        uVar25 = uVar21;
        while (uVar22 == 0) {
          uVar24 = (int)uVar25 + 0x20;
          uVar25 = (ulonglong)uVar24;
          iVar14 = (int)uVar23;
          local_270 = iVar14 + 1;
          uVar23 = (ulonglong)local_270;
          uStack_25c = (ulonglong)uVar24 << 0x20;
          if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_270) {
            uStack_25c = CONCAT44(uVar24,local_60);
            goto LAB_149c1f0a3;
          }
          uVar22 = ((uint *)((longlong)FVar28 + 4))[iVar14];
        }
        uStack_26c = -uVar22 & uVar22;
        uVar23 = (ulonglong)uStack_26c * 2 + 1;
        lVar20 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_16c = (int)lVar20;
        iVar14 = local_16c + -1 + uVar24;
        if (local_60 < iVar14) {
          iVar14 = local_60;
        }
        uStack_25c._4_4_ = (int)((ulonglong)uStack_25c >> 0x20);
        uStack_25c = CONCAT44(uStack_25c._4_4_,iVar14);
      }
LAB_149c1f0a3:
      local_260 = 0xffffffff;
      local_1b8 = (longlong *)local_88;
      local_1b0._padding_ = CONCAT44(uStack_26c,local_270);
      local_1b0.UnvisitedBitMask = 0xffffffff;
      local_1b0.CurrentBitIndex = (int)uStack_25c;
      local_1b0.BaseBitIndex = uStack_25c._4_4_;
      local_1b0._28_4_ = uStack_254;
      local_1b0.Array = pTStack_268;
      if ((int)uStack_25c < local_60) {
        do {
          puVar29 = (ulonglong *)((longlong)local_1b0.CurrentBitIndex * 0x58 + *local_1b8);
          uVar22 = ((uint)(*puVar29 >> 0x14) & 0xffff ^ (uint)(*puVar29 >> 4)) * -0x7a143595;
          uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
          uVar22 = (uVar22 >> 0x10 ^ uVar22) & local_40 - 1;
          *(uint *)((longlong)puVar29 + 0x54) = uVar22;
          FVar33.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar33.Data = local_48.Data;
          }
          lVar20 = (longlong)(int)(local_40 - 1 & uVar22);
          *(undefined4 *)(puVar29 + 10) = *(undefined4 *)(FVar33.Data + lVar20 * 4);
          *(int *)(FVar33.Data + lVar20 * 4) = local_1b0.CurrentBitIndex;
          local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
        } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
      }
    }
  }
  uVar23 = (ulonglong)(uint)local_290.ArrayNum;
  bVar12 = local_290.ArrayNum < 0;
LAB_149c1f17f:
  if (bVar12) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar23 & 0xffffffff);
  }
  if ((int)uStack_2a4 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)uVar23,&local_2b0,local_2a8,(int *)&uStack_2a4);
    uVar23 = (ulonglong)(uint)local_290.ArrayNum;
  }
  local_280 = (uint)uVar23;
  uVar25 = (ulonglong)(int)local_280;
  pFVar31 = local_290.AllocatorInstance.Data + 0x38;
  local_180 = local_290.AllocatorInstance.Data + uVar25 * 0x78;
  uVar22 = (uint)local_2a0;
LAB_149c1f1e5:
  pFVar30 = local_180;
  if ((int)uVar23 != (int)uVar25) {
    local_2b6 = 0;
    `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_2b6);
  }
  pFVar2 = pFVar31 + -0x38;
  if (pFVar2 == pFVar30) {
    uStack_167 = local_2b4;
    pTStack_160 = (TMap<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>_>
                   *)local_88;
    local_168 = (undefined1)uVar22;
    local_b8[0].bSortAscending = (bool)local_2b4;
    local_b8[0].bSortUsingNumericValues = (bool)local_168;
    local_b8[0]._2_6_ = uStack_166;
    local_b8[0].TagResults = pTStack_160;
    AlgoImpl::
    StableSortInternal<FPCGTaggedData_const_*,FIdentityFunctor,_FPCGSortTagsElement::ExecuteInternal_::__l2::<lambda_1>_>
              ((FPCGTaggedData **)local_2b0.Data,local_2a8,local_2b8,local_b8);
    pFVar10 = local_178;
    uVar34 = local_2a8;
    cVar8 = local_2b7;
    uVar21 = (ulonglong)(int)local_2a8;
    pFVar31 = local_2b0.Data + uVar21 * 8;
    FVar33.Data = local_2b0.Data;
    while( true ) {
      if ((uint)uVar21 != uVar34) {
        local_2b8 = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FPCGTaggedData_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2b8);
      }
      if (FVar33.Data == pFVar31) break;
      pFVar18 = *(FPCGTaggedData **)FVar33.Data;
      pFVar5 = (FPCGTaggedData *)(pFVar10->OutputData).TaggedData.AllocatorInstance.Data;
      if (((pFVar5 <= pFVar18) && (pFVar18 < pFVar5 + (pFVar10->OutputData).TaggedData.ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar14 = (pFVar10->OutputData).TaggedData.ArrayNum;
      piVar1 = &(pFVar10->OutputData).TaggedData.ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)&pFVar10->OutputData,piVar1);
      }
      (pFVar10->OutputData).TaggedData.ArrayNum = iVar14 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((pFVar10->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar14 * 0x78)
                 ,pFVar18);
      uVar21 = (ulonglong)local_2a8;
      FVar33.Data = FVar33.Data + 8;
    }
    if (local_2b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data);
    }
    local_40 = 0;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<FPCGTaggedData_const_*,PCG::Private::FParseTagResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPCGTaggedData_const_*,PCG::Private::FParseTagResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPCGTaggedData_const_*,PCG::Private::FParseTagResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_290.AllocatorInstance.Data,local_290.ArrayNum);
    if ((FPCGTaggedData *)local_290.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (cVar8 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return true;
  }
  local_298 = pFVar2;
  if (((local_2b0.Data <= (FScriptContainerElement *)&local_298) &&
      ((FScriptContainerElement *)&local_298 < local_2b0.Data + (longlong)(int)uStack_2a4 * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  if (local_2a8 == uStack_2a4) {
    local_2a8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_2b0,(int *)&uStack_2a4);
  }
  lVar20 = (longlong)(int)local_2a8;
  uStack_134 = 1;
  local_2a8 = local_2a8 + 1;
  *(FScriptContainerElement **)(local_2b0.Data + lVar20 * 8) = local_298;
  uVar24 = *(uint *)pFVar31;
  uStack_138 = uVar34;
  uStack_124 = uVar34;
  local_120 = uVar34;
  if (uVar24 != 0) {
    pFVar30 = *(FScriptContainerElement **)(pFVar31 + -8);
    if (pFVar30 == (FScriptContainerElement *)0x0) {
      pFVar30 = pFVar31 + -0x18;
    }
    uVar32 = *(uint *)pFVar30;
    uVar23 = uVar21;
    uVar25 = uVar21;
    while( true ) {
      uStack_138 = (uint)uVar23;
      local_120 = (uint)uVar25;
      if (uVar32 != 0) break;
      uStack_138 = uStack_138 + 1;
      uVar23 = (ulonglong)uStack_138;
      local_120 = local_120 + 0x20;
      uVar25 = (ulonglong)local_120;
      uStack_124 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
      goto LAB_149c1f341;
      uVar32 = *(uint *)(pFVar30 + (longlong)(int)uStack_138 * 4);
    }
    uStack_134 = -uVar32 & uVar32;
    uVar23 = (ulonglong)uStack_134 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_148 = (int)lVar20;
    uStack_124 = (local_120 - 1) + local_148;
    if ((int)uVar24 < (int)uStack_124) {
      uStack_124 = uVar24;
    }
  }
LAB_149c1f341:
  local_140 = (FParseTagResult *)(pFVar31 + -0x28);
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar31 + -0x18);
  local_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar31 + -0x18);
  uStack_11c = local_8c;
  iStack_118 = *(uint *)(pFVar31 + -0x20) - *(uint *)(pFVar31 + 0xc);
  uVar32 = uVar24 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(uStack_134,uStack_138);
  uStack_128 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_124;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar24 >> 5;
  TStack_100._28_4_ = local_8c;
  TStack_100.BaseBitIndex = local_120;
  uStack_e0 = CONCAT44(uStack_114,iStack_118);
  local_108 = local_140;
  TStack_100.Array = local_130;
  if (((int)uVar24 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  pTVar9 = local_2a0;
  uVar3 = *(uint *)pFVar31;
  if (uVar24 != uVar3) {
    pTVar4 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &(local_2a0->AllocatorInstance).SecondaryData.field_0x0;
    pTVar26 = local_2a0;
    if (pTVar4 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar26 = pTVar4;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) &
             *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar24 == 0) {
      iVar14 = iVar14 + 1;
      uVar32 = uVar32 + 0x20;
      uVar24 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar14) goto LAB_149c1f490;
      uVar24 = *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    }
    uVar23 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_144 = (int)lVar20;
    uVar24 = (uVar32 - 1) + local_144;
    if ((int)uVar3 < (int)uVar24) {
      uVar24 = uVar3;
    }
  }
LAB_149c1f490:
  do {
    pFVar11 = local_108;
    if ((local_108->Attribute).Data.ArrayNum -
        *(int *)((longlong)&(local_108->NumericValue).TypedValue + 4) != (int)uStack_e0) {
      local_2b5 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b5);
    }
    if (((TStack_100.CurrentBitIndex == uVar24) && (TStack_100.Array == pTVar9)) &&
       (pFVar11 == (FParseTagResult *)(pFVar31 + -0x28))) {
      local_190 = pFVar31 + -0x38;
      local_220 = 0;
      local_c8 = &local_190;
      local_217 = 0;
      local_c0 = &local_250;
      local_20e = 0;
      local_20a = 0;
      local_250 = (FScriptContainerElement *)0x0;
      local_248 = 0;
      local_240 = (void *)0x0;
      local_238 = 0;
      local_234 = -1;
      local_230 = (void *)0x0;
      local_228 = 0;
      local_224 = -1;
      local_218 = 0;
      local_20f = 0;
      TSet<TTuple<FPCGTaggedData_const_*,PCG::Private::FParseTagResult>,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPCGTaggedData_const_*_&&,PCG::Private::FParseTagResult_&&>_>
                ((TSet<TTuple<FPCGTaggedData_const_*,PCG::Private::FParseTagResult>,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>,FDefaultSetAllocator>
                  *)local_88,
                 (TPairInitializer<FPCGTaggedData_const_*_&&,PCG::Private::FParseTagResult_&&> *)
                 local_110,(bool *)&local_c8);
      if ((local_224 != -1) && (local_230 != (void *)0x0)) {
        FMemory::Free(local_230);
      }
      FVar33.Data = local_250;
      if ((local_234 != -1) && (local_240 != (void *)0x0)) {
        FMemory::Free(local_240);
        FVar33.Data = local_250;
      }
      goto LAB_149c1f6c2;
    }
    PCG::Private::ParseTag
              (&local_208,
               (FString *)
               ((pFVar11->Attribute).Data.AllocatorInstance.Data +
               (longlong)TStack_100.CurrentBitIndex * 0x18));
    if (1 < local_208.Attribute.Data.ArrayNum) {
      if (local_208.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax == -1) {
        pFVar7 = &local_208.Attribute;
        uVar27 = local_208.Attribute.Data.AllocatorInstance.Data;
      }
      else {
        pFVar7 = (FString *)&local_208.OriginalAttribute;
        uVar27 = local_208.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
      }
      iVar14 = *(int *)((longlong)&pFVar7->Data + 8);
      if (iVar14 == local_158.Data.ArrayNum) {
        if (iVar14 < 2) break;
        iVar14 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)uVar27,(wchar_t *)local_158.Data.AllocatorInstance.Data);
        bVar12 = iVar14 == 0;
      }
      else {
        bVar12 = iVar14 + local_158.Data.ArrayNum == 1;
      }
      if (bVar12) break;
    }
    if ((local_208.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_208.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_208.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
    }
    if ((local_208.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_208.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_208.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance
                            .Data);
    }
    if (local_208.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Attribute.Data.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
  if ((local_208.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (uVar22 = uVar22 & 0xff, local_208.NumericValue.bIsSet == false)) {
    uVar22 = uVar34;
  }
  local_188 = pFVar31 + -0x38;
  local_d8 = &local_188;
  local_d0 = &local_208;
  TSet<TTuple<FPCGTaggedData_const_*,PCG::Private::FParseTagResult>,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FPCGTaggedData_const_*_&&,PCG::Private::FParseTagResult_&&>_>
            ((TSet<TTuple<FPCGTaggedData_const_*,PCG::Private::FParseTagResult>,TDefaultMapHashableKeyFuncs<FPCGTaggedData_const_*,PCG::Private::FParseTagResult,0>,FDefaultSetAllocator>
              *)local_88,
             (TPairInitializer<FPCGTaggedData_const_*_&&,PCG::Private::FParseTagResult_&&> *)
             (local_110 + 4),(bool *)&local_d8);
  if ((local_208.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_208.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_208.Value.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
  }
  FVar33.Data = local_208.Attribute.Data.AllocatorInstance.Data;
  if ((local_208.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_208.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_208.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.
                          Data);
    FVar33.Data = local_208.Attribute.Data.AllocatorInstance.Data;
  }
LAB_149c1f6c2:
  if (FVar33.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar33.Data);
  }
  uVar23 = (ulonglong)(uint)local_290.ArrayNum;
  pFVar31 = pFVar31 + 0x78;
  uVar25 = (ulonglong)local_280;
  goto LAB_149c1f1e5;
}

// SupportsBasePointDataInputs @ 149c358d0

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
FPCGSortTagsElement::SupportsBasePointDataInputs(FPCGSortTagsElement *this,FPCGContext *param_1)

{
  return true;
}

