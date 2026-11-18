// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// FMovingAverager @ 144520d70

FMovingAverager * __thiscall
Audio::FMovingAverager::FMovingAverager(FMovingAverager *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = &(this->AudioBuffer).ArrayNum;
  piVar2 = &(this->AudioBuffer).ArrayMax;
  (this->AudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BufferCursor = 0;
  this->AccumulatedSum = 0.0;
  *piVar1 = 0;
  *piVar2 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ProcessCriticalSection,4000);
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar2);
  }
  uVar4 = 1;
  if (1 < param_1) {
    uVar4 = param_1;
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar4,(ForAnyElementType *)this,piVar1,piVar2);
  memset((this->AudioBuffer).AllocatorInstance.Data + (longlong)iVar3 * 4,0,
         (longlong)(int)uVar4 << 2);
  return this;
}

// ProcessInput @ 144524390

float __thiscall
Audio::FMovingAverager::ProcessInput(FMovingAverager *this,float *param_1,float *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  float fVar2;
  
  lpCriticalSection = &this->ProcessCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
    *param_2 = *(float *)(pFVar1 + (longlong)this->BufferCursor * 4);
    *(float *)(pFVar1 + (longlong)this->BufferCursor * 4) = *param_1;
    this->BufferCursor = (this->BufferCursor + 1) % (this->AudioBuffer).ArrayNum;
    fVar2 = ((float)((uint)*param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
            (float)((uint)*param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) + this->AccumulatedSum
    ;
    this->AccumulatedSum = fVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetNumSamples @ 144525420

void __thiscall Audio::FMovingAverager::SetNumSamples(FMovingAverager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = &this->ProcessCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->AudioBuffer).ArrayMax;
    (this->AudioBuffer).ArrayNum = 0;
    if ((this->AudioBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,piVar1);
    }
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1,(ForAnyElementType *)this,&(this->AudioBuffer).ArrayNum,piVar1);
    memset((this->AudioBuffer).AllocatorInstance.Data + (longlong)iVar2 * 4,0,
           (longlong)(int)param_1 << 2);
    this->AccumulatedSum = 0.0;
                    /* WARNING: Could not recover jumptable at 0x0001445254e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

