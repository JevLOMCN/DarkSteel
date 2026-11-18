// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// BindInputs @ 14afc42c0

void __thiscall
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::FInputOperator::BindInputs
          (FInputOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<Metasound::FStereoAudioFormat> *local_res8 [4];
  FName *local_38;
  TDataReadReference<Metasound::FStereoAudioFormat> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FStereoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_res8[0] = &this->Stereo;
  local_38 = &this->InputName;
  local_20 = local_res8;
  local_10 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res8[0];
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afc4320

void __thiscall
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::FInputOperator::BindOutputs
          (FInputOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&StereoAudioFormatVertexKeys::LeftChannelVertexName);
  local_res18 = &this->Left;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&StereoAudioFormatVertexKeys::RightChannelVertexName);
  local_res18 = &this->Right;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// BindInputs @ 14afca760

void __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperator::BindInputs
          (FInputOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<Metasound::FMonoAudioFormat> *local_res8 [4];
  FName *local_38;
  TDataReadReference<Metasound::FMonoAudioFormat> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FMonoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_res8[0] = &this->Mono;
  local_38 = &this->InputName;
  local_20 = local_res8;
  local_10 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res8[0];
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afca7c0

void __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperator::BindOutputs
          (FInputOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataReadReference<Metasound::FAudioBuffer> *local_res8 [4];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  FName **local_10;
  
  local_res8[0] = &this->Center;
  local_38 = &this->InputName;
  local_20 = local_res8;
  local_10 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res8[0];
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// GetExecuteFunction @ 14afca820

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperator::GetExecuteFunction
          (FInputOperator *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afca830

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperator::GetResetFunction
          (FInputOperator *this)

{
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// FInputOperator @ 14aff9860

FInputOperator * __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperator::FInputOperator
          (FInputOperator *this,FName *param_1,TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TDataReadReference<Metasound::FMonoAudioFormat> *param_3)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)&___7FInputOperator___TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
  this->InputName = *param_1;
  *(undefined ***)&this->Center = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Center).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Center).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Center = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->Mono = &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Mono).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Mono).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Mono =
       &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  return this;
}

// FInputOperator @ 14aff9910

FInputOperator * __thiscall
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::FInputOperator::FInputOperator
          (FInputOperator *this,FName *param_1,TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TDataReadReference<Metasound::FAudioBuffer> *param_3,
          TDataReadReference<Metasound::FStereoAudioFormat> *param_4)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)&___7FInputOperator___TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_
  ;
  this->InputName = *param_1;
  *(undefined ***)&this->Left = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Left).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Left).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Left = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->Right = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Right).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Right).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Right = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->Stereo =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Stereo).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->Stereo).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Stereo =
       &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_3->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_4->field_0x10);
  return this;
}

// ~FInputOperator @ 14affcab0

void __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperator::~FInputOperator
          (FInputOperator *this)

{
  this->_padding_ =
       (longlong)&___7FInputOperator___TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Mono).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Center).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FInputOperator @ 14affcaf0

void __thiscall
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::FInputOperator::~FInputOperator
          (FInputOperator *this)

{
  this->_padding_ =
       (longlong)&___7FInputOperator___TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Stereo).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Right).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Left).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

