// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 42

// BindInputs @ 14aeb51e0

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FSendAddress>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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

// BindOutputs @ 14aeb5390

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *local_res18 [2]
  ;
  FName *local_38;
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aebbf70

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aebc180

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aec34e0

void __thiscall
Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aec3690

void __thiscall
Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aecc940

void __thiscall
Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeccaf0

void __thiscall
Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aed4820

void __thiscall
Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputTriggerSetName);
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
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitArray;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Index;
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
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->Value;
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

// BindOutputs @ 14aed49d0

void __thiscall
Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14aedbaa0

void __thiscall
Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aedbc50

void __thiscall
Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputArraySetName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af250a0

TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TArraySetOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value = &___7__TDataReadReference_H_Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af251d0

TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TArraySetOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value = &___7__TDataReadReference_M_Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af25310

TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySetOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af25450

TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySetOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value = &___7__TDataReadReference_VFString___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af25590

TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArraySetOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af256d0

TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1,FInitParams *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  this->_padding_ =
       (longlong)
       &___7__TArraySetOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
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
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->InitArray).field_0x8 = *(undefined8 *)&(param_2->InitArray).field_0x8;
  lVar1 = *(longlong *)&(param_2->InitArray).field_0x10;
  *(longlong *)&(this->InitArray).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InitArray =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&(param_2->Array).field_0x8;
  lVar1 = *(longlong *)&(param_2->Array).field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Index = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Index).field_0x8 = *(undefined8 *)&(param_2->Index).field_0x8;
  lVar1 = *(longlong *)&(param_2->Index).field_0x10;
  *(longlong *)&(this->Index).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Index = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->Value = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Value).field_0x8 = *(undefined8 *)&(param_2->Value).field_0x8;
  lVar1 = *(longlong *)&(param_2->Value).field_0x10;
  *(longlong *)&(this->Value).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Value = &___7__TDataReadReference__N_Metasound__6B_;
  ::FString::FString(&this->GraphName,&param_2->GraphName);
  return this;
}

// ~TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af3e760

void __thiscall
Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

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

// ~TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af3e7d0

void __thiscall
Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

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

// ~TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af3e840

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

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

// ~TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af3e8b0

void __thiscall
Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

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

// ~TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af3e920

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

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

// ~TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af3e990

void __thiscall
Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

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

// CreateOperator @ 14af68eb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

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
  TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<int,TSizedDefaultAllocator<32>_> *local_180;
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
  GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_e8,
             &local_1c0,pFVar1);
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<int,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_a8,
             (TArray<int,TSizedDefaultAllocator<32>_> *)local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
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
  local_180 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  local_128 = &___7__TDataReadReference_H_Metasound__6B_;
  local_108.Data = (FScriptContainerElement *)0x0;
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
  if (this_01 != (TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af69250

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

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
  TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<float,TSizedDefaultAllocator<32>_> *local_180;
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
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_e8,
             &local_1c0,pFVar1);
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_a8,
             (TArray<float,TSizedDefaultAllocator<32>_> *)local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
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
  local_180 = (TArray<float,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  local_128 = &___7__TDataReadReference_M_Metasound__6B_;
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
  if (this_01 != (TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af69600

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
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
  TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *local_180;
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
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *)local_e8,&local_1c0,pFVar1);
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
             local_a8,(TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)local_e8._8_8_)
  ;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FSendAddress>
            (this,(TDataReadReference<Metasound::FSendAddress> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0;
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
  local_180 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  local_128 = &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
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
      (TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af699b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

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
  TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_180;
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
  GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_e8,
             &local_1c0,pFVar1);
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_a8,
             (TArray<FString,TSizedDefaultAllocator<32>_> *)local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
            (this,(TDataReadReference<FString> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
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
  local_180 = (TArray<FString,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  local_128 = &___7__TDataReadReference_VFString___Metasound__6B_;
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
  if (this_01 != (TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af69d60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

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
  TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *local_180;
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
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                  local_e8,&local_1c0,pFVar1);
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)local_a8,
             (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
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
  local_180 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  local_128 = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
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
  if (this_01 != (TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
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

// CreateOperator @ 14af6a110

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

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
  TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this_01;
  TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar10;
  int iVar11;
  FScriptContainerElement *local_res20;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  undefined **local_1a8 [2];
  TReferenceControllerBase<0> *local_198;
  undefined **local_188;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_180;
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
  GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_e8,
             &local_1c0,pFVar1);
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
  CreateNew<TArray<bool,TSizedDefaultAllocator<32>_>_const_&>
            ((TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_a8,
             (TArray<bool,TSizedDefaultAllocator<32>_> *)local_e8._8_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputIndexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_1b8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_1b0,pFVar1);
  this_00 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              **)&(param_2->InternalDataReferences).field_0x8;
  pTVar10 = (TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
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
  local_180 = (TArray<bool,TSizedDefaultAllocator<32>_> *)local_e8._8_8_;
  local_178 = local_d8;
  if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
    local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
  }
  local_188 = &
              ___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  local_160 = local_a8._8_8_;
  local_158 = (TReferenceControllerBase<0> *)local_a8._16_8_;
  if ((TReferenceControllerBase<0> *)local_a8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_a8._16_8_ + 8) = *(int *)(local_a8._16_8_ + 8) + 1;
  }
  local_168 = &
              ___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
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
  local_128 = &___7__TDataReadReference__N_Metasound__6B_;
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
  if (this_01 != (TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar10 = TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
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

// GetNodeInfo @ 14af9e6a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<int>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9e7f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<float>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9e940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9ea90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<FString>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9ebe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9ed30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FName *pFVar1;
  FName local_res8;
  FName local_res10 [3];
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar1;
      ::FName::FName(local_res10,L"Set");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar1 = GetMetasoundDataTypeName<bool>();
      MetasoundArrayNodesPrivate::CreateArraySetInterface(&local_58,&local_res8,pFVar1);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,local_res10,&local_68,&local_78,&local_58,1,0,false);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14afb7a40

void __thiscall
Metasound::TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&(this->Array).field_0x8,
             *(TArray<int,TSizedDefaultAllocator<32>_> **)&(this->InitArray).field_0x8);
  return;
}

// Reset @ 14afb7a60

void __thiscall
Metasound::TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1
          )

{
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->Array).field_0x8,
             *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->InitArray).field_0x8);
  return;
}

// Reset @ 14afb7a80

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> **)
              &(this->Array).field_0x8,
             *(TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> **)
              &(this->InitArray).field_0x8);
  return;
}

// Reset @ 14afb7aa0

void __thiscall
Metasound::TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<FString,TSizedDefaultAllocator<32>_> **)&(this->Array).field_0x8,
             *(TArray<FString,TSizedDefaultAllocator<32>_> **)&(this->InitArray).field_0x8);
  return;
}

// Reset @ 14afb7ac0

void __thiscall
Metasound::TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> **)&(this->Array).field_0x8,
             *(TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> **)&(this->InitArray).field_0x8)
  ;
  return;
}

// Reset @ 14afb7ae0

void __thiscall
Metasound::TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Reset
          (TArraySetOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<bool,TSizedDefaultAllocator<32>_> **)&(this->Array).field_0x8,
             *(TArray<bool,TSizedDefaultAllocator<32>_> **)&(this->InitArray).field_0x8);
  return;
}

