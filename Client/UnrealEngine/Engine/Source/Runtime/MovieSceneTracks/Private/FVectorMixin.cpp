// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CreateEntity @ 146823d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FVectorMixin::CreateEntity
          (FVectorMixin *this,UMovieSceneEntitySystemLinker *param_1,FObjectComponent *param_2,
          FMaterialParameterInfo *param_3,FComponentTypeID param_4,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_5,
          FAnimatedMaterialParameterInfo *param_6)

{
  ushort uVar1;
  TComponentTypeID<UE::MovieScene::FIntermediateColor> TVar2;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar3;
  TComponentTypeID<FMovieSceneBlendChannelID> TVar4;
  TComponentTypeID<double> TVar5;
  TComponentTypeID<double> TVar6;
  TComponentTypeID<double> TVar7;
  TComponentTypeID<double> TVar8;
  FMovieSceneBlendChannelID FVar9;
  int iVar10;
  TObjectPtr<UObject>_u_0 TVar11;
  FComponentRegistry *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  FBuiltInComponentTypes *pFVar17;
  bool bVar18;
  EEntityThreadingModel EVar19;
  FMovieSceneEntityID FVar20;
  FObjectKey FVar21;
  undefined6 extraout_var;
  UMaterialInterface *this_00;
  UClass *pUVar22;
  UMaterialParameterCollectionInstance *this_01;
  longlong lVar23;
  longlong lVar24;
  FMovieSceneEntityID *pFVar25;
  double dVar26;
  double dVar27;
  bool local_5f8;
  FAdd local_5f6;
  FAdd local_5f4;
  FAdd local_5f2;
  FObjectKey local_5f0;
  undefined1 local_5e8 [24];
  FLinearColor_u_0 local_5d0;
  FBuiltInComponentTypes *local_5c0;
  longlong local_5b8;
  undefined8 local_5b0;
  double *local_5a8;
  FMemoryImageMaterialParameterInfo local_5a0;
  undefined **local_588;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_580;
  TObjectPtr<UObject>_u_0 local_578;
  FObjectKey local_570;
  bool local_568;
  TAdd<FMovieSceneBlendChannelID> local_560;
  TComponentTypeID<double> local_558;
  double local_550;
  bool local_548;
  TComponentTypeID<double> local_540;
  double local_538;
  bool local_530;
  TComponentTypeID<double> local_528;
  double local_520;
  bool local_518;
  TComponentTypeID<double> local_510;
  double local_508;
  bool local_500;
  undefined1 local_4f8;
  TComponentTypeID<UE::MovieScene::FIntermediateColor> local_4f0;
  bool local_4ee;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  bool local_4c8;
  undefined **local_4c0;
  undefined1 local_4b8 [40];
  TAdd<double> local_490;
  TAdd<double> local_478;
  TAdd<double> local_460;
  TAdd<double> local_448;
  TAddConditional<UE::MovieScene::FIntermediateColor> local_430;
  FAdd local_400;
  FAdd local_3fe;
  FAdd local_3fc [2];
  uchar local_3f8;
  undefined **local_3f0;
  undefined1 local_3e8 [40];
  TAdd<double> local_3c0;
  TAdd<double> local_3a8;
  TAdd<double> local_390;
  TAdd<double> local_378;
  TAddConditional<UE::MovieScene::FIntermediateColor> local_360;
  FAdd local_330;
  FAdd local_32e [3];
  undefined1 local_328;
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined **local_300;
  undefined1 local_2f8 [40];
  TAdd<double> local_2d0;
  TAdd<double> local_2b8;
  TAdd<double> local_2a0;
  TAdd<double> local_288;
  TAddConditional<UE::MovieScene::FIntermediateColor> local_270;
  FAdd local_240 [4];
  undefined1 local_238;
  undefined **local_230;
  undefined1 local_228 [40];
  TAdd<double> local_200;
  TAdd<double> local_1e8;
  TAdd<double> local_1d0;
  TAdd<double> local_1b8;
  TAddConditional<UE::MovieScene::FIntermediateColor> local_1a0;
  undefined1 local_170;
  undefined4 local_138;
  undefined4 local_134;
  FEntityBuilderImplBase local_130;
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  local_128;
  undefined1 local_68;
  
  local_5c0 = FBuiltInComponentTypes::Get();
  local_5e8._16_8_ = FMovieSceneTracksComponentTypes::Get();
  local_5f8 = false;
  pFVar25 = param_5->DataPtr;
  FVar21 = (FObjectKey)(pFVar25 + param_5->ArrayNum);
  local_5f0 = FVar21;
  if ((FObjectKey)pFVar25 != FVar21) {
    do {
      uVar1 = pFVar25->Value;
      TVar2 = ((TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                *)(local_5e8._16_8_ + 0x1f8))->InitialValue;
      if ((uVar1 == 0xffff) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Entity",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                              ,0x1a8,L""), FVar21 = local_5f0, bVar18)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (TVar2 == (TComponentTypeID<UE::MovieScene::FIntermediateColor>)0xffff) {
        local_5b0 = 0;
        local_5b8 = 0;
        local_5a8 = (double *)0x0;
      }
      else {
        lVar24 = *(longlong *)&(param_1->EntityManager).EntityLocations;
        local_5e8._4_4_ = *(uint *)(lVar24 + (ulonglong)uVar1 * 8);
        local_5e8._8_2_ = *(undefined2 *)(lVar24 + 4 + (ulonglong)uVar1 * 8);
        if ((short)local_5e8._4_4_ != -1) {
          lVar24 = (ulonglong)(local_5e8._4_4_ & 0xffff) * 0x38 +
                   *(longlong *)&(param_1->EntityManager).EntityAllocationMasks;
          if (((int)(uint)(ushort)TVar2 < *(int *)(lVar24 + 0x30)) &&
             ((*(uint *)(lVar24 + (ulonglong)((ushort)TVar2 >> 5) * 4) >> ((ushort)TVar2 & 0x1f) & 1
              ) != 0)) {
            lVar24 = *(longlong *)
                      (*(longlong *)&(param_1->EntityManager).EntityAllocations +
                      (ulonglong)(local_5e8._4_4_ & 0xffff) * 8);
            EVar19 = FEntityManager::GetThreadingModel(&param_1->EntityManager);
            lVar23 = *(longlong *)(lVar24 + 0x28);
            lVar24 = (ulonglong)*(ushort *)(lVar24 + 0xc) * 0x38 + lVar23;
            for (; lVar23 != lVar24; lVar23 = lVar23 + 0x38) {
              if (*(TComponentTypeID<UE::MovieScene::FIntermediateColor> *)(lVar23 + 0x36) == TVar2)
              {
                if (EVar19 != NoThreading) {
                  AcquireSRWLockShared((PSRWLOCK)(lVar23 + 0x20));
                }
                uVar16 = local_5b0;
                LOCK();
                *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
                UNLOCK();
                local_5a8 = (double *)
                            ((ulonglong)(ushort)local_5e8._6_2_ * 0x20 +
                            *(longlong *)(lVar23 + 0x18));
                local_5b0._1_3_ = 0;
                local_5b0._0_1_ = EVar19 != NoThreading;
                local_5b0._4_4_ = SUB84(uVar16,4);
                local_5b8 = lVar23;
                if (local_5a8 != (double *)0x0) {
                  dVar14 = *local_5a8;
                  dVar26 = local_5a8[1];
                  local_5f8 = true;
                  dVar15 = local_5a8[2];
                  dVar27 = local_5a8[3];
                  LOCK();
                  *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + -1;
                  UNLOCK();
                  if (EVar19 != NoThreading) {
                    ReleaseSRWLockShared((PSRWLOCK)(lVar23 + 0x20));
                  }
                  goto LAB_146823f49;
                }
                LOCK();
                *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + -1;
                UNLOCK();
                FVar21 = local_5f0;
                if (EVar19 != NoThreading) {
                  ReleaseSRWLockShared((PSRWLOCK)(lVar23 + 0x20));
                  FVar21 = local_5f0;
                }
                goto LAB_146823ec4;
              }
            }
          }
        }
        local_5b0 = 0;
        local_5b8 = 0;
        local_5a8 = (double *)0x0;
        FVar21 = local_5f0;
      }
LAB_146823ec4:
      pFVar25 = pFVar25 + 1;
    } while ((FObjectKey)pFVar25 != FVar21);
  }
  local_5d0 = FLinearColor::Black.field0_0x0;
  this_00 = (UMaterialInterface *)FObjectComponent::GetObject(param_2);
  if (this_00 == (UMaterialInterface *)0x0) {
LAB_1468244ee:
    this_00 = (UMaterialInterface *)0x0;
  }
  else {
    pUVar22 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar10 = (int)pUVar22->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar22->_padding_)) goto LAB_1468244ee;
  }
  if (this_00 == (UMaterialInterface *)0x0) {
    this_01 = (UMaterialParameterCollectionInstance *)FObjectComponent::GetObject(param_2);
    dVar14 = 0.0;
    dVar15 = 0.0;
    dVar26 = 0.0;
    dVar27 = 0.0;
    if (this_01 == (UMaterialParameterCollectionInstance *)0x0) goto LAB_146823f49;
    pUVar22 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar10 = (int)pUVar22->_padding_;
    dVar14 = 0.0;
    dVar15 = 0.0;
    dVar26 = 0.0;
    dVar27 = 0.0;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar10) ||
       (dVar14 = 0.0, dVar15 = 0.0, dVar26 = 0.0, dVar27 = 0.0,
       (longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8)
       != &pUVar22->_padding_)) goto LAB_146823f49;
    local_5f8 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                          (this_01,param_3->Name,(FLinearColor *)&local_5d0._s_0);
  }
  else {
    local_5a0.Name.ComparisonIndex = (param_3->Name).ComparisonIndex;
    local_5a0.Name.Number = (param_3->Name).Number;
    local_5a0.Index = param_3->Index;
    local_5a0.Association.Value = (param_3->Association).Value;
    local_5a0.Name.DisplayIndex.Value = 0;
    local_5f8 = UMaterialInterface::GetVectorParameterValue
                          (this_00,&local_5a0,(FLinearColor *)&local_5d0._s_0,false);
  }
  dVar14 = 0.0;
  dVar15 = 0.0;
  dVar26 = 0.0;
  dVar27 = 0.0;
  if (local_5f8 != false) {
    dVar26 = (double)local_5d0._s_0.G;
    dVar27 = (double)local_5d0._s_0.A;
    local_320._8_4_ = SUB84(dVar26,0);
    local_320._0_8_ = (double)local_5d0._s_0.R;
    local_320._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    local_310._8_4_ = SUB84(dVar27,0);
    local_310._0_8_ = (double)local_5d0._s_0.B;
    local_310._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    dVar14 = (double)local_5d0._s_0.R;
    dVar15 = (double)local_5d0._s_0.B;
  }
LAB_146823f49:
  TVar11.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->ObjectPtr).field0_0x0.DebugPtr;
  TVar3 = *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)(local_5e8._16_8_ + 0x306);
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar11.DebugPtr);
  }
  local_5f0 = param_2->ObjectKey;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar11.DebugPtr);
  }
  pFVar17 = local_5c0;
  FVar9 = param_6->BlendChannelID;
  TVar4 = local_5c0->BlendChannelOutput;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar11.DebugPtr);
  }
  TVar5 = pFVar17->DoubleResult[0];
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar11.DebugPtr);
  }
  TVar6 = pFVar17->DoubleResult[1];
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar11.DebugPtr);
  }
  TVar7 = pFVar17->DoubleResult[2];
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar11.DebugPtr);
  }
  TVar8 = pFVar17->DoubleResult[3];
  local_568 = true;
  local_580 = TVar3;
  local_578.ObjectPtr.field0_0x0 = TVar11.ObjectPtr.field0_0x0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UObject *)0x0)) {
    GC::MarkAsReachable(TVar11.DebugPtr);
  }
  uVar16 = local_5e8._16_8_;
  local_570 = local_5f0;
  local_550 = 0.0;
  local_588 = &
              ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U523_U523_U523__MovieScene_UE__6B_
  ;
  local_4f0 = ((TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                *)(local_5e8._16_8_ + 0x1f8))->InitialValue;
  local_4ee = local_5f8;
  local_230 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05__U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___34_U__TAdd_N_34_U634_U634_U634_U__TAddConditional_UFIntermediateColor_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  local_538 = 0.0;
  local_520 = 0.0;
  local_508 = 0.0;
  local_560.Payload.bIsSet = true;
  local_548 = true;
  local_530 = true;
  local_518 = true;
  local_500 = true;
  local_4f8 = 0;
  local_4e8._8_4_ = SUB84(dVar26,0);
  local_4e8._0_8_ = dVar14;
  local_4e8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  local_4c8 = true;
  local_4d8._8_4_ = SUB84(dVar27,0);
  local_4d8._0_8_ = dVar15;
  local_4d8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  local_560._padding_ = (short)TVar4;
  local_560.Payload.TypedValue = FVar9;
  local_558 = TVar5;
  local_540 = TVar6;
  local_528 = TVar7;
  local_510 = TVar8;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_>
              *)local_228,ForwardingConstructor,(TAdd<UE::MovieScene::FObjectComponent> *)&local_580
             ,&local_560,(TAdd<double> *)&local_558,(TAdd<double> *)&local_540,
             (TAdd<double> *)&local_528,(TAdd<double> *)&local_510,
             (TAddConditional<UE::MovieScene::FIntermediateColor> *)&local_4f0);
  local_170 = 0;
  local_230 = &
              ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U523_U523_U523_U__TAddConditional_UFIntermediateColor_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_5f6.ComponentTypeID.Value =
       (FComponentTypeID)
       (((TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          *)(uVar16 + 0x1f8))->PropertyTag).Value;
  local_300 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___34_U__TAdd_N_34_U634_U634_U634_U__TAddConditional_UFIntermediateColor_MovieScene_UE___34_UFAdd_34__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd>
              *)local_2f8,ForwardingConstructor,(TAdd<UE::MovieScene::FObjectComponent> *)local_228,
             (TAdd<FMovieSceneBlendChannelID> *)(local_228 + 0x20),&local_200,&local_1e8,&local_1d0,
             &local_1b8,&local_1a0,&local_5f6);
  local_238 = 0;
  local_300 = &
              ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U523_U523_U523_U__TAddConditional_UFIntermediateColor_MovieScene_UE___23_UFAdd_23__MovieScene_UE__6B_
  ;
  local_5f4.ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)param_4.Value;
  local_3f0 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___34_U__TAdd_N_34_U634_U634_U634_U__TAddConditional_UFIntermediateColor_MovieScene_UE___34_UFAdd_34_U834__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)local_3e8,ForwardingConstructor,(TAdd<UE::MovieScene::FObjectComponent> *)local_2f8,
             (TAdd<FMovieSceneBlendChannelID> *)(local_2f8 + 0x20),&local_2d0,&local_2b8,&local_2a0,
             &local_288,&local_270,local_240,&local_5f4);
  local_328 = 0;
  local_3f0 = &
              ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U523_U523_U523_U__TAddConditional_UFIntermediateColor_MovieScene_UE___23_UFAdd_23_U723__MovieScene_UE__6B_
  ;
  local_4c0 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___34_U__TAdd_N_34_U634_U634_U634_U__TAddConditional_UFIntermediateColor_MovieScene_UE___34_UFAdd_34_U834_U834__MovieScene_UE__6B_
  ;
  local_5f2.ComponentTypeID.Value = (FComponentTypeID)(local_5c0->Tags).NeedsLink.Value;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
              *)local_4b8,ForwardingConstructor,(TAdd<UE::MovieScene::FObjectComponent> *)local_3e8,
             (TAdd<FMovieSceneBlendChannelID> *)(local_3e8 + 0x20),&local_3c0,&local_3a8,&local_390,
             &local_378,&local_360,&local_330,local_32e,&local_5f2);
  local_3f8 = '\0';
  local_4c0 = &
              ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U523_U523_U523_U__TAddConditional_UFIntermediateColor_MovieScene_UE___23_UFAdd_23_U723_U723__MovieScene_UE__6B_
  ;
  local_130 = (FEntityBuilderImplBase)
              &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___34_U__TAdd_N_34_U634_U634_U634_U__TAddConditional_UFIntermediateColor_MovieScene_UE___34_UFAdd_34_U834_U834__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
            (&local_128,ForwardingConstructor,(TAdd<UE::MovieScene::FObjectComponent> *)local_4b8,
             (TAdd<FMovieSceneBlendChannelID> *)(local_4b8 + 0x20),&local_490,&local_478,&local_460,
             &local_448,&local_430,&local_400,&local_3fe,local_3fc);
  local_68 = 1;
  local_130 = (FEntityBuilderImplBase)
              &
              ___7__TEntityBuilder_U__TAdd_UFObjectComponent_MovieScene_UE___MovieScene_UE__U__TAdd_UFMovieSceneBlendChannelID___23_U__TAdd_N_23_U523_U523_U523_U__TAddConditional_UFIntermediateColor_MovieScene_UE___23_UFAdd_23_U723_U723__MovieScene_UE__6B_
  ;
  local_138 = 0;
  local_134 = 0x180;
  FVar20 = FEntityBuilderImplBase::CreateEntity
                     (&local_130,(FEntityManager *)local_5e8,
                      (FComponentMask *)&param_1->EntityManager);
  FVar20.Value = *(ushort *)CONCAT62(extraout_var,FVar20.Value);
  (param_6->OutputEntityID).Value = FVar20.Value;
  pFVar12 = (param_1->EntityManager).ComponentRegistry;
  local_130 = (FEntityBuilderImplBase)&___7IEntityBuilder_MovieScene_UE__6B_;
  local_4c0 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_3f0 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_300 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_230 = &___7IEntityBuilder_MovieScene_UE__6B_;
  local_588 = &___7IEntityBuilder_MovieScene_UE__6B_;
  if ((param_5->ArrayNum < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar18)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FEntityManager::CopyComponents
            (&param_1->EntityManager,(FMovieSceneEntityID)param_5->DataPtr->Value,FVar20,
             &pFVar12->CopyAndMigrationMask);
  return;
}

// InitializeSoleInput @ 14683e640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FVectorMixin::InitializeSoleInput
          (FVectorMixin *this,UMovieSceneEntitySystemLinker *param_1,FObjectComponent *param_2,
          FMaterialParameterInfo *param_3,FMovieSceneEntityID param_4,
          FAnimatedMaterialParameterInfo *param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  TComponentTypeID<UE::MovieScene::FIntermediateColor> TVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  FMovieSceneTracksComponentTypes *pFVar8;
  FComponentMask *this_00;
  UMaterialInterface *this_01;
  UClass *pUVar9;
  UMaterialParameterCollectionInstance *this_02;
  ushort *puVar10;
  int iVar11;
  FIntermediateColor *pFVar12;
  undefined1 auStack_118 [32];
  ushort local_f8;
  ushort local_f6;
  ushort local_f4 [2];
  FLinearColor_u_0 local_f0;
  FEntityManager *local_e0;
  FMemoryImageMaterialParameterInfo local_d8;
  FIntermediateColor local_c0;
  FIntermediateColor local_a0;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar7 = FBuiltInComponentTypes::Get();
  pFVar8 = FMovieSceneTracksComponentTypes::Get();
  local_e0 = &param_1->EntityManager;
  this_00 = FEntityManager::GetEntityType(local_e0,param_4);
  puVar10 = &local_f8;
  local_f8 = (pFVar7->Tags).RestoreState.Value;
  local_f6 = (pFVar7->Tags).AlwaysCacheInitialValue.Value;
  local_80.NumBits = 0;
  local_80.MaxBits = 0x180;
  do {
    uVar2 = *puVar10;
    iVar11 = ((uint)uVar2 - local_80.NumBits) + 1;
    if (0 < iVar11) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_80,false,iVar11);
    }
    if ((local_80.NumBits <= (int)(uint)uVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar10 = puVar10 + 1;
    pTVar1 = local_80.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  } while (puVar10 != local_f4);
  bVar6 = FComponentMask::ContainsAny(this_00,(FComponentMask *)&local_80);
  TVar3 = (pFVar8->ColorParameter).InitialValue;
  if (((TVar3 == (TComponentTypeID<UE::MovieScene::FIntermediateColor>)0xffff) ||
      ((this_00->Bits).NumBits <= (int)(uint)(ushort)TVar3)) ||
     ((*(uint *)(this_00->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
       ((ushort)TVar3 & 0x1f) & 1) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar6) {
    return;
  }
  if (bVar5) {
    return;
  }
  local_f0 = FLinearColor::White.field0_0x0;
  this_01 = (UMaterialInterface *)FObjectComponent::GetObject(param_2);
  if (this_01 != (UMaterialInterface *)0x0) {
    pUVar9 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if ((iVar11 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar9->_padding_)) goto LAB_14683e7d7;
  }
  this_01 = (UMaterialInterface *)0x0;
LAB_14683e7d7:
  if (this_01 == (UMaterialInterface *)0x0) {
    this_02 = (UMaterialParameterCollectionInstance *)FObjectComponent::GetObject(param_2);
    if (this_02 == (UMaterialParameterCollectionInstance *)0x0) {
      return;
    }
    pUVar9 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar11 = (int)pUVar9->_padding_;
    if (*(int *)(this_02->_padding_ + 0x38) < iVar11) {
      return;
    }
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar9->_padding_) {
      return;
    }
    bVar6 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                      (this_02,param_3->Name,(FLinearColor *)&local_f0._s_0);
    if (!bVar6) {
      return;
    }
    pFVar12 = &local_a0;
    local_a0.R = (double)local_f0._s_0.R;
    local_a0.G = (double)local_f0._s_0.G;
    local_a0.B = (double)local_f0._s_0.B;
    local_a0.A = (double)local_f0._s_0.A;
  }
  else {
    local_d8.Name.ComparisonIndex = (param_3->Name).ComparisonIndex;
    local_d8.Name.Number = (param_3->Name).Number;
    local_d8.Index = param_3->Index;
    local_d8.Association.Value = (param_3->Association).Value;
    local_d8.Name.DisplayIndex.Value = 0;
    bVar6 = UMaterialInterface::GetVectorParameterValue
                      (this_01,&local_d8,(FLinearColor *)&local_f0._s_0,false);
    if (!bVar6) {
      return;
    }
    pFVar12 = &local_c0;
    local_c0.R = (double)local_f0._s_0.R;
    local_c0.G = (double)local_f0._s_0.G;
    local_c0.B = (double)local_f0._s_0.B;
    local_c0.A = (double)local_f0._s_0.A;
  }
  FEntityManager::
  AddComponent<UE::MovieScene::FIntermediateColor,UE::MovieScene::FIntermediateColor>
            (local_e0,param_4,(pFVar8->ColorParameter).InitialValue,pFVar12);
  return;
}

