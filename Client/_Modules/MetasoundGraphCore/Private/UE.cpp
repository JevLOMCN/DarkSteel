// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// DeleterFunc<Metasound::FDirectedGraphAlgoAdapter> @ 14ad2bd70

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<Metasound::FDirectedGraphAlgoAdapter>(void *param_1)

{
  Metasound::FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter
            ((FDirectedGraphAlgoAdapter *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x260);
  return;
}

