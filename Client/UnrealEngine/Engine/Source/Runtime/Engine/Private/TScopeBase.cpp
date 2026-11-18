// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetActive @ 1480d2760

void __thiscall
FRPCDoSDetection::TScopeBase<FRPCDoSDetection::FSequentialRPCScope>::SetActive
          (TScopeBase<FRPCDoSDetection::FSequentialRPCScope> *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((UE::Net::GRPCDoSScopeDebugging != 0) && (this->bScopeActive == param_1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1192164650855169127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                       ,0x399,"GRPCDoSScopeDebugging == 0 || bScopeActive != bInVal");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bScopeActive = param_1;
  *(undefined4 *)(this + 4) = 0;
  this[0x1008].bScopeActive = false;
  *(undefined8 *)(this + 0x1010) = 0;
  *(undefined8 *)(this + 0x1018) = 0;
  *(undefined8 *)(this + 0x1020) = 0;
  *(undefined4 *)(this + 0x1028) = 0;
  *(undefined8 *)(this + 0x1030) = 0;
  this[1].bScopeActive = true;
  return;
}

