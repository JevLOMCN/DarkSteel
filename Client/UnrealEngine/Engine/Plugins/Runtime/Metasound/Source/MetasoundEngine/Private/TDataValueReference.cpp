// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// Clone @ 14b2cfa10

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>::Clone
          (TDataValueReference<Metasound::FWaveTableBankAsset> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataValueReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2d6820

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
Clone(void *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)((longlong)this + 8);
    lVar1 = *(longlong *)((longlong)this + 0x10);
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataValueReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2d94d0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataValueReference<WaveTable::FWaveTable>::Clone
          (TDataValueReference<WaveTable::FWaveTable> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataValueReference_UFWaveTable_WaveTable___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2dbbd0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataValueReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2deb80

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::Clone(TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataValueReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2e27a0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataValueReference<Metasound::FWaveAsset>::Clone
          (TDataValueReference<Metasound::FWaveAsset> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataValueReference_VFWaveAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2e7c30

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataValueReference<Metasound::FAudioBusAsset>::Clone
          (TDataValueReference<Metasound::FAudioBusAsset> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 = &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 = &___7__TDataValueReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2ed290

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
Clone(TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataValueReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2fb040

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
Clone(void *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)((longlong)this + 8);
    lVar1 = *(longlong *)((longlong)this + 0x10);
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataValueReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

