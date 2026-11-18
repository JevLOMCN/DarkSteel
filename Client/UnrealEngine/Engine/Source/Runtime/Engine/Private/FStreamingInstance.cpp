// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FStreamingInstance @ 1487121e0

FStreamingInstance * __thiscall
UE::SVT::FStreamingInstance::FStreamingInstance
          (FStreamingInstance *this,uint param_1,int param_2,TArrayView<unsigned_int,int> *param_3,
          FStreamingInstanceRequest *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = param_3->DataPtr;
  iVar2 = param_3->ArrayNum;
  uVar3 = *(undefined4 *)&param_3->field_0xc;
  this->PreviousAverageRequestIssueTime = 0.0;
  (this->MipLevelStreamingSizes).DataPtr = puVar1;
  (this->MipLevelStreamingSizes).ArrayNum = iVar2;
  *(undefined4 *)&(this->MipLevelStreamingSizes).field_0xc = uVar3;
  this->AverageRequestIssueTime = 0.0;
  fVar4 = __real_7f7fffff;
  this->UpdateIndex = 0;
  this->PreviousAverageFrame = -1.0;
  this->AverageFrame = -1.0;
  this->EstimatedFrameRate = 0.0;
  this->NumRequestsThisUpdate = 0;
  this->Key = param_1;
  this->NumFrames = param_2;
  this->DeltaTime = 0.0;
  this->LowestRequestedMip = 3.4028235e+38;
  this->LowestRequestedBlockingMip = 3.4028235e+38;
  this->LowestMipInBandwidthBudget = 0.0;
  this->bPlayForwards = false;
  this->bPlayBackwards = false;
  this->bIsBlocking = false;
  this->PreviousAverageRequestIssueTime = param_4->Time;
  this->AverageRequestIssueTime = param_4->Time;
  this->UpdateIndex = param_4->UpdateIndex;
  this->PreviousAverageFrame = param_4->FrameIndex;
  this->AverageFrame = param_4->FrameIndex;
  this->NumRequestsThisUpdate = 1;
  fVar5 = fVar4;
  if ((param_4->Flags & Blocking) == None) {
    fVar5 = param_4->MipLevel;
  }
  this->LowestRequestedMip = fVar5;
  if ((param_4->Flags & Blocking) != None) {
    fVar4 = param_4->MipLevel;
  }
  this->LowestRequestedBlockingMip = fVar4;
  if ((param_4->Flags & HasFrameRate) == None) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = param_4->FrameRate;
  }
  this->EstimatedFrameRate = fVar4;
  this->bPlayForwards = true;
  this->bIsBlocking = (bool)(param_4->Flags & Blocking);
  return this;
}

// AddRequest @ 14871ff00

void __thiscall
UE::SVT::FStreamingInstance::AddRequest(FStreamingInstance *this,FStreamingInstanceRequest *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  if (this->UpdateIndex < param_1->UpdateIndex) {
    this->PreviousAverageRequestIssueTime = this->AverageRequestIssueTime;
    this->UpdateIndex = param_1->UpdateIndex;
    this->PreviousAverageFrame = this->AverageFrame;
    this->NumRequestsThisUpdate = 0;
    this->LowestRequestedMip = 3.4028235e+38;
    this->LowestRequestedBlockingMip = 3.4028235e+38;
    this->bPlayForwards = false;
    this->bPlayBackwards = false;
    this->bIsBlocking = false;
  }
  iVar1 = this->NumRequestsThisUpdate;
  if (iVar1 == 0) {
    fVar4 = param_1->FrameIndex;
  }
  else {
    iVar2 = this->NumFrames;
    fVar7 = this->AverageFrame;
    fVar5 = param_1->FrameIndex;
    fVar4 = GetShortestWrappedDistance(fVar5,fVar7,iVar2);
    if ((float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        (float)((uint)(fVar5 - fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (fVar4 <= 0.0) {
        if (fVar4 < 0.0) {
          fVar7 = (float)iVar2 + fVar7;
        }
      }
      else {
        fVar5 = (float)iVar2 + fVar5;
      }
    }
    fVar6 = (float)iVar1;
    fVar4 = fVar6 + __real_3f800000;
    if (fVar4 <= __real_322bcc77) {
      fVar4 = __real_322bcc77;
    }
    fVar4 = (fVar6 * fVar7 + fVar5) / fVar4;
    if ((float)iVar2 <= fVar4) {
      fVar4 = fVar4 - (float)iVar2;
    }
  }
  this->AverageFrame = fVar4;
  fVar7 = (float)this->NumRequestsThisUpdate + __real_3f800000;
  dVar8 = param_1->Time;
  this->EstimatedFrameRate = 0.0;
  dVar8 = ((double)this->NumRequestsThisUpdate * this->AverageRequestIssueTime + dVar8) /
          (double)fVar7;
  this->AverageRequestIssueTime = dVar8;
  dVar8 = dVar8 - this->PreviousAverageRequestIssueTime;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  this->DeltaTime = dVar8;
  if (((param_1->Flags & HasFrameRate) == None) || (GSVTStreamingForceEstimateFrameRate != 0)) {
    if (0.0 < dVar8) {
      fVar7 = GetShortestWrappedDistance(fVar4,this->PreviousAverageFrame,this->NumFrames);
      this->EstimatedFrameRate =
           (float)((double)(float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) /
                  this->DeltaTime);
    }
  }
  else {
    this->EstimatedFrameRate = param_1->FrameRate;
  }
  fVar7 = param_1->MipLevel;
  if ((param_1->Flags & Blocking) == None) {
    if (this->LowestRequestedMip <= fVar7) {
      fVar7 = this->LowestRequestedMip;
    }
    this->LowestRequestedMip = fVar7;
  }
  else {
    if (this->LowestRequestedBlockingMip <= fVar7) {
      fVar7 = this->LowestRequestedBlockingMip;
    }
    this->LowestRequestedBlockingMip = fVar7;
  }
  fVar7 = GetShortestWrappedDistance(param_1->FrameIndex,this->PreviousAverageFrame,this->NumFrames)
  ;
  if ((this->bPlayForwards != false) || (0.0 < fVar7)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  this->bPlayForwards = bVar3;
  if ((this->bPlayBackwards != false) || (fVar7 < 0.0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  this->bPlayBackwards = bVar3;
  if ((this->bIsBlocking == false) && ((param_1->Flags & Blocking) == None)) {
    this->NumRequestsThisUpdate = this->NumRequestsThisUpdate + 1;
    this->bIsBlocking = false;
    return;
  }
  this->NumRequestsThisUpdate = this->NumRequestsThisUpdate + 1;
  this->bIsBlocking = true;
  return;
}

// ApplyDiscretization @ 1487225a0

long64 __cdecl UE::SVT::FStreamingInstance::ApplyDiscretization(long64 param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < GSVTStreamingRequestSizeGranularity) {
    iVar2 = GSVTStreamingRequestSizeGranularity;
  }
  lVar1 = param_1 + -1 + (longlong)iVar2;
  return lVar1 - lVar1 % (longlong)iVar2;
}

// ComputeLowestMipLevelInBandwidthBudget @ 14872c8d0

void __thiscall
UE::SVT::FStreamingInstance::ComputeLowestMipLevelInBandwidthBudget
          (FStreamingInstance *this,long64 param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_1 < 0) {
    this->LowestMipInBandwidthBudget = 0.0;
    return;
  }
  uVar6 = (this->MipLevelStreamingSizes).ArrayNum - 1;
  this->LowestMipInBandwidthBudget = (float)(int)uVar6;
  fVar4 = __real_bf000000;
  fVar3 = __real_3f800000;
  if (-1 < (int)uVar6) {
    lVar8 = (longlong)(int)uVar6 * 4;
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar6 < (this->MipLevelStreamingSizes).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar2 = this->EstimatedFrameRate;
      if (this->EstimatedFrameRate <= fVar3) {
        fVar2 = fVar3;
      }
      lVar9 = (longlong)
              ROUND(fVar4 - (float)*(uint *)((longlong)(this->MipLevelStreamingSizes).DataPtr +
                                            lVar8) * (fVar2 + fVar2)) >> 1;
      lVar10 = -lVar9;
      if (-param_1 != lVar9 && param_1 <= lVar10) {
        if ((lVar10 < lVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("MipStreamingBandwidth >= PrevMipStreamingBandwidth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                               ,0x87,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((param_1 < lVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("BandwidthBudget >= PrevMipStreamingBandwidth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                               ,0x88,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this->LowestMipInBandwidthBudget =
             (float)(int)(uVar6 + 1) -
             (float)((double)(param_1 - lVar11) / (double)(lVar10 - lVar11));
        return;
      }
      lVar8 = lVar8 + -4;
      uVar7 = uVar6 - 1;
      this->LowestMipInBandwidthBudget = (float)(int)uVar6;
      lVar11 = lVar10;
      uVar6 = uVar7;
    } while (-1 < (int)uVar7);
  }
  return;
}

// GetPrefetchMipLevel @ 14873e1d0

float __thiscall
UE::SVT::FStreamingInstance::GetPrefetchMipLevel
          (FStreamingInstance *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  
  lVar4 = GetStreamingSize(this,param_1);
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  iVar9 = 1;
  if (1 < GSVTStreamingRequestSizeGranularity) {
    iVar9 = GSVTStreamingRequestSizeGranularity;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  lVar10 = ((longlong)iVar9 -
           ((longlong)
            ROUND(__real_bfe0000000000000 -
                  ((double)(param_2 * (float)lVar4) + (double)(param_2 * (float)lVar4))) >> 1)) + -1
  ;
  lVar10 = lVar10 - lVar10 % (longlong)iVar9;
  uVar5 = (this->MipLevelStreamingSizes).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar7 = (longlong)(int)uVar5 * 4;
    uVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->MipLevelStreamingSizes).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar11 = (float)(*pcVar1)();
        return fVar11;
      }
      uVar8 = (ulonglong)*(uint *)(lVar7 + (longlong)(this->MipLevelStreamingSizes).DataPtr);
      if (lVar10 < (longlong)uVar8) {
        if ((uVar8 < uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("MipStreamingSize >= PrevMipStreamingSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                               ,0xb9,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          fVar11 = (float)(*pcVar1)();
          return fVar11;
        }
        if ((lVar10 < (longlong)uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrefetchStreamingSize >= PrevMipStreamingSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                               ,0xba,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          fVar11 = (float)(*pcVar1)();
          return fVar11;
        }
        return (float)(int)(uVar5 + 1) -
               (float)((double)(longlong)(lVar10 - uVar6) / (double)(longlong)(uVar8 - uVar6));
      }
      lVar7 = lVar7 + -4;
      uVar5 = uVar5 - 1;
      uVar6 = uVar8;
    } while (-1 < (int)uVar5);
  }
  return 0.0;
}

// GetRequestedBandwidth @ 14873ee60

long64 __thiscall
UE::SVT::FStreamingInstance::GetRequestedBandwidth(FStreamingInstance *this,bool param_1)

{
  longlong lVar1;
  long64 lVar2;
  int iVar3;
  float fVar4;
  
  if ((param_1) && (this->bIsBlocking != false)) {
    return 0;
  }
  lVar2 = GetStreamingSize(this,this->LowestRequestedMip);
  iVar3 = 1;
  if (1 < GSVTStreamingRequestSizeGranularity) {
    iVar3 = GSVTStreamingRequestSizeGranularity;
  }
  fVar4 = this->EstimatedFrameRate;
  if (this->EstimatedFrameRate <= __real_3f800000) {
    fVar4 = __real_3f800000;
  }
  lVar1 = ((longlong)iVar3 -
          ((longlong)ROUND(__real_bf000000 - (fVar4 + fVar4) * (float)lVar2) >> 1)) + -1;
  return lVar1 - lVar1 % (longlong)iVar3;
}

// GetShortestWrappedDistance @ 14873f5b0

float __cdecl
UE::SVT::FStreamingInstance::GetShortestWrappedDistance(float param_1,float param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)param_3;
  if ((fVar3 < 0.0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFramesF >= 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                         ,200,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  if (((param_2 < 0.0) || (fVar3 <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("From >= 0.0f && From < NumFramesF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                         ,0xc9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  if (((param_1 < 0.0) || (fVar3 <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("To >= 0.0f && To < NumFramesF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                         ,0xca,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  fVar4 = param_1 - param_2;
  fVar3 = fVar3 - (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (__real_80000000 <= fVar4) {
    if (fVar4 == __real_80000000) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    }
  }
  if ((float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar3 = fVar4;
  }
  return fVar3;
}

// GetStreamingSize @ 14873ffe0

long64 __thiscall
UE::SVT::FStreamingInstance::GetStreamingSize(FStreamingInstance *this,float param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long64 lVar8;
  uint *puVar9;
  int iVar10;
  float fVar11;
  undefined4 in_XMM1_Db;
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  
  iVar1 = (this->MipLevelStreamingSizes).ArrayNum;
  iVar10 = iVar1 + -1;
  iVar5 = (int)ROUND((param_1 + param_1) - __real_3f000000) >> 1;
  iVar6 = iVar10;
  if (iVar5 < iVar10) {
    iVar6 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar6) {
    iVar5 = iVar6;
  }
  iVar6 = -((int)ROUND(__real_bf000000 - (param_1 + param_1)) >> 1);
  if (iVar6 < iVar10) {
    iVar10 = iVar6;
  }
  iVar6 = 0;
  if (0 < iVar10) {
    iVar6 = iVar10;
  }
  if ((iVar5 < 0) || (iVar1 <= iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipLevelStreamingSizes.IsValidIndex(LowerMipLevelIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                       ,0xf8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar8 = (*pcVar3)();
      return lVar8;
    }
  }
  if ((iVar6 < 0) || ((this->MipLevelStreamingSizes).ArrayNum <= iVar6)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipLevelStreamingSizes.IsValidIndex(UpperMipLevelIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingInstance.cpp"
                       ,0xf9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar8 = (*pcVar3)();
      return lVar8;
    }
  }
  puVar9 = TArrayView<unsigned_int,int>::operator[](&this->MipLevelStreamingSizes,iVar6);
  uVar2 = *puVar9;
  puVar9 = TArrayView<unsigned_int,int>::operator[](&this->MipLevelStreamingSizes,iVar5);
  auVar13._4_4_ = in_XMM1_Db;
  auVar13._0_4_ = param_1;
  iVar10 = (int)param_1;
  fVar11 = param_1;
  if ((iVar10 != -0x80000000) && ((float)iVar10 != param_1)) {
    auVar13._8_4_ = in_XMM1_Db;
    auVar13._12_4_ = in_XMM1_Db;
    auVar12._8_8_ = auVar13._8_8_;
    auVar12._4_4_ = param_1;
    auVar12._0_4_ = param_1;
    uVar7 = movmskps((int)puVar9,auVar12);
    fVar11 = (float)(int)(iVar10 - (uVar7 & 1));
  }
  return (longlong)
         ((double)(param_1 - fVar11) * ((double)uVar2 - (double)*puVar9) + (double)*puVar9);
}

// GetWrappedWeightedAverage @ 148742540

float __cdecl
UE::SVT::FStreamingInstance::GetWrappedWeightedAverage
          (float param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  
  fVar1 = GetShortestWrappedDistance(param_1,param_3,param_5);
  if ((float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)(param_1 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (fVar1 <= 0.0) {
      if (fVar1 < 0.0) {
        param_3 = (float)param_5 + param_3;
      }
    }
    else {
      param_1 = (float)param_5 + param_1;
    }
  }
  fVar1 = param_2 + param_4;
  if (param_2 + param_4 <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  fVar1 = (param_1 * param_2 + param_3 * param_4) / fVar1;
  if ((float)param_5 <= fVar1) {
    fVar1 = fVar1 - (float)param_5;
  }
  return fVar1;
}

// IsFrameInWindow @ 14874b4a0

bool __thiscall UE::SVT::FStreamingInstance::IsFrameInWindow(FStreamingInstance *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if ((0.0 <= param_1) && (param_1 < (float)this->NumFrames)) {
    fVar1 = GetShortestWrappedDistance(this->AverageFrame,param_1,this->NumFrames);
    fVar2 = GSVTStreamingInstanceWindowSize;
    if (GSVTStreamingInstanceWindowSize <= __real_322bcc77) {
      fVar2 = __real_322bcc77;
    }
    return (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2;
  }
  return false;
}

