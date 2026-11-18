// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 4

// FSlowAdaptiveGainControl @ 144521090

FSlowAdaptiveGainControl * __thiscall
Audio::FSlowAdaptiveGainControl::FSlowAdaptiveGainControl
          (FSlowAdaptiveGainControl *this,float param_1,int param_2,float param_3,float param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &(this->PeakDetector).AudioBuffer.ArrayNum;
  (this->PeakDetector).AudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PeakDetector).AudioBuffer.ArrayMax;
  (this->PeakDetector).BufferCursor = 0;
  (this->PeakDetector).AccumulatedSum = 0.0;
  *piVar1 = 0;
  *piVar2 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PeakDetector).ProcessCriticalSection,4000);
  iVar4 = *piVar2;
  *piVar1 = 0;
  if (iVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar2);
  }
  iVar4 = 1;
  if (1 < (uint)param_2) {
    iVar4 = param_2;
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,(ForAnyElementType *)this,piVar1,piVar2);
  memset((this->PeakDetector).AudioBuffer.AllocatorInstance.Data + (longlong)iVar3 * 4,0,
         (longlong)iVar4 << 2);
  this->GainTarget = param_1;
  this->GainMin = param_3;
  this->GainMax = param_4;
  this->PreviousGain = 1.0;
  return this;
}

// GetTargetGain @ 144523400

float __thiscall
Audio::FSlowAdaptiveGainControl::GetTargetGain(FSlowAdaptiveGainControl *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->GainTarget / param_1;
  if (this->GainMax <= fVar1) {
    fVar1 = this->GainMax;
  }
  if (fVar1 <= this->GainMin) {
    fVar1 = this->GainMin;
  }
  return fVar1;
}

// ProcessAudio @ 144523850

float __thiscall
Audio::FSlowAdaptiveGainControl::ProcessAudio
          (FSlowAdaptiveGainControl *this,float *param_1,int param_2,float param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38 [3];
  
  lpCriticalSection = &(this->PeakDetector).ProcessCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar4 = (longlong)(this->PeakDetector).BufferCursor;
  pFVar1 = (this->PeakDetector).AudioBuffer.AllocatorInstance.Data;
  fVar5 = (float)(*(uint *)(pFVar1 + lVar4 * 4) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  *(float *)(pFVar1 + lVar4 * 4) = param_3;
  fVar5 = ((float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar5) +
          (this->PeakDetector).AccumulatedSum;
  (this->PeakDetector).BufferCursor =
       ((this->PeakDetector).BufferCursor + 1) % (this->PeakDetector).AudioBuffer.ArrayNum;
  (this->PeakDetector).AccumulatedSum = fVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar5 = this->GainTarget / fVar5;
  if (this->GainMax <= fVar5) {
    fVar5 = this->GainMax;
  }
  if (fVar5 <= this->GainMin) {
    fVar5 = this->GainMin;
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  local_38[0]._12_4_ = uStack_3c;
  local_38[0].ArrayNum = param_2;
  local_38[0].DataPtr = param_1;
  ArrayFade(local_38,this->PreviousGain,fVar5);
  this->PreviousGain = fVar5;
  return fVar5;
}

// SetAdaptiveRate @ 144525240

void __thiscall
Audio::FSlowAdaptiveGainControl::SetAdaptiveRate(FSlowAdaptiveGainControl *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = &(this->PeakDetector).ProcessCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->PeakDetector).AudioBuffer.ArrayMax;
    piVar1 = &(this->PeakDetector).AudioBuffer.ArrayMax;
    (this->PeakDetector).AudioBuffer.ArrayNum = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,piVar1);
    }
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1,(ForAnyElementType *)this,
                       &(this->PeakDetector).AudioBuffer.ArrayNum,piVar1);
    memset((this->PeakDetector).AudioBuffer.AllocatorInstance.Data + (longlong)iVar2 * 4,0,
           (longlong)param_1 << 2);
    (this->PeakDetector).AccumulatedSum = 0.0;
                    /* WARNING: Could not recover jumptable at 0x000144525301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

