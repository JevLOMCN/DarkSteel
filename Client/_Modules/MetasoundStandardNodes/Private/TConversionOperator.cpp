// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 54

// BindInputs @ 14b0371b0

void __thiscall
Metasound::TConversionOperator<float,Metasound::FTime>::BindInputs
          (TConversionOperator<float,Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  local_res18[0] = &this->InputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037240

void __thiscall
Metasound::TConversionOperator<float,Metasound::FTime>::BindOutputs
          (TConversionOperator<float,Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::OutputValueName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0373e0

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,float>::BindInputs
          (TConversionOperator<Metasound::FTime,float> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  local_res18[0] = &this->InputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037470

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,float>::BindOutputs
          (TConversionOperator<Metasound::FTime,float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::OutputValueName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// BindInputs @ 14b0375d0

void __thiscall
Metasound::TConversionOperator<int,Metasound::FTime>::BindInputs
          (TConversionOperator<int,Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<int> *local_res18 [2];
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  local_res18[0] = &this->InputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037660

void __thiscall
Metasound::TConversionOperator<int,Metasound::FTime>::BindOutputs
          (TConversionOperator<int,Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::OutputValueName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b037850

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,int>::BindInputs
          (TConversionOperator<Metasound::FTime,int> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  local_res18[0] = &this->InputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037970

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,int>::BindOutputs
          (TConversionOperator<Metasound::FTime,int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::OutputValueName);
  local_res18[0] = &this->OutputValue;
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

// BindInputs @ 14b037b60

void __thiscall
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::BindInputs
          (TConversionOperator<float,Metasound::FAudioBuffer> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  local_res18[0] = &this->InputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037bf0

void __thiscall
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::BindOutputs
          (TConversionOperator<float,Metasound::FAudioBuffer> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::OutputValueName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// BindInputs @ 14b037f20

void __thiscall
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::BindInputs
          (TConversionOperator<Metasound::FAudioBuffer,float> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  local_res18[0] = &this->InputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037fb0

void __thiscall
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::BindOutputs
          (TConversionOperator<Metasound::FAudioBuffer,float> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&ConversionNodeVertexNames::OutputValueName);
  local_res18[0] = &this->OutputValue;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
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

// TConversionOperator<int,Metasound::FTime> @ 14b04e720

TConversionOperator<int,Metasound::FTime> * __thiscall
Metasound::TConversionOperator<int,Metasound::FTime>::TConversionOperator<int,Metasound::FTime>
          (TConversionOperator<int,Metasound::FTime> *this,FOperatorSettings *param_1,
          TDataReadReference<int> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  
  this->_padding_ = (longlong)&___7__TConversionOperator_HVFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputValue = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->InputValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputValue = &___7__TDataReadReference_H_Metasound__6B_;
  TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
            ((TDataReference<Metasound::FTime> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)&param_2->field_0x10;
  **(double **)&(this->OutputValue).field_0x8 = (double)**(int **)&(this->InputValue).field_0x8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

// TConversionOperator<float,Metasound::FAudioBuffer> @ 14b04e7c0

TConversionOperator<float,Metasound::FAudioBuffer> * __thiscall
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::
TConversionOperator<float,Metasound::FAudioBuffer>
          (TConversionOperator<float,Metasound::FAudioBuffer> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7__TConversionOperator_MVFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->InputValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputValue = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputValue,NewObject,param_1);
  *(undefined ***)&this->OutputValue =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<float,Metasound::FAudioBuffer>::
  GetConvertedValue(**(float **)&(this->InputValue).field_0x8,
                    *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TConversionOperator<float,Metasound::FTime> @ 14b04e860

TConversionOperator<float,Metasound::FTime> * __thiscall
Metasound::TConversionOperator<float,Metasound::FTime>::TConversionOperator<float,Metasound::FTime>
          (TConversionOperator<float,Metasound::FTime> *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  
  this->_padding_ = (longlong)&___7__TConversionOperator_MVFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->InputValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputValue = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
            ((TDataReference<Metasound::FTime> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)&param_2->field_0x10;
  **(double **)&(this->OutputValue).field_0x8 = (double)**(float **)&(this->InputValue).field_0x8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

// TConversionOperator<Metasound::FAudioBuffer,float> @ 14b04e900

TConversionOperator<Metasound::FAudioBuffer,float> * __thiscall
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::
TConversionOperator<Metasound::FAudioBuffer,float>
          (TConversionOperator<Metasound::FAudioBuffer,float> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7__TConversionOperator_VFAudioBuffer_Metasound__M_Metasound__6B_;
  *(undefined ***)&this->InputValue = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->InputValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputValue =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<Metasound::FAudioBuffer,float>::
  GetConvertedValue(*(FAudioBuffer **)&(this->InputValue).field_0x8,
                    *(float **)&(this->OutputValue).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TConversionOperator<Metasound::FTime,int> @ 14b04e9a0

TConversionOperator<Metasound::FTime,int> * __thiscall
Metasound::TConversionOperator<Metasound::FTime,int>::TConversionOperator<Metasound::FTime,int>
          (TConversionOperator<Metasound::FTime,int> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTime> *param_2)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7__TConversionOperator_VFTime_Metasound__H_Metasound__6B_;
  *(undefined ***)&this->InputValue = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputValue = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  TDataReference<int>::TDataReference<int><>((TDataReference<int> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_H_Metasound__6B_;
  **(int **)&(this->OutputValue).field_0x8 = (int)**(double **)&(this->InputValue).field_0x8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// TConversionOperator<Metasound::FTime,float> @ 14b04ea40

TConversionOperator<Metasound::FTime,float> * __thiscall
Metasound::TConversionOperator<Metasound::FTime,float>::TConversionOperator<Metasound::FTime,float>
          (TConversionOperator<Metasound::FTime,float> *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FTime> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  
  this->_padding_ = (longlong)&___7__TConversionOperator_VFTime_Metasound__M_Metasound__6B_;
  *(undefined ***)&this->InputValue = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->InputValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InputValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputValue = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->OutputValue,NewObject);
  *(undefined ***)&this->OutputValue = &___7__TDataWriteReference_M_Metasound__6B_;
  pTVar2 = *(TReferenceControllerBase<0> **)&param_2->field_0x10;
  **(float **)&(this->OutputValue).field_0x8 = (float)**(double **)&(this->InputValue).field_0x8;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

// ~TConversionOperator<int,Metasound::FTime> @ 14b0537f0

void __thiscall
Metasound::TConversionOperator<int,Metasound::FTime>::~TConversionOperator<int,Metasound::FTime>
          (TConversionOperator<int,Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TConversionOperator<float,Metasound::FAudioBuffer> @ 14b053830

void __thiscall
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::
~TConversionOperator<float,Metasound::FAudioBuffer>
          (TConversionOperator<float,Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TConversionOperator<float,Metasound::FTime> @ 14b053870

void __thiscall
Metasound::TConversionOperator<float,Metasound::FTime>::~TConversionOperator<float,Metasound::FTime>
          (TConversionOperator<float,Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TConversionOperator<Metasound::FAudioBuffer,float> @ 14b0538b0

void __thiscall
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::
~TConversionOperator<Metasound::FAudioBuffer,float>
          (TConversionOperator<Metasound::FAudioBuffer,float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TConversionOperator<Metasound::FTime,int> @ 14b0538f0

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,int>::~TConversionOperator<Metasound::FTime,int>
          (TConversionOperator<Metasound::FTime,int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TConversionOperator<Metasound::FTime,float> @ 14b053930

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,float>::~TConversionOperator<Metasound::FTime,float>
          (TConversionOperator<Metasound::FTime,float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b055180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FVertexInterface *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  
  ::FName::FName(&local_res10,L"MetasoundEditor.Graph.Node.Conversion");
  Metasound::TDataReferenceTypeInfo<int>::GetTypeDisplayText();
  Metasound::TDataReferenceTypeInfo<Metasound::FTime>::GetTypeDisplayText();
  pFVar4 = Metasound::GetMetasoundDataTypeString<int>();
  pFVar5 = Metasound::GetMetasoundDataTypeString<Metasound::FTime>();
  pFVar4 = ::FString::FString(&local_28,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_68,pFVar4);
  pFVar4 = ::FString::FString((FString *)&local_88,pFVar5);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_b8.ArrayNum = 2;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_b8.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl((FString *)&local_a8,L"Conversion{0}To{1}",&local_b8);
  TVar7.Reference = (ITextData *)L"";
  if (local_a8.Flags != 0) {
    TVar7.Reference = local_a8.TextData.Reference;
  }
  ::FName::FName(local_res18,(wchar_t *)TVar7.Reference);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_98);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_88.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_88.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_88.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_88.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_98.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_98.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_98.Flags;
  FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar3 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar3 + 1;
  pFVar8 = pFVar8 + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar7 = Metasound::NodeCategories::Conversions.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Conversions.Flags;
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b055470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FVertexInterface *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  
  ::FName::FName(&local_res10,L"MetasoundEditor.Graph.Node.Conversion");
  Metasound::TDataReferenceTypeInfo<float>::GetTypeDisplayText();
  Metasound::TDataReferenceTypeInfo<Metasound::FAudioBuffer>::GetTypeDisplayText();
  pFVar4 = Metasound::GetMetasoundDataTypeString<float>();
  pFVar5 = Metasound::GetMetasoundDataTypeString<Metasound::FAudioBuffer>();
  pFVar4 = ::FString::FString(&local_28,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_68,pFVar4);
  pFVar4 = ::FString::FString((FString *)&local_88,pFVar5);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_b8.ArrayNum = 2;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_b8.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl((FString *)&local_a8,L"Conversion{0}To{1}",&local_b8);
  TVar7.Reference = (ITextData *)L"";
  if (local_a8.Flags != 0) {
    TVar7.Reference = local_a8.TextData.Reference;
  }
  ::FName::FName(local_res18,(wchar_t *)TVar7.Reference);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_98);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_88.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_88.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_88.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_88.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_98.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_98.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_98.Flags;
  FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar3 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar3 + 1;
  pFVar8 = pFVar8 + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar7 = Metasound::NodeCategories::Conversions.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Conversions.Flags;
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b055760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FVertexInterface *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  
  ::FName::FName(&local_res10,L"MetasoundEditor.Graph.Node.Conversion");
  Metasound::TDataReferenceTypeInfo<float>::GetTypeDisplayText();
  Metasound::TDataReferenceTypeInfo<Metasound::FTime>::GetTypeDisplayText();
  pFVar4 = Metasound::GetMetasoundDataTypeString<float>();
  pFVar5 = Metasound::GetMetasoundDataTypeString<Metasound::FTime>();
  pFVar4 = ::FString::FString(&local_28,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_68,pFVar4);
  pFVar4 = ::FString::FString((FString *)&local_88,pFVar5);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_b8.ArrayNum = 2;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_b8.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl((FString *)&local_a8,L"Conversion{0}To{1}",&local_b8);
  TVar7.Reference = (ITextData *)L"";
  if (local_a8.Flags != 0) {
    TVar7.Reference = local_a8.TextData.Reference;
  }
  ::FName::FName(local_res18,(wchar_t *)TVar7.Reference);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_98);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_88.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_88.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_88.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_88.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_98.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_98.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_98.Flags;
  FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar3 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar3 + 1;
  pFVar8 = pFVar8 + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar7 = Metasound::NodeCategories::Conversions.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Conversions.Flags;
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b055a50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FVertexInterface *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  
  ::FName::FName(&local_res10,L"MetasoundEditor.Graph.Node.Conversion");
  Metasound::TDataReferenceTypeInfo<Metasound::FAudioBuffer>::GetTypeDisplayText();
  Metasound::TDataReferenceTypeInfo<float>::GetTypeDisplayText();
  pFVar4 = Metasound::GetMetasoundDataTypeString<Metasound::FAudioBuffer>();
  pFVar5 = Metasound::GetMetasoundDataTypeString<float>();
  pFVar4 = ::FString::FString(&local_28,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_68,pFVar4);
  pFVar4 = ::FString::FString((FString *)&local_88,pFVar5);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_b8.ArrayNum = 2;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_b8.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl((FString *)&local_a8,L"Conversion{0}To{1}",&local_b8);
  TVar7.Reference = (ITextData *)L"";
  if (local_a8.Flags != 0) {
    TVar7.Reference = local_a8.TextData.Reference;
  }
  ::FName::FName(local_res18,(wchar_t *)TVar7.Reference);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_98);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_88.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_88.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_88.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_88.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_98.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_98.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_98.Flags;
  FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar3 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar3 + 1;
  pFVar8 = pFVar8 + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar7 = Metasound::NodeCategories::Conversions.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Conversions.Flags;
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b055d40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FVertexInterface *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  
  ::FName::FName(&local_res10,L"MetasoundEditor.Graph.Node.Conversion");
  Metasound::TDataReferenceTypeInfo<Metasound::FTime>::GetTypeDisplayText();
  Metasound::TDataReferenceTypeInfo<int>::GetTypeDisplayText();
  pFVar4 = Metasound::GetMetasoundDataTypeString<Metasound::FTime>();
  pFVar5 = Metasound::GetMetasoundDataTypeString<int>();
  pFVar4 = ::FString::FString(&local_28,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_68,pFVar4);
  pFVar4 = ::FString::FString((FString *)&local_88,pFVar5);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_b8.ArrayNum = 2;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_b8.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl((FString *)&local_a8,L"Conversion{0}To{1}",&local_b8);
  TVar7.Reference = (ITextData *)L"";
  if (local_a8.Flags != 0) {
    TVar7.Reference = local_a8.TextData.Reference;
  }
  ::FName::FName(local_res18,(wchar_t *)TVar7.Reference);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_98);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_88.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_88.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_88.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_88.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_98.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_98.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_98.Flags;
  FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar3 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar3 + 1;
  pFVar8 = pFVar8 + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar7 = Metasound::NodeCategories::Conversions.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Conversions.Flags;
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b056030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  FVertexInterface *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  
  ::FName::FName(&local_res10,L"MetasoundEditor.Graph.Node.Conversion");
  Metasound::TDataReferenceTypeInfo<Metasound::FTime>::GetTypeDisplayText();
  Metasound::TDataReferenceTypeInfo<float>::GetTypeDisplayText();
  pFVar4 = Metasound::GetMetasoundDataTypeString<Metasound::FTime>();
  pFVar5 = Metasound::GetMetasoundDataTypeString<float>();
  pFVar4 = ::FString::FString(&local_28,pFVar4);
  FStringFormatArg::FStringFormatArg(&local_68,pFVar4);
  pFVar4 = ::FString::FString((FString *)&local_88,pFVar5);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_b8.ArrayNum = 2;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_b8.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl((FString *)&local_a8,L"Conversion{0}To{1}",&local_b8);
  TVar7.Reference = (ITextData *)L"";
  if (local_a8.Flags != 0) {
    TVar7.Reference = local_a8.TextData.Reference;
  }
  ::FName::FName(local_res18,(wchar_t *)TVar7.Reference);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_a8.TextData.Reference);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FText::FText(&local_98);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_88.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_88.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_88.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_88.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_98.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_98.TextData.Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_98.Flags;
  FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,&local_a8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  (__return_storage_ptr__->DisplayStyle).ImageName = local_res10;
  (__return_storage_ptr__->DisplayStyle).bShowName = false;
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  (__return_storage_ptr__->DisplayStyle).bShowInputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowOutputNames = false;
  (__return_storage_ptr__->DisplayStyle).bShowLiterals = true;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar3 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar3 + 1;
  pFVar8 = pFVar8 + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar7 = Metasound::NodeCategories::Conversions.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Conversions.Flags;
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0613e0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TConversionOperator<int,Metasound::FTime>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TConversionOperator<int,Metasound::FTime> *this_00;
  TConversionOperator<int,Metasound::FTime> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  GetDefaultInterface();
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  pTVar2 = (TConversionOperator<int,Metasound::FTime> *)0x0;
  if (this_00 != (TConversionOperator<int,Metasound::FTime> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &___7__TDataReadReference_H_Metasound__6B_;
    pTVar2 = TConversionOperator<int,Metasound::FTime>
                       (this_00,pFVar1,(TDataReadReference<int> *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0614b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TConversionOperator<float,Metasound::FAudioBuffer> *this_00;
  TConversionOperator<float,Metasound::FAudioBuffer> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  GetDefaultInterface();
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  pTVar2 = (TConversionOperator<float,Metasound::FAudioBuffer> *)0x0;
  if (this_00 != (TConversionOperator<float,Metasound::FAudioBuffer> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &___7__TDataReadReference_M_Metasound__6B_;
    pTVar2 = TConversionOperator<float,Metasound::FAudioBuffer>
                       (this_00,pFVar1,(TDataReadReference<float> *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b061580

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TConversionOperator<float,Metasound::FTime>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TConversionOperator<float,Metasound::FTime> *this_00;
  TConversionOperator<float,Metasound::FTime> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  GetDefaultInterface();
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  pTVar2 = (TConversionOperator<float,Metasound::FTime> *)0x0;
  if (this_00 != (TConversionOperator<float,Metasound::FTime> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &___7__TDataReadReference_M_Metasound__6B_;
    pTVar2 = TConversionOperator<float,Metasound::FTime>
                       (this_00,pFVar1,(TDataReadReference<float> *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b061650

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TConversionOperator<Metasound::FAudioBuffer,float> *this_00;
  TConversionOperator<Metasound::FAudioBuffer,float> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  GetDefaultInterface();
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  pTVar2 = (TConversionOperator<Metasound::FAudioBuffer,float> *)0x0;
  if (this_00 != (TConversionOperator<Metasound::FAudioBuffer,float> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pTVar2 = TConversionOperator<Metasound::FAudioBuffer,float>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b061720

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TConversionOperator<Metasound::FTime,int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TConversionOperator<Metasound::FTime,int> *this_00;
  TConversionOperator<Metasound::FTime,int> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  GetDefaultInterface();
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  pTVar2 = (TConversionOperator<Metasound::FTime,int> *)0x0;
  if (this_00 != (TConversionOperator<Metasound::FTime,int> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pTVar2 = TConversionOperator<Metasound::FTime,int>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTime> *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0617f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TConversionOperator<Metasound::FTime,float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TConversionOperator<Metasound::FTime,float> *this_00;
  TConversionOperator<Metasound::FTime,float> *pTVar2;
  FName local_res8;
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  GetDefaultInterface();
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ConversionNodeVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  pTVar2 = (TConversionOperator<Metasound::FTime,float> *)0x0;
  if (this_00 != (TConversionOperator<Metasound::FTime,float> *)0x0) {
    if (local_18 != (TReferenceControllerBase<0> *)0x0) {
      local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
    }
    local_28[0] = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pTVar2 = TConversionOperator<Metasound::FTime,float>
                       (this_00,pFVar1,(TDataReadReference<Metasound::FTime> *)local_28);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetDefaultInterface @ 14b070a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTime> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  int *piVar6;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  FOutputVertexInterface local_130;
  FDataVertexMetadata local_110;
  FDataVertexMetadata local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<Metasound::FTime> local_70;
  TInputDataVertex<int> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::InputDesc);
    atexit(`Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__InputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc);
    atexit(`Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    local_e8.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
        ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                    ::__l2::OutputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::OutputDesc.TextData.Reference,local_138);
    }
    local_e8.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.Flags;
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_70,&ConversionNodeVertexNames::OutputValueName,&local_e8);
    FOutputVertexInterface::FOutputVertexInterface(&local_130);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_130,
               &local_130.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_110.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::InputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
        ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                    ::__l2::InputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::InputDesc.TextData.Reference,local_134);
    }
    local_110.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::InputDesc.Flags;
    FText::FText(&local_110.DisplayName);
    local_110.bIsAdvancedDisplay = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><>
                       (&local_50,&ConversionNodeVertexNames::InputValueName,&local_110);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubInterfaces.ArrayNum = 0;
    local_158.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
               &local_158.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_158,&local_130);
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
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    if (local_110.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_110.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
               local_130.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_130._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_130._padding_);
    }
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b070e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  int *piVar6;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  FOutputVertexInterface local_130;
  FDataVertexMetadata local_110;
  FDataVertexMetadata local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<Metasound::FAudioBuffer> local_70;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                  ::__l2::InputDesc);
    atexit(`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface'::
           __l2::_dynamic_atexit_destructor_for__InputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc);
    atexit(`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface'::
           __l2::_dynamic_atexit_destructor_for__OutputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    local_e8.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
        ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                    ::__l2::OutputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                 ::__l2::OutputDesc.TextData.Reference,local_138);
    }
    local_e8.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.Flags;
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_70,&ConversionNodeVertexNames::OutputValueName,&local_e8);
    FOutputVertexInterface::FOutputVertexInterface(&local_130);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_130,
               &local_130.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_110.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
         ::__l2::InputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
        ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                    ::__l2::InputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                 ::__l2::InputDesc.TextData.Reference,local_134);
    }
    local_110.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
         ::__l2::InputDesc.Flags;
    FText::FText(&local_110.DisplayName);
    local_110.bIsAdvancedDisplay = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_50,&ConversionNodeVertexNames::InputValueName,&local_110);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubInterfaces.ArrayNum = 0;
    local_158.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
               &local_158.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_158,&local_130);
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
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    if (local_110.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_110.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
               local_130.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_130._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_130._padding_);
    }
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface'::
           __l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b0711d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTime> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  int *piVar6;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  FOutputVertexInterface local_130;
  FDataVertexMetadata local_110;
  FDataVertexMetadata local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<Metasound::FTime> local_70;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::InputDesc);
    atexit(`Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__InputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc);
    atexit(`Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    local_e8.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
        ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                    ::__l2::OutputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::OutputDesc.TextData.Reference,local_138);
    }
    local_e8.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.Flags;
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_70,&ConversionNodeVertexNames::OutputValueName,&local_e8);
    FOutputVertexInterface::FOutputVertexInterface(&local_130);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_130,
               &local_130.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_110.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::InputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
        ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                    ::__l2::InputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                 ::__l2::InputDesc.TextData.Reference,local_134);
    }
    local_110.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
         ::__l2::InputDesc.Flags;
    FText::FText(&local_110.DisplayName);
    local_110.bIsAdvancedDisplay = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_50,&ConversionNodeVertexNames::InputValueName,&local_110);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubInterfaces.ArrayNum = 0;
    local_158.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
               &local_158.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_158,&local_130);
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
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    if (local_110.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_110.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
               local_130.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_130._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_130._padding_);
    }
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b071590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  int *piVar6;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  FOutputVertexInterface local_130;
  FDataVertexMetadata local_110;
  FDataVertexMetadata local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<float> local_70;
  TInputDataVertex<Metasound::FAudioBuffer> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                  ::__l2::InputDesc);
    atexit(`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface'::
           __l2::_dynamic_atexit_destructor_for__InputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc);
    atexit(`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface'::
           __l2::_dynamic_atexit_destructor_for__OutputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    local_e8.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
        ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                    ::__l2::OutputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                 ::__l2::OutputDesc.TextData.Reference,local_138);
    }
    local_e8.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.Flags;
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_70,&ConversionNodeVertexNames::OutputValueName,&local_e8);
    FOutputVertexInterface::FOutputVertexInterface(&local_130);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_130,
               &local_130.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_110.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
         ::__l2::InputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
        ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                    ::__l2::InputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                 ::__l2::InputDesc.TextData.Reference,local_134);
    }
    local_110.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
         ::__l2::InputDesc.Flags;
    FText::FText(&local_110.DisplayName);
    local_110.bIsAdvancedDisplay = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_50,&ConversionNodeVertexNames::InputValueName,&local_110);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubInterfaces.ArrayNum = 0;
    local_158.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
               &local_158.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_158,&local_130);
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
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    if (local_110.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_110.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
               local_130.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_130._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_130._padding_);
    }
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface'::
           __l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b071950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  int *piVar6;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  FOutputVertexInterface local_130;
  FDataVertexMetadata local_110;
  FDataVertexMetadata local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<int> local_70;
  TInputDataVertex<Metasound::FTime> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                  ::__l2::InputDesc);
    atexit(`Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__InputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc);
    atexit(`Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    local_e8.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
        ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                    ::__l2::OutputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                 ::__l2::OutputDesc.TextData.Reference,local_138);
    }
    local_e8.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.Flags;
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_70,&ConversionNodeVertexNames::OutputValueName,&local_e8);
    FOutputVertexInterface::FOutputVertexInterface(&local_130);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_130,
               &local_130.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_110.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
         ::__l2::InputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
        ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                    ::__l2::InputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                 ::__l2::InputDesc.TextData.Reference,local_134);
    }
    local_110.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
         ::__l2::InputDesc.Flags;
    FText::FText(&local_110.DisplayName);
    local_110.bIsAdvancedDisplay = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><>
                       (&local_50,&ConversionNodeVertexNames::InputValueName,&local_110);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubInterfaces.ArrayNum = 0;
    local_158.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
               &local_158.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_158,&local_130);
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
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    if (local_110.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_110.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
               local_130.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_130._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_130._padding_);
    }
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b071d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  int *piVar6;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  FOutputVertexInterface local_130;
  FDataVertexMetadata local_110;
  FDataVertexMetadata local_e8;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<float> local_70;
  TInputDataVertex<Metasound::FTime> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                  ::__l2::InputDesc);
    atexit(`Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__InputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FText::FText(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc);
    atexit(`Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__OutputDesc__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((*piVar6 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                 ::__l2::_thread_safe_static_guard_2__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_2__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_2__ == -1)) {
    local_e8.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
        ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                    ::__l2::OutputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                 ::__l2::OutputDesc.TextData.Reference,local_138);
    }
    local_e8.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
         ::__l2::OutputDesc.Flags;
    FText::FText(&local_e8.DisplayName);
    local_e8.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_70,&ConversionNodeVertexNames::OutputValueName,&local_e8);
    FOutputVertexInterface::FOutputVertexInterface(&local_130);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_130,
               &local_130.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_110.Description.TextData.Reference =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
         ::__l2::InputDesc.TextData.Reference;
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
        ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                    ::__l2::InputDesc.TextData.Reference + 8))
                (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                 ::__l2::InputDesc.TextData.Reference,local_134);
    }
    local_110.Description.Flags =
         `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
         ::__l2::InputDesc.Flags;
    FText::FText(&local_110.DisplayName);
    local_110.bIsAdvancedDisplay = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><>
                       (&local_50,&ConversionNodeVertexNames::InputValueName,&local_110);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.SubInterfaces.ArrayNum = 0;
    local_158.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158,
               &local_158.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_158,&local_130);
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
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    if (local_110.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_110.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data,
               local_130.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_130.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_130.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_130._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_130._padding_);
    }
    if (local_e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_2__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b0740f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b074180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>
      ::operator()(local_res8,
                   &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                    ::__l2::Info);
      atexit(`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b074210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0742a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo'::__l2::<lambda_1>
      ::operator()(local_res8,
                   &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                    ::__l2::Info);
      atexit(`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b074330

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b0743c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
          ::__l2::Info;
}

// Reset @ 14b079c70

void __thiscall
Metasound::TConversionOperator<int,Metasound::FTime>::Reset
          (TConversionOperator<int,Metasound::FTime> *this,FResetParams *param_1)

{
  **(double **)&(this->OutputValue).field_0x8 = (double)**(int **)&(this->InputValue).field_0x8;
  return;
}

// Reset @ 14b079c90

void __thiscall
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::Reset
          (TConversionOperator<float,Metasound::FAudioBuffer> *this,FResetParams *param_1)

{
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<float,Metasound::FAudioBuffer>::
  GetConvertedValue(**(float **)&(this->InputValue).field_0x8,
                    *(FAudioBuffer **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079cb0

void __thiscall
Metasound::TConversionOperator<float,Metasound::FTime>::Reset
          (TConversionOperator<float,Metasound::FTime> *this,FResetParams *param_1)

{
  **(double **)&(this->OutputValue).field_0x8 = (double)**(float **)&(this->InputValue).field_0x8;
  return;
}

// Reset @ 14b079cd0

void __thiscall
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::Reset
          (TConversionOperator<Metasound::FAudioBuffer,float> *this,FResetParams *param_1)

{
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<Metasound::FAudioBuffer,float>::
  GetConvertedValue(*(FAudioBuffer **)&(this->InputValue).field_0x8,
                    *(float **)&(this->OutputValue).field_0x8);
  return;
}

// Reset @ 14b079cf0

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,int>::Reset
          (TConversionOperator<Metasound::FTime,int> *this,FResetParams *param_1)

{
  **(int **)&(this->OutputValue).field_0x8 = (int)**(double **)&(this->InputValue).field_0x8;
  return;
}

// Reset @ 14b079d10

void __thiscall
Metasound::TConversionOperator<Metasound::FTime,float>::Reset
          (TConversionOperator<Metasound::FTime,float> *this,FResetParams *param_1)

{
  **(float **)&(this->OutputValue).field_0x8 = (float)**(double **)&(this->InputValue).field_0x8;
  return;
}

