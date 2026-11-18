// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// TryRead @ 141ec29a0

bool __thiscall
UE::AssetRegistry::FPackageCustomVersion::TryRead(FPackageCustomVersion *this,FCbFieldView *param_1)

{
  bool bVar1;
  bool bVar2;
  ulong64 uVar3;
  FCbFieldView local_58;
  void *local_48;
  longlong local_38;
  void *pvStack_30;
  TCbFieldIterator<FCbFieldView> local_20;
  
  FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)&local_20);
  local_58.TypeWithFlags = (undefined1)local_20._padding_;
  local_58.Error = local_20._padding_._1_1_;
  local_58._2_2_ = local_20._padding_._2_2_;
  local_58.NameLen = local_20._padding_._4_4_;
  local_58.Value = (void *)local_20._padding_;
  TCbFieldIterator<FCbFieldView>::operator++(&local_20);
  bVar1 = ::LoadFromCompactBinary(&local_58,&this->Key);
  local_38 = local_20._padding_;
  pvStack_30 = (void *)local_20._padding_;
  local_48 = local_20.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_20);
  local_58.TypeWithFlags = (undefined1)local_38;
  local_58.Error = local_38._1_1_;
  local_58._2_2_ = local_38._2_2_;
  local_58.NameLen = local_38._4_4_;
  local_58.Value = pvStack_30;
  uVar3 = FCbFieldView::AsInteger(&local_58,0,(FIntegerParams)0x3f);
  this->Version = (int)uVar3;
  bVar2 = false;
  if (local_58.Error == None) {
    bVar2 = bVar1;
  }
  return bVar2;
}

// Write @ 141ec4e50

FCbWriter * __thiscall
UE::AssetRegistry::FPackageCustomVersion::Write(FPackageCustomVersion *this,FCbWriter *param_1)

{
  FCbWriter::BeginArray(param_1);
  FCbWriter::AddUuid(param_1,&this->Key);
  FCbWriter::AddInteger(param_1,this->Version);
  FCbWriter::EndArray(param_1);
  return param_1;
}

