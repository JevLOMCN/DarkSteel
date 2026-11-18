// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// FadeProcess @ 14b8c22c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FDS_CameraFadeInfo::FadeProcess(FDS_CameraFadeInfo *this,float param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  bool bVar1;
  UObject *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 local_78 [16];
  bool local_68;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_58 [2];
  
  bVar1 = TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
                    (&this->CameraManager,(void *)0x0);
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  if (!bVar1) {
    fVar3 = __real_3f800000;
    if (__real_322bcc77 <
        (float)((uint)this->FadeTotalTime & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar3 = this->FadeElapsedTime / this->FadeTotalTime;
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
    }
    this->FadeTimeRatio = fVar3;
    if (this->FadeState == FadeIn) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      fVar5 = fVar5 - this->FadeTimeRatio;
    }
    else {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      fVar5 = this->FadeTimeRatio;
    }
    local_78 = (undefined1  [16])FLinearColor::Black.field0_0x0;
    (**(code **)(*(longlong *)pUVar2 + 0x918))(pUVar2,fVar5,local_78,0);
    fVar5 = this->FadeTotalTime;
    if (fVar4 < (float)((uint)(this->FadeElapsedTime - fVar5) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar4 = this->FadeElapsedTime + param_1;
      this->FadeElapsedTime = fVar4;
      if (fVar5 < fVar4) {
        this->FadeElapsedTime = fVar5;
      }
    }
    else {
      this_00 = &this->FinishFadeDelegate;
      local_58[0]._padding_ = 0;
      local_58[0].InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58[0].InvocationList.ArrayNum = ___xmm_00000000000000020000000000000000;
      local_58[0].InvocationList.ArrayMax = _UNK_150631d44;
      local_58[0].CompactionThreshold = _UNK_150631d48;
      local_58[0].InvocationListLockCount = _UNK_150631d4c;
      if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00 != local_58) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  (local_58,(TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)local_78);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (local_68 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58);
      if ((float)((uint)(this->FadeElapsedTime - this->FadeTotalTime) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar4) {
        this->FadeState = None;
        this->FadeTimeRatio = 0.0;
        this->FadeElapsedTime = 0.0;
        this->FadeTotalTime = 0.0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)local_78);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (local_68 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78
                    );
        }
      }
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 local_58[0].InvocationList.AllocatorInstance.Data,
                 local_58[0].InvocationList.ArrayNum);
      if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
          local_58[0].InvocationList.AllocatorInstance.Data !=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
        FMemory::Free(local_58[0].InvocationList.AllocatorInstance.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
    }
  }
  return;
}

// FinishFade @ 14b8c3490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FDS_CameraFadeInfo::FinishFade(FDS_CameraFadeInfo *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_30;
  
  this_00 = &this->FinishFadeDelegate;
  local_30._padding_ = 0;
  local_30.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_30._24_8_ = _UNK_150631d48;
  if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00 != &local_30) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (&local_30,(TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_48);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_30);
  if ((float)((uint)(this->FadeElapsedTime - this->FadeTotalTime) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    this->FadeState = None;
    this->FadeTimeRatio = 0.0;
    this->FadeElapsedTime = 0.0;
    this->FadeTotalTime = 0.0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_48);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_30.InvocationList.AllocatorInstance.Data,local_30.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_30.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_30.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_30);
  return;
}

// IsDuringFadeAnimation @ 14b8d0100

bool __thiscall FDS_CameraFadeInfo::IsDuringFadeAnimation(FDS_CameraFadeInfo *this)

{
  return this->FadeState != None;
}

// ResetData @ 14b8e5be0

void __thiscall FDS_CameraFadeInfo::ResetData(FDS_CameraFadeInfo *this)

{
  FDestructionSentinel local_28;
  
  this->FadeState = None;
  this->FadeTimeRatio = 0.0;
  this->FadeElapsedTime = 0.0;
  this->FadeTotalTime = 0.0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FinishFadeDelegate,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->FinishFadeDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

