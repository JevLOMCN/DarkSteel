// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 37

// TInputDataVertex<int><> @ 14b301860

TInputDataVertex<int> * __thiscall
Metasound::TInputDataVertex<int>::TInputDataVertex<int><>
          (TInputDataVertex<int> *this,char *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<int>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_H_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><> @ 14b3018e0

TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_>::
TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><>
          (TInputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<WaveTable::FWaveTable>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><> @ 14b301960

TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><> @ 14b3019e0

TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><> @ 14b301a60

TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><>
          (TInputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><> @ 14b301ae0

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><> @ 14b301b60

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><> @ 14b301be0

TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FAudioBusAsset>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><> @ 14b301c60

TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveAsset>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><> @ 14b301ce0

TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<WaveTable::FWaveTable><> @ 14b301d60

TInputDataVertex<WaveTable::FWaveTable> * __thiscall
Metasound::TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
          (TInputDataVertex<WaveTable::FWaveTable> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<WaveTable::FWaveTable><> @ 14b301de0

TInputDataVertex<WaveTable::FWaveTable> * __thiscall
Metasound::TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
          (TInputDataVertex<WaveTable::FWaveTable> *this,FName *param_1,FDataVertexMetadata *param_2
          )

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<WaveTable::FWaveTable><> @ 14b301e40

TInputDataVertex<WaveTable::FWaveTable> * __thiscall
Metasound::TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
          (TInputDataVertex<WaveTable::FWaveTable> *this,char *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><> @ 14b301ec0

TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><> @ 14b301f40

TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><> @ 14b301fa0

TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><> @ 14b302020

TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><> @ 14b302080

TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><> @ 14b302100

TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
          (TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><> @ 14b302160

TInputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><> @ 14b3021e0

TInputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><> @ 14b302240

TInputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><> @ 14b3022c0

TInputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::FAudioBuffer><> @ 14b302320

TInputDataVertex<Metasound::FAudioBuffer> * __thiscall
Metasound::TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
          (TInputDataVertex<Metasound::FAudioBuffer> *this,char *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FAudioBusAsset><> @ 14b3023a0

TInputDataVertex<Metasound::FAudioBusAsset> * __thiscall
Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
TInputDataVertex<Metasound::FAudioBusAsset><>
          (TInputDataVertex<Metasound::FAudioBusAsset> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FAudioBusAsset><> @ 14b302420

TInputDataVertex<Metasound::FAudioBusAsset> * __thiscall
Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
TInputDataVertex<Metasound::FAudioBusAsset><>
          (TInputDataVertex<Metasound::FAudioBusAsset> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FTrigger><> @ 14b302480

TInputDataVertex<Metasound::FTrigger> * __thiscall
Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
          (TInputDataVertex<Metasound::FTrigger> *this,char *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFTrigger_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FWaveAsset><> @ 14b302500

TInputDataVertex<Metasound::FWaveAsset> * __thiscall
Metasound::TInputDataVertex<Metasound::FWaveAsset>::TInputDataVertex<Metasound::FWaveAsset><>
          (TInputDataVertex<Metasound::FWaveAsset> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FWaveAsset><> @ 14b302580

TInputDataVertex<Metasound::FWaveAsset> * __thiscall
Metasound::TInputDataVertex<Metasound::FWaveAsset>::TInputDataVertex<Metasound::FWaveAsset><>
          (TInputDataVertex<Metasound::FWaveAsset> *this,FName *param_1,FDataVertexMetadata *param_2
          )

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FWaveTableBankAsset><> @ 14b3025e0

TInputDataVertex<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TInputDataVertex<Metasound::FWaveTableBankAsset>::
TInputDataVertex<Metasound::FWaveTableBankAsset><>
          (TInputDataVertex<Metasound::FWaveTableBankAsset> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FWaveTableBankAsset><> @ 14b302660

TInputDataVertex<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TInputDataVertex<Metasound::FWaveTableBankAsset>::
TInputDataVertex<Metasound::FWaveTableBankAsset><>
          (TInputDataVertex<Metasound::FWaveTableBankAsset> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FWaveTableBankAsset><> @ 14b3026c0

TInputDataVertex<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TInputDataVertex<Metasound::FWaveTableBankAsset>::
TInputDataVertex<Metasound::FWaveTableBankAsset><>
          (TInputDataVertex<Metasound::FWaveTableBankAsset> *this,char *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int> @ 14b303ae0

TInputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int>
          (void *this,char *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  FName local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int> @ 14b303b80

TInputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int>
          (void *this,char *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  FName local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<float><float> @ 14b303c20

TInputDataVertex<float> * __thiscall
Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
          (TInputDataVertex<float> *this,char *param_1,FDataVertexMetadata *param_2,float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<float>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_M_Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::FTime><float> @ 14b303cc0

TInputDataVertex<Metasound::FTime> * __thiscall
Metasound::TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
          (TInputDataVertex<Metasound::FTime> *this,char *param_1,FDataVertexMetadata *param_2,
          float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTime>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_VFTime_Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<bool><bool> @ 14b305690

TInputDataVertex<bool> * __thiscall
Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
          (TInputDataVertex<bool> *this,char *param_1,FDataVertexMetadata *param_2,bool *param_3)

{
  uint uVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<bool>();
  ::FName::FName(&local_res8,param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(uint *)&this->field_0x8 = local_res8.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = local_res8.Number;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  this->field_0x20 = *param_3;
  this->field_0x30 = 1;
  *(undefined ***)this = &___7__TInputDataVertex__N_Metasound__6B_;
  return this;
}

