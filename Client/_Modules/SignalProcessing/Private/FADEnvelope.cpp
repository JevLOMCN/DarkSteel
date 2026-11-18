// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// Attack @ 1444b6130

void __thiscall Audio::FADEnvelope::Attack(FADEnvelope *this)

{
  this->StartingEnvelopeValue = this->CurrentEnvelopeValue;
  this->CurrentSampleIndex = 0;
  return;
}

// GetNextEnvelopeOut @ 1444c0230

void __thiscall
Audio::FADEnvelope::GetNextEnvelopeOut
          (FADEnvelope *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,float *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  if ((0 < param_1) || (iVar5 = this->CurrentSampleIndex, iVar5 == -1)) {
    *param_4 = 0.0;
    return;
  }
  iVar1 = this->AttackSampleCount;
  if (iVar5 < iVar1) {
    this->CurrentSampleIndex = iVar5 + 1;
    fVar6 = powf((float)iVar5 / (float)iVar1,this->AttackCurveFactor);
    fVar6 = fVar6 * (__real_3f800000 - this->StartingEnvelopeValue) + this->StartingEnvelopeValue;
    this->CurrentEnvelopeValue = fVar6;
    *param_4 = fVar6;
    return;
  }
  if (iVar5 < this->DecaySampleCount + iVar1) {
    this->CurrentSampleIndex = iVar5 + 1;
    fVar6 = powf((float)(iVar5 - iVar1) / (float)this->DecaySampleCount,this->DecayCurveFactor);
    fVar6 = __real_3f800000 - fVar6;
    this->CurrentEnvelopeValue = fVar6;
    *param_4 = fVar6;
    return;
  }
  if (this->bIsLooping == false) {
    this->CurrentSampleIndex = -1;
    local_14[0] = 0;
    *param_4 = 0.0;
    pFVar2 = (param_3->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_14) &&
       ((FScriptContainerElement *)local_14 < pFVar2 + (longlong)param_3->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_14[0];
    return;
  }
  this->CurrentSampleIndex = 0;
  local_18 = 0;
  pFVar2 = (param_3->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)param_3->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar5 + 1;
  *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18;
  return;
}

// GetNextEnvelopeOut @ 1444c0490

void __thiscall
Audio::FADEnvelope::GetNextEnvelopeOut
          (FADEnvelope *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  float fVar8;
  int local_48 [12];
  
  fVar5 = __real_3f800000;
  if (this->CurrentSampleIndex != -1) {
    pFVar2 = (param_4->AllocatorInstance).Data;
    while (param_1 < param_2) {
      iVar7 = this->AttackSampleCount;
      iVar1 = this->CurrentSampleIndex;
      local_48[0] = param_1;
      if (iVar7 < iVar1) {
        if (iVar1 < this->DecaySampleCount + iVar7) {
          this->CurrentSampleIndex = iVar1 + 1;
          fVar8 = powf((float)(iVar1 - iVar7) / (float)this->DecaySampleCount,this->DecayCurveFactor
                      );
          this->CurrentEnvelopeValue = fVar8;
          *(float *)(pFVar2 + (longlong)param_1 * 4) = fVar8;
        }
        else {
          if (this->bIsLooping == false) {
            if (0 < param_2 - param_1) {
              memset(pFVar2 + (longlong)param_1 * 4,0,(longlong)(param_2 - param_1) << 2);
            }
            this->CurrentSampleIndex = -1;
            pFVar2 = (param_3->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
                ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)param_3->ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = param_3->ArrayNum;
            if (iVar7 == param_3->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar7 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_48[0];
            return;
          }
          this->StartingEnvelopeValue = this->CurrentEnvelopeValue;
          this->CurrentSampleIndex = 0;
          *(undefined4 *)(pFVar2 + (longlong)param_1 * 4) = 0;
          this->CurrentSampleIndex = this->CurrentSampleIndex + 1;
          pFVar3 = (param_3->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)param_3->ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == param_3->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar7 + 1;
          *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_48[0];
        }
      }
      else {
        this->CurrentSampleIndex = iVar1 + 1;
        fVar8 = powf((float)iVar1 / (float)iVar7,this->AttackCurveFactor);
        fVar8 = fVar8 * (fVar5 - this->StartingEnvelopeValue) + this->StartingEnvelopeValue;
        this->CurrentEnvelopeValue = fVar8;
        *(float *)(pFVar2 + (longlong)param_1 * 4) = fVar8;
      }
      param_1 = local_48[0] + 1;
    }
  }
  return;
}

// GetNextEnvelopeOut @ 1444c0770

bool __thiscall Audio::FADEnvelope::GetNextEnvelopeOut(FADEnvelope *this,float *param_1)

{
  bool bVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetNextEnvelopeOut(this,0,1,&local_18,param_1);
  bVar1 = 0 < local_18.ArrayNum;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// Init @ 1444c1920

void __thiscall Audio::FADEnvelope::Init(FADEnvelope *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = this->AttackTimeSeconds;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar3 = (float)param_1;
  this->AttackTimeSeconds = fVar1;
  this->SampleRate = fVar3;
  fVar2 = this->DecayTimeSeconds;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->AttackSampleCount = (int)(fVar1 * fVar3);
  this->DecayTimeSeconds = fVar2;
  this->DecaySampleCount = (int)(fVar2 * fVar3);
  return;
}

// SetAttackCurveFactor @ 1444e26a0

void __thiscall Audio::FADEnvelope::SetAttackCurveFactor(FADEnvelope *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->AttackCurveFactor;
  if (this->AttackCurveFactor <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  this->AttackCurveFactor = fVar1;
  return;
}

// SetAttackTimeSeconds @ 1444e2980

void __thiscall Audio::FADEnvelope::SetAttackTimeSeconds(FADEnvelope *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->AttackTimeSeconds = param_1;
  this->AttackSampleCount = (int)(param_1 * this->SampleRate);
  return;
}

// SetDecayCurveFactor @ 1444e3310

void __thiscall Audio::FADEnvelope::SetDecayCurveFactor(FADEnvelope *this,float param_1)

{
  if (param_1 <= __real_38d1b717) {
    param_1 = __real_38d1b717;
  }
  this->DecayCurveFactor = param_1;
  return;
}

// SetDecayTimeSeconds @ 1444e3380

void __thiscall Audio::FADEnvelope::SetDecayTimeSeconds(FADEnvelope *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->DecayTimeSeconds = param_1;
  this->DecaySampleCount = (int)(param_1 * this->SampleRate);
  return;
}

