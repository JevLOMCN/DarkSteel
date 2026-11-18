// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 47

// BindInputs @ 14b1b75e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::BindInputs
          (TRandomNodeOperator<Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

{
  int iVar1;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  TDataReadReference<Metasound::FTrigger> *local_b0;
  undefined1 local_a8 [16];
  code *local_98;
  TDataReadReference<Metasound::FTrigger> **local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_48 = 0xffffffff;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  local_b0 = &this->NextTrigger;
  local_90 = &local_b0;
  local_a8._0_8_ = &local_b8;
  local_88._8_8_ = local_a8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_a8._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_88,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  local_b0 = &this->ResetTrigger;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8._8_8_ = local_88;
  local_88._0_8_ = &local_b8;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputMinName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->MinValue;
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputMaxName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->MaxValue;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// BindOutputs @ 14b1b78c0

void __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::BindOutputs
          (TRandomNodeOperator<Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&RandomNodeNames::OutputOnNextTriggerName);
  local_res18 = &this->TriggerOutOnNext;
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
  FLazyName::Resolve(&RandomNodeNames::OutputOnResetTriggerName);
  local_res18 = &this->TriggerOutOnReset;
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
  FLazyName::Resolve(&RandomNodeNames::OutputValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutputValue;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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

// BindInputs @ 14b1b7b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::TRandomNodeOperator<bool>::BindInputs
          (TRandomNodeOperator<bool> *this,FInputVertexInterfaceData *param_1)

{
  int iVar1;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  TDataReadReference<Metasound::FTrigger> *local_b0;
  undefined1 local_a8 [16];
  code *local_98;
  TDataReadReference<Metasound::FTrigger> **local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_48 = 0xffffffff;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  local_b0 = &this->NextTrigger;
  local_90 = &local_b0;
  local_a8._0_8_ = &local_b8;
  local_88._8_8_ = local_a8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_a8._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_88,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  local_b0 = &this->ResetTrigger;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8._8_8_ = local_88;
  local_88._0_8_ = &local_b8;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// BindOutputs @ 14b1b7dc0

void __thiscall
Metasound::TRandomNodeOperator<bool>::BindOutputs
          (TRandomNodeOperator<bool> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&RandomNodeNames::OutputOnNextTriggerName);
  local_res18 = &this->TriggerOutOnNext;
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
  FLazyName::Resolve(&RandomNodeNames::OutputOnResetTriggerName);
  local_res18 = &this->TriggerOutOnReset;
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
  FLazyName::Resolve(&RandomNodeNames::OutputValueName);
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

// BindInputs @ 14b1b81f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::TRandomNodeOperator<float>::BindInputs
          (TRandomNodeOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  int iVar1;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  TDataReadReference<Metasound::FTrigger> *local_b0;
  undefined1 local_a8 [16];
  code *local_98;
  TDataReadReference<Metasound::FTrigger> **local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_48 = 0xffffffff;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  local_b0 = &this->NextTrigger;
  local_90 = &local_b0;
  local_a8._0_8_ = &local_b8;
  local_88._8_8_ = local_a8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_a8._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_88,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  local_b0 = &this->ResetTrigger;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8._8_8_ = local_88;
  local_88._0_8_ = &local_b8;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputMinName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->MinValue;
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputMaxName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->MaxValue;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// BindOutputs @ 14b1b84d0

void __thiscall
Metasound::TRandomNodeOperator<float>::BindOutputs
          (TRandomNodeOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&RandomNodeNames::OutputOnNextTriggerName);
  local_res18 = &this->TriggerOutOnNext;
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
  FLazyName::Resolve(&RandomNodeNames::OutputOnResetTriggerName);
  local_res18 = &this->TriggerOutOnReset;
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
  FLazyName::Resolve(&RandomNodeNames::OutputValueName);
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

// BindInputs @ 14b1b8730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::TRandomNodeOperator<int>::BindInputs
          (TRandomNodeOperator<int> *this,FInputVertexInterfaceData *param_1)

{
  int iVar1;
  undefined1 auStackY_e8 [32];
  FName local_b8;
  TDataReadReference<Metasound::FTrigger> *local_b0;
  undefined1 local_a8 [16];
  code *local_98;
  TDataReadReference<Metasound::FTrigger> **local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_48 = 0xffffffff;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  local_b0 = &this->NextTrigger;
  local_90 = &local_b0;
  local_a8._0_8_ = &local_b8;
  local_88._8_8_ = local_a8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_a8._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_88,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  local_b0 = &this->ResetTrigger;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->SeedValue;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputMinName);
  local_90 = &local_b0;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->MinValue;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  FLazyName::Resolve(&RandomNodeNames::InputMaxName);
  local_b0 = (TDataReadReference<Metasound::FTrigger> *)&this->MaxValue;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_90 = &local_b0;
  local_88._0_8_ = &local_b8;
  local_a8._8_8_ = local_88;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_88._8_8_ = local_b0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// BindOutputs @ 14b1b8a00

void __thiscall
Metasound::TRandomNodeOperator<int>::BindOutputs
          (TRandomNodeOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&RandomNodeNames::OutputOnNextTriggerName);
  local_res18 = &this->TriggerOutOnNext;
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
  FLazyName::Resolve(&RandomNodeNames::OutputOnResetTriggerName);
  local_res18 = &this->TriggerOutOnReset;
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
  FLazyName::Resolve(&RandomNodeNames::OutputValueName);
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

// TRandomNodeOperator<int> @ 14b1cbc60

TRandomNodeOperator<int> * __thiscall
Metasound::TRandomNodeOperator<int>::TRandomNodeOperator<int>
          (TRandomNodeOperator<int> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<int> *param_4,
          TDataReadReference<int> *param_5,TDataReadReference<int> *param_6)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7__TRandomNodeOperator_H_Metasound__6B_;
  *(undefined ***)&this->NextTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->NextTrigger).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->NextTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->NextTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->ResetTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ResetTrigger).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->ResetTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ResetTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->SeedValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedValue).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->SeedValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->MinValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MinValue).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->MinValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->MinValue = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->MaxValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->MaxValue).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar2 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->MaxValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->MaxValue = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnNext,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnNext =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnReset,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_H_Metasound__6B_;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  iVar1 = **(int **)&(this->SeedValue).field_0x8;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = iVar1 == -1;
  ResetInternal(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_5->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_6->field_0x10);
  return this;
}

// TRandomNodeOperator<float> @ 14b1cbe50

TRandomNodeOperator<float> * __thiscall
Metasound::TRandomNodeOperator<float>::TRandomNodeOperator<float>
          (TRandomNodeOperator<float> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<int> *param_4,
          TDataReadReference<float> *param_5,TDataReadReference<float> *param_6)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7__TRandomNodeOperator_M_Metasound__6B_;
  *(undefined ***)&this->NextTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->NextTrigger).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->NextTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->NextTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->ResetTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ResetTrigger).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->ResetTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ResetTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->SeedValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedValue).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->SeedValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->MinValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MinValue).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->MinValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->MinValue = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->MaxValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MaxValue).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar2 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->MaxValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->MaxValue = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnNext,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnNext =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnReset,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  iVar1 = **(int **)&(this->SeedValue).field_0x8;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = iVar1 == -1;
  ResetInternal(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_5->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_6->field_0x10);
  return this;
}

// TRandomNodeOperator<Metasound::FTime> @ 14b1cc040

TRandomNodeOperator<Metasound::FTime> * __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::TRandomNodeOperator<Metasound::FTime>
          (TRandomNodeOperator<Metasound::FTime> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<int> *param_4,
          TDataReadReference<Metasound::FTime> *param_5,
          TDataReadReference<Metasound::FTime> *param_6)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7__TRandomNodeOperator_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->NextTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->NextTrigger).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->NextTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->NextTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->ResetTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ResetTrigger).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->ResetTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ResetTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->SeedValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedValue).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->SeedValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->MinValue = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->MinValue).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->MinValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->MinValue = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->MaxValue = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->MaxValue).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar2 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->MaxValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->MaxValue = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnNext,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnNext =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnReset,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
            ((TDataReference<Metasound::FTime> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  iVar1 = **(int **)&(this->SeedValue).field_0x8;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = iVar1 == -1;
  ResetInternal(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_5->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_6->field_0x10);
  return this;
}

// TRandomNodeOperator<bool> @ 14b1cc230

TRandomNodeOperator<bool> * __thiscall
Metasound::TRandomNodeOperator<bool>::TRandomNodeOperator<bool>
          (TRandomNodeOperator<bool> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTrigger> *param_3,TDataReadReference<int> *param_4)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7__TRandomNodeOperator__N_Metasound__6B_;
  *(undefined ***)&this->NextTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->NextTrigger).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->NextTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->NextTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->ResetTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ResetTrigger).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->ResetTrigger).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ResetTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->SeedValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->SeedValue).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->SeedValue).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SeedValue = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<bool>::TDataReference<bool><>((TDataReference<bool> *)&this->MinValue,NewObject);
  *(undefined ***)&this->MinValue = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<bool>::TDataReference<bool><>((TDataReference<bool> *)&this->MaxValue,NewObject);
  *(undefined ***)&this->MaxValue = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnNext,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnNext =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOutOnReset,NewObject,param_1);
  *(undefined ***)&this->TriggerOutOnReset =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<bool>::TDataReference<bool><>((TDataReference<bool> *)&this->OutputValue,NewObject)
  ;
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference__N_Metasound__6B_;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  iVar1 = **(int **)&(this->SeedValue).field_0x8;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = iVar1 == -1;
  ResetInternal(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  return this;
}

// ~TRandomNodeOperator<int> @ 14b1cf6d0

void __thiscall
Metasound::TRandomNodeOperator<int>::~TRandomNodeOperator<int>(TRandomNodeOperator<int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TRandomNodeOperator<float> @ 14b1cf750

void __thiscall
Metasound::TRandomNodeOperator<float>::~TRandomNodeOperator<float>(TRandomNodeOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TRandomNodeOperator<Metasound::FTime> @ 14b1cf7d0

void __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::~TRandomNodeOperator<Metasound::FTime>
          (TRandomNodeOperator<Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TRandomNodeOperator<bool> @ 14b1cf850

void __thiscall
Metasound::TRandomNodeOperator<bool>::~TRandomNodeOperator<bool>(TRandomNodeOperator<bool> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b1d1640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"RandomInt32");
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_28);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TRandomNodeOperator<int>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::RandomUtils.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::RandomUtils.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::RandomUtils.Flags;
  return __return_storage_ptr__;
}

// operator() @ 14b1d17e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"RandomFloat");
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_28);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TRandomNodeOperator<float>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::RandomUtils.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::RandomUtils.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::RandomUtils.Flags;
  return __return_storage_ptr__;
}

// operator() @ 14b1d1980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"RandomTime");
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_28);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::RandomUtils.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::RandomUtils.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::RandomUtils.Flags;
  return __return_storage_ptr__;
}

// operator() @ 14b1d1b20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,"RandomBool");
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  __return_storage_ptr__->MinorVersion = 1;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,(FText *)&local_28);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TRandomNodeOperator<bool>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::RandomUtils.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::RandomUtils.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::RandomUtils.Flags;
  return __return_storage_ptr__;
}

// CreateOperator @ 14b1d7d60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TRandomNodeOperator<int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TReferenceControllerBase<0> *pTVar2;
  TReferenceControllerBase<0> *pTVar3;
  TRandomNodeOperator<int> *this_00;
  TRandomNodeOperator<int> *pTVar4;
  FName local_res10;
  undefined **local_108 [2];
  TReferenceControllerBase<0> *local_f8;
  undefined **local_e8 [2];
  TReferenceControllerBase<0> *local_d8;
  undefined **local_c8 [2];
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8 [2];
  TReferenceControllerBase<0> *local_98;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_68,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_108,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputMinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_e8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputMaxName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_c8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x118);
  pTVar3 = local_b8;
  pTVar2 = local_d8;
  pTVar4 = (TRandomNodeOperator<int> *)0x0;
  if (this_00 != (TRandomNodeOperator<int> *)0x0) {
    local_a8[1] = local_c8[1];
    local_98 = local_b8;
    if (local_b8 != (TReferenceControllerBase<0> *)0x0) {
      local_b8->SharedReferenceCount = local_b8->SharedReferenceCount + 1;
    }
    local_a8[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_88[1] = local_e8[1];
    local_78 = local_d8;
    if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
      local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
    }
    local_88[0] = &___7__TDataReadReference_H_Metasound__6B_;
    if (local_f8 != (TReferenceControllerBase<0> *)0x0) {
      local_f8->SharedReferenceCount = local_f8->SharedReferenceCount + 1;
    }
    local_e8[1] = (undefined **)local_68._8_8_;
    local_108[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_d8 = (TReferenceControllerBase<0> *)local_68._16_8_;
    if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_c8[1] = (undefined **)local_48._8_8_;
    local_b8 = (TReferenceControllerBase<0> *)local_48._16_8_;
    if ((TReferenceControllerBase<0> *)local_48._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_48._16_8_ + 8) = *(int *)(local_48._16_8_ + 8) + 1;
    }
    local_c8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pTVar4 = TRandomNodeOperator<int>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_c8,
                        (TDataReadReference<Metasound::FTrigger> *)local_e8,
                        (TDataReadReference<int> *)local_108,(TDataReadReference<int> *)local_88,
                        (TDataReadReference<int> *)local_a8);
  }
  param_1->Node = (INode *)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_f8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1d7fa0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TRandomNodeOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TReferenceControllerBase<0> *pTVar2;
  TReferenceControllerBase<0> *pTVar3;
  TRandomNodeOperator<float> *this_00;
  TRandomNodeOperator<float> *pTVar4;
  FName local_res10;
  undefined **local_108 [2];
  TReferenceControllerBase<0> *local_f8;
  undefined **local_e8 [2];
  TReferenceControllerBase<0> *local_d8;
  undefined **local_c8 [2];
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8 [2];
  TReferenceControllerBase<0> *local_98;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_68,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_108,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputMinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputMaxName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x118);
  pTVar3 = local_b8;
  pTVar2 = local_d8;
  pTVar4 = (TRandomNodeOperator<float> *)0x0;
  if (this_00 != (TRandomNodeOperator<float> *)0x0) {
    local_a8[1] = local_c8[1];
    local_98 = local_b8;
    if (local_b8 != (TReferenceControllerBase<0> *)0x0) {
      local_b8->SharedReferenceCount = local_b8->SharedReferenceCount + 1;
    }
    local_a8[0] = &___7__TDataReadReference_M_Metasound__6B_;
    local_88[1] = local_e8[1];
    local_78 = local_d8;
    if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
      local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
    }
    local_88[0] = &___7__TDataReadReference_M_Metasound__6B_;
    if (local_f8 != (TReferenceControllerBase<0> *)0x0) {
      local_f8->SharedReferenceCount = local_f8->SharedReferenceCount + 1;
    }
    local_d8 = (TReferenceControllerBase<0> *)local_68._16_8_;
    local_108[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_e8[1] = (undefined **)local_68._8_8_;
    if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_c8[1] = (undefined **)local_48._8_8_;
    local_b8 = (TReferenceControllerBase<0> *)local_48._16_8_;
    if ((TReferenceControllerBase<0> *)local_48._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_48._16_8_ + 8) = *(int *)(local_48._16_8_ + 8) + 1;
    }
    local_c8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pTVar4 = TRandomNodeOperator<float>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_c8,
                        (TDataReadReference<Metasound::FTrigger> *)local_e8,
                        (TDataReadReference<int> *)local_108,(TDataReadReference<float> *)local_88,
                        (TDataReadReference<float> *)local_a8);
  }
  param_1->Node = (INode *)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_f8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1d81e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TRandomNodeOperator<Metasound::FTime>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TReferenceControllerBase<0> *pTVar2;
  TReferenceControllerBase<0> *pTVar3;
  TRandomNodeOperator<Metasound::FTime> *this_00;
  TRandomNodeOperator<Metasound::FTime> *pTVar4;
  FName local_res10;
  undefined **local_108 [2];
  TReferenceControllerBase<0> *local_f8;
  undefined **local_e8 [2];
  TReferenceControllerBase<0> *local_d8;
  undefined **local_c8 [2];
  TReferenceControllerBase<0> *local_b8;
  undefined **local_a8 [2];
  TReferenceControllerBase<0> *local_98;
  undefined **local_88 [2];
  TReferenceControllerBase<0> *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_48,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_68,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_108,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputMinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_e8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputMaxName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_c8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x118);
  pTVar3 = local_b8;
  pTVar2 = local_d8;
  pTVar4 = (TRandomNodeOperator<Metasound::FTime> *)0x0;
  if (this_00 != (TRandomNodeOperator<Metasound::FTime> *)0x0) {
    local_a8[1] = local_c8[1];
    local_98 = local_b8;
    if (local_b8 != (TReferenceControllerBase<0> *)0x0) {
      local_b8->SharedReferenceCount = local_b8->SharedReferenceCount + 1;
    }
    local_a8[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    local_88[1] = local_e8[1];
    local_78 = local_d8;
    if (local_d8 != (TReferenceControllerBase<0> *)0x0) {
      local_d8->SharedReferenceCount = local_d8->SharedReferenceCount + 1;
    }
    local_88[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    if (local_f8 != (TReferenceControllerBase<0> *)0x0) {
      local_f8->SharedReferenceCount = local_f8->SharedReferenceCount + 1;
    }
    local_d8 = (TReferenceControllerBase<0> *)local_68._16_8_;
    local_108[0] = &___7__TDataReadReference_H_Metasound__6B_;
    local_e8[1] = (undefined **)local_68._8_8_;
    if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
    }
    local_e8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_c8[1] = (undefined **)local_48._8_8_;
    local_b8 = (TReferenceControllerBase<0> *)local_48._16_8_;
    if ((TReferenceControllerBase<0> *)local_48._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_48._16_8_ + 8) = *(int *)(local_48._16_8_ + 8) + 1;
    }
    local_c8[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pTVar4 = TRandomNodeOperator<Metasound::FTime>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_c8,
                        (TDataReadReference<Metasound::FTrigger> *)local_e8,
                        (TDataReadReference<int> *)local_108,
                        (TDataReadReference<Metasound::FTime> *)local_88,
                        (TDataReadReference<Metasound::FTime> *)local_a8);
  }
  param_1->Node = (INode *)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_f8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1d8420

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TRandomNodeOperator<bool>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TReferenceControllerBase<0> *pTVar2;
  TRandomNodeOperator<bool> *this_00;
  TRandomNodeOperator<bool> *pTVar3;
  FName local_res10;
  undefined **local_98 [2];
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputNextTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_38,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputResetTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_78,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&RandomNodeNames::InputSeedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_58,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x118);
  pTVar2 = local_48;
  pTVar3 = (TRandomNodeOperator<bool> *)0x0;
  if (this_00 != (TRandomNodeOperator<bool> *)0x0) {
    local_98[1] = local_58[1];
    local_88 = local_48;
    if (local_48 != (TReferenceControllerBase<0> *)0x0) {
      local_48->SharedReferenceCount = local_48->SharedReferenceCount + 1;
    }
    local_98[0] = &___7__TDataReadReference_H_Metasound__6B_;
    if (local_68 != (TReferenceControllerBase<0> *)0x0) {
      local_68->SharedReferenceCount = local_68->SharedReferenceCount + 1;
    }
    local_78[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    local_58[1] = (undefined **)local_38._8_8_;
    local_48 = (TReferenceControllerBase<0> *)local_38._16_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pTVar3 = TRandomNodeOperator<bool>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTrigger> *)local_58,
                        (TDataReadReference<Metasound::FTrigger> *)local_78,
                        (TDataReadReference<int> *)local_98);
  }
  param_1->Node = (INode *)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_68);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// EvaluateSeedChanges @ 14b1dd1a0

void __thiscall
Metasound::TRandomNodeOperator<int>::EvaluateSeedChanges(TRandomNodeOperator<int> *this)

{
  uint uVar1;
  uint *puVar2;
  LARGE_INTEGER local_res8 [4];
  
  puVar2 = *(uint **)&(this->SeedValue).field_0x8;
  uVar1 = *puVar2;
  if (uVar1 == 0xffffffff) {
    if ((this->bIsDefaultSeeded == false) || (this->bIsRandomStreamInitialized == false)) {
      this->bIsDefaultSeeded = true;
      this->bIsRandomStreamInitialized = true;
      QueryPerformanceCounter(local_res8);
      (this->RandomStream).Seed = local_res8[0].s.LowPart;
      (this->RandomStream).InitialSeed = local_res8[0].s.LowPart;
    }
  }
  else if (((this->bIsDefaultSeeded != false) || (this->bIsRandomStreamInitialized == false)) ||
          (uVar1 != (this->RandomStream).InitialSeed)) {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    uVar1 = *puVar2;
    (this->RandomStream).Seed = uVar1;
    (this->RandomStream).InitialSeed = uVar1;
    return;
  }
  return;
}

// EvaluateSeedChanges @ 14b1dd230

void __thiscall
Metasound::TRandomNodeOperator<float>::EvaluateSeedChanges(TRandomNodeOperator<float> *this)

{
  uint uVar1;
  uint *puVar2;
  LARGE_INTEGER local_res8 [4];
  
  puVar2 = *(uint **)&(this->SeedValue).field_0x8;
  uVar1 = *puVar2;
  if (uVar1 == 0xffffffff) {
    if ((this->bIsDefaultSeeded == false) || (this->bIsRandomStreamInitialized == false)) {
      this->bIsDefaultSeeded = true;
      this->bIsRandomStreamInitialized = true;
      QueryPerformanceCounter(local_res8);
      (this->RandomStream).Seed = local_res8[0].s.LowPart;
      (this->RandomStream).InitialSeed = local_res8[0].s.LowPart;
    }
  }
  else if (((this->bIsDefaultSeeded != false) || (this->bIsRandomStreamInitialized == false)) ||
          (uVar1 != (this->RandomStream).InitialSeed)) {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    uVar1 = *puVar2;
    (this->RandomStream).Seed = uVar1;
    (this->RandomStream).InitialSeed = uVar1;
    return;
  }
  return;
}

// EvaluateSeedChanges @ 14b1dd2c0

void __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::EvaluateSeedChanges
          (TRandomNodeOperator<Metasound::FTime> *this)

{
  uint uVar1;
  uint *puVar2;
  LARGE_INTEGER local_res8 [4];
  
  puVar2 = *(uint **)&(this->SeedValue).field_0x8;
  uVar1 = *puVar2;
  if (uVar1 == 0xffffffff) {
    if ((this->bIsDefaultSeeded == false) || (this->bIsRandomStreamInitialized == false)) {
      this->bIsDefaultSeeded = true;
      this->bIsRandomStreamInitialized = true;
      QueryPerformanceCounter(local_res8);
      (this->RandomStream).Seed = local_res8[0].s.LowPart;
      (this->RandomStream).InitialSeed = local_res8[0].s.LowPart;
    }
  }
  else if (((this->bIsDefaultSeeded != false) || (this->bIsRandomStreamInitialized == false)) ||
          (uVar1 != (this->RandomStream).InitialSeed)) {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    uVar1 = *puVar2;
    (this->RandomStream).Seed = uVar1;
    (this->RandomStream).InitialSeed = uVar1;
    return;
  }
  return;
}

// EvaluateSeedChanges @ 14b1dd350

void __thiscall
Metasound::TRandomNodeOperator<bool>::EvaluateSeedChanges(TRandomNodeOperator<bool> *this)

{
  uint uVar1;
  uint *puVar2;
  LARGE_INTEGER local_res8 [4];
  
  puVar2 = *(uint **)&(this->SeedValue).field_0x8;
  uVar1 = *puVar2;
  if (uVar1 == 0xffffffff) {
    if ((this->bIsDefaultSeeded == false) || (this->bIsRandomStreamInitialized == false)) {
      this->bIsDefaultSeeded = true;
      this->bIsRandomStreamInitialized = true;
      QueryPerformanceCounter(local_res8);
      (this->RandomStream).Seed = local_res8[0].s.LowPart;
      (this->RandomStream).InitialSeed = local_res8[0].s.LowPart;
    }
  }
  else if (((this->bIsDefaultSeeded != false) || (this->bIsRandomStreamInitialized == false)) ||
          (uVar1 != (this->RandomStream).InitialSeed)) {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    uVar1 = *puVar2;
    (this->RandomStream).Seed = uVar1;
    (this->RandomStream).InitialSeed = uVar1;
    return;
  }
  return;
}

// Execute @ 14b1dd3e0

void __thiscall Metasound::TRandomNodeOperator<float>::Execute(TRandomNodeOperator<float> *this)

{
  longlong lVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  
  puVar2 = &(this->TriggerOutOnReset).field_0x8;
  FTrigger::AdvanceBlock(*(FTrigger **)puVar2);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  fVar8 = __real_3f800000;
  plVar6 = *(longlong **)&(this->ResetTrigger).field_0x8;
  lVar11 = 0;
  iVar5 = *(int *)((longlong)plVar6 + 0x1c);
  if (0 < iVar5) {
    lVar7 = *plVar6;
    lVar1 = (longlong)iVar5 + -1;
    lVar10 = lVar11;
    if (0 < lVar1) {
      do {
        iVar5 = *(int *)(lVar7 + lVar10 * 4);
        EvaluateSeedChanges(this);
        uVar9 = (this->RandomStream).InitialSeed;
        (this->RandomStream).Seed = uVar9;
        fVar3 = **(float **)&(this->MaxValue).field_0x8;
        fVar4 = **(float **)&(this->MinValue).field_0x8;
        uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
        (this->RandomStream).Seed = uVar9;
        **(float **)&(this->OutputValue).field_0x8 =
             (fVar3 - fVar4) * ((float)(uVar9 >> 9 | 0x3f800000) - fVar8) + fVar4;
        FTrigger::TriggerFrame(*(FTrigger **)puVar2,iVar5);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar5 = *(int *)(lVar7 + lVar1 * 4);
    EvaluateSeedChanges(this);
    uVar9 = (this->RandomStream).InitialSeed;
    (this->RandomStream).Seed = uVar9;
    fVar3 = **(float **)&(this->MaxValue).field_0x8;
    fVar4 = **(float **)&(this->MinValue).field_0x8;
    uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar9;
    **(float **)&(this->OutputValue).field_0x8 =
         (fVar3 - fVar4) * ((float)(uVar9 >> 9 | 0x3f800000) - fVar8) + fVar4;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8,iVar5);
  }
  puVar12 = &(this->RandomStream).Seed;
  plVar6 = *(longlong **)&(this->NextTrigger).field_0x8;
  iVar5 = *(int *)((longlong)plVar6 + 0x1c);
  if (0 < iVar5) {
    lVar7 = *plVar6;
    lVar1 = (longlong)iVar5 + -1;
    if (0 < lVar1) {
      do {
        iVar5 = *(int *)(lVar7 + lVar11 * 4);
        fVar3 = **(float **)&(this->MaxValue).field_0x8;
        fVar4 = **(float **)&(this->MinValue).field_0x8;
        uVar9 = *puVar12 * 0xbb38435 + 0x3619636b;
        *puVar12 = uVar9;
        **(float **)&(this->OutputValue).field_0x8 =
             (fVar3 - fVar4) * ((float)(uVar9 >> 9 | 0x3f800000) - fVar8) + fVar4;
        FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8,iVar5);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    puVar12 = &(this->RandomStream).Seed;
    iVar5 = *(int *)(lVar7 + lVar1 * 4);
    fVar3 = **(float **)&(this->MaxValue).field_0x8;
    fVar4 = **(float **)&(this->MinValue).field_0x8;
    uVar9 = *puVar12 * 0xbb38435 + 0x3619636b;
    *puVar12 = uVar9;
    **(float **)&(this->OutputValue).field_0x8 =
         (fVar3 - fVar4) * ((float)(uVar9 >> 9 | 0x3f800000) - fVar8) + fVar4;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8,iVar5);
  }
  return;
}

// Execute @ 14b1dd6c0

void __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::Execute
          (TRandomNodeOperator<Metasound::FTime> *this)

{
  longlong lVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  
  puVar2 = &(this->TriggerOutOnReset).field_0x8;
  FTrigger::AdvanceBlock(*(FTrigger **)puVar2);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  fVar8 = __real_3f800000;
  plVar6 = *(longlong **)&(this->ResetTrigger).field_0x8;
  lVar11 = 0;
  iVar5 = *(int *)((longlong)plVar6 + 0x1c);
  if (0 < iVar5) {
    lVar7 = *plVar6;
    lVar1 = (longlong)iVar5 + -1;
    lVar10 = lVar11;
    if (0 < lVar1) {
      do {
        iVar5 = *(int *)(lVar7 + lVar10 * 4);
        EvaluateSeedChanges(this);
        uVar9 = (this->RandomStream).InitialSeed;
        (this->RandomStream).Seed = uVar9;
        dVar3 = **(double **)&(this->MaxValue).field_0x8;
        dVar4 = **(double **)&(this->MinValue).field_0x8;
        uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
        (this->RandomStream).Seed = uVar9;
        **(double **)&(this->OutputValue).field_0x8 =
             (double)(float)((double)((float)(uVar9 >> 9 | 0x3f800000) - fVar8) * (dVar3 - dVar4) +
                            dVar4);
        FTrigger::TriggerFrame(*(FTrigger **)puVar2,iVar5);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar5 = *(int *)(lVar7 + lVar1 * 4);
    EvaluateSeedChanges(this);
    uVar9 = (this->RandomStream).InitialSeed;
    (this->RandomStream).Seed = uVar9;
    dVar3 = **(double **)&(this->MaxValue).field_0x8;
    dVar4 = **(double **)&(this->MinValue).field_0x8;
    uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar9;
    **(double **)&(this->OutputValue).field_0x8 =
         (double)(float)((double)((float)(uVar9 >> 9 | 0x3f800000) - fVar8) * (dVar3 - dVar4) +
                        dVar4);
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8,iVar5);
  }
  puVar12 = &(this->RandomStream).Seed;
  plVar6 = *(longlong **)&(this->NextTrigger).field_0x8;
  iVar5 = *(int *)((longlong)plVar6 + 0x1c);
  if (0 < iVar5) {
    lVar7 = *plVar6;
    lVar1 = (longlong)iVar5 + -1;
    if (0 < lVar1) {
      do {
        iVar5 = *(int *)(lVar7 + lVar11 * 4);
        dVar3 = **(double **)&(this->MaxValue).field_0x8;
        dVar4 = **(double **)&(this->MinValue).field_0x8;
        uVar9 = *puVar12 * 0xbb38435 + 0x3619636b;
        *puVar12 = uVar9;
        **(double **)&(this->OutputValue).field_0x8 =
             (double)(float)((double)((float)(uVar9 >> 9 | 0x3f800000) - fVar8) * (dVar3 - dVar4) +
                            dVar4);
        FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8,iVar5);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    puVar12 = &(this->RandomStream).Seed;
    iVar5 = *(int *)(lVar7 + lVar1 * 4);
    dVar3 = **(double **)&(this->MaxValue).field_0x8;
    dVar4 = **(double **)&(this->MinValue).field_0x8;
    uVar9 = *puVar12 * 0xbb38435 + 0x3619636b;
    *puVar12 = uVar9;
    **(double **)&(this->OutputValue).field_0x8 =
         (double)(float)((double)((float)(uVar9 >> 9 | 0x3f800000) - fVar8) * (dVar3 - dVar4) +
                        dVar4);
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8,iVar5);
  }
  return;
}

// Execute @ 14b1dd9a0

void __thiscall Metasound::TRandomNodeOperator<bool>::Execute(TRandomNodeOperator<bool> *this)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = &(this->TriggerOutOnReset).field_0x8;
  FTrigger::AdvanceBlock(*(FTrigger **)puVar2);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  fVar11 = __real_3f800000;
  plVar4 = *(longlong **)&(this->ResetTrigger).field_0x8;
  lVar7 = 0;
  iVar3 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar3) {
    lVar1 = (longlong)iVar3 + -1;
    lVar5 = *plVar4;
    lVar9 = lVar7;
    if (0 < lVar1) {
      do {
        iVar3 = *(int *)(lVar5 + lVar9 * 4);
        EvaluateSeedChanges(this);
        uVar6 = (this->RandomStream).InitialSeed * 0xbb38435 + 0x3619636b;
        (this->RandomStream).Seed = uVar6;
        fVar10 = (float)(uVar6 >> 9 | 0x3f800000) - fVar11;
        *(bool *)*(undefined8 *)&(this->OutputValue).field_0x8 = (int)(fVar10 + fVar10) != 0;
        FTrigger::TriggerFrame(*(FTrigger **)puVar2,iVar3);
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar1);
    }
    iVar3 = *(int *)(lVar5 + lVar1 * 4);
    EvaluateSeedChanges(this);
    uVar6 = (this->RandomStream).InitialSeed;
    (this->RandomStream).Seed = uVar6;
    uVar6 = uVar6 * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar6;
    fVar10 = (float)(uVar6 >> 9 | 0x3f800000) - fVar11;
    *(bool *)*(undefined8 *)&(this->OutputValue).field_0x8 = (int)(fVar10 + fVar10) != 0;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8,iVar3);
  }
  puVar8 = &(this->RandomStream).Seed;
  plVar4 = *(longlong **)&(this->NextTrigger).field_0x8;
  iVar3 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar3) {
    lVar5 = *plVar4;
    lVar1 = (longlong)iVar3 + -1;
    if (0 < lVar1) {
      do {
        iVar3 = *(int *)(lVar5 + lVar7 * 4);
        uVar6 = *puVar8 * 0xbb38435 + 0x3619636b;
        *puVar8 = uVar6;
        fVar10 = (float)(uVar6 >> 9 | 0x3f800000) - fVar11;
        *(bool *)*(undefined8 *)&(this->OutputValue).field_0x8 = (int)(fVar10 + fVar10) != 0;
        FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8,iVar3);
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar1);
    }
    puVar8 = &(this->RandomStream).Seed;
    iVar3 = *(int *)(lVar5 + lVar1 * 4);
    uVar6 = *puVar8 * 0xbb38435 + 0x3619636b;
    *puVar8 = uVar6;
    fVar11 = (float)(uVar6 >> 9 | 0x3f800000) - fVar11;
    *(bool *)*(undefined8 *)&(this->OutputValue).field_0x8 = (int)(fVar11 + fVar11) != 0;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8,iVar3);
  }
  return;
}

// GetDefaultInterface @ 14b1e13e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FOutputVertexInterface *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_248 [32];
  int local_218 [2];
  FInputVertexInterface local_210;
  FInputVertexInterfaceDeclarationBuilder local_1f0;
  FOutputVertexInterface local_1c8;
  TOutputDataVertex<int> local_1a8;
  TOutputDataVertex<Metasound::FTrigger> local_188;
  TOutputDataVertex<Metasound::FTrigger> local_168;
  TInputDataVertex<Metasound::FTrigger> local_148;
  TInputDataVertex<Metasound::FTrigger> local_110;
  TInputDataVertex<int> local_d8;
  TInputDataVertex<int> local_a0;
  TInputDataVertex<int> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_1a8,&RandomNodeNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_188,&RandomNodeNames::OutputOnResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_168,&RandomNodeNames::OutputOnNextTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<int>_>
                       (&local_1c8,pTVar5,pTVar4,pTVar3);
    local_218[0] = 100;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_68,&RandomNodeNames::InputMaxName,&FDataVertexMetadata::EmptyBasic,
                        local_218);
    local_218[1] = 0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_a0,&RandomNodeNames::InputMinName,&FDataVertexMetadata::EmptyBasic,
                        local_218 + 1);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int_const_&>
                       (&local_d8,&RandomNodeNames::InputSeedName,&FDataVertexMetadata::EmptyBasic,
                        &DefaultSeed);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_110,&RandomNodeNames::InputResetTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_148,&RandomNodeNames::InputNextTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    local_210._padding_ = 0;
    local_210._padding_ = 0;
    local_210.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.SubInterfaces.ArrayNum = 0;
    local_210.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1f0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_210,
               &local_210.SubInterfaces);
    if ((local_1f0.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1f0.Vertices)->AllocatorInstance,(local_1f0.Vertices)->ArrayNum,
                 &(local_1f0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1f0,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1f0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
                ::__l5::DefaultInterface,&local_210,pFVar6);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_210.SubInterfaces.AllocatorInstance.Data,
               local_210.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_210.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_210.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_210._padding_,(int)local_210._padding_);
    if ((FInputDataVertex *)local_210._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_210._padding_);
    }
    if ((0xc < (byte)local_148._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
    if ((0xc < (byte)local_110._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
    if ((0xc < (byte)local_d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
    if ((0xc < (byte)local_a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
    if ((0xc < (byte)local_68._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
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
    atexit(`Metasound::TRandomNodeOperator<int>::GetDefaultInterface'::__l5::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
          ::__l5::DefaultInterface;
}

// GetDefaultInterface @ 14b1e1850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FOutputVertexInterface *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_238 [32];
  float local_208;
  float local_204;
  FInputVertexInterface local_200;
  FInputVertexInterfaceDeclarationBuilder local_1e0;
  FOutputVertexInterface local_1b8;
  TOutputDataVertex<float> local_198;
  TOutputDataVertex<Metasound::FTrigger> local_178;
  TOutputDataVertex<Metasound::FTrigger> local_158;
  TInputDataVertex<Metasound::FTrigger> local_138;
  TInputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<int> local_c8;
  TInputDataVertex<float> local_90;
  TInputDataVertex<float> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_198,&RandomNodeNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_178,&RandomNodeNames::OutputOnResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_158,&RandomNodeNames::OutputOnNextTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<float>_>
                       (&local_1b8,pTVar5,pTVar4,pTVar3);
    local_208 = 1.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_58,&RandomNodeNames::InputMaxName,&FDataVertexMetadata::EmptyBasic,
                        &local_208);
    local_204 = 0.0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_90,&RandomNodeNames::InputMinName,&FDataVertexMetadata::EmptyBasic,
                        &local_204);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int_const_&>
                       (&local_c8,&RandomNodeNames::InputSeedName,&FDataVertexMetadata::EmptyBasic,
                        &DefaultSeed);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_100,&RandomNodeNames::InputResetTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_138,&RandomNodeNames::InputNextTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    local_200._padding_ = 0;
    local_200._padding_ = 0;
    local_200.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.SubInterfaces.ArrayNum = 0;
    local_200.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1e0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_200,
               &local_200.SubInterfaces);
    if ((local_1e0.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1e0.Vertices)->AllocatorInstance,(local_1e0.Vertices)->ArrayNum,
                 &(local_1e0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1e0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
                ::__l5::DefaultInterface,&local_200,pFVar6);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data,
               local_200.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_200.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_200._padding_,(int)local_200._padding_);
    if ((FInputDataVertex *)local_200._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_200._padding_);
    }
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1b8.SubInterfaces.AllocatorInstance.Data,
               local_1b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1b8._padding_);
    }
    atexit(`Metasound::TRandomNodeOperator<float>::GetDefaultInterface'::__l5::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
          ::__l5::DefaultInterface;
}

// GetDefaultInterface @ 14b1e1cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTime> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FOutputVertexInterface *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_238 [32];
  float local_208;
  float local_204;
  FInputVertexInterface local_200;
  FInputVertexInterfaceDeclarationBuilder local_1e0;
  FOutputVertexInterface local_1b8;
  TOutputDataVertex<Metasound::FTime> local_198;
  TOutputDataVertex<Metasound::FTrigger> local_178;
  TOutputDataVertex<Metasound::FTrigger> local_158;
  TInputDataVertex<Metasound::FTrigger> local_138;
  TInputDataVertex<Metasound::FTrigger> local_100;
  TInputDataVertex<int> local_c8;
  TInputDataVertex<Metasound::FTime> local_90;
  TInputDataVertex<Metasound::FTime> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_198,&RandomNodeNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_178,&RandomNodeNames::OutputOnResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_158,&RandomNodeNames::OutputOnNextTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTime>_>
                       (&local_1b8,pTVar5,pTVar4,pTVar3);
    local_208 = 1.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_58,&RandomNodeNames::InputMaxName,&FDataVertexMetadata::EmptyBasic,
                        &local_208);
    local_204 = 0.0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_90,&RandomNodeNames::InputMinName,&FDataVertexMetadata::EmptyBasic,
                        &local_204);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int_const_&>
                       (&local_c8,&RandomNodeNames::InputSeedName,&FDataVertexMetadata::EmptyBasic,
                        &DefaultSeed);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_100,&RandomNodeNames::InputResetTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_138,&RandomNodeNames::InputNextTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    local_200._padding_ = 0;
    local_200._padding_ = 0;
    local_200.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.SubInterfaces.ArrayNum = 0;
    local_200.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1e0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_200,
               &local_200.SubInterfaces);
    if ((local_1e0.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1e0.Vertices)->AllocatorInstance,(local_1e0.Vertices)->ArrayNum,
                 &(local_1e0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1e0,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1e0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                ::__l5::DefaultInterface,&local_200,pFVar6);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data,
               local_200.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_200.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_200._padding_,(int)local_200._padding_);
    if ((FInputDataVertex *)local_200._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_200._padding_);
    }
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1b8.SubInterfaces.AllocatorInstance.Data,
               local_1b8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1b8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1b8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1b8._padding_);
    }
    atexit(`Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface'::__l5::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
          ::__l5::DefaultInterface;
}

// GetDefaultInterface @ 14b1e2110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<bool> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  FOutputVertexInterface *pFVar6;
  TInputDataVertex<int> *pTVar7;
  TInputDataVertex<Metasound::FTrigger> *pTVar8;
  TInputDataVertex<Metasound::FTrigger> *pTVar9;
  FInputVertexInterface *pFVar10;
  FVertexInterface *pFVar11;
  undefined1 auStack_178 [32];
  FInputVertexInterface local_158;
  FOutputVertexInterface local_138;
  TOutputDataVertex<bool> local_118;
  TOutputDataVertex<Metasound::FTrigger> local_f8;
  TOutputDataVertex<Metasound::FTrigger> local_d8;
  TInputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_80;
  TInputDataVertex<int> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
       ::__l7::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
                           ::__l7::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
     ::__l7::_thread_safe_static_guard_1__ == -1)) {
    pTVar3 = TOutputDataVertex<bool>::TOutputDataVertex<bool><>
                       (&local_118,&RandomNodeNames::OutputValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_f8,&RandomNodeNames::OutputOnResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_d8,&RandomNodeNames::OutputOnNextTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<Metasound::FTrigger>,Metasound::TOutputDataVertex<bool>_>
                       (&local_138,pTVar5,pTVar4,pTVar3);
    pTVar7 = TInputDataVertex<int>::TInputDataVertex<int><int_const_&>
                       (&local_48,&RandomNodeNames::InputSeedName,&FDataVertexMetadata::EmptyBasic,
                        &DefaultSeed);
    pTVar8 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_80,&RandomNodeNames::InputResetTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar9 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_b8,&RandomNodeNames::InputNextTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar10 = FInputVertexInterface::
              FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<int>_>
                        (&local_158,pTVar9,pTVar8,pTVar7);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
                ::__l7::DefaultInterface,pFVar10,pFVar6);
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
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
               local_138.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    atexit(`Metasound::TRandomNodeOperator<bool>::GetDefaultInterface'::__l7::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
                         ::__l7::_thread_safe_static_guard_1__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
          ::__l7::DefaultInterface;
}

// GetNodeInfo @ 14b1e2950

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b1e29e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b1e2a70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b1e2b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
          ::__l2::Info;
}

// Reset @ 14b1e9aa0

void __thiscall
Metasound::TRandomNodeOperator<int>::Reset(TRandomNodeOperator<int> *this,FResetParams *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  LARGE_INTEGER aLStackX_8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  puVar2 = *(uint **)&(this->SeedValue).field_0x8;
  uVar3 = *puVar2;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = uVar3 == 0xffffffff;
  if (*puVar2 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(aLStackX_8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    aLStackX_8[0]._0_4_ = *puVar2;
  }
  (this->RandomStream).InitialSeed = aLStackX_8[0]._0_4_;
  (this->RandomStream).Seed = aLStackX_8[0]._0_4_;
  iVar1 = **(int **)&(this->MinValue).field_0x8;
  iVar4 = (**(int **)&(this->MaxValue).field_0x8 - iVar1) + 1;
  if (0 < iVar4) {
    uVar3 = aLStackX_8[0]._0_4_ * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar3;
    **(int **)&(this->OutputValue).field_0x8 =
         iVar1 + (int)(((float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar4);
    return;
  }
  **(int **)&(this->OutputValue).field_0x8 = iVar1;
  return;
}

// Reset @ 14b1e9ab0

void __thiscall
Metasound::TRandomNodeOperator<float>::Reset(TRandomNodeOperator<float> *this,FResetParams *param_1)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  LARGE_INTEGER aLStackX_8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  puVar3 = *(uint **)&(this->SeedValue).field_0x8;
  uVar4 = *puVar3;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = uVar4 == 0xffffffff;
  if (*puVar3 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(aLStackX_8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    aLStackX_8[0]._0_4_ = *puVar3;
  }
  (this->RandomStream).InitialSeed = aLStackX_8[0]._0_4_;
  (this->RandomStream).Seed = aLStackX_8[0]._0_4_;
  fVar1 = **(float **)&(this->MaxValue).field_0x8;
  fVar2 = **(float **)&(this->MinValue).field_0x8;
  uVar4 = aLStackX_8[0]._0_4_ * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar4;
  **(float **)&(this->OutputValue).field_0x8 =
       (fVar1 - fVar2) * ((float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000) + fVar2;
  return;
}

// Reset @ 14b1e9ac0

void __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::Reset
          (TRandomNodeOperator<Metasound::FTime> *this,FResetParams *param_1)

{
  double dVar1;
  double dVar2;
  uint *puVar3;
  uint uVar4;
  LARGE_INTEGER aLStackX_8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  puVar3 = *(uint **)&(this->SeedValue).field_0x8;
  uVar4 = *puVar3;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = uVar4 == 0xffffffff;
  if (*puVar3 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(aLStackX_8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    aLStackX_8[0]._0_4_ = *puVar3;
  }
  (this->RandomStream).InitialSeed = aLStackX_8[0]._0_4_;
  (this->RandomStream).Seed = aLStackX_8[0]._0_4_;
  dVar1 = **(double **)&(this->MaxValue).field_0x8;
  dVar2 = **(double **)&(this->MinValue).field_0x8;
  uVar4 = aLStackX_8[0]._0_4_ * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar4;
  **(double **)&(this->OutputValue).field_0x8 =
       (double)(float)((double)((float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000) *
                       (dVar1 - dVar2) + dVar2);
  return;
}

// Reset @ 14b1e9ad0

void __thiscall
Metasound::TRandomNodeOperator<bool>::Reset(TRandomNodeOperator<bool> *this,FResetParams *param_1)

{
  DWORD DVar1;
  DWORD *pDVar2;
  uint uVar3;
  float fVar4;
  LARGE_INTEGER aLStackX_8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  pDVar2 = *(DWORD **)&(this->SeedValue).field_0x8;
  DVar1 = *pDVar2;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = DVar1 == 0xffffffff;
  if (*pDVar2 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(aLStackX_8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    aLStackX_8[0]._0_4_ = *pDVar2;
  }
  (this->RandomStream).InitialSeed = aLStackX_8[0]._0_4_;
  uVar3 = aLStackX_8[0]._0_4_ * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar3;
  fVar4 = (float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000;
  *(bool *)*(undefined8 *)&(this->OutputValue).field_0x8 = (int)(fVar4 + fVar4) != 0;
  return;
}

// ResetInternal @ 14b1eacb0

void __thiscall Metasound::TRandomNodeOperator<int>::ResetInternal(TRandomNodeOperator<int> *this)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  LARGE_INTEGER local_res8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  puVar2 = *(uint **)&(this->SeedValue).field_0x8;
  uVar3 = *puVar2;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = uVar3 == 0xffffffff;
  if (*puVar2 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(local_res8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    local_res8[0]._0_4_ = *puVar2;
  }
  (this->RandomStream).InitialSeed = local_res8[0]._0_4_;
  (this->RandomStream).Seed = local_res8[0]._0_4_;
  iVar1 = **(int **)&(this->MinValue).field_0x8;
  iVar4 = (**(int **)&(this->MaxValue).field_0x8 - iVar1) + 1;
  if (0 < iVar4) {
    uVar3 = local_res8[0]._0_4_ * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar3;
    **(int **)&(this->OutputValue).field_0x8 =
         iVar1 + (int)(((float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar4);
    return;
  }
  **(int **)&(this->OutputValue).field_0x8 = iVar1;
  return;
}

// ResetInternal @ 14b1eada0

void __thiscall
Metasound::TRandomNodeOperator<float>::ResetInternal(TRandomNodeOperator<float> *this)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  LARGE_INTEGER local_res8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  puVar3 = *(uint **)&(this->SeedValue).field_0x8;
  uVar4 = *puVar3;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = uVar4 == 0xffffffff;
  if (*puVar3 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(local_res8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    local_res8[0]._0_4_ = *puVar3;
  }
  (this->RandomStream).InitialSeed = local_res8[0]._0_4_;
  (this->RandomStream).Seed = local_res8[0]._0_4_;
  fVar1 = **(float **)&(this->MaxValue).field_0x8;
  fVar2 = **(float **)&(this->MinValue).field_0x8;
  uVar4 = local_res8[0]._0_4_ * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar4;
  **(float **)&(this->OutputValue).field_0x8 =
       (fVar1 - fVar2) * ((float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000) + fVar2;
  return;
}

// ResetInternal @ 14b1eae80

void __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::ResetInternal
          (TRandomNodeOperator<Metasound::FTime> *this)

{
  double dVar1;
  double dVar2;
  uint *puVar3;
  uint uVar4;
  LARGE_INTEGER local_res8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  puVar3 = *(uint **)&(this->SeedValue).field_0x8;
  uVar4 = *puVar3;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = uVar4 == 0xffffffff;
  if (*puVar3 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(local_res8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    local_res8[0]._0_4_ = *puVar3;
  }
  (this->RandomStream).InitialSeed = local_res8[0]._0_4_;
  (this->RandomStream).Seed = local_res8[0]._0_4_;
  dVar1 = **(double **)&(this->MaxValue).field_0x8;
  dVar2 = **(double **)&(this->MinValue).field_0x8;
  uVar4 = local_res8[0]._0_4_ * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar4;
  **(double **)&(this->OutputValue).field_0x8 =
       (double)(float)((double)((float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000) *
                       (dVar1 - dVar2) + dVar2);
  return;
}

// ResetInternal @ 14b1eaf60

void __thiscall Metasound::TRandomNodeOperator<bool>::ResetInternal(TRandomNodeOperator<bool> *this)

{
  DWORD DVar1;
  DWORD *pDVar2;
  uint uVar3;
  float fVar4;
  LARGE_INTEGER local_res8 [4];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnNext).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOutOnReset).field_0x8);
  pDVar2 = *(DWORD **)&(this->SeedValue).field_0x8;
  DVar1 = *pDVar2;
  this->bIsRandomStreamInitialized = false;
  this->bIsDefaultSeeded = DVar1 == 0xffffffff;
  if (*pDVar2 == 0xffffffff) {
    this->bIsDefaultSeeded = true;
    this->bIsRandomStreamInitialized = true;
    QueryPerformanceCounter(local_res8);
  }
  else {
    this->bIsDefaultSeeded = false;
    this->bIsRandomStreamInitialized = true;
    local_res8[0]._0_4_ = *pDVar2;
  }
  (this->RandomStream).InitialSeed = local_res8[0]._0_4_;
  uVar3 = local_res8[0]._0_4_ * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar3;
  fVar4 = (float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000;
  *(bool *)*(undefined8 *)&(this->OutputValue).field_0x8 = (int)(fVar4 + fVar4) != 0;
  return;
}

