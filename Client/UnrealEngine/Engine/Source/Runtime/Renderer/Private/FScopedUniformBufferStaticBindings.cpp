// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FScopedUniformBufferStaticBindings @ 144cad600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FScopedUniformBufferStaticBindings::~FScopedUniformBufferStaticBindings
          (FScopedUniformBufferStaticBindings *this)

{
  undefined1 auStack_a8 [32];
  FUniformBufferStaticBindings local_88;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.UniformBuffers.AllocatorInstance.InlineData[0] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[1] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[2] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[3] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[4] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[5] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[6] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[7] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[0] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[1] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[2] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[3] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[4] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[5] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[6] = '\0';
  local_88.Slots.AllocatorInstance.InlineData[7] = '\0';
  local_88.Slots.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_88.UniformBuffers.AllocatorInstance.InlineData[8] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[9] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[10] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0xb] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0xc] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0xd] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0xe] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0xf] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x10] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x11] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x12] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x13] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x14] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x15] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x16] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x17] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x18] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x19] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x1a] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x1b] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x1c] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x1d] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x1e] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x1f] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x20] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x21] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x22] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x23] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x24] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x25] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x26] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x27] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x28] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x29] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x2a] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x2b] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x2c] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x2d] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x2e] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x2f] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x30] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x31] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x32] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x33] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x34] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x35] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x36] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x37] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x38] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x39] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x3a] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x3b] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x3c] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x3d] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x3e] = '\0';
  local_88.UniformBuffers.AllocatorInstance.InlineData[0x3f] = '\0';
  local_88._108_4_ = 0;
  local_88.Slots.ArrayNum = 0;
  local_88.Slots.ArrayMax = 8;
  local_88.UniformBuffers.AllocatorInstance.SecondaryData = (ForElementType<FRHIUniformBuffer_*>)0x0
  ;
  local_88.UniformBuffers.ArrayNum = 0;
  local_88.UniformBuffers.ArrayMax = 8;
  local_88.SlotCount = 0;
  local_88.ShaderBindingLayout = (FRHIShaderBindingLayout *)0x0;
  FRHIComputeCommandList::SetStaticUniformBuffers(this->RHICmdList,&local_88);
  if (local_88.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_88.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_88.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_88.Slots.AllocatorInstance.SecondaryData);
  }
  OnScopeExit();
  return;
}

