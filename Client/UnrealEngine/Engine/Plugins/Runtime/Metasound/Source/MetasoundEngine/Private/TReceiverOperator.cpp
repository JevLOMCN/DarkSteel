// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 99

// BindInputs @ 14b2c7b90

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = &this->DefaultData;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                &this->SendAddress;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2c7c80

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = &this->OutputData;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2c9f40

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::BindInputs
          (TReceiverOperator<Metasound::FAudioBusAsset> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FAudioBusAsset> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = &this->DefaultData;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (TDataReadReference<Metasound::FAudioBusAsset> *)&this->SendAddress;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2ca030

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::BindOutputs
          (TReceiverOperator<Metasound::FAudioBusAsset> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBusAsset> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBusAsset> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBusAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = &this->OutputData;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2d5400

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = &this->DefaultData;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                 *)&this->SendAddress;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d54f0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = &this->OutputData;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2d9da0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  longlong *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = (longlong)this + 0x10;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (longlong)this + 0x50;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d9e90

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = (longlong)this + 0x30;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2e3e70

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_38 [16];
  code *local_28;
  longlong *local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = (longlong)this + 0x10;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (longlong)this + 0x50;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e3f80

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = (longlong)this + 0x30;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2ee950

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::BindInputs
          (TReceiverOperator<Metasound::FWaveTableBankAsset> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FWaveTableBankAsset> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FWaveTableBankAsset> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = &this->DefaultData;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)&this->SendAddress;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2eec10

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::BindOutputs
          (TReceiverOperator<Metasound::FWaveTableBankAsset> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FWaveTableBankAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = &this->OutputData;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2f7450

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::BindInputs
          (TReceiverOperator<WaveTable::FWaveTable> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<WaveTable::FWaveTable> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<WaveTable::FWaveTable> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = &this->DefaultData;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->SendAddress;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2f75a0

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::BindOutputs
          (TReceiverOperator<WaveTable::FWaveTable> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<WaveTable::FWaveTable> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<WaveTable::FWaveTable> *local_30;
  code *local_28;
  TDataWriteReference<WaveTable::FWaveTable> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = &this->OutputData;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2fcde0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> **local_20
  ;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = &this->DefaultData;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *)&this->SendAddress;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2fced0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *local_30
  ;
  code *local_28;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = &this->OutputData;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2ff7b0

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::BindInputs
          (TReceiverOperator<Metasound::FWaveAsset> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FWaveAsset> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FWaveAsset> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  local_res18 = &this->DefaultData;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  local_res18 = (TDataReadReference<Metasound::FWaveAsset> *)&this->SendAddress;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2ff900

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::BindOutputs
          (TReceiverOperator<Metasound::FWaveAsset> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FWaveAsset> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FWaveAsset> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FWaveAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ReceiveNodeInfo::OutputName);
  local_res18[0] = &this->OutputData;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TReceiverOperator<WaveTable::FWaveTable> @ 14b33f770

TReceiverOperator<WaveTable::FWaveTable> * __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::
TReceiverOperator<WaveTable::FWaveTable>
          (TReceiverOperator<WaveTable::FWaveTable> *this,
          TDataReadReference<WaveTable::FWaveTable> *param_1,
          TDataWriteReference<WaveTable::FWaveTable> *param_2,
          TDataReadReference<Metasound::FSendAddress> *param_3,FOperatorSettings *param_4)

{
  TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
  *pTVar1;
  longlong lVar2;
  TReceiver<WaveTable::FWaveTable> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
  TVar7;
  
  this->bHasNotReceivedData = true;
  this->_padding_ =
       (longlong)&___7__TReceiverOperator_UFWaveTable_WaveTable___ReceiveNodePrivate_Metasound__6B_;
  *(undefined ***)&this->DefaultData = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)&(this->DefaultData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->DefaultData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->DefaultData =
       &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined ***)&this->OutputData = &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)&(this->OutputData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->OutputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->OutputData =
       &___7__TDataWriteReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Receiver;
  lVar2 = *(longlong *)&param_3->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_4->TargetBlockRate;
  fVar5 = param_4->ActualBlockRate;
  iVar6 = param_4->NumFramesPerBlock;
  (this->CachedReceiverParams).OperatorSettings.SampleRate = param_4->SampleRate;
  (this->CachedReceiverParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedReceiverParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedReceiverParams).OperatorSettings.NumFramesPerBlock = iVar6;
  pTVar1->Ptr = (TReceiver<WaveTable::FWaveTable> *)0x0;
  TVar7 = CreateNewReceiver(this);
  if ((TReceiver<WaveTable::FWaveTable> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TReceiver<WaveTable::FWaveTable> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TReceiver<WaveTable::FWaveTable> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b33f900

TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_1,TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *param_2,TDataReadReference<Metasound::FSendAddress> *param_3,
          FOperatorSettings *param_4)

{
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  
  this->bHasNotReceivedData = true;
  this->_padding_ =
       (longlong)
       &
       ___7__TReceiverOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______ReceiveNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->DefaultData =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->DefaultData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->DefaultData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->DefaultData =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->OutputData =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->OutputData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->OutputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->OutputData =
       &
       ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Receiver;
  lVar2 = *(longlong *)&param_3->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_4->TargetBlockRate;
  fVar5 = param_4->ActualBlockRate;
  iVar6 = param_4->NumFramesPerBlock;
  (this->CachedReceiverParams).OperatorSettings.SampleRate = param_4->SampleRate;
  (this->CachedReceiverParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedReceiverParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedReceiverParams).OperatorSettings.NumFramesPerBlock = iVar6;
  pTVar1->Ptr = (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewReceiver(this);
  if ((TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 !=
      TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
    {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b33fa90

TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_1,
          TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_2,
          TDataReadReference<Metasound::FSendAddress> *param_3,FOperatorSettings *param_4)

{
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  
  this->bHasNotReceivedData = true;
  this->_padding_ =
       (longlong)
       &
       ___7__TReceiverOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______ReceiveNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->DefaultData =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->DefaultData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->DefaultData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->DefaultData =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->OutputData =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->OutputData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->OutputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->OutputData =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Receiver;
  lVar2 = *(longlong *)&param_3->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_4->TargetBlockRate;
  fVar5 = param_4->ActualBlockRate;
  iVar6 = param_4->NumFramesPerBlock;
  (this->CachedReceiverParams).OperatorSettings.SampleRate = param_4->SampleRate;
  (this->CachedReceiverParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedReceiverParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedReceiverParams).OperatorSettings.NumFramesPerBlock = iVar6;
  pTVar1->Ptr = (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  TVar7 = CreateNewReceiver(this);
  if ((TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar7.Ptr)
  {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b33fc20

TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                 *param_1,
          TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_2,TDataReadReference<Metasound::FSendAddress> *param_3,FOperatorSettings *param_4)

{
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  longlong lVar2;
  TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  
  this->bHasNotReceivedData = true;
  this->_padding_ =
       (longlong)
       &
       ___7__TReceiverOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______ReceiveNodePrivate_Metasound__6B_
  ;
  *(undefined ***)&this->DefaultData =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->DefaultData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->DefaultData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->DefaultData =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->OutputData =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->OutputData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->OutputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->OutputData =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Receiver;
  lVar2 = *(longlong *)&param_3->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_4->TargetBlockRate;
  fVar5 = param_4->ActualBlockRate;
  iVar6 = param_4->NumFramesPerBlock;
  (this->CachedReceiverParams).OperatorSettings.SampleRate = param_4->SampleRate;
  (this->CachedReceiverParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedReceiverParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedReceiverParams).OperatorSettings.NumFramesPerBlock = iVar6;
  pTVar1->Ptr = (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                0x0;
  TVar7 = CreateNewReceiver(this);
  if ((TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 !=
      TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  (TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b33fdb0

TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_1,TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   *param_2,TDataReadReference<Metasound::FSendAddress> *param_3,
          FOperatorSettings *param_4)

{
  TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  TVar5;
  
  *(undefined1 *)((longlong)this + 8) = 1;
  *(undefined ***)this =
       &
       ___7__TReceiverOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___ReceiveNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x10) =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x18) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x20) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x10) =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x30) =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x38) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x40) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x30) =
       &
       ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x50) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)((longlong)this + 0x60) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x50) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
           ((longlong)this + 0xa0);
  lVar2 = *(longlong *)&param_3->field_0x8;
  *(undefined ***)((longlong)this + 0x70) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x78) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x80) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_4->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x90) = *(undefined8 *)param_4;
  *(undefined8 *)((longlong)this + 0x98) = uVar4;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewReceiver(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b33ff40

TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          *param_1,TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                   *param_2,TDataReadReference<Metasound::FSendAddress> *param_3,
          FOperatorSettings *param_4)

{
  TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  TVar5;
  
  *(undefined1 *)((longlong)this + 8) = 1;
  *(undefined ***)this =
       &
       ___7__TReceiverOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___ReceiveNodePrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x10) =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x18) = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x20) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x10) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x30) =
       &
       ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x38) = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x40) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x30) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x50) =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)((longlong)this + 0x60) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x50) =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
           ((longlong)this + 0xa0);
  lVar2 = *(longlong *)&param_3->field_0x8;
  *(undefined ***)((longlong)this + 0x70) = &___7FSendAddress_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x78) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)((longlong)this + 0x80) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)&param_4->ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x90) = *(undefined8 *)param_4;
  *(undefined8 *)((longlong)this + 0x98) = uVar4;
  pTVar1->_padding_ = 0;
  TVar5 = CreateNewReceiver(this);
  if (pTVar1 != TVar5.Ptr) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    pTVar1->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<Metasound::FAudioBusAsset> @ 14b3400d0

TReceiverOperator<Metasound::FAudioBusAsset> * __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
TReceiverOperator<Metasound::FAudioBusAsset>
          (TReceiverOperator<Metasound::FAudioBusAsset> *this,
          TDataReadReference<Metasound::FAudioBusAsset> *param_1,
          TDataWriteReference<Metasound::FAudioBusAsset> *param_2,
          TDataReadReference<Metasound::FSendAddress> *param_3,FOperatorSettings *param_4)

{
  TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
  *pTVar1;
  longlong lVar2;
  TReceiver<Metasound::FAudioBusAsset> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
  TVar7;
  
  this->bHasNotReceivedData = true;
  this->_padding_ =
       (longlong)
       &___7__TReceiverOperator_VFAudioBusAsset_Metasound___ReceiveNodePrivate_Metasound__6B_;
  *(undefined ***)&this->DefaultData =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DefaultData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->DefaultData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->DefaultData =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->OutputData =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->OutputData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->OutputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->OutputData =
       &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Receiver;
  lVar2 = *(longlong *)&param_3->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_4->TargetBlockRate;
  fVar5 = param_4->ActualBlockRate;
  iVar6 = param_4->NumFramesPerBlock;
  (this->CachedReceiverParams).OperatorSettings.SampleRate = param_4->SampleRate;
  (this->CachedReceiverParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedReceiverParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedReceiverParams).OperatorSettings.NumFramesPerBlock = iVar6;
  pTVar1->Ptr = (TReceiver<Metasound::FAudioBusAsset> *)0x0;
  TVar7 = CreateNewReceiver(this);
  if ((TReceiver<Metasound::FAudioBusAsset> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TReceiver<Metasound::FAudioBusAsset> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TReceiver<Metasound::FAudioBusAsset> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<Metasound::FWaveAsset> @ 14b340260

TReceiverOperator<Metasound::FWaveAsset> * __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::
TReceiverOperator<Metasound::FWaveAsset>
          (TReceiverOperator<Metasound::FWaveAsset> *this,
          TDataReadReference<Metasound::FWaveAsset> *param_1,
          TDataWriteReference<Metasound::FWaveAsset> *param_2,
          TDataReadReference<Metasound::FSendAddress> *param_3,FOperatorSettings *param_4)

{
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
  *pTVar1;
  longlong lVar2;
  TReceiver<Metasound::FWaveAsset> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
  TVar7;
  
  this->bHasNotReceivedData = true;
  this->_padding_ =
       (longlong)&___7__TReceiverOperator_VFWaveAsset_Metasound___ReceiveNodePrivate_Metasound__6B_;
  *(undefined ***)&this->DefaultData = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DefaultData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->DefaultData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->DefaultData =
       &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->OutputData = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->OutputData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->OutputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->OutputData =
       &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Receiver;
  lVar2 = *(longlong *)&param_3->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_4->TargetBlockRate;
  fVar5 = param_4->ActualBlockRate;
  iVar6 = param_4->NumFramesPerBlock;
  (this->CachedReceiverParams).OperatorSettings.SampleRate = param_4->SampleRate;
  (this->CachedReceiverParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedReceiverParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedReceiverParams).OperatorSettings.NumFramesPerBlock = iVar6;
  pTVar1->Ptr = (TReceiver<Metasound::FWaveAsset> *)0x0;
  TVar7 = CreateNewReceiver(this);
  if ((TReceiver<Metasound::FWaveAsset> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TReceiver<Metasound::FWaveAsset> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TReceiver<Metasound::FWaveAsset> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// TReceiverOperator<Metasound::FWaveTableBankAsset> @ 14b3403f0

TReceiverOperator<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
TReceiverOperator<Metasound::FWaveTableBankAsset>
          (TReceiverOperator<Metasound::FWaveTableBankAsset> *this,
          TDataReadReference<Metasound::FWaveTableBankAsset> *param_1,
          TDataWriteReference<Metasound::FWaveTableBankAsset> *param_2,
          TDataReadReference<Metasound::FSendAddress> *param_3,FOperatorSettings *param_4)

{
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
  *pTVar1;
  longlong lVar2;
  TReceiver<Metasound::FWaveTableBankAsset> *pTVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
  TVar7;
  
  this->bHasNotReceivedData = true;
  this->_padding_ =
       (longlong)
       &___7__TReceiverOperator_VFWaveTableBankAsset_Metasound___ReceiveNodePrivate_Metasound__6B_;
  *(undefined ***)&this->DefaultData =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DefaultData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->DefaultData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->DefaultData =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->OutputData =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->OutputData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->OutputData).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->OutputData =
       &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->SendAddress =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SendAddress).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->SendAddress).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SendAddress =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  pTVar1 = &this->Receiver;
  lVar2 = *(longlong *)&param_3->field_0x8;
  (this->CachedSendAddress)._padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  (this->CachedSendAddress).ChannelName = *(FName *)(lVar2 + 8);
  (this->CachedSendAddress).DataType = *(FName *)(lVar2 + 0x10);
  (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar2 + 0x18);
  fVar4 = param_4->TargetBlockRate;
  fVar5 = param_4->ActualBlockRate;
  iVar6 = param_4->NumFramesPerBlock;
  (this->CachedReceiverParams).OperatorSettings.SampleRate = param_4->SampleRate;
  (this->CachedReceiverParams).OperatorSettings.TargetBlockRate = fVar4;
  (this->CachedReceiverParams).OperatorSettings.ActualBlockRate = fVar5;
  (this->CachedReceiverParams).OperatorSettings.NumFramesPerBlock = iVar6;
  pTVar1->Ptr = (TReceiver<Metasound::FWaveTableBankAsset> *)0x0;
  TVar7 = CreateNewReceiver(this);
  if ((TReceiver<Metasound::FWaveTableBankAsset> *)pTVar1 != TVar7.Ptr) {
    pTVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TReceiver<Metasound::FWaveTableBankAsset> *)(TVar7.Ptr)->_padding_;
    (TVar7.Ptr)->_padding_ = 0;
    if (pTVar3 != (TReceiver<Metasound::FWaveTableBankAsset> *)0x0) {
      (**(code **)pTVar3->_padding_)(pTVar3,1);
    }
  }
  if (param_4 != (FOperatorSettings *)0x0) {
    (*(code *)**(undefined8 **)param_4)(param_4,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// ~TReceiverOperator<WaveTable::FWaveTable> @ 14b34eb80

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::
~TReceiverOperator<WaveTable::FWaveTable>(TReceiverOperator<WaveTable::FWaveTable> *this)

{
  TReceiver<WaveTable::FWaveTable> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TReceiverOperator_UFWaveTable_WaveTable___ReceiveNodePrivate_Metasound__6B_;
  ResetReceiverAndCleanupChannel(this);
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<WaveTable::FWaveTable> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DefaultData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34ebe0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TReceiverOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______ReceiveNodePrivate_Metasound__6B_
  ;
  ResetReceiverAndCleanupChannel(this);
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DefaultData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34ec40

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TReceiverOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______ReceiveNodePrivate_Metasound__6B_
  ;
  ResetReceiverAndCleanupChannel(this);
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DefaultData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34eca0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TReceiverOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______ReceiveNodePrivate_Metasound__6B_
  ;
  ResetReceiverAndCleanupChannel(this);
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DefaultData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b34ed00

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
~TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TReceiverOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___ReceiveNodePrivate_Metasound__6B_
  ;
  ResetReceiverAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x60));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x40));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x20));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b34ed60

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
~TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TReceiverOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___ReceiveNodePrivate_Metasound__6B_
  ;
  ResetReceiverAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x60));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x40));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x20));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<Metasound::FAudioBusAsset> @ 14b34edc0

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
~TReceiverOperator<Metasound::FAudioBusAsset>(TReceiverOperator<Metasound::FAudioBusAsset> *this)

{
  TReceiver<Metasound::FAudioBusAsset> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TReceiverOperator_VFAudioBusAsset_Metasound___ReceiveNodePrivate_Metasound__6B_;
  ResetReceiverAndCleanupChannel(this);
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<Metasound::FAudioBusAsset> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DefaultData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<Metasound::FWaveAsset> @ 14b34ee20

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::
~TReceiverOperator<Metasound::FWaveAsset>(TReceiverOperator<Metasound::FWaveAsset> *this)

{
  TReceiver<Metasound::FWaveAsset> *pTVar1;
  
  this->_padding_ =
       (longlong)&___7__TReceiverOperator_VFWaveAsset_Metasound___ReceiveNodePrivate_Metasound__6B_;
  ResetReceiverAndCleanupChannel(this);
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<Metasound::FWaveAsset> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DefaultData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TReceiverOperator<Metasound::FWaveTableBankAsset> @ 14b34ee80

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
~TReceiverOperator<Metasound::FWaveTableBankAsset>
          (TReceiverOperator<Metasound::FWaveTableBankAsset> *this)

{
  TReceiver<Metasound::FWaveTableBankAsset> *pTVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TReceiverOperator_VFWaveTableBankAsset_Metasound___ReceiveNodePrivate_Metasound__6B_;
  ResetReceiverAndCleanupChannel(this);
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<Metasound::FWaveTableBankAsset> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SendAddress).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DefaultData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateNewReceiver @ 14b374d50

TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::CreateNewReceiver
          (TReceiverOperator<WaveTable::FWaveTable> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<WaveTable::FWaveTable> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<WaveTable::FWaveTable> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
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
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<WaveTable::FWaveTable>_>'::__l2::<lambda_1>::operator()
                        (&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<WaveTable::FWaveTable> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<WaveTable::FWaveTable> *)local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b374f77;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b374f77;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b374f77:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b374fb0

TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::CreateNewReceiver
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
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
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                    (*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                  local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b3751d7;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b3751d7;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b3751d7:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b375210

TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::CreateNewReceiver
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                    (*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                      (*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)local_80)
    {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b375437;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b375437;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b375437:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b375470

TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateNewReceiver(TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
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
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                  local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b375697;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b375697;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b375697:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b3756d0

TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
CreateNewReceiver(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x58) + 0x10))
                     (*(longlong **)((longlong)this + 0x58),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x58) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x58);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                       *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   *)local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b3758f7;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b3758f7;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b3758f7:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b375930

TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
CreateNewReceiver(void *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)((longlong)this + 0x58) + 0x10))
                     (*(longlong **)((longlong)this + 0x58),local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)((longlong)this + 0x58) + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       ();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
              )in_RDX;
    }
  }
  this_01 = FDataTransmissionCenter::Get();
  this_00 = *(FSendAddress **)((longlong)this + 0x58);
  pFVar5 = FSendAddress::GetChannelName(this_00);
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  uVar8 = FSendAddress::GetInstanceID(this_00);
  FSendAddress::FSendAddress(&local_58,pFVar5,pFVar6,uVar8);
  in_RDX->_padding_ = 0;
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       ();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'
              ::__l2::<lambda_1>::operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                           ();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *
                  )local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b375b57;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b375b57;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b375b57:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b375b90

TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::CreateNewReceiver
          (TReceiverOperator<Metasound::FAudioBusAsset> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<Metasound::FAudioBusAsset> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<Metasound::FAudioBusAsset> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
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
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>::
              operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<Metasound::FAudioBusAsset> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<Metasound::FAudioBusAsset> *)local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b375db7;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b375db7;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b375db7:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b375df0

TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::CreateNewReceiver
          (TReceiverOperator<Metasound::FWaveAsset> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<Metasound::FWaveAsset> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<Metasound::FWaveAsset> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
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
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<Metasound::FWaveAsset>_>'::__l2::<lambda_1>::operator()
                        (&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<Metasound::FWaveAsset> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<Metasound::FWaveAsset> *)local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b376017;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b376017;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b376017:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
          )in_RDX;
}

// CreateNewReceiver @ 14b376050

TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
 __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::CreateNewReceiver
          (TReceiverOperator<Metasound::FWaveTableBankAsset> *this)

{
  FSendAddress *this_00;
  FTransmissionAddress FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FName *pFVar5;
  FName *pFVar6;
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
  TVar7;
  FDataTransmissionCenter *this_01;
  ulong64 uVar8;
  undefined8 *puVar9;
  FTransmissionAddress FVar10;
  TReceiver<Metasound::FWaveTableBankAsset> *in_RDX;
  FTransmissionAddress local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_a8;
  FTransmissionAddress local_a0;
  FName *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  FString local_68;
  FSendAddress local_58;
  
  plVar4 = *(longlong **)&(this->SendAddress).field_0x8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_90);
  if (*plVar4 != 0) {
    pFVar5 = (FName *)(**(code **)(**(longlong **)&(this->SendAddress).field_0x8 + 0x10))();
    pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
    if (*pFVar6 != *pFVar5) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3419017988815191863>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                         ,0xc9,
                         "SendAddress->GetDataType().IsNone() || (GetMetasoundDataTypeName<TDataType>() == SendAddress->GetDataType())"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Ptr = (TReceiver<Metasound::FWaveTableBankAsset> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
                )TVar7.Ptr;
      }
      in_RDX->_padding_ = 0;
      return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
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
  FDataTransmissionCenter::RegisterNewReceiver(this_01,local_res8,(FReceiverInitParams *)&local_58);
  FVar10 = local_res8[0];
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
    local_res18 = *pFVar5;
    if (*(FName *)((longlong)FVar10 + 8) != local_res18) {
      local_98 = &local_res18;
      local_a0 = FVar10;
      bVar3 = `Metasound::IDataTransmissionBase::
              CheckType<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>::
              operator()(&local_a0);
      if (!bVar3) {
        pFVar5 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
        local_res20 = *pFVar5;
        ::FName::ToString(&local_res20,&local_68);
        local_a8 = *(FName *)((longlong)local_res8[0] + 8);
        ::FName::ToString(&local_a8,(FString *)(local_80 + 8));
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPtr->CheckType<TReceiver<TDataType>>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                           ,0x3e3,
                           L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
        if ((void *)local_80._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          TVar7.Ptr = (TReceiver<Metasound::FWaveTableBankAsset> *)(*pcVar2)();
          return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
                  )TVar7.Ptr;
        }
      }
    }
    FVar10 = local_res8[0];
    local_res8[0] = (FTransmissionAddress)0x0;
    if (in_RDX == (TReceiver<Metasound::FWaveTableBankAsset> *)local_80) {
      if (FVar10 == (FTransmissionAddress)0x0) goto LAB_14b376277;
      puVar9 = *(undefined8 **)FVar10;
    }
    else {
      FVar1 = (FTransmissionAddress)in_RDX->_padding_;
      in_RDX->_padding_ = (longlong)FVar10;
      if (FVar1 == (FTransmissionAddress)0x0) goto LAB_14b376277;
      puVar9 = *(undefined8 **)FVar1;
      FVar10 = FVar1;
    }
    (*(code *)*puVar9)(FVar10,1);
  }
LAB_14b376277:
  if (local_res8[0] != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8[0])(local_res8[0],1);
  }
  return (TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
          )in_RDX;
}

// CreateOperator @ 14b382500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FInputBinding *pFVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
  TReferenceControllerBase<0> *pTVar8;
  TReceiverOperator<WaveTable::FWaveTable> *this;
  TReceiverOperator<WaveTable::FWaveTable> *pTVar9;
  FWaveTable *pFVar10;
  TReferenceControllerBase<0> *pTVar11;
  TReferenceControllerBase<0> *pTVar12;
  FName local_res10;
  FName local_res20;
  FWaveTable *local_110;
  TReferenceControllerBase<0> *pTStack_108;
  FName local_f8;
  FOperatorSettings *local_f0;
  undefined **local_e8 [2];
  longlong local_d8;
  undefined **local_c8;
  TReferenceControllerBase<0> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8;
  FWaveTable *local_a0;
  TReferenceControllerBase<0> *local_98;
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_108 = ::operator_new(0x28);
  pTVar9 = (TReceiverOperator<WaveTable::FWaveTable> *)0x0;
  if (pTStack_108 == (TReferenceControllerBase<0> *)0x0) {
    local_110 = ___xmm_00000000000000000000000000000010;
    pTStack_108 = _UNK_150651568;
  }
  else {
    pTStack_108->SharedReferenceCount = 1;
    local_110 = (FWaveTable *)(pTStack_108 + 1);
    pTStack_108->WeakReferenceCount = 1;
    pTStack_108->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFWaveTable_WaveTable___0A__SharedPointerInternals__6B_
    ;
    pTStack_108[2]._padding_ = 0;
    pTStack_108[1]._padding_ = 0;
    pTStack_108[1].SharedReferenceCount = 0;
    pTStack_108[1].WeakReferenceCount = 0;
    if (local_110 == (FWaveTable *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res10);
  pFVar10 = local_110;
  pTVar11 = pTStack_108;
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar6 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res20);
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
              (&(pFVar6->Data).TypedValue,(TDataReadReference<WaveTable::FWaveTable> *)local_88);
    pTVar11 = pTStack_78;
    pFVar10 = (FWaveTable *)local_88._8_8_;
    local_88._8_8_ = local_110;
    pTStack_78 = pTStack_108;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_108)
    ;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_f0 = pFVar2;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_f8,
                      pFVar2);
  pTVar8 = ::operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
    pTVar8 = (TReferenceControllerBase<0> *)0x0;
    pTVar12 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = 1;
    pTVar8->WeakReferenceCount = 1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFWaveTable_WaveTable___0A__SharedPointerInternals__6B_
    ;
    WaveTable::FWaveTable::FWaveTable((FWaveTable *)(pTVar8 + 1),pFVar10);
    pTVar12 = pTVar8 + 1;
    if (pTVar12 == (TReferenceControllerBase<0> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this = ::operator_new(0xa8);
  if (this != (TReceiverOperator<WaveTable::FWaveTable> *)0x0) {
    local_e8[1] = *(undefined ***)&pTVar7->field_0x8;
    local_d8 = *(longlong *)&pTVar7->field_0x10;
    if (local_d8 != 0) {
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    if (pTVar8 != (TReferenceControllerBase<0> *)0x0) {
      pTVar8->SharedReferenceCount = pTVar8->SharedReferenceCount + 1;
    }
    local_c8 = &___7__TDataWriteReference_UFWaveTable_WaveTable___Metasound__6B_;
    if (pTVar11 != (TReferenceControllerBase<0> *)0x0) {
      pTVar11->SharedReferenceCount = pTVar11->SharedReferenceCount + 1;
    }
    local_a8 = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
    local_c0 = pTVar12;
    local_b8 = pTVar8;
    local_a0 = pFVar10;
    local_98 = pTVar11;
    pTVar9 = TReceiverOperator<WaveTable::FWaveTable>
                       (this,(TDataReadReference<WaveTable::FWaveTable> *)&local_a8,
                        (TDataWriteReference<WaveTable::FWaveTable> *)&local_c8,
                        (TDataReadReference<Metasound::FSendAddress> *)local_e8,local_f0);
  }
  param_1->Node = (INode *)pTVar9;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar11);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b382840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FInputBinding *pFVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
  TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this;
  TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  TReferenceControllerBase<0> *pTStack_118;
  undefined **local_108 [2];
  longlong local_f8;
  undefined **local_e8 [2];
  TReferenceControllerBase<0> *local_d8;
  undefined **local_c8;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_118 = ::operator_new(0x20);
  pTVar8 = (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (pTStack_118 == (TReferenceControllerBase<0> *)0x0) {
    pTStack_118 = _UNK_150651568;
    pTVar9 = ___xmm_00000000000000000000000000000010;
  }
  else {
    pTVar9 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(pTStack_118 + 1);
    pTStack_118->SharedReferenceCount = 1;
    pTStack_118->WeakReferenceCount = 1;
    pTStack_118->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTStack_118[1]._padding_ = 0;
    pTStack_118[1].SharedReferenceCount = 0;
    pTStack_118[1].WeakReferenceCount = 0;
    if (pTVar9 == (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res8);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar6 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res10);
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar6->Data).TypedValue,
               (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )local_88);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_118)
    ;
    pTVar9 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)local_88._8_8_;
    pTStack_118 = pTStack_78;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_res20,
                      pFVar2);
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             local_a8,pTVar9);
  this = ::operator_new(0xa8);
  if (this != (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
              0x0) {
    local_108[1] = *(undefined ***)&pTVar7->field_0x8;
    local_f8 = *(longlong *)&pTVar7->field_0x10;
    if (local_f8 != 0) {
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    }
    local_d8 = (TReferenceControllerBase<0> *)local_a8._16_8_;
    local_108[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    local_e8[1] = (undefined **)local_a8._8_8_;
    if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
    }
    local_e8[0] = &
                  ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    if (pTStack_118 != (TReferenceControllerBase<0> *)0x0) {
      pTStack_118->SharedReferenceCount = pTStack_118->SharedReferenceCount + 1;
    }
    local_c8 = &
               ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_c0 = pTVar9;
    local_b8 = pTStack_118;
    pTVar8 = TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       (this,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                              *)&local_c8,
                        (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_e8,(TDataReadReference<Metasound::FSendAddress> *)local_108,pFVar2)
    ;
  }
  param_1->Node = (INode *)pTVar8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_118);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b382b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FInputBinding *pFVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
  TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this;
  TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  TReferenceControllerBase<0> *pTStack_118;
  undefined **local_108 [2];
  longlong local_f8;
  undefined **local_e8 [2];
  TReferenceControllerBase<0> *local_d8;
  undefined **local_c8;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_118 = ::operator_new(0x20);
  pTVar8 = (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (pTStack_118 == (TReferenceControllerBase<0> *)0x0) {
    pTStack_118 = _UNK_150651568;
    pTVar9 = ___xmm_00000000000000000000000000000010;
  }
  else {
    pTVar9 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(pTStack_118 + 1);
    pTStack_118->SharedReferenceCount = 1;
    pTStack_118->WeakReferenceCount = 1;
    pTStack_118->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTStack_118[1]._padding_ = 0;
    pTStack_118[1].SharedReferenceCount = 0;
    pTStack_118[1].WeakReferenceCount = 0;
    if (pTVar9 == (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res8);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar6 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res10);
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar6->Data).TypedValue,
               (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               local_88);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_118)
    ;
    pTVar9 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)local_88._8_8_;
    pTStack_118 = pTStack_78;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_res20,
                      pFVar2);
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             local_a8,pTVar9);
  this = ::operator_new(0xa8);
  if (this != (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    local_108[1] = *(undefined ***)&pTVar7->field_0x8;
    local_f8 = *(longlong *)&pTVar7->field_0x10;
    if (local_f8 != 0) {
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    }
    local_d8 = (TReferenceControllerBase<0> *)local_a8._16_8_;
    local_108[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    local_e8[1] = (undefined **)local_a8._8_8_;
    if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
    }
    local_e8[0] = &
                  ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    if (pTStack_118 != (TReferenceControllerBase<0> *)0x0) {
      pTStack_118->SharedReferenceCount = pTStack_118->SharedReferenceCount + 1;
    }
    local_c8 = &
               ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_c0 = pTVar9;
    local_b8 = pTStack_118;
    pTVar8 = TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       (this,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                              *)&local_c8,
                        (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_e8,(TDataReadReference<Metasound::FSendAddress> *)local_108,pFVar2)
    ;
  }
  param_1->Node = (INode *)pTVar8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_118);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b382dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FInputBinding *pFVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
  TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this;
  TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar9;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  TReferenceControllerBase<0> *pTStack_118;
  undefined **local_108 [2];
  longlong local_f8;
  undefined **local_e8 [2];
  TReferenceControllerBase<0> *local_d8;
  undefined **local_c8;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_118 = ::operator_new(0x20);
  pTVar8 = (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
           )0x0;
  if (pTStack_118 == (TReferenceControllerBase<0> *)0x0) {
    pTStack_118 = _UNK_150651568;
    pTVar9 = ___xmm_00000000000000000000000000000010;
  }
  else {
    pTVar9 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(pTStack_118 + 1)
    ;
    pTStack_118->SharedReferenceCount = 1;
    pTStack_118->WeakReferenceCount = 1;
    pTStack_118->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTStack_118[1]._padding_ = 0;
    pTStack_118[1].SharedReferenceCount = 0;
    pTStack_118[1].WeakReferenceCount = 0;
    if (pTVar9 == (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res8);
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar6 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res10);
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
              (&(pFVar6->Data).TypedValue,
               (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)local_88);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_118)
    ;
    pTVar9 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)local_88._8_8_;
    pTStack_118 = pTStack_78;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_res20,
                      pFVar2);
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)local_a8,pTVar9);
  this = ::operator_new(0xa8);
  if (this != (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
    local_108[1] = *(undefined ***)&pTVar7->field_0x8;
    local_f8 = *(longlong *)&pTVar7->field_0x10;
    if (local_f8 != 0) {
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    }
    local_d8 = (TReferenceControllerBase<0> *)local_a8._16_8_;
    local_108[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    local_e8[1] = (undefined **)local_a8._8_8_;
    if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
    }
    local_e8[0] = &
                  ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    if (pTStack_118 != (TReferenceControllerBase<0> *)0x0) {
      pTStack_118->SharedReferenceCount = pTStack_118->SharedReferenceCount + 1;
    }
    local_c8 = &
               ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_c0 = pTVar9;
    local_b8 = pTStack_118;
    pTVar8 = TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       (this,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                              *)&local_c8,
                        (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_e8,(TDataReadReference<Metasound::FSendAddress> *)local_108,pFVar2)
    ;
  }
  param_1->Node = (INode *)pTVar8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_118);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b383080

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<0> *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  FInputBinding *pFVar7;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar8;
  TDataReadReference<Metasound::FSendAddress> *pTVar9;
  TReferenceControllerBase<0> *pTVar10;
  void *this;
  TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar11;
  TReferenceControllerBase<0> *pTVar12;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  undefined **local_f8;
  undefined4 *local_f0;
  TReferenceControllerBase<0> *pTStack_e8;
  undefined **local_d8 [2];
  longlong local_c8;
  undefined **local_b8;
  TReferenceControllerBase<0> *local_b0;
  TReferenceControllerBase<0> *local_a8;
  undefined **local_98;
  undefined4 *local_90;
  TReferenceControllerBase<0> *local_88;
  undefined1 local_78 [16];
  TReferenceControllerBase<0> *pTStack_68;
  undefined1 local_58 [32];
  
  TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
  TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
            (&local_f8,NewObject);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_f8 = &
             ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar6 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res8);
  if (bVar6) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar7 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res10);
    if ((pFVar7->Data).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
    }
    if ((pFVar7->Data).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
              (&(pFVar7->Data).TypedValue,
               (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)local_78);
    pTVar12 = pTStack_68;
    uVar5 = local_78._8_8_;
    pTVar10 = pTStack_e8;
    local_78._8_8_ = local_f0;
    pTStack_68 = pTStack_e8;
    local_f0 = (undefined4 *)uVar5;
    pTStack_e8 = pTVar12;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar9 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_58,&local_res20,
                      pFVar2);
  pTVar10 = ::operator_new(0x18);
  pTVar11 = (TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             *)0x0;
  if (pTVar10 == (TReferenceControllerBase<0> *)0x0) {
    pTVar10 = (TReferenceControllerBase<0> *)0x0;
    pTVar12 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar12 = pTVar10 + 1;
    pTVar10->SharedReferenceCount = 1;
    pTVar10->WeakReferenceCount = 1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar10[1]._padding_ = *local_f0;
    if (pTVar12 == (TReferenceControllerBase<0> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar8.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar8.Ptr;
      }
    }
  }
  this = ::operator_new(0xa8);
  pTVar4 = pTStack_e8;
  if (this != (void *)0x0) {
    local_d8[1] = *(undefined ***)&pTVar9->field_0x8;
    local_c8 = *(longlong *)&pTVar9->field_0x10;
    if (local_c8 != 0) {
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    }
    local_d8[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    if (pTVar10 != (TReferenceControllerBase<0> *)0x0) {
      pTVar10->SharedReferenceCount = pTVar10->SharedReferenceCount + 1;
    }
    local_88 = pTStack_e8;
    local_b8 = &
               ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    local_90 = local_f0;
    if (pTStack_e8 != (TReferenceControllerBase<0> *)0x0) {
      pTStack_e8->SharedReferenceCount = pTStack_e8->SharedReferenceCount + 1;
    }
    local_98 = &
               ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    local_b0 = pTVar12;
    local_a8 = pTVar10;
    pTVar11 = TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                        (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                               *)&local_98,
                         (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                          *)&local_b8,(TDataReadReference<Metasound::FSendAddress> *)local_d8,pFVar2
                        );
  }
  param_1->Node = (INode *)pTVar11;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b383310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FInputBinding *pFVar6;
  TDataReadReference<Metasound::FSendAddress> *pTVar7;
  TReferenceControllerBase<0> *pTVar8;
  void *this;
  TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar9;
  TReferenceControllerBase<0> *pTVar10;
  TReferenceControllerBase<0> *pTVar11;
  TReferenceControllerBase<0> *pTVar12;
  FName local_res10;
  FName local_res20;
  TReferenceControllerBase<0> *local_110;
  TReferenceControllerBase<0> *pTStack_108;
  FName local_f8;
  FOperatorSettings *local_f0;
  undefined **local_e8 [2];
  longlong local_d8;
  undefined **local_c8;
  TReferenceControllerBase<0> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8;
  TReferenceControllerBase<0> *local_a0;
  TReferenceControllerBase<0> *local_98;
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_108 = ::operator_new(0x18);
  if (pTStack_108 == (TReferenceControllerBase<0> *)0x0) {
    local_110 = ___xmm_00000000000000000000000000000010;
    pTStack_108 = _UNK_150651568;
  }
  else {
    pTStack_108->SharedReferenceCount = 1;
    pTStack_108->WeakReferenceCount = 1;
    pTStack_108->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(pTStack_108 + 1,Zero);
    local_110 = pTStack_108 + 1;
    if (local_110 == (TReferenceControllerBase<0> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar4 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res10);
  pTVar10 = local_110;
  pTVar11 = pTStack_108;
  if (bVar4) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar6 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res20);
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    if ((pFVar6->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    FAnyDataReference::
    GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
              (&(pFVar6->Data).TypedValue,
               (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)local_88);
    pTVar11 = pTStack_78;
    pTVar10 = (TReferenceControllerBase<0> *)local_88._8_8_;
    local_88._8_8_ = local_110;
    pTStack_78 = pTStack_108;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_108)
    ;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_f0 = pFVar2;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar7 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_f8,
                      pFVar2);
  pTVar8 = ::operator_new(0x18);
  pTVar9 = (TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            *)0x0;
  if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
    pTVar8 = (TReferenceControllerBase<0> *)0x0;
    pTVar12 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = 1;
    pTVar12 = pTVar8 + 1;
    pTVar8->WeakReferenceCount = 1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    *(int *)&pTVar8[1]._padding_ = (int)pTVar10->_padding_;
    if (pTVar12 == (TReferenceControllerBase<0> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this = ::operator_new(0xa8);
  if (this != (void *)0x0) {
    local_e8[1] = *(undefined ***)&pTVar7->field_0x8;
    local_d8 = *(longlong *)&pTVar7->field_0x10;
    if (local_d8 != 0) {
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    if (pTVar8 != (TReferenceControllerBase<0> *)0x0) {
      pTVar8->SharedReferenceCount = pTVar8->SharedReferenceCount + 1;
    }
    local_c8 = &
               ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    if (pTVar11 != (TReferenceControllerBase<0> *)0x0) {
      pTVar11->SharedReferenceCount = pTVar11->SharedReferenceCount + 1;
    }
    local_a8 = &
               ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    local_c0 = pTVar12;
    local_b8 = pTVar8;
    local_a0 = pTVar10;
    local_98 = pTVar11;
    pTVar9 = TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                       (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                              *)&local_a8,
                        (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         *)&local_c8,(TDataReadReference<Metasound::FSendAddress> *)local_e8,
                        local_f0);
  }
  param_1->Node = (INode *)pTVar9;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar11);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b383650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FInputBinding *pFVar7;
  TDataReadReference<Metasound::FSendAddress> *pTVar8;
  TReferenceControllerBase<0> *pTVar9;
  TReceiverOperator<Metasound::FAudioBusAsset> *this;
  TReceiverOperator<Metasound::FAudioBusAsset> *pTVar10;
  TReferenceControllerBase<0> *pTVar11;
  TReferenceControllerBase<0> *pTVar12;
  TReferenceControllerBase<0> *pTVar13;
  FName local_res10;
  FName local_res20;
  TReferenceControllerBase<0> *local_110;
  TReferenceControllerBase<0> *pTStack_108;
  FName local_f8;
  FOperatorSettings *local_f0;
  undefined **local_e8 [2];
  longlong local_d8;
  undefined **local_c8;
  TReferenceControllerBase<0> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8;
  TReferenceControllerBase<0> *local_a0;
  TReferenceControllerBase<0> *local_98;
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_108 = ::operator_new(0x20);
  pTVar10 = (TReceiverOperator<Metasound::FAudioBusAsset> *)0x0;
  if (pTStack_108 == (TReferenceControllerBase<0> *)0x0) {
    local_110 = ___xmm_00000000000000000000000000000010;
    pTStack_108 = _UNK_150651568;
  }
  else {
    local_110 = pTStack_108 + 1;
    pTStack_108->SharedReferenceCount = 1;
    pTStack_108->WeakReferenceCount = 1;
    pTStack_108->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBusAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTStack_108[1]._padding_ = 0;
    pTStack_108[1].SharedReferenceCount = 0;
    pTStack_108[1].WeakReferenceCount = 0;
    if (local_110 == (TReferenceControllerBase<0> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar5 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res10);
  pTVar11 = pTStack_108;
  pTVar12 = local_110;
  if (bVar5) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar7 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res20);
    if ((pFVar7->Data).bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    if ((pFVar7->Data).bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBusAsset> *)local_88)
    ;
    pTVar11 = pTStack_78;
    pTVar12 = (TReferenceControllerBase<0> *)local_88._8_8_;
    local_88._8_8_ = local_110;
    pTStack_78 = pTStack_108;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_108)
    ;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_f0 = pFVar2;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar8 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_f8,
                      pFVar2);
  pTVar9 = ::operator_new(0x20);
  if (pTVar9 == (TReferenceControllerBase<0> *)0x0) {
    pTVar9 = (TReferenceControllerBase<0> *)0x0;
    pTVar13 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = 1;
    pTVar9->WeakReferenceCount = 1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBusAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = pTVar12->_padding_;
    lVar3 = *(longlong *)&pTVar12->SharedReferenceCount;
    pTVar9[1].SharedReferenceCount = (int)lVar3;
    pTVar9[1].WeakReferenceCount = (int)((ulonglong)lVar3 >> 0x20);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    pTVar13 = pTVar9 + 1;
    if (pTVar13 == (TReferenceControllerBase<0> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
  }
  this = ::operator_new(0xa8);
  if (this != (TReceiverOperator<Metasound::FAudioBusAsset> *)0x0) {
    local_e8[1] = *(undefined ***)&pTVar8->field_0x8;
    local_d8 = *(longlong *)&pTVar8->field_0x10;
    if (local_d8 != 0) {
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    if (pTVar9 != (TReferenceControllerBase<0> *)0x0) {
      pTVar9->SharedReferenceCount = pTVar9->SharedReferenceCount + 1;
    }
    local_c8 = &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    if (pTVar11 != (TReferenceControllerBase<0> *)0x0) {
      pTVar11->SharedReferenceCount = pTVar11->SharedReferenceCount + 1;
    }
    local_a8 = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    local_c0 = pTVar13;
    local_b8 = pTVar9;
    local_a0 = pTVar12;
    local_98 = pTVar11;
    pTVar10 = TReceiverOperator<Metasound::FAudioBusAsset>
                        (this,(TDataReadReference<Metasound::FAudioBusAsset> *)&local_a8,
                         (TDataWriteReference<Metasound::FAudioBusAsset> *)&local_c8,
                         (TDataReadReference<Metasound::FSendAddress> *)local_e8,local_f0);
  }
  param_1->Node = (INode *)pTVar10;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar11);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b3839a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FInputBinding *pFVar7;
  TDataReadReference<Metasound::FSendAddress> *pTVar8;
  TReferenceControllerBase<0> *pTVar9;
  TReceiverOperator<Metasound::FWaveAsset> *this;
  TReceiverOperator<Metasound::FWaveAsset> *pTVar10;
  TReferenceControllerBase<0> *pTVar11;
  TReferenceControllerBase<0> *pTVar12;
  TReferenceControllerBase<0> *pTVar13;
  FName local_res10;
  FName local_res20;
  TReferenceControllerBase<0> *local_110;
  TReferenceControllerBase<0> *pTStack_108;
  FName local_f8;
  FOperatorSettings *local_f0;
  undefined **local_e8 [2];
  longlong local_d8;
  undefined **local_c8;
  TReferenceControllerBase<0> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8;
  TReferenceControllerBase<0> *local_a0;
  TReferenceControllerBase<0> *local_98;
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_108 = ::operator_new(0x20);
  pTVar10 = (TReceiverOperator<Metasound::FWaveAsset> *)0x0;
  if (pTStack_108 == (TReferenceControllerBase<0> *)0x0) {
    local_110 = ___xmm_00000000000000000000000000000010;
    pTStack_108 = _UNK_150651568;
  }
  else {
    local_110 = pTStack_108 + 1;
    pTStack_108->SharedReferenceCount = 1;
    pTStack_108->WeakReferenceCount = 1;
    pTStack_108->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTStack_108[1]._padding_ = 0;
    pTStack_108[1].SharedReferenceCount = 0;
    pTStack_108[1].WeakReferenceCount = 0;
    if (local_110 == (TReferenceControllerBase<0> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar5 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res10);
  pTVar11 = pTStack_108;
  pTVar12 = local_110;
  if (bVar5) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar7 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res20);
    if ((pFVar7->Data).bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    if ((pFVar7->Data).bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FWaveAsset> *)local_88);
    pTVar11 = pTStack_78;
    pTVar12 = (TReferenceControllerBase<0> *)local_88._8_8_;
    local_88._8_8_ = local_110;
    pTStack_78 = pTStack_108;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_108)
    ;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_f0 = pFVar2;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar8 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_f8,
                      pFVar2);
  pTVar9 = ::operator_new(0x20);
  if (pTVar9 == (TReferenceControllerBase<0> *)0x0) {
    pTVar9 = (TReferenceControllerBase<0> *)0x0;
    pTVar13 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = 1;
    pTVar9->WeakReferenceCount = 1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = pTVar12->_padding_;
    lVar3 = *(longlong *)&pTVar12->SharedReferenceCount;
    pTVar9[1].SharedReferenceCount = (int)lVar3;
    pTVar9[1].WeakReferenceCount = (int)((ulonglong)lVar3 >> 0x20);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    pTVar13 = pTVar9 + 1;
    if (pTVar13 == (TReferenceControllerBase<0> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
  }
  this = ::operator_new(0xa8);
  if (this != (TReceiverOperator<Metasound::FWaveAsset> *)0x0) {
    local_e8[1] = *(undefined ***)&pTVar8->field_0x8;
    local_d8 = *(longlong *)&pTVar8->field_0x10;
    if (local_d8 != 0) {
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    if (pTVar9 != (TReferenceControllerBase<0> *)0x0) {
      pTVar9->SharedReferenceCount = pTVar9->SharedReferenceCount + 1;
    }
    local_c8 = &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
    if (pTVar11 != (TReferenceControllerBase<0> *)0x0) {
      pTVar11->SharedReferenceCount = pTVar11->SharedReferenceCount + 1;
    }
    local_a8 = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
    local_c0 = pTVar13;
    local_b8 = pTVar9;
    local_a0 = pTVar12;
    local_98 = pTVar11;
    pTVar10 = TReceiverOperator<Metasound::FWaveAsset>
                        (this,(TDataReadReference<Metasound::FWaveAsset> *)&local_a8,
                         (TDataWriteReference<Metasound::FWaveAsset> *)&local_c8,
                         (TDataReadReference<Metasound::FSendAddress> *)local_e8,local_f0);
  }
  param_1->Node = (INode *)pTVar10;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar11);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b383cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FInputBinding *pFVar7;
  TDataReadReference<Metasound::FSendAddress> *pTVar8;
  TReferenceControllerBase<0> *pTVar9;
  TReceiverOperator<Metasound::FWaveTableBankAsset> *this;
  TReceiverOperator<Metasound::FWaveTableBankAsset> *pTVar10;
  TReferenceControllerBase<0> *pTVar11;
  TReferenceControllerBase<0> *pTVar12;
  TReferenceControllerBase<0> *pTVar13;
  FName local_res10;
  FName local_res20;
  TReferenceControllerBase<0> *local_110;
  TReferenceControllerBase<0> *pTStack_108;
  FName local_f8;
  FOperatorSettings *local_f0;
  undefined **local_e8 [2];
  longlong local_d8;
  undefined **local_c8;
  TReferenceControllerBase<0> *local_c0;
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8;
  TReferenceControllerBase<0> *local_a0;
  TReferenceControllerBase<0> *local_98;
  undefined1 local_88 [16];
  TReferenceControllerBase<0> *pTStack_78;
  undefined1 local_68 [48];
  
  pTStack_108 = ::operator_new(0x20);
  pTVar10 = (TReceiverOperator<Metasound::FWaveTableBankAsset> *)0x0;
  if (pTStack_108 == (TReferenceControllerBase<0> *)0x0) {
    local_110 = ___xmm_00000000000000000000000000000010;
    pTStack_108 = _UNK_150651568;
  }
  else {
    local_110 = pTStack_108 + 1;
    pTStack_108->SharedReferenceCount = 1;
    pTStack_108->WeakReferenceCount = 1;
    pTStack_108->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveTableBankAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTStack_108[1]._padding_ = 0;
    pTStack_108[1].SharedReferenceCount = 0;
    pTStack_108[1].WeakReferenceCount = 0;
    if (local_110 == (TReferenceControllerBase<0> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
  }
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
  bVar5 = FInputVertexInterfaceData::IsVertexBound(pFVar1,&local_res10);
  pTVar11 = pTStack_108;
  pTVar12 = local_110;
  if (bVar5) {
    pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
    FLazyName::Resolve(&ReceiveNodeInfo::DefaultDataInputName);
    pFVar7 = FInputVertexInterfaceData::FindChecked(pFVar1,&local_res20);
    if ((pFVar7->Data).bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x10e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    if ((pFVar7->Data).bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
              (&(pFVar7->Data).TypedValue,
               (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_88);
    pTVar11 = pTStack_78;
    pTVar12 = (TReferenceControllerBase<0> *)local_88._8_8_;
    local_88._8_8_ = local_110;
    pTStack_78 = pTStack_108;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_108)
    ;
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_f0 = pFVar2;
  FLazyName::Resolve(&ReceiveNodeInfo::AddressInputName);
  pTVar8 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
                     (pFVar1,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_f8,
                      pFVar2);
  pTVar9 = ::operator_new(0x20);
  if (pTVar9 == (TReferenceControllerBase<0> *)0x0) {
    pTVar9 = (TReferenceControllerBase<0> *)0x0;
    pTVar13 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = 1;
    pTVar9->WeakReferenceCount = 1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveTableBankAsset_Metasound___0A__SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = pTVar12->_padding_;
    lVar3 = *(longlong *)&pTVar12->SharedReferenceCount;
    pTVar9[1].SharedReferenceCount = (int)lVar3;
    pTVar9[1].WeakReferenceCount = (int)((ulonglong)lVar3 >> 0x20);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    pTVar13 = pTVar9 + 1;
    if (pTVar13 == (TReferenceControllerBase<0> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar4)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
  }
  this = ::operator_new(0xa8);
  if (this != (TReceiverOperator<Metasound::FWaveTableBankAsset> *)0x0) {
    local_e8[1] = *(undefined ***)&pTVar8->field_0x8;
    local_d8 = *(longlong *)&pTVar8->field_0x10;
    if (local_d8 != 0) {
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
    if (pTVar9 != (TReferenceControllerBase<0> *)0x0) {
      pTVar9->SharedReferenceCount = pTVar9->SharedReferenceCount + 1;
    }
    local_c8 = &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    if (pTVar11 != (TReferenceControllerBase<0> *)0x0) {
      pTVar11->SharedReferenceCount = pTVar11->SharedReferenceCount + 1;
    }
    local_a8 = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    local_c0 = pTVar13;
    local_b8 = pTVar9;
    local_a0 = pTVar12;
    local_98 = pTVar11;
    pTVar10 = TReceiverOperator<Metasound::FWaveTableBankAsset>
                        (this,(TDataReadReference<Metasound::FWaveTableBankAsset> *)&local_a8,
                         (TDataWriteReference<Metasound::FWaveTableBankAsset> *)&local_c8,
                         (TDataReadReference<Metasound::FSendAddress> *)local_e8,local_f0);
  }
  param_1->Node = (INode *)pTVar10;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar11);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b38ecf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<WaveTable::FWaveTable> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<WaveTable::FWaveTable> local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_98;
  TInputDataVertex<WaveTable::FWaveTable> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::
             DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<WaveTable::FWaveTable>::TOutputDataVertex<WaveTable::FWaveTable><>
                     (&local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
                     (&local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b38f130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_98;
  TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b38f570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_98;
  TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b38f9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_98;
  TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__
            );
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           TOutputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
           TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
                     (&local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b38fdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  undefined1 local_b8 [32];
  TInputDataVertex<Metasound::FSendAddress> local_98;
  undefined1 local_60 [32];
  undefined1 local_40 [16];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__
            );
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::
           TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
                     (local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           ::
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
                     (local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < local_30) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_30])(local_40);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b390230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  undefined1 local_b8 [32];
  TInputDataVertex<Metasound::FSendAddress> local_98;
  undefined1 local_60 [32];
  undefined1 local_40 [16];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__
            );
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::
           TOutputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
                     (local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           ::
           TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
                     (local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < local_30) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_30])(local_40);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b390670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBusAsset> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<Metasound::FAudioBusAsset> local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_98;
  TInputDataVertex<Metasound::FAudioBusAsset> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
             DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<Metasound::FAudioBusAsset>::
           TOutputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b390ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FWaveAsset> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<Metasound::FWaveAsset> local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_98;
  TInputDataVertex<Metasound::FWaveAsset> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::
             DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<Metasound::FWaveAsset>::TOutputDataVertex<Metasound::FWaveAsset><>
                     (&local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FWaveAsset>::TInputDataVertex<Metasound::FWaveAsset><>
                     (&local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// DeclareVertexInterface @ 14b390ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FWaveTableBankAsset> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  FText *pFVar7;
  int *piVar8;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  FOutputVertexInterface local_128;
  FInputVertexInterfaceDeclarationBuilder local_108;
  FOutputVertexInterfaceDeclarationBuilder local_e0;
  TOutputDataVertex<Metasound::FWaveTableBankAsset> local_b8;
  TInputDataVertex<Metasound::FSendAddress> local_98;
  TInputDataVertex<Metasound::FWaveTableBankAsset> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
          ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                      ::__l2::AddressInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                   ::__l2::AddressInputMetadata.Description.TextData.Reference,local_138);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                    ::__l2::AddressInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference
      ;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
          ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                   ::__l2::DefaultDataInputMetadata.Description.TextData.Reference,local_134);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                    ::__l2::DefaultDataInputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
             DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultDataInputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pFVar7 = FText::GetEmpty();
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference = (pFVar7->TextData).Reference;
      if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
          ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                      ::__l2::OutputMetadata.Description.TextData.Reference + 8))
                  (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                   ::__l2::OutputMetadata.Description.TextData.Reference,local_130);
      }
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.Flags = pFVar7->Flags;
      FText::FText(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                    ::__l2::OutputMetadata.DisplayName);
      `public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.bIsAdvancedDisplay = false;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
             DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  pTVar3 = TOutputDataVertex<Metasound::FWaveTableBankAsset>::
           TOutputDataVertex<Metasound::FWaveTableBankAsset><>
                     (&local_b8,&ReceiveNodeInfo::OutputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                       ::__l2::OutputMetadata);
  FOutputVertexInterface::FOutputVertexInterface(&local_128);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_e0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_128,
             &local_128.SubInterfaces);
  if ((local_e0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_e0.Vertices)->AllocatorInstance,(local_e0.Vertices)->ArrayNum,
               &(local_e0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_e0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_e0);
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FWaveTableBankAsset>::
           TInputDataVertex<Metasound::FWaveTableBankAsset><>
                     (&local_60,&ReceiveNodeInfo::DefaultDataInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                       ::__l2::DefaultDataInputMetadata);
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FSendAddress>::TInputDataVertex<Metasound::FSendAddress><>
                     (&local_98,&ReceiveNodeInfo::AddressInputName,
                      &`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::DeclareVertexInterface(void)'
                       ::__l2::AddressInputMetadata);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_108,
             (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
             &local_158.SubInterfaces);
  if ((local_108.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,2,&(local_108.Vertices)->AllocatorInstance,(local_108.Vertices)->ArrayNum,
               &(local_108.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar5);
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_108,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_108);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_128);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// Execute @ 14b39da90

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::Execute
          (TReceiverOperator<WaveTable::FWaveTable> *this)

{
  TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
  *pTVar1;
  TReceiver<WaveTable::FWaveTable> *pTVar2;
  FWaveTable *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TUniquePtr<Metasound::TReceiver<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TReceiver<WaveTable::FWaveTable>_>_>
  TVar8;
  longlong lVar9;
  undefined8 *local_res8;
  
  bVar6 = FTransmissionAddress::operator!=
                    (*(FTransmissionAddress **)&(this->SendAddress).field_0x8,
                     (FTransmissionAddress *)&this->CachedSendAddress);
  if (bVar6) {
    ResetReceiverAndCleanupChannel(this);
    lVar9 = *(longlong *)&(this->SendAddress).field_0x8;
    (this->CachedSendAddress).ChannelName = *(FName *)(lVar9 + 8);
    (this->CachedSendAddress).DataType = *(FName *)(lVar9 + 0x10);
    (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar9 + 0x18);
    TVar8 = CreateNewReceiver(this);
    pTVar1 = &this->Receiver;
    if ((TReceiver<WaveTable::FWaveTable> *)pTVar1 != TVar8.Ptr) {
      pTVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TReceiver<WaveTable::FWaveTable> *)(TVar8.Ptr)->_padding_;
      (TVar8.Ptr)->_padding_ = 0;
      if (pTVar2 != (TReceiver<WaveTable::FWaveTable> *)0x0) {
        (**(code **)pTVar2->_padding_)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  pTVar2 = (this->Receiver).Ptr;
  if (pTVar2 == (TReceiver<WaveTable::FWaveTable> *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (pTVar2->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar9 = (**(code **)(*(longlong *)pTVar2->_padding_ + 8))();
    if (lVar9 != pTVar2->LastPayloadID) {
      if (pTVar2->_padding_ == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      cVar7 = (**(code **)(*(longlong *)pTVar2->_padding_ + 0x28))();
      if (cVar7 == '\0') {
        pTVar2 = (this->Receiver).Ptr;
        pTVar4 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->OutputData).field_0x8;
        if (pTVar2->_padding_ == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        (**(code **)(*(longlong *)pTVar2->_padding_ + 0x20))((longlong *)pTVar2->_padding_,pTVar2);
        if ((pTVar2->Payload).Ptr == (FWaveTable *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                             ,0x225,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar3 = (pTVar2->Payload).Ptr;
        TArray<float,TSizedDefaultAllocator<32>_>::operator=(pTVar4,&pFVar3->Samples);
        *(float *)&pTVar4[1].AllocatorInstance.Data = pFVar3->FinalValue;
        this->bHasNotReceivedData = false;
      }
    }
  }
  if (this->bHasNotReceivedData != false) {
    pTVar4 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->DefaultData).field_0x8;
    this_00 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->OutputData).field_0x8;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar4);
    *(undefined4 *)&this_00[1].AllocatorInstance.Data =
         *(undefined4 *)&pTVar4[1].AllocatorInstance.Data;
  }
  return;
}

// Execute @ 14b39dcb0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar6;
  longlong lVar7;
  undefined8 *local_res8;
  
  bVar4 = FTransmissionAddress::operator!=
                    (*(FTransmissionAddress **)&(this->SendAddress).field_0x8,
                     (FTransmissionAddress *)&this->CachedSendAddress);
  if (bVar4) {
    ResetReceiverAndCleanupChannel(this);
    lVar7 = *(longlong *)&(this->SendAddress).field_0x8;
    (this->CachedSendAddress).ChannelName = *(FName *)(lVar7 + 8);
    (this->CachedSendAddress).DataType = *(FName *)(lVar7 + 0x10);
    (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar7 + 0x18);
    TVar6 = CreateNewReceiver(this);
    pTVar1 = &this->Receiver;
    if ((TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 !=
        TVar6.Ptr) {
      pTVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
                    (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (pTVar2 != (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0
         ) {
        (**(code **)pTVar2->_padding_)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  pTVar2 = (this->Receiver).Ptr;
  if (pTVar2 == (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (pTVar2->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar7 = (**(code **)(*(longlong *)pTVar2->_padding_ + 8))();
    if (lVar7 != pTVar2->LastPayloadID) {
      if (pTVar2->_padding_ == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      cVar5 = (**(code **)(*(longlong *)pTVar2->_padding_ + 0x28))();
      if (cVar5 == '\0') {
        pTVar2 = (this->Receiver).Ptr;
        this_00 = *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
                   &(this->OutputData).field_0x8;
        if (pTVar2->_padding_ == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (**(code **)(*(longlong *)pTVar2->_padding_ + 0x20))((longlong *)pTVar2->_padding_,pTVar2);
        if ((pTVar2->Payload).Ptr ==
            (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                             ,0x225,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
                  (this_00,(pTVar2->Payload).Ptr);
        this->bHasNotReceivedData = false;
      }
    }
  }
  if (this->bHasNotReceivedData != false) {
    TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
              (*(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
                &(this->OutputData).field_0x8,
               *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
                &(this->DefaultData).field_0x8);
    return;
  }
  return;
}

// Execute @ 14b39dec0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar6;
  longlong lVar7;
  undefined8 *local_res8;
  
  bVar4 = FTransmissionAddress::operator!=
                    (*(FTransmissionAddress **)&(this->SendAddress).field_0x8,
                     (FTransmissionAddress *)&this->CachedSendAddress);
  if (bVar4) {
    ResetReceiverAndCleanupChannel(this);
    lVar7 = *(longlong *)&(this->SendAddress).field_0x8;
    (this->CachedSendAddress).ChannelName = *(FName *)(lVar7 + 8);
    (this->CachedSendAddress).DataType = *(FName *)(lVar7 + 0x10);
    (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar7 + 0x18);
    TVar6 = CreateNewReceiver(this);
    pTVar1 = &this->Receiver;
    if ((TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 != TVar6.Ptr
       ) {
      pTVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                    (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (pTVar2 != (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
        (**(code **)pTVar2->_padding_)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  pTVar2 = (this->Receiver).Ptr;
  if (pTVar2 == (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (pTVar2->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar7 = (**(code **)(*(longlong *)pTVar2->_padding_ + 8))();
    if (lVar7 != pTVar2->LastPayloadID) {
      if (pTVar2->_padding_ == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      cVar5 = (**(code **)(*(longlong *)pTVar2->_padding_ + 0x28))();
      if (cVar5 == '\0') {
        pTVar2 = (this->Receiver).Ptr;
        this_00 = *(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
                   &(this->OutputData).field_0x8;
        if (pTVar2->_padding_ == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (**(code **)(*(longlong *)pTVar2->_padding_ + 0x20))((longlong *)pTVar2->_padding_,pTVar2);
        if ((pTVar2->Payload).Ptr ==
            (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                             ,0x225,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
                  (this_00,(pTVar2->Payload).Ptr);
        this->bHasNotReceivedData = false;
      }
    }
  }
  if (this->bHasNotReceivedData != false) {
    TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
              (*(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
                &(this->OutputData).field_0x8,
               *(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
                &(this->DefaultData).field_0x8);
    return;
  }
  return;
}

// Execute @ 14b39e0d0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Execute
          (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TUniquePtr<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar6;
  longlong lVar7;
  undefined8 *local_res8;
  
  bVar4 = FTransmissionAddress::operator!=
                    (*(FTransmissionAddress **)&(this->SendAddress).field_0x8,
                     (FTransmissionAddress *)&this->CachedSendAddress);
  if (bVar4) {
    ResetReceiverAndCleanupChannel(this);
    lVar7 = *(longlong *)&(this->SendAddress).field_0x8;
    (this->CachedSendAddress).ChannelName = *(FName *)(lVar7 + 8);
    (this->CachedSendAddress).DataType = *(FName *)(lVar7 + 0x10);
    (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar7 + 0x18);
    TVar6 = CreateNewReceiver(this);
    pTVar1 = &this->Receiver;
    if ((TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)pTVar1 !=
        TVar6.Ptr) {
      pTVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     *)(TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (pTVar2 != (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        (**(code **)pTVar2->_padding_)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  pTVar2 = (this->Receiver).Ptr;
  if (pTVar2 == (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (pTVar2->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar7 = (**(code **)(*(longlong *)pTVar2->_padding_ + 8))();
    if (lVar7 != pTVar2->LastPayloadID) {
      if (pTVar2->_padding_ == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      cVar5 = (**(code **)(*(longlong *)pTVar2->_padding_ + 0x28))();
      if (cVar5 == '\0') {
        pTVar2 = (this->Receiver).Ptr;
        this_00 = *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
                   &(this->OutputData).field_0x8;
        if (pTVar2->_padding_ == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (**(code **)(*(longlong *)pTVar2->_padding_ + 0x20))((longlong *)pTVar2->_padding_,pTVar2);
        if ((pTVar2->Payload).Ptr ==
            (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                             ,0x225,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
                  (this_00,(pTVar2->Payload).Ptr);
        this->bHasNotReceivedData = false;
      }
    }
  }
  if (this->bHasNotReceivedData != false) {
    TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
              (*(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
                &(this->OutputData).field_0x8,
               *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
                &(this->DefaultData).field_0x8);
    return;
  }
  return;
}

// Execute @ 14b39e2e0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
Execute(void *this)

{
  TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  TVar8;
  longlong lVar9;
  undefined8 *local_res8;
  
  bVar6 = FTransmissionAddress::operator!=
                    (*(FTransmissionAddress **)((longlong)this + 0x58),
                     (FTransmissionAddress *)((longlong)this + 0x70));
  if (bVar6) {
    ResetReceiverAndCleanupChannel(this);
    lVar2 = *(longlong *)((longlong)this + 0x58);
    *(undefined8 *)((longlong)this + 0x78) = *(undefined8 *)(lVar2 + 8);
    *(undefined8 *)((longlong)this + 0x80) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)(lVar2 + 0x18);
    TVar8 = CreateNewReceiver(this);
    pTVar1 = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
             ((longlong)this + 0xa0);
    if (pTVar1 != TVar8.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar8.Ptr)->_padding_;
      (TVar8.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  lVar2 = *(longlong *)((longlong)this + 0xa0);
  if (lVar2 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar9 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
    if (lVar9 != *(longlong *)(lVar2 + 0x20)) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      cVar7 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x28))();
      if (cVar7 == '\0') {
        lVar2 = *(longlong *)((longlong)this + 0xa0);
        puVar4 = *(undefined4 **)((longlong)this + 0x38);
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x20))(*(longlong **)(lVar2 + 0x10),lVar2);
        if (*(longlong *)(lVar2 + 0x28) == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                             ,0x225,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *puVar4 = **(undefined4 **)(lVar2 + 0x28);
        *(undefined1 *)((longlong)this + 8) = 0;
      }
    }
  }
  if (*(char *)((longlong)this + 8) != '\0') {
    **(undefined4 **)((longlong)this + 0x38) = **(undefined4 **)((longlong)this + 0x18);
  }
  return;
}

// Execute @ 14b39e4f0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
Execute(void *this)

{
  TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  TVar8;
  longlong lVar9;
  undefined8 *local_res8;
  
  bVar6 = FTransmissionAddress::operator!=
                    (*(FTransmissionAddress **)((longlong)this + 0x58),
                     (FTransmissionAddress *)((longlong)this + 0x70));
  if (bVar6) {
    ResetReceiverAndCleanupChannel(this);
    lVar2 = *(longlong *)((longlong)this + 0x58);
    *(undefined8 *)((longlong)this + 0x78) = *(undefined8 *)(lVar2 + 8);
    *(undefined8 *)((longlong)this + 0x80) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)(lVar2 + 0x18);
    TVar8 = CreateNewReceiver(this);
    pTVar1 = (TReceiver<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
             ((longlong)this + 0xa0);
    if (pTVar1 != TVar8.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar8.Ptr)->_padding_;
      (TVar8.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  lVar2 = *(longlong *)((longlong)this + 0xa0);
  if (lVar2 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar9 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 8))();
    if (lVar9 != *(longlong *)(lVar2 + 0x20)) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      cVar7 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x28))();
      if (cVar7 == '\0') {
        lVar2 = *(longlong *)((longlong)this + 0xa0);
        puVar4 = *(undefined4 **)((longlong)this + 0x38);
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x20))(*(longlong **)(lVar2 + 0x10),lVar2);
        if (*(longlong *)(lVar2 + 0x28) == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payload.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                             ,0x225,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *puVar4 = **(undefined4 **)(lVar2 + 0x28);
        *(undefined1 *)((longlong)this + 8) = 0;
      }
    }
  }
  if (*(char *)((longlong)this + 8) != '\0') {
    **(undefined4 **)((longlong)this + 0x38) = **(undefined4 **)((longlong)this + 0x18);
  }
  return;
}

// Execute @ 14b39e700

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::Execute
          (TReceiverOperator<Metasound::FAudioBusAsset> *this)

{
  TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
  *pTVar1;
  TReceiver<Metasound::FAudioBusAsset> *pTVar2;
  FAudioBusAsset *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FAudioBusProxy *pFVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  char cVar12;
  TUniquePtr<Metasound::TReceiver<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FAudioBusAsset>_>_>
  TVar13;
  longlong lVar14;
  undefined8 *local_res8;
  
  bVar11 = FTransmissionAddress::operator!=
                     (*(FTransmissionAddress **)&(this->SendAddress).field_0x8,
                      (FTransmissionAddress *)&this->CachedSendAddress);
  if (bVar11) {
    ResetReceiverAndCleanupChannel(this);
    lVar14 = *(longlong *)&(this->SendAddress).field_0x8;
    (this->CachedSendAddress).ChannelName = *(FName *)(lVar14 + 8);
    (this->CachedSendAddress).DataType = *(FName *)(lVar14 + 0x10);
    (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar14 + 0x18);
    TVar13 = CreateNewReceiver(this);
    pTVar1 = &this->Receiver;
    if ((TReceiver<Metasound::FAudioBusAsset> *)pTVar1 != TVar13.Ptr) {
      pTVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TReceiver<Metasound::FAudioBusAsset> *)(TVar13.Ptr)->_padding_;
      (TVar13.Ptr)->_padding_ = 0;
      if (pTVar2 != (TReceiver<Metasound::FAudioBusAsset> *)0x0) {
        (**(code **)pTVar2->_padding_)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  pTVar2 = (this->Receiver).Ptr;
  if (pTVar2 == (TReceiver<Metasound::FAudioBusAsset> *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3419017988815191922>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                        ,0x8e,"Receiver.IsValid()");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if (pTVar2->_padding_ == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar14 = (**(code **)(*(longlong *)pTVar2->_padding_ + 8))();
    if (lVar14 != pTVar2->LastPayloadID) {
      if (pTVar2->_padding_ == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      cVar12 = (**(code **)(*(longlong *)pTVar2->_padding_ + 0x28))();
      if (cVar12 == '\0') {
        pTVar2 = (this->Receiver).Ptr;
        puVar6 = *(undefined8 **)&(this->OutputData).field_0x8;
        if (pTVar2->_padding_ == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        (**(code **)(*(longlong *)pTVar2->_padding_ + 0x20))((longlong *)pTVar2->_padding_,pTVar2);
        if ((pTVar2->Payload).Ptr == (FAudioBusAsset *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payload.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                              ,0x225,L"");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pFVar3 = (pTVar2->Payload).Ptr;
        pTVar4 = (pFVar3->AudioBusProxy).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar3->AudioBusProxy).Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar10 = (TReferenceControllerBase<1> *)puVar6[1];
        *puVar6 = pFVar5;
        puVar6[1] = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        this->bHasNotReceivedData = false;
      }
    }
  }
  if (this->bHasNotReceivedData != false) {
    puVar6 = *(undefined8 **)&(this->DefaultData).field_0x8;
    puVar7 = *(undefined8 **)&(this->OutputData).field_0x8;
    lVar14 = puVar6[1];
    uVar8 = *puVar6;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = (TReferenceControllerBase<1> *)puVar7[1];
    *puVar7 = uVar8;
    puVar7[1] = lVar14;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// Execute @ 14b39e960

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::Execute
          (TReceiverOperator<Metasound::FWaveAsset> *this)

{
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
  *pTVar1;
  TReceiver<Metasound::FWaveAsset> *pTVar2;
  FWaveAsset *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSoundWaveProxy *pFVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  char cVar12;
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveAsset>_>_>
  TVar13;
  longlong lVar14;
  undefined8 *local_res8;
  
  bVar11 = FTransmissionAddress::operator!=
                     (*(FTransmissionAddress **)&(this->SendAddress).field_0x8,
                      (FTransmissionAddress *)&this->CachedSendAddress);
  if (bVar11) {
    ResetReceiverAndCleanupChannel(this);
    lVar14 = *(longlong *)&(this->SendAddress).field_0x8;
    (this->CachedSendAddress).ChannelName = *(FName *)(lVar14 + 8);
    (this->CachedSendAddress).DataType = *(FName *)(lVar14 + 0x10);
    (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar14 + 0x18);
    TVar13 = CreateNewReceiver(this);
    pTVar1 = &this->Receiver;
    if ((TReceiver<Metasound::FWaveAsset> *)pTVar1 != TVar13.Ptr) {
      pTVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TReceiver<Metasound::FWaveAsset> *)(TVar13.Ptr)->_padding_;
      (TVar13.Ptr)->_padding_ = 0;
      if (pTVar2 != (TReceiver<Metasound::FWaveAsset> *)0x0) {
        (**(code **)pTVar2->_padding_)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  pTVar2 = (this->Receiver).Ptr;
  if (pTVar2 == (TReceiver<Metasound::FWaveAsset> *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3419017988815191922>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                        ,0x8e,"Receiver.IsValid()");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if (pTVar2->_padding_ == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar14 = (**(code **)(*(longlong *)pTVar2->_padding_ + 8))();
    if (lVar14 != pTVar2->LastPayloadID) {
      if (pTVar2->_padding_ == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      cVar12 = (**(code **)(*(longlong *)pTVar2->_padding_ + 0x28))();
      if (cVar12 == '\0') {
        pTVar2 = (this->Receiver).Ptr;
        puVar6 = *(undefined8 **)&(this->OutputData).field_0x8;
        if (pTVar2->_padding_ == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        (**(code **)(*(longlong *)pTVar2->_padding_ + 0x20))((longlong *)pTVar2->_padding_,pTVar2);
        if ((pTVar2->Payload).Ptr == (FWaveAsset *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payload.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                              ,0x225,L"");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pFVar3 = (pTVar2->Payload).Ptr;
        pTVar4 = (pFVar3->SoundWaveProxy).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar3->SoundWaveProxy).Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar10 = (TReferenceControllerBase<1> *)puVar6[1];
        *puVar6 = pFVar5;
        puVar6[1] = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        this->bHasNotReceivedData = false;
      }
    }
  }
  if (this->bHasNotReceivedData != false) {
    puVar6 = *(undefined8 **)&(this->DefaultData).field_0x8;
    puVar7 = *(undefined8 **)&(this->OutputData).field_0x8;
    lVar14 = puVar6[1];
    uVar8 = *puVar6;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = (TReferenceControllerBase<1> *)puVar7[1];
    *puVar7 = uVar8;
    puVar7[1] = lVar14;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// Execute @ 14b39ebc0

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::Execute
          (TReceiverOperator<Metasound::FWaveTableBankAsset> *this)

{
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
  *pTVar1;
  TReceiver<Metasound::FWaveTableBankAsset> *pTVar2;
  FWaveTableBankAsset *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWaveTableBankAssetProxy *pFVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  char cVar12;
  TUniquePtr<Metasound::TReceiver<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TReceiver<Metasound::FWaveTableBankAsset>_>_>
  TVar13;
  longlong lVar14;
  undefined8 *local_res8;
  
  bVar11 = FTransmissionAddress::operator!=
                     (*(FTransmissionAddress **)&(this->SendAddress).field_0x8,
                      (FTransmissionAddress *)&this->CachedSendAddress);
  if (bVar11) {
    ResetReceiverAndCleanupChannel(this);
    lVar14 = *(longlong *)&(this->SendAddress).field_0x8;
    (this->CachedSendAddress).ChannelName = *(FName *)(lVar14 + 8);
    (this->CachedSendAddress).DataType = *(FName *)(lVar14 + 0x10);
    (this->CachedSendAddress).InstanceID = *(ulong64 *)(lVar14 + 0x18);
    TVar13 = CreateNewReceiver(this);
    pTVar1 = &this->Receiver;
    if ((TReceiver<Metasound::FWaveTableBankAsset> *)pTVar1 != TVar13.Ptr) {
      pTVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TReceiver<Metasound::FWaveTableBankAsset> *)(TVar13.Ptr)->_padding_;
      (TVar13.Ptr)->_padding_ = 0;
      if (pTVar2 != (TReceiver<Metasound::FWaveTableBankAsset> *)0x0) {
        (**(code **)pTVar2->_padding_)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  pTVar2 = (this->Receiver).Ptr;
  if (pTVar2 == (TReceiver<Metasound::FWaveTableBankAsset> *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3419017988815191922>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                        ,0x8e,"Receiver.IsValid()");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if (pTVar2->_padding_ == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar14 = (**(code **)(*(longlong *)pTVar2->_padding_ + 8))();
    if (lVar14 != pTVar2->LastPayloadID) {
      if (pTVar2->_padding_ == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      cVar12 = (**(code **)(*(longlong *)pTVar2->_padding_ + 0x28))();
      if (cVar12 == '\0') {
        pTVar2 = (this->Receiver).Ptr;
        puVar6 = *(undefined8 **)&(this->OutputData).field_0x8;
        if (pTVar2->_padding_ == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        (**(code **)(*(longlong *)pTVar2->_padding_ + 0x20))((longlong *)pTVar2->_padding_,pTVar2);
        if ((pTVar2->Payload).Ptr == (FWaveTableBankAsset *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payload.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                              ,0x225,L"");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pFVar3 = (pTVar2->Payload).Ptr;
        pTVar4 = (pFVar3->Proxy).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar3->Proxy).Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar10 = (TReferenceControllerBase<1> *)puVar6[1];
        *puVar6 = pFVar5;
        puVar6[1] = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        this->bHasNotReceivedData = false;
      }
    }
  }
  if (this->bHasNotReceivedData != false) {
    puVar6 = *(undefined8 **)&(this->DefaultData).field_0x8;
    puVar7 = *(undefined8 **)&(this->OutputData).field_0x8;
    lVar14 = puVar6[1];
    uVar8 = *puVar6;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = (TReferenceControllerBase<1> *)puVar7[1];
    *puVar7 = uVar8;
    puVar7[1] = lVar14;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// GetNodeInfo @ 14b3b9780

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b99b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9e10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3ba040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         ();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3ba270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         ();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::
             TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3ba4a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3ba6d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3ba900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FName *pFVar2;
  FNodeClassName *pFVar3;
  FText *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 local_res8 [8];
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Info);
      pFVar2 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
      pFVar3 = ReceiveNodeInfo::GetClassNameForDataType(&local_78,pFVar2);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Namespace = pFVar3->Namespace;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Name = pFVar3->Name;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Info.ClassName.Variant = pFVar3->Variant;
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Info.MajorVersion = ReceiveNodeInfo::GetCurrentMajorVersion();
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Info.MinorVersion = ReceiveNodeInfo::GetCurrentMinorVersion();
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                        ::__l2::Info.DisplayName,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      pFVar4 = FText::FText((FText *)&local_78);
      FText::operator=(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                        ::__l2::Info.Description,pFVar4);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      ::FString::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Info.Author,&PluginAuthor);
      TVar1 = `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
              ::__l2::Info.PromptIfMissing.TextData;
      if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
          ::__l2::Info.PromptIfMissing.TextData.Reference !=
          PluginNodeMissingPrompt.TextData.Reference) {
        `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
        ::__l2::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar5 = DeclareVertexInterface(&local_60);
      FVertexInterface::operator=
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Info.DefaultInterface,pFVar5);
      FVertexInterface::~FVertexInterface(&local_60);
      FText::FText((FText *)&local_78);
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                          ::__l2::Info.CategoryHierarchy.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Info.CategoryHierarchy,(FText *)&local_78,1,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                 ::__l2::Info.CategoryHierarchy.ArrayMax);
      if (local_78.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
      }
      DestructItems<FText,int>
                ((FText *)`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                          ::__l2::Info.Keywords.AllocatorInstance.Data,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                  ::__l2::Info.Keywords,(FText *)0x0,0,
                 `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                 ::__l2::Info.Keywords.ArrayMax);
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
      ::__l2::Info.AccessFlags =
           `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
           ::__l2::Info.AccessFlags | Deprecated;
      atexit(`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::GetNodeInfo(void)'
          ::__l2::Info;
}

// Reset @ 14b3da020

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::Reset
          (TReceiverOperator<WaveTable::FWaveTable> *this,FResetParams *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  
  pTVar1 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->DefaultData).field_0x8;
  this_00 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->OutputData).field_0x8;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar1);
  *(undefined4 *)&this_00[1].AllocatorInstance.Data =
       *(undefined4 *)&pTVar1[1].AllocatorInstance.Data;
  this->bHasNotReceivedData = true;
  return;
}

// Reset @ 14b3da070

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
              &(this->OutputData).field_0x8,
             *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
              &(this->DefaultData).field_0x8);
  this->bHasNotReceivedData = true;
  return;
}

// Reset @ 14b3da0a0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
              &(this->OutputData).field_0x8,
             *(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
              &(this->DefaultData).field_0x8);
  this->bHasNotReceivedData = true;
  return;
}

// Reset @ 14b3da0d0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FResetParams *param_1)

{
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
              &(this->OutputData).field_0x8,
             *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
              &(this->DefaultData).field_0x8);
  this->bHasNotReceivedData = true;
  return;
}

// Reset @ 14b3da100

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::Reset
          (void *this,FResetParams *param_1)

{
  **(undefined4 **)((longlong)this + 0x38) = **(undefined4 **)((longlong)this + 0x18);
  *(undefined1 *)((longlong)this + 8) = 1;
  return;
}

// Reset @ 14b3da120

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::Reset
          (void *this,FResetParams *param_1)

{
  **(undefined4 **)((longlong)this + 0x38) = **(undefined4 **)((longlong)this + 0x18);
  *(undefined1 *)((longlong)this + 8) = 1;
  return;
}

// Reset @ 14b3da140

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::Reset
          (TReceiverOperator<Metasound::FAudioBusAsset> *this,FResetParams *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  puVar1 = *(undefined8 **)&(this->DefaultData).field_0x8;
  puVar2 = *(undefined8 **)&(this->OutputData).field_0x8;
  lVar3 = puVar1[1];
  uVar4 = *puVar1;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
  *puVar2 = uVar4;
  puVar2[1] = lVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this->bHasNotReceivedData = true;
  return;
}

// Reset @ 14b3da190

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::Reset
          (TReceiverOperator<Metasound::FWaveAsset> *this,FResetParams *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  puVar1 = *(undefined8 **)&(this->DefaultData).field_0x8;
  puVar2 = *(undefined8 **)&(this->OutputData).field_0x8;
  lVar3 = puVar1[1];
  uVar4 = *puVar1;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
  *puVar2 = uVar4;
  puVar2[1] = lVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this->bHasNotReceivedData = true;
  return;
}

// Reset @ 14b3da1e0

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::Reset
          (TReceiverOperator<Metasound::FWaveTableBankAsset> *this,FResetParams *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  puVar1 = *(undefined8 **)&(this->DefaultData).field_0x8;
  puVar2 = *(undefined8 **)&(this->OutputData).field_0x8;
  lVar3 = puVar1[1];
  uVar4 = *puVar1;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
  *puVar2 = uVar4;
  puVar2[1] = lVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this->bHasNotReceivedData = true;
  return;
}

// ResetReceiverAndCleanupChannel @ 14b3dd3c0

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::
ResetReceiverAndCleanupChannel(TReceiverOperator<WaveTable::FWaveTable> *this)

{
  TReceiver<WaveTable::FWaveTable> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<WaveTable::FWaveTable> *)0x0) {
    (this->Receiver).Ptr = (TReceiver<WaveTable::FWaveTable> *)0x0;
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

// ResetReceiverAndCleanupChannel @ 14b3dd460

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
ResetReceiverAndCleanupChannel
          (TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Receiver).Ptr =
         (TReceiver<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
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

// ResetReceiverAndCleanupChannel @ 14b3dd500

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
ResetReceiverAndCleanupChannel
          (TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    (this->Receiver).Ptr =
         (TReceiver<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
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

// ResetReceiverAndCleanupChannel @ 14b3dd5a0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
ResetReceiverAndCleanupChannel
          (TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
    (this->Receiver).Ptr =
         (TReceiver<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
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

// ResetReceiverAndCleanupChannel @ 14b3dd640

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
ResetReceiverAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0xa0) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x70));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x70));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetReceiverAndCleanupChannel @ 14b3dd6e0

void __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
ResetReceiverAndCleanupChannel(void *this)

{
  undefined8 *puVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0xa0) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  this_00 = FDataTransmissionCenter::Get();
  pFVar2 = FSendAddress::GetChannelName((FSendAddress *)((longlong)this + 0x70));
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  uVar4 = FSendAddress::GetInstanceID((FSendAddress *)((longlong)this + 0x70));
  FSendAddress::FSendAddress(&local_28,pFVar2,pFVar3,uVar4);
  FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
            (this_00,(FTransmissionAddress *)&local_28);
  return;
}

// ResetReceiverAndCleanupChannel @ 14b3dd780

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::
ResetReceiverAndCleanupChannel(TReceiverOperator<Metasound::FAudioBusAsset> *this)

{
  TReceiver<Metasound::FAudioBusAsset> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<Metasound::FAudioBusAsset> *)0x0) {
    (this->Receiver).Ptr = (TReceiver<Metasound::FAudioBusAsset> *)0x0;
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

// ResetReceiverAndCleanupChannel @ 14b3dd820

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::
ResetReceiverAndCleanupChannel(TReceiverOperator<Metasound::FWaveAsset> *this)

{
  TReceiver<Metasound::FWaveAsset> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<Metasound::FWaveAsset> *)0x0) {
    (this->Receiver).Ptr = (TReceiver<Metasound::FWaveAsset> *)0x0;
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

// ResetReceiverAndCleanupChannel @ 14b3dd8c0

void __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::
ResetReceiverAndCleanupChannel(TReceiverOperator<Metasound::FWaveTableBankAsset> *this)

{
  TReceiver<Metasound::FWaveTableBankAsset> *pTVar1;
  FDataTransmissionCenter *this_00;
  FName *pFVar2;
  FName *pFVar3;
  ulong64 uVar4;
  FSendAddress local_28;
  
  pTVar1 = (this->Receiver).Ptr;
  if (pTVar1 != (TReceiver<Metasound::FWaveTableBankAsset> *)0x0) {
    (this->Receiver).Ptr = (TReceiver<Metasound::FWaveTableBankAsset> *)0x0;
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

