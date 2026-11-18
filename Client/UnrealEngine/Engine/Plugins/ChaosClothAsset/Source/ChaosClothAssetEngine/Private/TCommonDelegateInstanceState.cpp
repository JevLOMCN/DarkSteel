// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// GetHandle @ 14dc4c470

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TObjectPtr<AActor>_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(TObjectPtr<AActor>_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14dc4c490

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::Chaos::ClothAsset::FSKMClothingSimulation_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

