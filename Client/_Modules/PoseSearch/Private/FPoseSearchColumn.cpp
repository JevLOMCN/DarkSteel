// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 15

// StaticStruct @ 14a898bd0

UScriptStruct * __cdecl FPoseSearchColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchColumn,(UObject *)pUVar1,
                         L"PoseSearchColumn");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchColumn.OuterSingleton;
}

// FPoseSearchColumn @ 14a8abd70

FPoseSearchColumn * __thiscall FPoseSearchColumn::FPoseSearchColumn(FPoseSearchColumn *this)

{
  (this->InternalDatabase).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  this->_padding_ = (longlong)&___7FPoseSearchColumn__6B_;
  this->PoseReselectHistory = 0.3;
  this->MaxNumberOfResults = 1;
  FInstancedStruct::FInstancedStruct(&this->InterruptMode);
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  this->NullInputValue = (FPoseSearchColumnNullInputValue)&___7FPoseSearchColumnNullInputValue__6B_;
  FInstancedStruct::FInstancedStruct(&this->OutputStartTime);
  FInstancedStruct::FInstancedStruct(&this->OutputMirror);
  FInstancedStruct::FInstancedStruct(&this->OutputForceBlendTo);
  FInstancedStruct::FInstancedStruct(&this->OutputCost);
  return this;
}

// CheckConsistency @ 14a8b1e90

void __thiscall FPoseSearchColumn::CheckConsistency(FPoseSearchColumn *this)

{
  return;
}

// DeinitializeScratchArea @ 14a8b23b0

void __thiscall
FPoseSearchColumn::DeinitializeScratchArea
          (FPoseSearchColumn *this,TArrayView<unsigned_char,int> *param_1)

{
  uchar *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = (**(code **)(this->_padding_ + 0x60))();
  if (param_1->ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScratchArea.Num() == GetScratchAreaSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                       ,0x2dd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = param_1->DataPtr;
  if (*(FPoseSearchColumn **)(puVar1 + 0x20) != this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseSearchColumnScratchArea->DebugOwner == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                       ,0x2e0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pvVar2 = *(void **)puVar1;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// Filter @ 14a8b81d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPoseSearchColumn::Filter
          (FPoseSearchColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3,TArrayView<unsigned_char,int> *param_4)

{
  int *piVar1;
  FIndexData *pFVar2;
  int iVar3;
  UScriptStruct *pUVar4;
  UPoseSearchSchema *this_00;
  UPoseSearchDatabase *pUVar5;
  code *pcVar6;
  FIndexData FVar7;
  FChooserIndexArray *pFVar8;
  FChooserEvaluationContext *pFVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  UPackage *pUVar13;
  UScriptStruct *pUVar14;
  FPoseHistoryProvider *this_01;
  IPoseHistory *pIVar15;
  FPoseSearchDatabaseAnimationAsset *pFVar16;
  FName FVar17;
  FChooserParameterEnumBase *pFVar18;
  FSearchIndexAsset *pFVar19;
  UPoseSearchDatabase *pUVar20;
  undefined8 uVar21;
  FSearchResult *pFVar22;
  longlong *plVar23;
  EPoseSearchInterruptMode EVar24;
  longlong lVar25;
  uint uVar26;
  ForElementType<FStructView> FVar27;
  FIndexData *pFVar28;
  ForAnyElementType *pFVar29;
  FScriptContainerElement *pFVar30;
  ForElementType<FStructView> FVar31;
  undefined1 auStackY_3e18 [32];
  EPoseSearchInterruptMode local_3dc8;
  undefined1 local_3dc7 [7];
  FIndexData local_3dc0;
  undefined1 local_3db8 [12];
  float fStack_3dac;
  undefined8 local_3da8;
  undefined4 local_3da0;
  IPoseHistory *local_3d98;
  FChooserIndexArray *local_3d90;
  FFloatInterval local_3d88;
  TObjectPtr<UPoseSearchDatabase>_u_0 local_3d80;
  FChooserIndexArray *local_3d78;
  FPoseSearchEvent local_3d70;
  TObjectPtr<UObject_const_>_u_0 local_3d58;
  undefined4 local_3d50;
  FScriptContainerElement local_3d4c;
  double local_3d48;
  double dStack_3d40;
  double local_3d38;
  undefined2 local_3d30;
  undefined8 local_3d28;
  UObject *local_3d20;
  undefined8 local_3d18;
  ForAnyElementType *local_3d10;
  FChooserEvaluationContext *local_3d08;
  FName local_3d00;
  IPoseHistory *local_3cf8;
  TReferenceControllerBase<1> *pTStack_3cf0;
  TObjectPtr<UPoseSearchDatabase>_u_0 *local_3ce8;
  undefined4 uStack_3ce0;
  undefined4 uStack_3cdc;
  TObjectPtr<UPoseSearchDatabase>_u_0 *local_3cd8;
  undefined4 uStack_3cd0;
  undefined4 uStack_3ccc;
  undefined1 local_3cc8 [16];
  undefined8 local_3cb8;
  undefined4 local_3cb0;
  undefined1 local_3cac [16];
  undefined8 local_3c9c;
  undefined4 local_3c94;
  TArrayView<UObject_const_*,int> local_3c88;
  TArrayView<UObject_const_*,int> local_3c78;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  local_3c68;
  FSearchResults_Single local_3b98;
  undefined1 local_3a78 [128];
  longlong local_39f8 [3];
  longlong *local_39e0;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_3978;
  undefined4 local_2d78;
  undefined1 local_2d68 [232];
  void *local_2c80;
  undefined4 local_2c78;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *local_2c70;
  ForAnyElementType local_2c68;
  int local_2c60;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_2be8;
  undefined4 local_b20;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_978;
  undefined4 local_c0;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b0;
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14a8b81ef;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3e18;
  local_3dc0 = (FIndexData)this;
  local_3d90 = param_2;
  local_3d78 = param_3;
  local_3d08 = param_1;
  iVar12 = (**(code **)(this->_padding_ + 0x60))();
  if ((param_4->ArrayNum != iVar12) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScratchArea.Num() == GetScratchAreaSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                          ,0x1a7,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar29 = (ForAnyElementType *)param_4->DataPtr;
  local_3d10 = pFVar29;
  if (((FPoseSearchColumn *)pFVar29[4].Data != this) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseSearchColumnScratchArea->DebugOwner == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                          ,0x1aa,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(int *)&pFVar29[1].Data != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseSearchColumnScratchArea->SearchResults.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                          ,0x1ab,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar23 = (longlong *)(this->InputValue).StructMemory;
  local_3d98 = (IPoseHistory *)0x0;
  local_3cf8 = (IPoseHistory *)0x0;
  pTStack_3cf0 = (TReferenceControllerBase<1> *)0x0;
  if ((plVar23 != (longlong *)0x0) &&
     (pUVar4 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0))
  {
    if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase,
                           (UObject *)pUVar13,L"ChooserParameterPoseHistoryBase");
    }
    if (pUVar4 != Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton)
    {
      if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar13 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase,
                             (UObject *)pUVar13,L"ChooserParameterPoseHistoryBase");
        if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14a8b837a;
      }
      iVar12 = (int)(Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.
                    OuterSingleton)->_padding_;
      if (((int)pUVar4->_padding_ < iVar12) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar12 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton)->
           _padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) goto LAB_14a8b837a;
    }
    cVar11 = (**(code **)(*plVar23 + 0x40))(plVar23,param_1,&local_3cf8);
    local_3d98 = (IPoseHistory *)0x0;
    if (cVar11 != '\0') {
      local_3d98 = local_3cf8;
    }
  }
LAB_14a8b837a:
  FVar27 = (param_1->Params).AllocatorInstance.SecondaryData;
  iVar12 = (param_1->Params).ArrayNum;
  if (FVar27 == (ForElementType<FStructView>)0x0) {
    FVar27 = (ForElementType<FStructView>)&param_1->Params;
  }
  FVar31 = (ForElementType<FStructView>)((longlong)iVar12 * 0x10 + (longlong)FVar27);
  while( true ) {
    if ((param_1->Params).ArrayNum != iVar12) {
      local_3dc7[0] = 0;
      `TCheckedPointerIterator<FStructView_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3dc7);
    }
    if (FVar27 == FVar31) break;
    pFVar30 = *(FScriptContainerElement **)((longlong)FVar27 + 8);
    if ((pFVar30 != (FScriptContainerElement *)0x0) &&
       (pUVar4 = *(UScriptStruct **)FVar27, pUVar4 != (UScriptStruct *)0x0)) {
      pUVar14 = FChooserPlayerSettings::StaticStruct();
      if (pUVar4 == pUVar14) goto LAB_14a8b8409;
      pUVar14 = FChooserPlayerSettings::StaticStruct();
      if (pUVar14 != (UScriptStruct *)0x0) {
        iVar3 = (int)pUVar14->_padding_;
        if (((int)pUVar4->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar14->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14a8b8409;
      }
    }
    FVar27 = (ForElementType<FStructView>)((longlong)FVar27 + 0x10);
  }
  pFVar30 = (FScriptContainerElement *)0x0;
LAB_14a8b8409:
  pFVar29[3].Data = pFVar30;
  pIVar15 = local_3d98;
  if ((local_3d98 == (IPoseHistory *)0x0) &&
     ((((pFVar30 == (FScriptContainerElement *)0x0 ||
        (*(FAnimationBaseContext **)(pFVar30 + 0x68) == (FAnimationBaseContext *)0x0)) ||
       (this_01 = FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>
                            (*(FAnimationBaseContext **)(pFVar30 + 0x68)),
       this_01 == (FPoseHistoryProvider *)0x0)) ||
      (pIVar15 = UE::PoseSearch::FPoseHistoryProvider::GetPoseHistory(this_01),
      pIVar15 == (IPoseHistory *)0x0)))) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    goto LAB_14a8b8c98;
  }
  FVar7 = local_3dc0;
  local_3c68.Elements._168_8_ = _UNK_150631d78;
  local_3c68.Elements._160_8_ = ___xmm_00000000ffffffff0000002000000000;
  pFVar29[2].Data = (FScriptContainerElement *)pIVar15;
  pFVar28 = local_3d90->Data;
  local_3c68.Elements._128_8_ = 0;
  local_3c68.Elements._136_4_ = 0;
  local_3c68.Elements._140_4_ = 8;
  pFVar2 = pFVar28 + local_3d90->Size;
  local_3c68.Elements._152_8_ = 0;
  local_3c68.Hash.SecondaryData.Data = (FSetElementId *)0x0;
  local_3c68.HashSize = 0;
  if (pFVar28 != pFVar2) {
    do {
      uVar26 = pFVar28->Index;
      iVar12 = 0;
      if (uVar26 != 0xfffffffe) {
        if (((int)uVar26 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("RowIndex >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                                ,0x22,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = uVar26 + 1;
      }
      pFVar16 = UPoseSearchDatabase::GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                          ((((TObjectPtr<UPoseSearchDatabase> *)((longlong)FVar7 + 8))->field0_0x0).
                           DebugPtr,iVar12);
      if (pFVar16 == (FPoseSearchDatabaseAnimationAsset *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5392904247031365165>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                            ,0x1d3,"Asset");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        local_3d18 = (**(code **)(pFVar16->_padding_ + 8))(pFVar16);
        TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
        ::Emplace<UObject_const_*_const_&>(&local_3c68,&local_3d20,(bool *)&local_3d18);
      }
      pFVar28 = pFVar28 + 1;
      pFVar29 = local_3d10;
    } while (pFVar28 != pFVar2);
  }
  pFVar8 = local_3d90;
  if (local_3c68.Elements._136_4_ != local_3c68.Elements._172_4_) {
    local_3d80 = ((TObjectPtr<UPoseSearchDatabase> *)((longlong)FVar7 + 8))->field0_0x0;
    local_3d88 = (FFloatInterval)0x0;
    local_3d70.bEnablePoseFilters = false;
    local_3d70.bUsePlayRateRangeOverride = true;
    local_3d70._padding_ = 0;
    local_3d70.EventTag.TagName.ComparisonIndex.Value = 0;
    local_3d70.EventTag.TagName.Number = 0;
    local_3d70.TimeToEvent = 0.0;
    local_3d70.PlayRateRangeOverride._0_4_ = 0x3f800000;
    local_3d70.PlayRateRangeOverride._4_4_ = 0x3f800000;
    UE::PoseSearch::FSearchContext::FSearchContext
              ((FSearchContext *)local_2d68,0.0,&local_3d88,&local_3d70);
    this_00 = (((((TObjectPtr<UPoseSearchDatabase> *)((longlong)FVar7 + 8))->field0_0x0).DebugPtr)->
              Schema).field0_0x0.DebugPtr;
    local_3d00 = UE::PoseSearch::DefaultRole;
    if (this_00 != (UPoseSearchSchema *)0x0) {
      FVar17 = UPoseSearchSchema::GetDefaultRole(this_00);
      local_3d00 = *(FName *)FVar17;
    }
    pFVar9 = local_3d08;
    UE::PoseSearch::FSearchContext::AddRole
              ((FSearchContext *)local_2d68,&local_3d00,local_3d08,pIVar15);
    if ((local_2c60 != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AssetsToConsider_DEPRECATED.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchContext.h"
                            ,0x14c,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar30 = pFVar29[3].Data;
    local_2c70 = &local_3c68;
    local_3d58.DebugPtr = (UObject *)0x0;
    local_3d50 = 0;
    local_3d4c = (FScriptContainerElement)0x0;
    local_3d30 = 0;
    local_3d28 = 0;
    local_3d48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_3d40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3d38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pFVar30 != (FScriptContainerElement *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(pFVar30 + 0x40) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(pFVar30 + 0x40));
      }
      local_3d58 = *(TObjectPtr<UObject_const_>_u_0 *)(pFVar30 + 0x40);
      pFVar30 = pFVar29[3].Data;
      local_3d50 = *(undefined4 *)(pFVar30 + 0x48);
      local_3d4c = pFVar30[0x4c];
      local_3d48 = *(double *)(pFVar30 + 0x50);
      dStack_3d40 = *(double *)(pFVar30 + 0x58);
      local_3d38 = *(double *)(pFVar30 + 0x60);
      local_3dc8 = DoNotInterrupt;
      if ((*(uchar **)((longlong)FVar7 + 0x20) != (uchar *)0x0) &&
         ((((FInstancedStruct *)((longlong)FVar7 + 0x18))->ScriptStruct).field0_0x0.DebugPtr !=
          (UScriptStruct *)0x0)) {
        pFVar18 = FInstancedStruct::Get<FChooserParameterEnumBase>
                            ((FInstancedStruct *)((longlong)FVar7 + 0x18));
        cVar11 = (**(code **)((longlong)*pFVar18 + 0x40))(pFVar18,pFVar9,&local_3dc8);
        EVar24 = (EPoseSearchInterruptMode)local_3d30;
        if (cVar11 != '\0') {
          EVar24 = local_3dc8;
        }
        local_3d30 = CONCAT11(local_3d30._1_1_,EVar24);
      }
    }
    if (*(int *)((longlong)FVar7 + 0x14) == 1) {
      UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_3b98);
      local_3ce8 = &local_3d80;
      uStack_3ce0 = 1;
      local_3c88._12_4_ = uStack_3cdc;
      local_3c88.ArrayNum = 1;
      local_3c88.DataPtr = (UObject **)local_3ce8;
      UPoseSearchLibrary::MotionMatch
                ((FSearchContext *)local_2d68,&local_3c88,
                 (FPoseSearchContinuingProperties *)&local_3d58.ObjectPtr,
                 (FSearchResults *)&local_3b98);
      UE::Core::Private::Function::CheckCallable((void *)local_3b98._padding_);
      plVar23 = &local_3b98._padding_;
      if ((longlong *)local_3b98._padding_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_3b98._padding_;
      }
      (**(code **)(*plVar23 + 8))();
      (*(code *)local_3b98._padding_)(local_3cc8);
      local_3db8._0_8_ = local_3cc8._0_8_;
      stack0xffffffffffffc250 = local_3cc8._8_8_;
      local_3da0 = local_3cb0;
      local_3da8 = local_3cb8;
      pFVar19 = UE::PoseSearch::FDatabasePoseIdx::GetSearchIndexAsset
                          ((FDatabasePoseIdx *)local_3db8,false);
      if (pFVar19 != (FSearchIndexAsset *)0x0) {
        pUVar20 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_3db8 + 4));
        pUVar5 = (((TObjectPtr<UPoseSearchDatabase> *)((longlong)FVar7 + 8))->field0_0x0).DebugPtr;
        if (pUVar5 == (UPoseSearchDatabase *)0x0) {
          bVar10 = pUVar20 == (UPoseSearchDatabase *)0x0;
        }
        else {
          bVar10 = pUVar5 == pUVar20;
        }
        if ((!bVar10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("BestSearchResult.Database == InternalDatabase",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                                ,0x201,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = pFVar19->SourceAssetIdx;
        if (iVar12 < 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("SearchResultSourceAssetIdx >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                              ,0x205,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("DatabaseAssetIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                              ,0x29,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14a8b8875:
          uVar26 = iVar12 - 1;
          if ((int)uVar26 < 0) goto LAB_14a8b887a;
        }
        else {
          if (iVar12 != 0) goto LAB_14a8b8875;
          uVar26 = 0xfffffffe;
LAB_14a8b887a:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("RowIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                              ,0x208,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((pFVar29->Data <= (FScriptContainerElement *)local_3db8) &&
            ((FScriptContainerElement *)local_3db8 <
             pFVar29->Data + (longlong)*(int *)((longlong)&pFVar29[1].Data + 4) * 0x1c)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)&pFVar29[1].Data;
        piVar1 = (int *)((longlong)&pFVar29[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x41c,pFVar29,piVar1);
        }
        pFVar8 = local_3d78;
        *(int *)&pFVar29[1].Data = iVar12 + 1;
        pFVar30 = pFVar29->Data;
        lVar25 = (longlong)iVar12 * 0x1c;
        *(undefined8 *)(pFVar30 + lVar25) = local_3db8._0_8_;
        *(undefined8 *)(pFVar30 + lVar25 + 8) = stack0xffffffffffffc250;
        *(undefined8 *)(pFVar30 + lVar25 + 0x10) = local_3da8;
        *(undefined4 *)(pFVar30 + lVar25 + 0x18) = local_3da0;
        local_3dc0.Cost = fStack_3dac;
        local_3dc0.Index = uVar26;
        if ((local_3d78->MaxSize <= local_3d78->Size) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Size < MaxSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                ,0x26,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar8->Data[pFVar8->Size] = local_3dc0;
        pFVar8->Size = pFVar8->Size + 1;
      }
      UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_3b98);
    }
    else {
      UE::PoseSearch::FSearchResults_AssetBests::FSearchResults_AssetBests
                ((FSearchResults_AssetBests *)local_3a78);
      local_3cd8 = &local_3d80;
      uStack_3cd0 = 1;
      local_3c78._12_4_ = uStack_3ccc;
      local_3c78.ArrayNum = 1;
      local_3c78.DataPtr = (UObject **)local_3cd8;
      UPoseSearchLibrary::MotionMatch
                ((FSearchContext *)local_2d68,&local_3c78,
                 (FPoseSearchContinuingProperties *)&local_3d58.ObjectPtr,
                 (FSearchResults *)local_3a78);
      UE::Core::Private::Function::CheckCallable((void *)local_3a78._112_8_);
      plVar23 = local_39f8;
      if (local_39e0 != (longlong *)0x0) {
        plVar23 = local_39e0;
      }
      uVar21 = (**(code **)(*plVar23 + 8))();
      (*(code *)local_3a78._112_8_)(local_3cac,uVar21);
      local_3da8 = local_3c9c;
      local_3da0 = local_3c94;
      local_3db8._0_8_ = local_3cac._0_8_;
      stack0xffffffffffffc250 = local_3cac._8_8_;
      if (0 < *(int *)((longlong)FVar7 + 0x14)) {
        UE::PoseSearch::FSearchResults_AssetBests::Shrink
                  ((FSearchResults_AssetBests *)local_3a78,*(int *)((longlong)FVar7 + 0x14));
      }
      pFVar28 = pFVar8->Data;
      pFVar2 = pFVar28 + pFVar8->Size;
      for (; pFVar28 != pFVar2; pFVar28 = pFVar28 + 1) {
        uVar26 = pFVar28->Index;
        if (uVar26 == 0xfffffffe) {
          iVar12 = 0;
        }
        else {
          if (((int)uVar26 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RowIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                                  ,0x22,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = uVar26 + 1;
        }
        pFVar22 = UE::PoseSearch::FSearchResults_AssetBests::FindSearchResultFor
                            ((FSearchResults_AssetBests *)local_3a78,
                             (((TObjectPtr<UPoseSearchDatabase> *)((longlong)FVar7 + 8))->field0_0x0
                             ).DebugPtr,iVar12);
        if (pFVar22 != (FSearchResult *)0x0) {
          if ((((FSearchResult *)pFVar29->Data <= pFVar22) &&
              (pFVar22 < (FSearchResult *)pFVar29->Data + *(int *)((longlong)&pFVar29[1].Data + 4)))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = *(int *)&pFVar29[1].Data;
          piVar1 = (int *)((longlong)&pFVar29[1].Data + 4);
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x41c,pFVar29,piVar1);
          }
          pFVar8 = local_3d78;
          *(int *)&pFVar29[1].Data = iVar12 + 1;
          uVar21 = *(undefined8 *)&pFVar22->field_0x8;
          pFVar30 = pFVar29->Data;
          lVar25 = (longlong)iVar12 * 0x1c;
          *(undefined8 *)(pFVar30 + lVar25) = *(undefined8 *)pFVar22;
          *(undefined8 *)(pFVar30 + lVar25 + 8) = uVar21;
          *(undefined8 *)(pFVar30 + lVar25 + 0x10) = *(undefined8 *)&pFVar22->EventPoseIdx;
          *(undefined4 *)(pFVar30 + lVar25 + 0x18) =
               *(undefined4 *)&pFVar22->bIsContinuingPoseSearch;
          local_3dc0.Cost = (pFVar22->PoseCost).TotalCost;
          local_3dc0.Index = uVar26;
          if ((local_3d78->MaxSize <= local_3d78->Size) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size < MaxSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                  ,0x26,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar8->Data[pFVar8->Size] = local_3dc0;
          pFVar8->Size = pFVar8->Size + 1;
        }
      }
      local_2d78 = 0;
      TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                (&local_3978);
      UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)local_3a78);
    }
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_b0);
    local_c0 = 0;
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              (&local_978);
    local_b20 = 0;
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              (&local_2be8);
    if (local_2c68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c68.Data);
    }
    local_2c78 = 0;
    if (local_2c80 != (void *)0x0) {
      FMemory::Free(local_2c80);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *)(local_2d68 + 0x60));
  }
  local_3c68.HashSize = 0;
  TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            (&local_3c68.Elements);
LAB_14a8b8c98:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3cf0);
  return;
}

// GetDatabaseAsset @ 14a8baa70

UObject * __thiscall FPoseSearchColumn::GetDatabaseAsset(FPoseSearchColumn *this,int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FPoseSearchDatabaseAnimationAsset *pFVar2;
  UObject *pUVar3;
  int iVar4;
  
  if (param_1 == -2) {
    iVar4 = 0;
  }
  else {
    if (param_1 < 0) {
      bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("RowIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                         ,0x22,L"");
      if (bVar1) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        pUVar3 = (UObject *)(*UNRECOVERED_JUMPTABLE)();
        return pUVar3;
      }
    }
    iVar4 = param_1 + 1;
  }
  pFVar2 = UPoseSearchDatabase::GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                     ((this->InternalDatabase).field0_0x0.DebugPtr,iVar4);
  if (pFVar2 != (FPoseSearchDatabaseAnimationAsset *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 8);
                    /* WARNING: Could not recover jumptable at 0x00014a8baad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (UObject *)(*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return pUVar3;
  }
  return (UObject *)0x0;
}

// GetDatabaseSchema @ 14a8bab40

UPoseSearchSchema * __thiscall FPoseSearchColumn::GetDatabaseSchema(FPoseSearchColumn *this)

{
  code *pcVar1;
  bool bVar2;
  UPoseSearchSchema *pUVar3;
  
  if ((this->InternalDatabase).field0_0x0.DebugPtr != (UPoseSearchDatabase *)0x0) {
    return (((this->InternalDatabase).field0_0x0.DebugPtr)->Schema).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InternalDatabase",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                     ,0x191,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UPoseSearchSchema *)(*pcVar1)();
    return pUVar3;
  }
  return (((this->InternalDatabase).field0_0x0.DebugPtr)->Schema).field0_0x0.DebugPtr;
}

// GetInputValue @ 14a8bae40

FChooserParameterBase * __thiscall FPoseSearchColumn::GetInputValue(FPoseSearchColumn *this)

{
  int iVar1;
  FChooserParameterBase *pFVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  
  pFVar2 = (FChooserParameterBase *)(this->InputValue).StructMemory;
  if ((pFVar2 != (FChooserParameterBase *)0x0) &&
     (pUVar3 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0))
  {
    pUVar5 = FChooserParameterBase::StaticStruct();
    if (pUVar3 == pUVar5) {
      return pFVar2;
    }
    pUVar5 = FChooserParameterBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        return pFVar2;
      }
    }
  }
  return (FChooserParameterBase *)&this->NullInputValue;
}

// GetInputValue @ 14a8baed0

FChooserParameterBase * __thiscall FPoseSearchColumn::GetInputValue(FPoseSearchColumn *this)

{
  int iVar1;
  FChooserParameterBase *pFVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  
  pFVar2 = (FChooserParameterBase *)(this->InputValue).StructMemory;
  if (((pFVar2 != (FChooserParameterBase *)0x0) &&
      (pUVar3 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)
      ) && (pUVar5 = FChooserParameterBase::StaticStruct(), pUVar5 != (UScriptStruct *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      return pFVar2;
    }
  }
  return (FChooserParameterBase *)&this->NullInputValue;
}

// GetScratchAreaSize @ 14a8beb80

int __thiscall FPoseSearchColumn::GetScratchAreaSize(FPoseSearchColumn *this)

{
  return 0x28;
}

// HasCosts @ 14a8c01a0

bool __thiscall FPoseSearchColumn::HasCosts(FPoseSearchColumn *this)

{
  return true;
}

// HasFilters @ 14a8c01b0

bool __thiscall FPoseSearchColumn::HasFilters(FPoseSearchColumn *this)

{
  return true;
}

// InitializeScratchArea @ 14a8c0860

void __thiscall
FPoseSearchColumn::InitializeScratchArea
          (FPoseSearchColumn *this,TArrayView<unsigned_char,int> *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = (**(code **)(this->_padding_ + 0x60))();
  if (param_1->ArrayNum != iVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScratchArea.Num() == GetScratchAreaSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                       ,0x2d2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = param_1->DataPtr;
  *(FPoseSearchColumn **)(puVar1 + 0x20) = this;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1[0x10] = '\0';
  puVar1[0x11] = '\0';
  puVar1[0x12] = '\0';
  puVar1[0x13] = '\0';
  puVar1[0x14] = '\0';
  puVar1[0x15] = '\0';
  puVar1[0x16] = '\0';
  puVar1[0x17] = '\0';
  puVar1[0x18] = '\0';
  puVar1[0x19] = '\0';
  puVar1[0x1a] = '\0';
  puVar1[0x1b] = '\0';
  puVar1[0x1c] = '\0';
  puVar1[0x1d] = '\0';
  puVar1[0x1e] = '\0';
  puVar1[0x1f] = '\0';
  return;
}

// SetDatabaseSchema @ 14a8cd380

void __thiscall
FPoseSearchColumn::SetDatabaseSchema(FPoseSearchColumn *this,UPoseSearchSchema *param_1)

{
  UPoseSearchDatabase *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->InternalDatabase).field0_0x0.DebugPtr == (UPoseSearchDatabase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalDatabase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                       ,0x197,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->InternalDatabase).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPoseSearchSchema *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar1->Schema).field0_0x0.DebugPtr = param_1;
  return;
}

// SetOutputs @ 14a8cd800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPoseSearchColumn::SetOutputs
          (FPoseSearchColumn *this,FChooserEvaluationContext *param_1,int param_2,
          TArrayView<unsigned_char,int> *param_3)

{
  longlong *plVar1;
  UPoseSearchSchema *this_00;
  longlong lVar2;
  UPoseSearchDatabase *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FPoseSearchDatabaseAnimationAsset *pFVar8;
  FName FVar9;
  FChooserParameterEnumBase *pFVar10;
  FSearchIndexAsset *pFVar11;
  UPoseSearchDatabase *pUVar12;
  FPoseIndicesHistory *pFVar13;
  UAnimInstance *pUVar14;
  UClass *pUVar15;
  FChooserParameterFloatBase *pFVar16;
  FChooserParameterBoolBase *pFVar17;
  longlong *plVar18;
  ulonglong uVar19;
  EPoseSearchInterruptMode EVar20;
  FSearchResult *this_01;
  FSearchResult *pFVar21;
  float fVar22;
  float fVar23;
  FPoseSearchCost FVar24;
  undefined1 auStackY_3098 [32];
  byte local_3068;
  undefined1 local_3067;
  EPoseSearchInterruptMode local_3066 [2];
  int local_3064;
  uint local_3060;
  FFloatInterval local_3058;
  FPoseSearchEvent local_3050;
  undefined1 local_3038 [12];
  FPoseSearchCost local_302c;
  float local_3024;
  bool local_3020;
  TObjectPtr<UObject_const_>_u_0 local_3018;
  undefined4 local_3010;
  undefined1 local_300c;
  double local_3008;
  double dStack_3000;
  double local_2ff8;
  undefined2 local_2ff0;
  undefined8 local_2fe8;
  UObject *local_2fe0;
  longlong local_2fd8;
  FName local_2fd0;
  TObjectPtr<UPoseSearchDatabase>_u_0 local_2fc8 [2];
  TObjectPtr<UPoseSearchDatabase>_u_0 *local_2fb8;
  undefined4 uStack_2fb0;
  undefined4 uStack_2fac;
  FName local_2fa0;
  TArrayView<UObject_const_*,int> local_2f98;
  undefined1 local_2f88 [136];
  undefined4 local_2f00;
  int local_2efc;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_2ef8;
  undefined8 uStack_2ee0;
  ForElementType<FSetElementId> local_2ec8;
  int local_2ec0;
  FSearchResults_Single local_2eb8;
  FSearchContext local_2d98;
  ulonglong local_88;
  
  FVar24.TotalCost = __real_42c80000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3098;
  local_3068 = 0;
  local_3067 = 0;
  fVar23 = 0.0;
  local_3064 = param_2;
  iVar7 = (**(code **)(this->_padding_ + 0x60))(this);
  if ((param_3->ArrayNum != iVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScratchArea.Num() == GetScratchAreaSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                         ,0x23f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar1 = (longlong *)param_3->DataPtr;
  if (((FPoseSearchColumn *)plVar1[4] != this) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseSearchColumnScratchArea->DebugOwner == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                         ,0x242,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 != -2) || (plVar1[2] == 0)) {
    local_3060 = *(uint *)(plVar1 + 1);
    uVar19 = (ulonglong)(int)local_3060;
    this_01 = (FSearchResult *)*plVar1;
    pFVar21 = this_01 + uVar19;
    do {
      if ((int)plVar1[1] != (int)uVar19) {
        local_3066[1] = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FSearchResult,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_3066 + 1);
      }
      if (this_01 == pFVar21) {
        local_3068 = 0;
        local_3067 = 0;
        goto LAB_14a8cdf8e;
      }
      pFVar11 = UE::PoseSearch::FDatabasePoseIdx::GetSearchIndexAsset
                          ((FDatabasePoseIdx *)this_01,false);
      if (pFVar11 != (FSearchIndexAsset *)0x0) {
        iVar7 = pFVar11->SourceAssetIdx;
        if (iVar7 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DatabaseAssetIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                             ,0x29,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
LAB_14a8cde42:
          iVar7 = iVar7 + -1;
        }
        else {
          if (iVar7 != 0) goto LAB_14a8cde42;
          iVar7 = -2;
        }
        if (iVar7 == local_3064) goto LAB_14a8cde5d;
      }
      uVar19 = (ulonglong)local_3060;
      this_01 = this_01 + 1;
    } while( true );
  }
  if (((int)plVar1[1] != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseSearchColumnScratchArea->SearchResults.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                         ,0x248,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_2f88._128_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0;
  local_2f00 = 0;
  local_2ef8.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  local_2ef8.NumBits = ___xmm_00000000ffffffff0000002000000000;
  local_2ef8.MaxBits = _UNK_150631d74;
  uStack_2ee0 = _UNK_150631d78;
  local_2ec8.Data = (FSetElementId *)0x0;
  local_2ec0 = 0;
  local_2efc = 8;
  pFVar8 = UPoseSearchDatabase::GetDatabaseAnimationAsset<FPoseSearchDatabaseAnimationAsset>
                     ((this->InternalDatabase).field0_0x0.DebugPtr,0);
  if (pFVar8 == (FPoseSearchDatabaseAnimationAsset *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5392904247031365042>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                       ,0x24e,"Asset");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_2fd8 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8);
    if (local_2fd8 != 0) {
      TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
      ::Emplace<UObject_const_*_const_&>
                ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                  *)local_2f88,&local_2fe0,(bool *)&local_2fd8);
      local_2fc8[0] = (this->InternalDatabase).field0_0x0;
      local_3058 = (FFloatInterval)0x0;
      local_3050.bEnablePoseFilters = false;
      local_3050.bUsePlayRateRangeOverride = true;
      local_3050._padding_ = 0;
      local_3050.EventTag.TagName.ComparisonIndex.Value = 0;
      local_3050.EventTag.TagName.Number = 0;
      local_3050.TimeToEvent = 0.0;
      local_3050.PlayRateRangeOverride._0_4_ = 0x3f800000;
      local_3050.PlayRateRangeOverride._4_4_ = 0x3f800000;
      UE::PoseSearch::FSearchContext::FSearchContext(&local_2d98,0.0,&local_3058,&local_3050);
      this_00 = (((this->InternalDatabase).field0_0x0.DebugPtr)->Schema).field0_0x0.DebugPtr;
      if (this_00 == (UPoseSearchSchema *)0x0) {
        local_2fa0 = UE::PoseSearch::DefaultRole;
        local_2fd0 = UE::PoseSearch::DefaultRole;
      }
      else {
        FVar9 = UPoseSearchSchema::GetDefaultRole(this_00);
        local_2fd0 = *(FName *)FVar9;
      }
      UE::PoseSearch::FSearchContext::AddRole
                (&local_2d98,&local_2fd0,param_1,(IPoseHistory *)plVar1[2]);
      if ((local_2d98.AssetsToConsider_DEPRECATED.ArrayNum != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AssetsToConsider_DEPRECATED.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchContext.h"
                             ,0x14c,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = plVar1[3];
      local_2d98.AssetsToConsider =
           (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
            *)local_2f88;
      local_3018.DebugPtr = (UObject *)0x0;
      local_3010 = 0;
      local_300c = 0;
      local_2ff0 = 0;
      local_2fe8 = 0;
      local_3008 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_3000 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2ff8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(lVar2 + 0x40) != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)(lVar2 + 0x40));
        }
        local_3018 = *(TObjectPtr<UObject_const_>_u_0 *)(lVar2 + 0x40);
        lVar2 = plVar1[3];
        local_3010 = *(undefined4 *)(lVar2 + 0x48);
        local_300c = *(undefined1 *)(lVar2 + 0x4c);
        local_3008 = *(double *)(lVar2 + 0x50);
        dStack_3000 = *(double *)(lVar2 + 0x58);
        local_2ff8 = *(double *)(lVar2 + 0x60);
        local_3066[0] = DoNotInterrupt;
        if (((this->InterruptMode).StructMemory != (uchar *)0x0) &&
           ((this->InterruptMode).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
          pFVar10 = FInstancedStruct::Get<FChooserParameterEnumBase>(&this->InterruptMode);
          cVar6 = (**(code **)((longlong)*pFVar10 + 0x40))(pFVar10,param_1,local_3066);
          EVar20 = (EPoseSearchInterruptMode)local_2ff0;
          if (cVar6 != '\0') {
            EVar20 = local_3066[0];
          }
          local_2ff0 = CONCAT11(local_2ff0._1_1_,EVar20);
        }
      }
      UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_2eb8);
      local_2fb8 = local_2fc8;
      uStack_2fb0 = 1;
      local_2f98._12_4_ = uStack_2fac;
      local_2f98.ArrayNum = 1;
      local_2f98.DataPtr = (UObject **)local_2fb8;
      UPoseSearchLibrary::MotionMatch
                (&local_2d98,&local_2f98,(FPoseSearchContinuingProperties *)&local_3018.ObjectPtr,
                 (FSearchResults *)&local_2eb8);
      UE::Core::Private::Function::CheckCallable((void *)local_2eb8._padding_);
      plVar18 = &local_2eb8._padding_;
      if ((longlong *)local_2eb8._padding_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_2eb8._padding_;
      }
      (**(code **)(*plVar18 + 8))();
      (*(code *)local_2eb8._padding_)(local_3038);
      pFVar11 = UE::PoseSearch::FDatabasePoseIdx::GetSearchIndexAsset
                          ((FDatabasePoseIdx *)local_3038,false);
      if (pFVar11 != (FSearchIndexAsset *)0x0) {
        pUVar12 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_3038 + 4));
        pUVar3 = (this->InternalDatabase).field0_0x0.DebugPtr;
        if (pUVar3 == (UPoseSearchDatabase *)0x0) {
          bVar5 = pUVar12 == (UPoseSearchDatabase *)0x0;
        }
        else {
          bVar5 = pUVar3 == pUVar12;
        }
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("BestSearchResult.Database == InternalDatabase",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                               ,0x276,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((pFVar11->SourceAssetIdx != 0) || (iVar7 = UE::PoseSearch::GetRowIndex(0), iVar7 != -2)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("SearchResultSourceAssetIdx == 0 && RowIndex == GetRowIndex(SearchResultSourceAssetIdx)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                                     ,0x27a,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_3024 == __real_7f7fffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsAssetTimeValid(AssetTime)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                               ,0x4a,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_3068 = pFVar11->bMirrored;
        local_3067 = local_3020;
        pFVar13 = (FPoseIndicesHistory *)(**(code **)(*(longlong *)plVar1[2] + 0x60))();
        fVar22 = __real_3c888889;
        fVar23 = local_3024;
        FVar24.TotalCost = local_302c.TotalCost;
        if (pFVar13 != (FPoseIndicesHistory *)0x0) {
          pUVar14 = (UAnimInstance *)FChooserEvaluationContext::GetFirstObjectParam(param_1);
          if (pUVar14 != (UAnimInstance *)0x0) {
            pUVar15 = Z_Construct_UClass_UAnimInstance_NoRegister();
            iVar7 = (int)pUVar15->_padding_;
            if ((iVar7 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
                &pUVar15->_padding_)) {
              fVar22 = UAnimInstance::GetDeltaSeconds(pUVar14);
            }
          }
          UE::PoseSearch::FPoseIndicesHistory::Update
                    (pFVar13,(FSearchResult *)local_3038,fVar22,this->PoseReselectHistory);
        }
      }
      UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_2eb8);
      UE::PoseSearch::FSearchContext::~FSearchContext(&local_2d98);
    }
  }
  local_2ec0 = 0;
  local_2f00 = 0;
  if (local_2efc != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                        local_2f88,0,&local_2efc);
  }
  iVar7 = local_2ef8.MaxBits;
  uStack_2ee0 = 0xffffffff;
  local_2ef8._16_8_ = (ulonglong)(uint)local_2ef8.MaxBits << 0x20;
  if (0x20 < (uint)iVar7) {
    local_2ef8.NumBits = 0;
    local_2ef8.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc(&local_2ef8,0);
  }
  goto LAB_14a8cdf8e;
LAB_14a8cde5d:
  if ((__real_7f7fffff == this_01->AssetTime) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAssetTimeValid(AssetTime)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                         ,0x4a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3068 = pFVar11->bMirrored;
  fVar23 = this_01->AssetTime;
  FVar24.TotalCost = (this_01->PoseCost).TotalCost;
  local_3067 = this_01->bIsContinuingPoseSearch;
  if (((longlong *)plVar1[2] == (longlong *)0x0) ||
     (pFVar13 = (FPoseIndicesHistory *)(**(code **)(*(longlong *)plVar1[2] + 0x60))(),
     fVar22 = __real_3c888889, pFVar13 == (FPoseIndicesHistory *)0x0)) goto LAB_14a8cdf8e;
  if (0 < (param_1->ObjectParams).ArrayNum) {
    if (((param_1->ObjectParams).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar14 = *(UAnimInstance **)(param_1->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar14 == (UAnimInstance *)0x0) goto LAB_14a8cdf72;
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    if (pUVar14 != (UAnimInstance *)0x0) {
      pUVar15 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar7 = (int)pUVar15->_padding_;
      if ((iVar7 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar15->_padding_)) {
        fVar22 = UAnimInstance::GetDeltaSeconds(pUVar14);
      }
    }
  }
LAB_14a8cdf72:
  UE::PoseSearch::FPoseIndicesHistory::Update(pFVar13,this_01,fVar22,this->PoseReselectHistory);
LAB_14a8cdf8e:
  pFVar16 = FInstancedStruct::GetPtr<FChooserParameterFloatBase>(&this->OutputStartTime);
  if (pFVar16 != (FChooserParameterFloatBase *)0x0) {
    (**(code **)((longlong)*pFVar16 + 0x48))(pFVar16,param_1,(double)fVar23);
  }
  pFVar16 = FInstancedStruct::GetPtr<FChooserParameterFloatBase>(&this->OutputCost);
  if (pFVar16 != (FChooserParameterFloatBase *)0x0) {
    (**(code **)((longlong)*pFVar16 + 0x48))(pFVar16,param_1,(double)FVar24.TotalCost);
  }
  pFVar17 = FInstancedStruct::GetPtr<FChooserParameterBoolBase>(&this->OutputMirror);
  if (pFVar17 != (FChooserParameterBoolBase *)0x0) {
    (**(code **)((longlong)*pFVar17 + 0x48))(pFVar17,param_1,local_3068);
  }
  pFVar17 = FInstancedStruct::GetPtr<FChooserParameterBoolBase>(&this->OutputForceBlendTo);
  if (pFVar17 != (FChooserParameterBoolBase *)0x0) {
    (**(code **)((longlong)*pFVar17 + 0x48))(pFVar17,param_1,local_3067);
  }
  return;
}

