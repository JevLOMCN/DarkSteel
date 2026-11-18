// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// BinarySearchKey @ 142480c80

FName __cdecl FCachedTypefaceData::FCachedFontData::BinarySearchKey(FCachedFontData *param_1)

{
  FName *in_RDX;
  
  param_1->Name = *in_RDX;
  return (FName)param_1;
}

// KeySortPredicate @ 14249b4c0

bool __cdecl FCachedTypefaceData::FCachedFontData::KeySortPredicate(FName *param_1,FName *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->ComparisonIndex).Value - (param_2->ComparisonIndex).Value;
  if (iVar1 == 0) {
    iVar1 = param_1->Number - param_2->Number;
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// SortPredicate @ 1424a7f60

bool __cdecl
FCachedTypefaceData::FCachedFontData::SortPredicate
          (FCachedFontData *param_1,FCachedFontData *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->Name).ComparisonIndex.Value - (param_2->Name).ComparisonIndex.Value;
  if (iVar1 == 0) {
    iVar1 = (param_1->Name).Number - (param_2->Name).Number;
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

