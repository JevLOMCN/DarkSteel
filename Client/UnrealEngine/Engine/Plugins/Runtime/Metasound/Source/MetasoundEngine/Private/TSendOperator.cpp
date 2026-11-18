// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 108

// BindInputs @ 14b2c47b0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2c48d0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2c5100

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2c51e0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2ca7d0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::BindInputs
          (void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = (longlong)this + 0x28;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)((longlong)this + 8);
  local_18._8_8_ = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2ca8b0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2cd480

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2cd6a0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2d76b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::BindInputs
          (TSendOperator<Metasound::FWaveTableBankAsset> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d7790

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::BindOutputs
          (TSendOperator<Metasound::FWaveTableBankAsset> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2ddff0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::BindInputs
          (TSendOperator<WaveTable::FWaveTable> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2de4e0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::BindOutputs
          (TSendOperator<WaveTable::FWaveTable> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2e90d0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::BindInputs
          (TSendOperator<Metasound::FWaveAsset> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e91b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::BindOutputs
          (TSendOperator<Metasound::FWaveAsset> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2f1d00

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::BindInputs
          (TSendOperator<Metasound::FAudioBusAsset> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2f1de0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::BindOutputs
          (TSendOperator<Metasound::FAudioBusAsset> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2f8f70

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FSendAddress> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  FName *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&SendVertexNames::AddressInputName);
  local_res18 = &this->SendAddress;
  local_20 = (FName *)&local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  local_18._0_8_ = GetSendInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res8 = (FName)&this->InputData;
  local_18._8_8_ = &this->InputData;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)local_18._0_8_,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2f9060

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  return;
}

// TSendOperator<WaveTable::FWaveTable> @ 14b340580

TSendOperator<WaveTable::FWaveTable> * __thiscall
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::
TSendOperator<WaveTable::FWaveTable>
          (TSendOperator<WaveTable::FWaveTable> *this,
          TDataReadReference<WaveTable::FWaveTable> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<WaveTable::FWaveTable> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_UFWaveTable_WaveTable___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TSender<WaveTable::FWaveTable> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<WaveTable::FWaveTable> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<WaveTable::FWaveTable> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<WaveTable::FWaveTable> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b3406c0

TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_1,TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr
     ) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b340800

TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b340940

TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_1,TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 !=
      TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b340a80

TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_1,TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
           ((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b340bc0

TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_1,TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  TVar5;
  undefined8 *local_res8;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
           ((longlong)this + 0x80);
  lVar2 = *(longlong *)&param_2->field_0x8;
  *(undefined ***)((longlong)this + 0x48) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_3->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)this + 0x70) = uVar4;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewSender(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::FAudioBusAsset> @ 14b340d00

TSendOperator<Metasound::FAudioBusAsset> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::
TSendOperator<Metasound::FAudioBusAsset>
          (TSendOperator<Metasound::FAudioBusAsset> *this,
          TDataReadReference<Metasound::FAudioBusAsset> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::FAudioBusAsset> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFAudioBusAsset_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TSender<Metasound::FAudioBusAsset> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::FAudioBusAsset> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FAudioBusAsset> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::FAudioBusAsset> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::FWaveAsset> @ 14b340e40

TSendOperator<Metasound::FWaveAsset> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::
TSendOperator<Metasound::FWaveAsset>
          (TSendOperator<Metasound::FWaveAsset> *this,
          TDataReadReference<Metasound::FWaveAsset> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::FWaveAsset> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFWaveAsset_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TSender<Metasound::FWaveAsset> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::FWaveAsset> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FWaveAsset> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::FWaveAsset> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TSendOperator<Metasound::FWaveTableBankAsset> @ 14b340f80

TSendOperator<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::
TSendOperator<Metasound::FWaveTableBankAsset>
          (TSendOperator<Metasound::FWaveTableBankAsset> *this,
          TDataReadReference<Metasound::FWaveTableBankAsset> *param_1,
          TDataReadReference<Metasound::FSendAddress> *param_2,FOperatorSettings *param_3)

{
  TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
  *pTVar1;
  longlong lVar2;
  TSender<Metasound::FWaveTableBankAsset> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
  TVar7;
  undefined8 *local_res8;
  
  this->_padding_ =
       (longlong)
       &___7__TSendOperator_VFWaveTableBankAsset_Metasound___SendNodePrivate_Metasound__6B_;
  *(undefined ***)&this->InputData =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->InputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->InputData =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Sender;
  lVar2 = *(longlong *)&param_2->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_3->TargetBlockRate;
  fVar5 = param_3->ActualBlockRate;
  iVar6 = param_3->NumFramesPerBlock;
  (this->CachedSenderParams).OperatorSettings.SampleRate = param_3->SampleRate;
  (this->CachedSenderParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedSenderParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedSenderParams).OperatorSettings.NumFramesPerBlock = iVar6;
  (this->CachedSenderParams).DelayTimeInSeconds = 0.0;
  pTVar1->Ptr = (TSender<Metasound::FWaveTableBankAsset> *)0x0;
  TVar7 = CreateNewSender(this);
  if ((TSender<Metasound::FWaveTableBankAsset> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TSender<Metasound::FWaveTableBankAsset> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TSender<Metasound::FWaveTableBankAsset> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~TSendOperator<WaveTable::FWaveTable> @ 14b34eee0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::
~TSendOperator<WaveTable::FWaveTable>(TSendOperator<WaveTable::FWaveTable> *this)

{
  TSender<WaveTable::FWaveTable> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_UFWaveTable_WaveTable___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<WaveTable::FWaveTable> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34ef40

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34efa0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34f000

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TSendOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b34f060

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
~TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b34f0c0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
~TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FAudioBusAsset> @ 14b34f120

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::
~TSendOperator<Metasound::FAudioBusAsset>(TSendOperator<Metasound::FAudioBusAsset> *this)

{
  TSender<Metasound::FAudioBusAsset> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFAudioBusAsset_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FAudioBusAsset> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FWaveAsset> @ 14b34f180

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::
~TSendOperator<Metasound::FWaveAsset>(TSendOperator<Metasound::FWaveAsset> *this)

{
  TSender<Metasound::FWaveAsset> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TSendOperator_VFWaveAsset_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FWaveAsset> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TSendOperator<Metasound::FWaveTableBankAsset> @ 14b34f1e0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::
~TSendOperator<Metasound::FWaveTableBankAsset>(TSendOperator<Metasound::FWaveTableBankAsset> *this)

{
  TSender<Metasound::FWaveTableBankAsset> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TSendOperator_VFWaveTableBankAsset_Metasound___SendNodePrivate_Metasound__6B_;
  ResetSenderAndCleanupChannel(this);
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FWaveTableBankAsset> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b356fb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b357180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b357350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b357520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b3576f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b3578c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
  GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::
           TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b357a90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b357c60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface
                     (&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// operator() @ 14b357e30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  FName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"Send");
  pFVar3 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName(&local_78,local_res18,pFVar3,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar4 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar4);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar2 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::
           DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
  FText::FText((FText *)&local_78);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data,
             (__return_storage_ptr__->CategoryHierarchy).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->CategoryHierarchy,(FText *)&local_78,1,
             (__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)0x0,0,
             (__return_storage_ptr__->Keywords).ArrayMax);
  __return_storage_ptr__->AccessFlags = __return_storage_ptr__->AccessFlags | Deprecated;
  return __return_storage_ptr__;
}

// CreateNewSender @ 14b3762b0

TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::CreateNewSender
          (TSendOperator<WaveTable::FWaveTable> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<WaveTable::FWaveTable> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<WaveTable::FWaveTable> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<WaveTable::FWaveTable>_>'::__l2::<lambda_1>::operator()
                        (&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<WaveTable::FWaveTable> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<WaveTable::FWaveTable> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b3764d4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b3764d4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b3764d4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b376510

TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::CreateNewSender
          (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                    (*pcVar2)();
        return (TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b376734;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b376734;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b376734:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b376770

TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::CreateNewSender
          (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                    (*pcVar2)();
        return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b376994;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b376994;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b376994:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b3769d0

TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::CreateNewSender
          (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                    (*pcVar2)();
        return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b376bf4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b376bf4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b376bf4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b376c30

TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b376e54;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b376e54;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b376e54:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b376e90

TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
 __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
CreateNewSender(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))
                     (*(longlong **)((longlong)this + 0x30),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x30) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
                    )(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x30);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
                  (local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b3770b4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b3770b4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b3770b4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b3770f0

TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::CreateNewSender
          (TSendOperator<Metasound::FAudioBusAsset> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::FAudioBusAsset> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::FAudioBusAsset> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>::
              operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::FAudioBusAsset> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::FAudioBusAsset> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b377314;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b377314;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b377314:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b377350

TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::CreateNewSender
          (TSendOperator<Metasound::FWaveAsset> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::FWaveAsset> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::FWaveAsset> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::FWaveAsset>_>'::__l2::<lambda_1>::operator()
                        (&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::FWaveAsset> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::FWaveAsset> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b377574;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b377574;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b377574:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
          )in_RDX;
}

// CreateNewSender @ 14b3775b0

TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
 __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::CreateNewSender
          (TSendOperator<Metasound::FWaveTableBankAsset> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TSender<Metasound::FWaveTableBankAsset> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [24];
  FString local_78;
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9080921131426250921>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0xa9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TSender<Metasound::FWaveTableBankAsset> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)&(this->SendAddress).field_0x8;
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewSender(this_01,local_res8,(FSenderInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TSender<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>::
              operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,&local_78);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TSender<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3cc,
                           L"Tried to downcast an ISender of type %s to a TSender of type %s!");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TSender<Metasound::FWaveTableBankAsset> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TSender<Metasound::FWaveTableBankAsset> *)(local_90 + 0x10)) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b3777d4;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b3777d4;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b3777d4:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
          )in_RDX;
}

// CreateOperator @ 14b384040

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<WaveTable::FWaveTable> *pTVar7;
  TSendOperator<WaveTable::FWaveTable> *this;
  TSendOperator<WaveTable::FWaveTable> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable>
                       (pFVar1,(TDataReadReference<WaveTable::FWaveTable> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<WaveTable::FWaveTable> *)0x0;
    if (this != (TSendOperator<WaveTable::FWaveTable> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
      pTVar8 = TSendOperator<WaveTable::FWaveTable>
                         (this,(TDataReadReference<WaveTable::FWaveTable> *)local_78,
                          (TDataReadReference<Metasound::FSendAddress> *)local_98,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b3841e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0
       ) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b384380

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    if (this != (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b384520

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this;
  TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       (pFVar1,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
             0x0;
    if (this != (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      pTVar8 = TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         (this,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b3846c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
             )0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b384860

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar7;
  void *this;
  TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       (pFVar1,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                                *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
             0x0;
    if (this != (void *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &
                    ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
      ;
      pTVar8 = TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                                *)local_78,(TDataReadReference<Metasound::FSendAddress> *)local_98,
                          pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b384a00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar7;
  TSendOperator<Metasound::FAudioBusAsset> *this;
  TSendOperator<Metasound::FAudioBusAsset> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
                       (pFVar1,(TDataReadReference<Metasound::FAudioBusAsset> *)local_58,pFVar5,
                        pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FAudioBusAsset> *)0x0;
    if (this != (TSendOperator<Metasound::FAudioBusAsset> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FAudioBusAsset>
                         (this,(TDataReadReference<Metasound::FAudioBusAsset> *)local_78,
                          (TDataReadReference<Metasound::FSendAddress> *)local_98,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b384ba0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FWaveAsset> *pTVar7;
  TSendOperator<Metasound::FWaveAsset> *this;
  TSendOperator<Metasound::FWaveAsset> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset>
                       (pFVar1,(TDataReadReference<Metasound::FWaveAsset> *)local_58,pFVar5,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FWaveAsset> *)0x0;
    if (this != (TSendOperator<Metasound::FWaveAsset> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FWaveAsset>
                         (this,(TDataReadReference<Metasound::FWaveAsset> *)local_78,
                          (TDataReadReference<Metasound::FSendAddress> *)local_98,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b384d40

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FOperatorSettings *pFVar3;
  bool bVar4;
  FName *pFVar5;
  TDataReadReference<Metasound::FSendAddress> *pTVar6;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar7;
  TSendOperator<Metasound::FWaveTableBankAsset> *this;
  TSendOperator<Metasound::FWaveTableBankAsset> *pTVar8;
  INode *pIVar9;
  FName local_res10;
  undefined **local_98 [2];
  longlong local_88;
  undefined **local_78 [2];
  longlong local_68;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar5 = GetSendInputName();
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,pFVar5);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FLazyName::Resolve(&SendVertexNames::AddressInputName);
    pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                       (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_38,&local_res10,
                        pFVar2);
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    pFVar5 = GetSendInputName();
    pTVar7 = FInputVertexInterfaceData::
             GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>
                       (pFVar1,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_58,pFVar5
                        ,pFVar3);
    this = ::operator_new(0x88);
    pTVar8 = (TSendOperator<Metasound::FWaveTableBankAsset> *)0x0;
    if (this != (TSendOperator<Metasound::FWaveTableBankAsset> *)0x0) {
      local_98[1] = *(undefined ***)&pTVar6->field_0x8;
      local_88 = *(longlong *)&pTVar6->field_0x10;
      if (local_88 != 0) {
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      }
      local_98[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
      local_78[1] = *(undefined ***)&pTVar7->field_0x8;
      local_68 = *(longlong *)&pTVar7->field_0x10;
      if (local_68 != 0) {
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      }
      local_78[0] = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
      pTVar8 = TSendOperator<Metasound::FWaveTableBankAsset>
                         (this,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_78,
                          (TDataReadReference<Metasound::FSendAddress> *)local_98,pFVar2);
    }
    param_1->Node = (INode *)pTVar8;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_38._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pIVar9 = ::operator_new(8);
  if (pIVar9 != (INode *)0x0) {
    param_1->Node = pIVar9;
    *pIVar9 = (INode)&___7FNoOpOperator_Metasound__6B_;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b391330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<WaveTable::FWaveTable> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b391640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b391950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b391c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b391f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__
            );
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b392280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__
            );
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
                     (local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28])(local_38);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b392590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<Metasound::FAudioBusAsset> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b3928a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<Metasound::FWaveAsset> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FWaveAsset>::TInputDataVertex<Metasound::FWaveAsset><>
                     (&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b392bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOutputVertexInterface *pFVar3;
  FText *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_158 [32];
  FInputVertexInterface local_128;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  FDataVertexMetadata local_100;
  FOutputVertexInterface local_d8;
  FInputVertexInterfaceDeclarationBuilder local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_90;
  TInputDataVertex<Metasound::FWaveTableBankAsset> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar4->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_108);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar4->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  pFVar4 = FText::GetEmpty();
  local_100.Description.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 8))
              (local_100.Description.TextData.Reference,local_104);
  }
  local_100.Description.Flags = pFVar4->Flags;
  FText::FText(&local_100.DisplayName);
  local_100.bIsAdvancedDisplay = false;
  pFVar5 = GetSendInputName();
  pFVar6 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FWaveTableBankAsset>::
           TInputDataVertex<Metasound::FWaveTableBankAsset><>(&local_58,pFVar5,&local_100);
  pFVar7 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_90,&SendVertexNames::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SubInterfaces.ArrayNum = 0;
  local_128.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_b8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128
             ,&local_128.SubInterfaces);
  if ((local_b8.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
               &(local_b8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar7);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_b8,pFVar6);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_b8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,pFVar3);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_100.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_100.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  return __return_storage_ptr__;
}

// GetNodeInfo @ 14b3bab30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3babc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
      __l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3bac50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3bace0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3bad70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3bae00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3bae90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3baf20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3bafb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetSendInputName @ 14b3c0630

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c06a0

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c0710

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c0780

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c07f0

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c0860

FName * __cdecl
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetSendInputName(void)'
      ::__l2::SendInput =
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c08d0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c0940

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// GetSendInputName @ 14b3c09b0

FName * __cdecl
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName(void)'
      ::__l2::SendInput = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::GetSendInputName(void)'
         ::__l2::SendInput;
}

// Reset @ 14b3da230

void __thiscall
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::Reset
          (TSendOperator<WaveTable::FWaveTable> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<WaveTable::FWaveTable> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<WaveTable::FWaveTable> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<WaveTable::FWaveTable> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<WaveTable::FWaveTable> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<WaveTable::FWaveTable> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da2e0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr
     ) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da390

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da440

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  longlong lVar1;
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)pTVar6 !=
      TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr ==
      (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da4f0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
           ((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da5a0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)((longlong)this + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
           ((longlong)this + 0x80);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da650

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::Reset
          (TSendOperator<Metasound::FAudioBusAsset> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::FAudioBusAsset> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::FAudioBusAsset> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::FAudioBusAsset> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::FAudioBusAsset> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::FAudioBusAsset> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da700

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::Reset
          (TSendOperator<Metasound::FWaveAsset> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::FWaveAsset> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::FWaveAsset> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::FWaveAsset> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::FWaveAsset> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::FWaveAsset> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Reset @ 14b3da7b0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::Reset
          (TSendOperator<Metasound::FWaveTableBankAsset> *this,FResetParams *param_1)

{
  longlong lVar1;
  TSender<Metasound::FWaveTableBankAsset> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
  TVar5;
  TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
  *pTVar6;
  undefined8 *local_res8;
  
  ResetSenderAndCleanupChannel(this);
  lVar1 = *(longlong *)&(this->SendAddress).field_0x8;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar1 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar1 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar1 + 0x18);
  TVar5 = CreateNewSender(this);
  pTVar6 = &this->Sender;
  if ((TSender<Metasound::FWaveTableBankAsset> *)pTVar6 != TVar5.Ptr) {
    pTVar2 = pTVar6->Ptr;
    pTVar6->Ptr = (TSender<Metasound::FWaveTableBankAsset> *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pTVar2 != (TSender<Metasound::FWaveTableBankAsset> *)0x0) {
      (**(code **)pTVar2->_padding_)(pTVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->Ptr == (TSender<Metasound::FWaveTableBankAsset> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetSenderAndCleanupChannel @ 14b3dd960

void __thiscall
Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::ResetSenderAndCleanupChannel
          (TSendOperator<WaveTable::FWaveTable> *this)

{
  TSender<WaveTable::FWaveTable> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<WaveTable::FWaveTable> *)0x0) {
    (this->Sender).Ptr = (TSender<WaveTable::FWaveTable> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3dda00

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel
          (TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr =
         (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3ddaa0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel
          (TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Sender).Ptr = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3ddb40

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
ResetSenderAndCleanupChannel
          (TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    (this->Sender).Ptr =
         (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3ddbe0

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3ddc80

void __thiscall
Metasound::SendNodePrivate::
TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
ResetSenderAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x80) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x48));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x48));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3ddd20

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::ResetSenderAndCleanupChannel
          (TSendOperator<Metasound::FAudioBusAsset> *this)

{
  TSender<Metasound::FAudioBusAsset> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FAudioBusAsset> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FAudioBusAsset> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3dddc0

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::ResetSenderAndCleanupChannel
          (TSendOperator<Metasound::FWaveAsset> *this)

{
  TSender<Metasound::FWaveAsset> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FWaveAsset> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FWaveAsset> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetSenderAndCleanupChannel @ 14b3dde60

void __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::
ResetSenderAndCleanupChannel(TSendOperator<Metasound::FWaveTableBankAsset> *this)

{
  TSender<Metasound::FWaveTableBankAsset> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Sender).Ptr;
  if (pTVar1 != (TSender<Metasound::FWaveTableBankAsset> *)0x0) {
    (this->Sender).Ptr = (TSender<Metasound::FWaveTableBankAsset> *)0x0;
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName(&this->CachedSendAddress);
  pFVar3 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  uVar4 = FSendAddress::GetInstanceID(&this->CachedSendAddress);
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

