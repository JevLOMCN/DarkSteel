// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 14682fec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateFade::ForEachAllocation
          (FEvaluateFade *this,FEntityAllocation *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,
          TRead<UE::MovieScene::FFadeComponentData> param_4,TRead<double> param_5)

{
  double dVar1;
  FMovieSceneEntityID FVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  FMovieSceneAnimTypeID FVar6;
  TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>
  *pTVar7;
  bool bVar8;
  FBuiltInComponentTypes *pFVar9;
  FPreAnimatedEntityCaptureSource *this_00;
  TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0> TVar10;
  FComponentHeader *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FComponentHeader *pFVar14;
  undefined1 auStackY_178 [32];
  FComponentTypeID local_144;
  FComponentTypeID local_142;
  undefined8 local_140;
  FMovieSceneAnimTypeID local_138;
  FPreAnimatedStateEntry local_130;
  TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0> local_120;
  TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>
  *local_118;
  FEvaluateFade *local_110;
  UObject *local_108;
  <lambda_1> local_100;
  longlong local_f8;
  ulonglong local_f0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_e8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_d8;
  FComponentMask local_c8;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_110 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::MovieScene::FEvaluateFade::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TRead<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TRead<double>)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::MovieScene::FEvaluateFade::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TRead<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TRead<double>)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::MovieScene::FEvaluateFade::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TRead<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TRead<double>)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    TVar10 = (TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0>)
             TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0>::CachedID;
    if (TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0>::CachedID == 0) {
      TVar10 = (TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0>)
               FMovieSceneAnimTypeID::Initialize
                         (&TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0>::CachedID,0);
    }
    `public:_void___cdecl_UE::MovieScene::FEvaluateFade::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TRead<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TRead<double>)const___ptr64'
    ::__l2::AnimTypeID = TVar10;
    _Init_thread_footer(&`public:_void___cdecl_UE::MovieScene::FEvaluateFade::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TRead<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TRead<double>)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar9 = FBuiltInComponentTypes::Get();
  pFVar14 = param_1->ComponentHeaders;
  pFVar11 = pFVar14 + param_1->NumComponents;
  for (; pFVar14 != pFVar11; pFVar14 = pFVar14 + 1) {
    if ((pFVar14->ComponentType).Value == (pFVar9->Tags).RestoreState.Value) goto LAB_14682ff54;
  }
  pFVar14 = (FComponentHeader *)0x0;
LAB_14682ff54:
  local_138.ID = (ulong64)`public:_void___cdecl_UE::MovieScene::FEvaluateFade::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TRead<UE::MovieScene::FFadeComponentData>,UE::MovieScene::TRead<double>)const___ptr64'
                          ::__l2::AnimTypeID;
  local_f0 = (ulonglong)param_1->Size;
  if (local_f0 != 0) {
    lVar12 = 0;
    do {
      local_140._4_4_ = *(FRootInstanceHandle *)((longlong)param_3 + lVar12 * 4);
      lVar13 = (ulonglong)((uint)local_140._4_4_ & 0xffff) * 0x140;
      local_f8 = *(longlong *)&this->InstanceRegistry->Instances;
      pTVar3 = *(TReferenceControllerBase<1> **)(local_f8 + 0x120 + lVar13);
      lVar4 = *(longlong *)(local_f8 + 0x118 + lVar13);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x18));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (((this->PreAnimatedStorage).Object == (FPreAnimatedFadeStateStorage *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.ID = local_138.ID;
      local_118 = (TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>
                   *)(this->PreAnimatedStorage).Object;
      FVar2.Value = *(ushort *)((longlong)param_2 + lVar12 * 2);
      if ((local_118->ParentExtension->NumRequestsForGlobalState != 0) ||
         (pFVar14 != (FComponentHeader *)0x0)) {
        local_c8.Bits.MaxBits = 0x180;
        local_c8.Bits.NumBits = 0;
        local_60 = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        local_48 = 0;
        local_5c = 0x180;
        pFVar9 = FBuiltInComponentTypes::Get();
        local_144.Value = (pFVar9->Tags).NeedsLink.Value;
        local_e8._First = &local_144;
        local_e8._Last = &local_142;
        FComponentMask::SetAll(&local_c8,&local_e8);
        pTVar7 = local_118;
        local_120 = (TMovieSceneAnimTypeID<UE::MovieScene::FEvaluateFade,0>)FVar6.ID;
        TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>
        ::GetOrCreateStorageIndex(local_118,(FMovieSceneAnimTypeID *)&local_140);
        local_130.ValueHandle.TypeID.TypeID = (pTVar7->StorageID).TypeID;
        local_130.ValueHandle.StorageIndex.Value = (int)local_140;
        local_130.GroupHandle.Value = -1;
        this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData(pTVar7->ParentExtension);
        FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                  (this_00,&local_130,FVar2,local_140._4_4_,pFVar14 != (FComponentHeader *)0x0);
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
      this = local_110;
      if (((local_110->PreAnimatedStorage).Object == (FPreAnimatedFadeStateStorage *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_100.PlaybackContext = local_108;
      TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>
      ::CachePreAnimatedValue<_UE::MovieScene::FEvaluateFade::ForEachAllocation_::__l4::<lambda_1>_>
                ((TPreAnimatedStateStorage<UE::MovieScene::TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>_>
                  *)(this->PreAnimatedStorage).Object,(FPreAnimatedStorageGroupHandle)0xffffffff,
                 &local_138,&local_100,CacheIfTracked);
      dVar1 = *(double *)((longlong)param_5 + lVar12 * 8);
      local_d8.Object = *(FSharedPlaybackState **)(local_f8 + 0x118 + lVar13);
      bVar8 = *(bool *)((longlong)param_4 + 0x10);
      local_d8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(local_f8 + 0x120 + lVar13);
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FFadeUtil::ApplyFade(&local_d8,(float)dVar1,(FLinearColor *)param_4,bVar8);
      param_4 = (TRead<UE::MovieScene::FFadeComponentData>)((longlong)param_4 + 0x14);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (longlong)local_f0);
  }
  return;
}

