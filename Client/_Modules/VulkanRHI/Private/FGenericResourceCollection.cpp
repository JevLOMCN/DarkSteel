// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// GetBindlessHandle @ 145bab9f0

FRHIDescriptorHandle __thiscall
UE::RHICore::FGenericResourceCollection::GetBindlessHandle(FGenericResourceCollection *this)

{
  FRHIDescriptorHandle in_RDX;
  
  (**(code **)(*(longlong *)(this->ShaderResourceView).Reference + 0x10))();
  return in_RDX;
}

