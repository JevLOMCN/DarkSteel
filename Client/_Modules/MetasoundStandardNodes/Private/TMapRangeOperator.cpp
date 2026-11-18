// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 24

// BindInputs @ 14b0800a0

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::BindInputs
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  FAudioRange *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  FAudioRange **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MapRangeVertexNames::InputValueNameName);
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res18 = &this->MappingObject;
  local_48._8_8_ = &this->MappingObject;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeANameName);
  local_res18 = (FAudioRange *)&(this->MappingObject).InRangeA;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeBNameName);
  local_res18 = (FAudioRange *)&(this->MappingObject).InRangeB;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeANameName);
  local_res18 = (FAudioRange *)&(this->MappingObject).OutRangeA;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeBNameName);
  local_res18 = (FAudioRange *)&(this->MappingObject).OutRangeB;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputClampedNameName);
  local_res18 = (FAudioRange *)&(this->MappingObject).bClamped;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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

// BindOutputs @ 14b080380

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::BindOutputs
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  FName **local_10;
  
  FLazyName::Resolve(&MapRangeVertexNames::OutputValueNameName);
  local_res18[0] = &(this->MappingObject).OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b080950

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::BindInputs
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  FFloatRange *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  FFloatRange **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MapRangeVertexNames::InputValueNameName);
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res18 = &this->MappingObject;
  local_48._8_8_ = &this->MappingObject;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeANameName);
  local_res18 = (FFloatRange *)&(this->MappingObject).InRangeA;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeBNameName);
  local_res18 = (FFloatRange *)&(this->MappingObject).InRangeB;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeANameName);
  local_res18 = (FFloatRange *)&(this->MappingObject).OutRangeA;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeBNameName);
  local_res18 = (FFloatRange *)&(this->MappingObject).OutRangeB;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputClampedNameName);
  local_res18 = (FFloatRange *)&(this->MappingObject).bClamped;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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

// BindOutputs @ 14b080b90

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::BindOutputs
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  FLazyName::Resolve(&MapRangeVertexNames::OutputValueNameName);
  local_res18[0] = &(this->MappingObject).OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b080e40

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::BindInputs
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  FIntRange *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  FIntRange **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MapRangeVertexNames::InputValueNameName);
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_res18 = &this->MappingObject;
  local_48._8_8_ = &this->MappingObject;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeANameName);
  local_res18 = (FIntRange *)&(this->MappingObject).InRangeA;
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
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeBNameName);
  local_res18 = (FIntRange *)&(this->MappingObject).InRangeB;
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
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeANameName);
  local_res18 = (FIntRange *)&(this->MappingObject).OutRangeA;
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
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeBNameName);
  local_res18 = (FIntRange *)&(this->MappingObject).OutRangeB;
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
  FLazyName::Resolve(&MapRangeVertexNames::InputClampedNameName);
  local_res18 = (FIntRange *)&(this->MappingObject).bClamped;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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

// BindOutputs @ 14b081080

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::BindOutputs
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  FLazyName::Resolve(&MapRangeVertexNames::OutputValueNameName);
  local_res18[0] = &(this->MappingObject).OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> @ 14b0afd00

TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> * __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::
TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *this,
          FAudioRange *param_1)

{
  longlong lVar1;
  FAudioRange *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__TMapRangeOperator_VFAudioRange_MetasoundMapRangeNodePrivate_Metasound___Metasound__6B_
  ;
  this_00 = &this->MappingObject;
  *(undefined ***)&this_00->Value = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).Value.field_0x8 = *(undefined8 *)&(param_1->Value).field_0x8
  ;
  lVar1 = *(longlong *)&(param_1->Value).field_0x10;
  *(longlong *)&(this->MappingObject).Value.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this_00->Value =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&(this->MappingObject).InRangeA = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).InRangeA.field_0x8 =
       *(undefined8 *)&(param_1->InRangeA).field_0x8;
  lVar1 = *(longlong *)&(param_1->InRangeA).field_0x10;
  *(longlong *)&(this->MappingObject).InRangeA.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).InRangeA = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).InRangeB = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).InRangeB.field_0x8 =
       *(undefined8 *)&(param_1->InRangeB).field_0x8;
  lVar1 = *(longlong *)&(param_1->InRangeB).field_0x10;
  *(longlong *)&(this->MappingObject).InRangeB.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).InRangeB = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutRangeA = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutRangeA.field_0x8 =
       *(undefined8 *)&(param_1->OutRangeA).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutRangeA).field_0x10;
  *(longlong *)&(this->MappingObject).OutRangeA.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutRangeA = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutRangeB = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutRangeB.field_0x8 =
       *(undefined8 *)&(param_1->OutRangeB).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutRangeB).field_0x10;
  *(longlong *)&(this->MappingObject).OutRangeB.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutRangeB = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).bClamped = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).bClamped.field_0x8 =
       *(undefined8 *)&(param_1->bClamped).field_0x8;
  lVar1 = *(longlong *)&(param_1->bClamped).field_0x10;
  *(longlong *)&(this->MappingObject).bClamped.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).bClamped = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutputValue =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutputValue.field_0x8 =
       *(undefined8 *)&(param_1->OutputValue).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutputValue).field_0x10;
  *(longlong *)&(this->MappingObject).OutputValue.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  MetasoundMapRangeNodePrivate::FAudioRange::DoMapping(this_00);
  return this;
}

// TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> @ 14b0afe70

TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> * __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::
TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *this,
          FFloatRange *param_1)

{
  longlong lVar1;
  FFloatRange *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__TMapRangeOperator_VFFloatRange_MetasoundMapRangeNodePrivate_Metasound___Metasound__6B_
  ;
  this_00 = &this->MappingObject;
  *(undefined ***)&this_00->Value = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).Value.field_0x8 = *(undefined8 *)&(param_1->Value).field_0x8
  ;
  lVar1 = *(longlong *)&(param_1->Value).field_0x10;
  *(longlong *)&(this->MappingObject).Value.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this_00->Value = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).InRangeA = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).InRangeA.field_0x8 =
       *(undefined8 *)&(param_1->InRangeA).field_0x8;
  lVar1 = *(longlong *)&(param_1->InRangeA).field_0x10;
  *(longlong *)&(this->MappingObject).InRangeA.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).InRangeA = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).InRangeB = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).InRangeB.field_0x8 =
       *(undefined8 *)&(param_1->InRangeB).field_0x8;
  lVar1 = *(longlong *)&(param_1->InRangeB).field_0x10;
  *(longlong *)&(this->MappingObject).InRangeB.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).InRangeB = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutRangeA = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutRangeA.field_0x8 =
       *(undefined8 *)&(param_1->OutRangeA).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutRangeA).field_0x10;
  *(longlong *)&(this->MappingObject).OutRangeA.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutRangeA = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutRangeB = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutRangeB.field_0x8 =
       *(undefined8 *)&(param_1->OutRangeB).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutRangeB).field_0x10;
  *(longlong *)&(this->MappingObject).OutRangeB.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutRangeB = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).bClamped = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).bClamped.field_0x8 =
       *(undefined8 *)&(param_1->bClamped).field_0x8;
  lVar1 = *(longlong *)&(param_1->bClamped).field_0x10;
  *(longlong *)&(this->MappingObject).bClamped.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).bClamped = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutputValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutputValue.field_0x8 =
       *(undefined8 *)&(param_1->OutputValue).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutputValue).field_0x10;
  *(longlong *)&(this->MappingObject).OutputValue.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
  MetasoundMapRangeNodePrivate::FFloatRange::DoMapping(this_00);
  return this;
}

// TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> @ 14b0affe0

TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> * __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::
TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *this,
          FIntRange *param_1)

{
  longlong lVar1;
  FIntRange *this_00;
  
  this->_padding_ =
       (longlong)
       &___7__TMapRangeOperator_VFIntRange_MetasoundMapRangeNodePrivate_Metasound___Metasound__6B_;
  this_00 = &this->MappingObject;
  *(undefined ***)&this_00->Value = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).Value.field_0x8 = *(undefined8 *)&(param_1->Value).field_0x8
  ;
  lVar1 = *(longlong *)&(param_1->Value).field_0x10;
  *(longlong *)&(this->MappingObject).Value.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this_00->Value = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).InRangeA = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).InRangeA.field_0x8 =
       *(undefined8 *)&(param_1->InRangeA).field_0x8;
  lVar1 = *(longlong *)&(param_1->InRangeA).field_0x10;
  *(longlong *)&(this->MappingObject).InRangeA.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).InRangeA = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).InRangeB = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).InRangeB.field_0x8 =
       *(undefined8 *)&(param_1->InRangeB).field_0x8;
  lVar1 = *(longlong *)&(param_1->InRangeB).field_0x10;
  *(longlong *)&(this->MappingObject).InRangeB.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).InRangeB = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutRangeA = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutRangeA.field_0x8 =
       *(undefined8 *)&(param_1->OutRangeA).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutRangeA).field_0x10;
  *(longlong *)&(this->MappingObject).OutRangeA.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutRangeA = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutRangeB = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutRangeB.field_0x8 =
       *(undefined8 *)&(param_1->OutRangeB).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutRangeB).field_0x10;
  *(longlong *)&(this->MappingObject).OutRangeB.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutRangeB = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).bClamped = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).bClamped.field_0x8 =
       *(undefined8 *)&(param_1->bClamped).field_0x8;
  lVar1 = *(longlong *)&(param_1->bClamped).field_0x10;
  *(longlong *)&(this->MappingObject).bClamped.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).bClamped = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&(this->MappingObject).OutputValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MappingObject).OutputValue.field_0x8 =
       *(undefined8 *)&(param_1->OutputValue).field_0x8;
  lVar1 = *(longlong *)&(param_1->OutputValue).field_0x10;
  *(longlong *)&(this->MappingObject).OutputValue.field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&(this->MappingObject).OutputValue = &___7__TDataWriteReference_H_Metasound__6B_;
  MetasoundMapRangeNodePrivate::FIntRange::DoMapping(this_00);
  return this;
}

// ~TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> @ 14b0b5640

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::
~TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutputValue.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).bClamped.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutRangeB.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutRangeA.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).InRangeB.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).InRangeA.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).Value.field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> @ 14b0b56b0

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::
~TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutputValue.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).bClamped.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutRangeB.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutRangeA.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).InRangeB.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).InRangeA.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).Value.field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> @ 14b0b5720

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::
~TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutputValue.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).bClamped.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutRangeB.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).OutRangeA.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).InRangeB.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).InRangeA.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MappingObject).Value.field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b0b6e90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo'::
__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FNodeClassName *pFVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_1a8;
  FString local_188;
  TArray<FText,TSizedDefaultAllocator<32>_> local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  ::FName::FName(&local_res20,L"MapRange");
  FText::FText(&local_128);
  Metasound::MetasoundMapRangeNodePrivate::FAudioRange::GetVertexInterface(&local_c8);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Math.Flags;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
  ConstructItems<FText,FText,int>(local_178.AllocatorInstance.Data,&local_138,1);
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar3 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  }
  local_108.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_108.Flags = local_128.Flags;
  FText::FText(&local_f8);
  ::FName::FName(local_168,"MapRange");
  ::FName::FName(&local_res18,L"Audio");
  pFVar2 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar2->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar2->Variant;
  local_1a8.Name = pFVar2->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_f8,&local_108,&local_188,&local_118,pFVar1
             ,&local_178,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b7130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo'::
__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FNodeClassName *pFVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_1a8;
  FString local_188;
  TArray<FText,TSizedDefaultAllocator<32>_> local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  ::FName::FName(&local_res20,L"MapRange");
  FText::FText(&local_128);
  Metasound::MetasoundMapRangeNodePrivate::FFloatRange::GetVertexInterface(&local_c8);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Math.Flags;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
  ConstructItems<FText,FText,int>(local_178.AllocatorInstance.Data,&local_138,1);
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar3 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  }
  local_108.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_108.Flags = local_128.Flags;
  FText::FText(&local_f8);
  ::FName::FName(local_168,"MapRange");
  ::FName::FName(&local_res18,L"Float");
  pFVar2 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar2->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar2->Variant;
  local_1a8.Name = pFVar2->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_f8,&local_108,&local_188,&local_118,pFVar1
             ,&local_178,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b0b73d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo'::
__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FNodeClassName *pFVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_1a8;
  FString local_188;
  TArray<FText,TSizedDefaultAllocator<32>_> local_178;
  FName local_168 [2];
  FNodeDisplayStyle local_158;
  TArray<FText,TSizedDefaultAllocator<32>_> local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  ::FName::FName(&local_res20,L"MapRange");
  FText::FText(&local_128);
  Metasound::MetasoundMapRangeNodePrivate::FIntRange::GetVertexInterface(&local_c8);
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.TextData.Reference = Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,local_res10);
  }
  local_138.Flags = Metasound::NodeCategories::Math.Flags;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
  ConstructItems<FText,FText,int>(local_178.AllocatorInstance.Data,&local_138,1);
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar3 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  }
  local_108.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_108.Flags = local_128.Flags;
  FText::FText(&local_f8);
  ::FName::FName(local_168,"MapRange");
  ::FName::FName(&local_res18,L"Int32");
  pFVar2 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_168,&local_res20,&local_res18);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar2->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar2->Variant;
  local_1a8.Name = pFVar2->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,&local_f8,&local_108,&local_188,&local_118,pFVar1
             ,&local_178,&local_148,&local_158);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0c7000

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *this_00;
  TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *pTVar2;
  FName local_res8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  TDataReference<Metasound::FAudioBuffer> local_28;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MapRangeVertexNames::InputValueNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_e8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeANameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeBNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeANameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeBNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputClampedNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_48,&local_res8,pFVar1);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_28,NewObject,pFVar1);
  local_28._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  this_00 = ::operator_new(0xe8);
  pTVar2 = (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *)0x0;
  if (this_00 != (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *)0x0) {
    pTVar2 = TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>
                       (this_00,(FAudioRange *)local_e8);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_28.ObjectReference.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c71a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *this_00;
  TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *pTVar2;
  FName local_res8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  TDataReference<float> local_28;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MapRangeVertexNames::InputValueNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeANameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeBNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeANameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeBNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputClampedNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_48,&local_res8,pFVar1);
  TDataReference<float>::TDataReference<float><>(&local_28,NewObject);
  local_28._padding_ = (longlong)&___7__TDataWriteReference_M_Metasound__6B_;
  this_00 = ::operator_new(0xe8);
  pTVar2 = (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *)0x0;
  if (this_00 != (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *)0x0) {
    pTVar2 = TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>
                       (this_00,(FFloatRange *)local_e8);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_28.ObjectReference.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0c7330

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *this_00;
  TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *pTVar2;
  FName local_res8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  TDataReference<int> local_28;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MapRangeVertexNames::InputValueNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_e8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeANameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_c8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputInRangeBNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_a8,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeANameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_88,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputOutRangeBNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar1);
  FLazyName::Resolve(&MapRangeVertexNames::InputClampedNameName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_48,&local_res8,pFVar1);
  TDataReference<int>::TDataReference<int><>(&local_28,NewObject);
  local_28._padding_ = (longlong)&___7__TDataWriteReference_H_Metasound__6B_;
  this_00 = ::operator_new(0xe8);
  pTVar2 = (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *)0x0;
  if (this_00 != (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *)0x0) {
    pTVar2 = TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>
                       (this_00,(FIntRange *)local_e8);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_28.ObjectReference.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b0d6a70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d6b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo
          (void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0d6b90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b0e4a40

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>::Reset
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange> *this,
          FResetParams *param_1)

{
  MetasoundMapRangeNodePrivate::FAudioRange::DoMapping(&this->MappingObject);
  return;
}

// Reset @ 14b0e4a50

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>::Reset
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange> *this,
          FResetParams *param_1)

{
  MetasoundMapRangeNodePrivate::FFloatRange::DoMapping(&this->MappingObject);
  return;
}

// Reset @ 14b0e4a60

void __thiscall
Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>::Reset
          (TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange> *this,
          FResetParams *param_1)

{
  MetasoundMapRangeNodePrivate::FIntRange::DoMapping(&this->MappingObject);
  return;
}

