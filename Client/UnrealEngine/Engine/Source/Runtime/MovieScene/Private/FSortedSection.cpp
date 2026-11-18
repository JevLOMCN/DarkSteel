// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// SortByOverlapPriorityAndRow @ 1460f9dc0

bool __cdecl
UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection::SortByOverlapPriorityAndRow
          (FSortedSection *param_1,FSortedSection *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2->Section->RowIndex;
  iVar2 = param_1->Section->RowIndex;
  if (iVar2 == iVar1) {
    return param_2->Section->OverlapPriority < param_1->Section->OverlapPriority;
  }
  return iVar2 < iVar1;
}

