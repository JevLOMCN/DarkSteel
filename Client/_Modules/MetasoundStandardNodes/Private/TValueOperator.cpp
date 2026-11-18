// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 36

// BindInputs @ 14b203f90

void __thiscall
Metasound::TValueOperator<FString>::BindInputs
          (TValueOperator<FString> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  local_res18 = &this->SetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  local_res18 = &this->ResetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitValue;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TargetValue;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<FString>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b204130

void __thiscall
Metasound::TValueOperator<FString>::BindOutputs
          (TValueOperator<FString> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::OutputOnSetName);
  local_res18 = &this->TriggerOnSet;
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
  FLazyName::Resolve(&ValueVertexNames::OutputOnResetName);
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
  FLazyName::Resolve(&ValueVertexNames::OutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutputValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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

// GetInputs @ 14b204280

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<FString>::GetInputs
          (TValueOperator<FString> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x80,L"");
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

// GetOutputs @ 14b204300

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<FString>::GetOutputs
          (TValueOperator<FString> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x88,L"");
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

// BindInputs @ 14b204e80

void __thiscall
Metasound::TValueOperator<bool>::BindInputs
          (TValueOperator<bool> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  local_res18 = &this->SetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  local_res18 = &this->ResetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitValue;
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
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TargetValue;
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

// BindOutputs @ 14b205020

void __thiscall
Metasound::TValueOperator<bool>::BindOutputs
          (TValueOperator<bool> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::OutputOnSetName);
  local_res18 = &this->TriggerOnSet;
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
  FLazyName::Resolve(&ValueVertexNames::OutputOnResetName);
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
  FLazyName::Resolve(&ValueVertexNames::OutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutputValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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

// GetInputs @ 14b205170

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<bool>::GetInputs
          (TValueOperator<bool> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x80,L"");
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

// GetOutputs @ 14b2051f0

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<bool>::GetOutputs
          (TValueOperator<bool> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x88,L"");
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

// BindInputs @ 14b205820

void __thiscall
Metasound::TValueOperator<float>::BindInputs
          (TValueOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  local_res18 = &this->SetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  local_res18 = &this->ResetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitValue;
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
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TargetValue;
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
  return;
}

// BindOutputs @ 14b2059c0

void __thiscall
Metasound::TValueOperator<float>::BindOutputs
          (TValueOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::OutputOnSetName);
  local_res18 = &this->TriggerOnSet;
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
  FLazyName::Resolve(&ValueVertexNames::OutputOnResetName);
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
  FLazyName::Resolve(&ValueVertexNames::OutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutputValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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

// GetInputs @ 14b205b10

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<float>::GetInputs
          (TValueOperator<float> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x80,L"");
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

// GetOutputs @ 14b205b90

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<float>::GetOutputs
          (TValueOperator<float> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x88,L"");
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

// BindInputs @ 14b206110

void __thiscall
Metasound::TValueOperator<int>::BindInputs
          (TValueOperator<int> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  local_res18 = &this->SetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  local_res18 = &this->ResetTrigger;
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
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->InitValue;
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
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->TargetValue;
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

// BindOutputs @ 14b2062b0

void __thiscall
Metasound::TValueOperator<int>::BindOutputs
          (TValueOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ValueVertexNames::OutputOnSetName);
  local_res18 = &this->TriggerOnSet;
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
  FLazyName::Resolve(&ValueVertexNames::OutputOnResetName);
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
  FLazyName::Resolve(&ValueVertexNames::OutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutputValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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

// GetInputs @ 14b206400

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<int>::GetInputs
          (TValueOperator<int> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x80,L"");
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

// GetOutputs @ 14b206480

FDataReferenceCollection * __thiscall
Metasound::TValueOperator<int>::GetOutputs
          (TValueOperator<int> *this,FDataReferenceCollection *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDataReferenceCollection *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundValueNode.h"
                     ,0x88,L"");
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

// ~TValueOperator<int> @ 14b237170

void __thiscall Metasound::TValueOperator<int>::~TValueOperator<int>(TValueOperator<int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnSet).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TargetValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InitValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SetTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TValueOperator<float> @ 14b2371e0

void __thiscall
Metasound::TValueOperator<float>::~TValueOperator<float>(TValueOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnSet).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TargetValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InitValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SetTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TValueOperator<FString> @ 14b237250

void __thiscall
Metasound::TValueOperator<FString>::~TValueOperator<FString>(TValueOperator<FString> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnSet).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TargetValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InitValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SetTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TValueOperator<bool> @ 14b2372c0

void __thiscall Metasound::TValueOperator<bool>::~TValueOperator<bool>(TValueOperator<bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnSet).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TargetValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InitValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SetTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b2697f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TValueOperator<int>::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_a8 [16];
  INode local_98;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0xe8);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TValueOperator_H_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[2] = (INode)local_a8._8_8_;
    pIVar2[3] = local_98;
    if (local_98 != (INode)0x0) {
      *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[5] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[6] = (INode)local_88._8_8_;
    pIVar2[7] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar2[5] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[9] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar2[10] = (INode)local_68._8_8_;
    pIVar2[0xb] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar2[9] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pIVar2[0xd] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar2[0xe] = (INode)local_48._8_8_;
    pIVar2[0xf] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar2[0xd] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)(pIVar2 + 0x11),NewObject);
    pIVar2[0x11] = (INode)&___7__TDataWriteReference_H_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x15),NewObject,pFVar1);
    pIVar2[0x15] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x19),NewObject,pFVar1);
    pIVar2[0x19] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined4 *)pIVar2[0x12] = *(undefined4 *)pIVar2[10];
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b269a70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TValueOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_a8 [16];
  INode local_98;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0xe8);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TValueOperator_M_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[2] = (INode)local_a8._8_8_;
    pIVar2[3] = local_98;
    if (local_98 != (INode)0x0) {
      *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[5] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[6] = (INode)local_88._8_8_;
    pIVar2[7] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar2[5] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[9] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[10] = (INode)local_68._8_8_;
    pIVar2[0xb] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar2[9] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar2[0xd] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[0xe] = (INode)local_48._8_8_;
    pIVar2[0xf] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar2[0xd] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)(pIVar2 + 0x11),NewObject);
    pIVar2[0x11] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x15),NewObject,pFVar1);
    pIVar2[0x15] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x19),NewObject,pFVar1);
    pIVar2[0x19] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined4 *)pIVar2[0x12] = *(undefined4 *)pIVar2[10];
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b269cf0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TValueOperator<FString>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_a8 [16];
  INode local_98;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
            (this,(TDataReadReference<FString> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<FString>
            (this,(TDataReadReference<FString> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0xe8);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TValueOperator_VFString___Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[2] = (INode)local_a8._8_8_;
    pIVar2[3] = local_98;
    if (local_98 != (INode)0x0) {
      *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[5] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[6] = (INode)local_88._8_8_;
    pIVar2[7] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar2[5] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[9] = (INode)&___7__TDataReference_VFString___Metasound__6B_;
    pIVar2[10] = (INode)local_68._8_8_;
    pIVar2[0xb] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar2[9] = (INode)&___7__TDataReadReference_VFString___Metasound__6B_;
    pIVar2[0xd] = (INode)&___7__TDataReference_VFString___Metasound__6B_;
    pIVar2[0xe] = (INode)local_48._8_8_;
    pIVar2[0xf] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar2[0xd] = (INode)&___7__TDataReadReference_VFString___Metasound__6B_;
    TDataReference<FString>::TDataReference<FString><>
              ((TDataReference<FString> *)(pIVar2 + 0x11),NewObject);
    pIVar2[0x11] = (INode)&___7__TDataWriteReference_VFString___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x15),NewObject,pFVar1);
    pIVar2[0x15] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x19),NewObject,pFVar1);
    pIVar2[0x19] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    ::FString::operator=((FString *)pIVar2[0x12],(FString *)pIVar2[10]);
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b269f70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TValueOperator<bool>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_a8 [16];
  INode local_98;
  undefined1 local_88 [16];
  INode local_78;
  undefined1 local_68 [16];
  INode local_58;
  undefined1 local_48 [16];
  INode local_38;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputSetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputInitValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ValueVertexNames::InputTargetValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pIVar2 = ::operator_new(0xe8);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TValueOperator__N_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[2] = (INode)local_a8._8_8_;
    pIVar2[3] = local_98;
    if (local_98 != (INode)0x0) {
      *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[5] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[6] = (INode)local_88._8_8_;
    pIVar2[7] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar2[5] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[9] = (INode)&___7__TDataReference__N_Metasound__6B_;
    pIVar2[10] = (INode)local_68._8_8_;
    pIVar2[0xb] = local_58;
    if (local_58 != (INode)0x0) {
      *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
    }
    pIVar2[9] = (INode)&___7__TDataReadReference__N_Metasound__6B_;
    pIVar2[0xd] = (INode)&___7__TDataReference__N_Metasound__6B_;
    pIVar2[0xe] = (INode)local_48._8_8_;
    pIVar2[0xf] = local_38;
    if (local_38 != (INode)0x0) {
      *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
    }
    pIVar2[0xd] = (INode)&___7__TDataReadReference__N_Metasound__6B_;
    TDataReference<bool>::TDataReference<bool><>((TDataReference<bool> *)(pIVar2 + 0x11),NewObject);
    pIVar2[0x11] = (INode)&___7__TDataWriteReference__N_Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x15),NewObject,pFVar1);
    pIVar2[0x15] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar2 + 0x19),NewObject,pFVar1);
    pIVar2[0x19] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined1 *)pIVar2[0x12] = *(undefined1 *)pIVar2[10];
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetDefaultInterface @ 14b279310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TValueOperator<int>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_218 [32];
  FInputVertexInterface local_1e8;
  FOutputVertexInterface local_1c8;
  FInputVertexInterfaceDeclarationBuilder local_1a8;
  FOutputVertexInterfaceDeclarationBuilder local_180;
  TOutputDataVertex<int> local_158;
  TOutputDataVertex<Metasound::FTrigger> local_138;
  TOutputDataVertex<Metasound::FTrigger> local_118;
  TInputDataVertex<Metasound::FTrigger> local_f8;
  TInputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<int> local_88;
  TInputDataVertex<int> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_158,&ValueVertexNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_138,&ValueVertexNames::OutputOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_118,&ValueVertexNames::OutputOnSetName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1c8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_180,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1c8,
               &local_1c8.SubInterfaces);
    if ((local_180.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,&(local_180.Vertices)->AllocatorInstance,(local_180.Vertices)->ArrayNum,
                 &(local_180.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_180);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><>
                       (&local_50,&ValueVertexNames::InputTargetValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><>
                       (&local_88,&ValueVertexNames::InputInitValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&ValueVertexNames::InputResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_f8,&ValueVertexNames::InputSetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SubInterfaces.ArrayNum = 0;
    local_1e8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1a8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e8,
               &local_1e8.SubInterfaces);
    if ((local_1a8.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_1a8.Vertices)->AllocatorInstance,(local_1a8.Vertices)->ArrayNum,
                 &(local_1a8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar6);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1a8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_1e8,&local_1c8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data,
               local_1e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1e8._padding_,(int)local_1e8._padding_);
    if ((FInputDataVertex *)local_1e8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    if ((0xc < (byte)local_f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f8._48_1_])(&local_f8.field_0x20);
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data,
               local_1c8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1c8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
    atexit(`Metasound::TValueOperator<int>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b279740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TValueOperator<float>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_218 [32];
  FInputVertexInterface local_1e8;
  FOutputVertexInterface local_1c8;
  FInputVertexInterfaceDeclarationBuilder local_1a8;
  FOutputVertexInterfaceDeclarationBuilder local_180;
  TOutputDataVertex<float> local_158;
  TOutputDataVertex<Metasound::FTrigger> local_138;
  TOutputDataVertex<Metasound::FTrigger> local_118;
  TInputDataVertex<Metasound::FTrigger> local_f8;
  TInputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<float> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_158,&ValueVertexNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_138,&ValueVertexNames::OutputOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_118,&ValueVertexNames::OutputOnSetName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1c8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_180,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1c8,
               &local_1c8.SubInterfaces);
    if ((local_180.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,&(local_180.Vertices)->AllocatorInstance,(local_180.Vertices)->ArrayNum,
                 &(local_180.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_180);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_50,&ValueVertexNames::InputTargetValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_88,&ValueVertexNames::InputInitValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&ValueVertexNames::InputResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_f8,&ValueVertexNames::InputSetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SubInterfaces.ArrayNum = 0;
    local_1e8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1a8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e8,
               &local_1e8.SubInterfaces);
    if ((local_1a8.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_1a8.Vertices)->AllocatorInstance,(local_1a8.Vertices)->ArrayNum,
                 &(local_1a8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar6);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1a8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_1e8,&local_1c8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data,
               local_1e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1e8._padding_,(int)local_1e8._padding_);
    if ((FInputDataVertex *)local_1e8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    if ((0xc < (byte)local_f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f8._48_1_])(&local_f8.field_0x20);
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data,
               local_1c8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1c8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
    atexit(`Metasound::TValueOperator<float>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b279b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TValueOperator<FString>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<FString> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_218 [32];
  FInputVertexInterface local_1e8;
  FOutputVertexInterface local_1c8;
  FInputVertexInterfaceDeclarationBuilder local_1a8;
  FOutputVertexInterfaceDeclarationBuilder local_180;
  TOutputDataVertex<FString> local_158;
  TOutputDataVertex<Metasound::FTrigger> local_138;
  TOutputDataVertex<Metasound::FTrigger> local_118;
  TInputDataVertex<Metasound::FTrigger> local_f8;
  TInputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<FString> local_88;
  TInputDataVertex<FString> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<FString>::TOutputDataVertex<FString><>
                       (&local_158,&ValueVertexNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_138,&ValueVertexNames::OutputOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_118,&ValueVertexNames::OutputOnSetName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1c8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_180,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1c8,
               &local_1c8.SubInterfaces);
    if ((local_180.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,&(local_180.Vertices)->AllocatorInstance,(local_180.Vertices)->ArrayNum,
                 &(local_180.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_180);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<FString>::TInputDataVertex<FString><>
                       (&local_50,&ValueVertexNames::InputTargetValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<FString>::TInputDataVertex<FString><>
                       (&local_88,&ValueVertexNames::InputInitValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&ValueVertexNames::InputResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_f8,&ValueVertexNames::InputSetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SubInterfaces.ArrayNum = 0;
    local_1e8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1a8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e8,
               &local_1e8.SubInterfaces);
    if ((local_1a8.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_1a8.Vertices)->AllocatorInstance,(local_1a8.Vertices)->ArrayNum,
                 &(local_1a8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar6);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1a8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_1e8,&local_1c8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data,
               local_1e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1e8._padding_,(int)local_1e8._padding_);
    if ((FInputDataVertex *)local_1e8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    if ((0xc < (byte)local_f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f8._48_1_])(&local_f8.field_0x20);
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data,
               local_1c8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1c8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
    atexit(`Metasound::TValueOperator<FString>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b279fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TValueOperator<bool>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<bool> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_218 [32];
  FInputVertexInterface local_1e8;
  FOutputVertexInterface local_1c8;
  FInputVertexInterfaceDeclarationBuilder local_1a8;
  FOutputVertexInterfaceDeclarationBuilder local_180;
  TOutputDataVertex<bool> local_158;
  TOutputDataVertex<Metasound::FTrigger> local_138;
  TOutputDataVertex<Metasound::FTrigger> local_118;
  TInputDataVertex<Metasound::FTrigger> local_f8;
  TInputDataVertex<Metasound::FTrigger> local_c0;
  TInputDataVertex<bool> local_88;
  TInputDataVertex<bool> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<bool>::TOutputDataVertex<bool><>
                       (&local_158,&ValueVertexNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_138,&ValueVertexNames::OutputOnResetName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_118,&ValueVertexNames::OutputOnSetName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1c8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_180,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1c8,
               &local_1c8.SubInterfaces);
    if ((local_180.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,&(local_180.Vertices)->AllocatorInstance,(local_180.Vertices)->ArrayNum,
                 &(local_180.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_180,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_180);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><>
                       (&local_50,&ValueVertexNames::InputTargetValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><>
                       (&local_88,&ValueVertexNames::InputInitValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_c0,&ValueVertexNames::InputResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_f8,&ValueVertexNames::InputSetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1e8._padding_ = 0;
    local_1e8._padding_ = 0;
    local_1e8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.SubInterfaces.ArrayNum = 0;
    local_1e8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1a8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e8,
               &local_1e8.SubInterfaces);
    if ((local_1a8.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_1a8.Vertices)->AllocatorInstance,(local_1a8.Vertices)->ArrayNum,
                 &(local_1a8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1a8,pFVar6);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1a8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_1e8,&local_1c8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data,
               local_1e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1e8._padding_,(int)local_1e8._padding_);
    if ((FInputDataVertex *)local_1e8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    if ((0xc < (byte)local_f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f8._48_1_])(&local_f8.field_0x20);
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data,
               local_1c8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1c8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
    atexit(`Metasound::TValueOperator<bool>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b281f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TValueOperator<int>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Value");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundValueNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TValueOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2820c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TValueOperator<float>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Value");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundValueNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TValueOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b2821f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TValueOperator<FString>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<FString>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Value");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundValueNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TValueOperator<FString>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<FString>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b282320

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TValueOperator<bool>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<bool>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,"Value");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundValueNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TValueOperator<bool>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TValueOperator<bool>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b28b5e0

void __thiscall
Metasound::TValueOperator<int>::Reset(TValueOperator<int> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnSet).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  **(undefined4 **)&(this->OutputValue).field_0x8 = **(undefined4 **)&(this->InitValue).field_0x8;
  return;
}

// Reset @ 14b28b620

void __thiscall
Metasound::TValueOperator<float>::Reset(TValueOperator<float> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnSet).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  **(undefined4 **)&(this->OutputValue).field_0x8 = **(undefined4 **)&(this->InitValue).field_0x8;
  return;
}

// Reset @ 14b28b660

void __thiscall
Metasound::TValueOperator<FString>::Reset(TValueOperator<FString> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnSet).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  ::FString::operator=
            (*(FString **)&(this->OutputValue).field_0x8,*(FString **)&(this->InitValue).field_0x8);
  return;
}

// Reset @ 14b28b6a0

void __thiscall
Metasound::TValueOperator<bool>::Reset(TValueOperator<bool> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnSet).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnReset).field_0x8);
  **(undefined1 **)&(this->OutputValue).field_0x8 = **(undefined1 **)&(this->InitValue).field_0x8;
  return;
}

