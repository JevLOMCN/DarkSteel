// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MathCore
// Functions: 1

// DefaultConstructItems<UE::MathCore::Graph::FStronglyConnectedComponent,int> @ 143329660

void __cdecl
DefaultConstructItems<UE::MathCore::Graph::FStronglyConnectedComponent,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

