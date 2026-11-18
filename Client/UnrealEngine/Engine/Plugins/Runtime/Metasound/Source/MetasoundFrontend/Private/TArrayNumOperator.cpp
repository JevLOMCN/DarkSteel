// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 42

// BindInputs @ 14aeb5fc0

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindInputs(TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aeb6050

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
BindOutputs(TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputNumName);
  local_res18[0] = &this->Num;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// BindInputs @ 14aebd680

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aebd710

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputNumName);
  local_res18[0] = &this->Num;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// BindInputs @ 14aec4ef0

void __thiscall
Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aec5000

void __thiscall
Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputNumName);
  local_res18[0] = &this->Num;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// BindInputs @ 14aecdb60

void __thiscall
Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aecdc30

void __thiscall
Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputNumName);
  local_res18[0] = &this->Num;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// BindInputs @ 14aed53b0

void __thiscall
Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<int,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aed5440

void __thiscall
Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputNumName);
  local_res18[0] = &this->Num;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// BindInputs @ 14aedce10

void __thiscall
Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindInputs
          (TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *local_res18 [2];
  FName *local_38;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *local_30;
  code *local_28;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  local_res18[0] = &this->Array;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<bool,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14aedcea0

void __thiscall
Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::BindOutputs
          (TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ArrayNodeVertexNames::OutputNumName);
  local_res18[0] = &this->Num;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af23970

TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TArrayNumOperator_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->Num,NewObject);
  *(undefined ***)&this->Num = &___7__TDataWriteReference_H_Metasound__6B_;
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af23a10

TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TArrayNumOperator_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->Num,NewObject);
  *(undefined ***)&this->Num = &___7__TDataWriteReference_H_Metasound__6B_;
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af23ab0

TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayNumOperator_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->Num,NewObject);
  *(undefined ***)&this->Num = &___7__TDataWriteReference_H_Metasound__6B_;
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af23b50

TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayNumOperator_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->Num,NewObject);
  *(undefined ***)&this->Num = &___7__TDataWriteReference_H_Metasound__6B_;
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af23bf0

TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TArrayNumOperator_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined ***)&this->Array =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->Num,NewObject);
  *(undefined ***)&this->Num = &___7__TDataWriteReference_H_Metasound__6B_;
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af23c90

TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_1)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7__TArrayNumOperator_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->Array =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Array).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->Array).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Array =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->Num,NewObject);
  *(undefined ***)&this->Num = &___7__TDataWriteReference_H_Metasound__6B_;
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  return this;
}

// ~TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af3dec0

void __thiscall
Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Num).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af3df00

void __thiscall
Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Num).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af3df40

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Num).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af3df80

void __thiscall
Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Num).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af3dfc0

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Num).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af3e000

void __thiscall
Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Num).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Array).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14af678f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28,
             &local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (this_00 != (TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)
                                local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af679a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28,
             &local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (this_00 != (TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                                local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af67a50

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                   *)local_28,&local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (this_00 !=
      (TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                                 *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af67b00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_28,
             &local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (this_00 != (TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                                local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af67bb0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
                  local_28,&local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (this_00 != (TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                                 *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14af67c60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this_00;
  TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ArrayNodeVertexNames::InputArrayName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28,
             &local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pTVar2 = (TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (this_00 != (TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &
                  ___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    pTVar2 = TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>
                       (this_00,(TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)
                                local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14af9d260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9d470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9d680

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         ();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::
             TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9d890

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9daa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo
          (void)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14af9dcb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  int iVar2;
  FName *pFVar3;
  longlong lVar4;
  FVertexInterface *pFVar5;
  FName local_res8;
  FName local_res10;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
      local_res8 = *pFVar3;
      ::FName::FName(&local_res10,L"Num");
      FText::FText(&local_88);
      FText::FText(&local_98);
      MetasoundArrayNodesPrivate::CreateArrayNumInterface(&local_58,&local_res8);
      MetasoundArrayNodesPrivate::CreateArrayNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_res8,&local_res10,&local_88,&local_98,&local_58,1,0,false)
      ;
      FText::FText(&local_78);
      FText::FText(&local_68);
      lVar4 = 2;
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,2,&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                                   ::__l2::Metadata.Keywords.AllocatorInstance,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayNum,
                         &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                          ::__l2::Metadata.Keywords.ArrayMax);
      ConstructItems<FText,FText,int>
                (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                 ::__l2::Metadata.Keywords.AllocatorInstance.Data + (longlong)iVar2 * 0x10,&local_78
                 ,2);
      pFVar5 = &local_58;
      do {
        pFVar1 = pFVar5 + -1;
        pFVar5 = (FVertexInterface *)&pFVar5[-1].EnvironmentInterface;
        lVar4 = lVar4 + -1;
        if (*(longlong **)&pFVar1->EnvironmentInterface != (longlong *)0x0) {
          (**(code **)(**(longlong **)&pFVar1->EnvironmentInterface + 0x10))();
        }
      } while (lVar4 != 0);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14afb5950

void __thiscall
Metasound::TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayNumOperator<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  return;
}

// Reset @ 14afb5970

void __thiscall
Metasound::TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayNumOperator<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1
          )

{
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  return;
}

// Reset @ 14afb5990

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayNumOperator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  return;
}

// Reset @ 14afb59b0

void __thiscall
Metasound::TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayNumOperator<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  return;
}

// Reset @ 14afb59d0

void __thiscall
Metasound::TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayNumOperator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FResetParams *param_1)

{
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  return;
}

// Reset @ 14afb59f0

void __thiscall
Metasound::TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_>::Reset
          (TArrayNumOperator<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FResetParams *param_1)

{
  **(undefined4 **)&(this->Num).field_0x8 =
       *(undefined4 *)(*(longlong *)&(this->Array).field_0x8 + 8);
  return;
}

