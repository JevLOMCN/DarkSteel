// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator() @ 1420f00f0

bool __thiscall
FObjectMemoryAnalyzer::FCompareFSortBySize::operator()
          (FCompareFSortBySize *this,FObjectMemoryUsage *param_1,FObjectMemoryUsage *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(this->SortKey) {
  case InclusiveSize:
    return param_2->InclusiveMemoryUsage < param_1->InclusiveMemoryUsage;
  case ExclusiveSize:
    return param_2->ExclusiveMemoryUsage < param_1->ExclusiveMemoryUsage;
  case InclusiveResSize:
    return param_2->InclusiveResourceSize < param_1->InclusiveResourceSize;
  case ExclusiveResSize:
    return param_2->ExclusiveResourceSize < param_1->ExclusiveResourceSize;
  case InclusiveTotal:
    return param_2->InclusiveResourceSize * 0x400 + param_2->InclusiveMemoryUsage <
           param_1->InclusiveResourceSize * 0x400 + param_1->InclusiveMemoryUsage;
  case ExclusiveTotal:
    return param_2->ExclusiveResourceSize * 0x400 + param_2->ExclusiveMemoryUsage <
           param_1->ExclusiveResourceSize * 0x400 + param_1->ExclusiveMemoryUsage;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectMemoryAnalyzer.h"
                     ,0x7d,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

