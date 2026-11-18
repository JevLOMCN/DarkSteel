// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 9

// CreatePlayer @ 14ea2ffd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<IMediaPlayer,1> * __thiscall
FImgMediaModule::CreatePlayer
          (FImgMediaModule *this,TSharedPtr<IMediaPlayer,1> *__return_storage_ptr__,
          IMediaEventSink *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FImgMediaScheduler *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FImgMediaGlobalCache *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TSharedPtr<IMediaPlayer,1> *pTVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FDestructionSentinel local_48;
  
  if ((this->Scheduler).Object == (FImgMediaScheduler *)0x0) {
    InitScheduler(this);
  }
  if (IImgMediaModule::GlobalCache.Object == (FImgMediaGlobalCache *)0x0) {
    InitGlobalCache(this);
    if (IImgMediaModule::GlobalCache.Object == (FImgMediaGlobalCache *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedPtr<IMediaPlayer,1> *)(*pcVar5)();
        return pTVar12;
      }
    }
  }
  FVar7.ReferenceController = IImgMediaModule::GlobalCache.SharedReferenceCount.ReferenceController;
  pFVar6 = IImgMediaModule::GlobalCache.Object;
  if (IImgMediaModule::GlobalCache.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (IImgMediaModule::GlobalCache.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(IImgMediaModule::GlobalCache.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar6 == (FImgMediaGlobalCache *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<IMediaPlayer,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  if ((this->Scheduler).Object == (FImgMediaScheduler *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<IMediaPlayer,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pTVar2 = (this->Scheduler).SharedReferenceCount.ReferenceController;
  pFVar3 = (this->Scheduler).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FImgMediaScheduler *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<IMediaPlayer,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pTStack_50 = ::operator_new(0xe0);
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (pTStack_50 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTStack_50 = _UNK_150651568;
  }
  else {
    pTStack_50->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_50->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_50->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFImgMediaPlayer___00_SharedPointerInternals__6B_;
    pTStack_50[1]._padding_ = (longlong)&FImgMediaPlayer::_vftable__for__IMediaPlayer__;
    *(undefined ***)&pTStack_50[1].SharedReferenceCount =
         &FImgMediaPlayer::_vftable__for__IMediaCache__;
    pTStack_50[2]._padding_ = (longlong)&FImgMediaPlayer::_vftable__for__IMediaControls__;
    *(undefined ***)&pTStack_50[2].SharedReferenceCount =
         &FImgMediaPlayer::_vftable__for__IMediaSamples__;
    pTStack_50[3]._padding_ = (longlong)&FImgMediaPlayer::_vftable__for__IMediaTracks__;
    *(undefined ***)&pTStack_50[3].SharedReferenceCount =
         &FImgMediaPlayer::_vftable__for__IMediaView__;
    pTStack_50[4]._padding_ = 0;
    pTStack_50[5].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[5].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[4].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_50[5]._padding_ = 0;
    pTStack_50[8].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[8].WeakReferenceCount = (atomic<int>)0x80000000;
    pTStack_50[6].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[6].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_50[7]._padding_ = 0;
    *(undefined4 *)&pTStack_50[6]._padding_ = 0;
    *(undefined1 *)&pTStack_50[7].SharedReferenceCount = 0;
    pTStack_50[8]._padding_ = (longlong)param_1;
    pTStack_50[9]._padding_ = 0;
    pTStack_50[9].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_50[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTStack_50[10]._padding_ = 0;
    *(FImgMediaScheduler **)&pTStack_50[10].SharedReferenceCount = pFVar3;
    pTStack_50[0xb]._padding_ = (longlong)pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTStack_50[0xb].SharedReferenceCount = (atomic<int>)0xffffffff;
    *(undefined1 *)&pTStack_50[0xb].WeakReferenceCount = 0;
    pTStack_50[0xc]._padding_ = (longlong)pFVar6;
    *(TReferenceControllerBase<1> **)&pTStack_50[0xc].SharedReferenceCount =
         FVar7.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = pTStack_50 + 1;
    *(undefined2 *)&pTStack_50[0xd]._padding_ = 1;
    *(undefined8 *)((longlong)&pTStack_50[0xd]._padding_ + 4) = 0;
    if (local_58 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedPtr<IMediaPlayer,1> *)(*pcVar5)();
        return pTVar12;
      }
    }
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
    pTVar14 = pTStack_50;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_48);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar8 = false;
  uVar13 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar13) {
    lVar15 = (longlong)(int)uVar13 << 4;
    bVar8 = false;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TSharedPtr<IMediaPlayer,1> *)(*pcVar5)();
          return pTVar12;
        }
      }
      if ((*(int *)(lVar15 + 8 + this->_padding_) == 0) ||
         (plVar4 = *(longlong **)(lVar15 + this->_padding_), plVar4 == (longlong *)0x0)) {
LAB_14ea3031a:
        bVar8 = true;
      }
      else {
        cVar10 = (**(code **)(*plVar4 + 0x68))();
        if (cVar10 == '\0') goto LAB_14ea3031a;
      }
      lVar15 = lVar15 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  __return_storage_ptr__->Object = (IMediaPlayer *)local_58;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_50;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return __return_storage_ptr__;
}

// GetSceneViewExtension @ 14ea303c0

TSharedPtr<FImgMediaSceneViewExtension,1> * __thiscall
FImgMediaModule::GetSceneViewExtension(FImgMediaModule *this)

{
  return &this->SceneViewExtension;
}

// StartupModule @ 14ea303d0

void __thiscall FImgMediaModule::StartupModule(FImgMediaModule *this)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType local_90;
  int local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  FDelegateAllocation local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_68);
  local_50 = &local_78;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_78);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = SpawnMediaSourceForString;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  iVar1 = (this->FileExtensions).ArrayNum;
  pFVar6 = (this->FileExtensions).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  do {
    if ((this->FileExtensions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FImgMediaModule>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnPostEngineInit,(FImgMediaModule *)local_res8,(pmf_42dea085)this)
      ;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FImgMediaModule>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnEnginePreExit,(FImgMediaModule *)local_res8,(pmf_42dea085)this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_80,(FWriteAccessScope *)&local_68);
      if ((local_78.DelegateSize != 0) &&
         (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_78.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_78,0,0,0x10);
        local_78.DelegateSize = 0;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_78.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
      return;
    }
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_80,(FReadAccessScope *)&local_68);
    if ((local_78.DelegateSize != 0) &&
       (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_78.DelegateAllocator + 0x50))
                (local_78.DelegateAllocator,&local_98);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_98,(FWriteAccessScope *)&local_68);
    iVar3 = local_88;
    FVar2.Data = local_90.Data;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_68);
    if (local_38 == 0) {
LAB_14ea3055d:
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
    }
    else if (local_40.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
      goto LAB_14ea3055d;
    }
    local_40.Data = FVar2.Data;
    local_38 = iVar3;
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_98,(FWriteAccessScope *)&local_68);
    if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_90.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
      local_88 = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
    UMediaSource::RegisterSpawnFromFileExtension
              ((FString *)pFVar6,
               (TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
                *)local_48);
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// ShutdownModule @ 14ea306f0

void __thiscall FImgMediaModule::ShutdownModule(FImgMediaModule *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  iVar1 = (this->FileExtensions).ArrayNum;
  pFVar2 = (this->FileExtensions).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FileExtensions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    UMediaSource::UnregisterSpawnFromFileExtension((FString *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Scheduler != (TSharedPtr<FImgMediaScheduler,1> *)&local_28) {
    (this->Scheduler).Object = (FImgMediaScheduler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Scheduler).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  IImgMediaModule::GlobalCache.Object = (FImgMediaGlobalCache *)0x0;
  local_18 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&IImgMediaModule::GlobalCache.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  return;
}

// InitGlobalCache @ 14ea50c70

void __thiscall FImgMediaModule::InitGlobalCache(FImgMediaModule *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UClass *this_00;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  FImgMediaGlobalCache *pFVar9;
  float fVar10;
  FSharedReferencer<1> local_20;
  
  pTVar6 = ::operator_new(0x158);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FImgMediaGlobalCache *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFImgMediaGlobalCache___00_SharedPointerInternals__6B_
    ;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5]._padding_ = 0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[6]._padding_ + 4) = 0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[10]._padding_ = 0;
    pTVar6[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[10].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[0xb]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[0xb]._padding_ + 4) = 0;
    pTVar6[0xc]._padding_ = 0;
    pTVar6[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xd]._padding_ = 0;
    pTVar6[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xf]._padding_ = 0;
    pTVar6[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xf].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[0x10]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[0x10]._padding_ + 4) = 0;
    pTVar6[0x11]._padding_ = 0;
    pTVar6[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x12]._padding_ = 0;
    pTVar6[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x12].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 0x13),4000);
    pFVar9 = (FImgMediaGlobalCache *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pFVar9 == (FImgMediaGlobalCache *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14ea50e33;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14ea50e33:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  IImgMediaModule::GlobalCache.Object = pFVar9;
  local_20.ReferenceController = pTVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&IImgMediaModule::GlobalCache.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (IImgMediaModule::GlobalCache.Object == (FImgMediaGlobalCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = IImgMediaModule::GlobalCache.Object;
  this_00 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  lVar7 = 0;
  fVar10 = *(float *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1c *
           __real_4e800000;
  if ((__real_5f000000 <= fVar10) && (fVar10 = fVar10 - __real_5f000000, fVar10 < __real_5f000000))
  {
    lVar7 = -0x8000000000000000;
  }
  pFVar9->MaxSize = (longlong)fVar10 + lVar7;
  FImgMediaGlobalCache::EnforceMaxSize(pFVar9,0);
  return;
}

// InitScheduler @ 14ea50f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FImgMediaModule::InitScheduler(FImgMediaModule *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FImgMediaScheduler,1> *pTVar12;
  FImgMediaScheduler *pFVar13;
  FName local_res8;
  FImgMediaScheduler *local_38;
  FSharedReferencer<1> FStack_30;
  FImgMediaScheduler *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar6 = ::operator_new(0x80);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pFVar13 = (FImgMediaScheduler *)&DAT_00000010;
    FStack_30.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[2]._padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFImgMediaScheduler___00_SharedPointerInternals__6B_;
    pTVar6[1]._padding_ = (longlong)&FImgMediaScheduler::_vftable__for__IMediaClockSink__;
    *(undefined ***)&pTVar6[1].SharedReferenceCount =
         &FImgMediaScheduler::_vftable__for__IImgMediaScheduler__;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 4),4000);
    pFVar13 = (FImgMediaScheduler *)(pTVar6 + 1);
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7]._padding_ = 0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0xffffffff;
    if ((pFVar13 == (FImgMediaScheduler *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FStack_30.ReferenceController = pTVar6;
    pTVar11 = pTVar6;
    local_38 = pFVar13;
  }
  pTVar12 = &this->Scheduler;
  if (pTVar12 != (TSharedPtr<FImgMediaScheduler,1> *)&local_38) {
    pTVar12->Object = pFVar13;
    local_38 = (FImgMediaScheduler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Scheduler).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((pTVar12->Object == (FImgMediaScheduler *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar13 = pTVar12->Object;
  if ((pFVar13->AllThreads).ArrayNum < 1) {
    pUVar7 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    iVar5 = *(int *)&(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
    if (iVar5 < 1) {
      iVar5 = FWindowsPlatformMisc::NumberOfWorkerThreadsToSpawn();
    }
    pUVar7 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    lpCriticalSection = &pFVar13->CriticalSection;
    uVar1 = *(uint *)&(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x18;
    if (uVar1 < 0x20000) {
      uVar1 = 0x20000;
    }
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    for (; 0 < iVar5; iVar5 = iVar5 + -1) {
      FImgMediaScheduler::CreateWorker(pFVar13,uVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar8 = ::FName::FName(&local_res8,"Media");
  FVar2 = *pFVar8;
  this_00 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModule(this_00,FVar2,None);
  if (pIVar9 != (IModuleInterface *)0x0) {
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0xa8))(pIVar9);
    pcVar3 = *(code **)(*plVar10 + 0x10);
    if ((pTVar12->Object == (FImgMediaScheduler *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar11 = (this->Scheduler).SharedReferenceCount.ReferenceController;
    pFVar13 = pTVar12->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar13 == (FImgMediaScheduler *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = pFVar13;
    local_20 = pTVar11;
    (*pcVar3)(plVar10,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  return;
}

// OnEnginePreExit @ 14ea53900

void __thiscall FImgMediaModule::OnEnginePreExit(FImgMediaModule *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SceneViewExtension != (TSharedPtr<FImgMediaSceneViewExtension,1> *)&local_18) {
    (this->SceneViewExtension).Object = (FImgMediaSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// OnPostEngineInit @ 14ea53950

void __thiscall FImgMediaModule::OnPostEngineInit(FImgMediaModule *this)

{
  code *pcVar1;
  bool bVar2;
  FImgMediaSceneViewExtension *this_00;
  FDelegateHandle FVar3;
  FAutoRegister local_res8 [8];
  TRawPtrProxy<FImgMediaSceneViewExtension> local_res10 [3];
  FImgMediaSceneViewExtension *local_58;
  FSharedReferencer<1> local_50;
  TSharedRef<FImgMediaSceneViewExtension,1> local_48;
  TSharedRef<ISceneViewExtension,1> local_38;
  code *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  this_00 = ::operator_new(0x50);
  if (this_00 == (FImgMediaSceneViewExtension *)0x0) {
    this_00 = (FImgMediaSceneViewExtension *)0x0;
  }
  else {
    FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this_00,local_res8);
    this_00->_padding_ = (longlong)&___7FImgMediaSceneViewExtension__6B_;
    local_38.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_38.Object = (ISceneViewExtension *)FImgMediaSceneViewExtension::ResetViewInfoCache;
    local_28 = FImgMediaSceneViewExtension::ResetViewInfoCache;
    pTStack_20 = local_38.SharedReferenceCount.ReferenceController;
    (this_00->CachedViewInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->CachedViewInfos).ArrayNum = 0;
    (this_00->CachedViewInfos).ArrayMax = 0;
    (this_00->DisplayResolutionCachedViewInfos).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this_00->DisplayResolutionCachedViewInfos).ArrayNum = 0;
    (this_00->DisplayResolutionCachedViewInfos).ArrayMax = 0;
    (this_00->OnBeginFrameDelegate).ID = 0;
    FVar3 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<FImgMediaSceneViewExtension>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnBeginFrame,
                       (FImgMediaSceneViewExtension *)(local_res10 + 1),(pmf_b5184bc1 *)this_00);
                    /* WARNING: Load size is inaccurate */
    (this_00->OnBeginFrameDelegate).ID = *FVar3.ID;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res10[0].Object = this_00;
  TSharedRef<FImgMediaSceneViewExtension,1>::
  TSharedRef<FImgMediaSceneViewExtension,1><FImgMediaSceneViewExtension>(&local_48,local_res10);
  local_38.Object = (ISceneViewExtension *)local_48.Object;
  local_38.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_58 = local_48.Object;
  local_50.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SceneViewExtension != (TSharedPtr<FImgMediaSceneViewExtension,1> *)&local_58) {
    (this->SceneViewExtension).Object = local_48.Object;
    local_58 = (FImgMediaSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// SpawnMediaSourceForString @ 14ea5c1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaSource * __cdecl FImgMediaModule::SpawnMediaSourceForString(FString *param_1,UObject *param_2)

{
  UClass *pUVar1;
  UImgMediaSource *this;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            (param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UImgMediaSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = param_2;
  this = (UImgMediaSource *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar2 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar2 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UImgMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UImgMediaSource::SetSequencePath(this,param_1);
  return (UMediaSource *)this;
}

