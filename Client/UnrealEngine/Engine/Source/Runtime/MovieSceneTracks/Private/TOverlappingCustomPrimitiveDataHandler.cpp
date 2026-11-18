// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// DestroyOutput @ 146788510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>::
DestroyOutput(TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>
              *this,FObjectKey param_1,FName param_2,FAnimatedCustomPrimitiveDataInfo *param_3,
             FEntityOutputAggregate param_4)

{
  UMovieScenePiecewiseDoubleBlenderSystem *this_00;
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneBlendChannelID local_res20;
  
  if ((param_3->OutputEntityID).Value != 0xffff) {
    pFVar1 = FBuiltInComponentTypes::Get();
    FEntityManager::AddComponent
              (&this->Linker->EntityManager,(FMovieSceneEntityID)(param_3->OutputEntityID).Value,
               (FComponentTypeID)(pFVar1->Tags).NeedsUnlink.Value);
    (param_3->OutputEntityID).Value = 0xffff;
    this_00 = (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
    if (this_00 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
      UMovieSceneBlenderSystem::ReleaseBlendChannel
                ((UMovieSceneBlenderSystem *)this_00,param_3->BlendChannelID);
    }
    local_res20.SystemID.Value = 0xff;
    local_res20.ChannelID = 0xffff;
    param_3->BlendChannelID = local_res20;
  }
  return;
}

// UpdateOutput @ 1467c6230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>::
UpdateOutput(TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin> *this
            ,FObjectKey param_1,FName param_2,
            TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *param_3,
            FAnimatedCustomPrimitiveDataInfo *param_4,FEntityOutputAggregate param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FComponentTypeID FVar3;
  FMovieSceneEntityID FVar4;
  FComponentTypeID FVar5;
  int iVar6;
  int iVar7;
  EComponentHeaderLockMode EVar8;
  UMovieSceneEntitySystemLinker *pUVar9;
  UMovieSceneCustomPrimitiveDataSystem *pUVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  FMovieSceneBlendChannelID FVar14;
  FBuiltInComponentTypes *pFVar15;
  FMovieSceneEntityID *pFVar16;
  UMovieScenePiecewiseDoubleBlenderSystem *pUVar17;
  UClass *pUVar18;
  undefined4 extraout_var;
  FMovieSceneBlendChannelID *pFVar19;
  ulong64 uVar20;
  ulonglong uVar21;
  FString *pFVar22;
  FComponentHeader *pFVar23;
  wchar_t *pwVar24;
  FComponentHeader *this_00;
  wchar_t *pwVar25;
  FWeakObjectPtr local_e8 [2];
  UClass *local_d8;
  UMovieSceneEntitySystemLinker *local_d0;
  UMovieScenePiecewiseDoubleBlenderSystem *local_c8;
  FBuiltInComponentTypes *local_c0;
  FMovieSceneEntityID *local_b8;
  FEntityInfo local_b0;
  undefined1 local_98 [48];
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar15 = FBuiltInComponentTypes::Get();
  local_c0 = pFVar15;
  FMovieSceneTracksComponentTypes::Get();
  iVar6 = param_3->ArrayNum;
  if (iVar6 == 0) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5133526537756213479>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                        ,0xe7,"NumContributors != 0");
    if (!bVar13) {
      return;
    }
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (iVar6 < 2) {
    pUVar9 = this->Linker;
    FVar3.Value = (pFVar15->Tags).AbsoluteBlend.Value;
    pFVar16 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_3,0);
    bVar13 = FEntityManager::HasComponent
                       (&pUVar9->EntityManager,(FMovieSceneEntityID)pFVar16->Value,FVar3);
    if (bVar13) {
      pUVar9 = this->Linker;
      FVar3.Value = *(ushort *)&pFVar15->WeightAndEasingResult;
      pFVar16 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[](param_3,0);
      bVar13 = FEntityManager::HasComponent
                         (&pUVar9->EntityManager,(FMovieSceneEntityID)pFVar16->Value,FVar3);
      if (!bVar13) {
        if (((param_4->OutputEntityID).Value == 0xffff) && (iVar6 == 1)) {
          pUVar9 = this->Linker;
          FVar3.Value = *(ushort *)&pFVar15->BlendChannelInput;
          pFVar16 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                              (param_3,0);
          FEntityManager::RemoveComponent
                    (&pUVar9->EntityManager,(FMovieSceneEntityID)pFVar16->Value,FVar3);
          pFVar16 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                              (param_3,0);
          FCustomPrimitiveDataMixin::InitializeSoleInput
                    ((FCustomPrimitiveDataMixin *)this,this->Linker,param_1,param_2,
                     (FMovieSceneEntityID)pFVar16->Value,param_4);
        }
        goto LAB_1467c66e8;
      }
    }
  }
  if ((param_4->OutputEntityID).Value == 0xffff) {
    if ((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr ==
        (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
      pUVar9 = this->Linker;
      local_d8 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)local_d8);
      }
      pUVar17 = (UMovieScenePiecewiseDoubleBlenderSystem *)
                UMovieSceneEntitySystemLinker::LinkSystem
                          (pUVar9,(TSubclassOf<UMovieSceneEntitySystem>)&local_d8);
      if (pUVar17 == (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
        pFVar22 = GetTypeName<UMovieScenePiecewiseDoubleBlenderSystem>(&local_58);
        if ((pFVar22->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar25);
      }
      pUVar18 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
      iVar7 = (int)pUVar18->_padding_;
      if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar18->_padding_)) {
        pFVar22 = GetTypeName<UMovieScenePiecewiseDoubleBlenderSystem>(&local_48);
        pwVar25 = L"";
        if ((pFVar22->Data).ArrayNum == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
        }
        pFVar22 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                            (&local_38,(UMovieSceneEntitySystem *)pUVar17);
        if ((pFVar22->Data).ArrayNum != 0) {
          pwVar25 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar25,pwVar24);
      }
      pUVar10 = this->System;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar17);
      }
      (pUVar10->DoubleBlenderSystem).field0_0x0.DebugPtr = pUVar17;
      FMovieSceneEntitySystemGraph::AddReference
                (&this->Linker->SystemGraph,(UMovieSceneEntitySystem *)this->System,
                 (UMovieSceneEntitySystem *)(this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)
      ;
    }
    local_d0 = this->Linker;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_d0 != (UMovieSceneEntitySystemLinker *)0x0)) {
      GC::MarkAsReachable((UObject *)local_d0);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_4,(FObjectPtr)&local_d0);
    pUVar17 = (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar17 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
        GC::MarkAsReachable((UObject *)pUVar17);
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar17 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar17);
      }
    }
    local_e8[0].ObjectIndex = 0;
    local_e8[0].ObjectSerialNumber = 0;
    local_c8 = pUVar17;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar17);
    }
    FWeakObjectPtr::operator=(local_e8,(FObjectPtr)&local_c8);
    (param_4->WeakBlenderSystem).WeakPtr = local_e8[0];
    FVar14 = UMovieSceneBlenderSystem::AllocateBlendChannel
                       ((UMovieSceneBlenderSystem *)
                        (this->System->DoubleBlenderSystem).field0_0x0.DebugPtr);
    local_68.DataPtr = param_3->DataPtr;
    local_68.ArrayNum = param_3->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&param_3->field_0xc;
    param_4->BlendChannelID = *(FMovieSceneBlendChannelID *)CONCAT44(extraout_var,FVar14);
    FCustomPrimitiveDataMixin::CreateEntity
              ((FCustomPrimitiveDataMixin *)this,this->Linker,param_1,param_2,
               (FComponentTypeID)
               *(ushort *)
                ((longlong)&((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)->_padding_ + 6
                ),&local_68,param_4);
  }
  pFVar16 = param_3->DataPtr;
  FVar3.Value = *(ushort *)
                 ((longlong)&((this->System->DoubleBlenderSystem).field0_0x0.DebugPtr)->_padding_ +
                 6);
  local_b8 = pFVar16 + param_3->ArrayNum;
  if (pFVar16 != local_b8) {
    do {
      pFVar15 = local_c0;
      FVar4.Value = pFVar16->Value;
      bVar13 = FEntityManager::HasComponent
                         (&this->Linker->EntityManager,FVar4,
                          (FComponentTypeID)*(ushort *)&local_c0->BlendChannelInput);
      if (bVar13) {
        FEntityManager::WriteComponent<FMovieSceneBlendChannelID>
                  (&this->Linker->EntityManager,
                   (TComponentLock<UE::MovieScene::TWriteOptional<FMovieSceneBlendChannelID>_> *)
                   local_98,FVar4,pFVar15->BlendChannelInput);
        uVar12 = local_98._24_8_;
        if (((FMovieSceneBlendChannelID *)local_98._24_8_ == (FMovieSceneBlendChannelID *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ComponentPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                ,0x210,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(FMovieSceneBlendChannelID *)uVar12 = param_4->BlendChannelID;
        if (local_98._0_8_ != 0) {
          uVar21 = local_98._8_8_;
          if ((ulonglong)local_98._8_8_ < *(ulonglong *)(local_98._0_8_ + 0x28)) {
            uVar21 = *(ulonglong *)(local_98._0_8_ + 0x28);
          }
          *(ulonglong *)(local_98._0_8_ + 0x28) = uVar21;
          LOCK();
          *(int *)(local_98._0_8_ + 0x30) = *(int *)(local_98._0_8_ + 0x30) + -1;
          UNLOCK();
          if (local_98._16_4_ == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(local_98._0_8_ + 0x20));
          }
        }
      }
      else {
        pUVar9 = this->Linker;
        FVar5.Value = *(ushort *)&pFVar15->BlendChannelInput;
        FEntityManager::AddComponent(&pUVar9->EntityManager,FVar4,FVar5);
        FEntityManager::GetEntity(&pUVar9->EntityManager,&local_b0,FVar4);
        if (local_b0.Data.Allocation != (FEntityAllocation *)0x0) {
          this_00 = (local_b0.Data.Allocation)->ComponentHeaders;
          pFVar23 = this_00 + (local_b0.Data.Allocation)->NumComponents;
          for (; this_00 != pFVar23; this_00 = this_00 + 1) {
            if ((this_00->ComponentType).Value == FVar5.Value) {
              if (this_00 != (FComponentHeader *)0x0) goto LAB_1467c663d;
              goto LAB_1467c6617;
            }
          }
          this_00 = (FComponentHeader *)0x0;
LAB_1467c6617:
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Header",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x2db,L"");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
LAB_1467c663d:
          EVar8 = (local_b0.Data.Allocation)->LockMode;
          if (EVar8 == Mutex) {
            AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
          }
          LOCK();
          paVar1 = &this_00->ScheduledAccessCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
          if ((aVar2 != (atomic<int>)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PreviousAccessCount == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                  ,0x487,
                                  L"Component header is still in use when it is being opened for write!"
                                 ), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar19 = FComponentHeader::GetValuePtr(this_00,local_b0.Data.ComponentOffset);
          *pFVar19 = param_4->BlendChannelID;
          if (this_00 != (FComponentHeader *)0x0) {
            uVar20 = 0;
            if (this_00->SerialNumber != 0) {
              uVar20 = this_00->SerialNumber;
            }
            this_00->SerialNumber = uVar20;
            LOCK();
            this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
            UNLOCK();
            if (EVar8 == Mutex) {
              ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
            }
          }
        }
      }
      FEntityManager::AddComponent(&this->Linker->EntityManager,FVar4,FVar3);
      pFVar16 = pFVar16 + 1;
    } while (pFVar16 != local_b8);
  }
LAB_1467c66e8:
  param_4->NumContributors = iVar6;
  return;
}

