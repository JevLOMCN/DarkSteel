// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 5

// FSubmixEffectStereoToQuad @ 14f0b8ef0

FSubmixEffectStereoToQuad * __thiscall
FSubmixEffectStereoToQuad::FSubmixEffectStereoToQuad(FSubmixEffectStereoToQuad *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->field_0x70 = 0xffffffff;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &___7FSubmixEffectStereoToQuad__6B_;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x84 = 0xffffffff;
  (this->CurrentSettings).bFlipChannels = false;
  (this->CurrentSettings).RearChannelGain = 0.0;
  this->LinearGain = 1.0;
  (this->ScratchStereoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchStereoBuffer).ArrayNum = 0;
  (this->ScratchStereoBuffer).ArrayMax = 0;
  return this;
}

// ~FSubmixEffectStereoToQuad @ 14f0bf760

void __thiscall
FSubmixEffectStereoToQuad::~FSubmixEffectStereoToQuad(FSubmixEffectStereoToQuad *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FSubmixEffectStereoToQuad__6B_;
  pFVar1 = (this->ScratchStereoBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e5480

void __thiscall
FSubmixEffectStereoToQuad::Init(FSubmixEffectStereoToQuad *this,FSoundEffectSubmixInitData *param_1)

{
  return;
}

// OnPresetChanged @ 14f0efa50

void __thiscall FSubmixEffectStereoToQuad::OnPresetChanged(FSubmixEffectStereoToQuad *this)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  float fVar4;
  FSubmixEffectStereoToQuadSettings local_res8;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = USubmixEffectStereoToQuadPreset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      lpCriticalSection = &pUVar2[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_res8.bFlipChannels = (bool)pUVar2[3].field_0x18;
      local_res8._1_3_ = *(undefined3 *)&pUVar2[3].field_0x19;
      local_res8.RearChannelGain = *(float *)&pUVar2[3].field_0x1c;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0efad0;
    }
  }
  local_res8.bFlipChannels = false;
  local_res8._1_3_ = 0;
  local_res8.RearChannelGain = 0.0;
LAB_14f0efad0:
  fVar4 = __real_41200000;
  this->CurrentSettings = local_res8;
  fVar4 = powf(fVar4,(this->CurrentSettings).RearChannelGain * __real_3d4ccccd);
  this->LinearGain = fVar4;
  return;
}

// OnProcessAudio @ 14f0f11d0

void __thiscall
FSubmixEffectStereoToQuad::OnProcessAudio
          (FSubmixEffectStereoToQuad *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  memcpy((param_2->AudioBuffer->AllocatorInstance).Data,
         (param_1->AudioBuffer->AllocatorInstance).Data,
         (longlong)(param_1->NumFrames * param_1->NumChannels) << 2);
  iVar6 = param_1->NumChannels;
  if (2 < iVar6) {
    pFVar1 = (param_1->AudioBuffer->AllocatorInstance).Data;
    pFVar2 = (param_2->AudioBuffer->AllocatorInstance).Data;
    if (iVar6 == 4) {
      iVar6 = 2;
    }
    else if (iVar6 == 6) {
      iVar6 = 4;
    }
    else {
      if (iVar6 != 8) {
        return;
      }
      iVar6 = 6;
    }
    iVar3 = 0;
    if ((this->CurrentSettings).bFlipChannels == false) {
      if (0 < param_1->NumFrames) {
        do {
          iVar5 = iVar3 + 1;
          iVar3 = iVar3 * param_1->NumChannels;
          lVar4 = (longlong)(iVar3 + iVar6);
          *(float *)(pFVar2 + lVar4 * 4) =
               *(float *)(pFVar1 + (longlong)iVar3 * 4) * this->LinearGain +
               *(float *)(pFVar2 + lVar4 * 4);
          *(float *)(pFVar2 + lVar4 * 4 + 4) =
               *(float *)(pFVar1 + (longlong)iVar3 * 4 + 4) * this->LinearGain +
               *(float *)(pFVar2 + lVar4 * 4 + 4);
          iVar3 = iVar5;
        } while (iVar5 < param_1->NumFrames);
      }
    }
    else if (0 < param_1->NumFrames) {
      do {
        iVar5 = iVar3 + 1;
        iVar3 = iVar3 * param_1->NumChannels;
        lVar4 = (longlong)(iVar3 + iVar6);
        *(float *)(pFVar2 + lVar4 * 4 + 4) =
             *(float *)(pFVar1 + (longlong)iVar3 * 4) * this->LinearGain +
             *(float *)(pFVar2 + lVar4 * 4 + 4);
        *(float *)(pFVar2 + lVar4 * 4) =
             *(float *)(pFVar1 + (longlong)iVar3 * 4 + 4) * this->LinearGain +
             *(float *)(pFVar2 + lVar4 * 4);
        iVar3 = iVar5;
      } while (iVar5 < param_1->NumFrames);
      return;
    }
  }
  return;
}

