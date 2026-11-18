// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// Read @ 14d3fce20

int __thiscall
`TraceServices::FAnalysisService::StartAnalysis'::__l2::FFileDataStream::Read
          (void *this,void *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  
  uVar1 = *(ulonglong *)((longlong)this + 0x10);
  if (uVar1 != 0) {
    if (uVar1 < param_2) {
      param_2 = (uint)uVar1;
    }
    *(ulonglong *)((longlong)this + 0x10) = uVar1 - param_2;
    cVar2 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))();
    if (cVar2 == '\0') {
      param_2 = 0;
    }
    return param_2;
  }
  return 0;
}

