// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 29

// BindInputs @ 14afc5970

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::BindInputs
          (TAbsNodeOperator<Metasound::FAudioBuffer> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  local_res18[0] = &this->Input;
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

// BindOutputs @ 14afc5a60

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::BindOutputs
          (TAbsNodeOperator<Metasound::FAudioBuffer> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::OutputValueName);
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

// BindInputs @ 14afc67d0

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FTime>::BindInputs
          (TAbsNodeOperator<Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  local_res18[0] = &this->Input;
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

// BindOutputs @ 14afc6860

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FTime>::BindOutputs
          (TAbsNodeOperator<Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTime> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTime> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTime> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::OutputValueName);
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

// BindInputs @ 14afc6ae0

void __thiscall
Metasound::TAbsNodeOperator<float>::BindInputs
          (TAbsNodeOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  local_res18[0] = &this->Input;
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

// BindOutputs @ 14afc6b70

void __thiscall
Metasound::TAbsNodeOperator<float>::BindOutputs
          (TAbsNodeOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::OutputValueName);
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

// BindInputs @ 14afc6df0

void __thiscall
Metasound::TAbsNodeOperator<int>::BindInputs
          (TAbsNodeOperator<int> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<int> *local_res18 [2];
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  local_res18[0] = &this->Input;
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

// BindOutputs @ 14afc6e80

void __thiscall
Metasound::TAbsNodeOperator<int>::BindOutputs
          (TAbsNodeOperator<int> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<int> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<int> *local_30;
  code *local_28;
  TDataWriteReference<int> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AbsVertexNames::OutputValueName);
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

// ~TAbsNodeOperator<int> @ 14affb460

void __thiscall
Metasound::TAbsNodeOperator<int>::~TAbsNodeOperator<int>(TAbsNodeOperator<int> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Input).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TAbsNodeOperator<float> @ 14affb4a0

void __thiscall
Metasound::TAbsNodeOperator<float>::~TAbsNodeOperator<float>(TAbsNodeOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Input).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TAbsNodeOperator<Metasound::FAudioBuffer> @ 14affb4e0

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::~TAbsNodeOperator<Metasound::FAudioBuffer>
          (TAbsNodeOperator<Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Input).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TAbsNodeOperator<Metasound::FTime> @ 14affb520

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FTime>::~TAbsNodeOperator<Metasound::FTime>
          (TAbsNodeOperator<Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Input).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// CreateOperator @ 14b00d2b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAbsNodeOperator<int>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  int iVar3;
  FName local_res8;
  undefined1 local_28 [16];
  INode local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_28,&local_res8,pFVar1);
  pIVar2 = ::operator_new(0x48);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TAbsNodeOperator_H_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar2[2] = (INode)local_28._8_8_;
    pIVar2[3] = local_18;
    if (local_18 != (INode)0x0) {
      *(int *)((longlong)local_18 + 8) = *(int *)((longlong)local_18 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    TDataReference<int>::TDataReference<int><>((TDataReference<int> *)(pIVar2 + 5),NewObject);
    pIVar2[5] = (INode)&___7__TDataWriteReference_H_Metasound__6B_;
    iVar3 = -*(int *)pIVar2[2];
    if (iVar3 < 0) {
      iVar3 = *(int *)pIVar2[2];
    }
    *(int *)pIVar2[6] = iVar3;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00d3a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAbsNodeOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_28 [16];
  INode local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  pIVar2 = ::operator_new(0x48);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TAbsNodeOperator_M_Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[2] = (INode)local_28._8_8_;
    pIVar2[3] = local_18;
    if (local_18 != (INode)0x0) {
      *(int *)((longlong)local_18 + 8) = *(int *)((longlong)local_18 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    TDataReference<float>::TDataReference<float><>((TDataReference<float> *)(pIVar2 + 5),NewObject);
    pIVar2[5] = (INode)&___7__TDataWriteReference_M_Metasound__6B_;
    *(uint *)pIVar2[6] = *(uint *)pIVar2[2] & __xmm_7fffffff7fffffff7fffffff7fffffff;
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00d490

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TAbsNodeOperator<Metasound::FAudioBuffer> *this_00;
  FName local_res8;
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  if (this_00 == (TAbsNodeOperator<Metasound::FAudioBuffer> *)0x0) {
    this_00 = (TAbsNodeOperator<Metasound::FAudioBuffer> *)0x0;
  }
  else {
    this_00->_padding_ = (longlong)&___7__TAbsNodeOperator_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->Input = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
    ;
    *(undefined8 *)&(this_00->Input).field_0x8 = local_38._8_8_;
    *(undefined8 *)&(this_00->Input).field_0x10 = local_38._16_8_;
    if ((TReferenceControllerBase<0> *)local_38._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_38._16_8_ + 8) = *(int *)(local_38._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->Input =
         &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->OutputValue,NewObject,pFVar1);
    *(undefined ***)&this_00->OutputValue =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    GetAbs(this_00);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00d580

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAbsNodeOperator<Metasound::FTime>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  INode *pIVar2;
  FName local_res8;
  undefined1 local_28 [16];
  INode local_18;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AbsVertexNames::InputValueName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_28,&local_res8,pFVar1);
  pIVar2 = ::operator_new(0x48);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *pIVar2 = (INode)&___7__TAbsNodeOperator_VFTime_Metasound___Metasound__6B_;
    pIVar2[1] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar2[2] = (INode)local_28._8_8_;
    pIVar2[3] = local_18;
    if (local_18 != (INode)0x0) {
      *(int *)((longlong)local_18 + 8) = *(int *)((longlong)local_18 + 8) + 1;
    }
    pIVar2[1] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)(pIVar2 + 5),NewObject);
    pIVar2[5] = (INode)&___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    *(ulonglong *)pIVar2[6] =
         CONCAT44((uint)((ulonglong)*(undefined8 *)pIVar2[2] >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                  (uint)*(undefined8 *)pIVar2[2] & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  param_1->Node = pIVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_18);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetAbs @ 14b0218e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetAbs
          (TAbsNodeOperator<Metasound::FAudioBuffer> *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  puVar3 = *(undefined8 **)&(this->OutputValue).field_0x8;
  puVar4 = *(undefined8 **)&(this->Input).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(puVar3 + 1);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != iVar1)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar5 = (float *)*puVar3;
  if (iVar1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)(puVar3 + 1);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar6 = (float *)*puVar4;
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar2;
  local_28.DataPtr = pfVar5;
  local_18.DataPtr = pfVar6;
  Audio::ArrayAbs(&local_18,&local_28);
  return;
}

// GetDefaultInterface @ 14b023650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TAbsNodeOperator<int>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<int> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_128 [32];
  FInputVertexInterface local_f8;
  FOutputVertexInterface local_d8;
  FOutputVertexInterfaceDeclarationBuilder local_b8;
  FInputVertexInterfaceDeclarationBuilder local_90;
  TOutputDataVertex<int> local_68;
  TInputDataVertex<int> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<int>::TOutputDataVertex<int><>
                       (&local_68,&AbsVertexNames::OutputValueName,&FDataVertexMetadata::EmptyBasic)
    ;
    FOutputVertexInterface::FOutputVertexInterface(&local_d8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_b8,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_d8,
               &local_d8.SubInterfaces);
    if ((local_b8.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
                 &(local_b8.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_b8,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_b8);
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><>
                       (&local_48,&AbsVertexNames::InputValueName,&FDataVertexMetadata::EmptyBasic);
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.SubInterfaces.ArrayNum = 0;
    local_f8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_90,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8,
               &local_f8.SubInterfaces);
    if ((local_90.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_90.Vertices)->AllocatorInstance,(local_90.Vertices)->ArrayNum,
                 &(local_90.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_90,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_90);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_f8,&local_d8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
               local_f8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
    if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f8._padding_);
    }
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TAbsNodeOperator<int>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b0238e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TAbsNodeOperator<float>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_128 [32];
  FInputVertexInterface local_f8;
  FOutputVertexInterface local_d8;
  FOutputVertexInterfaceDeclarationBuilder local_b8;
  FInputVertexInterfaceDeclarationBuilder local_90;
  TOutputDataVertex<float> local_68;
  TInputDataVertex<float> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_68,&AbsVertexNames::OutputValueName,&FDataVertexMetadata::EmptyBasic)
    ;
    FOutputVertexInterface::FOutputVertexInterface(&local_d8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_b8,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_d8,
               &local_d8.SubInterfaces);
    if ((local_b8.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
                 &(local_b8.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_b8,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_b8);
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_48,&AbsVertexNames::InputValueName,&FDataVertexMetadata::EmptyBasic);
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.SubInterfaces.ArrayNum = 0;
    local_f8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_90,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8,
               &local_f8.SubInterfaces);
    if ((local_90.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_90.Vertices)->AllocatorInstance,(local_90.Vertices)->ArrayNum,
                 &(local_90.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_90,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_90);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_f8,&local_d8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
               local_f8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
    if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f8._padding_);
    }
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TAbsNodeOperator<float>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b023b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_128 [32];
  FInputVertexInterface local_f8;
  FOutputVertexInterface local_d8;
  FOutputVertexInterfaceDeclarationBuilder local_b8;
  FInputVertexInterfaceDeclarationBuilder local_90;
  TOutputDataVertex<Metasound::FAudioBuffer> local_68;
  TInputDataVertex<Metasound::FAudioBuffer> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_68,&AbsVertexNames::OutputValueName,&FDataVertexMetadata::EmptyBasic)
    ;
    FOutputVertexInterface::FOutputVertexInterface(&local_d8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_b8,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_d8,
               &local_d8.SubInterfaces);
    if ((local_b8.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
                 &(local_b8.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_b8,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_b8);
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_48,&AbsVertexNames::InputValueName,&FDataVertexMetadata::EmptyBasic);
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.SubInterfaces.ArrayNum = 0;
    local_f8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_90,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8,
               &local_f8.SubInterfaces);
    if ((local_90.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_90.Vertices)->AllocatorInstance,(local_90.Vertices)->ArrayNum,
                 &(local_90.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_90,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_90);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_f8,&local_d8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
               local_f8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
    if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f8._padding_);
    }
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b023e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTime> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_128 [32];
  FInputVertexInterface local_f8;
  FOutputVertexInterface local_d8;
  FOutputVertexInterfaceDeclarationBuilder local_b8;
  FInputVertexInterfaceDeclarationBuilder local_90;
  TOutputDataVertex<Metasound::FTime> local_68;
  TInputDataVertex<Metasound::FTime> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FTime>::TOutputDataVertex<Metasound::FTime><>
                       (&local_68,&AbsVertexNames::OutputValueName,&FDataVertexMetadata::EmptyBasic)
    ;
    FOutputVertexInterface::FOutputVertexInterface(&local_d8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_b8,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_d8,
               &local_d8.SubInterfaces);
    if ((local_b8.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_b8.Vertices)->AllocatorInstance,(local_b8.Vertices)->ArrayNum,
                 &(local_b8.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_b8,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_b8);
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><>
                       (&local_48,&AbsVertexNames::InputValueName,&FDataVertexMetadata::EmptyBasic);
    local_f8._padding_ = 0;
    local_f8._padding_ = 0;
    local_f8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.SubInterfaces.ArrayNum = 0;
    local_f8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_90,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_f8,
               &local_f8.SubInterfaces);
    if ((local_90.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_90.Vertices)->AllocatorInstance,(local_90.Vertices)->ArrayNum,
                 &(local_90.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_90,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_90);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_f8,&local_d8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
               local_f8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
    if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_f8._padding_);
    }
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
               local_d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
    atexit(`Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b026360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<int>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,L"Abs");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundAbsNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TAbsNodeOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<int>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b026490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<float>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,L"Abs");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundAbsNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TAbsNodeOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0265c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,L"Abs");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundAbsNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0266f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)

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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
      local_res10[0] = *pFVar1;
      ::FName::FName(&local_res8,L"Abs");
      FText::FText(&local_68);
      FText::FText(&local_78);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_58,pFVar2);
      MetasoundAbsNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_res8,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAbsNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b02f1d0

void __thiscall
Metasound::TAbsNodeOperator<int>::Reset(TAbsNodeOperator<int> *this,FResetParams *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)&(this->Input).field_0x8;
  iVar2 = -*piVar1;
  if (iVar2 < 0) {
    iVar2 = *piVar1;
  }
  **(int **)&(this->OutputValue).field_0x8 = iVar2;
  return;
}

// Reset @ 14b02f1f0

void __thiscall
Metasound::TAbsNodeOperator<float>::Reset(TAbsNodeOperator<float> *this,FResetParams *param_1)

{
  **(uint **)&(this->OutputValue).field_0x8 =
       **(uint **)&(this->Input).field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff;
  return;
}

// Reset @ 14b02f210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>::Reset
          (TAbsNodeOperator<Metasound::FAudioBuffer> *this,FResetParams *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<float,int> TStack_28;
  TArrayView<float_const_,int> TStack_18;
  
  puVar3 = *(undefined8 **)&(this->OutputValue).field_0x8;
  puVar4 = *(undefined8 **)&(this->Input).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(puVar3 + 1);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != iVar1)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar5 = (float *)*puVar3;
  if (iVar1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)(puVar3 + 1);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar6 = (float *)*puVar4;
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TStack_28._12_4_ = uStack_3c;
  TStack_28.ArrayNum = iVar1;
  TStack_18._12_4_ = uStack_2c;
  TStack_18.ArrayNum = iVar2;
  TStack_28.DataPtr = pfVar5;
  TStack_18.DataPtr = pfVar6;
  Audio::ArrayAbs(&TStack_18,&TStack_28);
  return;
}

// Reset @ 14b02f220

void __thiscall
Metasound::TAbsNodeOperator<Metasound::FTime>::Reset
          (TAbsNodeOperator<Metasound::FTime> *this,FResetParams *param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)&(this->Input).field_0x8;
  **(undefined8 **)&(this->OutputValue).field_0x8 =
       CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  return;
}

