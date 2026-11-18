// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 275

// BindInputs @ 14afc3720

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<bool> *local_res8;
  FName *local_38;
  TDataReadReference<bool> *local_30;
  code *local_28;
  TDataReadReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afc37a0

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::FMonoAudioFormat> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::FMonoAudioFormat> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FMonoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd04f0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd0570

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd0fb0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd1030

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd2690

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd2710

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd3d80

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd3e00

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd6f90

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd7010

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd8cd0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd8d50

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afd9e80

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<float> *local_res8;
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afd9f10

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::FStereoAudioFormat> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::FStereoAudioFormat> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FStereoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,Metasound::FStereoAudioFormat>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afda420

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<int> *local_res8;
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afda4a0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::FStereoAudioFormat> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::FStereoAudioFormat> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FStereoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::FStereoAudioFormat>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afda7b0

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<bool> *local_res8;
  FName *local_38;
  TDataReadReference<bool> *local_30;
  code *local_28;
  TDataReadReference<bool> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afda830

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::FStereoAudioFormat> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::FStereoAudioFormat> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FStereoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FStereoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afdcf80

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<float> *local_res8;
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afdd020

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::FMonoAudioFormat> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::FMonoAudioFormat> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FMonoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<float,Metasound::FMonoAudioFormat>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14afde7b0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::BindInputs
          (FConverterOperator *this,FInputVertexInterfaceData *param_1)

{
  TDataReadReference<int> *local_res8;
  FName *local_38;
  TDataReadReference<int> *local_30;
  code *local_28;
  TDataReadReference<int> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = &this->FromData;
  local_30 = &this->FromData;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14afde830

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::BindOutputs
          (FConverterOperator *this,FOutputVertexInterfaceData *param_1)

{
  TDataWriteReference<Metasound::FMonoAudioFormat> *local_res8;
  FName *local_38;
  TDataWriteReference<Metasound::FMonoAudioFormat> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FMonoAudioFormat> **local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::FMonoAudioFormat>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FMonoAudioFormat>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = &this->ToData;
  local_30 = &this->ToData;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14aff88a0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8960

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8a20

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<int> *param_1,
                  TDataWriteReference<Metasound::FMonoAudioFormat> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_HVFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8ae0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<int> *param_1,
                  TDataWriteReference<Metasound::FStereoAudioFormat> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_HVFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->ToData =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8ba0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<float> *param_1,
                  TDataWriteReference<Metasound::FMonoAudioFormat> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_MVFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8c60

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<float> *param_1,
                  TDataWriteReference<Metasound::FStereoAudioFormat> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_MVFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ToData =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8d20

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8de0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8ea0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_1,
          TDataWriteReference<float> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__M_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  pTVar2 = *(TReferenceControllerBase<0> **)&param_1->field_0x10;
  **(float **)((longlong)this + 0x30) = (float)**(int **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff8f60

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *param_1,
          TDataWriteReference<bool> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___N_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference__N_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(bool *)*(undefined8 *)((longlong)this + 0x30) = **(int **)((longlong)this + 0x10) != 0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff9020

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<bool> *param_1,
                  TDataWriteReference<Metasound::FMonoAudioFormat> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode__NVFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined ***)&this->FromData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->ToData = &___7__TDataReference_VFMonoAudioFormat_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14aff90e0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::
FConverterOperator(FConverterOperator *this,TDataReadReference<bool> *param_1,
                  TDataWriteReference<Metasound::FStereoAudioFormat> *param_2)

{
  longlong lVar1;
  
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode__NVFStereoAudioFormat_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->FromData = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->FromData).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)&(this->FromData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FromData = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->ToData =
       &___7__TDataReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ToData).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->ToData).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ToData =
       &___7__TDataWriteReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
  this->bHasLoggedInvalidEnum = false;
  this->PreviousIntValueForEnumConversion = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14affc630

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc670

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc6b0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_HVFMonoAudioFormat_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc6f0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_HVFStereoAudioFormat_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc730

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_MVFMonoAudioFormat_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc770

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode_MVFStereoAudioFormat_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc7b0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc7f0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc830

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound__M_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc870

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___N_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc8b0

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode__NVFMonoAudioFormat_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14affc8f0

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::
~FConverterOperator(FConverterOperator *this)

{
  this->_padding_ =
       (longlong)
       &___7FConverterOperator___TAutoConverterNode__NVFStereoAudioFormat_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ToData).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FromData).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b01ee70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::EBandSplitterFilterOrder> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::EBandSplitterFilterOrder,1> *pTVar4;
  undefined1 *this_01;
  EBandSplitterFilterOrder EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int> local_28;
  
  EVar5 = **(EBandSplitterFilterOrder **)((longlong)this + 0x10);
  if (EVar5 != *(EBandSplitterFilterOrder *)((longlong)this + 0x4c)) {
    *(EBandSplitterFilterOrder *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::EBandSplitterFilterOrder>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b01eebd:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = FourPole;
      this_01 = local_res10;
LAB_14b01ef6a:
      pTVar4 = TEnum<enum_Metasound::EBandSplitterFilterOrder,1>::
               TEnum<enum_Metasound::EBandSplitterFilterOrder,1>(this_01,EVar5);
      **(EBandSplitterFilterOrder **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b01ef6a;
      }
      goto LAB_14b01eebd;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b01ef90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Audio::EBiquadFilter::Type> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Audio::EBiquadFilter::Type,0> *pTVar4;
  undefined1 *this_01;
  Type TVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int> local_28;
  
  TVar5 = **(Type **)((longlong)this + 0x10);
  if (TVar5 != *(Type *)((longlong)this + 0x4c)) {
    *(Type *)((longlong)this + 0x4c) = TVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Audio::EBiquadFilter::Type>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b01efdd:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      TVar5 = Lowpass;
      this_01 = local_res10;
LAB_14b01f087:
      pTVar4 = TEnum<enum_Audio::EBiquadFilter::Type,0>::TEnum<enum_Audio::EBiquadFilter::Type,0>
                         (this_01,TVar5);
      **(Type **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == TVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b01f087;
      }
      goto LAB_14b01efdd;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b01f0b0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  TStaticChannelAudioFormat<1> local_48;
  
  TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
            (&local_48,**(int **)&(this->FromData).field_0x8);
  FMonoAudioFormat::operator=
            (*(FMonoAudioFormat **)&(this->ToData).field_0x8,(FMonoAudioFormat *)&local_48);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             local_48.ReadableBufferStorage.AllocatorInstance.Data,
             local_48.ReadableBufferStorage.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)
      local_48.ReadableBufferStorage.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.ReadableBufferStorage.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             local_48.WritableBufferStorage.AllocatorInstance.Data,
             local_48.WritableBufferStorage.ArrayNum);
  if ((TDataWriteReference<Metasound::FAudioBuffer> *)
      local_48.WritableBufferStorage.AllocatorInstance.Data !=
      (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.WritableBufferStorage.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 14b01f120

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  TStaticChannelAudioFormat<2> local_48;
  
  TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
            (&local_48,**(int **)&(this->FromData).field_0x8);
  FStereoAudioFormat::operator=
            (*(FStereoAudioFormat **)&(this->ToData).field_0x8,(FStereoAudioFormat *)&local_48);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             local_48.ReadableBufferStorage.AllocatorInstance.Data,
             local_48.ReadableBufferStorage.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)
      local_48.ReadableBufferStorage.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.ReadableBufferStorage.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             local_48.WritableBufferStorage.AllocatorInstance.Data,
             local_48.WritableBufferStorage.ArrayNum);
  if ((TDataWriteReference<Metasound::FAudioBuffer> *)
      local_48.WritableBufferStorage.AllocatorInstance.Data !=
      (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.WritableBufferStorage.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 14b01f190

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  TStaticChannelAudioFormat<1> local_48;
  
  TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
            (&local_48,(int)**(float **)&(this->FromData).field_0x8);
  FMonoAudioFormat::operator=
            (*(FMonoAudioFormat **)&(this->ToData).field_0x8,(FMonoAudioFormat *)&local_48);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             local_48.ReadableBufferStorage.AllocatorInstance.Data,
             local_48.ReadableBufferStorage.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)
      local_48.ReadableBufferStorage.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.ReadableBufferStorage.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             local_48.WritableBufferStorage.AllocatorInstance.Data,
             local_48.WritableBufferStorage.ArrayNum);
  if ((TDataWriteReference<Metasound::FAudioBuffer> *)
      local_48.WritableBufferStorage.AllocatorInstance.Data !=
      (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.WritableBufferStorage.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 14b01f200

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  TStaticChannelAudioFormat<2> local_48;
  
  TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
            (&local_48,(int)**(float **)&(this->FromData).field_0x8);
  FStereoAudioFormat::operator=
            (*(FStereoAudioFormat **)&(this->ToData).field_0x8,(FStereoAudioFormat *)&local_48);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             local_48.ReadableBufferStorage.AllocatorInstance.Data,
             local_48.ReadableBufferStorage.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)
      local_48.ReadableBufferStorage.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.ReadableBufferStorage.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             local_48.WritableBufferStorage.AllocatorInstance.Data,
             local_48.WritableBufferStorage.ArrayNum);
  if ((TDataWriteReference<Metasound::FAudioBuffer> *)
      local_48.WritableBufferStorage.AllocatorInstance.Data !=
      (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.WritableBufferStorage.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 14b01f270

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  TStaticChannelAudioFormat<1> local_48;
  
  TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
            (&local_48,(uint)**(byte **)&(this->FromData).field_0x8);
  FMonoAudioFormat::operator=
            (*(FMonoAudioFormat **)&(this->ToData).field_0x8,(FMonoAudioFormat *)&local_48);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             local_48.ReadableBufferStorage.AllocatorInstance.Data,
             local_48.ReadableBufferStorage.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)
      local_48.ReadableBufferStorage.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.ReadableBufferStorage.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             local_48.WritableBufferStorage.AllocatorInstance.Data,
             local_48.WritableBufferStorage.ArrayNum);
  if ((TDataWriteReference<Metasound::FAudioBuffer> *)
      local_48.WritableBufferStorage.AllocatorInstance.Data !=
      (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.WritableBufferStorage.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 14b01f2e0

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
          (FConverterOperator *this)

{
  TStaticChannelAudioFormat<2> local_48;
  
  TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
            (&local_48,(uint)**(byte **)&(this->FromData).field_0x8);
  FStereoAudioFormat::operator=
            (*(FStereoAudioFormat **)&(this->ToData).field_0x8,(FStereoAudioFormat *)&local_48);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             local_48.ReadableBufferStorage.AllocatorInstance.Data,
             local_48.ReadableBufferStorage.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)
      local_48.ReadableBufferStorage.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.ReadableBufferStorage.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             local_48.WritableBufferStorage.AllocatorInstance.Data,
             local_48.WritableBufferStorage.ArrayNum);
  if ((TDataWriteReference<Metasound::FAudioBuffer> *)
      local_48.WritableBufferStorage.AllocatorInstance.Data !=
      (TDataWriteReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_48.WritableBufferStorage.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14b0309f0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b030a10

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b030a30

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// Reset @ 14b030a50

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// Reset @ 14b030a70

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// Reset @ 14b030a90

void __thiscall
Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// Reset @ 14b030ab0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b030ad0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b030af0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(float **)((longlong)this + 0x30) = (float)**(int **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b030b20

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(bool *)*(undefined8 *)((longlong)this + 0x30) = **(int **)((longlong)this + 0x10) != 0;
  return;
}

// Reset @ 14b030b50

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// Reset @ 14b030b70

void __thiscall
Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::Reset
          (FConverterOperator *this,FResetParams *param_1)

{
  this->PreviousIntValueForEnumConversion = 0;
  this->bHasLoggedInvalidEnum = false;
  Execute(this);
  return;
}

// BindInputs @ 14b036ab0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b036b30

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b036f80

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037000

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b037d80

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b037e00

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b038320

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0383a0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14b0521a0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b052260

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b052320

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_1,
          TDataWriteReference<float> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  pTVar2 = *(TReferenceControllerBase<0> **)&param_1->field_0x10;
  **(float **)((longlong)this + 0x30) = (float)**(int **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0523e0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *param_1,
          TDataWriteReference<bool> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference__N_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(bool *)*(undefined8 *)((longlong)this + 0x30) = **(int **)((longlong)this + 0x10) != 0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14b054900

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b054940

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b054980

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0549c0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b06a7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Audio::EDynamicFilterType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Audio::EDynamicFilterType,0> *pTVar4;
  undefined1 *this_01;
  EDynamicFilterType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int> local_28;
  
  EVar5 = **(EDynamicFilterType **)((longlong)this + 0x10);
  if (EVar5 != *(EDynamicFilterType *)((longlong)this + 0x4c)) {
    *(EDynamicFilterType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Audio::EDynamicFilterType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b06a83d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Bell;
      this_01 = local_res10;
LAB_14b06a8e7:
      pTVar4 = TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>
                         (this_01,EVar5);
      **(EDynamicFilterType **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b06a8e7;
      }
      goto LAB_14b06a83d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Reset @ 14b07abd0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b07abf0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b07ac10

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(float **)((longlong)this + 0x30) = (float)**(int **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b07ac40

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(bool *)*(undefined8 *)((longlong)this + 0x30) = **(int **)((longlong)this + 0x10) != 0;
  return;
}

// BindInputs @ 14b084e70

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
             ::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b084ef0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
             ::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b085d20

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
             ::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b085da0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
             ::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b086e60

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b086ee0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0875a0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b087640

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetOutputName()
  ;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b088850

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::GetInputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0888f0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::GetOutputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b089580

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetInputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b089600

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b08aaa0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b08ab20

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b08b9b0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b08ba30

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14b0b2c70

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataWriteReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0b2d30

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0b2df0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataWriteReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0b2eb0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *param_2
          )

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0b2f70

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0b3030

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_1
          ,TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0b30f0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator
::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EKneeMode,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b0b31b0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14b0b6050

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0b6090

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0b60d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0b6110

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0b6150

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0b6190

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0b61d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator
::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b0b6210

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b0d28d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Audio::Grain::EEnvelope> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Audio::Grain::EEnvelope,0> *pTVar4;
  undefined1 *this_01;
  EEnvelope EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int> local_28;
  
  EVar5 = **(EEnvelope **)((longlong)this + 0x10);
  if (EVar5 != *(EEnvelope *)((longlong)this + 0x4c)) {
    *(EEnvelope *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Audio::Grain::EEnvelope>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b0d291d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Gaussian;
      this_01 = local_res10;
LAB_14b0d29c7:
      pTVar4 = TEnum<enum_Audio::Grain::EEnvelope,0>::TEnum<enum_Audio::Grain::EEnvelope,0>
                         (this_01,EVar5);
      **(EEnvelope **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b0d29c7;
      }
      goto LAB_14b0d291d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b0d29f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::EEnvelopePeakMode> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::EEnvelopePeakMode,0> *pTVar4;
  undefined1 *this_01;
  EEnvelopePeakMode EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int> local_28;
  
  EVar5 = **(EEnvelopePeakMode **)((longlong)this + 0x10);
  if (EVar5 != *(EEnvelopePeakMode *)((longlong)this + 0x4c)) {
    *(EEnvelopePeakMode *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::EEnvelopePeakMode>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b0d2a3d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Peak;
      this_01 = local_res10;
LAB_14b0d2ae7:
      pTVar4 = TEnum<enum_Metasound::EEnvelopePeakMode,0>::
               TEnum<enum_Metasound::EEnvelopePeakMode,0>(this_01,EVar5);
      **(EEnvelopePeakMode **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b0d2ae7;
      }
      goto LAB_14b0d2a3d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b0d2b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FConverterOperator::Execute(void *this)

{
  FText *this_00;
  TEnum<Metasound::EKneeMode,0> *pTVar1;
  EKneeMode EVar2;
  int local_res8 [2];
  
  EVar2 = **(EKneeMode **)((longlong)this + 0x10);
  if (EVar2 != *(EKneeMode *)((longlong)this + 0x4c)) {
    *(EKneeMode *)((longlong)this + 0x4c) = EVar2;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnum<enum_Metasound::EKneeMode,0>::ToName((EKneeMode)local_res8);
  if (local_res8[0] == -1) {
    if (*(char *)((longlong)this + 0x48) == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
        FText::ToString(this_00);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EKneeMode,0>_>::FConverterOperator::Execute(void)___ptr64'
                    ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      *(undefined1 *)((longlong)this + 0x48) = 1;
    }
    EVar2 = Hard;
  }
  pTVar1 = TEnum<enum_Metasound::EKneeMode,0>::TEnum<enum_Metasound::EKneeMode,0>(local_res8,EVar2);
  **(EKneeMode **)((longlong)this + 0x30) = pTVar1->EnumValue;
  return;
}

// Execute @ 14b0d2bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::ELowFrequencyNoiseInterpType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *pTVar4;
  undefined1 *this_01;
  ELowFrequencyNoiseInterpType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int> local_28;
  
  EVar5 = **(ELowFrequencyNoiseInterpType **)((longlong)this + 0x10);
  if (EVar5 != *(ELowFrequencyNoiseInterpType *)((longlong)this + 0x4c)) {
    *(ELowFrequencyNoiseInterpType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::ELowFrequencyNoiseInterpType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b0d2c0d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Cubic;
      this_01 = local_res10;
LAB_14b0d2cba:
      pTVar4 = TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>::
               TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>(this_01,EVar5);
      **(ELowFrequencyNoiseInterpType **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b0d2cba;
      }
      goto LAB_14b0d2c0d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Reset @ 14b0e50b0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b0e50d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b0e50f0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b0e5110

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
::FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b0e5130

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b0e5150

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b0e5170

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator
::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b0e5190

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>
::FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// BindInputs @ 14b0e7f10

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetInputName()
  ;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0e7f90

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetOutputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0ea780

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0ea890

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0ebbb0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0ebc30

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0ed830

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0ed9d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0ef450

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0ef4e0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b0ff6d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b0ff840

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b101750

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1017d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b105ff0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b106070

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1079a0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b107a20

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b109e20

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b109ea0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b10b060

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b10b0e0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b10cb20

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b10cba0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b10d9f0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b10db60

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b10f980

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b10fa00

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b111050

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1110d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1128e0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b112960

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::GetOutputName()
  ;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14b13e940

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13ea00

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataWriteReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13eac0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13eb80

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13ec40

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13ed00

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13edc0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13ee80

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_1
          ,TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13ef40

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::ENoiseType,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13f000

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13f0c0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13f180

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13f240

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13f300

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13f3c0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_1,
          TDataWriteReference<float> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<0> *pTVar2;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__M_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  pTVar2 = *(TReferenceControllerBase<0> **)&param_1->field_0x10;
  **(float **)((longlong)this + 0x30) = (float)**(int **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b13f480

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *param_1,
          TDataWriteReference<bool> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___N_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference__N_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(bool *)*(undefined8 *)((longlong)this + 0x30) = **(int **)((longlong)this + 0x10) != 0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14b145010

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145050

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145090

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b1450d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145110

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145150

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145190

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b1451d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145210

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145250

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145290

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b1452d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145310

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145350

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b145390

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound__M_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b1453d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___N_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b1895c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::ELfoWaveshapeType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::ELfoWaveshapeType,0> *pTVar4;
  undefined1 *this_01;
  ELfoWaveshapeType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int> local_28;
  
  EVar5 = **(ELfoWaveshapeType **)((longlong)this + 0x10);
  if (EVar5 != *(ELfoWaveshapeType *)((longlong)this + 0x4c)) {
    *(ELfoWaveshapeType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::ELfoWaveshapeType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b18960d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Sine;
      this_01 = local_res10;
LAB_14b1896b7:
      pTVar4 = TEnum<enum_Metasound::ELfoWaveshapeType,0>::
               TEnum<enum_Metasound::ELfoWaveshapeType,0>(this_01,EVar5);
      **(ELfoWaveshapeType **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b1896b7;
      }
      goto LAB_14b18960d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b1896e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FConverterOperator::Execute(void *this)

{
  FText *this_00;
  TEnum<Metasound::ENoiseType,0> *pTVar1;
  ENoiseType EVar2;
  int local_res8 [2];
  
  EVar2 = **(ENoiseType **)((longlong)this + 0x10);
  if (EVar2 != *(ENoiseType *)((longlong)this + 0x4c)) {
    *(ENoiseType *)((longlong)this + 0x4c) = EVar2;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnum<enum_Metasound::ENoiseType,0>::ToName((ENoiseType)local_res8);
  if (local_res8[0] == -1) {
    if (*(char *)((longlong)this + 0x48) == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>()
        ;
        FText::ToString(this_00);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ENoiseType,0>_>::FConverterOperator::Execute(void)___ptr64'
                    ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      *(undefined1 *)((longlong)this + 0x48) = 1;
    }
    EVar2 = Pink;
  }
  pTVar1 = TEnum<enum_Metasound::ENoiseType,0>::TEnum<enum_Metasound::ENoiseType,0>
                     (local_res8,EVar2);
  **(ENoiseType **)((longlong)this + 0x30) = pTVar1->EnumValue;
  return;
}

// Execute @ 14b189790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FConverterOperator::Execute(void *this)

{
  FText *this_00;
  TEnum<Metasound::ESawGenerationType,0> *pTVar1;
  ESawGenerationType EVar2;
  int local_res8 [2];
  
  EVar2 = **(ESawGenerationType **)((longlong)this + 0x10);
  if (EVar2 != *(ESawGenerationType *)((longlong)this + 0x4c)) {
    *(ESawGenerationType *)((longlong)this + 0x4c) = EVar2;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnum<enum_Metasound::ESawGenerationType,0>::ToName((ESawGenerationType)local_res8);
  if (local_res8[0] == -1) {
    if (*(char *)((longlong)this + 0x48) == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
                            ();
        FText::ToString(this_00);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESawGenerationType,0>_>::FConverterOperator::Execute(void)___ptr64'
                    ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      *(undefined1 *)((longlong)this + 0x48) = 1;
    }
    EVar2 = PolySmooth;
  }
  pTVar1 = TEnum<enum_Metasound::ESawGenerationType,0>::TEnum<enum_Metasound::ESawGenerationType,0>
                     (local_res8,EVar2);
  **(ESawGenerationType **)((longlong)this + 0x30) = pTVar1->EnumValue;
  return;
}

// Execute @ 14b189840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::ESineGenerationType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::ESineGenerationType,3> *pTVar4;
  undefined1 *this_01;
  ESineGenerationType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int> local_28;
  
  EVar5 = **(ESineGenerationType **)((longlong)this + 0x10);
  if (EVar5 != *(ESineGenerationType *)((longlong)this + 0x4c)) {
    *(ESineGenerationType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::ESineGenerationType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b18988d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESineGenerationType,3>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Wavetable;
      this_01 = local_res10;
LAB_14b18993a:
      pTVar4 = TEnum<enum_Metasound::ESineGenerationType,3>::
               TEnum<enum_Metasound::ESineGenerationType,3>(this_01,EVar5);
      **(ESineGenerationType **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b18993a;
      }
      goto LAB_14b18988d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b189960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FConverterOperator::Execute(void *this)

{
  FText *this_00;
  TEnum<Metasound::ESquareGenerationType,0> *pTVar1;
  ESquareGenerationType EVar2;
  int local_res8 [2];
  
  EVar2 = **(ESquareGenerationType **)((longlong)this + 0x10);
  if (EVar2 != *(ESquareGenerationType *)((longlong)this + 0x4c)) {
    *(ESquareGenerationType *)((longlong)this + 0x4c) = EVar2;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnum<enum_Metasound::ESquareGenerationType,0>::ToName((ESquareGenerationType)local_res8);
  if (local_res8[0] == -1) {
    if (*(char *)((longlong)this + 0x48) == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
                            ();
        FText::ToString(this_00);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::FConverterOperator::Execute(void)___ptr64'
                    ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      *(undefined1 *)((longlong)this + 0x48) = 1;
    }
    EVar2 = PolySmooth;
  }
  pTVar1 = TEnum<enum_Metasound::ESquareGenerationType,0>::
           TEnum<enum_Metasound::ESquareGenerationType,0>(local_res8,EVar2);
  **(ESquareGenerationType **)((longlong)this + 0x30) = pTVar1->EnumValue;
  return;
}

// Execute @ 14b189a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FConverterOperator::Execute(void *this)

{
  FText *this_00;
  TEnum<Metasound::ETriangleGenerationType,0> *pTVar1;
  ETriangleGenerationType EVar2;
  int local_res8 [2];
  
  EVar2 = **(ETriangleGenerationType **)((longlong)this + 0x10);
  if (EVar2 != *(ETriangleGenerationType *)((longlong)this + 0x4c)) {
    *(ETriangleGenerationType *)((longlong)this + 0x4c) = EVar2;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnum<enum_Metasound::ETriangleGenerationType,0>::ToName((ETriangleGenerationType)local_res8);
  if (local_res8[0] == -1) {
    if (*(char *)((longlong)this + 0x48) == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
                            ();
        FText::ToString(this_00);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::FConverterOperator::Execute(void)___ptr64'
                    ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      *(undefined1 *)((longlong)this + 0x48) = 1;
    }
    EVar2 = PolySmooth;
  }
  pTVar1 = TEnum<enum_Metasound::ETriangleGenerationType,0>::
           TEnum<enum_Metasound::ETriangleGenerationType,0>(local_res8,EVar2);
  **(ETriangleGenerationType **)((longlong)this + 0x30) = pTVar1->EnumValue;
  return;
}

// Execute @ 14b189ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Audio::EMusicalScale::Scale> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Audio::EMusicalScale::Scale,0> *pTVar4;
  undefined1 *this_01;
  Scale SVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int> local_28;
  
  SVar5 = **(Scale **)((longlong)this + 0x10);
  if (SVar5 != *(Scale *)((longlong)this + 0x4c)) {
    *(Scale *)((longlong)this + 0x4c) = SVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Audio::EMusicalScale::Scale>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b189b0d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      SVar5 = Major;
      this_01 = local_res10;
LAB_14b189bb7:
      pTVar4 = TEnum<enum_Audio::EMusicalScale::Scale,0>::TEnum<enum_Audio::EMusicalScale::Scale,0>
                         (this_01,SVar5);
      **(Scale **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == SVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b189bb7;
      }
      goto LAB_14b189b0d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Reset @ 14b1a77e0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1a7800

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1a7820

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1a7840

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1a7860

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1a7880

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1a78a0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1a78c0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a78e0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a7900

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a7920

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a7940

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a7960

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a7980

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a79a0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(float **)((longlong)this + 0x30) = (float)**(int **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1a79d0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(bool *)*(undefined8 *)((longlong)this + 0x30) = **(int **)((longlong)this + 0x10) != 0;
  return;
}

// BindInputs @ 14b1b4070

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::GetInputName()
  ;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b40f0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::GetOutputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1b4510

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetInputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b4590

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetOutputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1b5000

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b5080

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b1b5520

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b55a0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14b1cd670

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataWriteReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b1cd730

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b1cd7f0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b1cd8b0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14b1cfd10

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b1cfd50

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b1cfd90

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b1cfdd0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b1ddff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FConverterOperator::Execute(void *this)

{
  FText *this_00;
  TEnum<Metasound::EPanningLaw,0> *pTVar1;
  EPanningLaw EVar2;
  int local_res8 [2];
  
  EVar2 = **(EPanningLaw **)((longlong)this + 0x10);
  if (EVar2 != *(EPanningLaw *)((longlong)this + 0x4c)) {
    *(EPanningLaw *)((longlong)this + 0x4c) = EVar2;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnum<enum_Metasound::EPanningLaw,0>::ToName((EPanningLaw)local_res8);
  if (local_res8[0] == -1) {
    if (*(char *)((longlong)this + 0x48) == '\0') {
      if (2 < (byte)LogMetaSound._0_1_) {
        this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                            ();
        FText::ToString(this_00);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::FConverterOperator::Execute(void)___ptr64'
                    ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      *(undefined1 *)((longlong)this + 0x48) = 1;
    }
    EVar2 = EqualPower;
  }
  pTVar1 = TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>
                     (local_res8,EVar2);
  **(EPanningLaw **)((longlong)this + 0x30) = pTVar1->EnumValue;
  return;
}

// Execute @ 14b1de0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::EStereoDelayMode> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::EStereoDelayMode,0> *pTVar4;
  undefined1 *this_01;
  EStereoDelayMode EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int> local_28;
  
  EVar5 = **(EStereoDelayMode **)((longlong)this + 0x10);
  if (EVar5 != *(EStereoDelayMode *)((longlong)this + 0x4c)) {
    *(EStereoDelayMode *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::EStereoDelayMode>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b1de0ed:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Normal;
      this_01 = local_res10;
LAB_14b1de197:
      pTVar4 = TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>
                         (this_01,EVar5);
      **(EStereoDelayMode **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b1de197;
      }
      goto LAB_14b1de0ed;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Reset @ 14b1e9c80

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1e9ca0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b1e9cc0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b1e9ce0

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// BindInputs @ 14b20c690

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::GetInputName()
  ;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20c710

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::GetOutputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b20e010

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetInputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20e090

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetOutputName
                       ();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b20f180

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b20f200

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b210af0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b210b70

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b212690

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b212790

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2131f0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FConverterOperator::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             GetInputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res8 = (longlong)this + 8;
  local_30 = (longlong)this + 8;
  FInputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2132d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FConverterOperator::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  longlong local_res8;
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  FName **local_10;
  
  local_38 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
             GetOutputName();
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = (longlong)this + 0x28;
  local_30 = (longlong)this + 0x28;
  FOutputVertexInterfaceData::Apply
            (param_1,local_38,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FConverterOperator @ 14b233170

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b233230

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &
       ___7__TDataWriteReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b2332f0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<int> *param_1,
          TDataWriteReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) =
       &___7__TDataWriteReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  Execute(this);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b2333b0

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b233470

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
FConverterOperator::FConverterOperator
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &
       ___7__TDataReadReference_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// FConverterOperator @ 14b233530

FConverterOperator * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
FConverterOperator::FConverterOperator
          (void *this,TDataReadReference<Metasound::TEnum<Audio::EWaveShaperType,1>_> *param_1,
          TDataWriteReference<int> *param_2)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound__H_Metasound__6B_
  ;
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x8;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(longlong *)((longlong)this + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 8) =
       &___7__TDataReadReference_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x30) = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)((longlong)this + 0x38) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x28) = &___7__TDataWriteReference_H_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_1->field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// ~FConverterOperator @ 14b237750

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b237790

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b2377d0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b237810

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b237850

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~FConverterOperator @ 14b237890

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
FConverterOperator::~FConverterOperator(void *this)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b272a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::EBufferTriggerType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::EBufferTriggerType,0> *pTVar4;
  undefined1 *this_01;
  EBufferTriggerType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int> local_28;
  
  EVar5 = **(EBufferTriggerType **)((longlong)this + 0x10);
  if (EVar5 != *(EBufferTriggerType *)((longlong)this + 0x4c)) {
    *(EBufferTriggerType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::EBufferTriggerType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b272a4d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = RisingEdge;
      this_01 = local_res10;
LAB_14b272af7:
      pTVar4 = TEnum<enum_Metasound::EBufferTriggerType,0>::
               TEnum<enum_Metasound::EBufferTriggerType,0>(this_01,EVar5);
      **(EBufferTriggerType **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b272af7;
      }
      goto LAB_14b272a4d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b272b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Metasound::ETriggerComparisonType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Metasound::ETriggerComparisonType,0> *pTVar4;
  undefined1 *this_01;
  ETriggerComparisonType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int> local_28;
  
  EVar5 = **(ETriggerComparisonType **)((longlong)this + 0x10);
  if (EVar5 != *(ETriggerComparisonType *)((longlong)this + 0x4c)) {
    *(ETriggerComparisonType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Metasound::ETriggerComparisonType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b272b6d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = Equals;
      this_01 = local_res10;
LAB_14b272c17:
      pTVar4 = TEnum<enum_Metasound::ETriggerComparisonType,0>::
               TEnum<enum_Metasound::ETriggerComparisonType,0>(this_01,EVar5);
      **(ETriggerComparisonType **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b272c17;
      }
      goto LAB_14b272b6d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Execute @ 14b272c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FConverterOperator::Execute(void *this)

{
  TEnumEntry<Audio::EWaveShaperType> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *this_00;
  TEnum<Audio::EWaveShaperType,1> *pTVar4;
  undefined1 *this_01;
  EWaveShaperType EVar5;
  FNameEntryId FVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int> local_28;
  
  EVar5 = **(EWaveShaperType **)((longlong)this + 0x10);
  if (EVar5 != *(EWaveShaperType *)((longlong)this + 0x4c)) {
    *(EWaveShaperType *)((longlong)this + 0x4c) = EVar5;
    *(undefined1 *)((longlong)this + 0x48) = 0;
  }
  TEnumStringHelper<enum_Audio::EWaveShaperType>::GetAllEntries(&local_28);
  pTVar1 = local_28.DataPtr + local_28.ArrayNum;
  do {
    if (local_28.DataPtr == pTVar1) {
LAB_14b272c8d:
      if (*(char *)((longlong)this + 0x48) == '\0') {
        if (2 < (byte)LogMetaSound._0_1_) {
          this_00 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
                              ();
          FText::ToString(this_00);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EWaveShaperType,1>_>::FConverterOperator::Execute(void)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined1 *)((longlong)this + 0x48) = 1;
      }
      EVar5 = ATan;
      this_01 = local_res10;
LAB_14b272d3a:
      pTVar4 = TEnum<enum_Audio::EWaveShaperType,1>::TEnum<enum_Audio::EWaveShaperType,1>
                         (this_01,EVar5);
      **(EWaveShaperType **)((longlong)this + 0x30) = pTVar4->EnumValue;
      return;
    }
    if ((local_28.DataPtr)->Value == EVar5) {
      FVar6 = ((local_28.DataPtr)->Name).ComparisonIndex;
      if ((FVar6.Value == 0xffffffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (FVar6.Value != 0xffffffff) {
        this_01 = local_res8;
        goto LAB_14b272d3a;
      }
      goto LAB_14b272c8d;
    }
    local_28.DataPtr = local_28.DataPtr + 1;
  } while( true );
}

// Reset @ 14b28b6e0

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b28b700

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b28b720

void __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  Execute(this);
  return;
}

// Reset @ 14b28b740

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b28b760

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

// Reset @ 14b28b780

void __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::
FConverterOperator::Reset(void *this,FResetParams *param_1)

{
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined1 *)((longlong)this + 0x48) = 0;
  **(undefined4 **)((longlong)this + 0x30) = **(undefined4 **)((longlong)this + 0x10);
  return;
}

