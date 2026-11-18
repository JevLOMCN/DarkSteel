// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedIgnoreStaticActorDestruction @ 148014960

FScopedIgnoreStaticActorDestruction * __thiscall
UE::Net::FScopedIgnoreStaticActorDestruction::FScopedIgnoreStaticActorDestruction
          (FScopedIgnoreStaticActorDestruction *this)

{
  this->bCachedValue = Net::Private::bIgnoreStaticActorDestruction;
  Net::Private::bIgnoreStaticActorDestruction = true;
  return this;
}

// ~FScopedIgnoreStaticActorDestruction @ 148017ff0

void __thiscall
UE::Net::FScopedIgnoreStaticActorDestruction::~FScopedIgnoreStaticActorDestruction
          (FScopedIgnoreStaticActorDestruction *this)

{
  Net::Private::bIgnoreStaticActorDestruction = this->bCachedValue;
  return;
}

