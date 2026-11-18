// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// GetHash @ 14ab73860

ulong64 __thiscall UE::Mutable::Private::FOutputHashStream::GetHash(FOutputHashStream *this)

{
  return this->Hash;
}

// Write @ 14ab8e5d0

void __thiscall
UE::Mutable::Private::FOutputHashStream::Write
          (FOutputHashStream *this,void *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = CityHash64WithSeed(param_1,(uint)param_2,this->Hash);
  this->Hash = uVar1;
  return;
}

