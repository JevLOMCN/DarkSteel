// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// PopFrameCycles @ 145c6c290

EResult __thiscall
FRHIGPUFrameTimeHistory::PopFrameCycles
          (FRHIGPUFrameTimeHistory *this,FState *param_1,ulong64 *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  EResult EVar5;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->NextIndex;
    uVar4 = 0;
    EVar5 = Ok;
    uVar2 = param_1->NextIndex;
    if (uVar2 == uVar1) {
      EVar5 = Empty;
    }
    else {
      uVar3 = uVar1 - 0x10;
      if (uVar1 < 0x10) {
        uVar3 = uVar4;
      }
      if (uVar2 < uVar3) {
        param_1->NextIndex = uVar3 + 1;
        EVar5 = Disjoint;
        uVar4 = (this->History).Elements[(uint)uVar3 & 0xf];
      }
      else {
        param_1->NextIndex = uVar2 + 1;
        uVar4 = (this->History).Elements[(uint)uVar2 & 0xf];
      }
    }
    *param_2 = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PushFrameCycles @ 145c6e4e0

void __thiscall
FRHIGPUFrameTimeHistory::PushFrameCycles
          (FRHIGPUFrameTimeHistory *this,double param_1,ulong64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulong64 uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  
  lpCriticalSection = &this->CS;
  dVar4 = ((double)param_2 / param_1) / FGenericPlatformTime::SecondsPerCycle;
  dVar3 = ((double)param_2 / param_1) / FGenericPlatformTime::SecondsPerCycle64;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar5 = __real_43e0000000000000;
    uVar1 = this->NextIndex;
    lVar6 = 0;
    bVar2 = __real_43e0000000000000 <= dVar3;
    this->NextIndex = uVar1 + 1;
    if ((bVar2) && (dVar3 = dVar3 - dVar5, dVar3 < dVar5)) {
      lVar6 = -0x8000000000000000;
    }
    (this->History).Elements[(uint)uVar1 & 0xf] = (longlong)dVar3 + lVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    GGPUFrameTime = (int)dVar4;
    UNLOCK();
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

