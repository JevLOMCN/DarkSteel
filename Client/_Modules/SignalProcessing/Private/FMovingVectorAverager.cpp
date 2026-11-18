// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// FMovingVectorAverager @ 144520e40

FMovingVectorAverager * __thiscall
Audio::FMovingVectorAverager::FMovingVectorAverager(FMovingVectorAverager *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovingVectorAverager *pFVar6;
  
  piVar1 = &(this->AudioBuffer).ArrayNum;
  piVar2 = &(this->AudioBuffer).ArrayMax;
  (this->AudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->AccumulatedSum).m128_u64[0] = 0;
  (this->AccumulatedSum).m128_u64[1] = 0;
  this->BufferCursor = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ProcessCriticalSection,4000);
  if ((param_1 & 3) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VoiceProcessing.cpp"
                       ,0x31,L"NumSamples must be divisible by 4!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMovingVectorAverager *)(*pcVar3)();
      return pFVar6;
    }
  }
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,(ForAnyElementType *)this,0,piVar2);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,param_1 >> 2,(ForAnyElementType *)this,piVar1,piVar2);
  memset((this->AudioBuffer).AllocatorInstance.Data + (longlong)iVar5 * 0x10,0,
         (ulonglong)(param_1 >> 2) << 4);
  return this;
}

// ProcessAudio @ 1445237b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
Audio::FMovingVectorAverager::ProcessAudio
          (FMovingVectorAverager *this,__m128 *param_1,__m128 *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pFVar3 = (this->AudioBuffer).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)this->BufferCursor * 0x10;
  uVar4 = *(ulong64 *)(pFVar1 + 8);
  param_2->m128_u64[0] = *(ulong64 *)pFVar1;
  param_2->m128_u64[1] = uVar4;
  uVar4 = param_1->m128_u64[1];
  pFVar3 = pFVar3 + (longlong)this->BufferCursor * 0x10;
  *(ulong64 *)pFVar3 = param_1->m128_u64[0];
  *(ulong64 *)(pFVar3 + 8) = uVar4;
  uVar8 = _UNK_15061cc7c;
  uVar7 = _UNK_15061cc78;
  uVar6 = _UNK_15061cc74;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar2 = (this->AudioBuffer).ArrayNum;
  this->BufferCursor = (this->BufferCursor + 1) % iVar2;
  fVar9 = ((float)(uVar5 & param_1->m128_u32[0]) - (float)(uVar5 & param_2->m128_u32[0])) +
          (this->AccumulatedSum).m128_f32[0];
  fVar10 = ((float)(uVar6 & param_1->m128_u32[1]) - (float)(uVar6 & param_2->m128_u32[1])) +
           (this->AccumulatedSum).m128_f32[1];
  fVar11 = ((float)(uVar7 & param_1->m128_u32[2]) - (float)(uVar7 & param_2->m128_u32[2])) +
           (this->AccumulatedSum).m128_f32[2];
  fVar12 = ((float)(uVar8 & param_1->m128_u32[3]) - (float)(uVar8 & param_2->m128_u32[3])) +
           (this->AccumulatedSum).m128_f32[3];
  (this->AccumulatedSum).m128_f32[0] = fVar9;
  (this->AccumulatedSum).m128_f32[1] = fVar10;
  (this->AccumulatedSum).m128_f32[2] = fVar11;
  (this->AccumulatedSum).m128_f32[3] = fVar12;
  return (fVar9 + fVar10 + fVar11 + fVar12) / (float)(iVar2 * 4);
}

