// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ~IVertexAnalyzer @ 14ad9ed90

void __thiscall Metasound::Frontend::IVertexAnalyzer::~IVertexAnalyzer(IVertexAnalyzer *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnOutputDataChanged);
  return;
}

