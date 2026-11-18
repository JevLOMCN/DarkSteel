// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 8

// StartupModule @ 146c462d0

void __thiscall FLevelSequenceModule::StartupModule(FLevelSequenceModule *this)

{
  FName FVar1;
  ITextData *pIVar2;
  code *pcVar3;
  TFragmentTypeHandle<FLegacyLazyObjectPtrFragment> TVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *this_01;
  FText *pFVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  ITextData *local_50;
  uint local_48;
  FName local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  FModuleManager::Get();
  pFVar5 = ::FName::FName(&local_res10,"UniversalObjectLocator");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  this_01 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pFVar6 = FText::FText((FText *)local_88);
  pFVar5 = ::FName::FName(local_res18,"ls_lazy_obj_ptr");
  local_50 = (pFVar6->TextData).Reference;
  local_40 = *pFVar5;
  if (local_50 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50 + 8))(local_50,local_res8);
  }
  local_48 = pFVar6->Flags;
  local_38 = 0;
  local_30 = 0;
  pIVar2 = (pFVar6->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TVar4 = UE::UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FLegacyLazyObjectPtrFragment>
                    ((IUniversalObjectLocatorModule *)this_01,(FFragmentTypeParameters *)local_res8)
  ;
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  FLegacyLazyObjectPtrFragment::FragmentType =
       *(TFragmentTypeHandle<FLegacyLazyObjectPtrFragment> *)CONCAT71(extraout_var,TVar4);
  pcVar3 = *(code **)(this->_padding_ + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_80;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_80);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIMovieSceneObjectSpawner___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIMovieSceneObjectSpawner___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = FLevelSequenceActorSpawner::CreateObjectSpawner;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  puVar9 = (ulong64 *)(*pcVar3)(this,local_res8,local_88);
  (this->OnCreateMovieSceneObjectSpawnerDelegateHandle).ID = *puVar9;
  if (local_50 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50 + 0x10))();
  }
  return;
}

// ShutdownModule @ 146c46440

void __thiscall FLevelSequenceModule::ShutdownModule(FLevelSequenceModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c46447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x50))
            (this,(this->OnCreateMovieSceneObjectSpawnerDelegateHandle).ID);
  return;
}

// RegisterObjectSpawner @ 146c46460

FDelegateHandle __thiscall
FLevelSequenceModule::RegisterObjectSpawner
          (FLevelSequenceModule *this,
          TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_1)

{
  TArray<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FDelegateHandle FVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  pTVar3 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
           (this->OnCreateMovieSceneObjectSpawnerDelegates).AllocatorInstance.Data;
  pTVar1 = &this->OnCreateMovieSceneObjectSpawnerDelegates;
  if ((pTVar3 <= in_R8) &&
     (in_R8 < pTVar3 + (this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar10.ID = (*pcVar6)();
      return (FDelegateHandle)FVar10.ID;
    }
  }
  iVar8 = (this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayNum;
  piVar2 = &(this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayNum = iVar8 + 1;
  TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x18),
             (TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)in_R8);
  iVar8 = (this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayNum;
  uVar12 = 0;
  uVar13 = iVar8 - 1;
  uVar9 = 0;
  if ((int)uVar13 < iVar8) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      FVar10.ID = (*pcVar6)();
      return (FDelegateHandle)FVar10.ID;
    }
  }
  iVar8 = (this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayNum;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (pFVar4 + (longlong)iVar8 * 0x18 + -0x18),&local_28);
  if ((*(int *)(pFVar4 + (longlong)iVar8 * 0x18 + -8) != 0) &&
     (plVar5 = *(longlong **)(pFVar4 + (longlong)iVar8 * 0x18 + -0x10), plVar5 != (longlong *)0x0))
  {
    puVar11 = (undefined8 *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
    uVar12 = *puVar11;
  }
  *(undefined8 *)param_1 = uVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// GenerateObjectSpawners @ 146c465d0

void __thiscall
FLevelSequenceModule::GenerateObjectSpawners
          (FLevelSequenceModule *this,
          TArray<TSharedRef<IMovieSceneObjectSpawner,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *this_00;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  iVar2 = (this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayNum;
  this_00 = (this->OnCreateMovieSceneObjectSpawnerDelegates).AllocatorInstance.Data;
  pFVar1 = this_00 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->OnCreateMovieSceneObjectSpawnerDelegates).ArrayNum != iVar2) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) {
      AlgoImpl::
      IntroSortInternal<TSharedRef<IMovieSceneObjectSpawner,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<IMovieSceneObjectSpawner,1>,_FLevelSequenceModule::GenerateObjectSpawners_::__l2::<lambda_1>_>_>
                ((TSharedRef<IMovieSceneObjectSpawner,1> *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum,local_res8[0],(<lambda_1> *)local_res10);
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
    if (((*(int *)&this_00[0x10].field_0x0 == 0) ||
        (*(longlong **)&this_00[8].field_0x0 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(**(longlong **)&this_00[8].field_0x0 + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpawnerFactory.IsBound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceModule.cpp"
                         ,0x171,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
    if (*(int *)&this_00[0x10].field_0x0 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)&this_00[8].field_0x0;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    pFVar8 = (param_1->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < pFVar8 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar8 = local_78;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_70;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    this_00 = this_00 + 0x18;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// UnregisterObjectSpawner @ 146c467e0

void __thiscall
FLevelSequenceModule::UnregisterObjectSpawner(FLevelSequenceModule *this,FDelegateHandle param_1)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].InHandle.ID = (FDelegateHandle)(FDelegateHandle)param_1.ID;
  TArray<TDelegate<TSharedRef<IMovieSceneObjectSpawner,1>___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  ::RemoveAll<_FLevelSequenceModule::UnregisterObjectSpawner_::__l2::<lambda_1>_>
            (&this->OnCreateMovieSceneObjectSpawnerDelegates,local_res8);
  return;
}

// OnNewActorTrackAdded @ 146c46810

TMulticastDelegate<void___cdecl(AActor_const_&,FGuid_const_&,TSharedPtr<ISequencer,1>),FDefaultDelegateUserPolicy>
* __thiscall FLevelSequenceModule::OnNewActorTrackAdded(FLevelSequenceModule *this)

{
  return &this->NewActorTrackAdded;
}

// Exec_Runtime @ 146c46820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FLevelSequenceModule::Exec_Runtime
          (FLevelSequenceModule *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FFrameTime *pFVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  UMovieSceneSequencePlayer *pUVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  wchar_t *local_res18;
  undefined1 local_e8 [8];
  TArray<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_e0;
  FFrameTime local_d0;
  FString local_c8;
  FFrameTime local_b8;
  FMovieSceneSequencePlaybackParams local_b0;
  float local_38;
  uint uStack_34;
  
  local_res18 = param_2;
  bVar2 = FParse::Command(&local_res18,L"Sequencer",true);
  if (!bVar2) {
    return false;
  }
  bVar2 = FParse::Command(&local_res18,L"Play",true);
  if (bVar2) {
    ::`anonymous_namespace'::GetLevelSequencePlayers(&local_e0,param_1,&local_res18,param_3);
    iVar3 = local_e0.ArrayNum;
    if (local_e0.ArrayNum != 0) {
      pFVar1 = (FFrameTime *)(local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 8);
      FVar7.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if (local_e0.ArrayNum != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_e8);
        }
        if ((FFrameTime *)FVar7.Data == pFVar1) break;
        local_d0 = *(FFrameTime *)FVar7.Data;
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
        if (pUVar5 != (UObject *)0x0) {
          pUVar6 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
          UMovieSceneSequencePlayer::Play(pUVar6);
        }
        FVar7.Data = FVar7.Data + 8;
      }
      goto LAB_146c46d78;
    }
LAB_146c468aa:
    FOutputDevice::Log(param_3,L"No level sequences found.");
  }
  else {
    bVar2 = FParse::Command(&local_res18,L"Pause",true);
    if (bVar2) {
      ::`anonymous_namespace'::GetLevelSequencePlayers(&local_e0,param_1,&local_res18,param_3);
      iVar3 = local_e0.ArrayNum;
      if (local_e0.ArrayNum != 0) {
        pFVar1 = (FFrameTime *)(local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 8);
        FVar7.Data = local_e0.AllocatorInstance.Data;
        while( true ) {
          if (local_e0.ArrayNum != iVar3) {
            `TCheckedPointerIterator<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_e8);
          }
          if ((FFrameTime *)FVar7.Data == pFVar1) break;
          local_d0 = *(FFrameTime *)FVar7.Data;
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
          if (pUVar5 != (UObject *)0x0) {
            pUVar6 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
            UMovieSceneSequencePlayer::Pause(pUVar6);
          }
          FVar7.Data = FVar7.Data + 8;
        }
        goto LAB_146c46d78;
      }
      goto LAB_146c468aa;
    }
    bVar2 = FParse::Command(&local_res18,L"Stop",true);
    if (bVar2) {
      ::`anonymous_namespace'::GetLevelSequencePlayers(&local_e0,param_1,&local_res18,param_3);
      iVar3 = local_e0.ArrayNum;
      if (local_e0.ArrayNum != 0) {
        pFVar1 = (FFrameTime *)(local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 8);
        FVar7.Data = local_e0.AllocatorInstance.Data;
        while( true ) {
          if (local_e0.ArrayNum != iVar3) {
            `TCheckedPointerIterator<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_e8);
          }
          if ((FFrameTime *)FVar7.Data == pFVar1) break;
          local_d0 = *(FFrameTime *)FVar7.Data;
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
          if (pUVar5 != (UObject *)0x0) {
            pUVar6 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
            UMovieSceneSequencePlayer::Stop(pUVar6);
          }
          FVar7.Data = FVar7.Data + 8;
        }
        goto LAB_146c46d78;
      }
      goto LAB_146c468aa;
    }
    bVar2 = FParse::Command(&local_res18,L"SetPlaybackPosition",true);
    if (!bVar2) {
      bVar2 = FParse::Command(&local_res18,L"PlayTo",true);
      if (!bVar2) {
        bVar2 = FParse::Command(&local_res18,L"SetClockSource",true);
        if ((bVar2) &&
           (bVar2 = ::`anonymous_namespace'::HandleLevelSequenceSetClockSource
                              (param_1,&local_res18,param_3), bVar2)) {
          return true;
        }
        goto LAB_146c468c8;
      }
      ::`anonymous_namespace'::GetLevelSequencePlayers(&local_e0,param_1,&local_res18,param_3);
      if (local_e0.ArrayNum != 0) {
        FParse::Token(&local_c8,&local_res18,false);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_c8.Data.ArrayNum != 0) {
          FVar7.Data = local_c8.Data.AllocatorInstance.Data;
        }
        iVar3 = iswdigit(*(wchar_t *)FVar7.Data);
        if (iVar3 != 0) {
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_c8.Data.ArrayNum != 0) {
            FVar7.Data = local_c8.Data.AllocatorInstance.Data;
          }
          uVar4 = _wtoi((wchar_t *)FVar7.Data);
          FOutputDevice::LogfImpl(param_3,L"Playing to: %d");
          iVar3 = local_e0.ArrayNum;
          pFVar1 = (FFrameTime *)(local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 8)
          ;
          FVar7.Data = local_e0.AllocatorInstance.Data;
          while( true ) {
            if (local_e0.ArrayNum != iVar3) {
              `TCheckedPointerIterator<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_e8);
            }
            if ((FFrameTime *)FVar7.Data == pFVar1) break;
            local_b8 = *(FFrameTime *)FVar7.Data;
            pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_b8);
            if (pUVar5 != (UObject *)0x0) {
              local_d0.SubFrame = 0.0;
              local_d0.FrameNumber.Value = uVar4;
              local_38 = 0.0;
              uStack_34 = uStack_34 & 0xffffff00;
              pUVar6 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_b8)
              ;
              local_b0.Timecode._20_4_ = uStack_34;
              local_b0.Timecode.Subframe = local_38;
              local_b0.Frame = local_d0;
              local_b0.Time = 0.0;
              local_b0.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_b0.MarkedFrame.Data.ArrayNum = 0;
              local_b0.MarkedFrame.Data.ArrayMax = 0;
              local_b0.Timecode.Hours = 0;
              local_b0.Timecode.Minutes = 0;
              local_b0.Timecode.Seconds = 0;
              local_b0.Timecode.Frames = 0;
              local_b0.PositionType = Frame;
              local_b0.UpdateMethod = Play;
              local_b0.bHasJumped = false;
              UMovieSceneSequencePlayer::PlayTo
                        (pUVar6,&local_b0,(FMovieSceneSequencePlayToParams)0x1);
            }
            FVar7.Data = FVar7.Data + 8;
          }
          goto LAB_146c46d6a;
        }
        pwVar8 = L"Invalid frame number to play to: %s";
        goto LAB_146c46b50;
      }
      goto LAB_146c468aa;
    }
    ::`anonymous_namespace'::GetLevelSequencePlayers(&local_e0,param_1,&local_res18,param_3);
    if (local_e0.ArrayNum == 0) goto LAB_146c468aa;
    FParse::Token(&local_c8,&local_res18,false);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar7.Data = local_c8.Data.AllocatorInstance.Data;
    }
    iVar3 = iswdigit(*(wchar_t *)FVar7.Data);
    if (iVar3 != 0) {
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar7.Data = local_c8.Data.AllocatorInstance.Data;
      }
      uVar4 = _wtoi((wchar_t *)FVar7.Data);
      FOutputDevice::LogfImpl(param_3,L"Setting playback position to: %d");
      iVar3 = local_e0.ArrayNum;
      pFVar1 = (FFrameTime *)(local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 8);
      FVar7.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if (local_e0.ArrayNum != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UMovieSceneSequencePlayer,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_e8);
        }
        if ((FFrameTime *)FVar7.Data == pFVar1) break;
        local_d0 = *(FFrameTime *)FVar7.Data;
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
        if (pUVar5 != (UObject *)0x0) {
          local_b8.SubFrame = 0.0;
          local_b8.FrameNumber.Value = uVar4;
          local_38 = 0.0;
          uStack_34 = uStack_34 & 0xffffff00;
          pUVar6 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d0);
          local_b0.Timecode._20_4_ = uStack_34;
          local_b0.Timecode.Subframe = local_38;
          local_b0.Frame = local_b8;
          local_b0.Time = 0.0;
          local_b0.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.MarkedFrame.Data.ArrayNum = 0;
          local_b0.MarkedFrame.Data.ArrayMax = 0;
          local_b0.Timecode.Hours = 0;
          local_b0.Timecode.Minutes = 0;
          local_b0.Timecode.Seconds = 0;
          local_b0.Timecode.Frames = 0;
          local_b0.PositionType = Frame;
          local_b0.UpdateMethod = Play;
          local_b0.bHasJumped = false;
          UMovieSceneSequencePlayer::SetPlaybackPosition(pUVar6,&local_b0);
        }
        FVar7.Data = FVar7.Data + 8;
      }
LAB_146c46d6a:
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
LAB_146c46d78:
      if (local_e0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_e0.AllocatorInstance.Data);
      return true;
    }
    pwVar8 = L"Invalid frame number to set playback position to: %s";
LAB_146c46b50:
    FOutputDevice::LogfImpl(param_3,pwVar8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
LAB_146c468c8:
  FOutputDevice::Log(param_3,L"Usage: Sequencer <Command>");
  FOutputDevice::Log(param_3,L"");
  FOutputDevice::Log(param_3,L"Command");
  FOutputDevice::Log(param_3,
                     L"    Play <SequenceName> = Start playback forwards from the current time cursor position, using the current play rate"
                    );
  FOutputDevice::Log(param_3,L"    Pause <SequenceName> = Pause playback");
  FOutputDevice::Log(param_3,
                     L"    Stop <SequenceName> = Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence"
                    );
  FOutputDevice::Log(param_3,
                     L"    SetPlaybackPosition <SequenceName> <FrameNumber> = Set the current time of the player by evaluating from the current time to the specified time"
                    );
  FOutputDevice::Log(param_3,
                     L"    PlayTo <SequenceName> <FrameNumber> = Play from the current position to the requested position and pause"
                    );
  FOutputDevice::Log(param_3,
                     L"    SetClockSource <SequenceName> <ClockSource, ie. Tick, Audio, PlayEveryFrame> = Set the clock source"
                    );
  return false;
}

// operator() @ 146c4f7a0

bool __thiscall
`FLevelSequenceModule::GenerateObjectSpawners'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<IMovieSceneObjectSpawner,1> *param_1,
          TSharedRef<IMovieSceneObjectSpawner,1> *param_2)

{
  IMovieSceneObjectSpawner *pIVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  pIVar1 = param_1->Object;
  bVar2 = (**(code **)((longlong)*param_2->Object + 0x18))();
  bVar3 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
  if (bVar2 < bVar3) {
LAB_146c4f813:
    bVar8 = true;
  }
  else {
    pIVar1 = param_1->Object;
    cVar4 = (**(code **)((longlong)*param_2->Object + 0x18))();
    cVar5 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    if (cVar5 == cVar4) {
      pIVar1 = param_1->Object;
      iVar6 = (**(code **)((longlong)*param_2->Object + 0x20))();
      iVar7 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
      if (iVar6 < iVar7) goto LAB_146c4f813;
    }
    bVar8 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return bVar8;
}

