// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// HasRaytracingExtensions @ 145badb20

bool __thiscall
FOptionalVulkanDeviceExtensions::HasRaytracingExtensions(FOptionalVulkanDeviceExtensions *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->field0_0x0).Packed;
  if (((uVar1 >> 10 & 1) != 0) &&
     (((((uint)uVar1 & 0x2800) == 0x2800 || ((uVar1 >> 0xc & 1) != 0)) &&
      ((uVar1 & 0x17000004000) == 0x17000004000)))) {
    return true;
  }
  return false;
}

