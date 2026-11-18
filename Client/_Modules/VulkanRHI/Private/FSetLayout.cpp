// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// FSetLayout @ 145b002d0

FSetLayout * __thiscall
FVulkanDescriptorSetsLayoutInfo::FSetLayout::FSetLayout(FSetLayout *this,FSetLayout *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->LayoutBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LayoutBindings).ArrayMax;
  iVar2 = (param_1->LayoutBindings).ArrayNum;
  _Src = (param_1->LayoutBindings).AllocatorInstance.Data;
  (this->LayoutBindings).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->LayoutBindings).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
  }
  this->Hash = param_1->Hash;
  return this;
}

