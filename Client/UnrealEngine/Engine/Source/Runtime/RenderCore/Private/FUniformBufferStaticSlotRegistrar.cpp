// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FUniformBufferStaticSlotRegistrar @ 145e83b90

FUniformBufferStaticSlotRegistrar * __thiscall
FUniformBufferStaticSlotRegistrar::FUniformBufferStaticSlotRegistrar
          (FUniformBufferStaticSlotRegistrar *this,wchar_t *param_1)

{
  int *piVar1;
  FName FVar2;
  uchar uVar3;
  int iVar4;
  FUniformBufferStaticSlotRegistry *this_00;
  FName *pFVar5;
  FName local_res8;
  
  this_00 = FUniformBufferStaticSlotRegistry::Get();
  pFVar5 = ::FName::FName(&local_res8,param_1);
  FVar2 = *pFVar5;
  uVar3 = FUniformBufferStaticSlotRegistry::FindSlotByName(this_00,FVar2);
  if (uVar3 == 0xff) {
    iVar4 = (this_00->SlotNames).ArrayNum;
    piVar1 = &(this_00->SlotNames).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this_00,piVar1);
    }
    (this_00->SlotNames).ArrayNum = iVar4 + 1;
    *(FName *)((this_00->SlotNames).AllocatorInstance.Data + (longlong)iVar4 * 8) = FVar2;
  }
  return this;
}

