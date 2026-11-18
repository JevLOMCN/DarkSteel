// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// GetStatId @ 14acc4030

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FThreadSafeStaticStatInner<FStat_STAT_EasyParticleCount,1>::GetStatId
          (FThreadSafeStaticStatInner<FStat_STAT_EasyParticleCount,1> *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res8;
  
  if (*(TAtomic<FMinimalName> *)this == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"STAT_EasyParticleCount");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)this,*pFVar1,L"UIParticle Count",
                       "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,false,false,
                       MCR_Invalid);
    in_RDX->Name = TVar2;
    return (TStatId)in_RDX;
  }
  in_RDX->Name = *(TAtomic<FMinimalName> *)this;
  return (TStatId)in_RDX;
}

