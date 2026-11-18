// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// ShouldLog @ 14421bc40

bool __thiscall UE::Net::FIrisLogOnceTracker::ShouldLog(FIrisLogOnceTracker *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int local_res10 [2];
  uint local_res18 [2];
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  local_res10[0] = uVar2 + FVar1.Number;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int_&>
            (&this->LoggedHashes,local_res18,(bool *)local_res10);
  return true;
}

// ShouldLog @ 14421bca0

bool __thiscall UE::Net::FIrisLogOnceTracker::ShouldLog(FIrisLogOnceTracker *this,uint param_1)

{
  uint local_res10 [2];
  uint local_res18 [4];
  
  local_res10[0] = param_1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int_&>
            (&this->LoggedHashes,local_res18,(bool *)local_res10);
  return true;
}

