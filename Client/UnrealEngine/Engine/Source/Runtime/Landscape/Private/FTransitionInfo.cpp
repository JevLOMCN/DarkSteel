// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ToRHITransitionInfo @ 145f5f680

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHITransitionInfo * __thiscall
ULandscapeScratchRenderTarget::FTransitionInfo::ToRHITransitionInfo
          (FTransitionInfo *this,FRHITransitionInfo *__return_storage_ptr__)

{
  ERHIAccess EVar1;
  ERHIAccess EVar2;
  FRHITransitionInfo_u_8 FVar3;
  
  EVar1 = this->StateAfter;
  EVar2 = this->StateBefore;
  FVar3 = (FRHITransitionInfo_u_8)this->Resource->_padding_;
  *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0xffff;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0xffffffff;
  __return_storage_ptr__->field1_0x8 = FVar3;
  __return_storage_ptr__->Type = Texture;
  __return_storage_ptr__->AccessBefore = EVar2;
  __return_storage_ptr__->AccessAfter = EVar1;
  __return_storage_ptr__->Flags = None;
  (__return_storage_ptr__->CommitInfo).bIsSet = false;
  return __return_storage_ptr__;
}

