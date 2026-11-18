// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 22

// TOutputDataVertex<float><> @ 14b302740

TOutputDataVertex<float> * __thiscall
Metasound::TOutputDataVertex<float>::TOutputDataVertex<float><>
          (TOutputDataVertex<float> *this,char *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this = &___7__TOutputDataVertex_M_Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><> @ 14b3027b0

TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_>::
TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_><>
          (TOutputDataVertex<Metasound::TVariable<WaveTable::FWaveTable>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><> @ 14b302820

TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><> @ 14b302890

TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><> @ 14b302900

TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_><>
          (TOutputDataVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><> @ 14b302970

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_><>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><> @ 14b3029e0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_><>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><> @ 14b302a50

TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_> *this,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><> @ 14b302ac0

TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FWaveAsset>_> *this,FLazyName *param_1,
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
  *(undefined ***)this =
       &___7__TOutputDataVertex_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><> @ 14b302b30

TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<WaveTable::FWaveTable><> @ 14b302ba0

TOutputDataVertex<WaveTable::FWaveTable> * __thiscall
Metasound::TOutputDataVertex<WaveTable::FWaveTable>::TOutputDataVertex<WaveTable::FWaveTable><>
          (TOutputDataVertex<WaveTable::FWaveTable> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<WaveTable::FWaveTable><> @ 14b302c10

TOutputDataVertex<WaveTable::FWaveTable> * __thiscall
Metasound::TOutputDataVertex<WaveTable::FWaveTable>::TOutputDataVertex<WaveTable::FWaveTable><>
          (TOutputDataVertex<WaveTable::FWaveTable> *this,char *param_1,FDataVertexMetadata *param_2
          )

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
  *(undefined ***)this = &___7__TOutputDataVertex_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><> @ 14b302c80

TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><> @ 14b302cf0

TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><> @ 14b302d60

TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
          (TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><> @ 14b302dd0

TOutputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><> @ 14b302e40

TOutputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::
TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
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
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::FAudioBuffer><> @ 14b302eb0

TOutputDataVertex<Metasound::FAudioBuffer> * __thiscall
Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
          (TOutputDataVertex<Metasound::FAudioBuffer> *this,char *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FAudioBusAsset><> @ 14b302f20

TOutputDataVertex<Metasound::FAudioBusAsset> * __thiscall
Metasound::TOutputDataVertex<Metasound::FAudioBusAsset>::
TOutputDataVertex<Metasound::FAudioBusAsset><>
          (TOutputDataVertex<Metasound::FAudioBusAsset> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FTrigger><> @ 14b302f90

TOutputDataVertex<Metasound::FTrigger> * __thiscall
Metasound::TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
          (TOutputDataVertex<Metasound::FTrigger> *this,char *param_1,FDataVertexMetadata *param_2)

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
  *(undefined ***)this = &___7__TOutputDataVertex_VFTrigger_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FWaveAsset><> @ 14b303000

TOutputDataVertex<Metasound::FWaveAsset> * __thiscall
Metasound::TOutputDataVertex<Metasound::FWaveAsset>::TOutputDataVertex<Metasound::FWaveAsset><>
          (TOutputDataVertex<Metasound::FWaveAsset> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FWaveTableBankAsset><> @ 14b303070

TOutputDataVertex<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::TOutputDataVertex<Metasound::FWaveTableBankAsset>::
TOutputDataVertex<Metasound::FWaveTableBankAsset><>
          (TOutputDataVertex<Metasound::FWaveTableBankAsset> *this,FLazyName *param_1,
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
  *(undefined ***)this = &___7__TOutputDataVertex_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

