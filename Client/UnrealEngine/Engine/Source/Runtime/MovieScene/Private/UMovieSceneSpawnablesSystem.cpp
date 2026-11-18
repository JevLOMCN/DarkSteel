// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 11

// StaticClass @ 146100e60

UClass * __cdecl UMovieSceneSpawnablesSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnablesSystem",
               &Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnablesSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSpawnablesSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnablesSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton;
}

// UMovieSceneSpawnablesSystem @ 14611bc30

UMovieSceneSpawnablesSystem * __thiscall
UMovieSceneSpawnablesSystem::UMovieSceneSpawnablesSystem
          (UMovieSceneSpawnablesSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(TStatIdData **)&this->field_0x40 = &TStatId::TStatId_NAME_None;
  *(undefined ***)this = &___7UMovieSceneSpawnablesSystem__6B_;
  *(undefined2 *)&this->field_0x30 = 0xffff;
  return this;
}

// UMovieSceneSpawnablesSystem @ 14611bc70

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSpawnablesSystem * __thiscall
UMovieSceneSpawnablesSystem::UMovieSceneSpawnablesSystem
          (UMovieSceneSpawnablesSystem *this,FObjectInitializer *param_1)

{
  FBuiltInComponentTypes *pFVar1;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 2;
  *(undefined ***)this = &___7UMovieSceneSpawnablesSystem__6B_;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(TComponentTypeID<FGuid> *)&this->field_0x30 = pFVar1->SpawnableBinding;
  return this;
}

// ~UMovieSceneSpawnablesSystem @ 14611e980

void __thiscall
UMovieSceneSpawnablesSystem::~UMovieSceneSpawnablesSystem(UMovieSceneSpawnablesSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1461203e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
`UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_2>::operator()
          (void *this,FMovieSceneEntityID param_1,FInstanceHandle param_2,FGuid *param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_DestroySpawnables> FVar17;
  FMovieSceneEvaluationState *this_00;
  UMovieSceneSequence *pUVar18;
  FBuiltInComponentTypes *pFVar19;
  UMovieScene *this_01;
  FMovieSceneSpawnable *pFVar20;
  FName FVar21;
  TArrayView<FMovieSceneBindingReference_const_,int> *pTVar22;
  UMovieSceneCustomBinding *pUVar23;
  longlong lVar24;
  longlong lVar25;
  FName FVar26;
  longlong *local_res8;
  FName local_80;
  FMovieSceneSequenceID local_78;
  uint uStack_74;
  FColor_u_0 local_70;
  undefined2 local_6c;
  FName local_68;
  FName local_60;
  FName local_50;
  TReferenceControllerBase<1> *local_48;
  TArrayView<FMovieSceneBindingReference_const_,int> local_40;
  
  iVar14 = 0;
  FVar17 = UE::MovieScene::StatPtr_MovieSceneEval_DestroySpawnables;
  local_res8 = this;
  if (UE::MovieScene::StatPtr_MovieSceneEval_DestroySpawnables ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_DestroySpawnables>)0x0) {
    pFVar16 = ::FName::FName(&local_68,"MovieSceneEval_DestroySpawnables");
    FVar17 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_DestroySpawnables>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MovieScene::StatPtr_MovieSceneEval_DestroySpawnables,*pFVar16,
                        L"Spawnables: Destroy","STATGROUP_MovieSceneEval","STATCAT_Advanced",
                        L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar17;
  bVar10 = false;
  bVar11 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_146120546:
    bVar11 = bVar13;
    bVar10 = bVar12;
    bVar12 = false;
    FVar26 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_70.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_70._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80 = FVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSpawnablesSystem.cpp"
                   ,0x85);
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146120546;
    local_78.Value = FVar26.ComparisonIndex.Value.Value;
    uStack_74 = FVar26.Number;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar12 = true;
  }
  bVar13 = UE::MovieScene::FInstanceRegistry::IsHandleValid
                     (*(FInstanceRegistry **)((longlong)this + 0x10),param_2);
  if (!bVar13) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_726948761313476473>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSpawnablesSystem.cpp"
                        ,0x87,"InstanceRegistry->IsHandleValid(InstanceHandle)");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    goto LAB_146120892;
  }
  lVar25 = ((ulonglong)(uint)param_2 & 0xffff) * 0x140 +
           *(longlong *)(*(longlong *)((longlong)this + 0x10) + 8);
  pTVar5 = *(TReferenceControllerBase<1> **)(lVar25 + 0x120);
  FVar21 = *(FName *)(lVar25 + 0x118);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = FVar21;
  this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                      ((FSharedPlaybackState *)FVar21);
  if (this_00 == (FMovieSceneEvaluationState *)0x0) {
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,*(uint *)(lVar25 + 0x128));
    UE::MovieScene::FSharedPlaybackState::GetSequence
              ((FSharedPlaybackState *)FVar21,(FMovieSceneSequenceID *)&local_res8);
  }
  else {
    local_78.Value = *(uint *)(lVar25 + 0x128);
    pUVar18 = FMovieSceneEvaluationState::FindSequence(this_00,&local_78);
    if (pUVar18 != (UMovieSceneSequence *)0x0) {
      local_80 = *(FName *)(*local_res8 + 0x28);
      pFVar19 = UE::MovieScene::FBuiltInComponentTypes::Get();
      uVar2 = (pFVar19->Tags).OldStyleSpawnable.Value;
      uVar3 = *(uint *)(*(longlong *)((longlong)local_80 + 0xc0) + (ulonglong)param_1.Value * 8);
      local_6c = *(undefined2 *)
                  (*(longlong *)((longlong)local_80 + 0xc0) + 4 + (ulonglong)param_1.Value * 8);
      if (((((short)uVar3 == -1) ||
           (lVar24 = (ulonglong)(uVar3 & 0xffff) * 0x38 + *(longlong *)((longlong)local_80 + 0x30),
           uVar2 == 0xffff)) || (*(int *)(lVar24 + 0x30) <= (int)(uint)uVar2)) ||
         ((*(uint *)(lVar24 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
        FVar21 = (FName)(**(code **)(pUVar18->_padding_ + 0x2b8))(pUVar18);
        local_80 = FVar21;
        if ((FVar21 != (FName)0x0) &&
           (pTVar22 = FMovieSceneBindingReferences::GetReferences
                                ((FMovieSceneBindingReferences *)FVar21,&local_40,param_3),
           0 < pTVar22->ArrayNum)) {
          do {
            pUVar23 = FMovieSceneBindingReferences::GetCustomBinding
                                ((FMovieSceneBindingReferences *)FVar21,param_3,iVar14);
            if (pUVar23 != (UMovieSceneCustomBinding *)0x0) {
              pcVar8 = *(code **)(*(longlong *)pUVar23 + 0x2e0);
              local_50 = local_68;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_48 = pTVar5;
              lVar24 = (*pcVar8)(pUVar23,&local_50);
              if (lVar24 != 0) {
                if ((*(byte *)(lVar25 + 0x13e) & 2) != 0) {
                  if ((((short)*(undefined4 *)(lVar25 + 0x13a) !=
                        (short)*(undefined4 *)(lVar25 + 0x132)) ||
                      ((short)((uint)*(undefined4 *)(lVar25 + 0x13a) >> 0x10) !=
                       (short)((uint)*(undefined4 *)(lVar25 + 0x132) >> 0x10))) &&
                     (*(char *)(lVar24 + 0x28) != '\0')) break;
                }
                uVar4 = *(undefined4 *)(lVar25 + 0x128);
                pFVar6 = (ForAnyElementType *)local_res8[1];
                piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
                iVar15 = *(int *)&pFVar6[1].Data;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x41c,pFVar6,piVar1);
                }
                *(int *)&pFVar6[1].Data = iVar15 + 1;
                uVar9 = *(undefined8 *)&param_3->C;
                lVar24 = (longlong)iVar15 * 0x1c;
                pFVar7 = pFVar6->Data;
                *(undefined8 *)(pFVar7 + lVar24) = *(undefined8 *)param_3;
                *(undefined8 *)(pFVar7 + lVar24 + 8) = uVar9;
                *(int *)(pFVar7 + lVar24 + 0x10) = iVar14;
                *(undefined4 *)(pFVar7 + lVar24 + 0x14) = uVar4;
                *(FInstanceHandle *)(pFVar7 + lVar24 + 0x18) = param_2;
                FVar21 = local_80;
              }
            }
            iVar14 = iVar14 + 1;
            pTVar22 = FMovieSceneBindingReferences::GetReferences
                                ((FMovieSceneBindingReferences *)FVar21,&local_40,param_3);
          } while (iVar14 < pTVar22->ArrayNum);
        }
      }
      else {
        this_01 = (UMovieScene *)(**(code **)(pUVar18->_padding_ + 0x2f8))(pUVar18);
        pFVar20 = UMovieScene::FindSpawnable(this_01,param_3);
        if (pFVar20 != (FMovieSceneSpawnable *)0x0) {
          if ((*(byte *)(lVar25 + 0x13e) & 2) != 0) {
            if ((((short)*(undefined4 *)(lVar25 + 0x13a) != (short)*(undefined4 *)(lVar25 + 0x132))
                || ((short)((uint)*(undefined4 *)(lVar25 + 0x13a) >> 0x10) !=
                    (short)((uint)*(undefined4 *)(lVar25 + 0x132) >> 0x10))) &&
               (pFVar20->Ownership != InnerSequence)) goto LAB_14612088a;
          }
          uVar4 = *(undefined4 *)(lVar25 + 0x128);
          pFVar6 = (ForAnyElementType *)local_res8[1];
          piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
          iVar14 = *(int *)&pFVar6[1].Data;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x41c,pFVar6,piVar1);
          }
          *(int *)&pFVar6[1].Data = iVar14 + 1;
          uVar9 = *(undefined8 *)&param_3->C;
          lVar25 = (longlong)iVar14 * 0x1c;
          pFVar7 = pFVar6->Data;
          *(undefined8 *)(pFVar7 + lVar25) = *(undefined8 *)param_3;
          *(undefined8 *)(pFVar7 + lVar25 + 8) = uVar9;
          *(undefined4 *)(pFVar7 + lVar25 + 0x10) = 0;
          *(undefined4 *)(pFVar7 + lVar25 + 0x14) = uVar4;
          *(FInstanceHandle *)(pFVar7 + lVar25 + 0x18) = param_2;
        }
      }
    }
  }
LAB_14612088a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_146120892:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// operator() @ 1461208f0

void __thiscall `UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSharedPlaybackState *pFVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  FMovieSceneSpawnRegister *this_00;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 local_res20;
  FPlaybackCapabilityPtr local_78;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  FGuid local_58;
  undefined8 local_48;
  uint local_40;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  lVar8 = plVar2[1];
  puVar10 = (undefined8 *)*plVar2;
  puVar11 = (undefined8 *)((longlong)(int)lVar8 * 0x1c + (longlong)puVar10);
  do {
    if ((int)plVar2[1] != (int)lVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FGuid,int,FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar10 == puVar11) {
      pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      *(undefined4 *)&pFVar6[1].Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,pFVar6,0,piVar1);
      }
      return;
    }
    local_40 = *(uint *)(puVar10 + 3);
    local_58._0_8_ = *puVar10;
    local_58._8_8_ = puVar10[1];
    lVar3 = *(longlong *)((longlong)this + 0x10);
    local_48 = puVar10[2];
    local_res18 = local_40;
    if ((int)(local_40 & 0xffff) < *(int *)(lVar3 + 0x30)) {
      lVar9 = *(longlong *)(lVar3 + 0x28);
      if (lVar9 == 0) {
        lVar9 = lVar3 + 0x18;
      }
      if (((*(uint *)(lVar9 + (ulonglong)((local_40 & 0xffff) >> 5) * 4) >> (local_40 & 0x1f) & 1)
           != 0) &&
         (local_res18._2_2_ = (short)(local_40 >> 0x10),
         bVar12 = *(short *)((ulonglong)(local_40 & 0xffff) * 0x140 + 0x134 +
                            *(longlong *)(lVar3 + 8)) == local_res18._2_2_, bVar12)) {
        lVar9 = (ulonglong)(local_40 & 0xffff) * 0x140;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar9 + 0x120 + *(longlong *)(lVar3 + 8));
        pFVar5 = *(FSharedPlaybackState **)(lVar9 + 0x118 + *(longlong *)(lVar3 + 8));
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        bVar12 = IsInGameThread();
        if (!bVar12) {
          local_res10[0] = bVar12;
          `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>'::__l2::
          <lambda_1>::operator()(local_res10);
        }
        FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
        UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
                  ((FPlaybackCapabilitiesImpl *)&pFVar5->Capabilities,&local_78,
                   1 << ((byte)local_res20 & 0x1f));
        if (local_78.Ptr != (FMovieSceneSpawnRegister *)0x0) {
          this_00 = local_78.Ptr;
          if (local_78.StorageMode != Inline) {
            if ((local_78.StorageMode != RawPointer) && (local_78.StorageMode != SharedPointer)) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                  ,0x30,L"Unexpected playback capability storage mode");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              goto LAB_146120ae6;
            }
            this_00 = *(FMovieSceneSpawnRegister **)local_78.Ptr;
          }
          if (this_00 != (FMovieSceneSpawnRegister *)0x0) {
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.Object = pFVar5;
            local_68.SharedReferenceCount.ReferenceController = pTVar4;
            FMovieSceneSpawnRegister::DestroySpawnedObject
                      (this_00,&local_58,(FMovieSceneSequenceID *)((longlong)&local_48 + 4),
                       &local_68,(int)local_48);
          }
        }
LAB_146120ae6:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
    }
    puVar10 = (undefined8 *)((longlong)puVar10 + 0x1c);
  } while( true );
}

// operator() @ 146120b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
`UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_4>::operator()
          (void *this,FMovieSceneEntityID param_1,FInstanceHandle param_2,FGuid *param_3)

{
  FMovieSceneCompiledDataID FVar1;
  UMovieSceneCompiledDataManager *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FMovieSceneSequenceID FVar5;
  FSharedPlaybackState *pFVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnSpawnables> FVar12;
  FMovieSceneEvaluationState *this_01;
  FMovieSceneSequenceHierarchy *pFVar13;
  FMovieSceneSubSequenceData *pFVar14;
  FBuiltInComponentTypes *pFVar15;
  FMovieSceneBindingReferences *this_02;
  TArrayView<FMovieSceneBindingReference_const_,int> *pTVar16;
  FMovieSceneSubSequenceData *this_03;
  undefined1 *puVar17;
  FNameEntryId FVar18;
  longlong lVar19;
  FName FVar20;
  uint uVar21;
  FMovieSceneSubSequenceData *pFVar22;
  undefined1 auStackY_1b8 [32];
  undefined1 local_157;
  undefined1 local_156 [2];
  FMovieSceneSequenceID local_154;
  FSharedPlaybackState *local_150;
  TReferenceControllerBase<1> *local_148;
  FColor_u_0 local_140;
  byte local_13c;
  byte local_138;
  undefined1 local_130 [8];
  UMovieSceneSequence *local_128;
  FName local_120;
  FMovieSceneSpawnRegister *local_118;
  longlong *local_110;
  FName local_108;
  undefined1 local_f8 [8];
  FPlaybackCapabilityPtr local_f0;
  FPlaybackCapabilityPtr local_e0;
  FMovieSceneSpawnRegister **local_d0;
  FGuid *local_c8;
  UMovieSceneSequence **local_c0;
  FMovieSceneSequenceID *local_b8;
  FSharedPlaybackState **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  FInstanceHandle local_80;
  FName local_7c;
  TArrayView<FMovieSceneBindingReference_const_,int> local_70;
  undefined1 local_60 [8];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar22 = (FMovieSceneSubSequenceData *)0x0;
  FVar12 = UE::MovieScene::StatPtr_MovieSceneEval_SpawnSpawnables;
  local_110 = this;
  if (UE::MovieScene::StatPtr_MovieSceneEval_SpawnSpawnables ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnSpawnables>)0x0) {
    pFVar11 = ::FName::FName(&local_7c,"MovieSceneEval_SpawnSpawnables");
    FVar12 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnSpawnables>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MovieScene::StatPtr_MovieSceneEval_SpawnSpawnables,*pFVar11,
                        L"Spawnables: Spawn","STATGROUP_MovieSceneEval","STATCAT_Advanced",
                        L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar3 = false;
  bVar4 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar8 = false;
  bVar9 = false;
  FVar18 = FVar20.ComparisonIndex.Value;
  uVar21 = FVar20.Number;
  if ((FVar18.Value == 0) && (uVar21 == 0)) {
LAB_146120cd5:
    bVar4 = bVar9;
    bVar3 = bVar8;
    bVar8 = false;
    FVar20 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar18.Value;
        local_120.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSpawnablesSystem.cpp"
                   ,0xe7);
        bVar3 = true;
        bVar4 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146120cd5;
    local_130._0_4_ = FVar18.Value;
    local_130._4_4_ = uVar21;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar8 = true;
  }
  plVar7 = local_110;
  lVar19 = ((ulonglong)(uint)param_2 & 0xffff) * 0x140 + *(longlong *)(local_110[2] + 8);
  local_150 = *(FSharedPlaybackState **)(lVar19 + 0x118);
  local_148 = *(TReferenceControllerBase<1> **)(lVar19 + 0x120);
  if (local_148 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_148->SharedReferenceCount = (atomic<int>)((int)local_148->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>
                        (local_150);
  pFVar6 = local_150;
  if (local_118 == (FMovieSceneSpawnRegister *)0x0) goto LAB_1461210ee;
  local_154.Value = *(uint *)(lVar19 + 0x128);
  local_a8._0_4_ = param_3->A;
  local_a8._4_4_ = param_3->B;
  uStack_a0._0_4_ = param_3->C;
  uStack_a0._4_4_ = param_3->D;
  local_98 = local_154.Value;
  bVar9 = IsInGameThread();
  if (!bVar9) {
    local_157 = 0;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>'::__l2::<lambda_1>::
    operator()(&local_157);
  }
  UE::MovieScene::IStaticBindingOverridesPlaybackCapability::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar6->Capabilities,&local_f0,1 << (local_13c & 0x1f));
  if (local_f0.Ptr != (longlong *)0x0) {
    if (local_f0.StorageMode != Inline) {
      if ((local_f0.StorageMode != RawPointer) && (local_f0.StorageMode != SharedPointer)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x30,L"Unexpected playback capability storage mode");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_146120de0;
      }
      local_f0.Ptr = *(void **)local_f0.Ptr;
    }
    if ((local_f0.Ptr != (longlong *)0x0) &&
       (lVar19 = (**(code **)(*(longlong *)local_f0.Ptr + 8))(local_f0.Ptr,&local_a8), lVar19 != 0))
    goto LAB_1461210ee;
  }
LAB_146120de0:
  FMovieSceneSpawnRegister::FindSpawnedObject
            (local_118,(FGuid *)local_f8,(FMovieSceneSequenceID *)param_3,(int)&local_154);
  FWeakObjectPtr::Get((FWeakObjectPtr *)local_f8);
  this_01 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                      (local_150);
  if ((this_01 != (FMovieSceneEvaluationState *)0x0) &&
     (bVar9 = FMovieSceneEvaluationState::GetBindingActivation(this_01,param_3,&local_154), !bVar9))
  {
    __l2::<lambda_2>::operator()((void *)plVar7[1],param_1,param_2,param_3);
    goto LAB_1461210ee;
  }
  pFVar6 = local_150;
  bVar9 = IsInGameThread();
  if (!bVar9) {
    local_156[0] = 0;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::__l2::
    <lambda_1>::operator()(local_156);
  }
  IMovieScenePlaybackClient::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar6->Capabilities,&local_e0,1 << (local_138 & 0x1f));
  if (local_e0.Ptr != (longlong *)0x0) {
    if (local_e0.StorageMode != Inline) {
      if ((local_e0.StorageMode != RawPointer) && (local_e0.StorageMode != SharedPointer)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x30,L"Unexpected playback capability storage mode");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_146120f2d;
      }
      local_e0.Ptr = *(void **)local_e0.Ptr;
    }
    if (local_e0.Ptr != (longlong *)0x0) {
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 1;
      cVar10 = (**(code **)(*(longlong *)local_e0.Ptr + 0x10))
                         (local_e0.Ptr,param_3,local_154.Value,local_60);
      if (cVar10 == '\0') {
        __l2::<lambda_2>::operator()((void *)plVar7[1],param_1,param_2,param_3);
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        goto LAB_1461210ee;
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
LAB_146120f2d:
  FVar5.Value = local_154.Value;
  bVar9 = local_154.Value != 0;
  if (local_154.Value == 0) {
    local_128 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(local_150->WeakRootSequence).WeakPtr);
LAB_146121008:
    plVar7 = local_110;
    if (local_128 != (UMovieSceneSequence *)0x0) {
      local_d0 = &local_118;
      local_c0 = &local_128;
      local_b8 = &local_154;
      local_b0 = &local_150;
      lVar19 = *(longlong *)(*local_110 + 0x28);
      local_c8 = param_3;
      pFVar15 = UE::MovieScene::FBuiltInComponentTypes::Get();
      bVar9 = UE::MovieScene::FEntityManager::HasComponent
                        ((FEntityManager *)(lVar19 + 0x28),param_1,
                         (FComponentTypeID)(pFVar15->Tags).OldStyleSpawnable.Value);
      if (bVar9) {
        ``UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::
        operator()(&local_d0,0);
      }
      else {
        this_02 = (FMovieSceneBindingReferences *)(**(code **)(local_128->_padding_ + 0x2b8))();
        if ((this_02 != (FMovieSceneBindingReferences *)0x0) &&
           (pTVar16 = FMovieSceneBindingReferences::GetReferences(this_02,&local_70,param_3),
           0 < pTVar16->ArrayNum)) {
          do {
            ``UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::
            operator()(&local_d0,(int)pFVar22);
            uVar21 = (int)pFVar22 + 1;
            pFVar22 = (FMovieSceneSubSequenceData *)(ulonglong)uVar21;
            pTVar16 = FMovieSceneBindingReferences::GetReferences(this_02,&local_70,param_3);
          } while ((int)uVar21 < pTVar16->ArrayNum);
        }
      }
      local_90._0_4_ = param_3->A;
      local_90._4_4_ = param_3->B;
      uStack_88._0_4_ = param_3->C;
      uStack_88._4_4_ = param_3->D;
      local_80 = param_2;
      TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>
                ((TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
                  *)(plVar7[2] + 0x48),(TTuple<FGuid,UE::MovieScene::FInstanceHandle> *)local_130,
                 (bool *)&local_90);
    }
  }
  else {
    this_00 = (local_150->CompiledDataManager).field0_0x0.DebugPtr;
    if (((this_00 != (UMovieSceneCompiledDataManager *)0x0) &&
        (FVar1.Value = (local_150->RootCompiledDataID).Value, FVar1.Value != -1)) &&
       (pFVar13 = UMovieSceneCompiledDataManager::FindHierarchy(this_00,FVar1),
       pFVar13 != (FMovieSceneSequenceHierarchy *)0x0)) {
      this_03 = pFVar22;
      if (bVar9) {
        pFVar14 = pFVar22;
        if (*(int *)&(pFVar13->SubSequences).field_0x8 !=
            *(int *)&(pFVar13->SubSequences).field_0x34) {
          puVar17 = *(undefined1 **)&(pFVar13->SubSequences).field_0x40;
          if (puVar17 == (undefined1 *)0x0) {
            puVar17 = &(pFVar13->SubSequences).field_0x38;
          }
          uVar21 = *(uint *)(puVar17 +
                            (ulonglong)
                            (*(int *)&(pFVar13->SubSequences).field_0x48 - 1U & FVar5.Value) * 4);
          if (uVar21 != 0xffffffff) {
            do {
              pFVar14 = (FMovieSceneSubSequenceData *)
                        ((longlong)(int)uVar21 * 0x120 + *(longlong *)&pFVar13->SubSequences);
              if ((pFVar14->Sequence).AssetPath.PackageName.ComparisonIndex.Value == FVar5.Value)
              break;
              uVar21 = pFVar14[1].Sequence.AssetPath.AssetName.ComparisonIndex.Value;
              pFVar14 = pFVar22;
            } while (uVar21 != 0xffffffff);
          }
        }
        this_03 = (FMovieSceneSubSequenceData *)&(pFVar14->Sequence).AssetPath.AssetName;
        if (pFVar14 == (FMovieSceneSubSequenceData *)0x0) {
          this_03 = (FMovieSceneSubSequenceData *)0x0;
        }
      }
      if (this_03 != (FMovieSceneSubSequenceData *)0x0) {
        local_128 = FMovieSceneSubSequenceData::GetSequence(this_03);
        goto LAB_146121008;
      }
    }
    local_128 = (UMovieSceneSequence *)0x0;
  }
LAB_1461210ee:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// GetAnimTypeID @ 14613a260

FMovieSceneAnimTypeID __cdecl UMovieSceneSpawnablesSystem::GetAnimTypeID(void)

{
  ulong64 *in_RCX;
  
  *in_RCX = UE::MovieScene::SpawnableAnimTypeID.ID;
  return (FMovieSceneAnimTypeID)(ulong64)in_RCX;
}

// GetPrivateStaticClass @ 14613c800

UClass * __cdecl UMovieSceneSpawnablesSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnablesSystem",
               &Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnablesSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSpawnablesSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnablesSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnablesSystem.InnerSingleton;
}

// OnRun @ 146147db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnablesSystem::OnRun
          (UMovieSceneSpawnablesSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEntityID FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName FVar8;
  int iVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnablesSystem> FVar12;
  FBuiltInComponentTypes *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  FName FVar16;
  undefined1 auStackY_5e8 [32];
  FComponentTypeID local_588;
  FComponentTypeID local_586;
  FComponentTypeID local_584;
  FComponentTypeID local_582;
  FComponentTypeID local_580;
  FComponentTypeID local_57e;
  undefined1 local_57c [4];
  FName local_578;
  FName local_570;
  FColor_u_0 local_568 [2];
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> local_560;
  TArray<TTuple<FGuid,int,FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>,TSizedDefaultAllocator<32>_>
  local_550;
  FName local_540;
  <lambda_2> local_530;
  UMovieSceneSpawnablesSystem *local_518;
  TArray<TTuple<FGuid,int,FMovieSceneSequenceID,UE::MovieScene::FInstanceHandle>,TSizedDefaultAllocator<32>_>
  *local_510;
  FName local_508;
  undefined8 local_4f8;
  TStatIdData *pTStack_4f0;
  byte local_4e8;
  undefined7 uStack_4e7;
  undefined4 uStack_4e0;
  uint uStack_4dc;
  undefined8 local_4d0;
  TStatIdData *pTStack_4c8;
  byte local_4c0;
  undefined7 uStack_4bf;
  undefined4 uStack_4b8;
  uint uStack_4b4;
  undefined8 local_4a8;
  TStatIdData *pTStack_4a0;
  byte local_498;
  undefined7 uStack_497;
  undefined4 uStack_490;
  uint uStack_48c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_488;
  <lambda_1> local_478;
  <lambda_1> local_468;
  initializer_list<UE::MovieScene::FComponentTypeID> local_458;
  initializer_list<UE::MovieScene::FComponentTypeID> local_448;
  <lambda_4> local_438;
  undefined2 local_420;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_41e;
  TComponentTypeID<FGuid> TStack_41c;
  undefined2 uStack_41a;
  undefined8 uStack_418;
  TStatIdData *pTStack_410;
  ulonglong uStack_408;
  undefined8 uStack_400;
  undefined2 local_3f8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_3f6;
  TComponentTypeID<FGuid> TStack_3f4;
  undefined2 uStack_3f2;
  undefined8 uStack_3f0;
  TStatIdData *pTStack_3e8;
  ulonglong uStack_3e0;
  undefined8 uStack_3d8;
  undefined2 local_3d0;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_3ce;
  TComponentTypeID<FGuid> TStack_3cc;
  undefined2 uStack_3ca;
  undefined8 uStack_3c8;
  TStatIdData *pTStack_3c0;
  ulonglong uStack_3b8;
  undefined8 uStack_3b0;
  FName local_3a8 [2];
  undefined1 local_398 [4];
  FComponentAccess aFStack_394 [2];
  wchar_t *pwStack_390;
  TStatIdData *local_388;
  ulonglong uStack_380;
  undefined8 local_378;
  FEntityComponentFilter local_370;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_278 [4];
  FComponentAccess aFStack_274 [2];
  wchar_t *pwStack_270;
  TStatIdData *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  FEntityComponentFilter local_250;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_158 [4];
  FComponentAccess aFStack_154 [2];
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  FVar12 = UE::MovieScene::StatPtr_MovieSceneEval_SpawnablesSystem;
  if (UE::MovieScene::StatPtr_MovieSceneEval_SpawnablesSystem ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnablesSystem>)0x0) {
    pFVar11 = ::FName::FName(local_3a8,"MovieSceneEval_SpawnablesSystem");
    FVar12 = (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_SpawnablesSystem>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &UE::MovieScene::StatPtr_MovieSceneEval_SpawnablesSystem,*pFVar11,
                        L"Spawnables System","STATGROUP_MovieSceneECS","STATCAT_Advanced",
                        L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar16 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_540.ComparisonIndex.Value = 0;
  local_540.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_568[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_568[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_578 = FVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_578,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSpawnablesSystem.cpp"
                   ,0x5f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_570 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar6 = true;
      goto LAB_146147f15;
    }
  }
  bVar6 = false;
  local_570 = local_540;
  FVar16 = local_540;
LAB_146147f15:
  pFVar13 = UE::MovieScene::FBuiltInComponentTypes::Get();
  lVar3 = *(longlong *)&this->field_0x28;
  if ((*(longlong *)(lVar3 + 0x580) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_578 = *(FName *)(lVar3 + 0x580);
  if (*(int *)((longlong)local_578 + 0x50) != *(int *)((longlong)local_578 + 0x7c)) {
    local_478.StaleSpawnables = &local_560;
    TStack_41e = pFVar13->InstanceHandle;
    TStack_41c = pFVar13->SpawnableBinding;
    local_588.Value = (pFVar13->Tags).NeedsUnlink.Value;
    local_4f8 = 0;
    pTStack_4f0 = &TStatId::TStatId_NAME_None;
    uStack_4e0 = 0x6ff;
    uStack_4dc = uStack_4dc & 0xffffff00;
    uStack_408 = CONCAT71(uStack_4e7,local_4e8) & 0xffffffffffffffe0;
    uStack_400._4_4_ = uStack_4dc;
    uStack_400._0_4_ = AnyHiPriThreadHiPriTask;
    local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_418 = 0;
    pTStack_410 = &TStatId::TStatId_NAME_None;
    local_560.ArrayNum = 0;
    local_560.ArrayMax = 0;
    local_398._2_2_ = TStack_41e;
    local_398._0_2_ = local_420;
    unique0x100006c7 = TStack_41c;
    unique0x100006c9 = uStack_41a;
    local_370.AllMask.Bits.NumBits = 0;
    pwStack_390 = (wchar_t *)0x0;
    local_388 = &TStatId::TStatId_NAME_None;
    local_370.AllMask.Bits.MaxBits = 0x180;
    local_370.NoneMask.Bits.NumBits = 0;
    local_370.NoneMask.Bits.MaxBits = 0x180;
    local_370.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_370.ComplexMasks.ArrayNum = 0;
    local_370.ComplexMasks.ArrayMax = 0;
    local_2c0 = 0;
    local_2bc = 0x180;
    local_288 = 0;
    local_284 = 0x180;
    local_4e8 = local_4e8 & 0xe0;
    local_478.InstanceRegistry = (FInstanceRegistry *)local_578;
    uStack_380 = uStack_408;
    local_378 = uStack_400;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_398 + 2),&local_370);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_398 + 4),&local_370);
    local_488._First = &local_588;
    local_488._Last = &local_586;
    UE::MovieScene::FComponentMask::SetAll(&local_370.NoneMask,&local_488);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
    ::Iterate_PerEntityImpl<_UMovieSceneSpawnablesSystem::OnRun_::__l5::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
                *)local_398,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_370,
               &local_478);
    if (local_370.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.ComplexMasks.AllocatorInstance.Data);
    }
    iVar9 = local_560.ArrayNum;
    uVar14 = (ulonglong)local_560.ArrayNum;
    pFVar1 = local_560.AllocatorInstance.Data + uVar14 * 2;
    FVar15.Data = local_560.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar9) {
        `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_57c);
      }
      FVar16 = local_570;
      if (FVar15.Data == pFVar1) break;
      FVar2.Value = *(ushort *)FVar15.Data;
      UE::MovieScene::FEntityManager::AddComponent
                ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),FVar2,
                 (FComponentTypeID)(pFVar13->Tags).NeedsLink.Value);
      local_468.ComponentTypeID.Value = (pFVar13->Tags).NeedsUnlink.Value;
      local_468.__this = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
      UE::MovieScene::FEntityManager::
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
                (local_468.__this,FVar2,&local_468);
      uVar14 = local_560._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 2;
    }
    if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.AllocatorInstance.Data);
    }
  }
  FVar8 = local_578;
  local_530.DestroyedObjects = &local_550;
  local_550.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_550.ArrayNum = 0;
  local_550.ArrayMax = 0;
  TStack_3f6 = pFVar13->InstanceHandle;
  TStack_3f4 = pFVar13->SpawnableBinding;
  local_584.Value = (pFVar13->Tags).NeedsUnlink.Value;
  local_4d0 = 0;
  pTStack_4c8 = &TStatId::TStatId_NAME_None;
  uStack_4b8 = 0x6ff;
  uStack_4b4 = uStack_4b4 & 0xffffff00;
  uStack_3e0 = CONCAT71(uStack_4bf,local_4c0) & 0xffffffffffffffe0;
  uStack_3d8._4_4_ = uStack_4b4;
  uStack_3d8._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_3f0 = 0;
  pTStack_3e8 = &TStatId::TStatId_NAME_None;
  local_250.AllMask.Bits.NumBits = 0;
  local_278._2_2_ = TStack_3f6;
  local_278._0_2_ = local_3f8;
  unique0x100006d9 = TStack_3f4;
  unique0x100006db = uStack_3f2;
  local_250.AllMask.Bits.MaxBits = 0x180;
  local_250.NoneMask.Bits.NumBits = 0;
  local_250.NoneMask.Bits.MaxBits = 0x180;
  pwStack_270 = (wchar_t *)0x0;
  local_268 = &TStatId::TStatId_NAME_None;
  local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ComplexMasks.ArrayNum = 0;
  local_250.ComplexMasks.ArrayMax = 0;
  local_1a0 = 0;
  local_19c = 0x180;
  local_168 = 0;
  local_164 = 0x180;
  local_530.__this = this;
  local_530.InstanceRegistry = (FInstanceRegistry *)local_578;
  local_4c0 = local_4c0 & 0xe0;
  uStack_260 = uStack_3e0;
  local_258 = uStack_3d8;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 2),&local_250);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 4),&local_250);
  local_458._First = &local_584;
  local_458._Last = &local_582;
  UE::MovieScene::FComponentMask::SetAll(&local_250.AllMask,&local_458);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
  ::Iterate_PerEntityImpl<_UMovieSceneSpawnablesSystem::OnRun_::__l2::<lambda_2>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
              *)local_278,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_250,
             &local_530);
  if (local_250.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
  }
  local_510 = &local_550;
  local_518 = this;
  local_508 = FVar8;
  `UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_3>::operator()(&local_518);
  local_438.DestroyOldSpawnables = &local_530;
  TStack_3ce = pFVar13->InstanceHandle;
  TStack_3cc = pFVar13->SpawnableBinding;
  local_580.Value = (pFVar13->Tags).NeedsLink.Value;
  local_4a8 = 0;
  pTStack_4a0 = &TStatId::TStatId_NAME_None;
  uStack_490 = 0x6ff;
  uStack_48c = uStack_48c & 0xffffff00;
  uStack_3b8 = CONCAT71(uStack_497,local_498) & 0xffffffffffffffe0;
  uStack_3b0._4_4_ = uStack_48c;
  uStack_3b0._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_3c8 = 0;
  pTStack_3c0 = &TStatId::TStatId_NAME_None;
  local_158._2_2_ = TStack_3ce;
  local_158._0_2_ = local_3d0;
  unique0x100006eb = TStack_3cc;
  unique0x100006ed = uStack_3ca;
  local_130.AllMask.Bits.NumBits = 0;
  local_130.AllMask.Bits.MaxBits = 0x180;
  pwStack_150 = (wchar_t *)0x0;
  local_148 = &TStatId::TStatId_NAME_None;
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_7c = 0x180;
  local_48 = 0;
  local_44 = 0x180;
  local_498 = local_498 & 0xe0;
  local_438.__this = this;
  local_438.InstanceRegistry = (FInstanceRegistry *)FVar8;
  uStack_140 = uStack_3b8;
  local_138 = uStack_3b0;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
  local_448._First = &local_580;
  local_448._Last = &local_57e;
  UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_448);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
  ::Iterate_PerEntityImpl<_UMovieSceneSpawnablesSystem::OnRun_::__l2::<lambda_4>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
              *)local_158,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_130,
             &local_438);
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  `UMovieSceneSpawnablesSystem::OnRun'::__l2::<lambda_3>::operator()(&local_518);
  if (local_550.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.AllocatorInstance.Data);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// StaticRegisterNativesUMovieSceneSpawnablesSystem @ 146155850

void __cdecl UMovieSceneSpawnablesSystem::StaticRegisterNativesUMovieSceneSpawnablesSystem(void)

{
  return;
}

