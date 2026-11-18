// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// ~FGroomCacheStreamedBuffers @ 14dff1760

void __thiscall
FGroomCacheStreamedBuffers::~FGroomCacheStreamedBuffers(FGroomCacheStreamedBuffers *this)

{
  this->_padding_ = (longlong)&___7FGroomCacheStreamedBuffers__6B_;
  ResetInternal(this);
  FGroomCacheBuffers::~FGroomCacheBuffers((FGroomCacheBuffers *)this);
  return;
}

// GetCurrentFrameBuffer @ 14e013850

FGroomCacheAnimationData * __thiscall
FGroomCacheStreamedBuffers::GetCurrentFrameBuffer(FGroomCacheStreamedBuffers *this)

{
  FGroomCacheAnimationData *pFVar1;
  
  pFVar1 = &FGroomCacheBuffers::EmptyFrame;
  if (this->CurrentFramePtr != (FGroomCacheAnimationData *)0x0) {
    pFVar1 = this->CurrentFramePtr;
  }
  return pFVar1;
}

// GetNextFrameBuffer @ 14e0188a0

FGroomCacheAnimationData * __thiscall
FGroomCacheStreamedBuffers::GetNextFrameBuffer(FGroomCacheStreamedBuffers *this)

{
  FGroomCacheAnimationData *pFVar1;
  
  pFVar1 = &FGroomCacheBuffers::EmptyFrame;
  if (this->NextFramePtr != (FGroomCacheAnimationData *)0x0) {
    pFVar1 = this->NextFramePtr;
  }
  return pFVar1;
}

// Reset @ 14e026130

void __thiscall FGroomCacheStreamedBuffers::Reset(FGroomCacheStreamedBuffers *this)

{
  longlong *lpCriticalSection;
  IGroomCacheStreamingManager *pIVar1;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((int)this->_padding_ != -1) {
      pIVar1 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar1 + 0xb8))(pIVar1,this->_padding_,(int)this->_padding_);
      *(undefined4 *)&this->_padding_ = 0xffffffff;
      this->CurrentFramePtr = (FGroomCacheAnimationData *)0x0;
    }
    if (*(int *)((longlong)&this->_padding_ + 4) != -1) {
      pIVar1 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar1 + 0xb8))
                (pIVar1,this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
      this->NextFramePtr = (FGroomCacheAnimationData *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014e0262a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetInternal @ 14e026200

void __thiscall FGroomCacheStreamedBuffers::ResetInternal(FGroomCacheStreamedBuffers *this)

{
  longlong *lpCriticalSection;
  IGroomCacheStreamingManager *pIVar1;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((int)this->_padding_ != -1) {
      pIVar1 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar1 + 0xb8))(pIVar1,this->_padding_,(int)this->_padding_);
      *(undefined4 *)&this->_padding_ = 0xffffffff;
      this->CurrentFramePtr = (FGroomCacheAnimationData *)0x0;
    }
    if (*(int *)((longlong)&this->_padding_ + 4) != -1) {
      pIVar1 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar1 + 0xb8))
                (pIVar1,this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
      this->NextFramePtr = (FGroomCacheAnimationData *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014e0262a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateBuffersAtTime @ 14e02b8f0

void __thiscall
FGroomCacheStreamedBuffers::UpdateBuffersAtTime
          (FGroomCacheStreamedBuffers *this,float param_1,bool param_2)

{
  longlong *lpCriticalSection;
  float fVar1;
  uint uVar2;
  UGroomCache *this_00;
  int iVar3;
  IGroomCacheStreamingManager *pIVar4;
  longlong lVar5;
  FGroomCacheAnimationData *pFVar6;
  int iVar7;
  bool bVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FGroomCacheStreamedBuffers::UpdateBuffersAtTime(float,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1376,
               "FGroomCacheStreamedBuffers::UpdateBuffersAtTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
               ,0x560);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FGroomCacheStreamedBuffers::UpdateBuffersAtTime(float,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1376);
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (UGroomCache *)this->_padding_;
  fVar10 = 0.0;
  uVar2 = (this_00->GroomCacheInfo).AnimationInfo.NumFrames;
  fVar11 = (this_00->GroomCacheInfo).AnimationInfo.Duration - __real_38d1b717;
  if ((uVar2 == 0) || (fVar11 == 0.0)) {
    iVar3 = 0;
    iVar7 = 0;
  }
  else {
    iVar3 = UGroomCache::GetFrameIndexAtTime(this_00,param_1,param_2);
    fVar1 = (this_00->GroomCacheInfo).AnimationInfo.SecondsPerFrame;
    iVar7 = uVar2 - 1;
    if (iVar3 + 1 < iVar7) {
      iVar7 = iVar3 + 1;
    }
    if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (param_2) {
        auVar9 = roundps(in_XMM2,ZEXT416((uint)(param_1 / fVar11)),1);
        fVar10 = param_1 - auVar9._0_4_ * fVar11;
      }
      else {
        fVar10 = (this_00->GroomCacheInfo).AnimationInfo.EndTime -
                 (this_00->GroomCacheInfo).AnimationInfo.StartTime;
        if (param_1 <= fVar10) {
          fVar10 = param_1;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
      }
      fVar10 = (fVar10 - (float)iVar3 * fVar1) / fVar1;
    }
  }
  *(float *)&this->_padding_ = fVar10;
  if (iVar3 != (int)this->_padding_) {
    if (iVar3 == *(int *)((longlong)&this->_padding_ + 4)) {
      pIVar4 = IGroomCacheStreamingManager::Get();
      lVar5 = (**(code **)(*(longlong *)pIVar4 + 0xb0))
                        (pIVar4,this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
      if (lVar5 != 0) {
        pIVar4 = IGroomCacheStreamingManager::Get();
        (**(code **)(*(longlong *)pIVar4 + 0xb8))(pIVar4,this->_padding_,(int)this->_padding_);
        this->CurrentFramePtr = this->NextFramePtr;
        *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
      }
    }
    else {
      pIVar4 = IGroomCacheStreamingManager::Get();
      pFVar6 = (FGroomCacheAnimationData *)
               (**(code **)(*(longlong *)pIVar4 + 0xb0))(pIVar4,this->_padding_,iVar3);
      if (pFVar6 != (FGroomCacheAnimationData *)0x0) {
        pIVar4 = IGroomCacheStreamingManager::Get();
        (**(code **)(*(longlong *)pIVar4 + 0xb8))(pIVar4,this->_padding_,(int)this->_padding_);
        this->CurrentFramePtr = pFVar6;
        *(int *)&this->_padding_ = iVar3;
      }
    }
  }
  if (iVar7 != *(int *)((longlong)&this->_padding_ + 4)) {
    pIVar4 = IGroomCacheStreamingManager::Get();
    pFVar6 = (FGroomCacheAnimationData *)
             (**(code **)(*(longlong *)pIVar4 + 0xb0))(pIVar4,this->_padding_,iVar7);
    if (pFVar6 != (FGroomCacheAnimationData *)0x0) {
      pIVar4 = IGroomCacheStreamingManager::Get();
      (**(code **)(*(longlong *)pIVar4 + 0xb8))
                (pIVar4,this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
      this->NextFramePtr = pFVar6;
      *(int *)((longlong)&this->_padding_ + 4) = iVar7;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

