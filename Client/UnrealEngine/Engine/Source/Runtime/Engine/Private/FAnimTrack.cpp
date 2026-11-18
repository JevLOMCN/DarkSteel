// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticStruct @ 1473c7730

UScriptStruct * __cdecl FAnimTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimTrack.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimTrack,(UObject *)pUVar1,L"AnimTrack");
  }
  return Z_Registration_Info_UScriptStruct_FAnimTrack.OuterSingleton;
}

// ContainRecursive @ 1473f2640

bool __thiscall
FAnimTrack::ContainRecursive
          (FAnimTrack *this,TArray<UAnimCompositeBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  iVar1 = (this->AnimSegments).ArrayNum;
  this_00 = (this->AnimSegments).AllocatorInstance.Data;
  pFVar6 = this_00 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AnimSegments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar6) break;
    local_30 = param_1->ArrayNum;
    lVar7 = (longlong)local_30;
    _Src = (param_1->AllocatorInstance).Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src,lVar7 << 3);
    }
    if (*(longlong *)this_00 != 0) {
      pUVar5 = UAnimCompositeBase::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if (((bVar3) && (plVar2 = *(longlong **)this_00, plVar2 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar2 + 1000))(plVar2,&local_38), cVar4 != '\0')) {
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data);
        }
        return true;
      }
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    this_00 = this_00 + 0x20;
  }
  return false;
}

// EnableRootMotionSettingFromMontage @ 1473f9a90

void __thiscall
FAnimTrack::EnableRootMotionSettingFromMontage(FAnimTrack *this,bool param_1,Type param_2)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AnimSegments).ArrayNum;
  pFVar3 = (this->AnimSegments).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AnimSegments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x3c8))(plVar2,param_1,param_2);
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return;
}

// GetAnimNotifiesFromTrackPositions @ 1473ff500

void __thiscall
FAnimTrack::GetAnimNotifiesFromTrackPositions
          (FAnimTrack *this,float *param_1,float *param_2,FAnimNotifyContext *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (this->AnimSegments).ArrayNum;
  uVar4 = 0;
  if (0 < iVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->AnimSegments).AllocatorInstance.Data[lVar5 + 0x1c] != (FScriptContainerElement)0x0)
      {
        uVar3 = 0;
        if ((int)uVar4 < (this->AnimSegments).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FAnimSegment::GetAnimNotifiesFromTrackPositions
                  ((FAnimSegment *)
                   ((this->AnimSegments).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20),
                   param_1,param_2,param_3);
      }
      iVar6 = (this->AnimSegments).ArrayNum;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while ((int)uVar4 < iVar6);
  }
  return;
}

// GetAnimationPose @ 1473ffaf0

void __thiscall
FAnimTrack::GetAnimationPose
          (FAnimTrack *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  byte bVar5;
  FAnimSegment *this_00;
  UAnimSequenceBase *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  FAnimExtractContext local_a8 [2];
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_3f800000;
  fVar2 = __real_322bcc77;
  iVar1 = (this->AnimSegments).ArrayNum;
  pFVar7 = (this->AnimSegments).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x20;
  fVar9 = 0.0;
  while( true ) {
    fVar12 = fVar9;
    if ((this->AnimSegments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar8) break;
    fVar9 = fVar3;
    if (*(longlong *)pFVar7 != 0) {
      fVar9 = *(float *)(*(longlong *)pFVar7 + 0xa8);
    }
    fVar11 = fVar9 * *(float *)(pFVar7 + 0x14);
    if ((float)((uint)(fVar9 * *(float *)(pFVar7 + 0x14)) & uVar4) <= fVar2) {
      fVar11 = fVar3;
    }
    fVar9 = ((*(float *)(pFVar7 + 0x10) - *(float *)(pFVar7 + 0xc)) * (float)*(int *)(pFVar7 + 0x18)
            ) / (float)((uint)fVar11 & uVar4) + *(float *)(pFVar7 + 8);
    pFVar7 = pFVar7 + 0x20;
    if (fVar9 <= fVar12) {
      fVar9 = fVar12;
    }
  }
  dVar10 = (double)fVar12;
  if (param_2->CurrentTime <= (double)fVar12) {
    dVar10 = param_2->CurrentTime;
  }
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  this_00 = GetSegmentAtTime(this,(float)dVar10);
  if ((this_00 != (FAnimSegment *)0x0) && (this_00->bValid != false)) {
    local_res8[0] = 0.0;
    pUVar6 = FAnimSegment::GetAnimationData(this_00,(float)dVar10,local_res8);
    if (pUVar6 != (UAnimSequenceBase *)0x0) {
      FAnimExtractContext::FAnimExtractContext(local_a8,param_2);
      local_a8[0].CurrentTime = (double)local_res8[0];
      local_a8[0].DeltaTimeRecord.bPreviousIsValid = true;
      local_a8[0].DeltaTimeRecord.Previous =
           (float)(local_a8[0].CurrentTime - (double)local_a8[0].DeltaTimeRecord.Delta);
      bVar5 = (**(code **)(pUVar6->_padding_ + 0x340))(pUVar6);
      local_a8[0].bExtractRootMotion = (bool)(local_a8[0].bExtractRootMotion & bVar5);
      local_a8[0].bLooping = 1 < this_00->LoopingCount;
      (**(code **)(pUVar6->_padding_ + 0x330))(pUVar6,param_1,local_a8);
      if (local_a8[0].BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8[0].BonesRequired.AllocatorInstance.Data);
      }
      if (local_a8[0].PoseCurves.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_a8[0].PoseCurves.AllocatorInstance.Data);
      return;
    }
  }
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)param_1->Pose,
             ((FBaseCompactPose<TMemStackAllocator<0>_> *)param_1->Pose)->BoneContainer);
  return;
}

// GetLength @ 1474023e0

float __thiscall FAnimTrack::GetLength(FAnimTrack *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_3f800000;
  fVar2 = __real_322bcc77;
  iVar1 = (this->AnimSegments).ArrayNum;
  pFVar5 = (this->AnimSegments).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x20;
  fVar7 = 0.0;
  while( true ) {
    fVar9 = fVar7;
    if ((this->AnimSegments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    fVar7 = fVar3;
    if (*(longlong *)pFVar5 != 0) {
      fVar7 = *(float *)(*(longlong *)pFVar5 + 0xa8);
    }
    fVar8 = fVar7 * *(float *)(pFVar5 + 0x14);
    if ((float)((uint)(fVar7 * *(float *)(pFVar5 + 0x14)) & uVar4) <= fVar2) {
      fVar8 = fVar3;
    }
    fVar7 = ((*(float *)(pFVar5 + 0x10) - *(float *)(pFVar5 + 0xc)) * (float)*(int *)(pFVar5 + 0x18)
            ) / (float)((uint)fVar8 & uVar4) + *(float *)(pFVar5 + 8);
    pFVar5 = pFVar5 + 0x20;
    if (fVar7 <= fVar9) {
      fVar7 = fVar9;
    }
  }
  return fVar9;
}

// GetRootMotionExtractionStepsForTrackRange @ 147404930

void __thiscall
FAnimTrack::GetRootMotionExtractionStepsForTrackRange
          (FAnimTrack *this,TArray<FRootMotionExtractionStep,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (this->AnimSegments).ArrayNum;
  if (param_2 <= param_3) {
    uVar4 = 0;
    if (0 < iVar6) {
      do {
        uVar3 = 0;
        if ((int)uVar4 < iVar6) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FAnimSegment::GetRootMotionExtractionStepsForTrackRange
                  ((FAnimSegment *)
                   ((this->AnimSegments).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20),
                   param_1,param_2,param_3);
        iVar6 = (this->AnimSegments).ArrayNum;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar6);
    }
  }
  else {
    uVar4 = iVar6 - 1;
    if (-1 < (int)uVar4) {
      lVar5 = (longlong)(int)uVar4 << 5;
      do {
        uVar3 = 0;
        if ((int)uVar4 < (this->AnimSegments).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FAnimSegment::GetRootMotionExtractionStepsForTrackRange
                  ((FAnimSegment *)((this->AnimSegments).AllocatorInstance.Data + lVar5),param_1,
                   param_2,param_3);
        lVar5 = lVar5 + -0x20;
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
    }
  }
  return;
}

// GetSegmentAtTime @ 147404ae0

FAnimSegment * __thiscall FAnimTrack::GetSegmentAtTime(FAnimTrack *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FAnimSegment *pFVar5;
  
  uVar3 = GetSegmentIndexAtTime(this,param_1);
  pFVar5 = (FAnimSegment *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->AnimSegments).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAnimSegment *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = (FAnimSegment *)
             ((this->AnimSegments).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20);
  }
  return pFVar5;
}

// GetSegmentAtTime @ 147404b60

FAnimSegment * __thiscall FAnimTrack::GetSegmentAtTime(FAnimTrack *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FAnimSegment *pFVar5;
  
  uVar3 = GetSegmentIndexAtTime(this,param_1);
  pFVar5 = (FAnimSegment *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->AnimSegments).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAnimSegment *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = (FAnimSegment *)
             ((this->AnimSegments).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20);
  }
  return pFVar5;
}

// GetSegmentIndexAtTime @ 147404be0

int __thiscall FAnimTrack::GetSegmentIndexAtTime(FAnimTrack *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  uVar9 = (this->AnimSegments).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 5;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->AnimSegments).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      pFVar1 = (this->AnimSegments).AllocatorInstance.Data;
      if (*(float *)(pFVar1 + lVar10 + 8) <= param_1) {
        fVar11 = fVar4;
        if (*(longlong *)(pFVar1 + lVar10) != 0) {
          fVar11 = *(float *)(*(longlong *)(pFVar1 + lVar10) + 0xa8);
        }
        fVar12 = fVar11 * *(float *)(pFVar1 + lVar10 + 0x14);
        if ((float)((uint)(fVar11 * *(float *)(pFVar1 + lVar10 + 0x14)) & uVar5) <= fVar3) {
          fVar12 = fVar4;
        }
        if (param_1 <=
            ((*(float *)(pFVar1 + lVar10 + 0x10) - *(float *)(pFVar1 + lVar10 + 0xc)) *
            (float)*(int *)(pFVar1 + lVar10 + 0x18)) / (float)((uint)fVar12 & uVar5) +
            *(float *)(pFVar1 + lVar10 + 8)) {
          return uVar9;
        }
      }
      lVar10 = lVar10 + -0x20;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return -1;
}

// GetTotalBytesUsed @ 1474058e0

int __thiscall FAnimTrack::GetTotalBytesUsed(FAnimTrack *this)

{
  return (this->AnimSegments).ArrayMax << 5;
}

// GetTrackAdditiveType @ 1474058f0

int __thiscall FAnimTrack::GetTrackAdditiveType(FAnimTrack *this)

{
  longlong *plVar1;
  int iVar2;
  
  if ((0 < (this->AnimSegments).ArrayNum) &&
     (plVar1 = *(longlong **)(this->AnimSegments).AllocatorInstance.Data, plVar1 != (longlong *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x000147405904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*plVar1 + 0x3b8))();
    return iVar2;
  }
  return -1;
}

// HasRootMotion @ 147406060

bool __thiscall FAnimTrack::HasRootMotion(FAnimTrack *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AnimSegments).ArrayNum;
  pFVar3 = (this->AnimSegments).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AnimSegments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (((pFVar3[0x1c] != (FScriptContainerElement)0x0) && (*(longlong **)pFVar3 != (longlong *)0x0)
        ) && (cVar2 = (**(code **)(**(longlong **)pFVar3 + 0x340))(), cVar2 != '\0')) {
      return true;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return false;
}

// InvalidateRecursiveAsset @ 147407290

void __thiscall FAnimTrack::InvalidateRecursiveAsset(FAnimTrack *this,UAnimCompositeBase *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UAnimSequenceBase *pUVar3;
  char cVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  pFVar2 = (this->AnimSegments).AllocatorInstance.Data;
  iVar1 = (this->AnimSegments).ArrayNum;
  pFVar8 = pFVar2 + 0x1c;
LAB_1474072c4:
  do {
    if ((this->AnimSegments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimSegment,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 + -0x1c == pFVar2 + (longlong)iVar1 * 0x20) {
      return;
    }
    pUVar3 = *(UAnimSequenceBase **)(pFVar8 + -0x1c);
    if (pUVar3 == (UAnimSequenceBase *)0x0) {
LAB_147407389:
      FVar5 = (FScriptContainerElement)IsValidToAdd(this,pUVar3,(FText *)0x0);
      *pFVar8 = FVar5;
    }
    else {
      pUVar7 = UAnimCompositeBase::StaticClass();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) goto LAB_147407389;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = 0;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_38,(int *)((longlong)&local_30 + 4));
      local_30 = CONCAT44(local_30._4_4_,iVar6 + 1);
      *(UAnimCompositeBase **)(local_38.Data + (longlong)iVar6 * 8) = param_1;
      cVar4 = (**(code **)(pUVar3->_padding_ + 1000))(pUVar3,&local_38);
      if (cVar4 == '\0') {
        FVar5 = (FScriptContainerElement)IsValidToAdd(this,pUVar3,(FText *)0x0);
      }
      else {
        FVar5 = (FScriptContainerElement)0x0;
      }
      *pFVar8 = FVar5;
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
        pFVar8 = pFVar8 + 0x20;
        goto LAB_1474072c4;
      }
    }
    pFVar8 = pFVar8 + 0x20;
  } while( true );
}

// IsAdditive @ 147407540

bool __thiscall FAnimTrack::IsAdditive(FAnimTrack *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  char cVar3;
  
  if (0 < (this->AnimSegments).ArrayNum) {
    pFVar1 = (this->AnimSegments).AllocatorInstance.Data;
    plVar2 = *(longlong **)pFVar1;
    if ((plVar2 != (longlong *)0x0) && (pFVar1[0x1c] != (FScriptContainerElement)0x0)) {
      cVar3 = (**(code **)(*plVar2 + 0x2d0))();
      if (cVar3 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsNotifyAvailable @ 147407d50

bool __thiscall FAnimTrack::IsNotifyAvailable(FAnimTrack *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar8 = (this->AnimSegments).ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar1 = (this->AnimSegments).AllocatorInstance.Data;
      if ((pFVar1[lVar10 + 0x1c] != (FScriptContainerElement)0x0) &&
         (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar2 + 0x3d8))();
        if (cVar6 != '\0') {
          return true;
        }
      }
      iVar8 = (this->AnimSegments).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar9 < iVar8);
  }
  return false;
}

// IsRotationOffsetAdditive @ 147407f30

bool __thiscall FAnimTrack::IsRotationOffsetAdditive(FAnimTrack *this)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  if ((0 < (this->AnimSegments).ArrayNum) &&
     (plVar1 = *(longlong **)(this->AnimSegments).AllocatorInstance.Data, plVar1 != (longlong *)0x0)
     ) {
    cVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1);
    if (cVar2 != '\0') {
      iVar3 = (**(code **)(*plVar1 + 0x3b8))(plVar1);
      return iVar3 == 2;
    }
  }
  return false;
}

// IsValidToAdd @ 1474081f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnimTrack::IsValidToAdd(FAnimTrack *this,UAnimSequenceBase *param_1,FText *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  FText *pFVar5;
  UClass *pUVar6;
  UEnum *this_00;
  float fVar7;
  FName local_res10;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48 [2];
  
  if (param_1 == (UAnimSequenceBase *)0x0) {
    return true;
  }
  fVar7 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  if (0.0 < fVar7) {
    cVar2 = (**(code **)(param_1->_padding_ + 0x3c0))(param_1);
    if (cVar2 != '\0') {
      if (((this->AnimSegments).ArrayNum < 1) ||
         (plVar1 = *(longlong **)(this->AnimSegments).AllocatorInstance.Data,
         plVar1 == (longlong *)0x0)) {
        iVar3 = -1;
      }
      else {
        iVar3 = (**(code **)(*plVar1 + 0x3b8))();
      }
      iVar4 = (**(code **)(param_1->_padding_ + 0x3b8))(param_1);
      if (iVar3 == iVar4) {
        return true;
      }
      if (iVar3 == -1) {
        return true;
      }
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x1516b4b80;
      local_78.Data.ArrayNum = 0x25;
      pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
      local_68._12_4_ = local_78.Data.ArrayMax;
      local_68.Size = local_78.Data.ArrayNum;
      local_68.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
      this_00 = (UEnum *)StaticFindObject(pUVar6,(UObject *)0x0,&local_68,None);
      if (param_2 == (FText *)0x0) {
        return false;
      }
      UEnum::GetNameStringByValue(this_00,local_48,(longlong)iVar3);
      UEnum::GetNameStringByValue(this_00,&local_58,(longlong)iVar4);
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_88);
      ::FString::PrintfImpl
                (&local_78,
                 L"Animation Asset %s has an additive type %s that does not match the target\'s %s")
      ;
      pFVar5 = FText::FromString((FText *)&local_68,&local_78);
      FText::operator=(param_2,pFVar5);
      if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_68.DataPtr + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      return false;
    }
    if (2 < (byte)LogAnimation._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_1,(FString *)&local_68,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_68.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_68.DataPtr);
      }
    }
    if (param_2 == (FText *)0x0) {
      return false;
    }
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_88);
    ::FString::PrintfImpl
              (&local_78,L"Animation Asset %s cannot be used in an Animation Composite/Montage");
  }
  else {
    if (2 < (byte)LogAnimation._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 == (FText *)0x0) {
      return false;
    }
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_88);
    ::FString::PrintfImpl(&local_78,L"Animation Asset %s has invalid playable length of %f");
  }
  pFVar5 = FText::FromString((FText *)&local_68,&local_78);
  FText::operator=(param_2,pFVar5);
  if (local_68.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68.DataPtr + 0x10))();
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return false;
  }
  FMemory::Free(local_88.Data.AllocatorInstance.Data);
  return false;
}

// ValidateSegmentTimes @ 14741bce0

void __thiscall FAnimTrack::ValidateSegmentTimes(FAnimTrack *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  
  if (0 < (this->AnimSegments).ArrayNum) {
    uVar12 = 0;
    *(undefined4 *)((this->AnimSegments).AllocatorInstance.Data + 8) = 0;
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar7 = __real_3f800000;
    fVar6 = __real_322bcc77;
    iVar11 = (this->AnimSegments).ArrayNum;
    if (0 < iVar11) {
      lVar13 = -0x20;
      do {
        uVar10 = 0;
        if ((int)uVar12 < iVar11) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->AnimSegments).AllocatorInstance.Data;
        if (0 < (int)uVar12) {
          uVar10 = 0;
          if ((int)(uVar12 - 1) < (this->AnimSegments).ArrayNum) {
            uVar10 = -uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->AnimSegments).AllocatorInstance.Data;
          fVar16 = fVar7;
          if (*(longlong *)(pFVar3 + lVar13) != 0) {
            fVar16 = *(float *)(*(longlong *)(pFVar3 + lVar13) + 0xa8);
          }
          fVar14 = fVar16 * *(float *)(pFVar3 + lVar13 + 0x14);
          if ((float)((uint)(fVar16 * *(float *)(pFVar3 + lVar13 + 0x14)) & uVar8) <= fVar6) {
            fVar14 = fVar7;
          }
          iVar11 = *(int *)(pFVar3 + lVar13 + 0x18);
          fVar16 = *(float *)(pFVar3 + lVar13 + 0x10);
          fVar1 = *(float *)(pFVar3 + lVar13 + 0xc);
          uVar10 = 0;
          if ((int)(uVar12 - 1) < (this->AnimSegments).ArrayNum) {
            uVar10 = -uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(float *)(pFVar2 + lVar13 + 0x28) =
               ((fVar16 - fVar1) * (float)iVar11) / (float)((uint)fVar14 & uVar8) +
               *(float *)((this->AnimSegments).AllocatorInstance.Data + lVar13 + 8);
        }
        plVar4 = *(longlong **)(pFVar2 + lVar13 + 0x20);
        if ((plVar4 != (longlong *)0x0) &&
           (fVar16 = *(float *)(pFVar2 + lVar13 + 0x30),
           fVar14 = (float)(**(code **)(*plVar4 + 0x2c0))(plVar4), fVar14 < fVar16)) {
          uVar15 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
          *(undefined4 *)(pFVar2 + lVar13 + 0x30) = uVar15;
        }
        iVar11 = (this->AnimSegments).ArrayNum;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x20;
      } while ((int)uVar12 < iVar11);
    }
  }
  return;
}

