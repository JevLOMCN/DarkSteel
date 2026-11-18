// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 21

// BindInputs @ 14b2dfec0

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerSetName);
  local_res18 = &this->Trigger;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitArray;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Index;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Value;
  local_20 = &local_res18;
  local_38._8_8_ = local_18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e00c0

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
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

// BindInputs @ 14b2e5d90

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerSetName);
  local_res18 = &this->Trigger;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitArray;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Index;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Value;
  local_20 = &local_res18;
  local_38._8_8_ = local_18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2e5f40

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
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

// BindInputs @ 14b2ec2c0

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerSetName);
  local_res18 = &this->Trigger;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitArray;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Index;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Value;
  local_20 = &local_res18;
  local_38._8_8_ = local_18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2ec470

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
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

// TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b337450

TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  fVar2 = param_1->TargetBlockRate;
  fVar3 = param_1->ActualBlockRate;
  iVar4 = param_1->NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = param_1->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar2;
  (this->OperatorSettings).ActualBlockRate = fVar3;
  (this->OperatorSettings).NumFramesPerBlock = iVar4;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&(param_2->Trigger).field_0x8;
  lVar1 = *(longlong *)&(param_2->Trigger).field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b337590

TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  fVar2 = param_1->TargetBlockRate;
  fVar3 = param_1->ActualBlockRate;
  iVar4 = param_1->NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = param_1->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar2;
  (this->OperatorSettings).ActualBlockRate = fVar3;
  (this->OperatorSettings).NumFramesPerBlock = iVar4;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&(param_2->Trigger).field_0x8;
  lVar1 = *(longlong *)&(param_2->Trigger).field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b3376d0

TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  fVar2 = param_1->TargetBlockRate;
  fVar3 = param_1->ActualBlockRate;
  iVar4 = param_1->NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = param_1->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar2;
  (this->OperatorSettings).ActualBlockRate = fVar3;
  (this->OperatorSettings).NumFramesPerBlock = iVar4;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&(param_2->Trigger).field_0x8;
  lVar1 = *(longlong *)&(param_2->Trigger).field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// ~TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34da20

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Value).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Index).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InitArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34da90

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Value).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Index).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InitArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34db00

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Value).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Index).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InitArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b37d230

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  void *pvVar8;
  FString *pFVar9;
  TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *local_180;
  TReferenceControllerBase<0> *local_178;
  undefined **local_168;
  undefined8 local_160;
  TReferenceControllerBase<0> *local_158;
  undefined **local_148;
  undefined8 local_140;
  TReferenceControllerBase<0> *local_138;
  undefined **local_128;
  undefined8 local_120;
  TReferenceControllerBase<0> *local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  undefined1 local_e8 [16];
  TReferenceControllerBase<0> *local_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  FString local_48;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerSetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_c8,&local_1c8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputInitialArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_e8,&local_1c0,pFVar1);
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             local_a8,(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)
                      local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (this,(TDataReadReference<Metasound::FAudioBusAsset> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0
  ;
  local_res20 = (FScriptContainerElement *)0x0;
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
  iVar11 = 0;
  if (pTVar5 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
    if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    pIVar2 = pTVar5->Ptr;
    pvVar7 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar8 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar11 = 0;
    if (pvVar7 == pvVar8) {
      pFVar9 = FMetasoundEnvironment::GetValue<FString>
                         (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                          &local_f8,&Frontend::SourceInterface::Environment::GraphName);
      iVar11 = 0;
      if (&local_48 != pFVar9) {
        local_res20 = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar9->Data).ArrayNum;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  local_1a8[1] = (undefined **)local_c8._8_8_;
  local_198 = (TReferenceControllerBase<0> *)local_c8._16_8_;
  if ((TReferenceControllerBase<0> *)local_c8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_c8._16_8_ + 8) = *(int *)(local_c8._16_8_ + 8) + 1;
  }
  local_1a8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  local_180 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_140 = local_88._8_8_;
  local_138 = (TReferenceControllerBase<0> *)local_88._16_8_;
  if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
  }
  local_148 = &___7__TDataReadReference_H_Metasound__6B_;
  local_120 = local_68._8_8_;
  local_118 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_108.Data = (FScriptContainerElement *)0x0;
  local_128 = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  local_100 = iVar11;
  if (iVar11 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar11,0,&local_108,iVar11,&local_fc);
    memcpy(local_108.Data,local_res20,(longlong)iVar11 * 2);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_01 = ::operator_new(200);
  if (this_01 !=
      (TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                        (this_01,pFVar1,(FInitParams *)local_1a8);
  }
  param_1->Node = (INode *)pTVar10;
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_118);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_138);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_158);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_178);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_198);
  if (local_res20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37d5e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  void *pvVar8;
  FString *pFVar9;
  TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *local_180;
  TReferenceControllerBase<0> *local_178;
  undefined **local_168;
  undefined8 local_160;
  TReferenceControllerBase<0> *local_158;
  undefined **local_148;
  undefined8 local_140;
  TReferenceControllerBase<0> *local_138;
  undefined **local_128;
  undefined8 local_120;
  TReferenceControllerBase<0> *local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  undefined1 local_e8 [16];
  TReferenceControllerBase<0> *local_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  FString local_48;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerSetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_c8,&local_1c8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputInitialArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  local_e8,&local_1c0,pFVar1);
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             local_a8,(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveAsset>
            (this,(TDataReadReference<Metasound::FWaveAsset> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_res20 = (FScriptContainerElement *)0x0;
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
  iVar11 = 0;
  if (pTVar5 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
    if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    pIVar2 = pTVar5->Ptr;
    pvVar7 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar8 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar11 = 0;
    if (pvVar7 == pvVar8) {
      pFVar9 = FMetasoundEnvironment::GetValue<FString>
                         (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                          &local_f8,&Frontend::SourceInterface::Environment::GraphName);
      iVar11 = 0;
      if (&local_48 != pFVar9) {
        local_res20 = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar9->Data).ArrayNum;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  local_1a8[1] = (undefined **)local_c8._8_8_;
  local_198 = (TReferenceControllerBase<0> *)local_c8._16_8_;
  if ((TReferenceControllerBase<0> *)local_c8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_c8._16_8_ + 8) = *(int *)(local_c8._16_8_ + 8) + 1;
  }
  local_1a8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  local_180 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_140 = local_88._8_8_;
  local_138 = (TReferenceControllerBase<0> *)local_88._16_8_;
  if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
  }
  local_148 = &___7__TDataReadReference_H_Metasound__6B_;
  local_120 = local_68._8_8_;
  local_118 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_108.Data = (FScriptContainerElement *)0x0;
  local_128 = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  local_100 = iVar11;
  if (iVar11 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar11,0,&local_108,iVar11,&local_fc);
    memcpy(local_108.Data,local_res20,(longlong)iVar11 * 2);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_01 = ::operator_new(200);
  if (this_01 !=
      (TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                        (this_01,pFVar1,(FInitParams *)local_1a8);
  }
  param_1->Node = (INode *)pTVar10;
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_118);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_138);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_158);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_178);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_198);
  if (local_res20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37d990

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  void *pvVar7;
  void *pvVar8;
  FString *pFVar9;
  TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *local_180;
  TReferenceControllerBase<0> *local_178;
  undefined **local_168;
  undefined8 local_160;
  TReferenceControllerBase<0> *local_158;
  undefined **local_148;
  undefined8 local_140;
  TReferenceControllerBase<0> *local_138;
  undefined **local_128;
  undefined8 local_120;
  TReferenceControllerBase<0> *local_118;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  undefined1 local_e8 [16];
  TReferenceControllerBase<0> *local_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  FString local_48;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerSetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_c8,&local_1c8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputInitialArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_e8,&local_1c0,pFVar1);
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)local_a8,
             (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>
            (this,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             *)0x0;
  local_res20 = (FScriptContainerElement *)0x0;
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
  iVar11 = 0;
  if (pTVar5 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::GraphName);
    if (pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    pIVar2 = pTVar5->Ptr;
    pvVar7 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar8 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    iVar11 = 0;
    if (pvVar7 == pvVar8) {
      pFVar9 = FMetasoundEnvironment::GetValue<FString>
                         (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                          &local_f8,&Frontend::SourceInterface::Environment::GraphName);
      iVar11 = 0;
      if (&local_48 != pFVar9) {
        local_res20 = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = (pFVar9->Data).ArrayNum;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  local_1a8[1] = (undefined **)local_c8._8_8_;
  local_198 = (TReferenceControllerBase<0> *)local_c8._16_8_;
  if ((TReferenceControllerBase<0> *)local_c8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_c8._16_8_ + 8) = *(int *)(local_c8._16_8_ + 8) + 1;
  }
  local_1a8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  local_180 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_140 = local_88._8_8_;
  local_138 = (TReferenceControllerBase<0> *)local_88._16_8_;
  if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
  }
  local_148 = &___7__TDataReadReference_H_Metasound__6B_;
  local_120 = local_68._8_8_;
  local_118 = (TReferenceControllerBase<0> *)local_68._16_8_;
  if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
  }
  local_108.Data = (FScriptContainerElement *)0x0;
  local_128 = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  local_100 = iVar11;
  if (iVar11 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar11,0,&local_108,iVar11,&local_fc);
    memcpy(local_108.Data,local_res20,(longlong)iVar11 * 2);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_01 = ::operator_new(200);
  if (this_01 !=
      (TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    pTVar10 = TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                        (this_01,pFVar1,(FInitParams *)local_1a8);
  }
  param_1->Node = (INode *)pTVar10;
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_118);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_138);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_158);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_178);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_198);
  if (local_res20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b3b84c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b8610

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b8760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3d7050

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
              &(this->Array).field_0x8,
             *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
              &(this->InitArray).field_0x8);
  return;
}

// Reset @ 14b3d7070

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)&(this->Array).field_0x8
             ,*(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
               &(this->InitArray).field_0x8);
  return;
}

// Reset @ 14b3d7090

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
Reset(TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
              &(this->Array).field_0x8,
             *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
              &(this->InitArray).field_0x8);
  return;
}

