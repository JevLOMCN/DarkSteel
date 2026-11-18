// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// TRefCountPtr<FVulkanShaderModule> @ 145b43ec0

TRefCountPtr<FVulkanShaderModule> * __thiscall
TRefCountPtr<FVulkanShaderModule>::TRefCountPtr<FVulkanShaderModule>
          (TRefCountPtr<FVulkanShaderModule> *this)

{
  this->Reference = (FVulkanShaderModule *)0x0;
  return this;
}

// ~TRefCountPtr<FVulkanShaderModule> @ 145b4c220

void __thiscall
TRefCountPtr<FVulkanShaderModule>::~TRefCountPtr<FVulkanShaderModule>
          (TRefCountPtr<FVulkanShaderModule> *this)

{
  longlong *plVar1;
  FVulkanShaderModule *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Reference;
  if (pFVar2 != (FVulkanShaderModule *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145b4c247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

