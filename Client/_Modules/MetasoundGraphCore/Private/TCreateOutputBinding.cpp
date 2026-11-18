// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// operator() @ 14ad41f30

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 uVar1;
  FNameEntryId FVar2;
  uint uVar3;
  undefined8 *puVar4;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  uVar1 = *puVar4;
  FVar2.Value = (this->VertexName->ComparisonIndex).Value;
  uVar3 = this->VertexName->Number;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  *(uint *)&(__return_storage_ptr__->Vertex).field_0x8 = FVar2.Value;
  *(uint *)&(__return_storage_ptr__->Vertex).field_0xc = uVar3;
  *(undefined ***)&__return_storage_ptr__->Vertex = &___7FOutputDataVertex_Metasound__6B_;
  *(undefined8 *)&(__return_storage_ptr__->Vertex).field_0x10 = uVar1;
  *(undefined4 *)&(__return_storage_ptr__->Vertex).field_0x18 = 0;
  (__return_storage_ptr__->Data).bIsSet = false;
  return __return_storage_ptr__;
}

