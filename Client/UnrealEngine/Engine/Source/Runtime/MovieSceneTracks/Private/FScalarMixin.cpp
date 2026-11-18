// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CreateEntity @ 146823790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FScalarMixin::CreateEntity
          (FScalarMixin *this,UMovieSceneEntitySystemLinker *param_1,FObjectComponent *param_2,
          FMaterialParameterInfo *param_3,FComponentTypeID param_4,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_5,
          FAnimatedMaterialParameterInfo *param_6)

{
  ushort uVar1;
  TComponentTypeID<double> TVar2;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar3;
  TComponentTypeID<FMovieSceneBlendChannelID> TVar4;
  FComponentTypeID FVar5;
  FMovieSceneBlendChannelID FVar6;
  int iVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  FObjectKey FVar9;
  FComponentRegistry *pFVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  FBuiltInComponentTypes *pFVar14;
  bool bVar15;
  EEntityThreadingModel EVar16;
  FMovieSceneEntityID FVar17;
  UMaterialInterface *this_00;
  UClass *pUVar18;
  UMaterialParameterCollectionInstance *this_01;
  undefined6 extraout_var;
  FMovieSceneEntityID *pFVar19;
  longlong lVar20;
  longlong lVar21;
  FMovieSceneEntityID *pFVar22;
  bool local_258;
  float local_254;
  FAdd local_250 [4];
  FMovieSceneEntityID *local_248;
  undefined1 local_240 [24];
  FBuiltInComponentTypes *local_228;
  longlong local_220;
  undefined8 local_218;
  double *local_210;
  FMemoryImageMaterialParameterInfo local_208;
  undefined **local_1f0;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_1e8;
  TObjectPtr<UObject>_u_0 local_1e0;
  FObjectKey local_1d8;
  bool local_1d0;
  TAdd<FMovieSceneBlendChannelID> local_1c8;
  TComponentTypeID<double> local_1c0;
  double local_1b8;
  bool local_1b0;
  undefined1 local_1a8 [16];
  bool local_198;
  FAdd local_190;
  FAdd local_18e [3];
  undefined1 local_188;
  TComponentTypeID<double> local_180;
  bool bStack_17e;
  undefined1 uStack_17d;
  undefined1 local_168 [40];
  TAdd<FMovieSceneBlendChannelID> local_140;
  TAdd<double> local_138;
  TAddConditional<double> local_120;
  FAdd local_108;
  FAdd local_106;
  FAdd local_104 [30];
  undefined4 local_c8;
  undefined4 local_c4;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<double>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_c0;
  
  local_228 = FBuiltInComponentTypes::Get();
  local_240._16_8_ = FMovieSceneTracksComponentTypes::Get();
  local_258 = false;
  local_254 = 0.0;
  pFVar22 = param_5->DataPtr;
  pFVar19 = pFVar22 + param_5->ArrayNum;
  local_248 = pFVar19;
  if (pFVar22 != pFVar19) {
    do {
      uVar1 = pFVar22->Value;
      TVar2 = ((TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
              (local_240._16_8_ + 0x1e0))->InitialValue;
      if ((uVar1 == 0xffff) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Entity",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                              ,0x1a8,L""), pFVar19 = local_248, bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (TVar2 == (TComponentTypeID<double>)0xffff) {
        local_218 = 0;
        local_220 = 0;
        local_210 = (double *)0x0;
      }
      else {
        lVar21 = *(longlong *)&(param_1->EntityManager).EntityLocations;
        local_240._4_4_ = *(uint *)(lVar21 + (ulonglong)uVar1 * 8);
        local_240._8_2_ = *(undefined2 *)(lVar21 + 4 + (ulonglong)uVar1 * 8);
        if ((short)local_240._4_4_ != -1) {
          lVar21 = (ulonglong)(local_240._4_4_ & 0xffff) * 0x38 +
                   *(longlong *)&(param_1->EntityManager).EntityAllocationMasks;
          if (((int)(uint)(ushort)TVar2 < *(int *)(lVar21 + 0x30)) &&
             ((*(uint *)(lVar21 + (ulonglong)((ushort)TVar2 >> 5) * 4) >> ((ushort)TVar2 & 0x1f) & 1
              ) != 0)) {
            lVar21 = *(longlong *)
                      (*(longlong *)&(param_1->EntityManager).EntityAllocations +
                      (ulonglong)(local_240._4_4_ & 0xffff) * 8);
            EVar16 = FEntityManager::GetThreadingModel(&param_1->EntityManager);
            lVar20 = *(longlong *)(lVar21 + 0x28);
            lVar21 = (ulonglong)*(ushort *)(lVar21 + 0xc) * 0x38 + lVar20;
            for (; lVar20 != lVar21; lVar20 = lVar20 + 0x38) {
              if (*(TComponentTypeID<double> *)(lVar20 + 0x36) == TVar2) {
                if (EVar16 != NoThreading) {
                  AcquireSRWLockShared((PSRWLOCK)(lVar20 + 0x20));
                }
                uVar13 = local_218;
                LOCK();
                *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
                UNLOCK();
                local_218._1_3_ = 0;
                local_218._0_1_ = EVar16 != NoThreading;
                local_218._4_4_ = SUB84(uVar13,4);
                local_210 = (double *)
                            (*(longlong *)(lVar20 + 0x18) + (ulonglong)(ushort)local_240._6_2_ * 8);
                local_220 = lVar20;
                if (local_210 == (double *)0x0) {
                  LOCK();
                  *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + -1;
                  UNLOCK();
                  pFVar19 = local_248;
                  if (EVar16 != NoThreading) {
                    ReleaseSRWLockShared((PSRWLOCK)(lVar20 + 0x20));
                    pFVar19 = local_248;
                  }
                  goto LAB_146823900;
                }
                local_254 = (float)*local_210;
                local_258 = true;
                LOCK();
                *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + -1;
                UNLOCK();
                if (EVar16 != NoThreading) {
                  ReleaseSRWLockShared((PSRWLOCK)(lVar20 + 0x20));
                }
                goto LAB_146823a58;
              }
            }
          }
        }
        local_218 = 0;
        local_220 = 0;
        local_210 = (double *)0x0;
        pFVar19 = local_248;
      }
LAB_146823900:
      pFVar22 = pFVar22 + 1;
    } while (pFVar22 != pFVar19);
  }
  this_00 = (UMaterialInterface *)FObjectComponent::GetObject(param_2);
  if (this_00 != (UMaterialInterface *)0x0) {
    pUVar18 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar7 = (int)pUVar18->_padding_;
    if ((iVar7 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar18->_padding_)) goto LAB_1468239d5;
  }
  this_00 = (UMaterialInterface *)0x0;
LAB_1468239d5:
  if (this_00 == (UMaterialInterface *)0x0) {
    this_01 = (UMaterialParameterCollectionInstance *)FObjectComponent::GetObject(param_2);
    if (this_01 != (UMaterialParameterCollectionInstance *)0x0) {
      pUVar18 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
      iVar7 = (int)pUVar18->_padding_;
      if ((iVar7 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar18->_padding_)) {
        local_258 = UMaterialParameterCollectionInstance::GetScalarParameterValue
                              (this_01,param_3->Name,&local_254);
      }
    }
  }
  else {
    local_208.Name.ComparisonIndex = (param_3->Name).ComparisonIndex;
    local_208.Name.Number = (param_3->Name).Number;
    local_208.Index = param_3->Index;
    local_208.Association.Value = (param_3->Association).Value;
    local_208.Name.DisplayIndex.Value = 0;
    local_258 = UMaterialInterface::GetScalarParameterValue(this_00,&local_208,&local_254,false);
  }
LAB_146823a58:
  uVar13 = local_240._16_8_;
  TVar3 = *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)(local_240._16_8_ + 0x306);
  TVar8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->ObjectPtr).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar8.DebugPtr);
  }
  FVar9 = param_2->ObjectKey;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar8.DebugPtr);
  }
  pFVar14 = local_228;
  TVar4 = local_228->BlendChannelOutput;
  FVar6 = param_6->BlendChannelID;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar8.DebugPtr);
  }
  TVar2 = pFVar14->DoubleResult[0];
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar8.DebugPtr);
  }
  bStack_17e = local_258;
  local_180 = ((TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
              (uVar13 + 0x1e0))->InitialValue;
  dVar12 = (double)local_254;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar8.DebugPtr);
  }
  FVar5.Value = (((TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
                 (uVar13 + 0x1e0))->PropertyTag).Value;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar8.DebugPtr);
  }
  local_1d0 = true;
  local_1e8 = TVar3;
  local_1e0.ObjectPtr.field0_0x0 = TVar8.ObjectPtr.field0_0x0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar8.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar8.DebugPtr);
  }
  local_1a8._0_4_ = _local_180;
  local_18e[0].ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)param_4.Value;
  local_1f0 = &
              ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U__TAddConditional_N_23_UFAdd_23_U723__MovieScene_UE__6B_
  ;
  local_1b8 = 0.0;
  local_250[0].ComponentTypeID.Value = (FComponentTypeID)(local_228->Tags).NeedsLink.Value;
  local_1c8.Payload.bIsSet = true;
  local_1b0 = true;
  local_198 = true;
  local_188 = 0;
  local_1d8 = FVar9;
  local_1c8._padding_ = (short)TVar4;
  local_1c8.Payload.TypedValue = FVar6;
  local_1c0 = TVar2;
  local_1a8._8_8_ = dVar12;
  local_190.ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)FVar5.Value;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<double>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<double>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<double>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)local_168,(TAdd<UE::MovieScene::FObjectComponent> *)&local_1e8,&local_1c8,
             (TAdd<double> *)&local_1c0,(TAddConditional<double> *)local_1a8,&local_190,local_18e,
             local_250,false);
  local_168._0_8_ =
       &
       ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U__TAddConditional_N_23_UFAdd_23_U723_U723__MovieScene_UE__6B_
  ;
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<double>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<double>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            (&local_c0,(TAdd<UE::MovieScene::FObjectComponent> *)(local_168 + 8),&local_140,
             &local_138,&local_120,&local_108,&local_106,local_104,true);
  local_c0._padding_ =
       (longlong)
       &
       ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U__TAddConditional_N_23_UFAdd_23_U723_U723__MovieScene_UE__6B_
  ;
  local_c4 = 0x180;
  local_c8 = 0;
  FVar17 = FEntityBuilderImplBase::CreateEntity
                     ((FEntityBuilderImplBase *)&local_c0,(FEntityManager *)local_240,
                      (FComponentMask *)&param_1->EntityManager);
  FVar17.Value = *(ushort *)CONCAT62(extraout_var,FVar17.Value);
  local_c0._padding_ = (longlong)&___7IEntityBuilder_MovieScene_UE__6B_;
  local_168._0_8_ = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_1f0 = &___7IEntityBuilder_MovieScene_UE__6B_;
  iVar7 = param_5->ArrayNum;
  (param_6->OutputEntityID).Value = FVar17.Value;
  pFVar10 = (param_1->EntityManager).ComponentRegistry;
  if ((iVar7 < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FEntityManager::CopyComponents
            (&param_1->EntityManager,(FMovieSceneEntityID)param_5->DataPtr->Value,FVar17,
             &pFVar10->CopyAndMigrationMask);
  return;
}

// InitializeSoleInput @ 14683e3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FScalarMixin::InitializeSoleInput
          (FScalarMixin *this,UMovieSceneEntitySystemLinker *param_1,FObjectComponent *param_2,
          FMaterialParameterInfo *param_3,FMovieSceneEntityID param_4,
          FAnimatedMaterialParameterInfo *param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  TComponentTypeID<double> TVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FComponentMask *this_00;
  UMaterialInterface *this_01;
  UClass *pUVar9;
  UMaterialParameterCollectionInstance *this_02;
  FEntityManager *this_03;
  ushort *puVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  float local_98;
  ushort local_94;
  ushort local_92;
  FMemoryImageMaterialParameterInfo local_90;
  TBitArray<TFixedAllocator<12>_> local_7c;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar7 = FBuiltInComponentTypes::Get();
  pFVar8 = FMovieSceneTracksComponentTypes::Get();
  this_03 = &param_1->EntityManager;
  this_00 = FEntityManager::GetEntityType(this_03,param_4);
  puVar10 = &local_94;
  local_94 = (pFVar7->Tags).RestoreState.Value;
  local_92 = (pFVar7->Tags).AlwaysCacheInitialValue.Value;
  local_7c.NumBits = 0;
  local_7c.MaxBits = 0x180;
  do {
    uVar2 = *puVar10;
    iVar11 = ((uint)uVar2 - local_7c.NumBits) + 1;
    if (0 < iVar11) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_7c,false,iVar11);
    }
    if ((local_7c.NumBits <= (int)(uint)uVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar10 = puVar10 + 1;
    pTVar1 = local_7c.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  } while ((FMemoryImageMaterialParameterInfo *)puVar10 != &local_90);
  bVar6 = FComponentMask::ContainsAny(this_00,(FComponentMask *)&local_7c);
  TVar3 = (pFVar8->FloatParameter).InitialValue;
  if (((TVar3 == (TComponentTypeID<double>)0xffff) ||
      ((this_00->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
     ((*(uint *)(this_00->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
       ((ushort)TVar3 & 0x1f) & 1) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar6) || (bVar5)) goto LAB_14683e5f7;
  local_98 = 0.0;
  this_01 = (UMaterialInterface *)FObjectComponent::GetObject(param_2);
  if (this_01 == (UMaterialInterface *)0x0) {
LAB_14683e555:
    this_01 = (UMaterialInterface *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar9->_padding_)) goto LAB_14683e555;
  }
  if (this_01 == (UMaterialInterface *)0x0) {
    this_02 = (UMaterialParameterCollectionInstance *)FObjectComponent::GetObject(param_2);
    if (this_02 == (UMaterialParameterCollectionInstance *)0x0) goto LAB_14683e5f7;
    pUVar9 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar9->_padding_)) goto LAB_14683e5f7;
    UMaterialParameterCollectionInstance::GetScalarParameterValue(this_02,param_3->Name,&local_98);
  }
  else {
    local_90.Name.ComparisonIndex = (param_3->Name).ComparisonIndex;
    local_90.Name.Number = (param_3->Name).Number;
    local_90.Index = param_3->Index;
    local_90.Association.Value = (param_3->Association).Value;
    local_90.Name.DisplayIndex.Value = 0;
    UMaterialInterface::GetScalarParameterValue(this_01,&local_90,&local_98,false);
  }
  FEntityManager::AddComponent<double,float_&>
            (this_03,param_4,(pFVar8->FloatParameter).InitialValue,&local_98);
LAB_14683e5f7:
  pFVar7 = FBuiltInComponentTypes::Get();
  FEntityManager::RemoveComponent
            (this_03,param_4,(FComponentTypeID)*(ushort *)&pFVar7->HierarchicalBlendTarget);
  return;
}

