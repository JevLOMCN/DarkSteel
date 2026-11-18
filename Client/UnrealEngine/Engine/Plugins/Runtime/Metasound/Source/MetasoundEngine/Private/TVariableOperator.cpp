// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 36

// BindInputs @ 14b2c55c0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveTableBankAsset>::
BindInputs(TVariableOperator<Metasound::FWaveTableBankAsset> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2c5650

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveTableBankAsset>::
BindOutputs(TVariableOperator<Metasound::FWaveTableBankAsset> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2cb610

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2cb7a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2ceac0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<WaveTable::FWaveTable>::BindInputs
          (TVariableOperator<WaveTable::FWaveTable> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2cead0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<WaveTable::FWaveTable>::BindOutputs
          (TVariableOperator<WaveTable::FWaveTable> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2da7d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2da870

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2dbd10

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveAsset>::BindInputs
          (TVariableOperator<Metasound::FWaveAsset> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2dbd20

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveAsset>::BindOutputs
          (TVariableOperator<Metasound::FWaveAsset> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2e89f0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBusAsset>::BindInputs
          (TVariableOperator<Metasound::FAudioBusAsset> *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2e8a40

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBusAsset>::BindOutputs
          (TVariableOperator<Metasound::FAudioBusAsset> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2ee210

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2ee220

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
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
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = (longlong)this + 8;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2f9ad0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2f9bc0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
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
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = (longlong)this + 8;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2fc950

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  return;
}

// BindOutputs @ 14b2fc960

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *local_30;
  code *local_28;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&VariableNames::OutputVariableName);
  local_res18[0] = &this->Variable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TVariableOperator<WaveTable::FWaveTable> @ 14b344520

TVariableOperator<WaveTable::FWaveTable> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<WaveTable::FWaveTable>::
TVariableOperator<WaveTable::FWaveTable>
          (TVariableOperator<WaveTable::FWaveTable> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<WaveTable::FWaveTable> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableOperator_UFWaveTable_WaveTable___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_UFWaveTable_WaveTable___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<WaveTable::FWaveTable> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_UFWaveTable_WaveTable___Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b344600

TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b3446e0

TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b3447c0

TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b3448a0

TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *
__thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x10) = 0x10;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)((longlong)this + 0x10) = puVar3 + 2;
    *(undefined8 **)((longlong)this + 0x18) = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b344980

TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TVariableOperator_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)((longlong)this + 0x10) = 0x10;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)((longlong)this + 0x10) = puVar3 + 2;
    *(undefined8 **)((longlong)this + 0x18) = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataWriteReference_U__TVariable_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::FAudioBusAsset> @ 14b344a60

TVariableOperator<Metasound::FAudioBusAsset> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBusAsset>::
TVariableOperator<Metasound::FAudioBusAsset>
          (TVariableOperator<Metasound::FAudioBusAsset> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FAudioBusAsset> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFAudioBusAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFAudioBusAsset_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::FAudioBusAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFAudioBusAsset_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// TVariableOperator<Metasound::FWaveAsset> @ 14b344b40

TVariableOperator<Metasound::FWaveAsset> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveAsset>::
TVariableOperator<Metasound::FWaveAsset>
          (TVariableOperator<Metasound::FWaveAsset> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FWaveAsset> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TVariableOperator_VFWaveAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &___7__TDataReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFWaveAsset_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::FWaveAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &___7__TDataWriteReference_U__TVariable_VFWaveAsset_Metasound___Metasound___Metasound__6B_;
  return this;
}

// TVariableOperator<Metasound::FWaveTableBankAsset> @ 14b344c20

TVariableOperator<Metasound::FWaveTableBankAsset> * __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveTableBankAsset>::
TVariableOperator<Metasound::FWaveTableBankAsset>
          (TVariableOperator<Metasound::FWaveTableBankAsset> *this,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TVariableOperator<Metasound::FWaveTableBankAsset> *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TVariableOperator_VFWaveTableBankAsset_Metasound___MetasoundVariableNodesPrivate_Metasound__6B_
  ;
  *(undefined ***)&this->Variable =
       &
       ___7__TDataReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x78);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Variable).field_0x8 = 0x10;
    *(undefined8 *)&(this->Variable).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___0A__SharedPointerInternals__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar3 + 2),&param_2->Value);
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined8 **)&(this->Variable).field_0x8 = puVar3 + 2;
    *(undefined8 **)&(this->Variable).field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVariableOperator<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)&this->Variable =
       &
       ___7__TDataWriteReference_U__TVariable_VFWaveTableBankAsset_Metasound___Metasound___Metasound__6B_
  ;
  return this;
}

// ~TVariableOperator<WaveTable::FWaveTable> @ 14b3503e0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<WaveTable::FWaveTable>::
~TVariableOperator<WaveTable::FWaveTable>(TVariableOperator<WaveTable::FWaveTable> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b350410

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b350440

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b350470

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TVariableOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_> @ 14b3504a0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
~TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> @ 14b3504d0

void __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
~TVariableOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FAudioBusAsset> @ 14b350500

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FAudioBusAsset>::
~TVariableOperator<Metasound::FAudioBusAsset>(TVariableOperator<Metasound::FAudioBusAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FWaveAsset> @ 14b350530

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveAsset>::
~TVariableOperator<Metasound::FWaveAsset>(TVariableOperator<Metasound::FWaveAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TVariableOperator<Metasound::FWaveTableBankAsset> @ 14b350560

void __thiscall
Metasound::MetasoundVariableNodesPrivate::TVariableOperator<Metasound::FWaveTableBankAsset>::
~TVariableOperator<Metasound::FWaveTableBankAsset>
          (TVariableOperator<Metasound::FWaveTableBankAsset> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Variable).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

