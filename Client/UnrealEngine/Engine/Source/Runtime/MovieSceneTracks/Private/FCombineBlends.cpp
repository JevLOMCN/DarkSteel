// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// ForEachAllocation @ 14682fab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCombineBlends::ForEachAllocation
          (FCombineBlends *this,FEntityAllocationProxy *param_1,
          TRead<FMovieSceneBlendChannelID> param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TComponentTypeID<double> TVar3;
  EComponentHeaderLockMode EVar4;
  FAccumulationBuffers *this_00;
  uchar *puVar5;
  code *pcVar6;
  FEntityAllocation *pFVar7;
  FEntityAllocation *pFVar8;
  FBlendResult *pFVar9;
  FBlendResult *pFVar10;
  FBlendResult *pFVar11;
  FBlendResult *pFVar12;
  bool bVar13;
  FComponentMask *pFVar14;
  FBuiltInComponentTypes *pFVar15;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar16;
  FAdditiveFromBaseBuffer *pFVar17;
  FAdditiveAndOverrideBuffer *pFVar18;
  UClass *this_01;
  UMovieSceneBlenderSystem *pUVar19;
  FComponentHeader *pFVar20;
  TRead<FMovieSceneBlendChannelID> TVar21;
  FComponentHeader *pFVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 local_res20 [8];
  FComponentTypeID local_98 [4];
  int local_90;
  FComponentMask *local_88;
  TComponentTypeID<double> *local_80;
  longlong local_78;
  FEntityAllocation *local_70;
  FAccumulationResult local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::MovieScene::FCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<FMovieSceneBlendChannelID>)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::MovieScene::FCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<FMovieSceneBlendChannelID>)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::MovieScene::FCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<FMovieSceneBlendChannelID>)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_01 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    pUVar19 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_01);
    if ((pUVar19 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("DefaultObject",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                            ,0x41,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    `public:_void___cdecl_UE::MovieScene::FCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<FMovieSceneBlendChannelID>)const___ptr64'
    ::__l2::BlenderSystemID.Value = (pUVar19->SystemID).Value;
    _Init_thread_footer(&`public:_void___cdecl_UE::MovieScene::FCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<FMovieSceneBlendChannelID>)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_70 = FEntityAllocationProxy::GetAllocation(param_1);
  pFVar14 = FEntityAllocationProxy::GetAllocationType(param_1);
  local_78 = 0;
  local_90 = 0;
  local_88 = pFVar14;
  pFVar15 = FBuiltInComponentTypes::Get();
  local_80 = pFVar15->DoubleResult;
  iVar25 = 0;
  do {
    pFVar23 = (FScriptContainerElement *)0x0;
    if ((iVar25 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TVar3 = *local_80;
    if (((TVar3 != (TComponentTypeID<double>)0xffff) &&
        ((int)(uint)(ushort)TVar3 < (pFVar14->Bits).NumBits)) &&
       ((*(uint *)(pFVar14->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
         ((ushort)TVar3 & 0x1f) & 1) != 0)) {
      this_00 = this->AccumulationBuffers;
      local_68.Overrides = (FAdditiveAndOverrides *)0x0;
      local_68.Absolutes = (FBlendResult *)0x0;
      local_68.Relatives = (FBlendResult *)0x0;
      local_68.Additives = (FBlendResult *)0x0;
      local_68.AdditivesFromBase = (FBlendResult *)0x0;
      local_98[0].Value = (ushort)TVar3;
      pTVar16 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->Absolute,local_98);
      if (pTVar16 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
        local_68.Absolutes = (FBlendResult *)(pTVar16->AllocatorInstance).Data;
      }
      pFVar9 = local_68.Absolutes;
      pTVar16 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->Relative,local_98);
      if (pTVar16 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
        local_68.Relatives = (FBlendResult *)(pTVar16->AllocatorInstance).Data;
      }
      pFVar10 = local_68.Relatives;
      pTVar16 = TSortedMap<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->Additive,local_98);
      if (pTVar16 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
        local_68.Additives = (FBlendResult *)(pTVar16->AllocatorInstance).Data;
      }
      pFVar11 = local_68.Additives;
      pFVar17 = TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->AdditiveFromBase,local_98);
      if (pFVar17 != (FAdditiveFromBaseBuffer *)0x0) {
        local_68.AdditivesFromBase = (FBlendResult *)(pFVar17->Buffer).AllocatorInstance.Data;
      }
      pFVar12 = local_68.AdditivesFromBase;
      pFVar18 = TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                ::Find(&this_00->AdditiveAndOverrides,local_98);
      pFVar7 = local_70;
      if (pFVar18 != (FAdditiveAndOverrideBuffer *)0x0) {
        pFVar23 = (pFVar18->Values).AllocatorInstance.Data;
        local_68.Overrides = (FAdditiveAndOverrides *)pFVar23;
      }
      if (((pFVar9 != (FBlendResult *)0x0) || (pFVar10 != (FBlendResult *)0x0)) ||
         ((pFVar11 != (FBlendResult *)0x0 ||
          ((pFVar12 != (FBlendResult *)0x0 ||
           (pFVar14 = local_88, pFVar23 != (FScriptContainerElement *)0x0)))))) {
        pFVar22 = local_70->ComponentHeaders;
        uVar24 = (this->WriteContext).SystemSerial;
        pFVar20 = pFVar22 + local_70->NumComponents;
        for (; pFVar22 != pFVar20; pFVar22 = pFVar22 + 1) {
          if ((TComponentTypeID<double>)(pFVar22->ComponentType).Value == TVar3) goto LAB_14682fd04;
        }
        pFVar22 = (FComponentHeader *)0x0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14682fd04:
        iVar25 = 0;
        EVar4 = pFVar7->LockMode;
        if (EVar4 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar22->ReadWriteLock);
        }
        LOCK();
        paVar1 = &pFVar22->ScheduledAccessCount;
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
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar8 = local_70;
        puVar5 = pFVar22->Components;
        TVar21 = param_2;
        if (pFVar7->Size != 0) {
          do {
            if (*(uchar *)TVar21 !=
                `public:_void___cdecl_UE::MovieScene::FCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<FMovieSceneBlendChannelID>)const___ptr64'
                ::__l2::BlenderSystemID.Value) {
              local_res20[0] = 0;
              `UE::MovieScene::FCombineBlends::ForEachAllocation'::__l12::<lambda_1>::operator()
                        (local_res20);
            }
            BlendResults(&local_68,*(ushort *)((longlong)TVar21 + 2),
                         (double *)(puVar5 + (longlong)iVar25 * 8));
            iVar25 = iVar25 + 1;
            TVar21 = (TRead<FMovieSceneBlendChannelID>)((longlong)TVar21 + 4);
          } while (iVar25 < (int)(uint)pFVar8->Size);
        }
        if (uVar24 < pFVar22->SerialNumber) {
          uVar24 = pFVar22->SerialNumber;
        }
        pFVar22->SerialNumber = uVar24;
        LOCK();
        pFVar22->ScheduledAccessCount = (atomic<int>)((int)pFVar22->ScheduledAccessCount + -1);
        UNLOCK();
        pFVar14 = local_88;
        if (EVar4 == Mutex) {
          ReleaseSRWLockExclusive((PSRWLOCK)&pFVar22->ReadWriteLock);
          pFVar14 = local_88;
        }
      }
    }
    local_78 = local_78 + 1;
    local_90 = local_90 + 1;
    local_80 = local_80 + 1;
    iVar25 = local_90;
    if (8 < local_90) {
      return;
    }
  } while( true );
}

// operator() @ 1504f4cd0

bool __thiscall
`UE::MovieScene::FCombineBlends::ForEachAllocation'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712010713>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712010713>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<FMovieSceneBlendChannelID>)const___ptr64'::`12'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

