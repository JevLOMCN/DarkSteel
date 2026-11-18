// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// Serialize @ 142b1cf80

void __thiscall
UE::AssetDataGather::Private::FChecksumArchiveWriter::Serialize
          (FChecksumArchiveWriter *this,void *param_1,long64 param_2)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1;
  local_18.Size = param_2;
  FChecksumArchiveBase::Save((FChecksumArchiveBase *)this,&local_18);
  return;
}

// Tell @ 142b22f10

long64 __thiscall
UE::AssetDataGather::Private::FChecksumArchiveWriter::Tell(FChecksumArchiveWriter *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)&this->field_0xa0;
  lVar2 = *(longlong *)&this->field_0x98;
  lVar3 = (**(code **)(**(longlong **)&this->field_0x90 + 0x28))();
  return lVar3 + (lVar1 - lVar2);
}

