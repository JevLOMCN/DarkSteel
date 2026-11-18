// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// InitializeBlendOutput @ 14a422030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FOverlappingControlRigParameterHandler::InitializeBlendOutput
          (FOverlappingControlRigParameterHandler *this,FComponentTypeID param_1,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_2,
          FAnimatedControlRigParameterInfo *param_3)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  FMovieSceneEntityID *pFVar2;
  TComponentTypeID<double> TVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  FComponentRegistry *pFVar5;
  code *pcVar6;
  bool bVar7;
  FMovieSceneEntityID FVar8;
  FBuiltInComponentTypes *pFVar9;
  TBitArray<TFixedAllocator<12>_> *pTVar10;
  undefined6 extraout_var;
  int iVar11;
  TComponentTypeID<double> *pTVar12;
  FMovieSceneEntityID *pFVar13;
  int iVar14;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong local_1c0;
  <lambda_1> local_1b8;
  <lambda_1> local_1b7;
  <lambda_1> local_1b6 [2];
  undefined1 local_1b4 [12];
  TComponentTypeID<FMovieSceneBlendChannelID> local_1a8;
  FMovieSceneBlendChannelID local_1a6;
  undefined1 local_1a2;
  ushort local_1a0;
  ushort local_19e;
  ushort local_19c;
  undefined1 local_19a;
  FControlRigComponentTypes *local_198;
  FBuiltInComponentTypes *local_190;
  TBitArray<TFixedAllocator<12>_> local_180;
  TComponentTypeID<double> local_148 [9];
  TComponentTypeID<double> local_136 [3];
  TBitArray<TFixedAllocator<12>_> local_130;
  FTypelessMutation local_f8;
  TBitArray<TFixedAllocator<12>_> local_84;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pFVar9 = FBuiltInComponentTypes::Get();
  local_190 = pFVar9;
  FMovieSceneTracksComponentTypes::Get();
  local_198 = FControlRigComponentTypes::Get();
  pTVar12 = local_148;
  local_148[0] = pFVar9->DoubleResult[0];
  local_148[1] = pFVar9->DoubleResult[1];
  local_148[2] = pFVar9->DoubleResult[2];
  local_148[3] = pFVar9->DoubleResult[3];
  local_148[4] = pFVar9->DoubleResult[4];
  local_148[5] = pFVar9->DoubleResult[5];
  local_148[6] = pFVar9->DoubleResult[6];
  local_148[7] = pFVar9->DoubleResult[7];
  local_148[8] = pFVar9->DoubleResult[8];
  local_130.NumBits = 0;
  local_130.MaxBits = 0x180;
  iVar11 = 0;
  while( true ) {
    TVar3 = *pTVar12;
    iVar14 = ((uint)(ushort)TVar3 - iVar11) + 1;
    if (0 < iVar14) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_130,false,iVar14);
      iVar11 = local_130.NumBits;
    }
    if ((iVar11 <= (int)(uint)(ushort)TVar3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) break;
    pTVar1 = local_130.AllocatorInstance.InlineData + ((ushort)TVar3 >> 5);
    pTVar12 = pTVar12 + 1;
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << (TVar3._0_1_ & 0x1f);
    if (pTVar12 == local_136) {
      pFVar13 = param_2->DataPtr;
      iVar11 = param_2->ArrayNum;
      local_f8.AddMask.Bits.NumBits = 0;
      local_f8.AddMask.Bits.MaxBits = 0x180;
      local_f8.RemoveMask.Bits.NumBits = 0;
      pFVar2 = pFVar13 + iVar11;
      local_f8.RemoveMask.Bits.MaxBits = 0x180;
      local_f8.bRemoveAll = false;
      for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 1) {
        pTVar10 = &FEntityManager::GetEntityType
                             (&this->Linker->EntityManager,(FMovieSceneEntityID)pFVar13->Value)->
                   Bits;
        local_84.NumBits = 0;
        local_84.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_84,pTVar10);
        Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&local_130,&local_84,MinSize,&local_1b8);
        Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&local_84,(TBitArray<TFixedAllocator<12>_> *)&local_f8,MaxSize,&local_1b7);
      }
      local_f8.RemoveMask.Bits.NumBits = local_130.NumBits;
      local_f8.RemoveMask.Bits.MaxBits = local_130.MaxBits;
      local_130.NumBits = 0;
      local_130.MaxBits = 0;
      Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseXOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                ((TBitArray<TFixedAllocator<12>_> *)&local_f8,&local_f8.RemoveMask.Bits,MaintainSize
                 ,local_1b6);
      local_1a0 = (local_198->Tags).ControlRigParameter.Value;
      local_19c = (local_190->Tags).NeedsLink.Value;
      local_1a8 = local_190->BlendChannelOutput;
      local_1a6 = param_3->BlendChannelID;
      local_1b4._4_8_ =
           &
           ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_23_U423_U423__MovieScene_UE__6B_
      ;
      local_1a2 = 1;
      local_19a = 1;
      local_19e = param_1.Value;
      if ((param_3->OutputEntityID).Value == 0xffff) {
        local_180.NumBits = 0;
        local_180.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                  (&local_180,(TBitArray<TFixedAllocator<12>_> *)&local_f8);
        FVar8 = FEntityBuilderImplBase::CreateEntity
                          ((FEntityBuilderImplBase *)(local_1b4 + 4),(FEntityManager *)local_1b4,
                           (FComponentMask *)&this->Linker->EntityManager);
        FVar8.Value = *(ushort *)CONCAT62(extraout_var,FVar8.Value);
        (param_3->OutputEntityID).Value = FVar8.Value;
        pUVar4 = this->Linker;
        pFVar5 = (pUVar4->EntityManager).ComponentRegistry;
        if (iVar11 < 1) {
          local_1c8 = 0;
          local_1c0 = (longlong)iVar11;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FEntityManager::CopyComponents
                  (&pUVar4->EntityManager,(FMovieSceneEntityID)param_2->DataPtr->Value,FVar8,
                   &pFVar5->CopyAndMigrationMask);
      }
      else {
        TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
        ::MutateExisting((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                          *)(local_1b4 + 4),&this->Linker->EntityManager,
                         (FMovieSceneEntityID)(param_3->OutputEntityID).Value,&local_f8);
      }
      return;
    }
    iVar11 = local_130.NumBits;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// UpdateOutput @ 14a4640c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FOverlappingControlRigParameterHandler::UpdateOutput
          (FOverlappingControlRigParameterHandler *this,FEntityGroupID *param_1,
          TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_2,
          FAnimatedControlRigParameterInfo *param_3,FEntityOutputAggregate param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FComponentTypeID FVar3;
  ushort uVar4;
  ushort uVar5;
  FMovieSceneEntityID FVar6;
  FComponentTypeID FVar7;
  int iVar8;
  int iVar9;
  EComponentHeaderLockMode EVar10;
  UMovieSceneEntitySystemLinker *pUVar11;
  UMovieSceneControlRigParameterEvaluatorSystem *pUVar12;
  code *pcVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  FMovieSceneBlendChannelID FVar16;
  FBuiltInComponentTypes *pFVar17;
  FMovieSceneEntityID *pFVar18;
  TBitArray<TFixedAllocator<12>_> *pTVar19;
  UMovieScenePiecewiseDoubleBlenderSystem *pUVar20;
  UClass *pUVar21;
  undefined4 extraout_var;
  FMovieSceneBlendChannelID *pFVar22;
  ulong64 uVar23;
  ulonglong uVar24;
  FString *pFVar25;
  uint uVar26;
  FComponentHeader *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  wchar_t *pwVar32;
  FScriptContainerElement *pFVar33;
  FComponentHeader *this_00;
  wchar_t *pwVar34;
  FMovieSceneEntityID *pFVar35;
  FWeakObjectPtr local_15c;
  FScriptContainerElement *local_150;
  TBitArray<TFixedAllocator<12>_> *local_148;
  UClass *local_140;
  UMovieSceneEntitySystemLinker *local_138;
  UMovieScenePiecewiseDoubleBlenderSystem *local_130;
  FEntityInfo local_128;
  FComponentHeader *local_110;
  ulonglong local_108;
  EComponentHeaderLockMode local_100;
  FMovieSceneBlendChannelID *local_f8;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_e8;
  TBitArray<TFixedAllocator<12>_> local_d8;
  TBitArray<TFixedAllocator<12>_> local_a0;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar17 = FBuiltInComponentTypes::Get();
  FMovieSceneTracksComponentTypes::Get();
  FControlRigComponentTypes::Get();
  iVar8 = param_2->ArrayNum;
  if (iVar8 == 0) {
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6221458581514879915>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                        ,0x3ab,"NumContributors != 0");
    if (!bVar15) {
      return;
    }
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar24 = 0;
  if (iVar8 < 2) {
    pUVar11 = this->Linker;
    FVar3.Value = (pFVar17->Tags).AbsoluteBlend.Value;
    pFVar18 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_2,0);
    bVar15 = FEntityManager::HasComponent
                       (&pUVar11->EntityManager,(FMovieSceneEntityID)pFVar18->Value,FVar3);
    if (bVar15) {
      pUVar11 = this->Linker;
      FVar3.Value = *(ushort *)&pFVar17->WeightAndEasingResult;
      pFVar18 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_2,0);
      bVar15 = FEntityManager::HasComponent
                         (&pUVar11->EntityManager,(FMovieSceneEntityID)pFVar18->Value,FVar3);
      if (!bVar15) {
        pUVar11 = this->Linker;
        pFVar18 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_2,0);
        pTVar19 = &FEntityManager::GetEntityType
                             (&pUVar11->EntityManager,(FMovieSceneEntityID)pFVar18->Value)->Bits;
        iVar9 = (pFVar17->PropertyRegistry).Properties.ArrayNum;
        pFVar33 = (pFVar17->PropertyRegistry).Properties.AllocatorInstance.Data;
        local_150 = pFVar33;
        local_148 = pTVar19;
        if ((iVar9 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_a0.NumBits = 0;
        local_a0.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_a0,pTVar19);
        local_d8.NumBits = 0;
        local_d8.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_d8,&local_a0);
        if (0 < iVar9) {
          pFVar33 = pFVar33 + 0x28;
          uVar29 = uVar24;
          uVar31 = uVar24;
          do {
            uVar4 = *(ushort *)pFVar33;
            uVar30 = (uint)uVar31;
            if (((uVar4 != 0xffff) && ((int)(uint)uVar4 < local_d8.NumBits)) &&
               ((*(uint *)local_d8.AllocatorInstance.InlineData[uVar4 >> 5].Pad >> (uVar4 & 0x1f) &
                1) != 0)) {
              if (uVar30 != 0xffffffff) {
                uVar26 = 0;
                if ((int)uVar30 < iVar9) {
                  uVar26 = ~uVar30 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar15)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar14 = local_150;
                uVar4 = *(ushort *)(local_150 + (longlong)(int)uVar30 * 0x70 + 0x26);
                pFVar33 = (pFVar17->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
                          (ulonglong)*(ushort *)(local_150 + (longlong)(int)uVar30 * 0x70 + 0x24) *
                          4;
                if (*(short *)(local_150 + (longlong)(int)uVar30 * 0x70 + 0x26) != 0)
                goto LAB_14a464370;
              }
              break;
            }
            uVar31 = (ulonglong)(uVar30 + 1);
            uVar29 = uVar29 + 1;
            pFVar33 = pFVar33 + 0x70;
          } while ((longlong)uVar29 < (longlong)iVar9);
        }
        goto LAB_14a4642a8;
      }
    }
  }
  goto LAB_14a464402;
  while( true ) {
    uVar24 = (ulonglong)(uVar28 + 1);
    pFVar33 = pFVar33 + 4;
    if ((int)(uint)*(ushort *)(pFVar14 + (longlong)(int)uVar30 * 0x70 + 0x26) <= (int)(uVar28 + 1))
    break;
LAB_14a464370:
    uVar28 = (uint)uVar24;
    uVar26 = 0;
    if ((int)uVar28 < (int)(uint)uVar4) {
      uVar26 = ~uVar28 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar5 = *(ushort *)pFVar33;
    if (((uVar5 == 0xffff) || (local_148->NumBits <= (int)(uint)uVar5)) ||
       ((*(uint *)(local_148->AllocatorInstance).InlineData[uVar5 >> 5].Pad >> (uVar5 & 0x1f) & 1)
        == 0)) goto LAB_14a464402;
  }
LAB_14a4642a8:
  if ((param_3->OutputEntityID).Value == 0xffff) {
    if (param_2->ArrayNum == 1) {
      pUVar11 = this->Linker;
      FVar3.Value = *(ushort *)&pFVar17->BlendChannelInput;
      pFVar18 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_2,0);
      FEntityManager::RemoveComponent
                (&pUVar11->EntityManager,(FMovieSceneEntityID)pFVar18->Value,FVar3);
    }
    goto LAB_14a4647dd;
  }
LAB_14a464402:
  pwVar34 = L"";
  if ((param_3->OutputEntityID).Value == 0xffff) {
    if ((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr ==
        (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
      pUVar11 = this->Linker;
      local_140 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)local_140);
      }
      pUVar20 = (UMovieScenePiecewiseDoubleBlenderSystem *)
                UMovieSceneEntitySystemLinker::LinkSystem
                          (pUVar11,(TSubclassOf<UMovieSceneEntitySystem>)&local_140);
      if (pUVar20 == (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
        pFVar25 = GetTypeName<UMovieScenePiecewiseDoubleBlenderSystem>(&local_68);
        if ((pFVar25->Data).ArrayNum != 0) {
          pwVar34 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar34);
      }
      pUVar21 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      iVar9 = (int)pUVar21->_padding_;
      if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar21->_padding_)) {
        pFVar25 = GetTypeName<UMovieScenePiecewiseDoubleBlenderSystem>(&local_58);
        if ((pFVar25->Data).ArrayNum == 0) {
          pwVar32 = L"";
        }
        else {
          pwVar32 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
        pFVar25 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                            (&local_48,(UMovieSceneEntitySystem *)pUVar20);
        if ((pFVar25->Data).ArrayNum != 0) {
          pwVar34 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar34,pwVar32);
      }
      pUVar12 = this->System;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar20);
      }
      (pUVar12->DoubleBlenderSystem).field0_0x0.DebugPtr = pUVar20;
      FMovieSceneEntitySystemGraph::AddReference
                (&this->Linker->SystemGraph,(UMovieSceneEntitySystem *)this->System,
                 (UMovieSceneEntitySystem *)(this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)
      ;
    }
    local_138 = this->Linker;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_138 != (UMovieSceneEntitySystemLinker *)0x0)) {
      GC::MarkAsReachable((UObject *)local_138);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_3,(FObjectPtr)&local_138);
    pUVar20 = (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar20 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
        GC::MarkAsReachable((UObject *)pUVar20);
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar20 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar20);
      }
    }
    local_15c.ObjectIndex = 0;
    local_15c.ObjectSerialNumber = 0;
    local_130 = pUVar20;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    FWeakObjectPtr::operator=(&local_15c,(FObjectPtr)&local_130);
    (param_3->WeakBlenderSystem).WeakPtr = local_15c;
    FVar16 = UMovieSceneBlenderSystem::AllocateBlendChannel
                       ((UMovieSceneBlenderSystem *)
                        (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr);
    param_3->BlendChannelID = *(FMovieSceneBlendChannelID *)CONCAT44(extraout_var,FVar16);
  }
  local_e8.DataPtr = param_2->DataPtr;
  local_e8.ArrayNum = param_2->ArrayNum;
  local_e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FVar3.Value = *(ushort *)
                 ((longlong)&((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)->_padding_ +
                 6);
  InitializeBlendOutput(this,FVar3,&local_e8,param_3);
  pFVar35 = param_2->DataPtr;
  pFVar18 = pFVar35 + param_2->ArrayNum;
  for (; pFVar35 != pFVar18; pFVar35 = pFVar35 + 1) {
    FVar6.Value = pFVar35->Value;
    bVar15 = FEntityManager::HasComponent
                       (&this->Linker->EntityManager,FVar6,
                        (FComponentTypeID)*(ushort *)&pFVar17->BlendChannelInput);
    if (bVar15) {
      FEntityManager::WriteComponent<FMovieSceneBlendChannelID>
                (&this->Linker->EntityManager,
                 (TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> *)
                 &local_110,FVar6,pFVar17->BlendChannelInput);
      pFVar22 = local_f8;
      if ((local_f8 == (FMovieSceneBlendChannelID *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ComponentPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                              ,0x210,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      *pFVar22 = param_3->BlendChannelID;
      if (local_110 != (FComponentHeader *)0x0) {
        uVar24 = local_108;
        if (local_108 < local_110->SerialNumber) {
          uVar24 = local_110->SerialNumber;
        }
        local_110->SerialNumber = uVar24;
        LOCK();
        local_110->ScheduledAccessCount = (atomic<int>)((int)local_110->ScheduledAccessCount + -1);
        UNLOCK();
        this_00 = local_110;
        EVar10 = local_100;
joined_r0x00014a4647a9:
        if (EVar10 == Mutex) {
          ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
        }
      }
    }
    else {
      pUVar11 = this->Linker;
      FVar7.Value = *(ushort *)&pFVar17->BlendChannelInput;
      FEntityManager::AddComponent(&pUVar11->EntityManager,FVar6,FVar7);
      FEntityManager::GetEntity(&pUVar11->EntityManager,&local_128,FVar6);
      if (local_128.Data.Allocation != (FEntityAllocation *)0x0) {
        this_00 = (local_128.Data.Allocation)->ComponentHeaders;
        pFVar27 = this_00 + (local_128.Data.Allocation)->NumComponents;
        for (; this_00 != pFVar27; this_00 = this_00 + 1) {
          if ((this_00->ComponentType).Value == FVar7.Value) {
            if (this_00 == (FComponentHeader *)0x0) goto LAB_14a464669;
            goto LAB_14a464694;
          }
        }
        this_00 = (FComponentHeader *)0x0;
LAB_14a464669:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2db,L"");
        if (bVar15) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
LAB_14a464694:
        EVar10 = (local_128.Data.Allocation)->LockMode;
        if (EVar10 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
        }
        LOCK();
        paVar1 = &this_00->ScheduledAccessCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar2 != (atomic<int>)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("PreviousAccessCount == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0x487,
                                L"Component header is still in use when it is being opened for write!"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar22 = FComponentHeader::GetValuePtr(this_00,local_128.Data.ComponentOffset);
        *pFVar22 = param_3->BlendChannelID;
        if (this_00 != (FComponentHeader *)0x0) {
          uVar23 = 0;
          if (this_00->SerialNumber != 0) {
            uVar23 = this_00->SerialNumber;
          }
          this_00->SerialNumber = uVar23;
          LOCK();
          this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
          UNLOCK();
          goto joined_r0x00014a4647a9;
        }
      }
    }
    FEntityManager::AddComponent(&this->Linker->EntityManager,FVar6,FVar3);
  }
LAB_14a4647dd:
  param_3->NumContributors = iVar8;
  return;
}

