// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 27

// operator() @ 14b35f170

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f210

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f2b0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f350

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f3f0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f490

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f530

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f5d0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f670

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f710

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f7b0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f850

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f8f0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35f990

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fa30

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fad0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fb70

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fc10

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fcb0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<WaveTable::FWaveTable>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<WaveTable::FWaveTable>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fd50

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fdf0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35fe90

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35ff30

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b35ffd0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b360070

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b360110

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveAsset>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14b3601b0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

