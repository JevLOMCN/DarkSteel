// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle> @ 1468fdad0

/* WARNING: Enum "Type": Some values do not have unique names */

TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle> *
__thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
          (TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
           *this)

{
  (this->GroupingKey).Index = -1;
  (this->MaterialSwitcherStorage).Object =
       (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
        *)0x0;
  (this->MaterialSwitcherStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaterialParameterStorage).Object =
       (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
        *)0x0;
  (this->MaterialParameterStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaterialSwitcherFilter).AllMask.Bits.NumBits = 0;
  (this->MaterialSwitcherFilter).NoneMask.Bits.NumBits = 0;
  (this->MaterialSwitcherFilter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialSwitcherFilter).ComplexMasks.ArrayNum = 0;
  (this->MaterialSwitcherFilter).ComplexMasks.ArrayMax = 0;
  (this->MaterialParameterFilter).AllMask.Bits.NumBits = 0;
  (this->MaterialParameterFilter).NoneMask.Bits.NumBits = 0;
  (this->MaterialParameterFilter).ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameterFilter).ComplexMasks.ArrayNum = 0;
  (this->MaterialParameterFilter).ComplexMasks.ArrayMax = 0;
  (this->ReinitializeBoundMaterials).Filter.AllMask.Bits.NumBits = 0;
  (this->ReinitializeBoundMaterials).Filter.NoneMask.Bits.NumBits = 0;
  (this->ReinitializeBoundMaterials).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReinitializeBoundMaterials).Filter.ComplexMasks.ArrayNum = 0;
  (this->ReinitializeBoundMaterials).Filter.ComplexMasks.ArrayMax = 0;
  (this->ReinitializeBoundMaterials).Cache.LastSystemVersion = 0;
  (this->ReinitializeBoundMaterials).MatchedEntityAllocations.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReinitializeBoundMaterials).MatchedEntityAllocations.ArrayNum = 0;
  (this->ReinitializeBoundMaterials).MatchedEntityAllocations.ArrayMax = 0;
  (this->MaterialSwitcherFilter).AllMask.Bits.MaxBits = 0x180;
  (this->MaterialSwitcherFilter).NoneMask.Bits.MaxBits = 0x180;
  (this->MaterialParameterFilter).AllMask.Bits.MaxBits = 0x180;
  (this->MaterialParameterFilter).NoneMask.Bits.MaxBits = 0x180;
  (this->ReinitializeBoundMaterials).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ReinitializeBoundMaterials).Filter.NoneMask.Bits.MaxBits = 0x180;
  return this;
}

// ~TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle> @ 146903100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
~TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
          (TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ReinitializeBoundMaterials).MatchedEntityAllocations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReinitializeBoundMaterials).Filter.ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameterFilter).ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialSwitcherFilter).ComplexMasks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaterialParameterStorage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaterialSwitcherStorage).SharedReferenceCount.ReferenceController);
  return;
}

// OnLink @ 14692e7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
OnLink(TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
       *this,UMovieSceneEntitySystemLinker *param_1,TComponentTypeID<UObject_*> param_2,
      TComponentTypeID<FWidgetMaterialHandle> param_3)

{
  int *piVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  FSharedReferencer<1> FVar6;
  int iVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  UMovieSceneEntityGroupingSystem *this_00;
  UClass *pUVar10;
  FString *pFVar11;
  FScriptContainerElement *this_01;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  TComponentTypeID<UObject_*> local_res18 [4];
  TComponentTypeID<FWidgetMaterialHandle> local_res20;
  undefined1 auStackY_148 [32];
  initializer_list<UE::MovieScene::FComponentTypeID> local_118;
  FString local_108;
  undefined1 local_f8 [2];
  FComponentTypeID FStack_f6;
  FComponentTypeID local_f4;
  undefined1 local_f2 [10];
  undefined1 local_e8 [4];
  TComponentTypeID<FName> TStack_e4;
  TComponentTypeID<FMaterialParameterInfo> TStack_e2;
  undefined8 uStack_e0;
  TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
  *local_d8;
  FSharedReferencer<1> FStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ForAnyElementType local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_res18[0] = param_2;
  local_res20 = param_3;
  pFVar8 = FBuiltInComponentTypes::Get();
  pFVar9 = FMovieSceneTracksComponentTypes::Get();
  _local_e8 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (_local_e8 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)_local_e8);
  }
  this_00 = (UMovieSceneEntityGroupingSystem *)
            UMovieSceneEntitySystemLinker::LinkSystem
                      (param_1,(TSubclassOf<UMovieSceneEntitySystem>)local_e8);
  if (this_00 != (UMovieSceneEntityGroupingSystem *)0x0) {
    pUVar10 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
    iVar7 = (int)pUVar10->_padding_;
    if ((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar10->_padding_)) {
      local_78._0_1_ = '\0';
      local_78._1_1_ = '\0';
      local_78._2_1_ = '\0';
      local_78._3_1_ = '\0';
      local_78._4_1_ = '\0';
      local_78._5_1_ = '\0';
      local_78._6_1_ = '\0';
      local_78._7_1_ = '\0';
      uStack_a0._0_1_ = '\0';
      uStack_a0._1_1_ = '\0';
      uStack_a0._2_1_ = '\0';
      uStack_a0._3_1_ = '\0';
      uStack_a0._4_1_ = '\0';
      uStack_a0._5_1_ = '\0';
      uStack_a0._6_1_ = '\0';
      uStack_a0._7_1_ = '\0';
      local_a8._0_1_ = '\0';
      local_a8._1_1_ = '\0';
      local_a8._2_1_ = '\0';
      local_a8._3_1_ = '\0';
      local_a8._4_1_ = 0x80;
      local_a8._5_1_ = '\x01';
      local_a8._6_1_ = '\0';
      local_a8._7_1_ = '\0';
      uStack_70._0_1_ = '\0';
      uStack_70._1_1_ = '\0';
      uStack_70._2_1_ = '\0';
      uStack_70._3_1_ = '\0';
      uStack_70._4_1_ = 0x80;
      uStack_70._5_1_ = '\x01';
      uStack_70._6_1_ = '\0';
      uStack_70._7_1_ = '\0';
      local_68 = (void *)0x0;
      uStack_60._0_1_ = '\0';
      uStack_60._1_1_ = '\0';
      uStack_60._2_1_ = '\0';
      uStack_60._3_1_ = '\0';
      uStack_60._4_1_ = '\0';
      uStack_60._5_1_ = '\0';
      uStack_60._6_1_ = '\0';
      uStack_60._7_1_ = '\0';
      local_d8 = (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
                  *)0x0;
      FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_c8._0_4_ = 0;
      local_c8._4_4_ = 0;
      uStack_c0._0_1_ = '\0';
      uStack_c0._1_1_ = '\0';
      uStack_c0._2_1_ = '\0';
      uStack_c0._3_1_ = '\0';
      uStack_c0._4_1_ = '\0';
      uStack_c0._5_1_ = '\0';
      uStack_c0._6_1_ = '\0';
      uStack_c0._7_1_ = '\0';
      local_b8._0_1_ = '\0';
      local_b8._1_1_ = '\0';
      local_b8._2_1_ = '\0';
      local_b8._3_1_ = '\0';
      local_b8._4_1_ = '\0';
      local_b8._5_1_ = '\0';
      local_b8._6_1_ = '\0';
      local_b8._7_1_ = '\0';
      uStack_b0._0_1_ = '\0';
      uStack_b0._1_1_ = '\0';
      uStack_b0._2_1_ = '\0';
      uStack_b0._3_1_ = '\0';
      uStack_b0._4_1_ = '\0';
      uStack_b0._5_1_ = '\0';
      uStack_b0._6_1_ = '\0';
      uStack_b0._7_1_ = '\0';
      local_98._0_1_ = '\0';
      local_98._1_1_ = '\0';
      local_98._2_1_ = '\0';
      local_98._3_1_ = '\0';
      local_98._4_1_ = '\0';
      local_98._5_1_ = '\0';
      local_98._6_1_ = '\0';
      local_98._7_1_ = '\0';
      uStack_90._0_4_ = 0;
      uStack_90._4_4_ = 0;
      local_88.Data = (FScriptContainerElement *)0x0;
      uStack_80._0_4_ = 0;
      uStack_80._4_4_ = 0;
      UMovieSceneEntityGroupingSystem::
      AddGrouping<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::FMaterialGroupingPolicy,UObject_*,FWidgetMaterialHandle>
                (this_00,(FMaterialGroupingPolicy *)local_f8,(FEntityComponentFilter *)local_f8,
                 SUB82(&local_d8,0),(TComponentTypeID<FWidgetMaterialHandle>)param_2);
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      (this->GroupingKey).Index = (int)_local_f8;
      (this->MaterialSwitcherFilter).AllMask.Bits.NumBits = 0;
      piVar1 = &(this->MaterialSwitcherFilter).ComplexMasks.ArrayMax;
      (this->MaterialSwitcherFilter).NoneMask.Bits.NumBits = 0;
      iVar7 = *piVar1;
      (this->MaterialSwitcherFilter).ComplexMasks.ArrayNum = 0;
      if (iVar7 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3c,4,0,&(this->MaterialSwitcherFilter).ComplexMasks.AllocatorInstance,0,piVar1)
        ;
      }
      local_f4.Value = *(ushort *)&pFVar8->ObjectResult;
      local_118._First = (FComponentTypeID *)local_f8;
      local_118._Last = (FComponentTypeID *)local_f2;
      FStack_f6.Value = (ushort)param_3;
      local_f8 = (undefined1  [2])param_2;
      _local_e8 = (UClass *)local_118._First;
      uStack_e0 = (TReferenceControllerBase<1> *)local_118._Last;
      FComponentMask::SetAll(&(this->MaterialSwitcherFilter).AllMask,&local_118);
      (this->MaterialParameterFilter).AllMask.Bits.NumBits = 0;
      piVar1 = &(this->MaterialParameterFilter).ComplexMasks.ArrayMax;
      (this->MaterialParameterFilter).NoneMask.Bits.NumBits = 0;
      iVar7 = *piVar1;
      (this->MaterialParameterFilter).ComplexMasks.ArrayNum = 0;
      if (iVar7 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3c,4,0,&(this->MaterialParameterFilter).ComplexMasks.AllocatorInstance,0,piVar1
                  );
      }
      local_118._First = (FComponentTypeID *)local_f8;
      local_118._Last = &local_f4;
      _local_e8 = (UClass *)local_118._First;
      uStack_e0 = (TReferenceControllerBase<1> *)local_118._Last;
      FComponentMask::SetAll(&(this->MaterialParameterFilter).AllMask,&local_118);
      FVar6.ReferenceController = uStack_e0;
      piVar1 = &(this->MaterialParameterFilter).ComplexMasks.ArrayMax;
      _local_e8 = (UClass *)
                  CONCAT26(pFVar9->ScalarMaterialParameterInfo,
                           CONCAT24(pFVar9->VectorParameterName,
                                    CONCAT22(pFVar9->ColorParameterName,pFVar9->ScalarParameterName)
                                   ));
      uVar2 = (pFVar9->ColorMaterialParameterInfo).field_0x0;
      uVar3 = (pFVar9->ColorMaterialParameterInfo).field_0x1;
      uVar4 = (pFVar9->VectorMaterialParameterInfo).field_0x0;
      uVar5 = (pFVar9->VectorMaterialParameterInfo).field_0x1;
      uStack_e0._3_1_ = uVar5;
      uStack_e0._2_1_ = uVar4;
      uStack_e0._1_1_ = uVar3;
      uStack_e0._0_1_ = uVar2;
      uStack_e0._4_4_ = SUB84(FVar6.ReferenceController,4);
      local_118._First = (FComponentTypeID *)local_e8;
      local_118._Last = (FComponentTypeID *)((longlong)&uStack_e0 + 4);
      iVar7 = (this->MaterialParameterFilter).ComplexMasks.ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x43c,&(this->MaterialParameterFilter).ComplexMasks.AllocatorInstance,
                           piVar1);
      }
      (this->MaterialParameterFilter).ComplexMasks.ArrayNum = iVar7 + 1;
      this_01 = (this->MaterialParameterFilter).ComplexMasks.AllocatorInstance.Data +
                (longlong)iVar7 * 0x3c;
      *(undefined4 *)(this_01 + 0x30) = 0;
      *(undefined4 *)(this_01 + 0x34) = 0x180;
      this_01[0x38].field_0x0 = 2;
      FComponentMask::SetAll((FComponentMask *)this_01,&local_118);
      TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
      ::
      AddRaw<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_&>
                ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                  *)&param_1->Events,
                 (TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
                  *)local_e8,(pmf_b7e4b4f4)this,(TComponentTypeID<UObject_*> *)OnPostSpawn,
                 (TComponentTypeID<FWidgetMaterialHandle> *)local_res18);
      local_f8 = *(undefined1 (*) [2])&pFVar9->BoundMaterial;
      local_118._First = (FComponentTypeID *)local_f8;
      local_118._Last = (FComponentTypeID *)local_f2;
      local_f4.Value = (ushort)param_3;
      FStack_f6.Value = (ushort)param_2;
      FComponentMask::SetAll((FComponentMask *)&this->ReinitializeBoundMaterials,&local_118);
      local_f8 = (undefined1  [2])(pFVar8->Tags).NeedsUnlink.Value;
      local_118._First = (FComponentTypeID *)local_f8;
      local_118._Last = (FComponentTypeID *)(local_f8 + 2);
      FComponentMask::SetAll(&(this->ReinitializeBoundMaterials).Filter.NoneMask,&local_118);
      return;
    }
    pFVar11 = GetTypeName<UMovieSceneEntityGroupingSystem>((FString *)&local_118);
    pwVar12 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                        (&local_108,(UMovieSceneEntitySystem *)this_00);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  pFVar11 = GetTypeName<UMovieSceneEntityGroupingSystem>((FString *)&local_118);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar12);
}

// OnPostSpawn @ 14692f220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
OnPostSpawn(TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
            *this,UMovieSceneEntitySystemLinker *param_1,TComponentTypeID<UObject_*> param_2,
           TComponentTypeID<FWidgetMaterialHandle> param_3)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  ushort uVar4;
  uchar *puVar5;
  FMovieSceneEntityID *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uchar *puVar10;
  uchar *puVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_MovieSceneEval_ReinitializeBoundMaterials> FVar16;
  FMovieSceneTracksComponentTypes *pFVar17;
  FComponentHeader *pFVar18;
  ulonglong uVar19;
  FEntityAllocation *pFVar20;
  ForAnyElementType FVar21;
  int iVar22;
  longlong lVar23;
  FComponentHeader *pFVar24;
  FComponentHeader *pFVar25;
  FName FVar26;
  FComponentHeader *pFVar27;
  undefined1 local_res10 [8];
  TComponentTypeID<UObject_*> local_res18;
  TComponentTypeID<FWidgetMaterialHandle> local_res20;
  ushort local_138 [4];
  UMovieSceneEntitySystemLinker *local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  FColor_u_0 local_118 [2];
  EComponentHeaderLockMode local_110;
  EComponentHeaderLockMode local_10c;
  EComponentHeaderLockMode local_108;
  FComponentHeader *local_100;
  FComponentHeader *local_f8;
  FComponentHeader *local_f0;
  FName local_e8;
  FEntityAllocation **local_e0;
  FName local_d8;
  FName local_d0;
  FEntityAllocationWriteContext local_c0 [3];
  uchar *local_a8;
  uchar *local_98;
  uchar *local_90;
  FEntityAllocation *local_88;
  ulonglong local_80;
  FEntityAllocation **local_78;
  FMovieSceneTracksComponentTypes *local_70;
  TArrayView<UE::MovieScene::FEntityAllocation_*_const,int> local_68;
  FName local_58 [3];
  
  FVar16 = StatPtr_MovieSceneEval_ReinitializeBoundMaterials;
  local_res18 = param_2;
  local_res20 = param_3;
  if (StatPtr_MovieSceneEval_ReinitializeBoundMaterials ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_ReinitializeBoundMaterials>)0x0) {
    pFVar15 = ::FName::FName(local_58,"MovieSceneEval_ReinitializeBoundMaterials");
    FVar16 = (FThreadSafeStaticStat<FStat_MovieSceneEval_ReinitializeBoundMaterials>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_MovieSceneEval_ReinitializeBoundMaterials,*pFVar15,
                        L"Reinitialize Bound Materials","STATGROUP_MovieSceneECS","STATCAT_Advanced"
                        ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid
                       );
  }
  bVar9 = false;
  bVar8 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar26 = *(FName *)FVar16;
  bVar13 = false;
  bVar12 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_e8.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieSceneMaterialSystem.h"
                   ,0x18c);
        bVar9 = true;
        bVar8 = true;
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar12 = true;
      goto LAB_14692f39a;
    }
  }
  bVar9 = bVar13;
  bVar8 = bVar12;
  bVar12 = false;
  local_d8 = local_d0;
  FVar26 = local_d0;
LAB_14692f39a:
  pFVar17 = FMovieSceneTracksComponentTypes::Get();
  local_70 = pFVar17;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(local_c0,&param_1->EntityManager);
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_130 = param_1;
  FCachedEntityFilterResult_Allocations::GetMatchingAllocations
            (&this->ReinitializeBoundMaterials,&local_68,&param_1->EntityManager);
  local_e0 = local_68.DataPtr;
  local_78 = local_68.DataPtr + local_68.ArrayNum;
  if (local_68.DataPtr != local_78) {
    do {
      pFVar20 = *local_68.DataPtr;
      local_f8 = pFVar20->ComponentHeaders;
      uVar4 = pFVar20->Size;
      pFVar20->LockMode = LockFree;
      local_80 = local_c0[0].SystemSerial;
      pFVar27 = local_f8 + pFVar20->NumComponents;
      for (; local_e0 = local_68.DataPtr, local_88 = pFVar20, local_f8 != pFVar27;
          local_f8 = local_f8 + 1) {
        pFVar25 = local_f8;
        if ((TComponentTypeID<UE::MovieScene::FObjectComponent>)(local_f8->ComponentType).Value ==
            pFVar17->BoundMaterial) goto LAB_14692f481;
      }
      local_f8 = (FComponentHeader *)0x0;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar25 = (FComponentHeader *)0x0;
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_14692f481:
      local_108 = pFVar20->LockMode;
      if (local_108 == Mutex) {
        AcquireSRWLockExclusive((PSRWLOCK)&pFVar25->ReadWriteLock);
      }
      LOCK();
      paVar1 = &pFVar25->ScheduledAccessCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      if ((aVar3 != (atomic<int>)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("PreviousAccessCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x487,
                              L"Component header is still in use when it is being opened for write!"
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_f0 = pFVar20->ComponentHeaders;
      local_90 = pFVar25->Components;
      pFVar27 = local_f0 + pFVar20->NumComponents;
      for (; local_f0 != pFVar27; local_f0 = local_f0 + 1) {
        pFVar24 = local_f0;
        if ((TComponentTypeID<FWidgetMaterialHandle>)(local_f0->ComponentType).Value == param_3)
        goto LAB_14692f532;
      }
      local_f0 = (FComponentHeader *)0x0;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar24 = (FComponentHeader *)0x0;
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_14692f532:
      local_10c = pFVar20->LockMode;
      if (local_10c == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar24->ReadWriteLock);
      }
      LOCK();
      pFVar24->ScheduledAccessCount = (atomic<int>)((int)pFVar24->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar27 = pFVar20->ComponentHeaders;
      local_98 = pFVar24->Components;
      pFVar18 = pFVar27 + pFVar20->NumComponents;
      for (; pFVar27 != pFVar18; pFVar27 = pFVar27 + 1) {
        local_100 = pFVar27;
        if ((TComponentTypeID<UObject_*>)(pFVar27->ComponentType).Value == param_2)
        goto LAB_14692f5b1;
      }
      pFVar27 = (FComponentHeader *)0x0;
      local_100 = (FComponentHeader *)0x0;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_14692f5b1:
      local_110 = pFVar20->LockMode;
      if (local_110 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar27->ReadWriteLock);
      }
      puVar11 = local_90;
      puVar10 = local_98;
      LOCK();
      pFVar27->ScheduledAccessCount = (atomic<int>)((int)pFVar27->ScheduledAccessCount + 1);
      UNLOCK();
      puVar5 = pFVar27->Components;
      pFVar6 = pFVar20->EntityIDs;
      local_a8 = puVar5;
      if ((ulonglong)uVar4 != 0) {
        lVar23 = 0;
        iVar22 = 0;
        do {
          local_138[0] = pFVar6[lVar23].Value;
          bVar13 = TInitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
                   ::InitializeBoundMaterial
                             (*(UObject **)(puVar5 + lVar23 * 8),
                              (FWidgetMaterialHandle *)(puVar10 + (longlong)iVar22 * 0x10),
                              (FObjectComponent *)(puVar11 + (longlong)iVar22 * 0x10));
          if (bVar13) {
            if (((local_128.Data <= (FScriptContainerElement *)local_138) &&
                ((FScriptContainerElement *)local_138 <
                 local_128.Data + (longlong)local_120._4_4_ * 2)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar14 = (int)local_120;
            if ((int)local_120 == local_120._4_4_) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&local_128,(int *)((longlong)&local_120 + 4));
            }
            local_120 = CONCAT44(local_120._4_4_,iVar14 + 1);
            *(ushort *)(local_128.Data + (longlong)iVar14 * 2) = local_138[0];
          }
          iVar22 = iVar22 + 1;
          lVar23 = lVar23 + 1;
          pFVar20 = local_88;
          pFVar24 = local_f0;
          pFVar25 = local_f8;
          pFVar27 = local_100;
          param_3 = local_res20;
          param_2 = local_res18;
        } while (lVar23 < (longlong)(ulonglong)uVar4);
      }
      LOCK();
      pFVar27->ScheduledAccessCount = (atomic<int>)((int)pFVar27->ScheduledAccessCount + -1);
      UNLOCK();
      if (local_110 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar27->ReadWriteLock);
      }
      LOCK();
      pFVar24->ScheduledAccessCount = (atomic<int>)((int)pFVar24->ScheduledAccessCount + -1);
      UNLOCK();
      if (local_10c == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar24->ReadWriteLock);
      }
      uVar19 = local_80;
      if (local_80 < pFVar25->SerialNumber) {
        uVar19 = pFVar25->SerialNumber;
      }
      pFVar25->SerialNumber = uVar19;
      LOCK();
      pFVar25->ScheduledAccessCount = (atomic<int>)((int)pFVar25->ScheduledAccessCount + -1);
      UNLOCK();
      if (local_108 == Mutex) {
        ReleaseSRWLockExclusive((PSRWLOCK)&pFVar25->ReadWriteLock);
      }
      if (pFVar20 != (FEntityAllocation *)0x0) {
        pFVar20->LockMode = Mutex;
      }
      local_68.DataPtr = local_e0 + 1;
      pFVar17 = local_70;
      FVar26 = local_d8;
      local_e0 = local_68.DataPtr;
    } while (local_68.DataPtr != local_78);
  }
  pFVar17 = FMovieSceneTracksComponentTypes::Get();
  iVar22 = (int)local_120;
  uVar19 = (ulonglong)(int)local_120;
  pFVar2 = local_128.Data + uVar19 * 2;
  FVar21.Data = local_128.Data;
  while( true ) {
    if ((int)uVar19 != iVar22) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar21.Data == pFVar2) break;
    FEntityManager::AddComponent
              (&local_130->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar21.Data,
               (FComponentTypeID)(pFVar17->Tags).BoundMaterialChanged.Value);
    uVar19 = local_120 & 0xffffffff;
    FVar21.Data = FVar21.Data + 2;
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// OnRun @ 14692f830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
OnRun(TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
      *this,UMovieSceneEntitySystemLinker *param_1,TComponentTypeID<UObject_*> param_2,
     TComponentTypeID<FWidgetMaterialHandle> param_3,FSystemTaskPrerequisites *param_4,
     FSystemSubsequentTasks *param_5)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined1 auStack_2b8 [32];
  FComponentTypeID local_298;
  FComponentTypeID local_296;
  FComponentTypeID local_294;
  FComponentTypeID local_292;
  FComponentTypeID local_290 [4];
  initializer_list<UE::MovieScene::FComponentTypeID> local_288;
  undefined1 local_278 [16];
  undefined8 uStack_268;
  byte local_260;
  undefined1 uStack_25f;
  TComponentTypeID<FWidgetMaterialHandle> TStack_25e;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  TComponentTypeID<UObject_*> local_250;
  TComponentTypeID<FWidgetMaterialHandle> TStack_24e;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TStack_24c;
  undefined2 uStack_24a;
  undefined8 uStack_248;
  TStatIdData *pTStack_240;
  ulonglong uStack_238;
  undefined5 uStack_230;
  undefined3 uStack_22b;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_228;
  undefined2 local_218;
  TComponentTypeID<UObject_*> TStack_216;
  TComponentTypeID<FWidgetMaterialHandle> TStack_214;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TStack_212;
  undefined8 uStack_210;
  TStatIdData *pTStack_208;
  ulonglong uStack_200;
  undefined8 uStack_1f8;
  undefined1 local_1e8 [4];
  FComponentAccess FStack_1e4;
  FComponentAccess FStack_1e2;
  undefined8 uStack_1e0;
  TStatIdData *local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  FEntityComponentFilter local_1c0;
  int local_110;
  int local_10c;
  int local_d8;
  int local_d4;
  FEntityComponentFilter local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pFVar1 = FBuiltInComponentTypes::Get();
  pFVar2 = FMovieSceneTracksComponentTypes::Get();
  UMovieSceneEntitySystemLinker::GetRunner(param_1,&local_228);
  if ((local_228.Object)->CurrentPhase == Instantiation) {
    uStack_268 = &TStatId::TStatId_NAME_None;
    TStack_24c = pFVar1->ObjectResult;
    local_278._8_8_ = (FScriptContainerElement *)0x0;
    uStack_254 = uStack_254 & 0xffffff00;
    local_294.Value = (pFVar1->Tags).NeedsLink.Value;
    uStack_248 = 0;
    pTStack_240 = &TStatId::TStatId_NAME_None;
    local_1c0.AllMask.Bits.NumBits = 0;
    local_1c0.NoneMask.Bits.NumBits = 0;
    local_1c0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ComplexMasks.ArrayNum = 0;
    local_1c0.ComplexMasks.ArrayMax = 0;
    local_110 = 0;
    local_d8 = 0;
    uStack_258 = 0x6ff;
    uStack_238 = CONCAT44(uStack_25c,CONCAT22(TStack_25e,CONCAT11(uStack_25f,local_260))) &
                 0xffffffffffffffe0;
    unique0x10000486 = uStack_254;
    uStack_230._0_4_ = 0x6ff;
    local_1e8._2_2_ = param_3;
    local_1e8._0_2_ = param_2;
    unique0x1000048e = TStack_24c;
    unique0x10000490 = uStack_24a;
    local_1c0.AllMask.Bits.MaxBits = 0x180;
    uStack_1e0 = 0;
    local_1d8 = &TStatId::TStatId_NAME_None;
    local_1c0.NoneMask.Bits.MaxBits = 0x180;
    local_10c = 0x180;
    local_d4 = 0x180;
    local_260 = local_260 & 0xe0;
    local_250 = param_2;
    TStack_24e = param_3;
    uStack_1d0 = uStack_238;
    local_1c8 = _uStack_230;
    AddAccessorToFilter((FComponentAccess *)local_1e8,&local_1c0);
    AddAccessorToFilter((FComponentAccess *)(local_1e8 + 2),&local_1c0);
    AddAccessorToFilter((FComponentAccess *)(local_1e8 + 4),&local_1c0);
    local_288._First = &local_294;
    local_288._Last = &local_292;
    FComponentMask::SetAll(&local_1c0.AllMask,&local_288);
    local_298.Value = (pFVar1->Tags).Ignored.Value;
    local_288._First = &local_298;
    local_288._Last = &local_296;
    FComponentMask::SetAll(&local_1c0.NoneMask,&local_288);
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
    ::
    RunInline_PerEntity<UE::MovieScene::TApplyMaterialSwitchers<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FObjectComponent>_>
                *)local_1e8,&param_1->EntityManager,local_294.Value._0_1_);
    if (local_1c0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.ComplexMasks.AllocatorInstance.Data);
    }
    FEntityComponentFilter::FEntityComponentFilter(&local_c8,&this->MaterialParameterFilter);
    local_298.Value = (pFVar1->Tags).NeedsLink.Value;
    local_288._First = &local_298;
    local_288._Last = &local_296;
    FComponentMask::SetAll(&local_c8.AllMask,&local_288);
    local_298.Value = (pFVar1->Tags).ImportedEntity.Value;
    local_288._First = &local_298;
    local_288._Last = &local_296;
    FComponentMask::SetAll(&local_c8.NoneMask,&local_288);
    local_260 = param_2._0_1_;
    uStack_25f = param_2._1_1_;
    local_278._0_8_ =
         &
         ___7__TAddBoundMaterialMutationImpl_UFWidgetMaterialAccessor_MovieScene_UE__U__TIntegerSequence_H_0A__00__PEAVUObject__VFWidgetMaterialHandle___MovieScene_UE__6B_
    ;
    TStack_25e = param_3;
    local_278._8_8_ = FBuiltInComponentTypes::Get();
    uStack_268 = (TStatIdData *)FMovieSceneTracksComponentTypes::Get();
    FEntityManager::MutateAll
              (&param_1->EntityManager,&local_c8,(IMovieSceneEntityMutation *)local_278,Mandatory);
    uStack_238 = uStack_238 & 0xffffffffffffffe0;
    pTStack_240 = &TStatId::TStatId_NAME_None;
    TStack_212 = pFVar2->BoundMaterial;
    local_298.Value = (pFVar1->Tags).NeedsLink.Value;
    uStack_248 = 0;
    uStack_230 = 0x6ff;
    uStack_210 = 0;
    pTStack_208 = &TStatId::TStatId_NAME_None;
    local_1e8._2_2_ = param_2;
    local_1e8._0_2_ = local_218;
    unique0x100004a0 = param_3;
    unique0x100004a2 = TStack_212;
    uStack_200 = uStack_238;
    uStack_1f8 = _uStack_230;
    local_1c0.AllMask.Bits.NumBits = 0;
    local_1c0.AllMask.Bits.MaxBits = 0x180;
    uStack_1e0 = 0;
    local_1d8 = &TStatId::TStatId_NAME_None;
    uStack_1d0 = uStack_238;
    local_1c8 = _uStack_230;
    local_1c0.NoneMask.Bits.NumBits = 0;
    local_1c0.NoneMask.Bits.MaxBits = 0x180;
    local_1c0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ComplexMasks.ArrayNum = 0;
    local_1c0.ComplexMasks.ArrayMax = 0;
    local_110 = 0;
    local_10c = 0x180;
    local_d8 = 0;
    local_d4 = 0x180;
    TStack_216 = param_2;
    TStack_214 = param_3;
    AddAccessorToFilter((FComponentAccess *)(local_1e8 + 2),&local_1c0);
    AddAccessorToFilter((FComponentAccess *)(local_1e8 + 4),&local_1c0);
    AddAccessorToFilter((FComponentAccess *)(local_1e8 + 6),&local_1c0);
    local_288._First = &local_298;
    local_288._Last = &local_296;
    FComponentMask::SetAll(&local_1c0.AllMask,&local_288);
    local_294.Value = (pFVar1->Tags).Ignored.Value;
    local_292.Value = (pFVar1->Tags).NeedsUnlink.Value;
    local_288._First = &local_294;
    local_288._Last = local_290;
    FComponentMask::SetAll(&local_1c0.NoneMask,&local_288);
    local_278._8_8_ = (FScriptContainerElement *)0x0;
    uStack_268._0_4_ = 0;
    uStack_268._4_4_ = 0;
    local_278._0_8_ = param_1;
    TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
    ::
    RunInline_PerEntity<UE::MovieScene::TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
              ((TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FWidgetMaterialHandle>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
                *)local_1e8,&param_1->EntityManager,
               (TReinitializeBoundMaterials<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
                *)local_278);
    if (local_1c0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.ComplexMasks.AllocatorInstance.Data);
    }
    if (local_c8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ComplexMasks.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  return;
}

// OnUnlink @ 146930b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
OnUnlink(TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
         *this,UMovieSceneEntitySystemLinker *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneEntityGroupingSystem *this_00;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UClass *local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res18[0] = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  this_00 = (UMovieSceneEntityGroupingSystem *)
            UMovieSceneEntitySystemLinker::FindSystem
                      (param_1,(TSubclassOf<UMovieSceneEntitySystem>)local_res18);
  if (this_00 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6637814119938391682>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieSceneMaterialSystem.h"
                       ,0x17e,"GroupingSystem");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)this_00);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
    UMovieSceneEntityGroupingSystem::RemoveGrouping
              (this_00,(FEntityGroupingPolicyKey)(this->GroupingKey).Index);
  }
  (this->GroupingKey).Index = -1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->Events,this);
  return;
}

// SavePreAnimatedState @ 146940020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>::
SavePreAnimatedState
          (TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
           *this,UMovieSceneEntitySystemLinker *param_1,TComponentTypeID<UObject_*> param_2,
          TComponentTypeID<FWidgetMaterialHandle> param_3,FPreAnimationParameters *param_4)

{
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *pFVar3;
  undefined1 auStackY_1c8 [32];
  FComponentTypeID local_198;
  FComponentTypeID local_196;
  FComponentTypeID local_194;
  FComponentTypeID local_192 [5];
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  initializer_list<UE::MovieScene::FComponentTypeID> local_178;
  TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle> local_168;
  TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar2 = FEntityManager::Contains(&param_1->EntityManager,&this->MaterialSwitcherFilter);
  if (bVar2) {
    local_168.AdditionalFilter.AllMask.Bits.NumBits = 0;
    local_168.AdditionalFilter.AllMask.Bits.MaxBits = 0x180;
    local_168.AdditionalFilter.NoneMask.Bits.NumBits = 0;
    local_168.AdditionalFilter.NoneMask.Bits.MaxBits = 0x180;
    local_168.AdditionalFilter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.AdditionalFilter.ComplexMasks.ArrayNum = 0;
    local_168.AdditionalFilter.ComplexMasks.ArrayMax = 0;
    local_168.TrackingMode = CacheIfTracked;
    pFVar3 = FBuiltInComponentTypes::Get();
    local_198.Value = (pFVar3->Tags).NeedsLink.Value;
    local_188._First = &local_198;
    local_188._Last = &local_196;
    FComponentMask::SetAll((FComponentMask *)&local_168,&local_188);
    FEntityComponentFilter::operator=(&local_168.AdditionalFilter,&this->MaterialSwitcherFilter);
    if ((this->MaterialSwitcherStorage).Object ==
        (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
    ::
    BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>
              ((this->MaterialSwitcherStorage).Object,param_1,&local_168,param_2,param_3);
    if (local_168.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
    }
  }
  bVar2 = FEntityManager::Contains(&param_1->EntityManager,&this->MaterialParameterFilter);
  if (bVar2) {
    local_d8.AdditionalFilter.AllMask.Bits.NumBits = 0;
    local_d8.AdditionalFilter.AllMask.Bits.MaxBits = 0x180;
    local_d8.AdditionalFilter.NoneMask.Bits.NumBits = 0;
    local_d8.AdditionalFilter.NoneMask.Bits.MaxBits = 0x180;
    local_d8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.AdditionalFilter.ComplexMasks.ArrayNum = 0;
    local_d8.AdditionalFilter.ComplexMasks.ArrayMax = 0;
    local_d8.TrackingMode = CacheIfTracked;
    pFVar3 = FBuiltInComponentTypes::Get();
    local_194.Value = (pFVar3->Tags).NeedsLink.Value;
    local_178._First = &local_194;
    local_178._Last = local_192;
    FComponentMask::SetAll((FComponentMask *)&local_d8,&local_178);
    FEntityComponentFilter::operator=(&local_d8.AdditionalFilter,&this->MaterialParameterFilter);
    if ((this->MaterialParameterStorage).Object ==
        (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_>
    ::
    BeginTrackingAndCachePreAnimatedValuesTask<UE::MovieScene::TPreAnimatedStateTaskParams<UObject_*,FWidgetMaterialHandle>,UObject_*,FWidgetMaterialHandle>
              ((this->MaterialParameterStorage).Object,param_1,&local_d8,param_2,param_3);
    if (local_d8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AdditionalFilter.ComplexMasks.AllocatorInstance.Data);
    }
  }
  return;
}

