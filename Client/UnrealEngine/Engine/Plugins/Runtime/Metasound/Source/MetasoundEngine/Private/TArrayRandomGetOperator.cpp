// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 42

// BindInputs @ 14b2dcf30

void __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FTrigger> *local_res18;
  FName *local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName);
  local_res18 = &this->TriggerNext;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName);
  local_res18 = &this->TriggerReset;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputRandomArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputWeightsName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputWeightsArray;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->NoRepeatOrder;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
  local_res20 = local_res8;
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SharedStateBehavior;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FTrigger> **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  return;
}

// BindOutputs @ 14b2dd2a0

void __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerOnNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputTriggerOnResetName);
  local_res18 = &this->TriggerOnReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::ShuffleOutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputIndexName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutIndex;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14b2dd450

FDataReferenceCollection * __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetInputs(TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                     ,0x126,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b2dd4d0

FDataReferenceCollection * __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetOutputs(TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                     ,0x12e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b2e37c0

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          ,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FTrigger> *local_res18;
  FName *local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName);
  local_res18 = &this->TriggerNext;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName);
  local_res18 = &this->TriggerReset;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputRandomArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputWeightsName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputWeightsArray;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->NoRepeatOrder;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
  local_res20 = local_res8;
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SharedStateBehavior;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FTrigger> **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  return;
}

// BindOutputs @ 14b2e3ad0

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerOnNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputTriggerOnResetName);
  local_res18 = &this->TriggerOnReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::ShuffleOutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputIndexName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutIndex;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14b2e3c80

FDataReferenceCollection * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetInputs(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
         FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                     ,0x126,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b2e3d00

FDataReferenceCollection * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetOutputs(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          ,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                     ,0x12e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// BindInputs @ 14b2e9520

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FTrigger> *local_res18;
  FName *local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName);
  local_res18 = &this->TriggerNext;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName);
  local_res18 = &this->TriggerReset;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputRandomArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputWeightsName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputWeightsArray;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->NoRepeatOrder;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
  local_res20 = local_res8;
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SharedStateBehavior;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FTrigger> **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  return;
}

// BindOutputs @ 14b2e9830

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerOnNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputTriggerOnResetName);
  local_res18 = &this->TriggerOnReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::ShuffleOutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::OutputIndexName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutIndex;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14b2e9a40

FDataReferenceCollection * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetInputs(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                     ,0x126,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetOutputs @ 14b2e9af0

FDataReferenceCollection * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetOutputs(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                     ,0x12e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataReferenceCollection *)(*pcVar1)();
    return pFVar3;
  }
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x18 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x38 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  return __return_storage_ptr__;
}

// TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b336a90

TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,
          TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          *param_4,TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_5,
          TDataReadReference<int> *param_6,TDataReadReference<int> *param_7,
          TDataReadReference<bool> *param_8,TEnum<Metasound::ESharedStateBehaviorType,1> param_9)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FResetParams local_28;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayRandomGetOperator_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->TriggerNext = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerNext).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerNext).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerNext =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReset).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReset =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputArray).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->InputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->InputWeightsArray =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InputWeightsArray).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->InputWeightsArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputWeightsArray =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->SeedValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedValue).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->SeedValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->NoRepeatOrder = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->NoRepeatOrder).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar1 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->NoRepeatOrder).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->NoRepeatOrder = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bEnableSharedState).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar1 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->bEnableSharedState).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
  (this->SharedStateBehavior).EnumValue = param_9.EnumValue;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnNext,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->TriggerOnNext =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnReset,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->TriggerOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBusAsset>::TDataReference<Metasound::FAudioBusAsset><>
            ((TDataReference<Metasound::FAudioBusAsset> *)&this->OutValue,NewObject);
  *(undefined ***)&this->OutValue =
       &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->OutIndex = &___7__TDataReference_H_Metasound__6B_;
  puVar6 = ::operator_new(0x18);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->OutIndex).field_0x8 = 0x10;
    *(undefined8 *)&(this->OutIndex).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
    *(undefined8 **)&(this->OutIndex).field_0x8 = puVar6 + 2;
    *(undefined8 **)&(this->OutIndex).field_0x10 = puVar6;
    if (puVar6 + 2 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
  }
  *(undefined ***)&this->OutIndex = &___7__TDataWriteReference_H_Metasound__6B_;
  (this->GraphName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphName).Data.ArrayNum = 0;
  (this->GraphName).Data.ArrayMax = 0;
  this->bHasLoggedEmptyArrayWarning = false;
  this->bHasLoggedMissingGraphHierarchyWarning = false;
  (this->DebugSharedStateBehaviorString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugSharedStateBehaviorString).Data.ArrayNum = 0;
  (this->DebugSharedStateBehaviorString).Data.ArrayMax = 0;
  (this->ArrayRandomGet).Ptr = (FArrayRandomGet *)0x0;
  (this->NodeId).A = 0;
  (this->NodeId).B = 0;
  (this->NodeId).C = 0;
  (this->NodeId).D = 0;
  (this->SharedStateId).A = 0;
  (this->SharedStateId).B = 0;
  (this->SharedStateId).C = 0;
  (this->SharedStateId).D = 0;
  this->bIsPreviewSound = false;
  puVar6 = (undefined8 *)(**(code **)((longlong)*param_1->Node + 0x10))();
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  (this->NodeId).A = (int)uVar3;
  (this->NodeId).B = (int)((ulonglong)uVar3 >> 0x20);
  (this->NodeId).C = (int)uVar4;
  (this->NodeId).D = (int)((ulonglong)uVar4 >> 0x20);
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  return this;
}

// TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b336dd0

TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          ,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,
          TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *param_4,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_5,
          TDataReadReference<int> *param_6,TDataReadReference<int> *param_7,
          TDataReadReference<bool> *param_8,TEnum<Metasound::ESharedStateBehaviorType,1> param_9)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FResetParams local_28;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayRandomGetOperator_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->TriggerNext = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerNext).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerNext).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerNext =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReset).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReset =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputArray).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->InputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->InputWeightsArray =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InputWeightsArray).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->InputWeightsArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputWeightsArray =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->SeedValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedValue).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->SeedValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->NoRepeatOrder = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->NoRepeatOrder).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar1 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->NoRepeatOrder).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->NoRepeatOrder = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bEnableSharedState).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar1 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->bEnableSharedState).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
  (this->SharedStateBehavior).EnumValue = param_9.EnumValue;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnNext,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->TriggerOnNext =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnReset,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->TriggerOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FWaveAsset>::TDataReference<Metasound::FWaveAsset><>
            ((TDataReference<Metasound::FWaveAsset> *)&this->OutValue,NewObject);
  *(undefined ***)&this->OutValue =
       &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->OutIndex = &___7__TDataReference_H_Metasound__6B_;
  puVar6 = ::operator_new(0x18);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->OutIndex).field_0x8 = 0x10;
    *(undefined8 *)&(this->OutIndex).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
    *(undefined8 **)&(this->OutIndex).field_0x8 = puVar6 + 2;
    *(undefined8 **)&(this->OutIndex).field_0x10 = puVar6;
    if (puVar6 + 2 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
  }
  *(undefined ***)&this->OutIndex = &___7__TDataWriteReference_H_Metasound__6B_;
  (this->GraphName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphName).Data.ArrayNum = 0;
  (this->GraphName).Data.ArrayMax = 0;
  this->bHasLoggedEmptyArrayWarning = false;
  this->bHasLoggedMissingGraphHierarchyWarning = false;
  (this->DebugSharedStateBehaviorString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugSharedStateBehaviorString).Data.ArrayNum = 0;
  (this->DebugSharedStateBehaviorString).Data.ArrayMax = 0;
  (this->ArrayRandomGet).Ptr = (FArrayRandomGet *)0x0;
  (this->NodeId).A = 0;
  (this->NodeId).B = 0;
  (this->NodeId).C = 0;
  (this->NodeId).D = 0;
  (this->SharedStateId).A = 0;
  (this->SharedStateId).B = 0;
  (this->SharedStateId).C = 0;
  (this->SharedStateId).D = 0;
  this->bIsPreviewSound = false;
  puVar6 = (undefined8 *)(**(code **)((longlong)*param_1->Node + 0x10))();
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  (this->NodeId).A = (int)uVar3;
  (this->NodeId).B = (int)((ulonglong)uVar3 >> 0x20);
  (this->NodeId).C = (int)uVar4;
  (this->NodeId).D = (int)((ulonglong)uVar4 >> 0x20);
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  return this;
}

// TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b337110

TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FBuildOperatorParams *param_1,TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,
          TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          *param_4,TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_5,
          TDataReadReference<int> *param_6,TDataReadReference<int> *param_7,
          TDataReadReference<bool> *param_8,TEnum<Metasound::ESharedStateBehaviorType,1> param_9)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  FResetParams local_28;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayRandomGetOperator_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->TriggerNext = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerNext).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerNext).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerNext =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReset).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TriggerReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReset =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InputArray).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->InputArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputArray =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->InputWeightsArray =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InputWeightsArray).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->InputWeightsArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputWeightsArray =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->SeedValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedValue).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->SeedValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->NoRepeatOrder = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->NoRepeatOrder).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar1 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->NoRepeatOrder).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->NoRepeatOrder = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bEnableSharedState).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar1 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->bEnableSharedState).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
  (this->SharedStateBehavior).EnumValue = param_9.EnumValue;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnNext,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->TriggerOnNext =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnReset,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->TriggerOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FWaveTableBankAsset>::TDataReference<Metasound::FWaveTableBankAsset><>
            ((TDataReference<Metasound::FWaveTableBankAsset> *)&this->OutValue,NewObject);
  *(undefined ***)&this->OutValue =
       &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->OutIndex = &___7__TDataReference_H_Metasound__6B_;
  puVar6 = ::operator_new(0x18);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->OutIndex).field_0x8 = 0x10;
    *(undefined8 *)&(this->OutIndex).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
    *(undefined8 **)&(this->OutIndex).field_0x8 = puVar6 + 2;
    *(undefined8 **)&(this->OutIndex).field_0x10 = puVar6;
    if (puVar6 + 2 == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
    }
  }
  *(undefined ***)&this->OutIndex = &___7__TDataWriteReference_H_Metasound__6B_;
  (this->GraphName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphName).Data.ArrayNum = 0;
  (this->GraphName).Data.ArrayMax = 0;
  this->bHasLoggedEmptyArrayWarning = false;
  this->bHasLoggedMissingGraphHierarchyWarning = false;
  (this->DebugSharedStateBehaviorString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugSharedStateBehaviorString).Data.ArrayNum = 0;
  (this->DebugSharedStateBehaviorString).Data.ArrayMax = 0;
  (this->ArrayRandomGet).Ptr = (FArrayRandomGet *)0x0;
  (this->NodeId).A = 0;
  (this->NodeId).B = 0;
  (this->NodeId).C = 0;
  (this->NodeId).D = 0;
  (this->SharedStateId).A = 0;
  (this->SharedStateId).B = 0;
  (this->SharedStateId).C = 0;
  (this->SharedStateId).D = 0;
  this->bIsPreviewSound = false;
  puVar6 = (undefined8 *)(**(code **)((longlong)*param_1->Node + 0x10))();
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  (this->NodeId).A = (int)uVar3;
  (this->NodeId).B = (int)((ulonglong)uVar3 >> 0x20);
  (this->NodeId).C = (int)uVar4;
  (this->NodeId).D = (int)((ulonglong)uVar4 >> 0x20);
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  return this;
}

// ~TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d690

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  FArrayRandomGet *pFVar1;
  FScriptContainerElement *pFVar2;
  TCircularQueue<int> *pTVar3;
  
  pFVar1 = (this->ArrayRandomGet).Ptr;
  if (pFVar1 != (FArrayRandomGet *)0x0) {
    pFVar2 = (pFVar1->RandomWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pTVar3 = (pFVar1->PreviousIndicesQueue).Ptr;
    if (pTVar3 != (TCircularQueue<int> *)0x0) {
      pFVar2 = (pTVar3->Buffer).Elements.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pTVar3,0x20);
    }
    pFVar2 = (pFVar1->PreviousIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x40);
  }
  pFVar2 = (this->DebugSharedStateBehaviorString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NoRepeatOrder).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputWeightsArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d7c0

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          )

{
  FArrayRandomGet *pFVar1;
  FScriptContainerElement *pFVar2;
  TCircularQueue<int> *pTVar3;
  
  pFVar1 = (this->ArrayRandomGet).Ptr;
  if (pFVar1 != (FArrayRandomGet *)0x0) {
    pFVar2 = (pFVar1->RandomWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pTVar3 = (pFVar1->PreviousIndicesQueue).Ptr;
    if (pTVar3 != (TCircularQueue<int> *)0x0) {
      pFVar2 = (pTVar3->Buffer).Elements.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pTVar3,0x20);
    }
    pFVar2 = (pFVar1->PreviousIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x40);
  }
  pFVar2 = (this->DebugSharedStateBehaviorString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NoRepeatOrder).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputWeightsArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> @ 14b34d8f0

void __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
~TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
          (TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this)

{
  FArrayRandomGet *pFVar1;
  FScriptContainerElement *pFVar2;
  TCircularQueue<int> *pTVar3;
  
  pFVar1 = (this->ArrayRandomGet).Ptr;
  if (pFVar1 != (FArrayRandomGet *)0x0) {
    pFVar2 = (pFVar1->RandomWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pTVar3 = (pFVar1->PreviousIndicesQueue).Ptr;
    if (pTVar3 != (TCircularQueue<int> *)0x0) {
      pFVar2 = (pTVar3->Buffer).Elements.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pTVar3,0x20);
    }
    pFVar2 = (pFVar1->PreviousIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x40);
  }
  pFVar2 = (this->DebugSharedStateBehaviorString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutIndex).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NoRepeatOrder).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputWeightsArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b37c960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FLiteral *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [12];
  FName local_15c;
  FName local_154;
  FName local_14c;
  FName local_144;
  FName local_13c;
  FName local_134;
  FName local_12c;
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_60,(FName *)(local_168 + 4),
             pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_80,&local_15c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputRandomArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_a0,&local_154,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputWeightsName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_c0,
             &local_14c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_e0,&local_144,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_100,&local_13c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_120,&local_134,pFVar1);
  pFVar2 = *(FLiteral **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
  pFVar5 = FInputVertexInterfaceData::FindChecked(this,&local_12c);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
    ::CreateExplicitArgs((FOperatorSettings *)local_168,pFVar2);
    if (0xc < local_40.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if ((pFVar5->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
              (&(pFVar5->Data).TypedValue);
  }
  this_00 = ::operator_new(0x1c8);
  pTVar7 = (TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  if (this_00 !=
      (TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    pTVar7 = TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FTrigger> *)local_60,
                        (TDataReadReference<Metasound::FTrigger> *)local_80,
                        (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_a0,
                        (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_c0,
                        (TDataReadReference<int> *)local_e0,(TDataReadReference<int> *)local_100,
                        (TDataReadReference<bool> *)local_120,
                        (TEnum<Metasound::ESharedStateBehaviorType,1>)local_168._0_4_);
  }
  param_1->Node = (INode *)pTVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_120._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FLiteral *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar7;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [12];
  FName local_15c;
  FName local_154;
  FName local_14c;
  FName local_144;
  FName local_13c;
  FName local_134;
  FName local_12c;
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_60,(FName *)(local_168 + 4),
             pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_80,&local_15c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputRandomArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
                  local_a0,&local_154,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputWeightsName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_c0,
             &local_14c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_e0,&local_144,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_100,&local_13c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_120,&local_134,pFVar1);
  pFVar2 = *(FLiteral **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
  pFVar5 = FInputVertexInterfaceData::FindChecked(this,&local_12c);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
    ::CreateExplicitArgs((FOperatorSettings *)local_168,pFVar2);
    if (0xc < local_40.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if ((pFVar5->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
              (&(pFVar5->Data).TypedValue);
  }
  this_00 = ::operator_new(0x1c8);
  pTVar7 = (TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
           0x0;
  if (this_00 !=
      (TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar7 = TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FTrigger> *)local_60,
                        (TDataReadReference<Metasound::FTrigger> *)local_80,
                        (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_a0,
                        (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_c0,
                        (TDataReadReference<int> *)local_e0,(TDataReadReference<int> *)local_100,
                        (TDataReadReference<bool> *)local_120,
                        (TEnum<Metasound::ESharedStateBehaviorType,1>)local_168._0_4_);
  }
  param_1->Node = (INode *)pTVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_120._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37cf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FLiteral *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *this_00;
  TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [12];
  FName local_15c;
  FName local_154;
  FName local_14c;
  FName local_144;
  FName local_13c;
  FName local_134;
  FName local_12c;
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_60,(FName *)(local_168 + 4),
             pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_80,&local_15c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputRandomArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *)local_a0,&local_154,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputWeightsName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_c0,
             &local_14c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_e0,&local_144,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_100,&local_13c,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_120,&local_134,pFVar1);
  pFVar2 = *(FLiteral **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
  pFVar5 = FInputVertexInterfaceData::FindChecked(this,&local_12c);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
    ::CreateExplicitArgs((FOperatorSettings *)local_168,pFVar2);
    if (0xc < local_40.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if ((pFVar5->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
              (&(pFVar5->Data).TypedValue);
  }
  this_00 = ::operator_new(0x1c8);
  pTVar7 = (TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            *)0x0;
  if (this_00 !=
      (TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    pTVar7 = TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FTrigger> *)local_60,
                        (TDataReadReference<Metasound::FTrigger> *)local_80,
                        (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)local_a0,
                        (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_c0,
                        (TDataReadReference<int> *)local_e0,(TDataReadReference<int> *)local_100,
                        (TDataReadReference<bool> *)local_120,
                        (TEnum<Metasound::ESharedStateBehaviorType,1>)local_168._0_4_);
  }
  param_1->Node = (INode *)pTVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_120._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b398bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
Execute(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
        *this)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnNext).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  if (*(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8) == 0) {
    if (this->bHasLoggedEmptyArrayWarning == false) {
      if (5 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      this->bHasLoggedEmptyArrayWarning = true;
    }
    plVar3 = *(longlong **)&(this->TriggerReset).field_0x8;
    lVar5 = 0;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = lVar5;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame
                    (*(FTrigger **)&(this->TriggerOnReset).field_0x8,*(int *)(lVar4 + lVar6 * 4));
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar1);
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)&(this->TriggerOnReset).field_0x8,*(int *)(lVar4 + lVar1 * 4));
    }
    plVar3 = *(longlong **)&(this->TriggerNext).field_0x8;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame
                    (*(FTrigger **)&(this->TriggerOnNext).field_0x8,*(int *)(lVar4 + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar1);
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)&(this->TriggerOnNext).field_0x8,*(int *)(lVar4 + lVar1 * 4));
    }
  }
  else {
    plVar3 = *(longlong **)&(this->TriggerReset).field_0x8;
    lVar5 = 0;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = lVar5;
      if (0 < lVar1) {
        do {
          ExecuteTriggerReset(this,*(int *)(lVar4 + lVar6 * 4));
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar1);
      }
      ExecuteTriggerReset(this,*(int *)(lVar4 + lVar1 * 4));
    }
    plVar3 = *(longlong **)&(this->TriggerNext).field_0x8;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      if (0 < lVar1) {
        do {
          ExecuteTriggerNext(this,*(int *)(lVar4 + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar1);
      }
      ExecuteTriggerNext(this,*(int *)(lVar4 + lVar1 * 4));
    }
  }
  return;
}

// Execute @ 14b398db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
Execute(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnNext).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  if (*(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8) == 0) {
    if (this->bHasLoggedEmptyArrayWarning == false) {
      if (5 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      this->bHasLoggedEmptyArrayWarning = true;
    }
    plVar3 = *(longlong **)&(this->TriggerReset).field_0x8;
    lVar5 = 0;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = lVar5;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame
                    (*(FTrigger **)&(this->TriggerOnReset).field_0x8,*(int *)(lVar4 + lVar6 * 4));
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar1);
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)&(this->TriggerOnReset).field_0x8,*(int *)(lVar4 + lVar1 * 4));
    }
    plVar3 = *(longlong **)&(this->TriggerNext).field_0x8;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame
                    (*(FTrigger **)&(this->TriggerOnNext).field_0x8,*(int *)(lVar4 + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar1);
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)&(this->TriggerOnNext).field_0x8,*(int *)(lVar4 + lVar1 * 4));
    }
  }
  else {
    plVar3 = *(longlong **)&(this->TriggerReset).field_0x8;
    lVar5 = 0;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = lVar5;
      if (0 < lVar1) {
        do {
          ExecuteTriggerReset(this,*(int *)(lVar4 + lVar6 * 4));
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar1);
      }
      ExecuteTriggerReset(this,*(int *)(lVar4 + lVar1 * 4));
    }
    plVar3 = *(longlong **)&(this->TriggerNext).field_0x8;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      if (0 < lVar1) {
        do {
          ExecuteTriggerNext(this,*(int *)(lVar4 + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar1);
      }
      ExecuteTriggerNext(this,*(int *)(lVar4 + lVar1 * 4));
    }
  }
  return;
}

// Execute @ 14b398f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
Execute(TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
        *this)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnNext).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  if (*(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8) == 0) {
    if (this->bHasLoggedEmptyArrayWarning == false) {
      if (5 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      this->bHasLoggedEmptyArrayWarning = true;
    }
    plVar3 = *(longlong **)&(this->TriggerReset).field_0x8;
    lVar5 = 0;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = lVar5;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame
                    (*(FTrigger **)&(this->TriggerOnReset).field_0x8,*(int *)(lVar4 + lVar6 * 4));
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar1);
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)&(this->TriggerOnReset).field_0x8,*(int *)(lVar4 + lVar1 * 4));
    }
    plVar3 = *(longlong **)&(this->TriggerNext).field_0x8;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame
                    (*(FTrigger **)&(this->TriggerOnNext).field_0x8,*(int *)(lVar4 + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar1);
      }
      FTrigger::TriggerFrame
                (*(FTrigger **)&(this->TriggerOnNext).field_0x8,*(int *)(lVar4 + lVar1 * 4));
    }
  }
  else {
    plVar3 = *(longlong **)&(this->TriggerReset).field_0x8;
    lVar5 = 0;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = lVar5;
      if (0 < lVar1) {
        do {
          ExecuteTriggerReset(this,*(int *)(lVar4 + lVar6 * 4));
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar1);
      }
      ExecuteTriggerReset(this,*(int *)(lVar4 + lVar1 * 4));
    }
    plVar3 = *(longlong **)&(this->TriggerNext).field_0x8;
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      if (0 < lVar1) {
        do {
          ExecuteTriggerNext(this,*(int *)(lVar4 + lVar5 * 4));
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar1);
      }
      ExecuteTriggerNext(this,*(int *)(lVar4 + lVar1 * 4));
    }
  }
  return;
}

// ExecuteTriggerNext @ 14b3a4660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
ExecuteTriggerNext(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TCircularQueue<int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> TVar12;
  bool bVar13;
  int iVar14;
  FGuid *pFVar15;
  FSharedStateRandomGetManager *this_00;
  FArrayRandomGet *pFVar16;
  FArrayRandomGet *pFVar17;
  uint uVar18;
  uint uVar19;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> local_res18;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FGuid local_78;
  InitSharedStateArgs local_68;
  
  pTVar1 = *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
            &(this->InputArray).field_0x8;
  if ((**(char **)&(this->bEnableSharedState).field_0x8 == '\0') || (this->bIsPreviewSound != false)
     ) {
    piVar2 = *(int **)&(this->NoRepeatOrder).field_0x8;
    pFVar16 = (this->ArrayRandomGet).Ptr;
    pFVar17 = (FArrayRandomGet *)0x0;
    if (pFVar16 == (FArrayRandomGet *)0x0) {
      piVar3 = *(int **)&(this->SeedValue).field_0x8;
      pTVar4 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8;
      iVar14 = pTVar1->ArrayNum;
      pFVar16 = ::operator_new(0x40);
      if (pFVar16 != (FArrayRandomGet *)0x0) {
        pFVar17 = FArrayRandomGet::FArrayRandomGet(pFVar16,*piVar3,iVar14,pTVar4,*piVar2);
      }
      local_res18.Ptr = pFVar17;
      TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>::operator=
                (&this->ArrayRandomGet,&local_res18);
      TVar12.Ptr = local_res18.Ptr;
      if (local_res18.Ptr != (FArrayRandomGet *)0x0) {
        pFVar6 = ((local_res18.Ptr)->RandomWeights).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pTVar5 = ((TVar12.Ptr)->PreviousIndicesQueue).Ptr;
        if (pTVar5 != (TCircularQueue<int> *)0x0) {
          pFVar6 = (pTVar5->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          ::operator_delete(pTVar5,0x20);
        }
        pFVar6 = ((TVar12.Ptr)->PreviousIndices).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::operator_delete(TVar12.Ptr,0x40);
      }
    }
    else {
      FArrayRandomGet::UpdateState
                (pFVar16,**(int **)&(this->SeedValue).field_0x8,pTVar1->ArrayNum,
                 *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8
                 ,*piVar2);
    }
    iVar14 = FArrayRandomGet::NextValue((this->ArrayRandomGet).Ptr);
    **(int **)&(this->OutIndex).field_0x8 = iVar14;
  }
  else {
    if ((this->SharedStateBehavior).EnumValue == SameData) {
      pFVar15 = MetasoundArrayHashPrivate::GetArrayContentHashGuid<Metasound::FAudioBusAsset>
                          (&local_78,pTVar1);
      uVar19 = pFVar15->B;
      uVar18 = pFVar15->C;
      uVar11 = pFVar15->D;
      (this->SharedStateId).A = pFVar15->A;
      (this->SharedStateId).B = uVar19;
      (this->SharedStateId).C = uVar18;
      (this->SharedStateId).D = uVar11;
    }
    pFVar15 = &this->SharedStateId;
    this_00 = FSharedStateRandomGetManager::Get();
    local_68.SharedStateId.A = pFVar15->A;
    local_68.SharedStateId.B = pFVar15->B;
    local_68.SharedStateId.C = (this->SharedStateId).C;
    local_68.SharedStateId.D = (this->SharedStateId).D;
    local_68.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Weights.ArrayNum = 0;
    local_68.Weights.ArrayMax = 0;
    local_68.Seed = **(int **)&(this->SeedValue).field_0x8;
    local_68.NumElements = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
    local_68.NoRepeatOrder = **(int **)&(this->NoRepeatOrder).field_0x8;
    local_68.bIsPreviewSound = this->bIsPreviewSound;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&local_68.Weights,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8);
    iVar14 = FSharedStateRandomGetManager::NextValue(this_00,pFVar15,&local_68);
    **(int **)&(this->OutIndex).field_0x8 = iVar14;
    if (local_68.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Weights.AllocatorInstance.Data);
    }
  }
  if ((**(int **)&(this->OutIndex).field_0x8 == -1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("*OutIndex != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                          ,500,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (6 < (byte)LogMetaSound._0_1_) {
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    FGuid::AppendString(&this->SharedStateId,&local_98,Digits);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(&this->NodeId,&local_a8,Digits);
    GetMetasoundDataTypeString<Metasound::FAudioBusAsset>();
    UE::Logging::Private::BasicLog<7>
              (&`private:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::ExecuteTriggerNext(int)___ptr64'
                ::__l23::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  uVar18 = **(int **)&(this->OutIndex).field_0x8 % pTVar1->ArrayNum;
  uVar19 = 0;
  if ((int)uVar18 < pTVar1->ArrayNum) {
    uVar19 = ~uVar18 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  puVar7 = *(undefined8 **)&(this->OutValue).field_0x8;
  lVar8 = *(longlong *)(pFVar6 + (longlong)(int)uVar18 * 0x10 + 8);
  uVar9 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar18 * 0x10);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_88 = *puVar7;
  pTStack_80 = (TReferenceControllerBase<1> *)puVar7[1];
  *puVar7 = uVar9;
  puVar7[1] = lVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnNext).field_0x8,param_1);
  return;
}

// ExecuteTriggerNext @ 14b3a4a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
ExecuteTriggerNext(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TCircularQueue<int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> TVar12;
  bool bVar13;
  int iVar14;
  FGuid *pFVar15;
  FSharedStateRandomGetManager *this_00;
  FArrayRandomGet *pFVar16;
  FArrayRandomGet *pFVar17;
  uint uVar18;
  uint uVar19;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> local_res18;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FGuid local_78;
  InitSharedStateArgs local_68;
  
  pTVar1 = *(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
            &(this->InputArray).field_0x8;
  if ((**(char **)&(this->bEnableSharedState).field_0x8 == '\0') || (this->bIsPreviewSound != false)
     ) {
    piVar2 = *(int **)&(this->NoRepeatOrder).field_0x8;
    pFVar16 = (this->ArrayRandomGet).Ptr;
    pFVar17 = (FArrayRandomGet *)0x0;
    if (pFVar16 == (FArrayRandomGet *)0x0) {
      piVar3 = *(int **)&(this->SeedValue).field_0x8;
      pTVar4 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8;
      iVar14 = pTVar1->ArrayNum;
      pFVar16 = ::operator_new(0x40);
      if (pFVar16 != (FArrayRandomGet *)0x0) {
        pFVar17 = FArrayRandomGet::FArrayRandomGet(pFVar16,*piVar3,iVar14,pTVar4,*piVar2);
      }
      local_res18.Ptr = pFVar17;
      TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>::operator=
                (&this->ArrayRandomGet,&local_res18);
      TVar12.Ptr = local_res18.Ptr;
      if (local_res18.Ptr != (FArrayRandomGet *)0x0) {
        pFVar6 = ((local_res18.Ptr)->RandomWeights).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pTVar5 = ((TVar12.Ptr)->PreviousIndicesQueue).Ptr;
        if (pTVar5 != (TCircularQueue<int> *)0x0) {
          pFVar6 = (pTVar5->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          ::operator_delete(pTVar5,0x20);
        }
        pFVar6 = ((TVar12.Ptr)->PreviousIndices).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::operator_delete(TVar12.Ptr,0x40);
      }
    }
    else {
      FArrayRandomGet::UpdateState
                (pFVar16,**(int **)&(this->SeedValue).field_0x8,pTVar1->ArrayNum,
                 *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8
                 ,*piVar2);
    }
    iVar14 = FArrayRandomGet::NextValue((this->ArrayRandomGet).Ptr);
    **(int **)&(this->OutIndex).field_0x8 = iVar14;
  }
  else {
    if ((this->SharedStateBehavior).EnumValue == SameData) {
      pFVar15 = MetasoundArrayHashPrivate::GetArrayContentHashGuid<Metasound::FWaveAsset>
                          (&local_78,pTVar1);
      uVar19 = pFVar15->B;
      uVar18 = pFVar15->C;
      uVar11 = pFVar15->D;
      (this->SharedStateId).A = pFVar15->A;
      (this->SharedStateId).B = uVar19;
      (this->SharedStateId).C = uVar18;
      (this->SharedStateId).D = uVar11;
    }
    pFVar15 = &this->SharedStateId;
    this_00 = FSharedStateRandomGetManager::Get();
    local_68.SharedStateId.A = pFVar15->A;
    local_68.SharedStateId.B = pFVar15->B;
    local_68.SharedStateId.C = (this->SharedStateId).C;
    local_68.SharedStateId.D = (this->SharedStateId).D;
    local_68.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Weights.ArrayNum = 0;
    local_68.Weights.ArrayMax = 0;
    local_68.Seed = **(int **)&(this->SeedValue).field_0x8;
    local_68.NumElements = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
    local_68.NoRepeatOrder = **(int **)&(this->NoRepeatOrder).field_0x8;
    local_68.bIsPreviewSound = this->bIsPreviewSound;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&local_68.Weights,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8);
    iVar14 = FSharedStateRandomGetManager::NextValue(this_00,pFVar15,&local_68);
    **(int **)&(this->OutIndex).field_0x8 = iVar14;
    if (local_68.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Weights.AllocatorInstance.Data);
    }
  }
  if ((**(int **)&(this->OutIndex).field_0x8 == -1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("*OutIndex != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                          ,500,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (6 < (byte)LogMetaSound._0_1_) {
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    FGuid::AppendString(&this->SharedStateId,&local_98,Digits);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(&this->NodeId,&local_a8,Digits);
    GetMetasoundDataTypeString<Metasound::FWaveAsset>();
    UE::Logging::Private::BasicLog<7>
              (&`private:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::ExecuteTriggerNext(int)___ptr64'
                ::__l23::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  uVar18 = **(int **)&(this->OutIndex).field_0x8 % pTVar1->ArrayNum;
  uVar19 = 0;
  if ((int)uVar18 < pTVar1->ArrayNum) {
    uVar19 = ~uVar18 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  puVar7 = *(undefined8 **)&(this->OutValue).field_0x8;
  lVar8 = *(longlong *)(pFVar6 + (longlong)(int)uVar18 * 0x10 + 8);
  uVar9 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar18 * 0x10);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_88 = *puVar7;
  pTStack_80 = (TReferenceControllerBase<1> *)puVar7[1];
  *puVar7 = uVar9;
  puVar7[1] = lVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnNext).field_0x8,param_1);
  return;
}

// ExecuteTriggerNext @ 14b3a4ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
ExecuteTriggerNext(TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TCircularQueue<int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> TVar12;
  bool bVar13;
  int iVar14;
  FGuid *pFVar15;
  FSharedStateRandomGetManager *this_00;
  FArrayRandomGet *pFVar16;
  FArrayRandomGet *pFVar17;
  uint uVar18;
  uint uVar19;
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> local_res18;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FGuid local_78;
  InitSharedStateArgs local_68;
  
  pTVar1 = *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
            &(this->InputArray).field_0x8;
  if ((**(char **)&(this->bEnableSharedState).field_0x8 == '\0') || (this->bIsPreviewSound != false)
     ) {
    piVar2 = *(int **)&(this->NoRepeatOrder).field_0x8;
    pFVar16 = (this->ArrayRandomGet).Ptr;
    pFVar17 = (FArrayRandomGet *)0x0;
    if (pFVar16 == (FArrayRandomGet *)0x0) {
      piVar3 = *(int **)&(this->SeedValue).field_0x8;
      pTVar4 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8;
      iVar14 = pTVar1->ArrayNum;
      pFVar16 = ::operator_new(0x40);
      if (pFVar16 != (FArrayRandomGet *)0x0) {
        pFVar17 = FArrayRandomGet::FArrayRandomGet(pFVar16,*piVar3,iVar14,pTVar4,*piVar2);
      }
      local_res18.Ptr = pFVar17;
      TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>::operator=
                (&this->ArrayRandomGet,&local_res18);
      TVar12.Ptr = local_res18.Ptr;
      if (local_res18.Ptr != (FArrayRandomGet *)0x0) {
        pFVar6 = ((local_res18.Ptr)->RandomWeights).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pTVar5 = ((TVar12.Ptr)->PreviousIndicesQueue).Ptr;
        if (pTVar5 != (TCircularQueue<int> *)0x0) {
          pFVar6 = (pTVar5->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          ::operator_delete(pTVar5,0x20);
        }
        pFVar6 = ((TVar12.Ptr)->PreviousIndices).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::operator_delete(TVar12.Ptr,0x40);
      }
    }
    else {
      FArrayRandomGet::UpdateState
                (pFVar16,**(int **)&(this->SeedValue).field_0x8,pTVar1->ArrayNum,
                 *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8
                 ,*piVar2);
    }
    iVar14 = FArrayRandomGet::NextValue((this->ArrayRandomGet).Ptr);
    **(int **)&(this->OutIndex).field_0x8 = iVar14;
  }
  else {
    if ((this->SharedStateBehavior).EnumValue == SameData) {
      pFVar15 = MetasoundArrayHashPrivate::GetArrayContentHashGuid<Metasound::FWaveTableBankAsset>
                          (&local_78,pTVar1);
      uVar19 = pFVar15->B;
      uVar18 = pFVar15->C;
      uVar11 = pFVar15->D;
      (this->SharedStateId).A = pFVar15->A;
      (this->SharedStateId).B = uVar19;
      (this->SharedStateId).C = uVar18;
      (this->SharedStateId).D = uVar11;
    }
    pFVar15 = &this->SharedStateId;
    this_00 = FSharedStateRandomGetManager::Get();
    local_68.SharedStateId.A = pFVar15->A;
    local_68.SharedStateId.B = pFVar15->B;
    local_68.SharedStateId.C = (this->SharedStateId).C;
    local_68.SharedStateId.D = (this->SharedStateId).D;
    local_68.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Weights.ArrayNum = 0;
    local_68.Weights.ArrayMax = 0;
    local_68.Seed = **(int **)&(this->SeedValue).field_0x8;
    local_68.NumElements = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
    local_68.NoRepeatOrder = **(int **)&(this->NoRepeatOrder).field_0x8;
    local_68.bIsPreviewSound = this->bIsPreviewSound;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&local_68.Weights,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8);
    iVar14 = FSharedStateRandomGetManager::NextValue(this_00,pFVar15,&local_68);
    **(int **)&(this->OutIndex).field_0x8 = iVar14;
    if (local_68.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Weights.AllocatorInstance.Data);
    }
  }
  if ((**(int **)&(this->OutIndex).field_0x8 == -1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("*OutIndex != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                          ,500,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (6 < (byte)LogMetaSound._0_1_) {
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    FGuid::AppendString(&this->SharedStateId,&local_98,Digits);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(&this->NodeId,&local_a8,Digits);
    GetMetasoundDataTypeString<Metasound::FWaveTableBankAsset>();
    UE::Logging::Private::BasicLog<7>
              (&`private:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::ExecuteTriggerNext(int)___ptr64'
                ::__l23::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  uVar18 = **(int **)&(this->OutIndex).field_0x8 % pTVar1->ArrayNum;
  uVar19 = 0;
  if ((int)uVar18 < pTVar1->ArrayNum) {
    uVar19 = ~uVar18 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  puVar7 = *(undefined8 **)&(this->OutValue).field_0x8;
  lVar8 = *(longlong *)(pFVar6 + (longlong)(int)uVar18 * 0x10 + 8);
  uVar9 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar18 * 0x10);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_88 = *puVar7;
  pTStack_80 = (TReferenceControllerBase<1> *)puVar7[1];
  *puVar7 = uVar9;
  puVar7[1] = lVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnNext).field_0x8,param_1);
  return;
}

// ExecuteTriggerReset @ 14b3a52f0

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
ExecuteTriggerReset(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1)

{
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> *pTVar1;
  int iVar2;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  TCircularQueue<int> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FGuid *pFVar12;
  FSharedStateRandomGetManager *this_00;
  FArrayRandomGet *pFVar13;
  FArrayRandomGet *pFVar14;
  longlong local_68;
  FGuid local_60;
  InitSharedStateArgs local_50;
  
  pTVar3 = *(TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> **)
            &(this->InputArray).field_0x8;
  if ((**(char **)&(this->bEnableSharedState).field_0x8 != '\0') && (this->bIsPreviewSound == false)
     ) {
    if ((this->SharedStateBehavior).EnumValue == SameData) {
      pFVar12 = MetasoundArrayHashPrivate::GetArrayContentHashGuid<Metasound::FAudioBusAsset>
                          (&local_60,pTVar3);
      uVar9 = pFVar12->B;
      uVar10 = pFVar12->C;
      uVar11 = pFVar12->D;
      (this->SharedStateId).A = pFVar12->A;
      (this->SharedStateId).B = uVar9;
      (this->SharedStateId).C = uVar10;
      (this->SharedStateId).D = uVar11;
    }
    pFVar12 = &this->SharedStateId;
    this_00 = FSharedStateRandomGetManager::Get();
    local_50.SharedStateId.A = pFVar12->A;
    local_50.SharedStateId.B = pFVar12->B;
    local_50.SharedStateId.C = (this->SharedStateId).C;
    local_50.SharedStateId.D = (this->SharedStateId).D;
    local_50.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Weights.ArrayNum = 0;
    local_50.Weights.ArrayMax = 0;
    local_50.Seed = **(int **)&(this->SeedValue).field_0x8;
    local_50.NumElements = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
    local_50.NoRepeatOrder = **(int **)&(this->NoRepeatOrder).field_0x8;
    local_50.bIsPreviewSound = this->bIsPreviewSound;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&local_50.Weights,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8);
    FSharedStateRandomGetManager::ResetSeed(this_00,pFVar12,&local_50);
    if (local_50.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Weights.AllocatorInstance.Data);
    }
    goto LAB_14b3a5531;
  }
  piVar4 = *(int **)&(this->NoRepeatOrder).field_0x8;
  pTVar1 = &this->ArrayRandomGet;
  if (pTVar1->Ptr == (FArrayRandomGet *)0x0) {
    pTVar5 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8;
    iVar2 = pTVar3->ArrayNum;
    piVar6 = *(int **)&(this->SeedValue).field_0x8;
    pFVar13 = ::operator_new(0x40);
    if (pFVar13 == (FArrayRandomGet *)0x0) {
      pFVar13 = (FArrayRandomGet *)0x0;
    }
    else {
      pFVar13 = FArrayRandomGet::FArrayRandomGet(pFVar13,*piVar6,iVar2,pTVar5,*piVar4);
    }
    if (pTVar1 == (TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>
                   *)&local_68) {
      if (pFVar13 != (FArrayRandomGet *)0x0) {
        pFVar7 = (pFVar13->RandomWeights).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pTVar8 = (pFVar13->PreviousIndicesQueue).Ptr;
        if (pTVar8 != (TCircularQueue<int> *)0x0) {
          pFVar7 = (pTVar8->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pTVar8,0x20);
        }
        pFVar7 = (pFVar13->PreviousIndices).AllocatorInstance.Data;
        pFVar14 = pFVar13;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        goto LAB_14b3a54f2;
      }
    }
    else {
      pFVar14 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar13;
      if (pFVar14 != (FArrayRandomGet *)0x0) {
        pFVar7 = (pFVar14->RandomWeights).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pTVar8 = (pFVar14->PreviousIndicesQueue).Ptr;
        if (pTVar8 != (TCircularQueue<int> *)0x0) {
          pFVar7 = (pTVar8->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pTVar8,0x20);
        }
        pFVar7 = (pFVar14->PreviousIndices).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
LAB_14b3a54f2:
        ::operator_delete(pFVar14,0x40);
      }
    }
  }
  else {
    FArrayRandomGet::UpdateState
              (pTVar1->Ptr,**(int **)&(this->SeedValue).field_0x8,pTVar3->ArrayNum,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8,
               *piVar4);
  }
  FArrayRandomGet::ResetSeed((this->ArrayRandomGet).Ptr);
LAB_14b3a5531:
  FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnReset).field_0x8,param_1);
  return;
}

// ExecuteTriggerReset @ 14b3a5560

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
ExecuteTriggerReset(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1)

{
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> *pTVar1;
  int iVar2;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  TCircularQueue<int> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FGuid *pFVar12;
  FSharedStateRandomGetManager *this_00;
  FArrayRandomGet *pFVar13;
  FArrayRandomGet *pFVar14;
  longlong local_68;
  FGuid local_60;
  InitSharedStateArgs local_50;
  
  pTVar3 = *(TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> **)
            &(this->InputArray).field_0x8;
  if ((**(char **)&(this->bEnableSharedState).field_0x8 != '\0') && (this->bIsPreviewSound == false)
     ) {
    if ((this->SharedStateBehavior).EnumValue == SameData) {
      pFVar12 = MetasoundArrayHashPrivate::GetArrayContentHashGuid<Metasound::FWaveAsset>
                          (&local_60,pTVar3);
      uVar9 = pFVar12->B;
      uVar10 = pFVar12->C;
      uVar11 = pFVar12->D;
      (this->SharedStateId).A = pFVar12->A;
      (this->SharedStateId).B = uVar9;
      (this->SharedStateId).C = uVar10;
      (this->SharedStateId).D = uVar11;
    }
    pFVar12 = &this->SharedStateId;
    this_00 = FSharedStateRandomGetManager::Get();
    local_50.SharedStateId.A = pFVar12->A;
    local_50.SharedStateId.B = pFVar12->B;
    local_50.SharedStateId.C = (this->SharedStateId).C;
    local_50.SharedStateId.D = (this->SharedStateId).D;
    local_50.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Weights.ArrayNum = 0;
    local_50.Weights.ArrayMax = 0;
    local_50.Seed = **(int **)&(this->SeedValue).field_0x8;
    local_50.NumElements = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
    local_50.NoRepeatOrder = **(int **)&(this->NoRepeatOrder).field_0x8;
    local_50.bIsPreviewSound = this->bIsPreviewSound;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&local_50.Weights,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8);
    FSharedStateRandomGetManager::ResetSeed(this_00,pFVar12,&local_50);
    if (local_50.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Weights.AllocatorInstance.Data);
    }
    goto LAB_14b3a57a1;
  }
  piVar4 = *(int **)&(this->NoRepeatOrder).field_0x8;
  pTVar1 = &this->ArrayRandomGet;
  if (pTVar1->Ptr == (FArrayRandomGet *)0x0) {
    pTVar5 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8;
    iVar2 = pTVar3->ArrayNum;
    piVar6 = *(int **)&(this->SeedValue).field_0x8;
    pFVar13 = ::operator_new(0x40);
    if (pFVar13 == (FArrayRandomGet *)0x0) {
      pFVar13 = (FArrayRandomGet *)0x0;
    }
    else {
      pFVar13 = FArrayRandomGet::FArrayRandomGet(pFVar13,*piVar6,iVar2,pTVar5,*piVar4);
    }
    if (pTVar1 == (TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>
                   *)&local_68) {
      if (pFVar13 != (FArrayRandomGet *)0x0) {
        pFVar7 = (pFVar13->RandomWeights).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pTVar8 = (pFVar13->PreviousIndicesQueue).Ptr;
        if (pTVar8 != (TCircularQueue<int> *)0x0) {
          pFVar7 = (pTVar8->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pTVar8,0x20);
        }
        pFVar7 = (pFVar13->PreviousIndices).AllocatorInstance.Data;
        pFVar14 = pFVar13;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        goto LAB_14b3a5762;
      }
    }
    else {
      pFVar14 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar13;
      if (pFVar14 != (FArrayRandomGet *)0x0) {
        pFVar7 = (pFVar14->RandomWeights).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pTVar8 = (pFVar14->PreviousIndicesQueue).Ptr;
        if (pTVar8 != (TCircularQueue<int> *)0x0) {
          pFVar7 = (pTVar8->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pTVar8,0x20);
        }
        pFVar7 = (pFVar14->PreviousIndices).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
LAB_14b3a5762:
        ::operator_delete(pFVar14,0x40);
      }
    }
  }
  else {
    FArrayRandomGet::UpdateState
              (pTVar1->Ptr,**(int **)&(this->SeedValue).field_0x8,pTVar3->ArrayNum,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8,
               *piVar4);
  }
  FArrayRandomGet::ResetSeed((this->ArrayRandomGet).Ptr);
LAB_14b3a57a1:
  FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnReset).field_0x8,param_1);
  return;
}

// ExecuteTriggerReset @ 14b3a57d0

void __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
ExecuteTriggerReset(TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1)

{
  TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_> *pTVar1;
  int iVar2;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  TCircularQueue<int> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FGuid *pFVar12;
  FSharedStateRandomGetManager *this_00;
  FArrayRandomGet *pFVar13;
  FArrayRandomGet *pFVar14;
  longlong local_68;
  FGuid local_60;
  InitSharedStateArgs local_50;
  
  pTVar3 = *(TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> **)
            &(this->InputArray).field_0x8;
  if ((**(char **)&(this->bEnableSharedState).field_0x8 != '\0') && (this->bIsPreviewSound == false)
     ) {
    if ((this->SharedStateBehavior).EnumValue == SameData) {
      pFVar12 = MetasoundArrayHashPrivate::GetArrayContentHashGuid<Metasound::FWaveTableBankAsset>
                          (&local_60,pTVar3);
      uVar9 = pFVar12->B;
      uVar10 = pFVar12->C;
      uVar11 = pFVar12->D;
      (this->SharedStateId).A = pFVar12->A;
      (this->SharedStateId).B = uVar9;
      (this->SharedStateId).C = uVar10;
      (this->SharedStateId).D = uVar11;
    }
    pFVar12 = &this->SharedStateId;
    this_00 = FSharedStateRandomGetManager::Get();
    local_50.SharedStateId.A = pFVar12->A;
    local_50.SharedStateId.B = pFVar12->B;
    local_50.SharedStateId.C = (this->SharedStateId).C;
    local_50.SharedStateId.D = (this->SharedStateId).D;
    local_50.Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Weights.ArrayNum = 0;
    local_50.Weights.ArrayMax = 0;
    local_50.Seed = **(int **)&(this->SeedValue).field_0x8;
    local_50.NumElements = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
    local_50.NoRepeatOrder = **(int **)&(this->NoRepeatOrder).field_0x8;
    local_50.bIsPreviewSound = this->bIsPreviewSound;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&local_50.Weights,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8);
    FSharedStateRandomGetManager::ResetSeed(this_00,pFVar12,&local_50);
    if (local_50.Weights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Weights.AllocatorInstance.Data);
    }
    goto LAB_14b3a5a11;
  }
  piVar4 = *(int **)&(this->NoRepeatOrder).field_0x8;
  pTVar1 = &this->ArrayRandomGet;
  if (pTVar1->Ptr == (FArrayRandomGet *)0x0) {
    pTVar5 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8;
    iVar2 = pTVar3->ArrayNum;
    piVar6 = *(int **)&(this->SeedValue).field_0x8;
    pFVar13 = ::operator_new(0x40);
    if (pFVar13 == (FArrayRandomGet *)0x0) {
      pFVar13 = (FArrayRandomGet *)0x0;
    }
    else {
      pFVar13 = FArrayRandomGet::FArrayRandomGet(pFVar13,*piVar6,iVar2,pTVar5,*piVar4);
    }
    if (pTVar1 == (TUniquePtr<Metasound::FArrayRandomGet,TDefaultDelete<Metasound::FArrayRandomGet>_>
                   *)&local_68) {
      if (pFVar13 != (FArrayRandomGet *)0x0) {
        pFVar7 = (pFVar13->RandomWeights).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pTVar8 = (pFVar13->PreviousIndicesQueue).Ptr;
        if (pTVar8 != (TCircularQueue<int> *)0x0) {
          pFVar7 = (pTVar8->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pTVar8,0x20);
        }
        pFVar7 = (pFVar13->PreviousIndices).AllocatorInstance.Data;
        pFVar14 = pFVar13;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        goto LAB_14b3a59d2;
      }
    }
    else {
      pFVar14 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar13;
      if (pFVar14 != (FArrayRandomGet *)0x0) {
        pFVar7 = (pFVar14->RandomWeights).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        pTVar8 = (pFVar14->PreviousIndicesQueue).Ptr;
        if (pTVar8 != (TCircularQueue<int> *)0x0) {
          pFVar7 = (pTVar8->Buffer).Elements.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pTVar8,0x20);
        }
        pFVar7 = (pFVar14->PreviousIndices).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
LAB_14b3a59d2:
        ::operator_delete(pFVar14,0x40);
      }
    }
  }
  else {
    FArrayRandomGet::UpdateState
              (pTVar1->Ptr,**(int **)&(this->SeedValue).field_0x8,pTVar3->ArrayNum,
               *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InputWeightsArray).field_0x8,
               *piVar4);
  }
  FArrayRandomGet::ResetSeed((this->ArrayRandomGet).Ptr);
LAB_14b3a5a11:
  FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnReset).field_0x8,param_1);
  return;
}

// GetDefaultInterface @ 14b3aee50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBusAsset> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FName *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FInputDataVertex *pFVar14;
  FVertexInterface *pFVar15;
  ulonglong uVar16;
  undefined1 auStackY_348 [32];
  bool local_318 [4];
  int local_314 [3];
  FInputVertexInterface local_308;
  FInputVertexInterfaceDeclarationBuilder local_2e8;
  longlong local_2c0;
  FOutputVertexInterface local_2b8;
  FOutputVertexInterfaceDeclarationBuilder local_298;
  TOutputDataVertex<int> local_270;
  TOutputDataVertex<Metasound::FAudioBusAsset> local_250;
  TOutputDataVertex<Metasound::FTrigger> local_230;
  TOutputDataVertex<Metasound::FTrigger> local_210;
  FInputDataVertex local_1f0;
  TInputDataVertex<Metasound::FTrigger> local_1b8;
  TInputDataVertex<Metasound::FTrigger> local_180;
  TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> local_148;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_110;
  TInputDataVertex<int> local_d8;
  TInputDataVertex<int> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_270,&ArrayNodeRandomGetVertexNames::OutputIndexName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FAudioBusAsset>::
             TOutputDataVertex<Metasound::FAudioBusAsset><>
                       (&local_250,&ArrayNodeRandomGetVertexNames::ShuffleOutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_230,&ArrayNodeRandomGetVertexNames::OutputTriggerOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_210,&ArrayNodeRandomGetVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_298,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b8,
               &local_2b8.SubInterfaces);
    if ((local_298.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_298.Vertices)->AllocatorInstance,(local_298.Vertices)->ArrayNum,
                 &(local_298.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_298);
    FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
    pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                       ();
    local_1f0._padding_ = local_2c0;
    local_318[0] = false;
    local_1f0._padding_ = *(longlong *)pFVar7;
    local_1f0._padding_ =
         (longlong)
         &
         ___7__TInputConstructorVertex_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    local_1f0._padding_._0_4_ = 1;
    local_1f0.Literal.Value._padding_._0_4_ = 1;
    local_1f0.Literal.Value.TypeIndex = 2;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_68,&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,local_318);
    local_314[0] = 1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_a0,&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName,
                        &FDataVertexMetadata::EmptyBasic,local_314);
    local_314[1] = 0xffffffff;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<int>::TInputDataVertex<int><int>
                        (&local_d8,&ArrayNodeRandomGetVertexNames::InputSeedName,
                         &FDataVertexMetadata::EmptyBasic,local_314 + 1);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                        (&local_110,&ArrayNodeRandomGetVertexNames::InputWeightsName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
                        (&local_148,&ArrayNodeRandomGetVertexNames::InputRandomArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_180,&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar14 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1b8,&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName,
                         &FDataVertexMetadata::EmptyBasic);
    local_308._padding_ = 0;
    local_308._padding_ = 0;
    local_308.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.SubInterfaces.ArrayNum = 0;
    local_308.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_2e8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_308,
               &local_308.SubInterfaces);
    if ((local_2e8.Vertices)->ArrayMax < 8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,8,&(local_2e8.Vertices)->AllocatorInstance,(local_2e8.Vertices)->ArrayNum,
                 &(local_2e8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar14);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,&local_1f0);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_2e8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_308,&local_2b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data,
               local_308.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_308.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_308._padding_,(int)local_308._padding_);
    if ((FInputDataVertex *)local_308._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_308._padding_);
    }
    if ((0xc < (byte)local_1b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1b8._48_1_])(&local_1b8.field_0x20);
    if ((0xc < (byte)local_180._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
    if ((0xc < (byte)local_148._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
    if ((0xc < (byte)local_110._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
    if ((0xc < (byte)local_d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
    if ((0xc < (byte)local_a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
    if ((0xc < (byte)local_68._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
    uVar16 = (ulonglong)local_1f0.Literal.Value.TypeIndex;
    if ((0xc < local_1f0.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] !=
        UE::Core::Private::TDestructorCaller<int>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(&local_1f0.Literal);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b8.SubInterfaces.AllocatorInstance.Data,
               local_2b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
    atexit(`Metasound::
           TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b3af4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TOutputDataVertex<Metasound::FWaveAsset> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FName *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FInputDataVertex *pFVar14;
  FVertexInterface *pFVar15;
  ulonglong uVar16;
  undefined1 auStackY_348 [32];
  bool local_318 [4];
  int local_314 [3];
  FInputVertexInterface local_308;
  FInputVertexInterfaceDeclarationBuilder local_2e8;
  longlong local_2c0;
  FOutputVertexInterface local_2b8;
  FOutputVertexInterfaceDeclarationBuilder local_298;
  TOutputDataVertex<int> local_270;
  TOutputDataVertex<Metasound::FWaveAsset> local_250;
  TOutputDataVertex<Metasound::FTrigger> local_230;
  TOutputDataVertex<Metasound::FTrigger> local_210;
  FInputDataVertex local_1f0;
  TInputDataVertex<Metasound::FTrigger> local_1b8;
  TInputDataVertex<Metasound::FTrigger> local_180;
  TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> local_148;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_110;
  TInputDataVertex<int> local_d8;
  TInputDataVertex<int> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_270,&ArrayNodeRandomGetVertexNames::OutputIndexName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FWaveAsset>::TOutputDataVertex<Metasound::FWaveAsset><>
                       (&local_250,&ArrayNodeRandomGetVertexNames::ShuffleOutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_230,&ArrayNodeRandomGetVertexNames::OutputTriggerOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_210,&ArrayNodeRandomGetVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_298,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b8,
               &local_2b8.SubInterfaces);
    if ((local_298.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_298.Vertices)->AllocatorInstance,(local_298.Vertices)->ArrayNum,
                 &(local_298.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_298);
    FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
    pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                       ();
    local_1f0._padding_ = local_2c0;
    local_318[0] = false;
    local_1f0._padding_ = *(longlong *)pFVar7;
    local_1f0._padding_ =
         (longlong)
         &
         ___7__TInputConstructorVertex_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    local_1f0._padding_._0_4_ = 1;
    local_1f0.Literal.Value._padding_._0_4_ = 1;
    local_1f0.Literal.Value.TypeIndex = 2;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_68,&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,local_318);
    local_314[0] = 1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_a0,&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName,
                        &FDataVertexMetadata::EmptyBasic,local_314);
    local_314[1] = 0xffffffff;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<int>::TInputDataVertex<int><int>
                        (&local_d8,&ArrayNodeRandomGetVertexNames::InputSeedName,
                         &FDataVertexMetadata::EmptyBasic,local_314 + 1);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                        (&local_110,&ArrayNodeRandomGetVertexNames::InputWeightsName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
                        (&local_148,&ArrayNodeRandomGetVertexNames::InputRandomArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_180,&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar14 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1b8,&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName,
                         &FDataVertexMetadata::EmptyBasic);
    local_308._padding_ = 0;
    local_308._padding_ = 0;
    local_308.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.SubInterfaces.ArrayNum = 0;
    local_308.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_2e8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_308,
               &local_308.SubInterfaces);
    if ((local_2e8.Vertices)->ArrayMax < 8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,8,&(local_2e8.Vertices)->AllocatorInstance,(local_2e8.Vertices)->ArrayNum,
                 &(local_2e8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar14);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,&local_1f0);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_2e8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_308,&local_2b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data,
               local_308.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_308.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_308._padding_,(int)local_308._padding_);
    if ((FInputDataVertex *)local_308._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_308._padding_);
    }
    if ((0xc < (byte)local_1b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1b8._48_1_])(&local_1b8.field_0x20);
    if ((0xc < (byte)local_180._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
    if ((0xc < (byte)local_148._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
    if ((0xc < (byte)local_110._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
    if ((0xc < (byte)local_d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
    if ((0xc < (byte)local_a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
    if ((0xc < (byte)local_68._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
    uVar16 = (ulonglong)local_1f0.Literal.Value.TypeIndex;
    if ((0xc < local_1f0.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] !=
        UE::Core::Private::TDestructorCaller<int>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(&local_1f0.Literal);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b8.SubInterfaces.AllocatorInstance.Data,
               local_2b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
    atexit(`Metasound::
           TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b3afb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TOutputDataVertex<Metasound::FWaveTableBankAsset> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FName *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FInputDataVertex *pFVar14;
  FVertexInterface *pFVar15;
  ulonglong uVar16;
  undefined1 auStackY_348 [32];
  bool local_318 [4];
  int local_314 [3];
  FInputVertexInterface local_308;
  FInputVertexInterfaceDeclarationBuilder local_2e8;
  longlong local_2c0;
  FOutputVertexInterface local_2b8;
  FOutputVertexInterfaceDeclarationBuilder local_298;
  TOutputDataVertex<int> local_270;
  TOutputDataVertex<Metasound::FWaveTableBankAsset> local_250;
  TOutputDataVertex<Metasound::FTrigger> local_230;
  TOutputDataVertex<Metasound::FTrigger> local_210;
  FInputDataVertex local_1f0;
  TInputDataVertex<Metasound::FTrigger> local_1b8;
  TInputDataVertex<Metasound::FTrigger> local_180;
  TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> local_148;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_110;
  TInputDataVertex<int> local_d8;
  TInputDataVertex<int> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_270,&ArrayNodeRandomGetVertexNames::OutputIndexName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FWaveTableBankAsset>::
             TOutputDataVertex<Metasound::FWaveTableBankAsset><>
                       (&local_250,&ArrayNodeRandomGetVertexNames::ShuffleOutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_230,&ArrayNodeRandomGetVertexNames::OutputTriggerOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_210,&ArrayNodeRandomGetVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_298,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b8,
               &local_2b8.SubInterfaces);
    if ((local_298.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_298.Vertices)->AllocatorInstance,(local_298.Vertices)->ArrayNum,
                 &(local_298.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_298,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_298);
    FLazyName::Resolve(&ArrayNodeRandomGetVertexNames::InputSharedStateBehaviorName);
    pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>
                       ();
    local_1f0._padding_ = local_2c0;
    local_318[0] = false;
    local_1f0._padding_ = *(longlong *)pFVar7;
    local_1f0._padding_ =
         (longlong)
         &
         ___7__TInputConstructorVertex_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    local_1f0._padding_._0_4_ = 1;
    local_1f0.Literal.Value._padding_._0_4_ = 1;
    local_1f0.Literal.Value.TypeIndex = 2;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_68,&ArrayNodeRandomGetVertexNames::InputEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,local_318);
    local_314[0] = 1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_a0,&ArrayNodeRandomGetVertexNames::InputNoRepeatOrderName,
                        &FDataVertexMetadata::EmptyBasic,local_314);
    local_314[1] = 0xffffffff;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<int>::TInputDataVertex<int><int>
                        (&local_d8,&ArrayNodeRandomGetVertexNames::InputSeedName,
                         &FDataVertexMetadata::EmptyBasic,local_314 + 1);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                        (&local_110,&ArrayNodeRandomGetVertexNames::InputWeightsName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ::
              TInputDataVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
                        (&local_148,&ArrayNodeRandomGetVertexNames::InputRandomArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_180,&ArrayNodeRandomGetVertexNames::InputTriggerResetSeedName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar14 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1b8,&ArrayNodeRandomGetVertexNames::InputTriggerNextValueName,
                         &FDataVertexMetadata::EmptyBasic);
    local_308._padding_ = 0;
    local_308._padding_ = 0;
    local_308.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.SubInterfaces.ArrayNum = 0;
    local_308.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_2e8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_308,
               &local_308.SubInterfaces);
    if ((local_2e8.Vertices)->ArrayMax < 8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,8,&(local_2e8.Vertices)->AllocatorInstance,(local_2e8.Vertices)->ArrayNum,
                 &(local_2e8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar14);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,&local_1f0);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_2e8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_308,&local_2b8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data,
               local_308.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_308.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_308._padding_,(int)local_308._padding_);
    if ((FInputDataVertex *)local_308._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_308._padding_);
    }
    if ((0xc < (byte)local_1b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1b8._48_1_])(&local_1b8.field_0x20);
    if ((0xc < (byte)local_180._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
    if ((0xc < (byte)local_148._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
    if ((0xc < (byte)local_110._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
    if ((0xc < (byte)local_d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
    if ((0xc < (byte)local_a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
    if ((0xc < (byte)local_68._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
    uVar16 = (ulonglong)local_1f0.Literal.Value.TypeIndex;
    if ((0xc < local_1f0.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FVertexInterface *)(*pcVar1)();
      return pFVar15;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] !=
        UE::Core::Private::TDestructorCaller<int>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(&local_1f0.Literal);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b8.SubInterfaces.AllocatorInstance.Data,
               local_2b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
    atexit(`Metasound::
           TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           ::GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b3b80d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b8220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b3b8370

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Random Get");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,1,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetSameNodeInCompositionId @ 14b3bffa0

FGuid * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
GetSameNodeInCompositionId
          (TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *this,FGuid *__return_storage_ptr__,FGuid *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FGuid *pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint local_res10;
  
  uVar10 = param_1->A;
  local_res10 = param_1->C;
  uVar7 = 0;
  uVar11 = param_1->B;
  uVar8 = param_1->D;
  iVar6 = param_2->ArrayNum;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar10 = uVar10 ^ (uVar10 >> 2) + 0x9e3779b9 +
                        *(int *)((param_2->AllocatorInstance).Data + lVar12) + uVar10 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar11 = uVar11 ^ (uVar11 >> 2) + 0x9e3779b9 +
                        *(int *)((param_2->AllocatorInstance).Data + lVar12 + 4) + uVar11 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      local_res10 = local_res10 ^
                    (local_res10 >> 2) + 0x9e3779b9 +
                    *(int *)((param_2->AllocatorInstance).Data + lVar12 + 8) + local_res10 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar7 = uVar7 + 1;
      lVar1 = lVar12 + 0xc;
      iVar6 = param_2->ArrayNum;
      lVar12 = lVar12 + 0x10;
      uVar8 = uVar8 ^ (uVar8 >> 2) + 0x9e3779b9 +
                      *(int *)((param_2->AllocatorInstance).Data + lVar1) + uVar8 * 0x40;
    } while ((int)uVar7 < iVar6);
  }
  __return_storage_ptr__->A = uVar10;
  __return_storage_ptr__->B = uVar11;
  __return_storage_ptr__->C = local_res10;
  __return_storage_ptr__->D = uVar8;
  return __return_storage_ptr__;
}

// GetSameNodeInCompositionId @ 14b3c01d0

FGuid * __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
GetSameNodeInCompositionId
          (TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this
          ,FGuid *__return_storage_ptr__,FGuid *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FGuid *pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint local_res10;
  
  uVar10 = param_1->A;
  local_res10 = param_1->C;
  uVar7 = 0;
  uVar11 = param_1->B;
  uVar8 = param_1->D;
  iVar6 = param_2->ArrayNum;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar10 = uVar10 ^ (uVar10 >> 2) + 0x9e3779b9 +
                        *(int *)((param_2->AllocatorInstance).Data + lVar12) + uVar10 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar11 = uVar11 ^ (uVar11 >> 2) + 0x9e3779b9 +
                        *(int *)((param_2->AllocatorInstance).Data + lVar12 + 4) + uVar11 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      local_res10 = local_res10 ^
                    (local_res10 >> 2) + 0x9e3779b9 +
                    *(int *)((param_2->AllocatorInstance).Data + lVar12 + 8) + local_res10 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar7 = uVar7 + 1;
      lVar1 = lVar12 + 0xc;
      iVar6 = param_2->ArrayNum;
      lVar12 = lVar12 + 0x10;
      uVar8 = uVar8 ^ (uVar8 >> 2) + 0x9e3779b9 +
                      *(int *)((param_2->AllocatorInstance).Data + lVar1) + uVar8 * 0x40;
    } while ((int)uVar7 < iVar6);
  }
  __return_storage_ptr__->A = uVar10;
  __return_storage_ptr__->B = uVar11;
  __return_storage_ptr__->C = local_res10;
  __return_storage_ptr__->D = uVar8;
  return __return_storage_ptr__;
}

// GetSameNodeInCompositionId @ 14b3c0400

FGuid * __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
GetSameNodeInCompositionId
          (TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FGuid *__return_storage_ptr__,FGuid *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FGuid *pFVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint local_res10;
  
  uVar10 = param_1->A;
  local_res10 = param_1->C;
  uVar7 = 0;
  uVar11 = param_1->B;
  uVar8 = param_1->D;
  iVar6 = param_2->ArrayNum;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar10 = uVar10 ^ (uVar10 >> 2) + 0x9e3779b9 +
                        *(int *)((param_2->AllocatorInstance).Data + lVar12) + uVar10 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar11 = uVar11 ^ (uVar11 >> 2) + 0x9e3779b9 +
                        *(int *)((param_2->AllocatorInstance).Data + lVar12 + 4) + uVar11 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      local_res10 = local_res10 ^
                    (local_res10 >> 2) + 0x9e3779b9 +
                    *(int *)((param_2->AllocatorInstance).Data + lVar12 + 8) + local_res10 * 0x40;
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar2)();
        return pFVar5;
      }
      uVar7 = uVar7 + 1;
      lVar1 = lVar12 + 0xc;
      iVar6 = param_2->ArrayNum;
      lVar12 = lVar12 + 0x10;
      uVar8 = uVar8 ^ (uVar8 >> 2) + 0x9e3779b9 +
                      *(int *)((param_2->AllocatorInstance).Data + lVar1) + uVar8 * 0x40;
    } while ((int)uVar7 < iVar6);
  }
  __return_storage_ptr__->A = uVar10;
  __return_storage_ptr__->B = uVar11;
  __return_storage_ptr__->C = local_res10;
  __return_storage_ptr__->D = uVar8;
  return __return_storage_ptr__;
}

// Reset @ 14b3d6110

/* WARNING: Removing unreachable block (ram,0x00014b3d6230) */
/* WARNING: Removing unreachable block (ram,0x00014b3d6255) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
Reset(TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  TEnumEntry<Metasound::ESharedStateBehaviorType> *pTVar1;
  ESharedStateBehaviorType EVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar9;
  IMetasoundEnvironmentVariable *pIVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  FMetasoundEnvironment *this_00;
  code *pcVar13;
  bool bVar14;
  FNameEntryId FVar15;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar16;
  void *pvVar17;
  void *pvVar18;
  FString *pFVar19;
  FString *pFVar20;
  FGuid *pFVar21;
  wchar_t *pwVar22;
  uint uVar23;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_98;
  TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int> local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FGuid local_48;
  
  pTVar9 = &param_1->Environment->Variables;
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,Frontend::SourceInterface::Environment::GraphName);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      pFVar19 = FMetasoundEnvironment::GetValue<FString>
                          (param_1->Environment,&local_78,
                           &Frontend::SourceInterface::Environment::GraphName);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      ::FString::operator=(&this->GraphName,pwVar22);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  EVar2 = (this->SharedStateBehavior).EnumValue;
  TEnumStringHelper<enum_Metasound::ESharedStateBehaviorType>::GetAllEntries(&local_88);
  pTVar1 = local_88.DataPtr + local_88.ArrayNum;
  for (; local_88.DataPtr != pTVar1; local_88.DataPtr = local_88.DataPtr + 1) {
    if ((local_88.DataPtr)->Value == EVar2) {
      local_res8 = (local_88.DataPtr)->Name;
      if ((local_res8.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar15.Value = local_res8.ComparisonIndex.Value;
      goto LAB_14b3d6222;
    }
  }
  local_res8.ComparisonIndex.Value = 0xffffffff;
  local_res8.Number = 0;
  FVar15.Value = 0xffffffff;
LAB_14b3d6222:
  if (FVar15.Value != 0xffffffff) {
    pFVar20 = ::FName::ToString(&local_res8,&local_68);
    pFVar19 = &this->DebugSharedStateBehaviorString;
    if (pFVar19 != pFVar20) {
      pFVar11 = (pFVar19->Data).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pFVar19->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
      (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->DebugSharedStateBehaviorString).Data.ArrayNum = (pFVar20->Data).ArrayNum;
      (this->DebugSharedStateBehaviorString).Data.ArrayMax = (pFVar20->Data).ArrayMax;
      (pFVar20->Data).ArrayNum = 0;
      (pFVar20->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = &param_1->Environment->Variables;
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,Frontend::SourceInterface::Environment::IsPreview);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,Frontend::SourceInterface::Environment::IsPreview);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<bool>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      bVar14 = FMetasoundEnvironment::GetValue<bool>
                         (param_1->Environment,&Frontend::SourceInterface::Environment::IsPreview);
      goto LAB_14b3d6363;
    }
  }
  bVar14 = false;
LAB_14b3d6363:
  this->bIsPreviewSound = bVar14;
  puVar12 = *(undefined8 **)&(this->OutValue).field_0x8;
  local_58 = *puVar12;
  pTStack_50 = (TReferenceControllerBase<1> *)puVar12[1];
  *puVar12 = 0;
  puVar12[1] = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  **(undefined4 **)&(this->OutIndex).field_0x8 = 0xffffffff;
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  pTVar9 = &param_1->Environment->Variables;
  FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,local_res10);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,local_res10);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      this_00 = param_1->Environment;
      FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
      FMetasoundEnvironment::GetValue<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                (this_00,&local_98,local_res18);
      EVar2 = (this->SharedStateBehavior).EnumValue;
      if (EVar2 == SameNode) {
        if ((local_98.ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("GraphHierarchy.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                                ,0x155,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar23 = 0;
        if ((int)(local_98.ArrayNum - 1U) < local_98.ArrayNum) {
          uVar23 = ~(local_98.ArrayNum - 1U) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar23 = (this->NodeId).B;
        uVar3 = (this->NodeId).C;
        uVar4 = (this->NodeId).D;
        uVar5 = (this->NodeId).A;
        iVar6 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -0xc
                        );
        iVar7 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -8);
        iVar8 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -4);
        (this->SharedStateId).A =
             uVar5 * 0x40 + -0x61c88647 + (uVar5 >> 2) +
             *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -0x10)
             ^ uVar5;
        (this->SharedStateId).B = iVar6 + uVar23 * 0x40 + (uVar23 >> 2) + 0x9e3779b9 ^ uVar23;
        (this->SharedStateId).C = iVar7 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
        (this->SharedStateId).D = iVar8 + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
      }
      else if (EVar2 == SameNodeInComposition) {
        pFVar21 = GetSameNodeInCompositionId(this,&local_48,&this->NodeId,&local_98);
        uVar23 = pFVar21->B;
        uVar3 = pFVar21->C;
        uVar4 = pFVar21->D;
        (this->SharedStateId).A = pFVar21->A;
        (this->SharedStateId).B = uVar23;
        (this->SharedStateId).C = uVar3;
        (this->SharedStateId).D = uVar4;
      }
      if (local_98.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_98.AllocatorInstance.Data);
      return;
    }
  }
  if (this->bHasLoggedMissingGraphHierarchyWarning == false) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                  ::__l36::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bHasLoggedMissingGraphHierarchyWarning = true;
  }
  return;
}

// Reset @ 14b3d6620

/* WARNING: Removing unreachable block (ram,0x00014b3d6740) */
/* WARNING: Removing unreachable block (ram,0x00014b3d6765) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
Reset(TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  TEnumEntry<Metasound::ESharedStateBehaviorType> *pTVar1;
  ESharedStateBehaviorType EVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar9;
  IMetasoundEnvironmentVariable *pIVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  FMetasoundEnvironment *this_00;
  code *pcVar13;
  bool bVar14;
  FNameEntryId FVar15;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar16;
  void *pvVar17;
  void *pvVar18;
  FString *pFVar19;
  FString *pFVar20;
  FGuid *pFVar21;
  wchar_t *pwVar22;
  uint uVar23;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_98;
  TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int> local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FGuid local_48;
  
  pTVar9 = &param_1->Environment->Variables;
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,Frontend::SourceInterface::Environment::GraphName);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      pFVar19 = FMetasoundEnvironment::GetValue<FString>
                          (param_1->Environment,&local_78,
                           &Frontend::SourceInterface::Environment::GraphName);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      ::FString::operator=(&this->GraphName,pwVar22);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  EVar2 = (this->SharedStateBehavior).EnumValue;
  TEnumStringHelper<enum_Metasound::ESharedStateBehaviorType>::GetAllEntries(&local_88);
  pTVar1 = local_88.DataPtr + local_88.ArrayNum;
  for (; local_88.DataPtr != pTVar1; local_88.DataPtr = local_88.DataPtr + 1) {
    if ((local_88.DataPtr)->Value == EVar2) {
      local_res8 = (local_88.DataPtr)->Name;
      if ((local_res8.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar15.Value = local_res8.ComparisonIndex.Value;
      goto LAB_14b3d6732;
    }
  }
  local_res8.ComparisonIndex.Value = 0xffffffff;
  local_res8.Number = 0;
  FVar15.Value = 0xffffffff;
LAB_14b3d6732:
  if (FVar15.Value != 0xffffffff) {
    pFVar20 = ::FName::ToString(&local_res8,&local_68);
    pFVar19 = &this->DebugSharedStateBehaviorString;
    if (pFVar19 != pFVar20) {
      pFVar11 = (pFVar19->Data).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pFVar19->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
      (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->DebugSharedStateBehaviorString).Data.ArrayNum = (pFVar20->Data).ArrayNum;
      (this->DebugSharedStateBehaviorString).Data.ArrayMax = (pFVar20->Data).ArrayMax;
      (pFVar20->Data).ArrayNum = 0;
      (pFVar20->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = &param_1->Environment->Variables;
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,Frontend::SourceInterface::Environment::IsPreview);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,Frontend::SourceInterface::Environment::IsPreview);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<bool>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      bVar14 = FMetasoundEnvironment::GetValue<bool>
                         (param_1->Environment,&Frontend::SourceInterface::Environment::IsPreview);
      goto LAB_14b3d6873;
    }
  }
  bVar14 = false;
LAB_14b3d6873:
  this->bIsPreviewSound = bVar14;
  puVar12 = *(undefined8 **)&(this->OutValue).field_0x8;
  local_58 = *puVar12;
  pTStack_50 = (TReferenceControllerBase<1> *)puVar12[1];
  *puVar12 = 0;
  puVar12[1] = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  **(undefined4 **)&(this->OutIndex).field_0x8 = 0xffffffff;
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  pTVar9 = &param_1->Environment->Variables;
  FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,local_res10);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,local_res10);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      this_00 = param_1->Environment;
      FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
      FMetasoundEnvironment::GetValue<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                (this_00,&local_98,local_res18);
      EVar2 = (this->SharedStateBehavior).EnumValue;
      if (EVar2 == SameNode) {
        if ((local_98.ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("GraphHierarchy.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                                ,0x155,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar23 = 0;
        if ((int)(local_98.ArrayNum - 1U) < local_98.ArrayNum) {
          uVar23 = ~(local_98.ArrayNum - 1U) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar23 = (this->NodeId).B;
        uVar3 = (this->NodeId).C;
        uVar4 = (this->NodeId).D;
        uVar5 = (this->NodeId).A;
        iVar6 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -0xc
                        );
        iVar7 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -8);
        iVar8 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -4);
        (this->SharedStateId).A =
             uVar5 * 0x40 + -0x61c88647 + (uVar5 >> 2) +
             *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -0x10)
             ^ uVar5;
        (this->SharedStateId).B = iVar6 + uVar23 * 0x40 + (uVar23 >> 2) + 0x9e3779b9 ^ uVar23;
        (this->SharedStateId).C = iVar7 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
        (this->SharedStateId).D = iVar8 + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
      }
      else if (EVar2 == SameNodeInComposition) {
        pFVar21 = GetSameNodeInCompositionId(this,&local_48,&this->NodeId,&local_98);
        uVar23 = pFVar21->B;
        uVar3 = pFVar21->C;
        uVar4 = pFVar21->D;
        (this->SharedStateId).A = pFVar21->A;
        (this->SharedStateId).B = uVar23;
        (this->SharedStateId).C = uVar3;
        (this->SharedStateId).D = uVar4;
      }
      if (local_98.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_98.AllocatorInstance.Data);
      return;
    }
  }
  if (this->bHasLoggedMissingGraphHierarchyWarning == false) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                  ::__l36::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bHasLoggedMissingGraphHierarchyWarning = true;
  }
  return;
}

// Reset @ 14b3d6b30

/* WARNING: Removing unreachable block (ram,0x00014b3d6c50) */
/* WARNING: Removing unreachable block (ram,0x00014b3d6c75) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *this,FResetParams *param_1)

{
  TEnumEntry<Metasound::ESharedStateBehaviorType> *pTVar1;
  ESharedStateBehaviorType EVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar9;
  IMetasoundEnvironmentVariable *pIVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  FMetasoundEnvironment *this_00;
  code *pcVar13;
  bool bVar14;
  FNameEntryId FVar15;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar16;
  void *pvVar17;
  void *pvVar18;
  FString *pFVar19;
  FString *pFVar20;
  FGuid *pFVar21;
  wchar_t *pwVar22;
  uint uVar23;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_98;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  TArrayView<Metasound::TEnumEntry<Metasound::ESharedStateBehaviorType>_const_,int> local_78;
  FString local_68;
  FString local_58;
  FGuid local_48;
  
  pTVar9 = &param_1->Environment->Variables;
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,Frontend::SourceInterface::Environment::GraphName);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      pFVar19 = FMetasoundEnvironment::GetValue<FString>
                          (param_1->Environment,&local_68,
                           &Frontend::SourceInterface::Environment::GraphName);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      ::FString::operator=(&this->GraphName,pwVar22);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  EVar2 = (this->SharedStateBehavior).EnumValue;
  TEnumStringHelper<enum_Metasound::ESharedStateBehaviorType>::GetAllEntries(&local_78);
  pTVar1 = local_78.DataPtr + local_78.ArrayNum;
  for (; local_78.DataPtr != pTVar1; local_78.DataPtr = local_78.DataPtr + 1) {
    if ((local_78.DataPtr)->Value == EVar2) {
      local_res8 = (local_78.DataPtr)->Name;
      if ((local_res8.ComparisonIndex.Value.Value == 0xffffffff) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar15.Value = local_res8.ComparisonIndex.Value;
      goto LAB_14b3d6c42;
    }
  }
  local_res8.ComparisonIndex.Value = 0xffffffff;
  local_res8.Number = 0;
  FVar15.Value = 0xffffffff;
LAB_14b3d6c42:
  if (FVar15.Value != 0xffffffff) {
    pFVar20 = ::FName::ToString(&local_res8,&local_58);
    pFVar19 = &this->DebugSharedStateBehaviorString;
    if (pFVar19 != pFVar20) {
      pFVar11 = (pFVar19->Data).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pFVar19->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
      (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->DebugSharedStateBehaviorString).Data.ArrayNum = (pFVar20->Data).ArrayNum;
      (this->DebugSharedStateBehaviorString).Data.ArrayMax = (pFVar20->Data).ArrayMax;
      (pFVar20->Data).ArrayNum = 0;
      (pFVar20->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pTVar9 = &param_1->Environment->Variables;
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,Frontend::SourceInterface::Environment::IsPreview);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,Frontend::SourceInterface::Environment::IsPreview);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<bool>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      bVar14 = FMetasoundEnvironment::GetValue<bool>
                         (param_1->Environment,&Frontend::SourceInterface::Environment::IsPreview);
      goto LAB_14b3d6d83;
    }
  }
  bVar14 = false;
LAB_14b3d6d83:
  this->bIsPreviewSound = bVar14;
  puVar12 = *(undefined8 **)&(this->OutValue).field_0x8;
  local_88 = 0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar12 != &local_88) {
    *puVar12 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar12 + 1),&FStack_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_80.ReferenceController);
  **(undefined4 **)&(this->OutIndex).field_0x8 = 0xffffffff;
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  pTVar9 = &param_1->Environment->Variables;
  FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
  pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar9,local_res10);
  if (pTVar16 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar16 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar9,local_res10);
    if ((pTVar16 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x148,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pIVar10 = pTVar16->Ptr;
    pvVar17 = TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::GetTypeId();
    pvVar18 = (void *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    if (pvVar17 == pvVar18) {
      this_00 = param_1->Environment;
      FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
      FMetasoundEnvironment::GetValue<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                (this_00,&local_98,local_res18);
      EVar2 = (this->SharedStateBehavior).EnumValue;
      if (EVar2 == SameNode) {
        if ((local_98.ArrayNum < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("GraphHierarchy.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayRandomNode.h"
                                ,0x155,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar23 = 0;
        if ((int)(local_98.ArrayNum - 1U) < local_98.ArrayNum) {
          uVar23 = ~(local_98.ArrayNum - 1U) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar23 = (this->NodeId).B;
        uVar3 = (this->NodeId).C;
        uVar4 = (this->NodeId).D;
        uVar5 = (this->NodeId).A;
        iVar6 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -0xc
                        );
        iVar7 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -8);
        iVar8 = *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -4);
        (this->SharedStateId).A =
             uVar5 * 0x40 + -0x61c88647 + (uVar5 >> 2) +
             *(int *)(local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10 + -0x10)
             ^ uVar5;
        (this->SharedStateId).B = iVar6 + uVar23 * 0x40 + (uVar23 >> 2) + 0x9e3779b9 ^ uVar23;
        (this->SharedStateId).C = iVar7 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
        (this->SharedStateId).D = iVar8 + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
      }
      else if (EVar2 == SameNodeInComposition) {
        pFVar21 = GetSameNodeInCompositionId(this,&local_48,&this->NodeId,&local_98);
        uVar23 = pFVar21->B;
        uVar3 = pFVar21->C;
        uVar4 = pFVar21->D;
        (this->SharedStateId).A = pFVar21->A;
        (this->SharedStateId).B = uVar23;
        (this->SharedStateId).C = uVar3;
        (this->SharedStateId).D = uVar4;
      }
      if (local_98.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_98.AllocatorInstance.Data);
      return;
    }
  }
  if (this->bHasLoggedMissingGraphHierarchyWarning == false) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                  ::__l36::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bHasLoggedMissingGraphHierarchyWarning = true;
  }
  return;
}

