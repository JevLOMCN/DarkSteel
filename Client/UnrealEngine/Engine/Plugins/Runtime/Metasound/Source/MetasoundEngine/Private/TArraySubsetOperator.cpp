// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 24

// BindInputs @ 14b2df680

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::BindInputs(TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  local_res18 = &this->Trigger;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputStartIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->StartIndex;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputEndIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->EndIndex;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b2df830

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::BindOutputs(TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySubsetName);
  local_res18[0] = &this->OutputArray;
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

// BindInputs @ 14b2e5930

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  local_res18 = &this->Trigger;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputStartIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->StartIndex;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputEndIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->EndIndex;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b2e5ae0

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySubsetName);
  local_res18[0] = &this->OutputArray;
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

// BindInputs @ 14b2eb070

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  local_res18 = &this->Trigger;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputStartIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->StartIndex;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputEndIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->EndIndex;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b2eb260

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

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
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySubsetName);
  local_res18[0] = &this->OutputArray;
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

// TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b337810

TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<Metasound::FTrigger> *param_1,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_2,TDataReadReference<int> *param_3,TDataReadReference<int> *param_4,
          TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySubsetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputArray).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->StartIndex = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->StartIndex).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->StartIndex).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StartIndex = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->EndIndex = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->EndIndex).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->EndIndex).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->EndIndex = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->OutputArray =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->OutputArray).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->OutputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->OutputArray =
       &
       ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_5->field_0x10);
  return this;
}

// TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b337980

TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<Metasound::FTrigger> *param_1,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_2,
          TDataReadReference<int> *param_3,TDataReadReference<int> *param_4,
          TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_5)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySubsetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputArray).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->StartIndex = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->StartIndex).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->StartIndex).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StartIndex = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->EndIndex = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->EndIndex).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->EndIndex).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->EndIndex = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->OutputArray =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->OutputArray).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->OutputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->OutputArray =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_5->field_0x10);
  return this;
}

// TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b337af0

TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<Metasound::FTrigger> *param_1,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_2,TDataReadReference<int> *param_3,TDataReadReference<int> *param_4,
          TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySubsetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Trigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Trigger).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Trigger).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Trigger = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputArray).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->StartIndex = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->StartIndex).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->StartIndex).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StartIndex = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->EndIndex = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->EndIndex).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->EndIndex).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->EndIndex = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->OutputArray =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->OutputArray).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->OutputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->OutputArray =
       &
       ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_5->field_0x10);
  return this;
}

// ~TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34dd80

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EndIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StartIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34ddd0

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EndIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StartIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34de20

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::~TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EndIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StartIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b37e850

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TReferenceControllerBase<0> *pTVar7;
  FName local_res10;
  FName local_res20;
  FName local_168;
  FName local_160;
  undefined **local_158;
  TReferenceControllerBase<0> *local_150;
  TReferenceControllerBase<0> *local_148;
  undefined **local_138 [2];
  TReferenceControllerBase<0> *local_128;
  undefined **local_118 [2];
  TReferenceControllerBase<0> *local_108;
  undefined **local_f8 [2];
  TReferenceControllerBase<0> *local_e8;
  undefined **local_d8 [2];
  TReferenceControllerBase<0> *local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_58,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputStartIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_98,&local_168,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputEndIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_b8,&local_160,pFVar1);
  pTVar4 = ::operator_new(0x20);
  pTVar6 = (TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
           0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar7 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar7 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = 0;
    pTVar4[1].WeakReferenceCount = 0;
    if (pTVar7 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = ::operator_new(0xa8);
  if (this_00 !=
      (TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_128 = (TReferenceControllerBase<0> *)local_b8._16_8_;
    local_158 = &
                ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_138[1] = (undefined **)local_b8._8_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    local_138[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_118[1] = (undefined **)local_98._8_8_;
    local_108 = (TReferenceControllerBase<0> *)local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    local_f8[1] = (undefined **)local_78._8_8_;
    local_118[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_e8 = (TReferenceControllerBase<0> *)local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    local_c8 = (TReferenceControllerBase<0> *)local_58._16_8_;
    local_f8[0] = &
                  ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_d8[1] = (undefined **)local_58._8_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    local_d8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_150 = pTVar7;
    local_148 = pTVar4;
    pTVar6 = TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<Metasound::FTrigger> *)local_d8,
                        (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_f8,(TDataReadReference<int> *)local_118,
                        (TDataReadReference<int> *)local_138,
                        (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)&local_158);
  }
  param_1->Node = (INode *)pTVar6;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37eae0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TReferenceControllerBase<0> *pTVar7;
  FName local_res10;
  FName local_res20;
  FName local_168;
  FName local_160;
  undefined **local_158;
  TReferenceControllerBase<0> *local_150;
  TReferenceControllerBase<0> *local_148;
  undefined **local_138 [2];
  TReferenceControllerBase<0> *local_128;
  undefined **local_118 [2];
  TReferenceControllerBase<0> *local_108;
  undefined **local_f8 [2];
  TReferenceControllerBase<0> *local_e8;
  undefined **local_d8 [2];
  TReferenceControllerBase<0> *local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_58,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputStartIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_98,&local_168,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputEndIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_b8,&local_160,pFVar1);
  pTVar4 = ::operator_new(0x20);
  pTVar6 = (TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar7 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar7 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = 0;
    pTVar4[1].WeakReferenceCount = 0;
    if (pTVar7 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = ::operator_new(0xa8);
  if (this_00 !=
      (TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_128 = (TReferenceControllerBase<0> *)local_b8._16_8_;
    local_158 = &
                ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_138[1] = (undefined **)local_b8._8_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    local_138[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_118[1] = (undefined **)local_98._8_8_;
    local_108 = (TReferenceControllerBase<0> *)local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    local_f8[1] = (undefined **)local_78._8_8_;
    local_118[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_e8 = (TReferenceControllerBase<0> *)local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    local_c8 = (TReferenceControllerBase<0> *)local_58._16_8_;
    local_f8[0] = &
                  ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_d8[1] = (undefined **)local_58._8_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    local_d8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_150 = pTVar7;
    local_148 = pTVar4;
    pTVar6 = TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<Metasound::FTrigger> *)local_d8,
                        (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_f8,(TDataReadReference<int> *)local_118,
                        (TDataReadReference<int> *)local_138,
                        (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)&local_158);
  }
  param_1->Node = (INode *)pTVar6;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37ed70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<0> *pTVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *this_00
  ;
  TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TReferenceControllerBase<0> *pTVar7;
  FName local_res10;
  FName local_res20;
  FName local_168;
  FName local_160;
  undefined **local_158;
  TReferenceControllerBase<0> *local_150;
  TReferenceControllerBase<0> *local_148;
  undefined **local_138 [2];
  TReferenceControllerBase<0> *local_128;
  undefined **local_118 [2];
  TReferenceControllerBase<0> *local_108;
  undefined **local_f8 [2];
  TReferenceControllerBase<0> *local_e8;
  undefined **local_d8 [2];
  TReferenceControllerBase<0> *local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerGetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_58,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputStartIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_98,&local_168,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputEndIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_b8,&local_160,pFVar1);
  pTVar4 = ::operator_new(0x20);
  pTVar6 = (TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  if (pTVar4 == (TReferenceControllerBase<0> *)0x0) {
    pTVar4 = (TReferenceControllerBase<0> *)0x0;
    pTVar7 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = 1;
    pTVar7 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = 1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = 0;
    pTVar4[1].WeakReferenceCount = 0;
    if (pTVar7 == (TReferenceControllerBase<0> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
  }
  this_00 = ::operator_new(0xa8);
  if (this_00 !=
      (TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
      0x0) {
    if (pTVar4 != (TReferenceControllerBase<0> *)0x0) {
      pTVar4->SharedReferenceCount = pTVar4->SharedReferenceCount + 1;
    }
    local_128 = (TReferenceControllerBase<0> *)local_b8._16_8_;
    local_158 = &
                ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_138[1] = (undefined **)local_b8._8_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    local_138[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_118[1] = (undefined **)local_98._8_8_;
    local_108 = (TReferenceControllerBase<0> *)local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    local_f8[1] = (undefined **)local_78._8_8_;
    local_118[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_e8 = (TReferenceControllerBase<0> *)local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    local_c8 = (TReferenceControllerBase<0> *)local_58._16_8_;
    local_f8[0] = &
                  ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    local_d8[1] = (undefined **)local_58._8_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    local_d8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_150 = pTVar7;
    local_148 = pTVar4;
    pTVar6 = TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<Metasound::FTrigger> *)local_d8,
                        (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_f8,(TDataReadReference<int> *)local_118,
                        (TDataReadReference<int> *)local_138,
                        (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)&local_158);
  }
  param_1->Node = (INode *)pTVar6;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b399710

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
Execute(TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FAudioBusAsset *pFVar9;
  int iVar10;
  
  bVar6 = FTrigger::operator_bool(*(FTrigger **)&(this->Trigger).field_0x8);
  if (bVar6) {
    pFVar3 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*(int *)((longlong)&pFVar3[1].Data + 4) < 0) {
      DestructItems<Metasound::FAudioBusAsset,int>
                ((FAudioBusAsset *)pFVar3->Data,*(int *)&pFVar3[1].Data);
      *(undefined4 *)&pFVar3[1].Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,pFVar3,0,piVar1);
      }
    }
    else {
      DestructItems<Metasound::FAudioBusAsset,int>
                ((FAudioBusAsset *)pFVar3->Data,*(int *)&pFVar3[1].Data);
      *(undefined4 *)&pFVar3[1].Data = 0;
    }
    plVar4 = *(longlong **)&(this->InputArray).field_0x8;
    uVar2 = **(uint **)&(this->StartIndex).field_0x8;
    iVar7 = (int)plVar4[1];
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    iVar10 = **(int **)&(this->EndIndex).field_0x8 + 1;
    if (iVar7 < iVar10) {
      iVar10 = iVar7;
    }
    if ((int)uVar2 < iVar10) {
      pFVar3 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
      iVar10 = iVar10 - uVar2;
      uVar8 = 0;
      if ((int)uVar2 < iVar7) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (FAudioBusAsset *)((longlong)(int)uVar2 * 0x10 + *plVar4);
      if (((pFVar9 == (FAudioBusAsset *)0x0) && (iVar10 != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar10,pFVar3,(int *)(pFVar3 + 1),
                         (int *)((longlong)&pFVar3[1].Data + 4));
      ConstructItems<Metasound::FAudioBusAsset,Metasound::FAudioBusAsset,int>
                (pFVar3->Data + (longlong)iVar7 * 0x10,pFVar9,iVar10);
    }
  }
  return;
}

// Execute @ 14b3998a0

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute
          (TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FWaveAsset *pFVar9;
  int iVar10;
  
  bVar6 = FTrigger::operator_bool(*(FTrigger **)&(this->Trigger).field_0x8);
  if (bVar6) {
    pFVar3 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*(int *)((longlong)&pFVar3[1].Data + 4) < 0) {
      DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar3->Data,*(int *)&pFVar3[1].Data);
      *(undefined4 *)&pFVar3[1].Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,pFVar3,0,piVar1);
      }
    }
    else {
      DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar3->Data,*(int *)&pFVar3[1].Data);
      *(undefined4 *)&pFVar3[1].Data = 0;
    }
    plVar4 = *(longlong **)&(this->InputArray).field_0x8;
    uVar2 = **(uint **)&(this->StartIndex).field_0x8;
    iVar7 = (int)plVar4[1];
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    iVar10 = **(int **)&(this->EndIndex).field_0x8 + 1;
    if (iVar7 < iVar10) {
      iVar10 = iVar7;
    }
    if ((int)uVar2 < iVar10) {
      pFVar3 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
      iVar10 = iVar10 - uVar2;
      uVar8 = 0;
      if ((int)uVar2 < iVar7) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (FWaveAsset *)((longlong)(int)uVar2 * 0x10 + *plVar4);
      if (((pFVar9 == (FWaveAsset *)0x0) && (iVar10 != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar10,pFVar3,(int *)(pFVar3 + 1),
                         (int *)((longlong)&pFVar3[1].Data + 4));
      ConstructItems<Metasound::FWaveAsset,Metasound::FWaveAsset,int>
                (pFVar3->Data + (longlong)iVar7 * 0x10,pFVar9,iVar10);
    }
  }
  return;
}

// Execute @ 14b399a30

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::Execute(TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *this)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FWaveTableBankAsset *pFVar9;
  int iVar10;
  
  bVar6 = FTrigger::operator_bool(*(FTrigger **)&(this->Trigger).field_0x8);
  if (bVar6) {
    pFVar3 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*(int *)((longlong)&pFVar3[1].Data + 4) < 0) {
      DestructItems<Metasound::FWaveTableBankAsset,int>
                ((FWaveTableBankAsset *)pFVar3->Data,*(int *)&pFVar3[1].Data);
      *(undefined4 *)&pFVar3[1].Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,pFVar3,0,piVar1);
      }
    }
    else {
      DestructItems<Metasound::FWaveTableBankAsset,int>
                ((FWaveTableBankAsset *)pFVar3->Data,*(int *)&pFVar3[1].Data);
      *(undefined4 *)&pFVar3[1].Data = 0;
    }
    plVar4 = *(longlong **)&(this->InputArray).field_0x8;
    uVar2 = **(uint **)&(this->StartIndex).field_0x8;
    iVar7 = (int)plVar4[1];
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    iVar10 = **(int **)&(this->EndIndex).field_0x8 + 1;
    if (iVar7 < iVar10) {
      iVar10 = iVar7;
    }
    if ((int)uVar2 < iVar10) {
      pFVar3 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
      iVar10 = iVar10 - uVar2;
      uVar8 = 0;
      if ((int)uVar2 < iVar7) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (FWaveTableBankAsset *)((longlong)(int)uVar2 * 0x10 + *plVar4);
      if (((pFVar9 == (FWaveTableBankAsset *)0x0) && (iVar10 != 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar10,pFVar3,(int *)(pFVar3 + 1),
                         (int *)((longlong)&pFVar3[1].Data + 4));
      ConstructItems<Metasound::FWaveTableBankAsset,Metasound::FWaveTableBankAsset,int>
                (pFVar3->Data + (longlong)iVar7 * 0x10,pFVar9,iVar10);
    }
  }
  return;
}

// GetNodeInfo @ 14b3b8ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b8e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b9020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::GetNodeInfo(void)

{
  int iVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar2 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar2;
      ::FName::FName(local_res10,L"Subset");
      FText::FText(&local_68);
      FText::FText(&local_78);
      MetasoundArrayNodesPrivate::CreateArraySubsetInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FText::FText(&local_88);
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar1 * 0x10,&local_88
                 ,1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3d7420

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
Reset(TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  
  pFVar2 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (-1 < *(int *)((longlong)&pFVar2[1].Data + 4)) {
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)pFVar2->Data,*(int *)&pFVar2[1].Data);
    *(undefined4 *)&pFVar2[1].Data = 0;
    return;
  }
  DestructItems<Metasound::FAudioBusAsset,int>
            ((FAudioBusAsset *)pFVar2->Data,*(int *)&pFVar2[1].Data);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar2,0,piVar1);
  }
  return;
}

// Reset @ 14b3d74a0

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  
  pFVar2 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (-1 < *(int *)((longlong)&pFVar2[1].Data + 4)) {
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar2->Data,*(int *)&pFVar2[1].Data);
    *(undefined4 *)&pFVar2[1].Data = 0;
    return;
  }
  DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)pFVar2->Data,*(int *)&pFVar2[1].Data);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar2,0,piVar1);
  }
  return;
}

// Reset @ 14b3d7520

void __thiscall
Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
::Reset(TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
        *this,FResetParams *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  
  pFVar2 = *(ForAnyElementType **)&(this->OutputArray).field_0x8;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (-1 < *(int *)((longlong)&pFVar2[1].Data + 4)) {
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)pFVar2->Data,*(int *)&pFVar2[1].Data);
    *(undefined4 *)&pFVar2[1].Data = 0;
    return;
  }
  DestructItems<Metasound::FWaveTableBankAsset,int>
            ((FWaveTableBankAsset *)pFVar2->Data,*(int *)&pFVar2[1].Data);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar2,0,piVar1);
  }
  return;
}

