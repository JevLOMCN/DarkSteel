// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// GetStrainedProxies @ 143e2cb10

FStrainedProxyRange * __thiscall
Chaos::FStrainModifierAccessor::GetStrainedProxies
          (FStrainModifierAccessor *this,FStrainedProxyRange *__return_storage_ptr__,bool param_1)

{
  FStrainedProxyRange::FStrainedProxyRange
            (__return_storage_ptr__,this->RigidClustering,param_1,this->StrainedParticles);
  return __return_storage_ptr__;
}

