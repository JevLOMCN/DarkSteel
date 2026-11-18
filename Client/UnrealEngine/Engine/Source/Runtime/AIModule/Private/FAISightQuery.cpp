// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// SetTraceInfo @ 146fd2670

void __thiscall FAISightQuery::SetTraceInfo(FAISightQuery *this,FTraceHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)(param_1->field0_0x0)._Data.Index < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(TraceHandle._Data.Index & (static_cast<uint32>(1) << 31)) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\Perception\\AISense_Sight.h"
                       ,0xa7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)&this->field6_0x30 =
       *(uint *)&this->field6_0x30 & 1 | (param_1->field0_0x0)._Data.Index * 2;
  (this->field6_0x30).TraceInfo.FrameNumber = (param_1->field0_0x0)._Data.FrameNumber;
  return;
}

