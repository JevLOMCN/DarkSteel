// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 72

// BindInputs @ 14aeb2790

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this
          ,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  local_res18 = &this->TriggerShuffle;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bAutoShuffle;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14aeb2a40

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TriggerOnShuffle;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputShuffledValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FSendAddress>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14aeb2bf0

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetInputs(TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
         FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x101,L"");
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

// GetOutputs @ 14aeb2c70

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetOutputs(TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this
          ,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x109,L"");
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

// BindInputs @ 14aeb9120

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  local_res18 = &this->TriggerShuffle;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bAutoShuffle;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14aeb9460

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TriggerOnShuffle;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputShuffledValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14aeb9630

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetInputs
          (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x101,L"");
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

// GetOutputs @ 14aeb9790

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetOutputs
          (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x109,L"");
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

// BindInputs @ 14aec0ec0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  local_res18 = &this->TriggerShuffle;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bAutoShuffle;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14aec11b0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TriggerOnShuffle;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputShuffledValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FString>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14aec1360

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetInputs
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x101,L"");
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

// GetOutputs @ 14aec14a0

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetOutputs
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x109,L"");
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

// BindInputs @ 14aeca390

void __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  local_res18 = &this->TriggerShuffle;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bAutoShuffle;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14aeca640

void __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TriggerOnShuffle;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputShuffledValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14aeca850

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetInputs
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x101,L"");
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

// GetOutputs @ 14aeca8d0

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetOutputs
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x109,L"");
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

// BindInputs @ 14aed1140

void __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  local_res18 = &this->TriggerShuffle;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bAutoShuffle;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14aed13f0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TriggerOnShuffle;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputShuffledValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutValue;
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

// GetInputs @ 14aed1630

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetInputs
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x101,L"");
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

// GetOutputs @ 14aed16b0

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetOutputs
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x109,L"");
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

// BindInputs @ 14aed98e0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  local_res18 = &this->TriggerShuffle;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InputArray;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bAutoShuffle;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bEnableSharedState;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14aed9b90

void __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName);
  local_res18 = &this->TriggerNext;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TriggerOnShuffle;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName);
  local_res18 = &this->TriggerReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::OutputShuffledValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutValue;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetInputs @ 14aed9d40

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetInputs
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x101,L"");
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

// GetOutputs @ 14aed9dc0

FDataReferenceCollection * __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetOutputs
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                     ,0x109,L"");
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

// ~TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af3ea00

void __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  FArrayIndexShuffler *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ArrayIndexShuffler).Ptr;
  if (pFVar1 != (FArrayIndexShuffler *)0x0) {
    pFVar2 = (pFVar1->ShuffleIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af3eab0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  FArrayIndexShuffler *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ArrayIndexShuffler).Ptr;
  if (pFVar1 != (FArrayIndexShuffler *)0x0) {
    pFVar2 = (pFVar1->ShuffleIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af3eb60

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this
          )

{
  FArrayIndexShuffler *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ArrayIndexShuffler).Ptr;
  if (pFVar1 != (FArrayIndexShuffler *)0x0) {
    pFVar2 = (pFVar1->ShuffleIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af3ec10

void __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  FArrayIndexShuffler *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ArrayIndexShuffler).Ptr;
  if (pFVar1 != (FArrayIndexShuffler *)0x0) {
    pFVar2 = (pFVar1->ShuffleIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af3ecc0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  FArrayIndexShuffler *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ArrayIndexShuffler).Ptr;
  if (pFVar1 != (FArrayIndexShuffler *)0x0) {
    pFVar2 = (pFVar1->ShuffleIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af3ed70

void __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  FArrayIndexShuffler *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ArrayIndexShuffler).Ptr;
  if (pFVar1 != (FArrayIndexShuffler *)0x0) {
    pFVar2 = (pFVar1->ShuffleIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnableSharedState).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputArray).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerShuffle).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerNext).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14af4a790

void __thiscall
`Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute'::__l2::
<lambda_6>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSharedStateShuffleManager *lpCriticalSection;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int local_res8 [2];
  
  lVar1 = *(longlong *)this;
  puVar12 = (undefined8 *)0x0;
  plVar2 = *(longlong **)(lVar1 + 0x70);
  local_res8[0] = -1;
  if ((**(char **)(lVar1 + 0xd0) == '\0') || (*(int *)(lVar1 + 0x138) == -1)) {
    if (*(FArrayIndexShuffler **)(lVar1 + 0x128) == (FArrayIndexShuffler *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                         ,0x19f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8[0] = 0;
      bVar4 = false;
    }
    else {
      bVar4 = Metasound::FArrayIndexShuffler::NextValue
                        (*(FArrayIndexShuffler **)(lVar1 + 0x128),
                         *(bool *)*(undefined8 *)(lVar1 + 0xb0),local_res8);
    }
  }
  else {
    lpCriticalSection = Metasound::FSharedStateShuffleManager::Get();
    uVar11 = *(uint *)(lVar1 + 0x138);
    bVar4 = *(bool *)*(undefined8 *)(lVar1 + 0xb0);
    if (lpCriticalSection == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar7 = puVar12;
    if (*(int *)&(lpCriticalSection->Shufflers).field_0x8 !=
        *(int *)&(lpCriticalSection->Shufflers).field_0x34) {
      puVar10 = *(undefined1 **)&(lpCriticalSection->Shufflers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(lpCriticalSection->Shufflers).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(lpCriticalSection->Shufflers).field_0x48 - 1U & uVar11)
                      * 4);
      if (iVar6 != -1) {
        do {
          puVar7 = (undefined8 *)
                   (*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18);
          if (*(uint *)(*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18) ==
              uVar11) break;
          iVar6 = *(int *)(puVar7 + 2);
          puVar7 = puVar12;
        } while (iVar6 != -1);
      }
    }
    puVar8 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = puVar12;
    }
    bVar4 = Metasound::FArrayIndexShuffler::NextValue
                      ((FArrayIndexShuffler *)*puVar8,bVar4,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  iVar6 = (int)plVar2[1];
  uVar9 = local_res8[0] % iVar6;
  uVar11 = 0;
  if ((int)uVar9 < iVar6) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  **(undefined4 **)(*(longlong *)this + 0x110) = *(undefined4 *)(*plVar2 + (longlong)(int)uVar9 * 4)
  ;
  if (bVar4 != false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0xf0),param_1);
  }
  return;
}

// operator() @ 14af4a960

void __thiscall
`Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute'::__l2::
<lambda_6>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSharedStateShuffleManager *lpCriticalSection;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int local_res8 [2];
  
  lVar1 = *(longlong *)this;
  puVar12 = (undefined8 *)0x0;
  plVar2 = *(longlong **)(lVar1 + 0x70);
  local_res8[0] = -1;
  if ((**(char **)(lVar1 + 0xd0) == '\0') || (*(int *)(lVar1 + 0x138) == -1)) {
    if (*(FArrayIndexShuffler **)(lVar1 + 0x128) == (FArrayIndexShuffler *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                         ,0x19f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8[0] = 0;
      bVar4 = false;
    }
    else {
      bVar4 = Metasound::FArrayIndexShuffler::NextValue
                        (*(FArrayIndexShuffler **)(lVar1 + 0x128),
                         *(bool *)*(undefined8 *)(lVar1 + 0xb0),local_res8);
    }
  }
  else {
    lpCriticalSection = Metasound::FSharedStateShuffleManager::Get();
    uVar11 = *(uint *)(lVar1 + 0x138);
    bVar4 = *(bool *)*(undefined8 *)(lVar1 + 0xb0);
    if (lpCriticalSection == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar7 = puVar12;
    if (*(int *)&(lpCriticalSection->Shufflers).field_0x8 !=
        *(int *)&(lpCriticalSection->Shufflers).field_0x34) {
      puVar10 = *(undefined1 **)&(lpCriticalSection->Shufflers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(lpCriticalSection->Shufflers).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(lpCriticalSection->Shufflers).field_0x48 - 1U & uVar11)
                      * 4);
      if (iVar6 != -1) {
        do {
          puVar7 = (undefined8 *)
                   (*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18);
          if (*(uint *)(*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18) ==
              uVar11) break;
          iVar6 = *(int *)(puVar7 + 2);
          puVar7 = puVar12;
        } while (iVar6 != -1);
      }
    }
    puVar8 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = puVar12;
    }
    bVar4 = Metasound::FArrayIndexShuffler::NextValue
                      ((FArrayIndexShuffler *)*puVar8,bVar4,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  iVar6 = (int)plVar2[1];
  uVar9 = local_res8[0] % iVar6;
  uVar11 = 0;
  if ((int)uVar9 < iVar6) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)this;
  **(undefined4 **)(lVar1 + 0x110) = *(undefined4 *)(*plVar2 + (longlong)(int)uVar9 * 4);
  if (bVar4 != false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(lVar1 + 0xf0),param_1);
  }
  return;
}

// operator() @ 14af4ab30

void __thiscall
`Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
Execute'::__l2::<lambda_6>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSharedStateShuffleManager *lpCriticalSection;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  int local_res8 [2];
  
  lVar1 = *(longlong *)this;
  puVar13 = (undefined8 *)0x0;
  plVar2 = *(longlong **)(lVar1 + 0x70);
  local_res8[0] = -1;
  if ((**(char **)(lVar1 + 0xd0) == '\0') || (*(int *)(lVar1 + 0x138) == -1)) {
    if (*(FArrayIndexShuffler **)(lVar1 + 0x128) == (FArrayIndexShuffler *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                         ,0x19f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8[0] = 0;
      bVar4 = false;
    }
    else {
      bVar4 = Metasound::FArrayIndexShuffler::NextValue
                        (*(FArrayIndexShuffler **)(lVar1 + 0x128),
                         *(bool *)*(undefined8 *)(lVar1 + 0xb0),local_res8);
    }
  }
  else {
    lpCriticalSection = Metasound::FSharedStateShuffleManager::Get();
    uVar12 = *(uint *)(lVar1 + 0x138);
    bVar4 = *(bool *)*(undefined8 *)(lVar1 + 0xb0);
    if (lpCriticalSection == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar7 = puVar13;
    if (*(int *)&(lpCriticalSection->Shufflers).field_0x8 !=
        *(int *)&(lpCriticalSection->Shufflers).field_0x34) {
      puVar10 = *(undefined1 **)&(lpCriticalSection->Shufflers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(lpCriticalSection->Shufflers).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(lpCriticalSection->Shufflers).field_0x48 - 1U & uVar12)
                      * 4);
      if (iVar6 != -1) {
        do {
          puVar7 = (undefined8 *)
                   (*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18);
          if (*(uint *)(*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18) ==
              uVar12) break;
          iVar6 = *(int *)(puVar7 + 2);
          puVar7 = puVar13;
        } while (iVar6 != -1);
      }
    }
    puVar8 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = puVar13;
    }
    bVar4 = Metasound::FArrayIndexShuffler::NextValue
                      ((FArrayIndexShuffler *)*puVar8,bVar4,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  iVar6 = (int)plVar2[1];
  uVar9 = local_res8[0] % iVar6;
  uVar12 = 0;
  if ((int)uVar9 < iVar6) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar11 = (longlong)(int)uVar9 * 0x20 + *plVar2;
  lVar1 = *(longlong *)(*(longlong *)this + 0x110);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar11 + 8);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
  if (bVar4 != false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0xf0),param_1);
  }
  return;
}

// operator() @ 14af4ad20

void __thiscall
`Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute'::__l2::
<lambda_6>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSharedStateShuffleManager *lpCriticalSection;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int local_res8 [2];
  
  lVar1 = *(longlong *)this;
  puVar12 = (undefined8 *)0x0;
  plVar2 = *(longlong **)(lVar1 + 0x70);
  local_res8[0] = -1;
  if ((**(char **)(lVar1 + 0xd0) == '\0') || (*(int *)(lVar1 + 0x138) == -1)) {
    if (*(FArrayIndexShuffler **)(lVar1 + 0x128) == (FArrayIndexShuffler *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                         ,0x19f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8[0] = 0;
      bVar4 = false;
    }
    else {
      bVar4 = Metasound::FArrayIndexShuffler::NextValue
                        (*(FArrayIndexShuffler **)(lVar1 + 0x128),
                         *(bool *)*(undefined8 *)(lVar1 + 0xb0),local_res8);
    }
  }
  else {
    lpCriticalSection = Metasound::FSharedStateShuffleManager::Get();
    uVar11 = *(uint *)(lVar1 + 0x138);
    bVar4 = *(bool *)*(undefined8 *)(lVar1 + 0xb0);
    if (lpCriticalSection == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar7 = puVar12;
    if (*(int *)&(lpCriticalSection->Shufflers).field_0x8 !=
        *(int *)&(lpCriticalSection->Shufflers).field_0x34) {
      puVar10 = *(undefined1 **)&(lpCriticalSection->Shufflers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(lpCriticalSection->Shufflers).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(lpCriticalSection->Shufflers).field_0x48 - 1U & uVar11)
                      * 4);
      if (iVar6 != -1) {
        do {
          puVar7 = (undefined8 *)
                   (*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18);
          if (*(uint *)(*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18) ==
              uVar11) break;
          iVar6 = *(int *)(puVar7 + 2);
          puVar7 = puVar12;
        } while (iVar6 != -1);
      }
    }
    puVar8 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = puVar12;
    }
    bVar4 = Metasound::FArrayIndexShuffler::NextValue
                      ((FArrayIndexShuffler *)*puVar8,bVar4,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  iVar6 = (int)plVar2[1];
  uVar9 = local_res8[0] % iVar6;
  uVar11 = 0;
  if ((int)uVar9 < iVar6) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::operator=
            (*(FString **)(*(longlong *)this + 0x110),
             (FString *)((longlong)(int)uVar9 * 0x10 + *plVar2));
  if (bVar4 != false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0xf0),param_1);
  }
  return;
}

// operator() @ 14af4af00

void __thiscall
`Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute'::
__l2::<lambda_6>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSharedStateShuffleManager *lpCriticalSection;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int local_res8 [2];
  
  lVar1 = *(longlong *)this;
  puVar12 = (undefined8 *)0x0;
  plVar2 = *(longlong **)(lVar1 + 0x70);
  local_res8[0] = -1;
  if ((**(char **)(lVar1 + 0xd0) == '\0') || (*(int *)(lVar1 + 0x138) == -1)) {
    if (*(FArrayIndexShuffler **)(lVar1 + 0x128) == (FArrayIndexShuffler *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                         ,0x19f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8[0] = 0;
      bVar4 = false;
    }
    else {
      bVar4 = Metasound::FArrayIndexShuffler::NextValue
                        (*(FArrayIndexShuffler **)(lVar1 + 0x128),
                         *(bool *)*(undefined8 *)(lVar1 + 0xb0),local_res8);
    }
  }
  else {
    lpCriticalSection = Metasound::FSharedStateShuffleManager::Get();
    uVar11 = *(uint *)(lVar1 + 0x138);
    bVar4 = *(bool *)*(undefined8 *)(lVar1 + 0xb0);
    if (lpCriticalSection == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar7 = puVar12;
    if (*(int *)&(lpCriticalSection->Shufflers).field_0x8 !=
        *(int *)&(lpCriticalSection->Shufflers).field_0x34) {
      puVar10 = *(undefined1 **)&(lpCriticalSection->Shufflers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(lpCriticalSection->Shufflers).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(lpCriticalSection->Shufflers).field_0x48 - 1U & uVar11)
                      * 4);
      if (iVar6 != -1) {
        do {
          puVar7 = (undefined8 *)
                   (*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18);
          if (*(uint *)(*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18) ==
              uVar11) break;
          iVar6 = *(int *)(puVar7 + 2);
          puVar7 = puVar12;
        } while (iVar6 != -1);
      }
    }
    puVar8 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = puVar12;
    }
    bVar4 = Metasound::FArrayIndexShuffler::NextValue
                      ((FArrayIndexShuffler *)*puVar8,bVar4,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  iVar6 = (int)plVar2[1];
  uVar9 = local_res8[0] % iVar6;
  uVar11 = 0;
  if ((int)uVar9 < iVar6) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)this;
  **(undefined8 **)(lVar1 + 0x110) = *(undefined8 *)(*plVar2 + (longlong)(int)uVar9 * 8);
  if (bVar4 != false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(lVar1 + 0xf0),param_1);
  }
  return;
}

// operator() @ 14af4b0d0

void __thiscall
`Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute'::__l2::
<lambda_6>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FSharedStateShuffleManager *lpCriticalSection;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int local_res8 [2];
  
  lVar1 = *(longlong *)this;
  puVar12 = (undefined8 *)0x0;
  plVar2 = *(longlong **)(lVar1 + 0x70);
  local_res8[0] = -1;
  if ((**(char **)(lVar1 + 0xd0) == '\0') || (*(int *)(lVar1 + 0x138) == -1)) {
    if (*(FArrayIndexShuffler **)(lVar1 + 0x128) == (FArrayIndexShuffler *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundArrayShuffleNode.h"
                         ,0x19f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8[0] = 0;
      bVar4 = false;
    }
    else {
      bVar4 = Metasound::FArrayIndexShuffler::NextValue
                        (*(FArrayIndexShuffler **)(lVar1 + 0x128),
                         *(bool *)*(undefined8 *)(lVar1 + 0xb0),local_res8);
    }
  }
  else {
    lpCriticalSection = Metasound::FSharedStateShuffleManager::Get();
    uVar11 = *(uint *)(lVar1 + 0x138);
    bVar4 = *(bool *)*(undefined8 *)(lVar1 + 0xb0);
    if (lpCriticalSection == (FSharedStateShuffleManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar7 = puVar12;
    if (*(int *)&(lpCriticalSection->Shufflers).field_0x8 !=
        *(int *)&(lpCriticalSection->Shufflers).field_0x34) {
      puVar10 = *(undefined1 **)&(lpCriticalSection->Shufflers).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(lpCriticalSection->Shufflers).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(lpCriticalSection->Shufflers).field_0x48 - 1U & uVar11)
                      * 4);
      if (iVar6 != -1) {
        do {
          puVar7 = (undefined8 *)
                   (*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18);
          if (*(uint *)(*(longlong *)&lpCriticalSection->Shufflers + (longlong)iVar6 * 0x18) ==
              uVar11) break;
          iVar6 = *(int *)(puVar7 + 2);
          puVar7 = puVar12;
        } while (iVar6 != -1);
      }
    }
    puVar8 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar8 = puVar12;
    }
    bVar4 = Metasound::FArrayIndexShuffler::NextValue
                      ((FArrayIndexShuffler *)*puVar8,bVar4,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  iVar6 = (int)plVar2[1];
  uVar9 = local_res8[0] % iVar6;
  uVar11 = 0;
  if ((int)uVar9 < iVar6) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  **(undefined1 **)(*(longlong *)this + 0x110) = *(undefined1 *)((longlong)(int)uVar9 + *plVar2);
  if (bVar4 != false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0xf0),param_1);
  }
  return;
}

// CreateOperator @ 14af6a4c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this_00;
  FName local_res20;
  undefined1 local_118 [16];
  FGraphRenderCost *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_118,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_b8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_98,
             &local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_58,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res20,pFVar1);
  this_00 = ::operator_new(0x140);
  pFVar2 = local_108;
  if (this_00 == (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    this_00 = (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    this_00->_padding_ =
         (longlong)
         &___7__TArrayShuffleOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerNext).field_0x8 = local_118._8_8_;
    *(FGraphRenderCost **)&(this_00->TriggerNext).field_0x10 = local_108;
    if (local_108 != (FGraphRenderCost *)0x0) {
      *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
    }
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->InputArray =
         &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this_00->InputArray).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->InputArray).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->InputArray =
         &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->SeedValue = &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)&(this_00->SeedValue).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->SeedValue).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReadReference__N_Metasound__6B_;
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x8 = local_f8._8_8_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x10 = local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)&this_00->TriggerOnShuffle,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->TriggerOnShuffle =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this_00->OutValue,NewObject);
    *(undefined ***)&this_00->OutValue = &___7__TDataWriteReference_H_Metasound__6B_;
    (this_00->ArrayIndexShuffler).Ptr = (FArrayIndexShuffler *)0x0;
    this_00->PrevSeedValue = -1;
    this_00->PrevArraySize = 0;
    this_00->SharedStateUniqueId = 0xffffffff;
    local_118._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_118._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_108 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_118);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af6a870

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this_00;
  FName local_res20;
  undefined1 local_118 [16];
  FGraphRenderCost *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_118,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_b8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_98,
             &local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_58,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res20,pFVar1);
  this_00 = ::operator_new(0x140);
  pFVar2 = local_108;
  if (this_00 == (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    this_00 = (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    this_00->_padding_ =
         (longlong)
         &___7__TArrayShuffleOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerNext).field_0x8 = local_118._8_8_;
    *(FGraphRenderCost **)&(this_00->TriggerNext).field_0x10 = local_108;
    if (local_108 != (FGraphRenderCost *)0x0) {
      *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
    }
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->InputArray =
         &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this_00->InputArray).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->InputArray).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->InputArray =
         &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->SeedValue = &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)&(this_00->SeedValue).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->SeedValue).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReadReference__N_Metasound__6B_;
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x8 = local_f8._8_8_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x10 = local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)&this_00->TriggerOnShuffle,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->TriggerOnShuffle =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)&this_00->OutValue,NewObject);
    *(undefined ***)&this_00->OutValue = &___7__TDataWriteReference_M_Metasound__6B_;
    (this_00->ArrayIndexShuffler).Ptr = (FArrayIndexShuffler *)0x0;
    this_00->PrevSeedValue = -1;
    this_00->PrevArraySize = 0;
    this_00->SharedStateUniqueId = 0xffffffff;
    local_118._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_118._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_108 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_118);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af6ac20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this_00;
  FName local_res20;
  undefined1 local_118 [16];
  FGraphRenderCost *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_118,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_b8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *)local_98,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_58,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res20,pFVar1);
  this_00 = ::operator_new(0x140);
  pFVar2 = local_108;
  if (this_00 ==
      (TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    this_00 = (TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *
              )0x0;
  }
  else {
    this_00->_padding_ =
         (longlong)
         &
         ___7__TArrayShuffleOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerNext).field_0x8 = local_118._8_8_;
    *(FGraphRenderCost **)&(this_00->TriggerNext).field_0x10 = local_108;
    if (local_108 != (FGraphRenderCost *)0x0) {
      *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
    }
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->InputArray =
         &
         ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this_00->InputArray).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->InputArray).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->InputArray =
         &
         ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined ***)&this_00->SeedValue = &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)&(this_00->SeedValue).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->SeedValue).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReadReference__N_Metasound__6B_;
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x8 = local_f8._8_8_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x10 = local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)&this_00->TriggerOnShuffle,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->TriggerOnShuffle =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FSendAddress>::TDataReference<Metasound::FSendAddress><>
              ((TDataReference<Metasound::FSendAddress> *)&this_00->OutValue,NewObject);
    *(undefined ***)&this_00->OutValue =
         &___7__TDataWriteReference_VFSendAddress_Metasound___Metasound__6B_;
    (this_00->ArrayIndexShuffler).Ptr = (FArrayIndexShuffler *)0x0;
    this_00->PrevSeedValue = -1;
    this_00->PrevArraySize = 0;
    this_00->SharedStateUniqueId = 0xffffffff;
    local_118._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_118._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_108 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_118);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af6afd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this_00;
  FName local_res20;
  undefined1 local_118 [16];
  FGraphRenderCost *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_118,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_b8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_98,
             &local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_58,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res20,pFVar1);
  this_00 = ::operator_new(0x140);
  pFVar2 = local_108;
  if (this_00 == (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    this_00 = (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    this_00->_padding_ =
         (longlong)
         &
         ___7__TArrayShuffleOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerNext).field_0x8 = local_118._8_8_;
    *(FGraphRenderCost **)&(this_00->TriggerNext).field_0x10 = local_108;
    if (local_108 != (FGraphRenderCost *)0x0) {
      *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
    }
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->InputArray =
         &
         ___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this_00->InputArray).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->InputArray).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->InputArray =
         &
         ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined ***)&this_00->SeedValue = &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)&(this_00->SeedValue).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->SeedValue).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReadReference__N_Metasound__6B_;
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x8 = local_f8._8_8_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x10 = local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)&this_00->TriggerOnShuffle,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->TriggerOnShuffle =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<FString>::TDataReference<FString><>
              ((TDataReference<FString> *)&this_00->OutValue,NewObject);
    *(undefined ***)&this_00->OutValue = &___7__TDataWriteReference_VFString___Metasound__6B_;
    (this_00->ArrayIndexShuffler).Ptr = (FArrayIndexShuffler *)0x0;
    this_00->PrevSeedValue = -1;
    this_00->PrevArraySize = 0;
    this_00->SharedStateUniqueId = 0xffffffff;
    local_118._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_118._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_108 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_118);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af6b380

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this_00;
  FName local_res20;
  undefined1 local_118 [16];
  FGraphRenderCost *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_118,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_b8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                  local_98,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_58,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res20,pFVar1);
  this_00 = ::operator_new(0x140);
  pFVar2 = local_108;
  if (this_00 == (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    this_00 = (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    this_00->_padding_ =
         (longlong)
         &
         ___7__TArrayShuffleOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerNext).field_0x8 = local_118._8_8_;
    *(FGraphRenderCost **)&(this_00->TriggerNext).field_0x10 = local_108;
    if (local_108 != (FGraphRenderCost *)0x0) {
      *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
    }
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->InputArray =
         &
         ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this_00->InputArray).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->InputArray).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->InputArray =
         &
         ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined ***)&this_00->SeedValue = &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)&(this_00->SeedValue).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->SeedValue).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReadReference__N_Metasound__6B_;
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x8 = local_f8._8_8_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x10 = local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)&this_00->TriggerOnShuffle,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->TriggerOnShuffle =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)&this_00->OutValue,NewObject);
    *(undefined ***)&this_00->OutValue =
         &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    (this_00->ArrayIndexShuffler).Ptr = (FArrayIndexShuffler *)0x0;
    this_00->PrevSeedValue = -1;
    this_00->PrevArraySize = 0;
    this_00->SharedStateUniqueId = 0xffffffff;
    local_118._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_118._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_108 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_118);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af6b730

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this_00;
  FName local_res20;
  undefined1 local_118 [16];
  FGraphRenderCost *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerNextName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_118,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputTriggerResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_b8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_98,
             &local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputAutoShuffleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_58,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res20,pFVar1);
  this_00 = ::operator_new(0x140);
  pFVar2 = local_108;
  if (this_00 == (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    this_00 = (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    this_00->_padding_ =
         (longlong)
         &___7__TArrayShuffleOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerNext).field_0x8 = local_118._8_8_;
    *(FGraphRenderCost **)&(this_00->TriggerNext).field_0x10 = local_108;
    if (local_108 != (FGraphRenderCost *)0x0) {
      *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
    }
    *(undefined ***)&this_00->TriggerNext =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->TriggerShuffle).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerShuffle =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->TriggerReset).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->TriggerReset =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->InputArray =
         &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this_00->InputArray).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->InputArray).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->InputArray =
         &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->SeedValue = &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)&(this_00->SeedValue).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->SeedValue).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->bAutoShuffle).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bAutoShuffle = &___7__TDataReadReference__N_Metasound__6B_;
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x8 = local_f8._8_8_;
    *(undefined8 *)&(this_00->bEnableSharedState).field_0x10 = local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->bEnableSharedState = &___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)&this_00->TriggerOnShuffle,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->TriggerOnShuffle =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<bool>::TDataReference<bool><>
              ((TDataReference<bool> *)&this_00->OutValue,NewObject);
    *(undefined ***)&this_00->OutValue = &___7__TDataWriteReference__N_Metasound__6B_;
    (this_00->ArrayIndexShuffler).Ptr = (FArrayIndexShuffler *)0x0;
    this_00->PrevSeedValue = -1;
    this_00->PrevArraySize = 0;
    this_00->SharedStateUniqueId = 0xffffffff;
    local_118._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_118._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_108 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_118);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14af87df0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  int iVar2;
  FTrigger *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FSharedStateShuffleManager *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  pFVar3 = *(FTrigger **)&(this->TriggerOnShuffle).field_0x8;
  FTrigger::Advance(pFVar3,pFVar3->NumFramesPerBlock);
  iVar2 = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
  if (iVar2 != 0) {
    if (this->PrevArraySize != iVar2) {
      InitializeShufflers(this,iVar2);
    }
    iVar2 = **(int **)&(this->SeedValue).field_0x8;
    if (this->PrevSeedValue != iVar2) {
      this->PrevSeedValue = iVar2;
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::SetSeed(pFVar7,this->SharedStateUniqueId,iVar2);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::SetSeed(pFVar4,iVar2);
      }
    }
    iVar2 = *(int *)(*(longlong *)&(this->TriggerReset).field_0x8 + 0x1c);
    if (0 < iVar2) {
      uVar8 = iVar2 - 1;
      if (0 < (int)uVar8) {
        uVar9 = (ulonglong)uVar8;
        do {
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ResetSeed(pFVar4);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ResetSeed(pFVar4);
      }
    }
    plVar5 = *(longlong **)&(this->TriggerShuffle).field_0x8;
    iVar2 = *(int *)((longlong)plVar5 + 0x1c);
    if (0 < iVar2) {
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = *plVar5;
      if (0 < lVar1) {
        lVar10 = 0;
        do {
          iVar2 = *(int *)(lVar6 + lVar10 * 4);
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ShuffleArray(pFVar4);
          }
          FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar1);
      }
      iVar2 = *(int *)(lVar6 + lVar1 * 4);
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ShuffleArray(pFVar4);
      }
      FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
    }
    pFVar3 = *(FTrigger **)&(this->TriggerNext).field_0x8;
    FTrigger::
    ExecuteFrames<_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_5>,_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_6>_>
              (pFVar3,pFVar3->NumFramesPerBlock,pFVar3->LastTriggerIndexInBlock,(<lambda_5>)0x0,
               (<lambda_6>)this);
  }
  return;
}

// Execute @ 14af87fe0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  int iVar2;
  FTrigger *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FSharedStateShuffleManager *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  pFVar3 = *(FTrigger **)&(this->TriggerOnShuffle).field_0x8;
  FTrigger::Advance(pFVar3,pFVar3->NumFramesPerBlock);
  iVar2 = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
  if (iVar2 != 0) {
    if (this->PrevArraySize != iVar2) {
      InitializeShufflers(this,iVar2);
    }
    iVar2 = **(int **)&(this->SeedValue).field_0x8;
    if (this->PrevSeedValue != iVar2) {
      this->PrevSeedValue = iVar2;
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::SetSeed(pFVar7,this->SharedStateUniqueId,iVar2);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::SetSeed(pFVar4,iVar2);
      }
    }
    iVar2 = *(int *)(*(longlong *)&(this->TriggerReset).field_0x8 + 0x1c);
    if (0 < iVar2) {
      uVar8 = iVar2 - 1;
      if (0 < (int)uVar8) {
        uVar9 = (ulonglong)uVar8;
        do {
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ResetSeed(pFVar4);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ResetSeed(pFVar4);
      }
    }
    plVar5 = *(longlong **)&(this->TriggerShuffle).field_0x8;
    iVar2 = *(int *)((longlong)plVar5 + 0x1c);
    if (0 < iVar2) {
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = *plVar5;
      if (0 < lVar1) {
        lVar10 = 0;
        do {
          iVar2 = *(int *)(lVar6 + lVar10 * 4);
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ShuffleArray(pFVar4);
          }
          FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar1);
      }
      iVar2 = *(int *)(lVar6 + lVar1 * 4);
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ShuffleArray(pFVar4);
      }
      FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
    }
    pFVar3 = *(FTrigger **)&(this->TriggerNext).field_0x8;
    FTrigger::
    ExecuteFrames<_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_5>,_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_6>_>
              (pFVar3,pFVar3->NumFramesPerBlock,pFVar3->LastTriggerIndexInBlock,(<lambda_5>)0x0,
               (<lambda_6>)this);
  }
  return;
}

// Execute @ 14af881d0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
Execute(TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  int iVar2;
  FTrigger *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FSharedStateShuffleManager *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  pFVar3 = *(FTrigger **)&(this->TriggerOnShuffle).field_0x8;
  FTrigger::Advance(pFVar3,pFVar3->NumFramesPerBlock);
  iVar2 = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
  if (iVar2 != 0) {
    if (this->PrevArraySize != iVar2) {
      InitializeShufflers(this,iVar2);
    }
    iVar2 = **(int **)&(this->SeedValue).field_0x8;
    if (this->PrevSeedValue != iVar2) {
      this->PrevSeedValue = iVar2;
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::SetSeed(pFVar7,this->SharedStateUniqueId,iVar2);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::SetSeed(pFVar4,iVar2);
      }
    }
    iVar2 = *(int *)(*(longlong *)&(this->TriggerReset).field_0x8 + 0x1c);
    if (0 < iVar2) {
      uVar8 = iVar2 - 1;
      if (0 < (int)uVar8) {
        uVar9 = (ulonglong)uVar8;
        do {
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ResetSeed(pFVar4);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ResetSeed(pFVar4);
      }
    }
    plVar5 = *(longlong **)&(this->TriggerShuffle).field_0x8;
    iVar2 = *(int *)((longlong)plVar5 + 0x1c);
    if (0 < iVar2) {
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = *plVar5;
      if (0 < lVar1) {
        lVar10 = 0;
        do {
          iVar2 = *(int *)(lVar6 + lVar10 * 4);
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ShuffleArray(pFVar4);
          }
          FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar1);
      }
      iVar2 = *(int *)(lVar6 + lVar1 * 4);
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ShuffleArray(pFVar4);
      }
      FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
    }
    pFVar3 = *(FTrigger **)&(this->TriggerNext).field_0x8;
    FTrigger::
    ExecuteFrames<_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_5>,_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_6>_>
              (pFVar3,pFVar3->NumFramesPerBlock,pFVar3->LastTriggerIndexInBlock,(<lambda_5>)0x0,
               (<lambda_6>)this);
  }
  return;
}

// Execute @ 14af883c0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  int iVar2;
  FTrigger *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FSharedStateShuffleManager *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  pFVar3 = *(FTrigger **)&(this->TriggerOnShuffle).field_0x8;
  FTrigger::Advance(pFVar3,pFVar3->NumFramesPerBlock);
  iVar2 = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
  if (iVar2 != 0) {
    if (this->PrevArraySize != iVar2) {
      InitializeShufflers(this,iVar2);
    }
    iVar2 = **(int **)&(this->SeedValue).field_0x8;
    if (this->PrevSeedValue != iVar2) {
      this->PrevSeedValue = iVar2;
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::SetSeed(pFVar7,this->SharedStateUniqueId,iVar2);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::SetSeed(pFVar4,iVar2);
      }
    }
    iVar2 = *(int *)(*(longlong *)&(this->TriggerReset).field_0x8 + 0x1c);
    if (0 < iVar2) {
      uVar8 = iVar2 - 1;
      if (0 < (int)uVar8) {
        uVar9 = (ulonglong)uVar8;
        do {
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ResetSeed(pFVar4);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ResetSeed(pFVar4);
      }
    }
    plVar5 = *(longlong **)&(this->TriggerShuffle).field_0x8;
    iVar2 = *(int *)((longlong)plVar5 + 0x1c);
    if (0 < iVar2) {
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = *plVar5;
      if (0 < lVar1) {
        lVar10 = 0;
        do {
          iVar2 = *(int *)(lVar6 + lVar10 * 4);
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ShuffleArray(pFVar4);
          }
          FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar1);
      }
      iVar2 = *(int *)(lVar6 + lVar1 * 4);
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ShuffleArray(pFVar4);
      }
      FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
    }
    pFVar3 = *(FTrigger **)&(this->TriggerNext).field_0x8;
    FTrigger::
    ExecuteFrames<_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_5>,_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_6>_>
              (pFVar3,pFVar3->NumFramesPerBlock,pFVar3->LastTriggerIndexInBlock,(<lambda_5>)0x0,
               (<lambda_6>)this);
  }
  return;
}

// Execute @ 14af885b0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute
          (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  int iVar2;
  FTrigger *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FSharedStateShuffleManager *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  pFVar3 = *(FTrigger **)&(this->TriggerOnShuffle).field_0x8;
  FTrigger::Advance(pFVar3,pFVar3->NumFramesPerBlock);
  iVar2 = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
  if (iVar2 != 0) {
    if (this->PrevArraySize != iVar2) {
      InitializeShufflers(this,iVar2);
    }
    iVar2 = **(int **)&(this->SeedValue).field_0x8;
    if (this->PrevSeedValue != iVar2) {
      this->PrevSeedValue = iVar2;
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::SetSeed(pFVar7,this->SharedStateUniqueId,iVar2);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::SetSeed(pFVar4,iVar2);
      }
    }
    iVar2 = *(int *)(*(longlong *)&(this->TriggerReset).field_0x8 + 0x1c);
    if (0 < iVar2) {
      uVar8 = iVar2 - 1;
      if (0 < (int)uVar8) {
        uVar9 = (ulonglong)uVar8;
        do {
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ResetSeed(pFVar4);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ResetSeed(pFVar4);
      }
    }
    plVar5 = *(longlong **)&(this->TriggerShuffle).field_0x8;
    iVar2 = *(int *)((longlong)plVar5 + 0x1c);
    if (0 < iVar2) {
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = *plVar5;
      if (0 < lVar1) {
        lVar10 = 0;
        do {
          iVar2 = *(int *)(lVar6 + lVar10 * 4);
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ShuffleArray(pFVar4);
          }
          FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar1);
      }
      iVar2 = *(int *)(lVar6 + lVar1 * 4);
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ShuffleArray(pFVar4);
      }
      FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
    }
    pFVar3 = *(FTrigger **)&(this->TriggerNext).field_0x8;
    FTrigger::
    ExecuteFrames<_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_5>,_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_6>_>
              (pFVar3,pFVar3->NumFramesPerBlock,pFVar3->LastTriggerIndexInBlock,(<lambda_5>)0x0,
               (<lambda_6>)this);
  }
  return;
}

// Execute @ 14af887a0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong lVar1;
  int iVar2;
  FTrigger *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FSharedStateShuffleManager *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  pFVar3 = *(FTrigger **)&(this->TriggerOnShuffle).field_0x8;
  FTrigger::Advance(pFVar3,pFVar3->NumFramesPerBlock);
  iVar2 = *(int *)(*(longlong *)&(this->InputArray).field_0x8 + 8);
  if (iVar2 != 0) {
    if (this->PrevArraySize != iVar2) {
      InitializeShufflers(this,iVar2);
    }
    iVar2 = **(int **)&(this->SeedValue).field_0x8;
    if (this->PrevSeedValue != iVar2) {
      this->PrevSeedValue = iVar2;
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::SetSeed(pFVar7,this->SharedStateUniqueId,iVar2);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::SetSeed(pFVar4,iVar2);
      }
    }
    iVar2 = *(int *)(*(longlong *)&(this->TriggerReset).field_0x8 + 0x1c);
    if (0 < iVar2) {
      uVar8 = iVar2 - 1;
      if (0 < (int)uVar8) {
        uVar9 = (ulonglong)uVar8;
        do {
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ResetSeed(pFVar4);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ResetSeed(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ResetSeed(pFVar4);
      }
    }
    plVar5 = *(longlong **)&(this->TriggerShuffle).field_0x8;
    iVar2 = *(int *)((longlong)plVar5 + 0x1c);
    if (0 < iVar2) {
      lVar1 = (longlong)iVar2 + -1;
      lVar6 = *plVar5;
      if (0 < lVar1) {
        lVar10 = 0;
        do {
          iVar2 = *(int *)(lVar6 + lVar10 * 4);
          if (this->SharedStateUniqueId != 0xffffffff) {
            pFVar7 = FSharedStateShuffleManager::Get();
            FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
          }
          pFVar4 = (this->ArrayIndexShuffler).Ptr;
          if (pFVar4 != (FArrayIndexShuffler *)0x0) {
            FArrayIndexShuffler::ShuffleArray(pFVar4);
          }
          FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar1);
      }
      iVar2 = *(int *)(lVar6 + lVar1 * 4);
      if (this->SharedStateUniqueId != 0xffffffff) {
        pFVar7 = FSharedStateShuffleManager::Get();
        FSharedStateShuffleManager::ShuffleArray(pFVar7,this->SharedStateUniqueId);
      }
      pFVar4 = (this->ArrayIndexShuffler).Ptr;
      if (pFVar4 != (FArrayIndexShuffler *)0x0) {
        FArrayIndexShuffler::ShuffleArray(pFVar4);
      }
      FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnShuffle).field_0x8,iVar2);
    }
    pFVar3 = *(FTrigger **)&(this->TriggerNext).field_0x8;
    FTrigger::
    ExecuteFrames<_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_5>,_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Execute_::__l2::<lambda_6>_>
              (pFVar3,pFVar3->NumFramesPerBlock,pFVar3->LastTriggerIndexInBlock,(<lambda_5>)0x0,
               (<lambda_6>)this);
  }
  return;
}

// GetDefaultInterface @ 14af97960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface
          (void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_308 [32];
  bool local_2d8;
  bool local_2d7 [3];
  int local_2d4;
  FInputVertexInterface local_2d0;
  FOutputVertexInterface local_2b0;
  FInputVertexInterfaceDeclarationBuilder local_290;
  FOutputVertexInterfaceDeclarationBuilder local_268;
  TOutputDataVertex<int> local_240;
  TOutputDataVertex<Metasound::FTrigger> local_220;
  TOutputDataVertex<Metasound::FTrigger> local_200;
  TOutputDataVertex<Metasound::FTrigger> local_1e0;
  TInputDataVertex<Metasound::FTrigger> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_> local_118;
  TInputDataVertex<int> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_240,&ArrayNodeShuffleVertexNames::OutputShuffledValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_220,&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_200,&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e0,&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_268,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b0,
               &local_2b0.SubInterfaces);
    if ((local_268.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_268.Vertices)->AllocatorInstance,(local_268.Vertices)->ArrayNum,
                 &(local_268.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_268);
    local_2d8 = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d8);
    local_2d7[0] = true;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&ArrayNodeShuffleVertexNames::InputAutoShuffleName,
                        &FDataVertexMetadata::EmptyBasic,local_2d7);
    local_2d4 = -1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_e0,&ArrayNodeShuffleVertexNames::InputShuffleSeedName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d4);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<int,TSizedDefaultAllocator<32>_>_><>
                        (&local_118,&ArrayNodeShuffleVertexNames::InputShuffleArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_150,&ArrayNodeShuffleVertexNames::InputTriggerResetName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,&ArrayNodeShuffleVertexNames::InputTriggerShuffleName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1c0,&ArrayNodeShuffleVertexNames::InputTriggerNextName,
                         &FDataVertexMetadata::EmptyBasic);
    local_2d0._padding_ = 0;
    local_2d0._padding_ = 0;
    local_2d0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.SubInterfaces.ArrayNum = 0;
    local_2d0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_290,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2d0,
               &local_2d0.SubInterfaces);
    if ((local_290.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_290.Vertices)->AllocatorInstance,(local_290.Vertices)->ArrayNum,
                 &(local_290.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_290);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_2d0,&local_2b0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data,
               local_2d0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2d0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_2d0._padding_,(int)local_2d0._padding_);
    if ((FInputDataVertex *)local_2d0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_2d0._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data,
               local_2b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._padding_);
    }
    atexit(`Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14af97f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface
          (void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_308 [32];
  bool local_2d8;
  bool local_2d7 [3];
  int local_2d4;
  FInputVertexInterface local_2d0;
  FOutputVertexInterface local_2b0;
  FInputVertexInterfaceDeclarationBuilder local_290;
  FOutputVertexInterfaceDeclarationBuilder local_268;
  TOutputDataVertex<float> local_240;
  TOutputDataVertex<Metasound::FTrigger> local_220;
  TOutputDataVertex<Metasound::FTrigger> local_200;
  TOutputDataVertex<Metasound::FTrigger> local_1e0;
  TInputDataVertex<Metasound::FTrigger> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_118;
  TInputDataVertex<int> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_240,&ArrayNodeShuffleVertexNames::OutputShuffledValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_220,&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_200,&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e0,&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_268,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b0,
               &local_2b0.SubInterfaces);
    if ((local_268.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_268.Vertices)->AllocatorInstance,(local_268.Vertices)->ArrayNum,
                 &(local_268.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_268);
    local_2d8 = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d8);
    local_2d7[0] = true;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&ArrayNodeShuffleVertexNames::InputAutoShuffleName,
                        &FDataVertexMetadata::EmptyBasic,local_2d7);
    local_2d4 = -1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_e0,&ArrayNodeShuffleVertexNames::InputShuffleSeedName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d4);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                        (&local_118,&ArrayNodeShuffleVertexNames::InputShuffleArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_150,&ArrayNodeShuffleVertexNames::InputTriggerResetName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,&ArrayNodeShuffleVertexNames::InputTriggerShuffleName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1c0,&ArrayNodeShuffleVertexNames::InputTriggerNextName,
                         &FDataVertexMetadata::EmptyBasic);
    local_2d0._padding_ = 0;
    local_2d0._padding_ = 0;
    local_2d0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.SubInterfaces.ArrayNum = 0;
    local_2d0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_290,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2d0,
               &local_2d0.SubInterfaces);
    if ((local_290.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_290.Vertices)->AllocatorInstance,(local_290.Vertices)->ArrayNum,
                 &(local_290.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_290);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_2d0,&local_2b0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data,
               local_2d0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2d0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_2d0._padding_,(int)local_2d0._padding_);
    if ((FInputDataVertex *)local_2d0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_2d0._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data,
               local_2b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._padding_);
    }
    atexit(`Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14af98520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FSendAddress> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_308 [32];
  bool local_2d8;
  bool local_2d7 [3];
  int local_2d4;
  FInputVertexInterface local_2d0;
  FOutputVertexInterface local_2b0;
  FInputVertexInterfaceDeclarationBuilder local_290;
  FOutputVertexInterfaceDeclarationBuilder local_268;
  TOutputDataVertex<Metasound::FSendAddress> local_240;
  TOutputDataVertex<Metasound::FTrigger> local_220;
  TOutputDataVertex<Metasound::FTrigger> local_200;
  TOutputDataVertex<Metasound::FTrigger> local_1e0;
  TInputDataVertex<Metasound::FTrigger> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> local_118;
  TInputDataVertex<int> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FSendAddress>::
             TOutputDataVertex<Metasound::FSendAddress><>
                       (&local_240,&ArrayNodeShuffleVertexNames::OutputShuffledValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_220,&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_200,&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e0,&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_268,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b0,
               &local_2b0.SubInterfaces);
    if ((local_268.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_268.Vertices)->AllocatorInstance,(local_268.Vertices)->ArrayNum,
                 &(local_268.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_268);
    local_2d8 = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d8);
    local_2d7[0] = true;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&ArrayNodeShuffleVertexNames::InputAutoShuffleName,
                        &FDataVertexMetadata::EmptyBasic,local_2d7);
    local_2d4 = -1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_e0,&ArrayNodeShuffleVertexNames::InputShuffleSeedName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d4);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
                        (&local_118,&ArrayNodeShuffleVertexNames::InputShuffleArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_150,&ArrayNodeShuffleVertexNames::InputTriggerResetName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,&ArrayNodeShuffleVertexNames::InputTriggerShuffleName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1c0,&ArrayNodeShuffleVertexNames::InputTriggerNextName,
                         &FDataVertexMetadata::EmptyBasic);
    local_2d0._padding_ = 0;
    local_2d0._padding_ = 0;
    local_2d0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.SubInterfaces.ArrayNum = 0;
    local_2d0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_290,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2d0,
               &local_2d0.SubInterfaces);
    if ((local_290.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_290.Vertices)->AllocatorInstance,(local_290.Vertices)->ArrayNum,
                 &(local_290.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_290);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_2d0,&local_2b0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data,
               local_2d0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2d0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_2d0._padding_,(int)local_2d0._padding_);
    if ((FInputDataVertex *)local_2d0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_2d0._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data,
               local_2b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._padding_);
    }
    atexit(`Metasound::
           TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14af98b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface
          (void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<FString> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_308 [32];
  bool local_2d8;
  bool local_2d7 [3];
  int local_2d4;
  FInputVertexInterface local_2d0;
  FOutputVertexInterface local_2b0;
  FInputVertexInterfaceDeclarationBuilder local_290;
  FOutputVertexInterfaceDeclarationBuilder local_268;
  TOutputDataVertex<FString> local_240;
  TOutputDataVertex<Metasound::FTrigger> local_220;
  TOutputDataVertex<Metasound::FTrigger> local_200;
  TOutputDataVertex<Metasound::FTrigger> local_1e0;
  TInputDataVertex<Metasound::FTrigger> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_> local_118;
  TInputDataVertex<int> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<FString>::TOutputDataVertex<FString><>
                       (&local_240,&ArrayNodeShuffleVertexNames::OutputShuffledValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_220,&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_200,&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e0,&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_268,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b0,
               &local_2b0.SubInterfaces);
    if ((local_268.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_268.Vertices)->AllocatorInstance,(local_268.Vertices)->ArrayNum,
                 &(local_268.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_268);
    local_2d8 = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d8);
    local_2d7[0] = true;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&ArrayNodeShuffleVertexNames::InputAutoShuffleName,
                        &FDataVertexMetadata::EmptyBasic,local_2d7);
    local_2d4 = -1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_e0,&ArrayNodeShuffleVertexNames::InputShuffleSeedName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d4);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<FString,TSizedDefaultAllocator<32>_>_><>
                        (&local_118,&ArrayNodeShuffleVertexNames::InputShuffleArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_150,&ArrayNodeShuffleVertexNames::InputTriggerResetName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,&ArrayNodeShuffleVertexNames::InputTriggerShuffleName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1c0,&ArrayNodeShuffleVertexNames::InputTriggerNextName,
                         &FDataVertexMetadata::EmptyBasic);
    local_2d0._padding_ = 0;
    local_2d0._padding_ = 0;
    local_2d0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.SubInterfaces.ArrayNum = 0;
    local_2d0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_290,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2d0,
               &local_2d0.SubInterfaces);
    if ((local_290.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_290.Vertices)->AllocatorInstance,(local_290.Vertices)->ArrayNum,
                 &(local_290.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_290);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_2d0,&local_2b0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data,
               local_2d0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2d0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_2d0._padding_,(int)local_2d0._padding_);
    if ((FInputDataVertex *)local_2d0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_2d0._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data,
               local_2b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._padding_);
    }
    atexit(`Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14af990e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTime> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_308 [32];
  bool local_2d8;
  bool local_2d7 [3];
  int local_2d4;
  FInputVertexInterface local_2d0;
  FOutputVertexInterface local_2b0;
  FInputVertexInterfaceDeclarationBuilder local_290;
  FOutputVertexInterfaceDeclarationBuilder local_268;
  TOutputDataVertex<Metasound::FTime> local_240;
  TOutputDataVertex<Metasound::FTrigger> local_220;
  TOutputDataVertex<Metasound::FTrigger> local_200;
  TOutputDataVertex<Metasound::FTrigger> local_1e0;
  TInputDataVertex<Metasound::FTrigger> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> local_118;
  TInputDataVertex<int> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_240,&ArrayNodeShuffleVertexNames::OutputShuffledValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_220,&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_200,&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e0,&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_268,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b0,
               &local_2b0.SubInterfaces);
    if ((local_268.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_268.Vertices)->AllocatorInstance,(local_268.Vertices)->ArrayNum,
                 &(local_268.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_268);
    local_2d8 = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d8);
    local_2d7[0] = true;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&ArrayNodeShuffleVertexNames::InputAutoShuffleName,
                        &FDataVertexMetadata::EmptyBasic,local_2d7);
    local_2d4 = -1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_e0,&ArrayNodeShuffleVertexNames::InputShuffleSeedName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d4);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
                        (&local_118,&ArrayNodeShuffleVertexNames::InputShuffleArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_150,&ArrayNodeShuffleVertexNames::InputTriggerResetName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,&ArrayNodeShuffleVertexNames::InputTriggerShuffleName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1c0,&ArrayNodeShuffleVertexNames::InputTriggerNextName,
                         &FDataVertexMetadata::EmptyBasic);
    local_2d0._padding_ = 0;
    local_2d0._padding_ = 0;
    local_2d0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.SubInterfaces.ArrayNum = 0;
    local_2d0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_290,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2d0,
               &local_2d0.SubInterfaces);
    if ((local_290.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_290.Vertices)->AllocatorInstance,(local_290.Vertices)->ArrayNum,
                 &(local_290.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_290);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_2d0,&local_2b0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data,
               local_2d0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2d0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_2d0._padding_,(int)local_2d0._padding_);
    if ((FInputDataVertex *)local_2d0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_2d0._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data,
               local_2b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._padding_);
    }
    atexit(`Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           ::GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14af996c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface
          (void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<bool> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FInputDataVertex *pFVar12;
  FInputDataVertex *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_308 [32];
  bool local_2d8;
  bool local_2d7 [3];
  int local_2d4;
  FInputVertexInterface local_2d0;
  FOutputVertexInterface local_2b0;
  FInputVertexInterfaceDeclarationBuilder local_290;
  FOutputVertexInterfaceDeclarationBuilder local_268;
  TOutputDataVertex<bool> local_240;
  TOutputDataVertex<Metasound::FTrigger> local_220;
  TOutputDataVertex<Metasound::FTrigger> local_200;
  TOutputDataVertex<Metasound::FTrigger> local_1e0;
  TInputDataVertex<Metasound::FTrigger> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_> local_118;
  TInputDataVertex<int> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<bool>::TOutputDataVertex<bool><>
                       (&local_240,&ArrayNodeShuffleVertexNames::OutputShuffledValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_220,&ArrayNodeShuffleVertexNames::OutputTriggerOnResetSeedName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_200,&ArrayNodeShuffleVertexNames::OutputTriggerOnShuffleName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e0,&ArrayNodeShuffleVertexNames::OutputTriggerOnNextName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_268,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b0,
               &local_2b0.SubInterfaces);
    if ((local_268.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,4,&(local_268.Vertices)->AllocatorInstance,(local_268.Vertices)->ArrayNum,
                 &(local_268.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_268,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_268);
    local_2d8 = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&ArrayNodeShuffleVertexNames::InputShuffleEnableSharedStateName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d8);
    local_2d7[0] = true;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&ArrayNodeShuffleVertexNames::InputAutoShuffleName,
                        &FDataVertexMetadata::EmptyBasic,local_2d7);
    local_2d4 = -1;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_e0,&ArrayNodeShuffleVertexNames::InputShuffleSeedName,
                        &FDataVertexMetadata::EmptyBasic,&local_2d4);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>::
              TInputDataVertex<TArray<bool,TSizedDefaultAllocator<32>_>_><>
                        (&local_118,&ArrayNodeShuffleVertexNames::InputShuffleArrayName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_150,&ArrayNodeShuffleVertexNames::InputTriggerResetName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar12 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,&ArrayNodeShuffleVertexNames::InputTriggerShuffleName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1c0,&ArrayNodeShuffleVertexNames::InputTriggerNextName,
                         &FDataVertexMetadata::EmptyBasic);
    local_2d0._padding_ = 0;
    local_2d0._padding_ = 0;
    local_2d0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.SubInterfaces.ArrayNum = 0;
    local_2d0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_290,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2d0,
               &local_2d0.SubInterfaces);
    if ((local_290.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_290.Vertices)->AllocatorInstance,(local_290.Vertices)->ArrayNum,
                 &(local_290.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar13);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar12);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_290,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_290);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_2d0,&local_2b0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data,
               local_2d0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2d0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2d0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_2d0._padding_,(int)local_2d0._padding_);
    if ((FInputDataVertex *)local_2d0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_2d0._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data,
               local_2b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._padding_);
    }
    atexit(`Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14af9ee80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9efd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9f120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9f270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9f3c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9f510

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Shuffle");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// InitializeShufflers @ 14afaf2f0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::InitializeShufflers
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  FSharedStateShuffleManager *this_00;
  FArrayIndexShuffler *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong local_18 [2];
  
  this->PrevArraySize = param_1;
  if (0 < param_1) {
    if (this->SharedStateUniqueId != 0xffffffff) {
      this_00 = FSharedStateShuffleManager::Get();
      FSharedStateShuffleManager::InitSharedState
                (this_00,this->SharedStateUniqueId,this->PrevSeedValue,param_1);
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 == (FArrayIndexShuffler *)0x0) {
      pFVar3 = (FArrayIndexShuffler *)0x0;
    }
    else {
      pFVar3 = FArrayIndexShuffler::FArrayIndexShuffler(pFVar3,this->PrevSeedValue,param_1);
    }
    pTVar1 = &this->ArrayIndexShuffler;
    if (pTVar1 == (TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>
                   *)local_18) {
      if (pFVar3 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar3->ShuffleIndices).AllocatorInstance.Data;
      pFVar4 = pFVar3;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar4 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar4->ShuffleIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar4,0x20);
  }
  return;
}

// InitializeShufflers @ 14afaf3d0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::InitializeShufflers
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  FSharedStateShuffleManager *this_00;
  FArrayIndexShuffler *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong local_18 [2];
  
  this->PrevArraySize = param_1;
  if (0 < param_1) {
    if (this->SharedStateUniqueId != 0xffffffff) {
      this_00 = FSharedStateShuffleManager::Get();
      FSharedStateShuffleManager::InitSharedState
                (this_00,this->SharedStateUniqueId,this->PrevSeedValue,param_1);
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 == (FArrayIndexShuffler *)0x0) {
      pFVar3 = (FArrayIndexShuffler *)0x0;
    }
    else {
      pFVar3 = FArrayIndexShuffler::FArrayIndexShuffler(pFVar3,this->PrevSeedValue,param_1);
    }
    pTVar1 = &this->ArrayIndexShuffler;
    if (pTVar1 == (TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>
                   *)local_18) {
      if (pFVar3 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar3->ShuffleIndices).AllocatorInstance.Data;
      pFVar4 = pFVar3;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar4 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar4->ShuffleIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar4,0x20);
  }
  return;
}

// InitializeShufflers @ 14afaf4b0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
InitializeShufflers(TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1)

{
  TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  FSharedStateShuffleManager *this_00;
  FArrayIndexShuffler *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong local_18 [2];
  
  this->PrevArraySize = param_1;
  if (0 < param_1) {
    if (this->SharedStateUniqueId != 0xffffffff) {
      this_00 = FSharedStateShuffleManager::Get();
      FSharedStateShuffleManager::InitSharedState
                (this_00,this->SharedStateUniqueId,this->PrevSeedValue,param_1);
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 == (FArrayIndexShuffler *)0x0) {
      pFVar3 = (FArrayIndexShuffler *)0x0;
    }
    else {
      pFVar3 = FArrayIndexShuffler::FArrayIndexShuffler(pFVar3,this->PrevSeedValue,param_1);
    }
    pTVar1 = &this->ArrayIndexShuffler;
    if (pTVar1 == (TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>
                   *)local_18) {
      if (pFVar3 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar3->ShuffleIndices).AllocatorInstance.Data;
      pFVar4 = pFVar3;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar4 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar4->ShuffleIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar4,0x20);
  }
  return;
}

// InitializeShufflers @ 14afaf590

void __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::InitializeShufflers
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  FSharedStateShuffleManager *this_00;
  FArrayIndexShuffler *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong local_18 [2];
  
  this->PrevArraySize = param_1;
  if (0 < param_1) {
    if (this->SharedStateUniqueId != 0xffffffff) {
      this_00 = FSharedStateShuffleManager::Get();
      FSharedStateShuffleManager::InitSharedState
                (this_00,this->SharedStateUniqueId,this->PrevSeedValue,param_1);
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 == (FArrayIndexShuffler *)0x0) {
      pFVar3 = (FArrayIndexShuffler *)0x0;
    }
    else {
      pFVar3 = FArrayIndexShuffler::FArrayIndexShuffler(pFVar3,this->PrevSeedValue,param_1);
    }
    pTVar1 = &this->ArrayIndexShuffler;
    if (pTVar1 == (TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>
                   *)local_18) {
      if (pFVar3 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar3->ShuffleIndices).AllocatorInstance.Data;
      pFVar4 = pFVar3;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar4 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar4->ShuffleIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar4,0x20);
  }
  return;
}

// InitializeShufflers @ 14afaf670

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
InitializeShufflers(TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1)

{
  TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  FSharedStateShuffleManager *this_00;
  FArrayIndexShuffler *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong local_18 [2];
  
  this->PrevArraySize = param_1;
  if (0 < param_1) {
    if (this->SharedStateUniqueId != 0xffffffff) {
      this_00 = FSharedStateShuffleManager::Get();
      FSharedStateShuffleManager::InitSharedState
                (this_00,this->SharedStateUniqueId,this->PrevSeedValue,param_1);
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 == (FArrayIndexShuffler *)0x0) {
      pFVar3 = (FArrayIndexShuffler *)0x0;
    }
    else {
      pFVar3 = FArrayIndexShuffler::FArrayIndexShuffler(pFVar3,this->PrevSeedValue,param_1);
    }
    pTVar1 = &this->ArrayIndexShuffler;
    if (pTVar1 == (TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>
                   *)local_18) {
      if (pFVar3 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar3->ShuffleIndices).AllocatorInstance.Data;
      pFVar4 = pFVar3;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar4 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar4->ShuffleIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar4,0x20);
  }
  return;
}

// InitializeShufflers @ 14afaf750

void __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::InitializeShufflers
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_> *pTVar1
  ;
  FScriptContainerElement *pFVar2;
  FSharedStateShuffleManager *this_00;
  FArrayIndexShuffler *pFVar3;
  FArrayIndexShuffler *pFVar4;
  longlong local_18 [2];
  
  this->PrevArraySize = param_1;
  if (0 < param_1) {
    if (this->SharedStateUniqueId != 0xffffffff) {
      this_00 = FSharedStateShuffleManager::Get();
      FSharedStateShuffleManager::InitSharedState
                (this_00,this->SharedStateUniqueId,this->PrevSeedValue,param_1);
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 == (FArrayIndexShuffler *)0x0) {
      pFVar3 = (FArrayIndexShuffler *)0x0;
    }
    else {
      pFVar3 = FArrayIndexShuffler::FArrayIndexShuffler(pFVar3,this->PrevSeedValue,param_1);
    }
    pTVar1 = &this->ArrayIndexShuffler;
    if (pTVar1 == (TUniquePtr<Metasound::FArrayIndexShuffler,TDefaultDelete<Metasound::FArrayIndexShuffler>_>
                   *)local_18) {
      if (pFVar3 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar3->ShuffleIndices).AllocatorInstance.Data;
      pFVar4 = pFVar3;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    else {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar4 == (FArrayIndexShuffler *)0x0) {
        return;
      }
      pFVar2 = (pFVar4->ShuffleIndices).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    ::operator_delete(pFVar4,0x20);
  }
  return;
}

// Reset @ 14afb7b00

void __thiscall
Metasound::TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayShuffleOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  void *pvVar9;
  void *pvVar10;
  
  this->SharedStateUniqueId = 0xffffffff;
  this_00 = &param_1->Environment->Variables;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
    if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar2 = pTVar8->Ptr;
    pvVar9 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar10 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar9 == pvVar10) {
      uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                        (param_1->Environment,&Frontend::SourceInterface::Environment::SoundUniqueID
                        );
      this->SharedStateUniqueId = uVar7;
    }
  }
  lVar3 = *(longlong *)&(this->InputArray).field_0x8;
  this->PrevSeedValue = **(int **)&(this->SeedValue).field_0x8;
  InitializeShufflers(this,*(int *)(lVar3 + 8));
  pFVar4 = *(ForAnyElementType **)&(this->TriggerOnShuffle).field_0x8;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  *(undefined4 *)((longlong)&pFVar4[3].Data + 4) = 0;
  *(undefined1 *)((longlong)&pFVar4[2].Data + 2) = 0;
  **(undefined4 **)&(this->OutValue).field_0x8 = 0;
  return;
}

// Reset @ 14afb7c30

void __thiscall
Metasound::TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayShuffleOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  void *pvVar9;
  void *pvVar10;
  
  this->SharedStateUniqueId = 0xffffffff;
  this_00 = &param_1->Environment->Variables;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
    if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar2 = pTVar8->Ptr;
    pvVar9 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar10 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar9 == pvVar10) {
      uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                        (param_1->Environment,&Frontend::SourceInterface::Environment::SoundUniqueID
                        );
      this->SharedStateUniqueId = uVar7;
    }
  }
  lVar3 = *(longlong *)&(this->InputArray).field_0x8;
  this->PrevSeedValue = **(int **)&(this->SeedValue).field_0x8;
  InitializeShufflers(this,*(int *)(lVar3 + 8));
  pFVar4 = *(ForAnyElementType **)&(this->TriggerOnShuffle).field_0x8;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  *(undefined4 *)((longlong)&pFVar4[3].Data + 4) = 0;
  *(undefined1 *)((longlong)&pFVar4[2].Data + 2) = 0;
  **(undefined4 **)&(this->OutValue).field_0x8 = 0;
  return;
}

// Reset @ 14afb7d60

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
Reset(TArrayShuffleOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
     FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  void *pvVar9;
  void *pvVar10;
  
  this->SharedStateUniqueId = 0xffffffff;
  this_00 = &param_1->Environment->Variables;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
    if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar2 = pTVar8->Ptr;
    pvVar9 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar10 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar9 == pvVar10) {
      uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                        (param_1->Environment,&Frontend::SourceInterface::Environment::SoundUniqueID
                        );
      this->SharedStateUniqueId = uVar7;
    }
  }
  lVar3 = *(longlong *)&(this->InputArray).field_0x8;
  this->PrevSeedValue = **(int **)&(this->SeedValue).field_0x8;
  InitializeShufflers(this,*(int *)(lVar3 + 8));
  pFVar4 = *(ForAnyElementType **)&(this->TriggerOnShuffle).field_0x8;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  *(undefined4 *)((longlong)&pFVar4[3].Data + 4) = 0;
  *(undefined1 *)((longlong)&pFVar4[2].Data + 2) = 0;
  lVar3 = *(longlong *)&(this->OutValue).field_0x8;
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0xffffffffffffffff;
  return;
}

// Reset @ 14afb7ea0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayShuffleOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 local_18 [2];
  
  this->SharedStateUniqueId = 0xffffffff;
  this_00 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
    if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar10 == pvVar11) {
      uVar8 = FMetasoundEnvironment::GetValue<unsigned_int>
                        (param_1->Environment,&Frontend::SourceInterface::Environment::SoundUniqueID
                        );
      this->SharedStateUniqueId = uVar8;
    }
  }
  lVar3 = *(longlong *)&(this->InputArray).field_0x8;
  this->PrevSeedValue = **(int **)&(this->SeedValue).field_0x8;
  InitializeShufflers(this,*(int *)(lVar3 + 8));
  pFVar4 = *(ForAnyElementType **)&(this->TriggerOnShuffle).field_0x8;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  *(undefined4 *)((longlong)&pFVar4[3].Data + 4) = 0;
  *(undefined1 *)((longlong)&pFVar4[2].Data + 2) = 0;
  puVar5 = *(undefined8 **)&(this->OutValue).field_0x8;
  if (puVar5 != local_18) {
    if ((void *)*puVar5 != (void *)0x0) {
      FMemory::Free((void *)*puVar5);
    }
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  return;
}

// Reset @ 14afb7fe0

void __thiscall
Metasound::TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayShuffleOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  void *pvVar9;
  void *pvVar10;
  
  this->SharedStateUniqueId = 0xffffffff;
  this_00 = &param_1->Environment->Variables;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
    if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar2 = pTVar8->Ptr;
    pvVar9 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar10 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar9 == pvVar10) {
      uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                        (param_1->Environment,&Frontend::SourceInterface::Environment::SoundUniqueID
                        );
      this->SharedStateUniqueId = uVar7;
    }
  }
  lVar3 = *(longlong *)&(this->InputArray).field_0x8;
  this->PrevSeedValue = **(int **)&(this->SeedValue).field_0x8;
  InitializeShufflers(this,*(int *)(lVar3 + 8));
  pFVar4 = *(ForAnyElementType **)&(this->TriggerOnShuffle).field_0x8;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  *(undefined4 *)((longlong)&pFVar4[3].Data + 4) = 0;
  *(undefined1 *)((longlong)&pFVar4[2].Data + 2) = 0;
  **(undefined8 **)&(this->OutValue).field_0x8 = 0;
  return;
}

// Reset @ 14afb8110

void __thiscall
Metasound::TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayShuffleOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  IMetasoundEnvironmentVariable *pIVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  void *pvVar9;
  void *pvVar10;
  
  this->SharedStateUniqueId = 0xffffffff;
  this_00 = &param_1->Environment->Variables;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(this_00,Frontend::SourceInterface::Environment::SoundUniqueID);
    if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                   *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x148,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar2 = pTVar8->Ptr;
    pvVar9 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar10 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar9 == pvVar10) {
      uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                        (param_1->Environment,&Frontend::SourceInterface::Environment::SoundUniqueID
                        );
      this->SharedStateUniqueId = uVar7;
    }
  }
  lVar3 = *(longlong *)&(this->InputArray).field_0x8;
  this->PrevSeedValue = **(int **)&(this->SeedValue).field_0x8;
  InitializeShufflers(this,*(int *)(lVar3 + 8));
  pFVar4 = *(ForAnyElementType **)&(this->TriggerOnShuffle).field_0x8;
  iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  *(undefined4 *)((longlong)&pFVar4[3].Data + 4) = 0;
  *(undefined1 *)((longlong)&pFVar4[2].Data + 2) = 0;
  **(undefined1 **)&(this->OutValue).field_0x8 = 0;
  return;
}

