// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 22

// Clone @ 14b2c4570

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<WaveTable::FWaveTable>::Clone
          (TDataWriteReference<WaveTable::FWaveTable> *this)

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
    *(undefined ***)IVar2 = &___7__TDataWriteReference_UFWaveTable_WaveTable___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2c5950

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::Clone(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2c9720

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2ca310

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>::Clone
          (TDataWriteReference<Metasound::FWaveTableBankAsset> *this)

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
         &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2ccb60

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
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
         ___7__TDataWriteReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2d6450

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
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
         ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2d6ed0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Clone
          (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

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
         ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2d7a80

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>::Clone
          (TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &
         ___7__TDataWriteReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2d7e80

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::Clone(void *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
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
         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2d9ca0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::Clone(TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
         ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2dc5d0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::FWaveAsset>::Clone
          (TDataWriteReference<Metasound::FWaveAsset> *this)

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
    *(undefined ***)IVar2 = &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2df970

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::Clone(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2e2880

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::FAudioBusAsset>::Clone
          (TDataWriteReference<Metasound::FAudioBusAsset> *this)

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
    *(undefined ***)IVar2 = &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2e6200

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
Clone(TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

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
         ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2ee010

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::Clone(void *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
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
         ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2f6190

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
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
         ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2fb540

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>::Clone
          (TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &___7__TDataReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
    *(undefined8 *)((longlong)IVar2 + 8) = *(undefined8 *)&this->field_0x8;
    lVar1 = *(longlong *)&this->field_0x10;
    *(longlong *)((longlong)IVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *in_RDX = IVar2;
    *(undefined ***)IVar2 =
         &___7__TDataWriteReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// Clone @ 14b2fe0f0

TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::Clone(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
        *this)

{
  longlong lVar1;
  IDataReference IVar2;
  IDataReference *in_RDX;
  
  IVar2 = (IDataReference)::operator_new(0x20);
  if (IVar2 != (IDataReference)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7__TDataReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
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
         ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
    ;
    return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
  }
  *in_RDX = (IDataReference)0x0;
  return (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>)in_RDX;
}

// CreateNew<wchar_t_const_(&)[1]> @ 14b30c550

TDataWriteReference<FString> * __cdecl
Metasound::TDataWriteReference<FString>::CreateNew<wchar_t_const_(&)[1]>
          (TDataWriteReference<FString> *__return_storage_ptr__,wchar_t (*param_1) [1])

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataWriteReference<FString> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFString___Metasound__6B_;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &___7__TIntrusiveReferenceController_VFString___0A__SharedPointerInternals__6B_;
    ::FString::FString((FString *)(puVar3 + 2),*param_1);
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataWriteReference<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_const_&> @ 14b30c620

TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,
          TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar5[2] = 0;
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(int *)(puVar5 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,(ForAnyElementType *)(puVar5 + 2),iVar1,
                 (int *)((longlong)puVar5 + 0x1c));
      ConstructItems<Metasound::FAudioBusAsset,Metasound::FAudioBusAsset,int>
                (((ForAnyElementType *)(puVar5 + 2))->Data,(FAudioBusAsset *)pFVar2,iVar1);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateNew<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_const_&> @ 14b30c740

TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateNew<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,
          TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar5[2] = 0;
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(int *)(puVar5 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,(ForAnyElementType *)(puVar5 + 2),iVar1,
                 (int *)((longlong)puVar5 + 0x1c));
      ConstructItems<Metasound::FWaveAsset,Metasound::FWaveAsset,int>
                (((ForAnyElementType *)(puVar5 + 2))->Data,(FWaveAsset *)pFVar2,iVar1);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateNew<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_const_&> @ 14b30c860

TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::CreateNew<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_const_&>
          (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,
          TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  puVar5 = ::operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar5[2] = 0;
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(int *)(puVar5 + 3) = iVar1;
    if (iVar1 == 0) {
      *(int *)((longlong)puVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,(ForAnyElementType *)(puVar5 + 2),iVar1,
                 (int *)((longlong)puVar5 + 0x1c));
      ConstructItems<Metasound::FWaveTableBankAsset,Metasound::FWaveTableBankAsset,int>
                (((ForAnyElementType *)(puVar5 + 2))->Data,(FWaveTableBankAsset *)pFVar2,iVar1);
    }
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

