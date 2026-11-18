// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 12

// FSubmixEffectTapDelay @ 14f0b8f60

FSubmixEffectTapDelay * __thiscall
FSubmixEffectTapDelay::FSubmixEffectTapDelay(FSubmixEffectTapDelay *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSubmixEffectTapDelay__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  (this->Params).bChanged = false;
  (this->Params).CurrentParams.MaximumDelayLength = 10000.0;
  (this->Params).CurrentParams.InterpolationTime = 400.0;
  (this->Params).CurrentParams.Taps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).CurrentParams.Taps.ArrayNum = 0;
  (this->Params).CurrentParams.Taps.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Params).CritSect,4000);
  this->SampleRate = 0.0;
  this->MaxDelayLineLength = 10000.0;
  (this->TargetTaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetTaps).ArrayNum = 0;
  (this->TargetTaps).ArrayMax = 0;
  (this->CurrentTaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentTaps).ArrayNum = 0;
  (this->CurrentTaps).ArrayMax = 0;
  this->TapIncrementsRemaining = 0;
  Audio::FDelay::FDelay(&this->DelayLine);
  return this;
}

// ~FSubmixEffectTapDelay @ 14f0bf7a0

void __thiscall FSubmixEffectTapDelay::~FSubmixEffectTapDelay(FSubmixEffectTapDelay *this)

{
  FScriptContainerElement *pFVar1;
  
  Audio::FDelay::~FDelay(&this->DelayLine);
  pFVar1 = (this->CurrentTaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetTaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Params).CritSect);
  pFVar1 = (this->Params).CurrentParams.Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// AddTap @ 14f0c9740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSubmixEffectTapDelay::AddTap(FSubmixEffectTapDelay *this,int param_1)

{
  int *piVar1;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FTapDelayInterpolationInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  TapDelayUtils::IdCount = TapDelayUtils::IdCount + 1;
  pTVar2 = &this->TargetTaps;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_68 = CONCAT31(local_68._1_3_,1);
  uStack_64 = 0x447a0000;
  uStack_60 = 0xc0400000;
  uStack_5c = 0;
  uStack_58 = 0;
  iStack_54 = param_1;
  if ((pFVar5 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)(this->TargetTaps).ArrayMax * 0x18))
  {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->TargetTaps).ArrayNum;
  piVar1 = &(this->TargetTaps).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&pTVar2->AllocatorInstance,piVar1);
  }
  local_40 = 0;
  (this->TargetTaps).ArrayNum = iVar9 + 1;
  uStack_38 = 0;
  uStack_34 = CONCAT31(uStack_34._1_3_,1);
  local_20 = 0;
  uStack_18 = 0;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pTVar3 = &this->CurrentTaps;
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  pFVar5 = pFVar6 + (longlong)iVar9 * 0x18;
  *(ulonglong *)pFVar5 = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_5c,uStack_60);
  uStack_48 = _UNK_15314de38;
  local_50 = ___xmm_472c4400000000000000000000000000;
  *(ulonglong *)(pFVar6 + (longlong)iVar9 * 0x18 + 0x10) = CONCAT44(iStack_54,uStack_58);
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  local_30 = local_50;
  uStack_28 = uStack_48;
  if ((pFVar5 <= (FScriptContainerElement *)&local_50) &&
     ((FScriptContainerElement *)&local_50 < pFVar5 + (longlong)(this->CurrentTaps).ArrayMax * 0x40)
     ) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar10 = (this->CurrentTaps).ArrayNum;
  piVar1 = &(this->CurrentTaps).ArrayMax;
  if (uVar10 == *piVar1) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x440,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->CurrentTaps).ArrayNum = uVar10 + 1;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  lVar11 = (longlong)(int)uVar10 * 0x40;
  *(undefined8 *)(pFVar5 + lVar11) = local_50;
  *(undefined8 *)(pFVar5 + lVar11 + 8) = uStack_48;
  *(undefined8 *)(pFVar5 + lVar11 + 0x10) = local_40;
  *(ulonglong *)(pFVar5 + lVar11 + 0x10 + 8) = CONCAT44(uStack_34,uStack_38);
  *(undefined8 *)(pFVar5 + lVar11 + 0x20) = local_30;
  *(undefined8 *)(pFVar5 + lVar11 + 0x20 + 8) = uStack_28;
  *(undefined8 *)(pFVar5 + lVar11 + 0x30) = local_20;
  *(ulonglong *)(pFVar5 + lVar11 + 0x30 + 8) = CONCAT44(uStack_14,uStack_18);
  uVar12 = 0;
  if ((int)uVar10 < (this->CurrentTaps).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  fVar4 = this->SampleRate;
  *(float *)(pFVar5 + lVar11 + 0xc) = fVar4;
  pFVar5[lVar11 + 0x1c] = (FScriptContainerElement)0x1;
  *(float *)(pFVar5 + lVar11 + 0x2c) = fVar4;
  pFVar5[lVar11 + 0x3c] = (FScriptContainerElement)0x1;
  this->bSettingsModified = true;
  return;
}

// Init @ 14f0e5490

void __thiscall
FSubmixEffectTapDelay::Init(FSubmixEffectTapDelay *this,FSoundEffectSubmixInitData *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1->SampleRate;
  fVar2 = this->MaxDelayLineLength * __real_3a83126f;
  this->SampleRate = fVar1;
  Audio::FDelay::Init(&this->DelayLine,fVar1,fVar2);
  return;
}

// OnPresetChanged @ 14f0efb20

void __thiscall FSubmixEffectTapDelay::OnPresetChanged(FSubmixEffectTapDelay *this)

{
  undefined1 *lpCriticalSection;
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  float fVar2;
  int iVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType _Src_00;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  float *pfVar10;
  ForAnyElementType *pFVar11;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  float fVar14;
  float local_a4;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> local_88;
  undefined4 local_78;
  float local_74;
  ForAnyElementType local_70;
  undefined8 local_68;
  float local_60;
  float local_5c;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> local_58 [3];
  
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar8 != (UObject *)0x0) {
    pUVar9 = USubmixEffectTapDelayPreset::StaticClass();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar9->_padding_)) goto LAB_14f0efb74;
  }
  pUVar8 = (UObject *)0x0;
LAB_14f0efb74:
  if (pUVar8 == (UObject *)0x0) {
    pfVar10 = &local_74;
    bVar6 = false;
    bVar5 = true;
    local_78 = 0x461c4000;
    local_74 = 400.0;
    pFVar11 = &local_70;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    fVar14 = __real_461c4000;
  }
  else {
    lpCriticalSection = &pUVar8[2].field_0x18;
    bVar6 = true;
    bVar5 = false;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_98 = *(int *)(pUVar8 + 4);
    lVar13 = (longlong)local_98;
    fVar14 = *(float *)&pUVar8[3].field_0x18;
    local_a4 = *(float *)&pUVar8[3].field_0x1c;
    _Src = *(void **)&pUVar8[3].field_0x20;
    local_a0.Data = (FScriptContainerElement *)0x0;
    if (local_98 == 0) {
      local_94 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,local_98,0,&local_a0,local_98,&local_94);
      memcpy(local_a0.Data,_Src,lVar13 * 0x18);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pfVar10 = &local_a4;
    pFVar11 = &local_a0;
  }
  pFVar4 = pFVar11->Data;
  pFVar11->Data = (FScriptContainerElement *)0x0;
  fVar2 = *pfVar10;
  local_58[0].ArrayNum = *(int *)&pFVar11[1].Data;
  local_58[0].ArrayMax = *(int *)((longlong)&pFVar11[1].Data + 4);
  pFVar11[1].Data = (FScriptContainerElement *)0x0;
  local_60 = fVar14;
  local_5c = fVar2;
  local_58[0].AllocatorInstance.Data = pFVar4;
  if (bVar5) {
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
  }
  if ((bVar6) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0.Data);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_90 = fVar14;
  local_8c = fVar2;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=(&local_88,local_58);
  lpCriticalSection_00 = &(this->Params).CritSect;
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    _Src_00.Data = local_88.AllocatorInstance.Data;
    (this->Params).CurrentParams.MaximumDelayLength = local_90;
    (this->Params).CurrentParams.InterpolationTime = local_8c;
    (this->Params).bChanged = true;
    pTVar12 = &(this->Params).CurrentParams.Taps;
    if (pTVar12 != &local_88) {
      iVar7 = local_88.ArrayNum;
      lVar13 = (longlong)local_88.ArrayNum;
      piVar1 = &(this->Params).CurrentParams.Taps.ArrayMax;
      iVar3 = *piVar1;
      (this->Params).CurrentParams.Taps.ArrayNum = local_88.ArrayNum;
      if ((local_88.ArrayNum == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,local_88.ArrayNum,iVar3,&pTVar12->AllocatorInstance,local_88.ArrayNum,
                   piVar1);
        if (iVar7 != 0) {
          memcpy((pTVar12->AllocatorInstance).Data,_Src_00.Data,lVar13 * 0x18);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnProcessAudio @ 14f0f1350

void __thiscall
FSubmixEffectTapDelay::OnProcessAudio
          (FSubmixEffectTapDelay *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  int *piVar1;
  FDelay *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_res8;
  float local_res20 [2];
  float local_88 [2];
  FScriptContainerElement *local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  
  UpdateParameters(this);
  piVar1 = &param_2->NumChannels;
  if ((param_1->NumChannels != param_2->NumChannels) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InData.NumChannels == OutData.NumChannels",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixEffectTapDelay.cpp"
                          ,0x5b,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar18 = (this->TargetTaps).ArrayNum;
  local_78 = (longlong)iVar18;
  local_70 = (this->TargetTaps).AllocatorInstance.Data;
  local_68 = (this->CurrentTaps).AllocatorInstance.Data;
  local_80 = (param_1->AudioBuffer->AllocatorInstance).Data;
  pFVar5 = (param_2->AudioBuffer->AllocatorInstance).Data;
  if (iVar18 != 0) {
    iVar18 = 0;
    local_res8 = 0;
    if (0 < param_2->AudioBuffer->ArrayNum) {
      this_00 = &this->DelayLine;
      do {
        if (0 < local_78) {
          pFVar12 = local_70 + 0x10;
          pFVar15 = local_68 + 0x24;
          lVar16 = local_78;
          do {
            if ((pFVar12[-0x10] == (FScriptContainerElement)0x1) ||
               (pFVar12[-0x10] == (FScriptContainerElement)0x2)) {
              fVar19 = *(float *)(pFVar15 + 0x14);
              if ((int)fVar19 < (int)*(float *)(pFVar15 + 0xc)) {
                *(int *)(pFVar15 + 0x14) = (int)fVar19 + 1;
                local_res20[0] =
                     ((float)(int)fVar19 * *(float *)(pFVar15 + 4)) /
                     (float)(int)*(float *)(pFVar15 + 0xc) + *(float *)(pFVar15 + -4);
                *(float *)pFVar15 = local_res20[0];
              }
              else {
                local_res20[0] = *(float *)pFVar15;
              }
              fVar19 = *(float *)(pFVar15 + -0xc);
              if ((int)fVar19 < (int)*(float *)(pFVar15 + -0x14)) {
                *(int *)(pFVar15 + -0xc) = (int)fVar19 + 1;
                fVar19 = ((float)(int)fVar19 * *(float *)(pFVar15 + -0x1c)) /
                         (float)(int)*(float *)(pFVar15 + -0x14) + *(float *)(pFVar15 + -0x24);
                *(float *)(pFVar15 + -0x20) = fVar19;
              }
              else {
                fVar19 = *(float *)(pFVar15 + -0x20);
              }
              local_88[0] = Audio::FDelay::ReadDelayAt(this_00,fVar19);
              TapDelayUtils::GetMultichannelPan
                        (local_88,(float *)pFVar12,local_res20,piVar1,
                         (float *)(pFVar5 + (longlong)iVar18 * 4));
            }
            else {
              iVar2 = *(int *)(pFVar12 + -4);
              iVar3 = *piVar1;
              fVar19 = *(float *)(pFVar15 + -0xc);
              if ((int)fVar19 < (int)*(float *)(pFVar15 + -0x14)) {
                *(int *)(pFVar15 + -0xc) = (int)fVar19 + 1;
                fVar19 = ((float)(int)fVar19 * *(float *)(pFVar15 + -0x1c)) /
                         (float)(int)*(float *)(pFVar15 + -0x14) + *(float *)(pFVar15 + -0x24);
                *(float *)(pFVar15 + -0x20) = fVar19;
              }
              else {
                fVar19 = *(float *)(pFVar15 + -0x20);
              }
              fVar20 = *(float *)(pFVar15 + 0x14);
              if ((int)fVar20 < (int)*(float *)(pFVar15 + 0xc)) {
                *(int *)(pFVar15 + 0x14) = (int)fVar20 + 1;
                fVar20 = ((float)(int)fVar20 * *(float *)(pFVar15 + 4)) /
                         (float)(int)*(float *)(pFVar15 + 0xc) + *(float *)(pFVar15 + -4);
                *(float *)pFVar15 = fVar20;
              }
              else {
                fVar20 = *(float *)pFVar15;
              }
              fVar19 = Audio::FDelay::ReadDelayAt(this_00,fVar19);
              lVar11 = (longlong)(iVar18 + iVar2 % iVar3);
              *(float *)(pFVar5 + lVar11 * 4) = fVar19 * fVar20 + *(float *)(pFVar5 + lVar11 * 4);
            }
            pFVar15 = pFVar15 + 0x40;
            pFVar12 = pFVar12 + 0x18;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        uVar4 = param_1->NumChannels;
        lVar11 = (longlong)(int)uVar4;
        lVar16 = 0;
        lVar17 = (longlong)local_res8;
        fVar19 = 0.0;
        if ((0 < (int)uVar4) && (7 < uVar4)) {
          fVar19 = 0.0;
          fVar20 = 0.0;
          fVar21 = 0.0;
          fVar22 = 0.0;
          fVar23 = 0.0;
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar26 = 0.0;
          uVar14 = uVar4 & 0x80000007;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
          }
          pFVar12 = local_80 + lVar17 * 4;
          do {
            lVar16 = lVar16 + 8;
            fVar19 = fVar19 + *(float *)pFVar12;
            fVar20 = fVar20 + *(float *)(pFVar12 + 4);
            fVar21 = fVar21 + *(float *)(pFVar12 + 8);
            fVar22 = fVar22 + *(float *)(pFVar12 + 0xc);
            pFVar15 = pFVar12 + 0x10;
            pFVar7 = pFVar12 + 0x14;
            pFVar8 = pFVar12 + 0x18;
            pFVar9 = pFVar12 + 0x1c;
            pFVar12 = pFVar12 + 0x20;
            fVar23 = fVar23 + *(float *)pFVar15;
            fVar24 = fVar24 + *(float *)pFVar7;
            fVar25 = fVar25 + *(float *)pFVar8;
            fVar26 = fVar26 + *(float *)pFVar9;
          } while (lVar16 < (int)(uVar4 - uVar14));
          fVar19 = fVar25 + fVar21 + fVar23 + fVar19 + fVar26 + fVar22 + fVar24 + fVar20;
        }
        if (lVar16 < lVar11) {
          if (3 < lVar11 - lVar16) {
            pFVar12 = local_80 + (lVar16 + 2 + lVar17) * 4;
            lVar13 = ((lVar11 - lVar16) - 4U >> 2) + 1;
            lVar16 = lVar16 + lVar13 * 4;
            do {
              fVar19 = fVar19 + *(float *)(pFVar12 + -8) + *(float *)(pFVar12 + -4) +
                       *(float *)pFVar12 + *(float *)(pFVar12 + 4);
              pFVar12 = pFVar12 + 0x10;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            if (lVar11 <= lVar16) goto LAB_14f0f168d;
          }
          lVar11 = lVar11 - lVar16;
          pFVar12 = local_80 + (lVar17 + lVar16) * 4;
          do {
            fVar19 = fVar19 + *(float *)pFVar12;
            pFVar12 = pFVar12 + 4;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
LAB_14f0f168d:
        Audio::FDelay::WriteDelayAndInc(this_00,fVar19);
        local_res8 = local_res8 + param_1->NumChannels;
        iVar18 = iVar18 + *piVar1;
      } while (iVar18 < param_2->AudioBuffer->ArrayNum);
    }
  }
  return;
}

// RemoveTap @ 14f0f7800

void __thiscall FSubmixEffectTapDelay::RemoveTap(FSubmixEffectTapDelay *this,int param_1)

{
  int *piVar1;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if (0 < (this->TargetTaps).ArrayNum) {
    pTVar2 = &this->TargetTaps;
    lVar11 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (this->TargetTaps).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)((pTVar2->AllocatorInstance).Data + lVar11 + 0x14) == param_1) {
        uVar7 = 0;
        if ((int)uVar9 < (this->TargetTaps).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = (this->TargetTaps).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar8 = iVar3 + ~uVar9;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar9 * 0x18,pFVar4 + (longlong)(iVar3 - iVar8) * 0x18,
                  (longlong)iVar8 * 0x18);
        }
        piVar1 = &(this->TargetTaps).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&pTVar2->AllocatorInstance,(this->TargetTaps).ArrayNum,
                   &(this->TargetTaps).ArrayMax);
        uVar7 = 0;
        if ((int)uVar9 < (this->CurrentTaps).ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = (this->CurrentTaps).ArrayNum;
        pFVar4 = (this->CurrentTaps).AllocatorInstance.Data;
        iVar8 = iVar3 + ~uVar9;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar9 * 0x40,pFVar4 + (longlong)(iVar3 - iVar8) * 0x40,
                  (longlong)iVar8 << 6);
        }
        piVar1 = &(this->CurrentTaps).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,4,&(this->CurrentTaps).AllocatorInstance,(this->CurrentTaps).ArrayNum,
                   &(this->CurrentTaps).ArrayMax);
        this->bSettingsModified = true;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar9 < (this->TargetTaps).ArrayNum);
  }
  return;
}

// SetEffectParameters @ 14f0fa480

void __thiscall
FSubmixEffectTapDelay::SetEffectParameters
          (FSubmixEffectTapDelay *this,FSubmixEffectTapDelaySettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).bChanged = true;
    (this->Params).CurrentParams.MaximumDelayLength = param_1->MaximumDelayLength;
    (this->Params).CurrentParams.InterpolationTime = param_1->InterpolationTime;
    TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
              (&(this->Params).CurrentParams.Taps,&param_1->Taps);
                    /* WARNING: Could not recover jumptable at 0x00014f0fa4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetInterpolationTime @ 14f0fcea0

void __thiscall
FSubmixEffectTapDelay::SetInterpolationTime(FSubmixEffectTapDelay *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * __real_3a83126f;
  this->bSettingsModified = true;
  this->InterpolationTime = fVar1;
  return;
}

// SetTap @ 14f102a70

void __thiscall
FSubmixEffectTapDelay::SetTap(FSubmixEffectTapDelay *this,int param_1,FTapDelayInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->TargetTaps).ArrayNum;
  pFVar3 = (this->TargetTaps).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->TargetTaps).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)(pFVar3 + 0x14) == param_1) {
      *pFVar3 = (FScriptContainerElement)param_2->TapLineMode;
      fVar4 = this->MaxDelayLineLength;
      if (param_2->DelayLength <= this->MaxDelayLineLength) {
        fVar4 = param_2->DelayLength;
      }
      if (fVar4 <= __real_3dcccccd) {
        fVar4 = __real_3dcccccd;
      }
      *(float *)(pFVar3 + 4) = fVar4;
      fVar4 = __real_41200000;
      *(float *)(pFVar3 + 0x10) = param_2->PanInDegrees;
      *(int *)(pFVar3 + 0xc) = param_2->OutputChannel;
      fVar4 = powf(fVar4,param_2->Gain * __real_3d4ccccd);
      *(float *)(pFVar3 + 8) = fVar4;
      this->bSettingsModified = true;
      return;
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// UpdateInterpolations @ 14f107640

void __thiscall FSubmixEffectTapDelay::UpdateInterpolations(FSubmixEffectTapDelay *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  
  fVar4 = __real_3dcccccd;
  uVar9 = 0;
  if (0 < (this->CurrentTaps).ArrayNum) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->TargetTaps).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->TargetTaps).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < (this->CurrentTaps).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->CurrentTaps).AllocatorInstance.Data;
      if (pFVar1[lVar10] == (FScriptContainerElement)0x2) {
        *(undefined4 *)(pFVar1 + lVar10 + 8) = 0;
      }
      else {
        fVar11 = *(float *)(pFVar1 + lVar10 + 4);
        if (this->MaxDelayLineLength <= *(float *)(pFVar1 + lVar10 + 4)) {
          fVar11 = this->MaxDelayLineLength;
        }
        if (fVar11 <= fVar4) {
          fVar11 = fVar4;
        }
        if (pFVar2[lVar8 + 0x1c] == (FScriptContainerElement)0x0) {
          iVar7 = (int)(this->InterpolationTime * *(float *)(pFVar2 + lVar8 + 0xc));
          *(int *)(pFVar2 + lVar8 + 0x10) = iVar7;
          *(undefined4 *)(pFVar2 + lVar8 + 0x18) = 0;
          if (iVar7 == 0) {
            *(float *)(pFVar2 + lVar8 + 4) = fVar11;
          }
          else {
            *(float *)(pFVar2 + lVar8) = *(float *)(pFVar2 + lVar8 + 4);
            *(float *)(pFVar2 + lVar8 + 8) = fVar11 - *(float *)(pFVar2 + lVar8 + 4);
          }
        }
        else {
          pFVar2[lVar8 + 0x1c] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar2 + lVar8 + 0x10) = 0;
          *(float *)(pFVar2 + lVar8 + 4) = fVar11;
          *(undefined4 *)(pFVar2 + lVar8 + 0x18) = 0;
        }
      }
      fVar11 = *(float *)(pFVar1 + lVar10 + 8);
      if (pFVar2[lVar8 + 0x3c] == (FScriptContainerElement)0x0) {
        iVar7 = (int)(this->InterpolationTime * *(float *)(pFVar2 + lVar8 + 0x2c));
        *(int *)(pFVar2 + lVar8 + 0x30) = iVar7;
        *(undefined4 *)(pFVar2 + lVar8 + 0x38) = 0;
        if (iVar7 == 0) {
          *(float *)(pFVar2 + lVar8 + 0x24) = fVar11;
        }
        else {
          *(float *)(pFVar2 + lVar8 + 0x20) = *(float *)(pFVar2 + lVar8 + 0x24);
          *(float *)(pFVar2 + lVar8 + 0x28) = fVar11 - *(float *)(pFVar2 + lVar8 + 0x24);
        }
      }
      else {
        pFVar2[lVar8 + 0x3c] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar2 + lVar8 + 0x30) = 0;
        *(float *)(pFVar2 + lVar8 + 0x24) = fVar11;
        *(undefined4 *)(pFVar2 + lVar8 + 0x38) = 0;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
      lVar8 = lVar8 + 0x40;
    } while ((int)uVar9 < (this->CurrentTaps).ArrayNum);
  }
  return;
}

// UpdateParameters @ 14f109240

void __thiscall FSubmixEffectTapDelay::UpdateParameters(FSubmixEffectTapDelay *this)

{
  int *piVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FTapDelayInterpolationInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> local_70 [4];
  
  lpCriticalSection = &(this->Params).CritSect;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Params).bChanged == false) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    (this->Params).bChanged = false;
    fVar5 = (this->Params).CurrentParams.MaximumDelayLength;
    fVar6 = (this->Params).CurrentParams.InterpolationTime;
    TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
              (local_70,&(this->Params).CurrentParams.Taps);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar18 = __real_3a83126f;
    if (fVar5 != this->MaxDelayLineLength) {
      Audio::FDelay::Init(&this->DelayLine,this->SampleRate,fVar5 * __real_3a83126f);
      this->MaxDelayLineLength = fVar5;
    }
    _Src.Data = local_70[0].AllocatorInstance.Data;
    pTVar3 = &this->TargetTaps;
    lVar16 = (longlong)local_70[0].ArrayNum;
    this->InterpolationTime = fVar6 * fVar18;
    if (local_70[0].ArrayNum == 0) {
      (this->TargetTaps).ArrayNum = 0;
      if ((this->TargetTaps).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,&pTVar3->AllocatorInstance,0,&(this->TargetTaps).ArrayMax);
      }
      (this->CurrentTaps).ArrayNum = 0;
      if ((this->CurrentTaps).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,4,0,&(this->CurrentTaps).AllocatorInstance,0,&(this->CurrentTaps).ArrayMax);
      }
      goto LAB_14f1096bb;
    }
    if (pTVar3 != local_70) {
      piVar1 = &(this->TargetTaps).ArrayMax;
      (this->TargetTaps).ArrayNum = local_70[0].ArrayNum;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,local_70[0].ArrayNum,*piVar1,&pTVar3->AllocatorInstance,local_70[0].ArrayNum
                 ,piVar1);
      memcpy((pTVar3->AllocatorInstance).Data,_Src.Data,lVar16 * 0x18);
    }
    uVar11 = (this->TargetTaps).ArrayNum;
    piVar1 = &(this->CurrentTaps).ArrayNum;
    iVar7 = *piVar1;
    uVar13 = (ulonglong)iVar7;
    pTVar4 = &this->CurrentTaps;
    iVar17 = uVar11 - iVar7;
    if (iVar7 < (int)uVar11) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40,4,iVar17,&pTVar4->AllocatorInstance,piVar1,
                          &(this->CurrentTaps).ArrayMax);
      DefaultConstructItems<FTapDelayInterpolationInfo,int>
                ((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 0x40,iVar17);
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if ((int)uVar11 < iVar7) {
        uVar15 = iVar7 - uVar11;
        if (((int)(uVar15 | uVar11) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (uVar15 != 0) {
          pFVar12 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x40;
          iVar10 = ((this->CurrentTaps).ArrayNum - uVar15) - uVar11;
          if (iVar10 != 0) {
            memmove(pFVar12,pFVar12 + (longlong)(int)uVar15 * 0x40,(longlong)iVar10 << 6);
          }
          piVar2 = &(this->CurrentTaps).ArrayNum;
          *piVar2 = *piVar2 - uVar15;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,4,&pTVar4->AllocatorInstance,(this->CurrentTaps).ArrayNum,
                     &(this->CurrentTaps).ArrayMax);
        }
      }
    }
    uVar14 = 0;
    if ((0 < iVar17) && (iVar7 < *piVar1)) {
      lVar16 = uVar13 << 6;
      do {
        uVar15 = (uint)uVar13;
        uVar11 = 0;
        if ((int)uVar15 < (this->CurrentTaps).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar12 = (pTVar4->AllocatorInstance).Data;
        uVar13 = (ulonglong)(uVar15 + 1);
        fVar5 = this->SampleRate;
        *(float *)(pFVar12 + lVar16 + 0xc) = fVar5;
        pFVar12[lVar16 + 0x1c] = (FScriptContainerElement)0x1;
        *(float *)(pFVar12 + lVar16 + 0x2c) = fVar5;
        pFVar12[lVar16 + 0x3c] = (FScriptContainerElement)0x1;
        lVar16 = lVar16 + 0x40;
      } while ((int)(uVar15 + 1) < *piVar1);
    }
    fVar6 = __real_41200000;
    fVar5 = __real_3d4ccccd;
    uVar13 = uVar14;
    if (0 < (this->TargetTaps).ArrayNum) {
      do {
        uVar15 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar15 < (this->TargetTaps).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar18 = powf(fVar6,*(float *)((pTVar3->AllocatorInstance).Data + uVar13 + 8) * fVar5);
        uVar11 = 0;
        if ((int)uVar15 < (this->TargetTaps).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar14 = (ulonglong)(uVar15 + 1);
        *(float *)((pTVar3->AllocatorInstance).Data + uVar13 + 8) = fVar18;
        uVar13 = uVar13 + 0x18;
      } while ((int)(uVar15 + 1) < (this->TargetTaps).ArrayNum);
    }
    this->bSettingsModified = true;
  }
  if (this->bSettingsModified != false) {
    UpdateInterpolations(this);
    this->bSettingsModified = false;
  }
LAB_14f1096bb:
  if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  return;
}

