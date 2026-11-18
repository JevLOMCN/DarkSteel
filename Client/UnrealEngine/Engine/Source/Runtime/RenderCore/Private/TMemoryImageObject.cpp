// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Freeze @ 145e9bca0

bool __thiscall
TMemoryImageObject<FShaderMapContent>::Freeze
          (TMemoryImageObject<FShaderMapContent> *this,FPointerTableBase *param_1)

{
  TMemoryImageObject<void> local_28;
  
  if ((this->FrozenSize == 0) && (this->Object != (FShaderMapContent *)0x0)) {
    FreezeMemoryImageObject(&local_28,this->Object,this->TypeDesc,param_1);
    if (this->Object != (FShaderMapContent *)0x0) {
      InternalDeleteObjectFromLayout
                (this->Object,this->TypeDesc,(FPointerTableBase *)0x0,this->FrozenSize != 0);
      if (this->FrozenSize != 0) {
        FMemory::Free(this->Object);
      }
    }
    this->Object = local_28.Object;
    this->FrozenSize = local_28.FrozenSize;
    return true;
  }
  return false;
}

