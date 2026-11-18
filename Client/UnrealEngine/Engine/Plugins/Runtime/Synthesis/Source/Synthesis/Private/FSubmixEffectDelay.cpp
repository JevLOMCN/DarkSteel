// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 10

// FSubmixEffectDelay @ 14f0b88e0

FSubmixEffectDelay * __thiscall FSubmixEffectDelay::FSubmixEffectDelay(FSubmixEffectDelay *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSubmixEffectDelay__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  (this->Params).bChanged = false;
  (this->Params).CurrentParams.MaximumDelayLength = 2000.0;
  (this->Params).CurrentParams.InterpolationTime = 400.0;
  (this->Params).CurrentParams.DelayLength = 1000.0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Params).CritSect,4000);
  this->SampleRate = 0.0;
  this->MaxDelayLineLength = 10000.0;
  this->InterpolationTime = 0.0;
  this->TargetDelayLineLength = 5000.0;
  (this->InterpolationInfo).StartValue = 0.0;
  (this->InterpolationInfo).CurrentValue = 0.0;
  (this->InterpolationInfo).DeltaValue = 0.0;
  (this->InterpolationInfo).SampleRate = 44100.0;
  (this->InterpolationInfo).DurationTicks = 0;
  (this->InterpolationInfo).DefaultDurationTicks = 0;
  (this->InterpolationInfo).CurrentTick = 0;
  (this->InterpolationInfo).bIsInit = true;
  (this->DelayLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayLines).ArrayNum = 0;
  (this->DelayLines).ArrayMax = 0;
  return this;
}

// ~FSubmixEffectDelay @ 14f0bf570

void __thiscall FSubmixEffectDelay::~FSubmixEffectDelay(FSubmixEffectDelay *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSubmixEffectDelay__6B_;
  DestructItems<Audio::FDelay,int>
            ((FDelay *)(this->DelayLines).AllocatorInstance.Data,(this->DelayLines).ArrayNum);
  pFVar1 = (this->DelayLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Params).CritSect);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e5180

void __thiscall
FSubmixEffectDelay::Init(FSubmixEffectDelay *this,FSoundEffectSubmixInitData *param_1)

{
  float fVar1;
  
  fVar1 = param_1->SampleRate;
  this->SampleRate = fVar1;
  (this->InterpolationInfo).SampleRate = fVar1;
  (this->InterpolationInfo).bIsInit = true;
  return;
}

// OnNumChannelsChanged @ 14f0eb690

void __thiscall FSubmixEffectDelay::OnNumChannelsChanged(FSubmixEffectDelay *this,int param_1)

{
  int *piVar1;
  TArray<Audio::FDelay,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  piVar1 = &(this->DelayLines).ArrayNum;
  iVar7 = *piVar1;
  this_00 = &this->DelayLines;
  iVar9 = param_1 - iVar7;
  if (iVar7 < param_1) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,iVar9,&this_00->AllocatorInstance,piVar1,&(this->DelayLines).ArrayMax)
    ;
    DefaultConstructItems<Audio::FDelay,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x58,iVar9);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar7) {
      uVar8 = iVar7 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        TArray<Audio::FDelay,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,param_1,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&this_00->AllocatorInstance,(this->DelayLines).ArrayNum,
                   &(this->DelayLines).ArrayMax);
      }
    }
  }
  fVar4 = __real_3a83126f;
  if ((0 < iVar9) && (pFVar2 = (this_00->AllocatorInstance).Data, iVar7 < *piVar1)) {
    do {
      Audio::FDelay::Init((FDelay *)(pFVar2 + (longlong)iVar7 * 0x58),this->SampleRate,
                          this->MaxDelayLineLength * fVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar1);
  }
  return;
}

// OnPresetChanged @ 14f0eecf0

void __thiscall FSubmixEffectDelay::OnPresetChanged(FSubmixEffectDelay *this)

{
  undefined1 *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  undefined8 uVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  uVar6 = __real_44fa0000;
  uVar7 = __real_43c80000;
  fVar5 = __real_447a0000;
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = USubmixEffectDelayPreset::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    uVar6 = __real_44fa0000;
    uVar7 = __real_43c80000;
    fVar5 = __real_447a0000;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      lpCriticalSection = &pUVar3[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) goto LAB_14f0eedcb;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar1 = *(undefined8 *)&pUVar3[3].field_0x18;
      fVar5 = *(float *)&pUVar3[3].field_0x20;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar6 = (int)uVar1;
      uVar7 = (int)((ulonglong)uVar1 >> 0x20);
    }
  }
  lpCriticalSection_00 = &(this->Params).CritSect;
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    (this->Params).CurrentParams.MaximumDelayLength = (float)uVar6;
    (this->Params).CurrentParams.InterpolationTime = (float)uVar7;
    (this->Params).bChanged = true;
    (this->Params).CurrentParams.DelayLength = fVar5;
                    /* WARNING: Could not recover jumptable at 0x00014f0eedc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    return;
  }
LAB_14f0eedcb:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnProcessAudio @ 14f0f0000

void __thiscall
FSubmixEffectDelay::OnProcessAudio
          (FSubmixEffectDelay *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  int *piVar1;
  TArray<Audio::FDelay,TSizedDefaultAllocator<32>_> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  int local_res8;
  
  fVar21 = __real_3a83126f;
  uVar15 = param_1->NumChannels;
  piVar1 = &(this->DelayLines).ArrayNum;
  uVar13 = *piVar1;
  if (uVar13 != uVar15) {
    this_00 = &this->DelayLines;
    iVar17 = uVar15 - uVar13;
    if ((int)uVar13 < (int)uVar15) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x58,8,iVar17,&this_00->AllocatorInstance,piVar1,
                          &(this->DelayLines).ArrayMax);
      DefaultConstructItems<Audio::FDelay,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar12 * 0x58,iVar17);
    }
    else {
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if ((int)uVar15 < (int)uVar13) {
        uVar19 = uVar13 - uVar15;
        if (((int)(uVar19 | uVar15) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar19 != 0) {
          TArray<Audio::FDelay,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar15,uVar19);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,&this_00->AllocatorInstance,(this->DelayLines).ArrayNum,
                     &(this->DelayLines).ArrayMax);
        }
      }
    }
    if ((0 < iVar17) && (pFVar7 = (this_00->AllocatorInstance).Data, (int)uVar13 < *piVar1)) {
      do {
        Audio::FDelay::Init((FDelay *)(pFVar7 + (longlong)(int)uVar13 * 0x58),this->SampleRate,
                            this->MaxDelayLineLength * fVar21);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < *piVar1);
    }
  }
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Params).bChanged == false) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    fVar5 = (this->Params).CurrentParams.DelayLength;
    fVar3 = (this->Params).CurrentParams.MaximumDelayLength;
    uVar4 = (this->Params).CurrentParams.InterpolationTime;
    (this->Params).bChanged = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = this->MaxDelayLineLength;
    pFVar7 = (this->DelayLines).AllocatorInstance.Data;
    if (fVar3 <= __real_3ecccccd) {
      fVar3 = __real_3ecccccd;
    }
    this->MaxDelayLineLength = fVar3;
    this->InterpolationTime = (float)uVar4 * fVar21;
    SetDelayLineLength(this,fVar5);
    if ((fVar2 != this->MaxDelayLineLength) && (iVar17 = 0, 0 < *piVar1)) {
      do {
        Audio::FDelay::Init((FDelay *)(pFVar7 + (longlong)iVar17 * 0x58),this->SampleRate,
                            this->MaxDelayLineLength * fVar21);
        iVar17 = iVar17 + 1;
      } while (iVar17 < *piVar1);
    }
  }
  iVar17 = *piVar1;
  pFVar7 = (this->DelayLines).AllocatorInstance.Data;
  pFVar8 = (param_2->AudioBuffer->AllocatorInstance).Data;
  if ((iVar17 != 0) && (local_res8 = 0, 0 < param_2->AudioBuffer->ArrayNum)) {
    do {
      uVar15 = 0;
      lVar14 = 0;
      if (0 < (longlong)iVar17) {
        pFVar18 = pFVar8 + (longlong)local_res8 * 4;
        pFVar16 = pFVar7;
        do {
          uVar20 = (**(code **)(*(longlong *)pFVar16 + 8))(pFVar16);
          *(undefined4 *)pFVar18 = uVar20;
          uVar13 = 0;
          if ((int)uVar15 < (this->DelayLines).ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar9 = (this->DelayLines).AllocatorInstance.Data;
          iVar12 = (this->InterpolationInfo).DurationTicks;
          iVar6 = (this->InterpolationInfo).CurrentTick;
          if (iVar6 < iVar12) {
            (this->InterpolationInfo).CurrentTick = iVar6 + 1;
            fVar21 = ((float)iVar6 * (this->InterpolationInfo).DeltaValue) / (float)iVar12 +
                     (this->InterpolationInfo).StartValue;
            (this->InterpolationInfo).CurrentValue = fVar21;
          }
          else {
            fVar21 = (this->InterpolationInfo).CurrentValue;
          }
          Audio::FDelay::SetDelayMsec
                    ((FDelay *)(pFVar16 + ((longlong)pFVar9 - (longlong)pFVar7)),fVar21);
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 1;
          pFVar18 = pFVar18 + 4;
          pFVar16 = pFVar16 + 0x58;
        } while (lVar14 < iVar17);
      }
      local_res8 = local_res8 + param_2->NumChannels;
    } while (local_res8 < param_2->AudioBuffer->ArrayNum);
  }
  return;
}

// SetDelayLineLength @ 14f0f9fc0

void __thiscall FSubmixEffectDelay::SetDelayLineLength(FSubmixEffectDelay *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = this->MaxDelayLineLength;
  if (param_1 <= this->MaxDelayLineLength) {
    fVar4 = param_1;
  }
  if (fVar4 <= __real_3ecccccd) {
    fVar4 = __real_3ecccccd;
  }
  this->TargetDelayLineLength = fVar4;
  if ((this->InterpolationInfo).bIsInit != false) {
    (this->InterpolationInfo).bIsInit = false;
    (this->InterpolationInfo).DurationTicks = 0;
    (this->InterpolationInfo).CurrentTick = 0;
    (this->InterpolationInfo).CurrentValue = fVar4;
    return;
  }
  iVar3 = (int)(this->InterpolationTime * (this->InterpolationInfo).SampleRate);
  (this->InterpolationInfo).DurationTicks = iVar3;
  (this->InterpolationInfo).CurrentTick = 0;
  pfVar1 = &(this->InterpolationInfo).CurrentValue;
  if (iVar3 == 0) {
    *pfVar1 = fVar4;
    return;
  }
  fVar2 = *pfVar1;
  (this->InterpolationInfo).StartValue = fVar2;
  (this->InterpolationInfo).DeltaValue = fVar4 - fVar2;
  return;
}

// SetEffectParameters @ 14f0fa3b0

void __thiscall
FSubmixEffectDelay::SetEffectParameters
          (FSubmixEffectDelay *this,FSubmixEffectDelaySettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).bChanged = true;
    fVar1 = param_1->InterpolationTime;
    (this->Params).CurrentParams.MaximumDelayLength = param_1->MaximumDelayLength;
    (this->Params).CurrentParams.InterpolationTime = fVar1;
    (this->Params).CurrentParams.DelayLength = param_1->DelayLength;
                    /* WARNING: Could not recover jumptable at 0x00014f0fa408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetInterpolationTime @ 14f0fce10

void __thiscall FSubmixEffectDelay::SetInterpolationTime(FSubmixEffectDelay *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = param_1 * __real_3a83126f;
  fVar2 = this->TargetDelayLineLength;
  this->InterpolationTime = fVar4;
  if ((this->InterpolationInfo).bIsInit != false) {
    (this->InterpolationInfo).bIsInit = false;
    (this->InterpolationInfo).DurationTicks = 0;
    (this->InterpolationInfo).CurrentTick = 0;
    (this->InterpolationInfo).CurrentValue = fVar2;
    return;
  }
  iVar3 = (int)(fVar4 * (this->InterpolationInfo).SampleRate);
  (this->InterpolationInfo).DurationTicks = iVar3;
  (this->InterpolationInfo).CurrentTick = 0;
  pfVar1 = &(this->InterpolationInfo).CurrentValue;
  if (iVar3 == 0) {
    *pfVar1 = fVar2;
    return;
  }
  fVar4 = *pfVar1;
  (this->InterpolationInfo).StartValue = fVar4;
  (this->InterpolationInfo).DeltaValue = fVar2 - fVar4;
  return;
}

// UpdateParameters @ 14f109090

void __thiscall FSubmixEffectDelay::UpdateParameters(FSubmixEffectDelay *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Params).bChanged == false) {
                    /* WARNING: Could not recover jumptable at 0x00014f1091ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  fVar4 = (this->Params).CurrentParams.DelayLength;
  fVar2 = (this->Params).CurrentParams.MaximumDelayLength;
  uVar3 = (this->Params).CurrentParams.InterpolationTime;
  (this->Params).bChanged = false;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar6 = __real_3a83126f;
  fVar1 = this->MaxDelayLineLength;
  pFVar5 = (this->DelayLines).AllocatorInstance.Data;
  if (fVar2 <= __real_3ecccccd) {
    fVar2 = __real_3ecccccd;
  }
  fVar8 = (float)uVar3 * __real_3a83126f;
  this->MaxDelayLineLength = fVar2;
  this->InterpolationTime = fVar8;
  SetDelayLineLength(this,fVar4);
  if ((fVar1 != this->MaxDelayLineLength) && (iVar7 = 0, 0 < (this->DelayLines).ArrayNum)) {
    do {
      Audio::FDelay::Init((FDelay *)(pFVar5 + (longlong)iVar7 * 0x58),this->SampleRate,
                          this->MaxDelayLineLength * fVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this->DelayLines).ArrayNum);
  }
  return;
}

