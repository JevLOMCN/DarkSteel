// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// FFrame @ 145be00f0

FFrame * __thiscall FOpenGLProfiler::FFrame::FFrame(FFrame *this,FOpenGLProfiler *param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  local_res8[0].s.LowPart = 0;
  (this->EventStream).First = (FChunk *)0x0;
  (this->EventStream).Current = (FChunk *)0x0;
  (this->EventStream).Queue.field0_0x0.Value = 0;
  (this->Calibration).CPUTimestamp = 0;
  (this->Calibration).CPUFrequency = 0;
  (this->Calibration).GLTimestamp = 0;
  this->EndWorkQuery = (FOpenGLRenderQuery *)0x0;
  this->FrameBoundaryEvent = (FFrameBoundary *)0x0;
  this->bDisjoint = false;
  if (param_1->bEnabled != false) {
    (*glGetInteger64v)(0x8e28,&(this->Calibration).GLTimestamp);
    QueryPerformanceCounter(local_res8);
    dVar1 = __real_43e0000000000000;
    dVar3 = __real_3ff0000000000000;
    lVar2 = 0;
    (this->Calibration).CPUTimestamp = CONCAT44(local_res8[0].s.HighPart,local_res8[0].s.LowPart);
    dVar3 = dVar3 / FGenericPlatformTime::SecondsPerCycle64;
    if ((dVar1 <= dVar3) && (dVar3 = dVar3 - dVar1, dVar3 < dVar1)) {
      lVar2 = -0x8000000000000000;
    }
    (this->Calibration).CPUFrequency = (longlong)dVar3 + lVar2;
  }
  return this;
}

