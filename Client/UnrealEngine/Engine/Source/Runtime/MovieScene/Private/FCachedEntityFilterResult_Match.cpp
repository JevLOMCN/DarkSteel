// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Invalidate @ 1460d7580

void __thiscall
UE::MovieScene::FCachedEntityFilterResult_Match::Invalidate(FCachedEntityFilterResult_Match *this)

{
  (this->Cache).LastSystemVersion = 0;
  this->bContainsMatch = false;
  return;
}

// Matches @ 1460d9ec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FCachedEntityFilterResult_Match::Matches
          (FCachedEntityFilterResult_Match *this,FEntityManager *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = (this->Cache).LastSystemVersion;
  if ((uVar1 != 0) && (param_1->StructureMutationSystemSerialNumber <= uVar1)) {
    return this->bContainsMatch;
  }
  (this->Cache).LastSystemVersion = param_1->SystemSerialNumber;
  bVar2 = FEntityManager::Contains(param_1,&this->Filter);
  this->bContainsMatch = bVar2;
  return bVar2;
}

