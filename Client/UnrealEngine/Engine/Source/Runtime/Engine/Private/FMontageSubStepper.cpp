// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// Advance @ 1474baee0

EMontageSubStepResult __thiscall
FMontageSubStepper::Advance(FMontageSubStepper *this,float *param_1,FBranchingPointMarker **param_2)

{
  float fVar1;
  char cVar2;
  FAnimMontageInstance *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  EMontageSubStepResult EVar7;
  int iVar8;
  FCompositeSection *pFVar9;
  FBranchingPointMarker *pFVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float local_res8 [2];
  
  this->DeltaMove = 0.0;
  if ((this->MontageInstance == (FAnimMontageInstance *)0x0) ||
     (this->Montage == (UAnimMontage *)0x0)) {
    return InvalidMontage;
  }
  this->bReachedEndOfSection = false;
  iVar8 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(this->Montage,*param_1,local_res8);
  this->CurrentSectionIndex = iVar8;
  if (iVar8 < 0) {
    return InvalidSection;
  }
  if ((this->Montage->CompositeSections).ArrayNum <= iVar8) {
    return InvalidSection;
  }
  pFVar9 = UAnimMontage::GetAnimCompositeSection(this->Montage,iVar8);
  fVar13 = __real_bf800000;
  cVar2 = *(char *)((longlong)&pFVar9->_padding_ + 1);
  if (cVar2 == '\0') {
LAB_1474baf9b:
    fVar11 = *(float *)((longlong)&pFVar9->_padding_ + 4);
  }
  else {
    fVar11 = __real_bf800000;
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        fVar11 = *(float *)((longlong)&pFVar9->_padding_ + 4) +
                 *(float *)((longlong)&pFVar9->_padding_ + 4);
      }
      else {
        if (cVar2 != '\x02') goto LAB_1474baf9b;
        fVar11 = *(float *)((longlong)&pFVar9->_padding_ + 4) * *(float *)&pFVar9->_padding_ +
                 *(float *)((longlong)&pFVar9->_padding_ + 4);
      }
    }
  }
  this->CurrentSectionStartTime = fVar11;
  fVar11 = UAnimMontage::GetSectionLength(this->Montage,this->CurrentSectionIndex);
  pFVar3 = this->MontageInstance;
  this->CurrentSectionLength = fVar11;
  uVar5 = __xmm_80000000800000008000000080000000;
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_322bcc77;
  if (pFVar3->bPlaying == false) {
    return NotMoved;
  }
  if ((float)((uint)this->TimeRemaining & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
     ) {
    return NotMoved;
  }
  if ((pFVar3->ForcedNextToPosition).bIsSet == false) {
    fVar13 = *(float *)&this->Montage->_padding_ * pFVar3->PlayRate;
    this->PlayRate = fVar13;
    if ((float)((uint)fVar13 & uVar12) <= fVar11) {
      return NotMoved;
    }
    bVar6 = FTimeStretchCurve::IsValid(&this->Montage->TimeStretchCurve);
    if (((!bVar6) ||
        ((float)((uint)(this->PlayRate - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)
         <= fVar11)) ||
       (ConditionallyUpdateTimeStretchCurveCachedData(this),
       this->bHasValidTimeStretchCurveData == false)) {
      fVar11 = this->PlayRate * this->TimeRemaining;
      bVar6 = 0.0 < this->PlayRate;
      uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      goto LAB_1474bb20c;
    }
    fVar11 = FindMontagePosition_Target(this,*param_1);
    fVar13 = this->TimeRemaining;
    if (this->bPlayingForward == false) {
      fVar13 = (float)((uint)fVar13 ^ uVar5);
    }
    fVar13 = FTimeStretchCurveInstance::Clamp_P_Target
                       (&this->TimeStretchCurveInstance,fVar13 + fVar11);
    if ((this->bHasValidTimeStretchCurveData == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bHasValidTimeStretchCurveData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                           ,0x936,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    if (fVar13 != this->Cached_P_Target) {
      this->Cached_P_Target = fVar13;
      FTimeStretchCurveInstance::UpdateMarkerIndexForPosition
                (&this->TimeStretchCurveInstance,&this->TimeStretchMarkerIndex,fVar13,
                 &(this->TimeStretchCurveInstance).P_Marker_Target);
      fVar13 = FTimeStretchCurveInstance::Convert_P_Target_To_Original
                         (&this->TimeStretchCurveInstance,this->TimeStretchMarkerIndex,
                          this->Cached_P_Target);
      this->Cached_P_Original = fVar13;
    }
    uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar11 = this->Cached_P_Original - *param_1;
    this->PlayRate = fVar11 / this->TimeRemaining;
  }
  else {
    fVar11 = (pFVar3->ForcedNextToPosition).TypedValue;
    if ((pFVar3->ForcedNextFromPosition).bIsSet != false) {
      fVar1 = (pFVar3->ForcedNextFromPosition).TypedValue;
      *param_1 = fVar1;
      iVar8 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(this->Montage,fVar1,local_res8);
      this->CurrentSectionIndex = iVar8;
      if ((iVar8 < 0) || ((this->Montage->CompositeSections).ArrayNum <= iVar8)) {
        return InvalidSection;
      }
      pFVar9 = UAnimMontage::GetAnimCompositeSection(this->Montage,iVar8);
      cVar2 = *(char *)((longlong)&pFVar9->_padding_ + 1);
      if (cVar2 == '\0') {
LAB_1474bb088:
        fVar13 = *(float *)((longlong)&pFVar9->_padding_ + 4);
      }
      else if (cVar2 != '\0') {
        if (cVar2 == '\x01') {
          fVar13 = *(float *)((longlong)&pFVar9->_padding_ + 4) +
                   *(float *)((longlong)&pFVar9->_padding_ + 4);
        }
        else {
          if (cVar2 != '\x02') goto LAB_1474bb088;
          fVar13 = *(float *)((longlong)&pFVar9->_padding_ + 4) * *(float *)&pFVar9->_padding_ +
                   *(float *)((longlong)&pFVar9->_padding_ + 4);
        }
      }
      this->CurrentSectionStartTime = fVar13;
      fVar13 = UAnimMontage::GetSectionLength(this->Montage,this->CurrentSectionIndex);
      uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      this->CurrentSectionLength = fVar13;
    }
    fVar11 = fVar11 - *param_1;
    bVar6 = 0.0 <= fVar11;
    this->PlayRate = fVar11 / this->TimeRemaining;
LAB_1474bb20c:
    this->TimeStretchMarkerIndex = -1;
    this->bPlayingForward = bVar6;
  }
  this->DeltaMove = fVar11;
  if (param_2 != (FBranchingPointMarker **)0x0) {
    pFVar10 = UAnimMontage::FindFirstBranchingPointMarker(this->Montage,*param_1,*param_1 + fVar11);
    uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    *param_2 = pFVar10;
    if (pFVar10 != (FBranchingPointMarker *)0x0) {
      this->DeltaMove = pFVar10->TriggerTime - *param_1;
    }
  }
  fVar13 = this->DeltaMove;
  fVar11 = fVar13;
  if (this->bPlayingForward == false) {
    local_res8[0] = (float)((uint)local_res8[0] ^ uVar5);
    if (local_res8[0] < fVar13) goto LAB_1474bb293;
  }
  else {
    local_res8[0] = this->CurrentSectionLength - local_res8[0];
    if (fVar13 < local_res8[0]) goto LAB_1474bb293;
  }
  this->DeltaMove = local_res8[0];
  this->bReachedEndOfSection = true;
  fVar11 = local_res8[0];
LAB_1474bb293:
  if (((param_2 != (FBranchingPointMarker **)0x0) && (*param_2 != (FBranchingPointMarker *)0x0)) &&
     (fVar13 != fVar11)) {
    *param_2 = (FBranchingPointMarker *)0x0;
  }
  if ((float)((uint)this->DeltaMove & uVar12) <= 0.0) {
    return NotMoved;
  }
  *param_1 = this->DeltaMove + *param_1;
  fVar13 = this->DeltaMove / this->PlayRate;
  if ((fVar13 < 0.0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3541163122091882261>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                         ,0x8eb,"TimeStep >= 0.f"), bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  fVar13 = this->TimeRemaining - fVar13;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  this->TimeRemaining = fVar13;
  return Moved;
}

// ConditionallyUpdateTimeStretchCurveCachedData @ 1474c5250

void __thiscall
FMontageSubStepper::ConditionallyUpdateTimeStretchCurveCachedData(FMontageSubStepper *this)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float local_res8 [2];
  float local_res10 [2];
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  fVar6 = this->MontageInstance->PlayRate * *(float *)&this->Montage->_padding_;
  if (fVar6 != this->Cached_CombinedPlayRate) {
    fVar4 = (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    this->bHasValidTimeStretchCurveData = false;
    this->Cached_CombinedPlayRate = fVar6;
    if ((fVar4 <= fVar2) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3541163122091882233>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                           ,0x907,"!FMath::IsNearlyZero(CombinedPlayRate)"),
       uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff, bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((float)((uint)(fVar6 - __real_3f800000) & uVar5) <= fVar2) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3541163122091882232>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                           ,0x908,"!FMath::IsNearlyEqual(CombinedPlayRate, 1.f)"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->bPlayingForward = 0.0 < fVar6;
    FTimeStretchCurveInstance::InitializeFromPlayRate
              (&this->TimeStretchCurveInstance,fVar6,&this->Montage->TimeStretchCurve);
    uVar5 = (this->Montage->CompositeSections).ArrayNum;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    (this->SectionStartPositions_Target).ArrayNum = 0;
    if ((this->SectionStartPositions_Target).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&(this->SectionStartPositions_Target).AllocatorInstance,0,
                 &(this->SectionStartPositions_Target).ArrayMax);
    }
    local_res8[0] = -1.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init
              (&this->SectionStartPositions_Target,local_res8,uVar5);
    (this->SectionEndPositions_Target).ArrayNum = 0;
    if ((this->SectionEndPositions_Target).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&(this->SectionEndPositions_Target).AllocatorInstance,0,
                 &(this->SectionEndPositions_Target).ArrayMax);
    }
    local_res10[0] = -1.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init
              (&this->SectionEndPositions_Target,local_res10,uVar5);
    this->bHasValidTimeStretchCurveData = (this->TimeStretchCurveInstance).bHasValidData;
  }
  return;
}

// FindMontagePosition_Original @ 1474d3320

float __thiscall
FMontageSubStepper::FindMontagePosition_Original(FMontageSubStepper *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->bHasValidTimeStretchCurveData == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasValidTimeStretchCurveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0x936,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (param_1 != this->Cached_P_Target) {
    this->Cached_P_Target = param_1;
    FTimeStretchCurveInstance::UpdateMarkerIndexForPosition
              (&this->TimeStretchCurveInstance,&this->TimeStretchMarkerIndex,param_1,
               &(this->TimeStretchCurveInstance).P_Marker_Target);
    fVar3 = FTimeStretchCurveInstance::Convert_P_Target_To_Original
                      (&this->TimeStretchCurveInstance,this->TimeStretchMarkerIndex,
                       this->Cached_P_Target);
    this->Cached_P_Original = fVar3;
    return fVar3;
  }
  return this->Cached_P_Original;
}

// FindMontagePosition_Target @ 1474d33d0

float __thiscall
FMontageSubStepper::FindMontagePosition_Target(FMontageSubStepper *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->bHasValidTimeStretchCurveData == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasValidTimeStretchCurveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0x920,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (param_1 != this->Cached_P_Original) {
    this->Cached_P_Original = param_1;
    FTimeStretchCurveInstance::UpdateMarkerIndexForPosition
              (&this->TimeStretchCurveInstance,&this->TimeStretchMarkerIndex,param_1,
               &(this->TimeStretchCurveInstance).P_Marker_Original);
    fVar3 = FTimeStretchCurveInstance::Convert_P_Original_To_Target
                      (&this->TimeStretchCurveInstance,this->TimeStretchMarkerIndex,
                       this->Cached_P_Original);
    this->Cached_P_Target = fVar3;
    return fVar3;
  }
  return this->Cached_P_Target;
}

// GetCurrSectionEndPosition_Target @ 1474d8890

float __thiscall FMontageSubStepper::GetCurrSectionEndPosition_Target(FMontageSubStepper *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  if (this->bHasValidTimeStretchCurveData == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasValidTimeStretchCurveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0x95e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar1 = this->CurrentSectionIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->SectionEndPositions_Target).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar6 = *(float *)((this->SectionEndPositions_Target).AllocatorInstance.Data +
                    (longlong)(int)uVar1 * 4);
  if (fVar6 < 0.0) {
    fVar6 = this->CurrentSectionLength + this->CurrentSectionStartTime;
    iVar4 = FTimeStretchCurveInstance::BinarySearchMarkerIndex
                      (&this->TimeStretchCurveInstance,fVar6,
                       &(this->TimeStretchCurveInstance).P_Marker_Original);
    fVar6 = FTimeStretchCurveInstance::Convert_P_Original_To_Target
                      (&this->TimeStretchCurveInstance,iVar4,fVar6);
    uVar1 = this->CurrentSectionIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->SectionEndPositions_Target).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    *(float *)((this->SectionEndPositions_Target).AllocatorInstance.Data + (longlong)(int)uVar1 * 4)
         = fVar6;
  }
  return fVar6;
}

// GetCurrSectionStartPosition_Target @ 1474d89d0

float __thiscall FMontageSubStepper::GetCurrSectionStartPosition_Target(FMontageSubStepper *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  if (this->bHasValidTimeStretchCurveData == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bHasValidTimeStretchCurveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0x94c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar1 = this->CurrentSectionIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->SectionStartPositions_Target).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar6 = *(float *)((this->SectionStartPositions_Target).AllocatorInstance.Data +
                    (longlong)(int)uVar1 * 4);
  if (fVar6 < 0.0) {
    iVar4 = FTimeStretchCurveInstance::BinarySearchMarkerIndex
                      (&this->TimeStretchCurveInstance,this->CurrentSectionStartTime,
                       &(this->TimeStretchCurveInstance).P_Marker_Original);
    fVar6 = FTimeStretchCurveInstance::Convert_P_Original_To_Target
                      (&this->TimeStretchCurveInstance,iVar4,this->CurrentSectionStartTime);
    uVar1 = this->CurrentSectionIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->SectionStartPositions_Target).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    *(float *)((this->SectionStartPositions_Target).AllocatorInstance.Data +
              (longlong)(int)uVar1 * 4) = fVar6;
  }
  return fVar6;
}

// GetRemainingPlayTimeToSectionEnd @ 1474dde20

float __thiscall
FMontageSubStepper::GetRemainingPlayTimeToSectionEnd(FMontageSubStepper *this,float param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = __real_322bcc77;
  if ((float)((uint)this->PlayRate & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    return __real_7f7fc99e;
  }
  if (this->bPlayingForward == false) {
    fVar7 = this->CurrentSectionStartTime;
  }
  else {
    fVar7 = this->CurrentSectionLength + this->CurrentSectionStartTime;
  }
  if (this->TimeStretchMarkerIndex == -1) {
    fVar8 = (float)((uint)((fVar7 - param_1) / this->PlayRate) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  else {
    if ((this->bHasValidTimeStretchCurveData == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bHasValidTimeStretchCurveData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                           ,0x986,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
    fVar8 = FindMontagePosition_Target(this,param_1);
    if (this->bPlayingForward == false) {
      if (fVar6 < (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if ((this->bHasValidTimeStretchCurveData == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("bHasValidTimeStretchCurveData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                               ,0x94c,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
        uVar1 = this->CurrentSectionIndex;
        uVar5 = 0;
        if ((int)uVar1 < (this->SectionStartPositions_Target).ArrayNum) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
        fVar6 = *(float *)((this->SectionStartPositions_Target).AllocatorInstance.Data +
                          (longlong)(int)uVar1 * 4);
        if (fVar6 < 0.0) {
          iVar4 = FTimeStretchCurveInstance::BinarySearchMarkerIndex
                            (&this->TimeStretchCurveInstance,this->CurrentSectionStartTime,
                             &(this->TimeStretchCurveInstance).P_Marker_Original);
          fVar6 = FTimeStretchCurveInstance::Convert_P_Original_To_Target
                            (&this->TimeStretchCurveInstance,iVar4,this->CurrentSectionStartTime);
          uVar1 = this->CurrentSectionIndex;
          uVar5 = 0;
          if ((int)uVar1 < (this->SectionStartPositions_Target).ArrayNum) {
            uVar5 = ~uVar1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar6 = (float)(*pcVar2)();
            return fVar6;
          }
          *(float *)((this->SectionStartPositions_Target).AllocatorInstance.Data +
                    (longlong)(int)uVar1 * 4) = fVar6;
        }
        fVar8 = fVar8 - fVar6;
      }
    }
    else {
      if (fVar6 < (float)((uint)(fVar7 - (this->TimeStretchCurveInstance).T_Original) &
                         __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if ((this->bHasValidTimeStretchCurveData == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("bHasValidTimeStretchCurveData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                               ,0x95e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
        uVar1 = this->CurrentSectionIndex;
        uVar5 = 0;
        if ((int)uVar1 < (this->SectionEndPositions_Target).ArrayNum) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
        fVar6 = *(float *)((this->SectionEndPositions_Target).AllocatorInstance.Data +
                          (longlong)(int)uVar1 * 4);
        if (fVar6 < 0.0) {
          fVar6 = this->CurrentSectionLength + this->CurrentSectionStartTime;
          iVar4 = FTimeStretchCurveInstance::BinarySearchMarkerIndex
                            (&this->TimeStretchCurveInstance,fVar6,
                             &(this->TimeStretchCurveInstance).P_Marker_Original);
          fVar6 = FTimeStretchCurveInstance::Convert_P_Original_To_Target
                            (&this->TimeStretchCurveInstance,iVar4,fVar6);
          uVar1 = this->CurrentSectionIndex;
          uVar5 = 0;
          if ((int)uVar1 < (this->SectionEndPositions_Target).ArrayNum) {
            uVar5 = ~uVar1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            fVar6 = (float)(*pcVar2)();
            return fVar6;
          }
          *(float *)((this->SectionEndPositions_Target).AllocatorInstance.Data +
                    (longlong)(int)uVar1 * 4) = fVar6;
        }
      }
      else {
        fVar6 = (this->TimeStretchCurveInstance).T_Target;
      }
      fVar8 = fVar6 - fVar8;
    }
  }
  return fVar8;
}

// Initialize @ 1474e80f0

void __thiscall
FMontageSubStepper::Initialize(FMontageSubStepper *this,FAnimMontageInstance *param_1)

{
  this->MontageInstance = param_1;
  this->Montage = (UAnimMontage *)(param_1->Montage).field0_0x0;
  return;
}

