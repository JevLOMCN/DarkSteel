// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1695

// GetResetFunction @ 14afc1dc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
         ::ResetFunction;
}

// GetResetFunction @ 14afc1dd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FAdditiveSynthOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FAdditiveSynthOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FAdditiveSynthOperator>::ResetFunction;
}

// GetExecuteFunction @ 14afc1de0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14afc1df0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FAdditiveSynthOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FAdditiveSynthOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc1e00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14afc1e10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FAdditiveSynthOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FAdditiveSynthOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc29e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14afc29f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc2a00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc2f00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TADEnvelopeNodeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14afc2f10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc2f20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc35d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afc35e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc35f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc4160

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afc4170

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc4180

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc53b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14afc53c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc53d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc6170

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAbsNodeOperator<Metasound::FTime>_>::ResetFunction;
}

// GetExecuteFunction @ 14afc6180

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc6280

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc69e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAbsNodeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14afc69f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc6a00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc6cf0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAbsNodeOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14afc6d00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc6d10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAbsNodeOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afc9730

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afc9740

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afc9750

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afcd2a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afcd2b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afcd2c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afce9a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afce9b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afce9c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd0480

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd0490

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd04a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd0900

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd0910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd0920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd0e50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd0e60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd0e70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd2530

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd2540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd2550

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd2900

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<5,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd2910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd2920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd3280

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<4,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd3400

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd3450

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd3b80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd3b90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd3ba0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd3fe0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<3,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd3ff0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd4000

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd4f50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<2,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd4f60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd4f70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd5d70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<5,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd5d80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd5d90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd5de0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd5df0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd60c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd6950

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<4,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd6960

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd6970

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd6e50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd6e60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd6e70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd7530

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<3,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd7540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd7550

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd86c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TBandSplitterOperator<2,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14afd8710

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd8720

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd8bd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd8be0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd8bf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd90b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd90c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd90d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afd9d20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afd9d30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afd9d40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afda3b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afda3c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afda3d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afda740

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afda750

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afda760

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afda950

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afda970

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afda980

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afdce30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afdce40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afdce50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afde030

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
::GetResetFunction(TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afde040

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afde050

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14afde740

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetResetFunction(TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14afde750

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14afde760

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_> @ 14affb870

void __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_>::
~TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_>
          (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_> @ 14affb890

void __thiscall
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  *this = (TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_> @ 14affb8b0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
::
~TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_> @ 14affb8d0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
::
~TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
          (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAbsNodeOperator<int>_> @ 14affb8f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<int>_>::
~TExecutableOperator<Metasound::TAbsNodeOperator<int>_>
          (TExecutableOperator<Metasound::TAbsNodeOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAbsNodeOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAbsNodeOperator<float>_> @ 14affb910

void __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<float>_>::
~TExecutableOperator<Metasound::TAbsNodeOperator<float>_>
          (TExecutableOperator<Metasound::TAbsNodeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAbsNodeOperator<float>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_> @ 14affb930

void __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_> @ 14affb950

void __thiscall
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_>::
~TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_>
          (TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_> @ 14affb970

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_> @ 14affb990

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_> @ 14affb9b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_> @ 14affb9d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_> @ 14affb9f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_> @ 14affba10

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_> @ 14affba30

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_> @ 14affba50

void __thiscall
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_>::
~TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_>
          (TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_> @ 14affba70

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_> @ 14affba90

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_> @ 14affbab0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_> @ 14affbad0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_> @ 14affbaf0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_> @ 14affbb10

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_> @ 14affbb30

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_> @ 14affbb50

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FAdditiveSynthOperator> @ 14affbb70

void __thiscall
Metasound::TExecutableOperator<Metasound::FAdditiveSynthOperator>::
~TExecutableOperator<Metasound::FAdditiveSynthOperator>
          (TExecutableOperator<Metasound::FAdditiveSynthOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FAdditiveSynthOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FBiquadFilterOperator> @ 14affbb90

void __thiscall
Metasound::TExecutableOperator<Metasound::FBiquadFilterOperator>::
~TExecutableOperator<Metasound::FBiquadFilterOperator>
          (TExecutableOperator<Metasound::FBiquadFilterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FBiquadFilterOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator> @ 14affbbb0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator> @ 14affbbd0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator> @ 14affbbf0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator> @ 14affbc10

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator> @ 14affbc30

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator> @ 14affbc50

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator> @ 14affbc70

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator> @ 14affbc90

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator> @ 14affbcb0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator> @ 14affbcd0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator> @ 14affbcf0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator> @ 14affbd10

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
          (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
           *this)

{
  *this = (TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FLadderFilterOperator> @ 14affbd30

void __thiscall
Metasound::TExecutableOperator<Metasound::FLadderFilterOperator>::
~TExecutableOperator<Metasound::FLadderFilterOperator>
          (TExecutableOperator<Metasound::FLadderFilterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FLadderFilterOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator> @ 14affbd50

void __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator>::
~TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator>
          (TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator> @ 14affbd70

void __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator>::
~TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator>
          (TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FStateVariableFilterOperator> @ 14affbd90

void __thiscall
Metasound::TExecutableOperator<Metasound::FStateVariableFilterOperator>::
~TExecutableOperator<Metasound::FStateVariableFilterOperator>
          (TExecutableOperator<Metasound::FStateVariableFilterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FStateVariableFilterOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b01f9c0

void __cdecl
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADEnvelopeNodeOperator<float>::Execute((TADEnvelopeNodeOperator<float> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fa10

void __cdecl
Metasound::TExecutableOperator<Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Execute
            ((TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fa60

void __cdecl
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
  ::Execute((TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
             *)param_1);
  return;
}

// ExecuteFunction @ 14b01fab0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::Execute
            ((TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
              *)param_1);
  return;
}

// ExecuteFunction @ 14b01fb00

void __cdecl
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = -*(int *)param_1[2];
  if (iVar3 < 0) {
    iVar3 = *(int *)param_1[2];
  }
  *(int *)param_1[6] = iVar3;
  return;
}

// ExecuteFunction @ 14b01fb60

void __cdecl
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)param_1[6] = *(uint *)param_1[2] & __xmm_7fffffff7fffffff7fffffff7fffffff;
  return;
}

// ExecuteFunction @ 14b01fbc0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAbsNodeOperator<Metasound::FAudioBuffer>::GetAbs
            ((TAbsNodeOperator<Metasound::FAudioBuffer> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fc10

void __cdecl
Metasound::TExecutableOperator<Metasound::TAbsNodeOperator<Metasound::FTime>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(ulonglong *)param_1[6] =
       CONCAT44((uint)((ulonglong)*(undefined8 *)param_1[2] >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                (uint)*(undefined8 *)param_1[2] & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  return;
}

// ExecuteFunction @ 14b01fc70

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<2,1>::Execute((TBandSplitterOperator<2,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fcc0

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<2,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<2,2>::Execute((TBandSplitterOperator<2,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fd10

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<3,1>::Execute((TBandSplitterOperator<3,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fd60

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<3,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<3,2>::Execute((TBandSplitterOperator<3,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fdb0

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<4,1>::Execute((TBandSplitterOperator<4,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fe00

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<4,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<4,2>::Execute((TBandSplitterOperator<4,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fe50

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<5,1>::Execute((TBandSplitterOperator<5,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fea0

void __cdecl
Metasound::TExecutableOperator<Metasound::TBandSplitterOperator<5,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TBandSplitterOperator<5,2>::Execute((TBandSplitterOperator<5,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b01fef0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::
  TReceiverOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::Execute(param_1)
  ;
  return;
}

// ExecuteFunction @ 14b01ff40

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b01ff90

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::FMonoAudioFormat>::Execute
            ((TReceiverOperator<Metasound::FMonoAudioFormat> *)param_1);
  return;
}

// ExecuteFunction @ 14b01ffe0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>_>
::ExecuteFunction(IOperator *param_1)

{
  TAudioReceiver<Metasound::FStereoAudioFormat> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  IOperator IVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  TUniquePtr<Metasound::TAudioReceiver<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioReceiver<Metasound::FStereoAudioFormat>_>_>
  TVar8;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar7 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[0xb],(FTransmissionAddress *)(param_1 + 0xe));
  if (bVar7) {
    ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>::
    ResetReceiverAndCleanupChannel((TReceiverOperator<Metasound::FStereoAudioFormat> *)param_1);
    IVar2 = param_1[0xb];
    param_1[0xf] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0x10] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0x11] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar8 = ReceiveNodePrivate::TReceiverOperator<Metasound::FStereoAudioFormat>::CreateNewReceiver
                      ((TReceiverOperator<Metasound::FStereoAudioFormat> *)param_1);
    pTVar1 = (TAudioReceiver<Metasound::FStereoAudioFormat> *)(param_1 + 0x14);
    if (pTVar1 != TVar8.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar8.Ptr)->_padding_;
      (TVar8.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)();
    }
  }
  if (param_1[0x14] == (IOperator)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3419017988815191922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundReceiveNode.h"
                       ,0x8e,"Receiver.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    TAudioReceiver<Metasound::FStereoAudioFormat>::Pop
              ((TAudioReceiver<Metasound::FStereoAudioFormat> *)param_1[0x14],
               (FStereoAudioFormat *)param_1[7]);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    IVar2 = param_1[3];
    IVar4 = param_1[7];
    uVar6 = *(undefined8 *)((longlong)IVar2 + 8);
    *(undefined8 *)IVar4 = *(undefined8 *)IVar2;
    *(undefined8 *)((longlong)IVar4 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)IVar2 + 0x18);
    *(undefined8 *)((longlong)IVar4 + 0x10) = *(undefined8 *)((longlong)IVar2 + 0x10);
    *(undefined8 *)((longlong)IVar4 + 0x18) = uVar6;
    TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
    operator=((TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
               *)((longlong)IVar4 + 0x20),
              (TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
               *)((longlong)IVar2 + 0x20));
    TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>::
    operator=((TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
               *)((longlong)IVar4 + 0x30),
              (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
               *)((longlong)IVar2 + 0x30));
  }
  return;
}

// ExecuteFunction @ 14b020130

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::EBandSplitterFilterOrder,1> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b020240

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Audio::EBiquadFilter::Type,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b020350

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>_>::
ExecuteFunction(IOperator *param_1)

{
  TAudioSender<Metasound::FMonoAudioFormat> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TAudioSender<Metasound::FMonoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FMonoAudioFormat>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FMonoAudioFormat> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::FMonoAudioFormat>::CreateNewSender
                      ((TSendOperator<Metasound::FMonoAudioFormat> *)param_1);
    pTVar1 = (TAudioSender<Metasound::FMonoAudioFormat> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TAudioSender<Metasound::FMonoAudioFormat>::Push
            ((TAudioSender<Metasound::FMonoAudioFormat> *)param_1[0x10],
             (FMonoAudioFormat *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b020460

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>_>::
ExecuteFunction(IOperator *param_1)

{
  TAudioSender<Metasound::FStereoAudioFormat> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TAudioSender<Metasound::FStereoAudioFormat>,TDefaultDelete<Metasound::TAudioSender<Metasound::FStereoAudioFormat>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FStereoAudioFormat> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::FStereoAudioFormat>::CreateNewSender
                      ((TSendOperator<Metasound::FStereoAudioFormat> *)param_1);
    pTVar1 = (TAudioSender<Metasound::FStereoAudioFormat> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TAudioSender<Metasound::FStereoAudioFormat>::Push
            ((TAudioSender<Metasound::FStereoAudioFormat> *)param_1[0x10],
             (FStereoAudioFormat *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b020570

void __cdecl
Metasound::TExecutableOperator<Metasound::FAdditiveSynthOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FAdditiveSynthOperator::Execute((FAdditiveSynthOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b0205c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FBiquadFilterOperator>::ExecuteFunction
          (IOperator *param_1)

{
  FBiquadFilter *this;
  int iVar1;
  IOperator IVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this = (FBiquadFilter *)(param_1 + 0x1d);
  fVar9 = *(float *)param_1[6];
  if (*(float *)(param_1 + 0x1c) <= *(float *)param_1[6]) {
    fVar9 = *(float *)(param_1 + 0x1c);
  }
  fVar8 = *(float *)param_1[10];
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar7 = *(float *)param_1[0xe];
  if (__real_41a00000 <= *(float *)param_1[0xe]) {
    fVar7 = __real_41a00000;
  }
  if (fVar7 <= __real_c2b40000) {
    fVar7 = __real_c2b40000;
  }
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (__real_322bcc77 <
      (float)((uint)(*(float *)(param_1 + 0x15) - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    Audio::FBiquadFilter::SetFrequency(this,fVar9);
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    *(float *)(param_1 + 0x15) = fVar9;
  }
  if (__real_322bcc77 < (float)((uint)(*(float *)&param_1[0x15].field_0x4 - fVar8) & uVar6)) {
    Audio::FBiquadFilter::SetBandwidth(this,fVar8);
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    *(float *)&param_1[0x15].field_0x4 = fVar8;
  }
  if (__real_322bcc77 < (float)((uint)(*(float *)(param_1 + 0x16) - fVar7) & uVar6)) {
    Audio::FBiquadFilter::SetGainDB(this,fVar7);
    *(float *)(param_1 + 0x16) = fVar7;
  }
  if (*(Type *)param_1[0x12] != *(Type *)&param_1[0x1c].field_0x4) {
    Audio::FBiquadFilter::SetType(this,*(Type *)param_1[0x12]);
    *(undefined4 *)&param_1[0x1c].field_0x4 = *(undefined4 *)param_1[0x12];
  }
  IVar2 = param_1[0x18];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = *(float **)IVar2;
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FBiquadFilter::ProcessAudio(this,*(float **)IVar2,iVar1,pfVar3);
  return;
}

// ExecuteFunction @ 14b0207e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b020830

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b020880

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b0208d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b020920

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<float,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b020970

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<float,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b0209c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b020a10

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b020a60

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,float>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)*(int *)param_1[2];
  return;
}

// ExecuteFunction @ 14b020ac0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,bool>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)param_1[6] = *(int *)param_1[2] != 0;
  return;
}

// ExecuteFunction @ 14b020b10

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<bool,Metasound::FMonoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b020b60

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<bool,Metasound::FStereoAudioFormat>::FConverterOperator::Execute
            ((FConverterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b020bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FLadderFilterOperator>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator *pIVar1;
  undefined4 uVar2;
  IOperator IVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  fVar7 = *(float *)param_1[6];
  if (*(float *)(param_1 + 0x13) <= *(float *)param_1[6]) {
    fVar7 = *(float *)(param_1 + 0x13);
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar6 = *(float *)param_1[10];
  if (__real_41200000 <= *(float *)param_1[10]) {
    fVar6 = __real_41200000;
  }
  if (fVar6 <= __real_3f800000) {
    fVar6 = __real_3f800000;
  }
  if ((__real_322bcc77 <
       (float)((uint)(*(float *)(param_1 + 0xd) - fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff))
     || (__real_322bcc77 <
         (float)((uint)(*(float *)&param_1[0xd].field_0x4 - fVar6) &
                __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pIVar1 = param_1 + 0x14;
    (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1);
    *(float *)(param_1 + 0xd) = fVar7;
    *(float *)&param_1[0xd].field_0x4 = fVar6;
  }
  IVar3 = param_1[0xf];
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1[0x14] + 0x70);
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar3 + 0x10) != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar4 = *(undefined8 *)IVar3;
  IVar3 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar3 + 0x10) != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar2 = *(undefined4 *)((longlong)IVar3 + 8);
  IVar3 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar3 + 0x10) != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
                    /* WARNING: Could not recover jumptable at 0x00014b020d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x14,*(undefined8 *)IVar3,uVar2,uVar4);
  return;
}

// ExecuteFunction @ 14b020d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator>::ExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar6 = *(float *)&param_1[0xd].field_0x4;
  if (0.0 <= fVar6) {
    fVar6 = 0.0;
  }
  if (fVar6 <= *(float *)param_1[6]) {
    fVar6 = *(float *)param_1[6];
  }
  Audio::FInterpolatedHPF::StartFrequencyInterpolation
            ((FInterpolatedHPF *)(param_1 + 0xe),fVar6,*(int *)(param_1 + 0xd));
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  IVar2 = param_1[10];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = *(float **)IVar2;
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FInterpolatedHPF::ProcessAudioBuffer
            ((FInterpolatedHPF *)(param_1 + 0xe),*(float **)IVar2,pfVar3,iVar1);
  *(undefined4 *)&param_1[0xe].field_0x4 = *(undefined4 *)&param_1[0xf].field_0x4;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ExecuteFunction @ 14b020ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator>::ExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar6 = *(float *)&param_1[0xd].field_0x4;
  if (0.0 <= fVar6) {
    fVar6 = 0.0;
  }
  IVar2 = param_1[2];
  if (fVar6 <= *(float *)param_1[6]) {
    fVar6 = *(float *)param_1[6];
  }
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FInterpolatedLPF::StartFrequencyInterpolation
            ((FInterpolatedLPF *)(param_1 + 0xe),fVar6,*(int *)((longlong)IVar2 + 8));
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  IVar2 = param_1[10];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = *(float **)IVar2;
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FInterpolatedLPF::ProcessAudioBuffer
            ((FInterpolatedLPF *)(param_1 + 0xe),*(float **)IVar2,pfVar3,iVar1);
  *(undefined4 *)&param_1[0xe].field_0x4 = *(undefined4 *)&param_1[0xf].field_0x4;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}

// ExecuteFunction @ 14b021010

void __cdecl
Metasound::TExecutableOperator<Metasound::FStateVariableFilterOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FStateVariableFilterOperator::Execute((FStateVariableFilterOperator *)param_1);
  return;
}

// GetExecuteFunction @ 14b0247d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBiquadFilterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FBiquadFilterOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b0247e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLadderFilterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FLadderFilterOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b0247f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b024800

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b024810

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStateVariableFilterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FStateVariableFilterOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b029a80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBiquadFilterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FBiquadFilterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b029a90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLadderFilterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FLadderFilterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b029aa0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b029ab0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b029ac0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStateVariableFilterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FStateVariableFilterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b029ad0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBiquadFilterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FBiquadFilterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FBiquadFilterOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b029ae0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLadderFilterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FLadderFilterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FLadderFilterOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b029af0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FOnePoleHighPassFilterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FOnePoleHighPassFilterOperator>::ResetFunction;
}

// GetResetFunction @ 14b029b00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FOnePoleLowPassFilterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FOnePoleLowPassFilterOperator>::ResetFunction;
}

// GetResetFunction @ 14b029b10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStateVariableFilterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FStateVariableFilterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FStateVariableFilterOperator>::ResetFunction;
}

// GetResetFunction @ 14b0357b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FCompressorOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FCompressorOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FCompressorOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b0357c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FCompressorOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FCompressorOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0357d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FCompressorOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FCompressorOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b036920

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b036930

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b036940

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b036e80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b036e90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b036ea0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b037140

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>::
GetResetFunction(TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TConversionOperator<float,Metasound::FTime>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b037150

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b037160

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b037370

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>::
GetResetFunction(TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TConversionOperator<Metasound::FTime,float>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b037380

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b037390

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b037560

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>::
GetResetFunction(TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TConversionOperator<int,Metasound::FTime>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b037570

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b037580

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b037750

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>::
GetResetFunction(TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TConversionOperator<Metasound::FTime,int>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b037760

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b037770

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b037af0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b037b00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b037b10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_> *this
          )

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b037ce0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b037cf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b037d00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b037d10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
GetResetFunction(TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b037d20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b037d70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_> *this
          )

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0382b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0382c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0382d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b038420

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBitcrusherOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FBitcrusherOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FBitcrusherOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b038430

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBitcrusherOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FBitcrusherOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b038440

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBitcrusherOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FBitcrusherOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b038a30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b038a40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b038a50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b039050

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>::GetResetFunction
          (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TDelayNodeOperator<Metasound::FTime>_>::ResetFunction;
}

// GetExecuteFunction @ 14b039060

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b039070

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b039800

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<FString>_>::GetResetFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<FString>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TPrintLogOperator<FString>_>::ResetFunction;
}

// GetExecuteFunction @ 14b039810

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<FString>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<FString>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b039820

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<FString>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<FString>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b039ab0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<bool>_>::GetResetFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<bool>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TPrintLogOperator<bool>_>::ResetFunction;
}

// GetExecuteFunction @ 14b039ac0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<bool>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<bool>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b039ad0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<bool>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<bool>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b039ee0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TPrintLogOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b039ef0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b039f60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03a180

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TPrintLogOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b03a190

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03a1a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TPrintLogOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03a420

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
GetResetFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b03a430

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03a440

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03aa10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDynamicFilterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FDynamicFilterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FDynamicFilterOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b03aa20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDynamicFilterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FDynamicFilterOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03aa30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDynamicFilterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FDynamicFilterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03ab40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b03ab50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03ab60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03c480

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
GetResetFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b03c490

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03c4a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03cd60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
GetResetFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b03cd70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03cd80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03d430

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
GetResetFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b03d440

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03d450

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03d980

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
GetResetFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b03d990

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03d9a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03dcc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
GetResetFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b03dcd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03dce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03e060

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
GetResetFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b03e070

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03e110

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03e4f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b03e500

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03e510

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03ee50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b03ee60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03ee70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03f0b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b03f220

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03f230

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03f690

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b03f6a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03f6b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03faf0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b03fb00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03fb10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b03fed0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b03fee0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b03ffd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0404f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b040500

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b040510

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b040830

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TCrossfadeOperator<float,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b040840

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b040850

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b041890

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b0418a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0418b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b041bd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TClampNodeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TClampNodeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b041be0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TClampNodeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b041bf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TClampNodeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b041fa0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TClampNodeOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TClampNodeOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b041fb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TClampNodeOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b041fc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TClampNodeOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b042da0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDiffuserOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FDiffuserOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FDiffuserOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b042db0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDiffuserOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FDiffuserOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b042dc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDiffuserOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FDiffuserOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TClampNodeOperator<int>_> @ 14b054020

void __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<int>_>::
~TExecutableOperator<Metasound::TClampNodeOperator<int>_>
          (TExecutableOperator<Metasound::TClampNodeOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TClampNodeOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TClampNodeOperator<float>_> @ 14b054040

void __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<float>_>::
~TExecutableOperator<Metasound::TClampNodeOperator<float>_>
          (TExecutableOperator<Metasound::TClampNodeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TClampNodeOperator<float>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_> @ 14b054060

void __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  *this = (TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_> @ 14b054080

void __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>::
~TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>
          (TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_> *this)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_> @ 14b0540a0

void __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_> *this
          )

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_> @ 14b0540c0

void __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>::
~TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>
          (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_> *this)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_> @ 14b0540e0

void __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
~TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_> *this
          )

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_> @ 14b054100

void __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>::
~TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_> @ 14b054120

void __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>::
~TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_> @ 14b054140

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_> @ 14b054160

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_> @ 14b054180

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_> @ 14b0541a0

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_> @ 14b0541c0

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_> @ 14b0541e0

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_> @ 14b054200

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_> @ 14b054220

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_> @ 14b054240

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_> @ 14b054260

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_> @ 14b054280

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_> @ 14b0542a0

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_> @ 14b0542c0

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_> @ 14b0542e0

void __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
~TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_> @ 14b054300

void __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  *this = (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_> @ 14b054320

void __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>::
~TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>
          (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_> *this)

{
  *this = (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TPrintLogOperator<int>_> @ 14b054340

void __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<int>_>::
~TExecutableOperator<Metasound::TPrintLogOperator<int>_>
          (TExecutableOperator<Metasound::TPrintLogOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TPrintLogOperator<float>_> @ 14b054360

void __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<float>_>::
~TExecutableOperator<Metasound::TPrintLogOperator<float>_>
          (TExecutableOperator<Metasound::TPrintLogOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<float>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TPrintLogOperator<FString>_> @ 14b054380

void __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<FString>_>::
~TExecutableOperator<Metasound::TPrintLogOperator<FString>_>
          (TExecutableOperator<Metasound::TPrintLogOperator<FString>_> *this)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<FString>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TPrintLogOperator<bool>_> @ 14b0543a0

void __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<bool>_>::
~TExecutableOperator<Metasound::TPrintLogOperator<bool>_>
          (TExecutableOperator<Metasound::TPrintLogOperator<bool>_> *this)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<bool>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b0543c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b0543e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FBPMToSecondsOperator> @ 14b054400

void __thiscall
Metasound::TExecutableOperator<Metasound::FBPMToSecondsOperator>::
~TExecutableOperator<Metasound::FBPMToSecondsOperator>
          (TExecutableOperator<Metasound::FBPMToSecondsOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FBPMToSecondsOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FBitcrusherOperator> @ 14b054420

void __thiscall
Metasound::TExecutableOperator<Metasound::FBitcrusherOperator>::
~TExecutableOperator<Metasound::FBitcrusherOperator>
          (TExecutableOperator<Metasound::FBitcrusherOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FBitcrusherOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FCompressorOperator> @ 14b054440

void __thiscall
Metasound::TExecutableOperator<Metasound::FCompressorOperator>::
~TExecutableOperator<Metasound::FCompressorOperator>
          (TExecutableOperator<Metasound::FCompressorOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FCompressorOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator> @ 14b054460

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator> @ 14b054480

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator> @ 14b0544a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator> @ 14b0544c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FDecibelsToLinearGainOperator> @ 14b0544e0

void __thiscall
Metasound::TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>::
~TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>
          (TExecutableOperator<Metasound::FDecibelsToLinearGainOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FDiffuserOperator> @ 14b054500

void __thiscall
Metasound::TExecutableOperator<Metasound::FDiffuserOperator>::
~TExecutableOperator<Metasound::FDiffuserOperator>
          (TExecutableOperator<Metasound::FDiffuserOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FDiffuserOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FDopplerPitchShiftOperator> @ 14b054520

void __thiscall
Metasound::TExecutableOperator<Metasound::FDopplerPitchShiftOperator>::
~TExecutableOperator<Metasound::FDopplerPitchShiftOperator>
          (TExecutableOperator<Metasound::FDopplerPitchShiftOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FDopplerPitchShiftOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FDynamicFilterOperator> @ 14b054540

void __thiscall
Metasound::TExecutableOperator<Metasound::FDynamicFilterOperator>::
~TExecutableOperator<Metasound::FDynamicFilterOperator>
          (TExecutableOperator<Metasound::FDynamicFilterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FDynamicFilterOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FEnvelopeFollowerOperator> @ 14b054560

void __thiscall
Metasound::TExecutableOperator<Metasound::FEnvelopeFollowerOperator>::
~TExecutableOperator<Metasound::FEnvelopeFollowerOperator>
          (TExecutableOperator<Metasound::FEnvelopeFollowerOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FEnvelopeFollowerOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerOnNanOperator> @ 14b054580

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnNanOperator>::
~TExecutableOperator<Metasound::FTriggerOnNanOperator>
          (TExecutableOperator<Metasound::FTriggerOnNanOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerOnNanOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b06add0

void __cdecl
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = *(int *)param_1[10];
  if (*(int *)param_1[2] < *(int *)param_1[10]) {
    iVar2 = *(int *)param_1[2];
  }
  iVar4 = *(int *)param_1[6];
  if (*(int *)param_1[6] < iVar2) {
    iVar4 = iVar2;
  }
  *(int *)param_1[0xe] = iVar4;
  return;
}

// ExecuteFunction @ 14b06ae40

void __cdecl
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[10];
  if (*(float *)param_1[2] <= *(float *)param_1[10]) {
    fVar3 = *(float *)param_1[2];
  }
  if (fVar3 <= *(float *)param_1[6]) {
    fVar3 = *(float *)param_1[6];
  }
  *(float *)param_1[0xe] = fVar3;
  return;
}

// ExecuteFunction @ 14b06aea0

void __cdecl
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundClampNodePrivate::TClamp<Metasound::FAudioBuffer>::GetClamped
            ((FAudioBuffer *)param_1[2],(FAudioBuffer *)param_1[6],(FAudioBuffer *)param_1[10],
             (FAudioBuffer *)param_1[0xe]);
  return;
}

// ExecuteFunction @ 14b06af00

void __cdecl
Metasound::TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)param_1[6] = (double)*(int *)param_1[2];
  return;
}

// ExecuteFunction @ 14b06af60

void __cdecl
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<float,Metasound::FAudioBuffer>::
  GetConvertedValue(*(float *)param_1[2],(FAudioBuffer *)param_1[6]);
  return;
}

// ExecuteFunction @ 14b06afb0

void __cdecl
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)param_1[6] = (double)*(float *)param_1[2];
  return;
}

// ExecuteFunction @ 14b06b010

void __cdecl
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundConversionNodePrivate::TConversionNodeSpecialization<Metasound::FAudioBuffer,float>::
  GetConvertedValue((FAudioBuffer *)param_1[2],(float *)param_1[6]);
  return;
}

// ExecuteFunction @ 14b06b060

void __cdecl
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = (int)*(double *)param_1[2];
  return;
}

// ExecuteFunction @ 14b06b0b0

void __cdecl
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)*(double *)param_1[2];
  return;
}

// ExecuteFunction @ 14b06b110

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,2>::PerformCrossfadeOutput((TCrossfadeOperator<float,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b160

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,3>::PerformCrossfadeOutput((TCrossfadeOperator<float,3> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b1b0

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,4>::PerformCrossfadeOutput((TCrossfadeOperator<float,4> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b200

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,5>::PerformCrossfadeOutput((TCrossfadeOperator<float,5> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b250

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,6>::PerformCrossfadeOutput((TCrossfadeOperator<float,6> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b2a0

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,7>::PerformCrossfadeOutput((TCrossfadeOperator<float,7> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b2f0

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<float,8>::PerformCrossfadeOutput((TCrossfadeOperator<float,8> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b340

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,2>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b390

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,3>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,3> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b3e0

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,4>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,4> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b430

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,5>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,5> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b480

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,6>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,6> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b4d0

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,7>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,7> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b520

void __cdecl
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TCrossfadeOperator<Metasound::FAudioBuffer,8>::PerformCrossfadeOutput
            ((TCrossfadeOperator<Metasound::FAudioBuffer,8> *)param_1);
  return;
}

// ExecuteFunction @ 14b06b570

void __cdecl
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  IOperator IVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(float *)(param_1 + 0x24) <= 0.0 && *(float *)(param_1 + 0x24) != 0.0) {
    fVar10 = DelayNodePrivate::TDelay<Metasound::FAudioBuffer>::GetDelayLengthSeconds
                       ((TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 5),0);
    fVar11 = *(float *)(param_1 + 0x25);
    if (fVar10 <= *(float *)(param_1 + 0x25)) {
      fVar11 = fVar10;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar11 = fVar11 * __real_447a0000;
    *(float *)(param_1 + 0x24) = fVar11;
    Audio::FDelay::SetDelayMsec((FDelay *)(param_1 + 0x19),fVar11);
  }
  IVar4 = param_1[0x27];
  iVar8 = *(int *)((longlong)IVar4 + 0x1c);
  iVar1 = *(int *)((longlong)IVar4 + 0x14);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else {
    piVar5 = *(int **)IVar4;
    if (0 < *piVar5) {
      TDelayNodeOperator<Metasound::FAudioBuffer>::ExecuteInternal
                ((TDelayNodeOperator<Metasound::FAudioBuffer> *)param_1,0,*piVar5);
    }
    if (0 < (longlong)iVar8 + -1) {
      lVar9 = 0;
      do {
        iVar2 = piVar5[lVar9 + 1];
        iVar3 = piVar5[lVar9];
        *(undefined4 *)&param_1[0x24].field_0x4 = 0;
        Audio::FDelay::ResetWithFade((FDelay *)(param_1 + 0x19));
        TDelayNodeOperator<Metasound::FAudioBuffer>::ExecuteInternal
                  ((TDelayNodeOperator<Metasound::FAudioBuffer> *)param_1,iVar3,iVar2);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (longlong)iVar8 + -1);
    }
    iVar8 = piVar5[(longlong)iVar8 + -1];
    *(undefined4 *)&param_1[0x24].field_0x4 = 0;
    Audio::FDelay::ResetWithFade((FDelay *)(param_1 + 0x19));
  }
  TDelayNodeOperator<Metasound::FAudioBuffer>::ExecuteInternal
            ((TDelayNodeOperator<Metasound::FAudioBuffer> *)param_1,iVar8,iVar1);
  return;
}

// ExecuteFunction @ 14b06b6f0

void __cdecl
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>::ExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  IOperator IVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(float *)(param_1 + 0x24) <= 0.0 && *(float *)(param_1 + 0x24) != 0.0) {
    fVar10 = (float)*(double *)param_1[6];
    if (*(float *)(param_1 + 0x25) <= (float)*(double *)param_1[6]) {
      fVar10 = *(float *)(param_1 + 0x25);
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = fVar10 * __real_447a0000;
    *(float *)(param_1 + 0x24) = fVar10;
    Audio::FDelay::SetDelayMsec((FDelay *)(param_1 + 0x19),fVar10);
  }
  IVar4 = param_1[0x27];
  iVar8 = *(int *)((longlong)IVar4 + 0x1c);
  iVar1 = *(int *)((longlong)IVar4 + 0x14);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else {
    piVar5 = *(int **)IVar4;
    if (0 < *piVar5) {
      TDelayNodeOperator<Metasound::FTime>::ExecuteInternal
                ((TDelayNodeOperator<Metasound::FTime> *)param_1,0,*piVar5);
    }
    if (0 < (longlong)iVar8 + -1) {
      lVar9 = 0;
      do {
        iVar2 = piVar5[lVar9 + 1];
        iVar3 = piVar5[lVar9];
        *(undefined4 *)&param_1[0x24].field_0x4 = 0;
        Audio::FDelay::ResetWithFade((FDelay *)(param_1 + 0x19));
        TDelayNodeOperator<Metasound::FTime>::ExecuteInternal
                  ((TDelayNodeOperator<Metasound::FTime> *)param_1,iVar3,iVar2);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (longlong)iVar8 + -1);
    }
    iVar8 = piVar5[(longlong)iVar8 + -1];
    *(undefined4 *)&param_1[0x24].field_0x4 = 0;
    Audio::FDelay::ResetWithFade((FDelay *)(param_1 + 0x19));
  }
  TDelayNodeOperator<Metasound::FTime>::ExecuteInternal
            ((TDelayNodeOperator<Metasound::FTime> *)param_1,iVar8,iVar1);
  return;
}

// ExecuteFunction @ 14b06b850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if ((bVar2) && (3 < (byte)LogMetaSound._0_1_)) {
    ::FString::PrintfImpl(&local_18,L"%d");
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_Metasound::TPrintLogOperator<int>::Execute(void)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteFunction @ 14b06b930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if ((bVar2) && (3 < (byte)LogMetaSound._0_1_)) {
    ::FString::PrintfImpl(&local_18,L"%f");
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_Metasound::TPrintLogOperator<float>::Execute(void)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteFunction @ 14b06ba20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<FString>_>::ExecuteFunction
          (IOperator *param_1)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if ((bVar2) && (3 < (byte)LogMetaSound._0_1_)) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = *(int *)((longlong)param_1[10] + 8);
    lVar3 = (longlong)local_10;
    _Src = *(void **)param_1[10];
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar3 * 2);
    }
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_Metasound::TPrintLogOperator<FString>::Execute(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// ExecuteFunction @ 14b06bb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<bool>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if ((bVar2) && (3 < (byte)LogMetaSound._0_1_)) {
    pwVar3 = L"true";
    if (*(char *)param_1[10] == '\0') {
      pwVar3 = L"false";
    }
    ::FString::FString(&local_18,pwVar3);
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_Metasound::TPrintLogOperator<bool>::Execute(void)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteFunction @ 14b06bc50

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b06bca0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Audio::EDynamicFilterType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b06bdb0

void __cdecl
Metasound::TExecutableOperator<Metasound::FBPMToSecondsOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBPMToSecondsOperator::UpdateTime((FBPMToSecondsOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b06be00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FBitcrusherOperator>::ExecuteFunction(IOperator *param_1)

{
  FBitCrusher *this;
  int iVar1;
  IOperator IVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  IVar2 = param_1[6];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (iVar1 == *(int *)((longlong)IVar2 + 8)) {
    this = (FBitCrusher *)(param_1 + 0x11);
    fVar7 = *(float *)param_1[10];
    if (*(float *)&param_1[0x16].field_0x4 <= *(float *)param_1[10]) {
      fVar7 = *(float *)&param_1[0x16].field_0x4;
    }
    if (fVar7 <= __real_3f800000) {
      fVar7 = __real_3f800000;
    }
    if (__real_322bcc77 <
        (float)((uint)(*(float *)&param_1[0x15].field_0x4 - fVar7) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      Audio::FBitCrusher::SetSampleRateCrush(this,fVar7);
      *(float *)&param_1[0x15].field_0x4 = fVar7;
    }
    fVar6 = Audio::FBitCrusher::GetMaxBitDepth();
    fVar7 = *(float *)param_1[0xe];
    if (fVar6 <= *(float *)param_1[0xe]) {
      fVar7 = fVar6;
    }
    if (fVar7 <= __real_3f800000) {
      fVar7 = __real_3f800000;
    }
    if (__real_322bcc77 <
        (float)((uint)(*(float *)(param_1 + 0x16) - fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff)
       ) {
      Audio::FBitCrusher::SetBitDepthCrush(this,fVar7);
      *(float *)(param_1 + 0x16) = fVar7;
    }
    IVar2 = param_1[6];
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar3 = *(float **)IVar2;
    IVar2 = param_1[2];
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FBitCrusher::ProcessAudio(this,*(float **)IVar2,iVar1,pfVar3);
  }
  return;
}

// ExecuteFunction @ 14b06bfd0

void __cdecl
Metasound::TExecutableOperator<Metasound::FCompressorOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCompressorOperator::Execute((FCompressorOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b06c020

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b06c070

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b06c0c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)*(int *)param_1[2];
  return;
}

// ExecuteFunction @ 14b06c120

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)param_1[6] = *(int *)param_1[2] != 0;
  return;
}

// ExecuteFunction @ 14b06c170

void __cdecl
Metasound::TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = powf(__real_41200000,*(float *)param_1[2] * __real_3d4ccccd);
  *(float *)param_1[6] = fVar3;
  return;
}

// ExecuteFunction @ 14b06c1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FDiffuserOperator>::ExecuteFunction(IOperator *param_1)

{
  IOperator IVar1;
  int iVar2;
  void *_Src;
  FLongDelayAPF *this;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  IOperator IVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  IVar6 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar6 + 0x10) != *(int *)((longlong)IVar6 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)((longlong)IVar6 + 8);
  IVar6 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar6 + 0x10) != *(int *)((longlong)IVar6 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  _Src = *(void **)IVar6;
  IVar6 = param_1[0xf];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar6 + 0x10) != *(int *)((longlong)IVar6 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memcpy(*(void **)IVar6,_Src,(longlong)iVar2 << 2);
  IVar6 = param_1[0x12];
  iVar2 = *(int *)(param_1 + 0x13);
  fVar7 = *(float *)param_1[0xb];
  if (__real_3f7ff972 <= *(float *)param_1[0xb]) {
    fVar7 = __real_3f7ff972;
  }
  IVar1 = (IOperator)((longlong)IVar6 + (longlong)iVar2 * 8);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  while( true ) {
    if (*(int *)(param_1 + 0x13) != iVar2) {
      `TCheckedPointerIterator<Audio::FLongDelayAPF_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (IVar6 == IVar1) break;
    this = *(FLongDelayAPF **)IVar6;
    this->G = fVar7;
    IVar3 = param_1[0xf];
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (*(int *)&(((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)IVar3 + 0x10))->
                 AllocatorInstance).Data != *(int *)((longlong)IVar3 + 8))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FLongDelayAPF::ProcessAudio(this,(TArray<float,TAlignedHeapAllocator<16>_> *)IVar3);
    IVar6 = (IOperator)((longlong)IVar6 + 8);
  }
  return;
}

// ExecuteFunction @ 14b06c370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FDopplerPitchShiftOperator>::ExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  Audio::FTapDelayPitchShifter::SetDelayLength
            ((FTapDelayPitchShifter *)(param_1 + 0x1c),*(float *)param_1[10]);
  Audio::FTapDelayPitchShifter::SetPitchShift
            ((FTapDelayPitchShifter *)(param_1 + 0x1c),*(float *)param_1[6]);
  IVar2 = param_1[0xe];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = *(float **)IVar2;
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FTapDelayPitchShifter::ProcessAudio
            ((FTapDelayPitchShifter *)(param_1 + 0x1c),(FDelay *)(param_1 + 0x11),*(float **)IVar2,
             iVar1,pfVar3);
  return;
}

// ExecuteFunction @ 14b06c4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FDynamicFilterOperator>::ExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = *(float **)IVar2;
  IVar2 = param_1[0x3b];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = *(float **)IVar2;
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  FDynamicFilterOperator::UpdateFilterSettings((FDynamicFilterOperator *)param_1);
  if (*(char *)(param_1 + 0x39) == '\0') {
    Audio::FDynamicStateVariableFilter::ProcessAudio
              ((FDynamicStateVariableFilter *)(param_1 + 0x3e),pfVar3,pfVar4,iVar1);
  }
  else {
    IVar2 = param_1[6];
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FDynamicStateVariableFilter::ProcessAudio
              ((FDynamicStateVariableFilter *)(param_1 + 0x3e),pfVar3,pfVar4,*(float **)IVar2,iVar1)
    ;
  }
  return;
}

// ExecuteFunction @ 14b06c610

void __cdecl
Metasound::TExecutableOperator<Metasound::FEnvelopeFollowerOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FEnvelopeFollowerOperator::Execute((FEnvelopeFollowerOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b06c660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerOnNanOperator>::ExecuteFunction
          (IOperator *param_1)

{
  char cVar1;
  int iVar2;
  IOperator IVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar1 = *(char *)param_1[6];
  FTrigger::AdvanceBlock((FTrigger *)param_1[10]);
  IVar3 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar3 + 0x10) != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar4 = *(longlong *)IVar3;
  IVar3 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar3 + 0x10) != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)((longlong)IVar3 + 8);
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < (longlong)iVar2) {
    do {
      if (((cVar1 == '\0') || (*(char *)(param_1 + 0xd) == '\0')) &&
         (iVar7 = _finite((double)*(float *)(lVar4 + uVar8 * 4)), iVar7 == 0)) {
        FTrigger::TriggerFrame((FTrigger *)param_1[10],(int)uVar9);
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while ((longlong)uVar8 < (longlong)iVar2);
  }
  return;
}

// GetExecuteFunction @ 14b073a10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBPMToSecondsOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FBPMToSecondsOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b073a20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FDecibelsToLinearGainOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b073a30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDopplerPitchShiftOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FDopplerPitchShiftOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b073a40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FEnvelopeFollowerOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FEnvelopeFollowerOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b073a50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnNanOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerOnNanOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b076370

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBPMToSecondsOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FBPMToSecondsOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b076380

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FDecibelsToLinearGainOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b076390

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDopplerPitchShiftOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FDopplerPitchShiftOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0763a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FEnvelopeFollowerOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FEnvelopeFollowerOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0763b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnNanOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerOnNanOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0763d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FBPMToSecondsOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FBPMToSecondsOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FBPMToSecondsOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b0763e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FDecibelsToLinearGainOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FDecibelsToLinearGainOperator>::ResetFunction;
}

// GetResetFunction @ 14b0763f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDopplerPitchShiftOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FDopplerPitchShiftOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FDopplerPitchShiftOperator>::ResetFunction;
}

// GetResetFunction @ 14b076400

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FEnvelopeFollowerOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FEnvelopeFollowerOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FEnvelopeFollowerOperator>::ResetFunction;
}

// GetResetFunction @ 14b076410

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnNanOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerOnNanOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FTriggerOnNanOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b07c910

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07c920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07c930

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07cd30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07cd40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07cd50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07d240

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07d250

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07d2f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07d300

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07d310

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07d360

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07da40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07da50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07da60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07dcd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07dce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07dcf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07e390

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07e3a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07e3b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07e720

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07e730

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07e740

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07ec80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07ecc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07ed00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07f340

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07f350

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07f360

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b07f8a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b07f8b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b07f8c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b080030

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
::GetResetFunction(TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b080040

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b080050

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b080850

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
::GetResetFunction(TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b080860

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b080870

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b080d30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
::GetResetFunction(TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b080dd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b080de0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0825e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0825f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b082600

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b082a40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FConvertQToBandwidthNodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b082a50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b082aa0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0844d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b084570

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b084580

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b085c20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b085c30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b085c40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b085f40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b085f50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b085f60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0865e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFlangerOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FFlangerOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FFlangerOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b0865f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFlangerOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FFlangerOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b086600

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFlangerOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FFlangerOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b086d00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b086d10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b086d20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b087360

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b087370

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b087380

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b087870

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLimiterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FLimiterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FLimiterOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b087880

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLimiterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FLimiterOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b087890

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLimiterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FLimiterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b088490

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0884a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0884b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b088840

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0888d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0888e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b089430

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b089440

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b089450

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b08a7a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b08a7b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b08a880

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b08aba0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b08abb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b08abc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b08b090

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLinearToLogFrequencyOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FLinearToLogFrequencyOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FLinearToLogFrequencyOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b08b0a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLinearToLogFrequencyOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FLinearToLogFrequencyOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b08b0b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLinearToLogFrequencyOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FLinearToLogFrequencyOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b08b7b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b08b7c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b08b7d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b08c8d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b08c8e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b08c8f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0906d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0906e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0906f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b094be0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b094bf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b094c00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b095070

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b095080

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b095090

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0955d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0955e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b095760

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0959f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b095a00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b095a10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0960a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLowFrequencyNoiseOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FLowFrequencyNoiseOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FLowFrequencyNoiseOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b0960b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLowFrequencyNoiseOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FLowFrequencyNoiseOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0960c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLowFrequencyNoiseOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FLowFrequencyNoiseOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b097e10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b097e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b097e40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0981e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0981f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b098200

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b098500

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b098510

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b098520

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b098a70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b098a80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b098a90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b098d50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b098d60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b098d70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b099150

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b099160

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b099170

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0996e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
::GetResetFunction(TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0996f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b099700

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_> @ 14b0b5000

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
::
~TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_> @ 14b0b5020

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
::
~TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_> @ 14b0b5040

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
::
~TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
          (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_> @ 14b0b5060

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_> @ 14b0b5080

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_> @ 14b0b50a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_> @ 14b0b50c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_> @ 14b0b50e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_> @ 14b0b5100

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_> @ 14b0b5120

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_> @ 14b0b5140

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_> @ 14b0b5160

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_> @ 14b0b5180

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_> @ 14b0b51a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_> @ 14b0b51c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_> @ 14b0b51e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_> @ 14b0b5200

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_> @ 14b0b5220

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_> @ 14b0b5240

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_> @ 14b0b5260

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_> @ 14b0b5280

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_> @ 14b0b52a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_> @ 14b0b52c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::
~TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
          (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_> @ 14b0b52e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_> @ 14b0b5300

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_> @ 14b0b5320

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_> @ 14b0b5340

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_> @ 14b0b5360

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_> @ 14b0b5380

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_> @ 14b0b53a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_> @ 14b0b53c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator> @ 14b0b53e0

void __thiscall
Metasound::TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator>::
~TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator>
          (TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator> @ 14b0b5400

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator> @ 14b0b5420

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator> @ 14b0b5440

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator> @ 14b0b5460

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator> @ 14b0b5480

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator> @ 14b0b54a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator> @ 14b0b54c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator> @ 14b0b54e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FFlangerOperator> @ 14b0b5500

void __thiscall
Metasound::TExecutableOperator<Metasound::FFlangerOperator>::
~TExecutableOperator<Metasound::FFlangerOperator>
          (TExecutableOperator<Metasound::FFlangerOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FFlangerOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FFreqToMidiOperator> @ 14b0b5520

void __thiscall
Metasound::TExecutableOperator<Metasound::FFreqToMidiOperator>::
~TExecutableOperator<Metasound::FFreqToMidiOperator>
          (TExecutableOperator<Metasound::FFreqToMidiOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FFreqToMidiOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator> @ 14b0b5540

void __thiscall
Metasound::TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator>::
~TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator>
          (TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FGrainDelayOperator> @ 14b0b5560

void __thiscall
Metasound::TExecutableOperator<Metasound::FGrainDelayOperator>::
~TExecutableOperator<Metasound::FGrainDelayOperator>
          (TExecutableOperator<Metasound::FGrainDelayOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FGrainDelayOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FITDPannerOperator> @ 14b0b5580

void __thiscall
Metasound::TExecutableOperator<Metasound::FITDPannerOperator>::
~TExecutableOperator<Metasound::FITDPannerOperator>
          (TExecutableOperator<Metasound::FITDPannerOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FITDPannerOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FInterpToOperator> @ 14b0b55a0

void __thiscall
Metasound::TExecutableOperator<Metasound::FInterpToOperator>::
~TExecutableOperator<Metasound::FInterpToOperator>
          (TExecutableOperator<Metasound::FInterpToOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FInterpToOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FLimiterOperator> @ 14b0b55c0

void __thiscall
Metasound::TExecutableOperator<Metasound::FLimiterOperator>::
~TExecutableOperator<Metasound::FLimiterOperator>
          (TExecutableOperator<Metasound::FLimiterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FLimiterOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FLinearGainToDecibelsOperator> @ 14b0b55e0

void __thiscall
Metasound::TExecutableOperator<Metasound::FLinearGainToDecibelsOperator>::
~TExecutableOperator<Metasound::FLinearGainToDecibelsOperator>
          (TExecutableOperator<Metasound::FLinearGainToDecibelsOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FLinearGainToDecibelsOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FLinearToLogFrequencyOperator> @ 14b0b5600

void __thiscall
Metasound::TExecutableOperator<Metasound::FLinearToLogFrequencyOperator>::
~TExecutableOperator<Metasound::FLinearToLogFrequencyOperator>
          (TExecutableOperator<Metasound::FLinearToLogFrequencyOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FLinearToLogFrequencyOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FLowFrequencyNoiseOperator> @ 14b0b5620

void __thiscall
Metasound::TExecutableOperator<Metasound::FLowFrequencyNoiseOperator>::
~TExecutableOperator<Metasound::FLowFrequencyNoiseOperator>
          (TExecutableOperator<Metasound::FLowFrequencyNoiseOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FLowFrequencyNoiseOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b0d3b70

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FAudioRange>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMapRangeNodePrivate::FAudioRange::DoMapping((FAudioRange *)(param_1 + 1));
  return;
}

// ExecuteFunction @ 14b0d3bc0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FFloatRange>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMapRangeNodePrivate::FFloatRange::DoMapping((FFloatRange *)(param_1 + 1));
  return;
}

// ExecuteFunction @ 14b0d3c10

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMapRangeOperator<Metasound::MetasoundMapRangeNodePrivate::FIntRange>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMapRangeNodePrivate::FIntRange::DoMapping((FIntRange *)(param_1 + 1));
  return;
}

// ExecuteFunction @ 14b0d3c60

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioFloatNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<Metasound::FAudioBuffer,float>::Calculate
            ((TMathOpAdd<Metasound::FAudioBuffer,float> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3cc0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddAudioNode,Metasound::TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            ((TMathOpAdd<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3d20

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddFloatNode,Metasound::TMathOpAdd<float,float>,float,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<float,float>::Calculate
            ((TMathOpAdd<float,float> *)(param_1 + 1),(TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3d80

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddInt32Node,Metasound::TMathOpAdd<int,int>,int,int>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<int,int>::Calculate
            ((TMathOpAdd<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3de0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FAddTimeNode,Metasound::TMathOpAdd<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpAdd<Metasound::FTime,Metasound::FTime>::Calculate
            ((TMathOpAdd<Metasound::FTime,Metasound::FTime> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3e40

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideFloatNode,Metasound::TMathOpDivide<float,float>,float,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpDivide<float,float>::Calculate
            ((TMathOpDivide<float,float> *)(param_1 + 1),(TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3ea0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideInt32Node,Metasound::TMathOpDivide<int,int>,int,int>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpDivide<int,int>::Calculate
            ((TMathOpDivide<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3f00

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FDivideTimeFloatNode,Metasound::TMathOpDivide<Metasound::FTime,float>,Metasound::FTime,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpDivide<Metasound::FTime,float>::Calculate
            ((TMathOpDivide<Metasound::FTime,float> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3f60

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FLogarithmFloatNode,Metasound::TMathOpLogarithm<float,float>,float,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpLogarithm<float,float>::Calculate
            ((TMathOpLogarithm<float,float> *)(param_1 + 1),
             (TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d3fc0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FModuloInt32Node,Metasound::TMathOpModulo<int,int>,int,int>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpModulo<int,int>::Calculate
            ((TMathOpModulo<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d4020

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioFloatNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,float>,Metasound::FAudioBuffer,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<Metasound::FAudioBuffer,float>::Calculate
            ((TMathOpMultiply<Metasound::FAudioBuffer,float> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d4080

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyAudioNode,Metasound::TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            ((TMathOpMultiply<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d40e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyFloatNode,Metasound::TMathOpMultiply<float,float>,float,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<float,float>::Calculate
            ((TMathOpMultiply<float,float> *)(param_1 + 1),
             (TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d4140

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyInt32Node,Metasound::TMathOpMultiply<int,int>,int,int>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<int,int>::Calculate
            ((TMathOpMultiply<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d41a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FMultiplyTimeFloatNode,Metasound::TMathOpMultiply<Metasound::FTime,float>,Metasound::FTime,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpMultiply<Metasound::FTime,float>::Calculate
            ((TMathOpMultiply<Metasound::FTime,float> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d4200

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FPowerFloatNode,Metasound::TMathOpPower<float,float>,float,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpPower<float,float>::Calculate
            ((TMathOpPower<float,float> *)(param_1 + 1),(TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d4260

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractAudioNode,Metasound::TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>,Metasound::FAudioBuffer,Metasound::FAudioBuffer>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer>::Calculate
            ((TMathOpSubtract<Metasound::FAudioBuffer,Metasound::FAudioBuffer> *)(param_1 + 1),
             (TDataReadReference<Metasound::FAudioBuffer> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 6),(TDataWriteReference<Metasound::FAudioBuffer> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d42c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractFloatNode,Metasound::TMathOpSubtract<float,float>,float,float>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<float,float>::Calculate
            ((TMathOpSubtract<float,float> *)(param_1 + 1),
             (TDataReadReference<float> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<float> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d4320

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractInt32Node,Metasound::TMathOpSubtract<int,int>,int,int>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<int,int>::Calculate
            ((TMathOpSubtract<int,int> *)(param_1 + 1),(TDataReadReference<int> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<int>,TSizedDefaultAllocator<32>_> *)(param_1 + 6)
             ,(TDataWriteReference<int> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d4380

void __cdecl
Metasound::
TExecutableOperator<Metasound::TMathOperator<Metasound::FSubtractTimeNode,Metasound::TMathOpSubtract<Metasound::FTime,Metasound::FTime>,Metasound::FTime,Metasound::FTime>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMathOpSubtract<Metasound::FTime,Metasound::FTime>::Calculate
            ((TMathOpSubtract<Metasound::FTime,Metasound::FTime> *)(param_1 + 1),
             (TDataReadReference<Metasound::FTime> *)(param_1 + 2),
             (TArray<Metasound::TDataReadReference<Metasound::FTime>,TSizedDefaultAllocator<32>_> *)
             (param_1 + 6),(TDataWriteReference<Metasound::FTime> *)(param_1 + 8));
  return;
}

// ExecuteFunction @ 14b0d43e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::Execute
            (param_1);
  return;
}

// ExecuteFunction @ 14b0d4430

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b0d4480

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::Execute
            (param_1);
  return;
}

// ExecuteFunction @ 14b0d44d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::
  TReceiverOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::Execute
            (param_1);
  return;
}

// ExecuteFunction @ 14b0d4520

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Audio::Grain::EEnvelope,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b0d4630

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::EEnvelopePeakMode,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b0d4740

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::EKneeMode,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b0d4850

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::
    TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> *)
             (param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b0d4960

void __cdecl
Metasound::TExecutableOperator<Metasound::FConvertQToBandwidthNodeOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  if (*(float *)param_1[2] <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  fVar3 = logf(SQRT(__real_3f800000 / (fVar3 * fVar3) + __real_40800000) * __real_3f000000 +
               __real_3f000000 / fVar3);
  *(float *)param_1[6] = fVar3 * __real_4038aa3b;
  return;
}

// ExecuteFunction @ 14b0d4a00

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b0d4a50

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b0d4aa0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b0d4af0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b0d4b40

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b0d4b90

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b0d4be0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b0d4c30

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b0d4c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FFlangerOperator>::ExecuteFunction(IOperator *param_1)

{
  FFlanger *this;
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this = (FFlanger *)(param_1 + 0x1a);
  Audio::FFlanger::SetModulationRate(this,*(float *)param_1[6]);
  Audio::FFlanger::SetCenterDelay(this,*(float *)param_1[0xe]);
  Audio::FFlanger::SetModulationDepth(this,*(float *)param_1[10]);
  Audio::FFlanger::SetMixLevel(this,*(float *)param_1[0x12]);
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  IVar2 = param_1[0x16];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&(((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)IVar2 + 0x10))->
               AllocatorInstance).Data != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  IVar3 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&(((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)IVar3 + 0x10))->
               AllocatorInstance).Data != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>_const&___ptr64(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FFlanger::ProcessAudio
            (this,(TArray<float,TAlignedHeapAllocator<16>_> *)IVar3,iVar1,
             (TArray<float,TAlignedHeapAllocator<16>_> *)IVar2);
  return;
}

// ExecuteFunction @ 14b0d4dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Metasound::TExecutableOperator<Metasound::FFreqToMidiOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  if (__real_322bcc77 <
      (float)((uint)(fVar3 - *(float *)(param_1 + 9)) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)(param_1 + 9) = fVar3;
    fVar3 = logf(fVar3 * ___real_3b14f209);
    *(float *)param_1[6] = fVar3 * ___real_418a7fac + __real_428a0000;
  }
  return;
}

// ExecuteFunction @ 14b0d4e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Metasound::TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  if (__real_322bcc77 <
      (float)((uint)(fVar3 - *(float *)(param_1 + 9)) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)(param_1 + 9) = fVar3;
    fVar3 = *(float *)param_1[2];
    if (fVar3 <= 0.0) {
      *(undefined4 *)param_1[6] = __real_c39f73da;
      return;
    }
    fVar3 = logf(fVar3);
    *(float *)param_1[6] = fVar3 * ___real_418a7fac;
  }
  return;
}

// ExecuteFunction @ 14b0d4ef0

void __cdecl
Metasound::TExecutableOperator<Metasound::FGrainDelayOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FGrainDelayOperator::Execute((FGrainDelayOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b0d4f40

void __cdecl
Metasound::TExecutableOperator<Metasound::FITDPannerOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FITDPannerOperator::Execute((FITDPannerOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b0d4f90

void __cdecl
Metasound::TExecutableOperator<Metasound::FInterpToOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  if (__real_322bcc77 <
      (float)((uint)(*(float *)(param_1 + 0x11) - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    *(float *)(param_1 + 0x11) = fVar3;
    Audio::FVolumeFader::StartFade
              ((FVolumeFader *)(param_1 + 0xd),*(float *)param_1[2],(float)*(double *)param_1[6],
               Linear);
  }
  bVar2 = Audio::FVolumeFader::IsFading((FVolumeFader *)(param_1 + 0xd));
  if (bVar2) {
    Audio::FVolumeFader::Update((FVolumeFader *)(param_1 + 0xd),*(float *)&param_1[0x10].field_0x4);
  }
  fVar3 = Audio::FVolumeFader::GetVolume((FVolumeFader *)(param_1 + 0xd));
  *(float *)param_1[10] = fVar3;
  return;
}

// ExecuteFunction @ 14b0d5050

void __cdecl
Metasound::TExecutableOperator<Metasound::FLimiterOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLimiterOperator::Execute((FLimiterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b0d50a0

void __cdecl
Metasound::TExecutableOperator<Metasound::FLinearGainToDecibelsOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar4 = *(float *)param_1[2];
  if (*(float *)param_1[2] <= __real_00800000) {
    fVar4 = __real_00800000;
  }
  fVar3 = logf(fVar4);
  fVar4 = fVar3 * __real_410af967;
  if (fVar3 * __real_410af967 <= __real_c3700000) {
    fVar4 = __real_c3700000;
  }
  *(float *)param_1[6] = fVar4;
  return;
}

// ExecuteFunction @ 14b0d5110

void __cdecl
Metasound::TExecutableOperator<Metasound::FLinearToLogFrequencyOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (__real_322bcc77 <
      (float)((uint)(*(float *)param_1[2] - *(float *)(param_1 + 0x19)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)(param_1 + 0x19) = *(float *)param_1[2];
    fVar3 = FLinearToLogFrequencyOperator::GetOutputValue((FLinearToLogFrequencyOperator *)param_1);
    *(float *)param_1[0x16] = fVar3;
  }
  return;
}

// ExecuteFunction @ 14b0d5190

void __cdecl
Metasound::TExecutableOperator<Metasound::FLowFrequencyNoiseOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLowFrequencyNoiseOperator::Execute((FLowFrequencyNoiseOperator *)param_1);
  return;
}

// GetExecuteFunction @ 14b0d6690

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFreqToMidiOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FFreqToMidiOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b0d66a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b0d66b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FGrainDelayOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FGrainDelayOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b0d66c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FITDPannerOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FITDPannerOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b0d66d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FInterpToOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FInterpToOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b0d66e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLinearGainToDecibelsOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FLinearGainToDecibelsOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0da000

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFreqToMidiOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FFreqToMidiOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0da010

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator>::
GetPostExecuteFunction(TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0da020

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FGrainDelayOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FGrainDelayOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0da030

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FITDPannerOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FITDPannerOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0da040

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FInterpToOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FInterpToOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b0da050

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLinearGainToDecibelsOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FLinearGainToDecibelsOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0da060

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFreqToMidiOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FFreqToMidiOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FFreqToMidiOperator>::
         ResetFunction;
}

// GetResetFunction @ 14b0da070

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FFrequencyMultiplierToSemitoneOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FFrequencyMultiplierToSemitoneOperator>::ResetFunction;
}

// GetResetFunction @ 14b0da080

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FGrainDelayOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FGrainDelayOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FGrainDelayOperator>::
         ResetFunction;
}

// GetResetFunction @ 14b0da090

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FITDPannerOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FITDPannerOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FITDPannerOperator>::
         ResetFunction;
}

// GetResetFunction @ 14b0da0a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FInterpToOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FInterpToOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FInterpToOperator>::
         ResetFunction;
}

// GetResetFunction @ 14b0da0b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLinearGainToDecibelsOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FLinearGainToDecibelsOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FLinearGainToDecibelsOperator>::ResetFunction;
}

// GetResetFunction @ 14b0e7e00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0e7e10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0e7e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0e8070

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideEncodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMidSideEncodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMidSideEncodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b0e80e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideEncodeOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FMidSideEncodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0e80f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideEncodeOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMidSideEncodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0e92b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0e92c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0e9300

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ea210

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0ea220

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0ea290

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0eba50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0eba60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0eba70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ebe90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideDecodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMidSideDecodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMidSideDecodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b0ebee0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideDecodeOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FMidSideDecodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0ebef0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideDecodeOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMidSideDecodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ecc90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0ecca0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0eccb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ed0e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0ed0f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0ed100

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ef3e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0ef3f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0ef400

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ef6e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0ef6f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0ef700

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0f5ac0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0f5ad0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0f5ae0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0f6060

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0f6070

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0f6080

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0f8ba0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0f8bc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0f8bd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0fb380

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0fb390

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0fb400

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0fcb50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<8,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b0fcb60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0fcb70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0fd7c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<7,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b0fd7d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0fd7e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0fdfa0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<6,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b0fdfb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0fdfc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0fe010

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0fe020

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0fe090

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0fecb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<5,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b0fed20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0fed30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ff250

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b0ff260

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0ff270

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b0ff6b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<4,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b0ff6c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b0ff830

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b100600

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<3,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b100610

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b100620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1010e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<2,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1010f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b101100

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b101300

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b101310

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b101590

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b102080

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<8,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b102090

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1020a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1023b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1023f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b102400

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b103130

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<7,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b103140

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b103150

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b103f10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<6,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b103f80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b103f90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b105690

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<5,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1056a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1056b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b105eb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b105ec0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b105ed0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b105fc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<4,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b105fd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b105fe0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b106700

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<3,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b106710

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b106720

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b107300

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioMixerNodeOperator<2,1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b107310

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1073b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1078d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1078e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1078f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b107bd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b107be0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b107c00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b108580

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b108590

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1085a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b108610

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TMinNodeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMinNodeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b108620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TMinNodeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b108670

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMinNodeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b108ba0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TMinNodeOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMinNodeOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b108bb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TMinNodeOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b108bc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMinNodeOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1093c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TMidiToFreqOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMidiToFreqOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1093d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TMidiToFreqOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1093e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMidiToFreqOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b109640

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TMidiToFreqOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMidiToFreqOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b109650

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TMidiToFreqOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b109660

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMidiToFreqOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b109ce0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b109cf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b109d00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10a1c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>::
GetResetFunction(TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b10a1d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10a1e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10a5f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TMaxNodeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMaxNodeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b10a600

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TMaxNodeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10a610

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMaxNodeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10aa40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TMaxNodeOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TMaxNodeOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b10aa50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TMaxNodeOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10aac0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TMaxNodeOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10aff0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b10b000

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10b010

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10b5d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b10b5e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10b5f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10ca20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b10ca30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10ca40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10d210

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b10d220

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10d230

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10d8c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b10d8d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10d940

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10f610

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b10f620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10f630

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b10fd40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b10fd50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b10fd60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b110ca0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b110cb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b110cc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b112800

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b112810

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetResetFunction @ 14b112820

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
         ::ResetFunction;
}

// GetPostExecuteFunction @ 14b112830

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetExecuteFunction @ 14b112840

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b112850

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_> @ 14b142f00

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_> @ 14b142f20

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_> @ 14b142f40

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_> @ 14b142f60

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_> @ 14b142f80

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_> @ 14b142fa0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_> @ 14b142fc0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_> @ 14b142fe0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_> @ 14b143000

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_> @ 14b143020

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_> @ 14b143040

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_> @ 14b143060

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_> @ 14b143080

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_> @ 14b1430a0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_>::
~TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_>
          (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMaxNodeOperator<int>_> @ 14b1430c0

void __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<int>_>::
~TExecutableOperator<Metasound::TMaxNodeOperator<int>_>
          (TExecutableOperator<Metasound::TMaxNodeOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMaxNodeOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMaxNodeOperator<float>_> @ 14b1430e0

void __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<float>_>::
~TExecutableOperator<Metasound::TMaxNodeOperator<float>_>
          (TExecutableOperator<Metasound::TMaxNodeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMaxNodeOperator<float>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_> @ 14b143100

void __thiscall
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMidiToFreqOperator<int>_> @ 14b143120

void __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<int>_>::
~TExecutableOperator<Metasound::TMidiToFreqOperator<int>_>
          (TExecutableOperator<Metasound::TMidiToFreqOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMidiToFreqOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMidiToFreqOperator<float>_> @ 14b143140

void __thiscall
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<float>_>::
~TExecutableOperator<Metasound::TMidiToFreqOperator<float>_>
          (TExecutableOperator<Metasound::TMidiToFreqOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMidiToFreqOperator<float>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TMinNodeOperator<int>_> @ 14b143160

void __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<int>_>::
~TExecutableOperator<Metasound::TMinNodeOperator<int>_>
          (TExecutableOperator<Metasound::TMinNodeOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMinNodeOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMinNodeOperator<float>_> @ 14b143180

void __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<float>_>::
~TExecutableOperator<Metasound::TMinNodeOperator<float>_>
          (TExecutableOperator<Metasound::TMinNodeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMinNodeOperator<float>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_> @ 14b1431a0

void __thiscall
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>::
~TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>
          (TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_> *this)

{
  *this = (TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_> @ 14b1431c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_> @ 14b1431e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_> @ 14b143200

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_> @ 14b143220

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_> @ 14b143240

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_> @ 14b143260

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_> @ 14b143280

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_> @ 14b1432a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_> @ 14b1432c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_> @ 14b1432e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_> @ 14b143300

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_> @ 14b143320

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_> @ 14b143340

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_> @ 14b143360

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_> @ 14b143380

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_> @ 14b1433a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_> @ 14b1433c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::
~TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_> @ 14b1433e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_> @ 14b143400

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_> @ 14b143420

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_> @ 14b143440

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_> @ 14b143460

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_> @ 14b143480

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_> @ 14b1434a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_> @ 14b1434c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_> @ 14b1434e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_> @ 14b143500

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_> @ 14b143520

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_> @ 14b143540

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_> @ 14b143560

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_> @ 14b143580

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator> @ 14b1435a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator> @ 14b1435c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator> @ 14b1435e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator> @ 14b143600

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator> @ 14b143620

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator> @ 14b143640

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator> @ 14b143660

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator> @ 14b143680

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator> @ 14b1436a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator> @ 14b1436c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator> @ 14b1436e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator> @ 14b143700

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator> @ 14b143720

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator> @ 14b143740

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator> @ 14b143760

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator> @ 14b143780

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FLfoOperator> @ 14b1437a0

void __thiscall
Metasound::TExecutableOperator<Metasound::FLfoOperator>::
~TExecutableOperator<Metasound::FLfoOperator>(TExecutableOperator<Metasound::FLfoOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FLfoOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMidSideDecodeOperator> @ 14b1437c0

void __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideDecodeOperator>::
~TExecutableOperator<Metasound::FMidSideDecodeOperator>
          (TExecutableOperator<Metasound::FMidSideDecodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMidSideDecodeOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMidSideEncodeOperator> @ 14b1437e0

void __thiscall
Metasound::TExecutableOperator<Metasound::FMidSideEncodeOperator>::
~TExecutableOperator<Metasound::FMidSideEncodeOperator>
          (TExecutableOperator<Metasound::FMidSideEncodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMidSideEncodeOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMidiNoteQuantizerOperator> @ 14b143800

void __thiscall
Metasound::TExecutableOperator<Metasound::FMidiNoteQuantizerOperator>::
~TExecutableOperator<Metasound::FMidiNoteQuantizerOperator>
          (TExecutableOperator<Metasound::FMidiNoteQuantizerOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMidiNoteQuantizerOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator> @ 14b143820

void __thiscall
Metasound::TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator>::
~TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator>
          (TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b18ac40

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<2,1>::Execute((TAudioMixerNodeOperator<2,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b18ac90

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<2,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<2,2>::Execute((TAudioMixerNodeOperator<2,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b18ace0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<3,1>::Execute((TAudioMixerNodeOperator<3,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b18ad30

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<3,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<3,2>::Execute((TAudioMixerNodeOperator<3,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b18ad80

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<4,1>::Execute((TAudioMixerNodeOperator<4,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b18add0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<4,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<4,2>::Execute((TAudioMixerNodeOperator<4,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b18ae20

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<5,1>::Execute((TAudioMixerNodeOperator<5,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b18ae70

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<5,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<5,2>::Execute((TAudioMixerNodeOperator<5,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b18aec0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<6,1>::Execute((TAudioMixerNodeOperator<6,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b18af10

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<6,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<6,2>::Execute((TAudioMixerNodeOperator<6,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b18af60

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<7,1>::Execute((TAudioMixerNodeOperator<7,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b18afb0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<7,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<7,2>::Execute((TAudioMixerNodeOperator<7,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b18b000

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<8,1>::Execute((TAudioMixerNodeOperator<8,1> *)param_1);
  return;
}

// ExecuteFunction @ 14b18b050

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioMixerNodeOperator<8,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioMixerNodeOperator<8,2>::Execute((TAudioMixerNodeOperator<8,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b18b0a0

void __cdecl
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = *(int *)param_1[6];
  if (*(int *)param_1[6] < *(int *)param_1[2]) {
    iVar2 = *(int *)param_1[2];
  }
  *(int *)param_1[10] = iVar2;
  return;
}

// ExecuteFunction @ 14b18b100

void __cdecl
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[6];
  if (*(float *)param_1[6] <= *(float *)param_1[2]) {
    fVar3 = *(float *)param_1[2];
  }
  *(float *)param_1[10] = fVar3;
  return;
}

// ExecuteFunction @ 14b18b160

void __cdecl
Metasound::TExecutableOperator<Metasound::TMaxNodeOperator<Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MetasoundMaxNodePrivate::TMax<Metasound::FAudioBuffer>::GetMax
            ((FAudioBuffer *)param_1[2],(FAudioBuffer *)param_1[6],(FAudioBuffer *)param_1[10]);
  return;
}

// ExecuteFunction @ 14b18b1b0

void __cdecl
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar5 = __real_40000000;
  iVar3 = *(int *)param_1[2];
  if (iVar3 != *(int *)(param_1 + 9)) {
    *(int *)(param_1 + 9) = iVar3;
    iVar4 = 0x7f;
    if (iVar3 < 0x7f) {
      iVar4 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    fVar5 = powf(fVar5,((float)iVar3 - __real_428a0000) * __real_3daaaaab);
    *(float *)param_1[6] = (float)(int)(fVar5 * __real_43dc0000);
  }
  return;
}

// ExecuteFunction @ 14b18b250

void __cdecl
Metasound::TExecutableOperator<Metasound::TMidiToFreqOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  if (__real_322bcc77 <
      (float)((uint)(fVar3 - *(float *)(param_1 + 9)) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)(param_1 + 9) = fVar3;
    if (__real_42fe0000 <= fVar3) {
      fVar3 = __real_42fe0000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = powf(__real_40000000,(fVar3 - __real_428a0000) * __real_3daaaaab);
    *(float *)param_1[6] = fVar3 * __real_43dc0000;
  }
  return;
}

// ExecuteFunction @ 14b18b300

void __cdecl
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar2 = *(int *)param_1[6];
  if (*(int *)param_1[2] < *(int *)param_1[6]) {
    iVar2 = *(int *)param_1[2];
  }
  *(int *)param_1[10] = iVar2;
  return;
}

// ExecuteFunction @ 14b18b360

void __cdecl
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[6];
  if (*(float *)param_1[2] <= *(float *)param_1[6]) {
    fVar3 = *(float *)param_1[2];
  }
  *(float *)param_1[10] = fVar3;
  return;
}

// ExecuteFunction @ 14b18b3c0

void __cdecl
Metasound::TExecutableOperator<Metasound::TMinNodeOperator<Metasound::FAudioBuffer>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMinNodeOperator<Metasound::FAudioBuffer>::GetMin
            ((TMinNodeOperator<Metasound::FAudioBuffer> *)param_1);
  return;
}

// ExecuteFunction @ 14b18b410

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b460

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b4b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b500

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b550

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b5a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
  ::Execute((TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
             *)param_1);
  return;
}

// ExecuteFunction @ 14b18b5f0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
  ::Execute((TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
             *)param_1);
  return;
}

// ExecuteFunction @ 14b18b640

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b690

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b6e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b730

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b780

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b7d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b820

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
  ::Execute((TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
             *)param_1);
  return;
}

// ExecuteFunction @ 14b18b870

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
  ::Execute((TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
             *)param_1);
  return;
}

// ExecuteFunction @ 14b18b8c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b910

void __cdecl
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b960

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18b9b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::Execute
            (param_1);
  return;
}

// ExecuteFunction @ 14b18ba00

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18ba50

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18baa0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18baf0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::
  TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18bb40

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18bb90

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ELfoWaveshapeType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b18bca0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ENoiseType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b18bdb0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
            ::CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ESawGenerationType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b18bec0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
            ::CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ESineGenerationType,3> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b18bfd0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ESquareGenerationType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b18c0e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ETriangleGenerationType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b18c1f0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Audio::EMusicalScale::Scale,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b18c300

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18c350

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18c3a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18c3f0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18c440

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18c490

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18c4e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b18c530

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c580

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c5d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c620

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c670

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c6c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c710

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c760

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,float>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)param_1[6] = (float)*(int *)param_1[2];
  return;
}

// ExecuteFunction @ 14b18c7c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,bool>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(bool *)param_1[6] = *(int *)param_1[2] != 0;
  return;
}

// ExecuteFunction @ 14b18c810

void __cdecl
Metasound::TExecutableOperator<Metasound::FLfoOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLfoOperator::Execute((FLfoOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b18c860

void __cdecl
Metasound::TExecutableOperator<Metasound::FMidSideDecodeOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMidSideDecodeOperator::Execute((FMidSideDecodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b18c8b0

void __cdecl
Metasound::TExecutableOperator<Metasound::FMidSideEncodeOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMidSideEncodeOperator::Execute((FMidSideEncodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b18c900

void __cdecl
Metasound::TExecutableOperator<Metasound::FMidiNoteQuantizerOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMidiNoteQuantizerOperator::Execute((FMidiNoteQuantizerOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b18c950

void __cdecl
Metasound::TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator>::ExecuteFunction
          (IOperator *param_1)

{
  Scale SVar1;
  code *pcVar2;
  bool bVar3;
  ScaleDegreeSet *this;
  TArrayView<float,int> *pTVar4;
  TArrayView<float,int> local_18;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SVar1 = *(Scale *)param_1[2];
  if ((*(Scale *)(param_1 + 0xd) != SVar1) || (param_1[0xd].field_0x4 != *(char *)param_1[6])) {
    *(Scale *)(param_1 + 0xd) = SVar1;
    param_1[0xd].field_0x4 = *(undefined1 *)param_1[6];
    this = TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
           ::FindChecked(&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap,SVar1);
    pTVar4 = Audio::ScaleDegreeSet::GetScaleDegreeSet(this,&local_18,(bool)param_1[0xd].field_0x4);
    TArray<float,TSizedDefaultAllocator<32>_>::operator=<float,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)param_1[10],pTVar4);
  }
  return;
}

// GetExecuteFunction @ 14b191c40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191c50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191c60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191c70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191c80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191c90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191ca0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191cb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191cc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191cd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191ce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191cf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLfoOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FLfoOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidiNoteQuantizerOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FMidiNoteQuantizerOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b191d70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b198630

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198640

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198650

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198660

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198670

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198680

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198690

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1986a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1986b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1986c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1986d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1986e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1986f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198700

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198710

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198720

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198730

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198740

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLfoOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FLfoOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198750

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidiNoteQuantizerOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMidiNoteQuantizerOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b198760

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b198780

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198790

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b1987a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b1987b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b1987c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b1987d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b1987e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b1987f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198800

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198810

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198820

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198830

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198840

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198850

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198860

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198870

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198880

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>_>
         ::ResetFunction;
}

// GetResetFunction @ 14b198890

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FLfoOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FLfoOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FLfoOperator>::
         ResetFunction;
}

// GetResetFunction @ 14b1988a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMidiNoteQuantizerOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMidiNoteQuantizerOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMidiNoteQuantizerOperator>::ResetFunction;
}

// GetResetFunction @ 14b1988b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMusicalScaleToNoteArrayOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMusicalScaleToNoteArrayOperator>::ResetFunction;
}

// GetResetFunction @ 14b1ac960

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSuperOscillatorOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FSuperOscillatorOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FSuperOscillatorOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b1ac970

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSuperOscillatorOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FSuperOscillatorOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ac980

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSuperOscillatorOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FSuperOscillatorOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b20e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b20f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b2100

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b25b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSwitchAndRampOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FSwitchAndRampOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FSwitchAndRampOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b1b25c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSwitchAndRampOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FSwitchAndRampOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b25d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSwitchAndRampOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FSwitchAndRampOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b2f40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPlateReverbOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FPlateReverbOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FPlateReverbOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b2f50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPlateReverbOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FPlateReverbOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b2f60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPlateReverbOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FPlateReverbOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b3900

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b3910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b3920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b3f70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b3f80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b3f90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b4410

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b4420

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b4430

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b4d90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b4db0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b4dc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b4f90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b4fa0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b4fb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b54b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b54c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b54d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b5d20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FRingModOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FRingModOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FRingModOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b1b5d30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FRingModOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FRingModOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b5d40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FRingModOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FRingModOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b6bd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSampleAndHoldOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FSampleAndHoldOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FSampleAndHoldOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b1b6be0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSampleAndHoldOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FSampleAndHoldOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b6d30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSampleAndHoldOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FSampleAndHoldOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b7540

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>::GetResetFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TRandomNodeOperator<Metasound::FTime>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1b7550

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b7560

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b7ab0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>::GetResetFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<bool>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TRandomNodeOperator<bool>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1b7ac0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<bool>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b7ad0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<bool>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b7b20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1b7b30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b7b40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b8140

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TRandomNodeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1b8150

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b8160

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1b86c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TRandomNodeOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1b86d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1b86e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TRandomNodeOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ba680

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinControlRate>::GetResetFunction
          (TExecutableOperator<Metasound::FPerlinControlRate> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FPerlinControlRate>::
         ResetFunction;
}

// GetExecuteFunction @ 14b1ba6c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinControlRate>::GetExecuteFunction
          (TExecutableOperator<Metasound::FPerlinControlRate> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ba6d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinControlRate>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FPerlinControlRate> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1bb5d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinAudioRate>::GetResetFunction
          (TExecutableOperator<Metasound::FPerlinAudioRate> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FPerlinAudioRate>::
         ResetFunction;
}

// GetExecuteFunction @ 14b1bb5e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinAudioRate>::GetExecuteFunction
          (TExecutableOperator<Metasound::FPerlinAudioRate> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1bb5f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinAudioRate>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FPerlinAudioRate> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TRandomNodeOperator<int>_> @ 14b1cf3f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<int>_>::
~TExecutableOperator<Metasound::TRandomNodeOperator<int>_>
          (TExecutableOperator<Metasound::TRandomNodeOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TRandomNodeOperator<float>_> @ 14b1cf410

void __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<float>_>::
~TExecutableOperator<Metasound::TRandomNodeOperator<float>_>
          (TExecutableOperator<Metasound::TRandomNodeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<float>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_> @ 14b1cf430

void __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>::
~TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>
          (TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_> *this)

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TRandomNodeOperator<bool>_> @ 14b1cf450

void __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>::
~TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>
          (TExecutableOperator<Metasound::TRandomNodeOperator<bool>_> *this)

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1cf470

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1cf490

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1cf4b0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1cf4d0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator> @ 14b1cf4f0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator> @ 14b1cf510

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator> @ 14b1cf530

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator> @ 14b1cf550

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FPerlinAudioRate> @ 14b1cf570

void __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinAudioRate>::
~TExecutableOperator<Metasound::FPerlinAudioRate>
          (TExecutableOperator<Metasound::FPerlinAudioRate> *this)

{
  *this = (TExecutableOperator<Metasound::FPerlinAudioRate>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FPerlinControlRate> @ 14b1cf590

void __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinControlRate>::
~TExecutableOperator<Metasound::FPerlinControlRate>
          (TExecutableOperator<Metasound::FPerlinControlRate> *this)

{
  *this = (TExecutableOperator<Metasound::FPerlinControlRate>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FPlateReverbOperator> @ 14b1cf5b0

void __thiscall
Metasound::TExecutableOperator<Metasound::FPlateReverbOperator>::
~TExecutableOperator<Metasound::FPlateReverbOperator>
          (TExecutableOperator<Metasound::FPlateReverbOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FPlateReverbOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FRingModOperator> @ 14b1cf5d0

void __thiscall
Metasound::TExecutableOperator<Metasound::FRingModOperator>::
~TExecutableOperator<Metasound::FRingModOperator>
          (TExecutableOperator<Metasound::FRingModOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FRingModOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FSampleAndHoldOperator> @ 14b1cf5f0

void __thiscall
Metasound::TExecutableOperator<Metasound::FSampleAndHoldOperator>::
~TExecutableOperator<Metasound::FSampleAndHoldOperator>
          (TExecutableOperator<Metasound::FSampleAndHoldOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FSampleAndHoldOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator> @ 14b1cf610

void __thiscall
Metasound::TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>::
~TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>
          (TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FStereoDelayOperator> @ 14b1cf630

void __thiscall
Metasound::TExecutableOperator<Metasound::FStereoDelayOperator>::
~TExecutableOperator<Metasound::FStereoDelayOperator>
          (TExecutableOperator<Metasound::FStereoDelayOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FStereoDelayOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FStereoPannerOperator> @ 14b1cf650

void __thiscall
Metasound::TExecutableOperator<Metasound::FStereoPannerOperator>::
~TExecutableOperator<Metasound::FStereoPannerOperator>
          (TExecutableOperator<Metasound::FStereoPannerOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FStereoPannerOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FSubharmonizerOperator> @ 14b1cf670

void __thiscall
Metasound::TExecutableOperator<Metasound::FSubharmonizerOperator>::
~TExecutableOperator<Metasound::FSubharmonizerOperator>
          (TExecutableOperator<Metasound::FSubharmonizerOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FSubharmonizerOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FSuperOscillatorOperator> @ 14b1cf690

void __thiscall
Metasound::TExecutableOperator<Metasound::FSuperOscillatorOperator>::
~TExecutableOperator<Metasound::FSuperOscillatorOperator>
          (TExecutableOperator<Metasound::FSuperOscillatorOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FSuperOscillatorOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FSwitchAndRampOperator> @ 14b1cf6b0

void __thiscall
Metasound::TExecutableOperator<Metasound::FSwitchAndRampOperator>::
~TExecutableOperator<Metasound::FSwitchAndRampOperator>
          (TExecutableOperator<Metasound::FSwitchAndRampOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FSwitchAndRampOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b1dfe80

void __cdecl
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator IVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x1a]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  IVar1 = param_1[6];
  FTrigger::
  ExecuteFrames<_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_1>,_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_2>_>
            ((FTrigger *)IVar1,*(int *)((longlong)IVar1 + 0x14),*(int *)((longlong)IVar1 + 0x1c),
             (<lambda_1>)0x0,(<lambda_2>)param_1);
  IVar1 = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_3>,_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)IVar1,*(int *)((longlong)IVar1 + 0x14),*(int *)((longlong)IVar1 + 0x1c),
             (<lambda_3>)0x0,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b1dff10

void __cdecl
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TRandomNodeOperator<float>::Execute((TRandomNodeOperator<float> *)param_1);
  return;
}

// ExecuteFunction @ 14b1dff60

void __cdecl
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TRandomNodeOperator<Metasound::FTime>::Execute((TRandomNodeOperator<Metasound::FTime> *)param_1);
  return;
}

// ExecuteFunction @ 14b1dffb0

void __cdecl
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TRandomNodeOperator<bool>::Execute((TRandomNodeOperator<bool> *)param_1);
  return;
}

// ExecuteFunction @ 14b1e0000

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::Execute
            (param_1);
  return;
}

// ExecuteFunction @ 14b1e0050

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b1e00a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::EPanningLaw,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b1e01b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::EStereoDelayMode,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b1e02c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b1e0310

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b1e0360

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b1e03b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b1e0400

void __cdecl
Metasound::TExecutableOperator<Metasound::FPerlinAudioRate>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPerlinAudioRate::Execute((FPerlinAudioRate *)param_1);
  return;
}

// ExecuteFunction @ 14b1e0450

void __cdecl
Metasound::TExecutableOperator<Metasound::FPerlinControlRate>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    fVar7 = (float)*(int *)(param_1 + 2) / *(float *)(param_1 + 1);
  }
  else {
    fVar7 = *(float *)param_1[4];
  }
  fVar5 = *(float *)&param_1[0x13].field_0x4;
  if (__real_7effffff <= *(float *)&param_1[0x13].field_0x4) {
    fVar5 = __real_7effffff;
  }
  if (__real_7effffff <= fVar7) {
    fVar7 = __real_7effffff;
  }
  if (fVar5 <= __real_00400000) {
    fVar5 = __real_00400000;
  }
  iVar3 = 8;
  if (*(int *)param_1[8] < 8) {
    iVar3 = *(int *)param_1[8];
  }
  if (fVar7 <= __real_00400000) {
    fVar7 = __real_00400000;
  }
  iVar4 = 1;
  if (1 < iVar3) {
    iVar4 = iVar3;
  }
  fVar8 = __real_3f800000 / (float)(uint)(1 << ((byte)iVar4 & 0x1f));
  fVar9 = fVar8 * __real_00800000;
  fVar8 = fVar8 * __real_7f7fffff;
  fVar6 = fVar5 + fVar7;
  if (fVar8 <= fVar5 + fVar7) {
    fVar6 = fVar8;
  }
  if (fVar6 <= fVar9) {
    fVar6 = fVar9;
  }
  fVar5 = Audio::PerlinValueNoise1D(fVar6,iVar4);
  fVar7 = (fVar5 - __real_bf800000) * __real_3f000000;
  if (__real_3f800000 <= fVar7) {
    fVar7 = __real_3f800000;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)param_1[0x15] =
       (*(float *)param_1[0x10] - *(float *)param_1[0xc]) * fVar7 + *(float *)param_1[0xc];
  *(float *)param_1[0x19] = fVar5;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + *(int *)&param_1[1].field_0x4;
  return;
}

// ExecuteFunction @ 14b1e05a0

void __cdecl
Metasound::TExecutableOperator<Metasound::FPlateReverbOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPlateReverbOperator::Execute((FPlateReverbOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b1e05f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FRingModOperator>::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  int iVar2;
  IOperator IVar3;
  IOperator IVar4;
  ForAnyElementType _Src;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  IVar3 = param_1[2];
  IVar4 = param_1[10];
  if (IVar4 != IVar3) {
    iVar1 = *(int *)((longlong)IVar4 + 0xc);
    iVar2 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    _Src.Data = *(FScriptContainerElement **)IVar3;
    *(int *)&((ForAnyElementType *)((longlong)IVar4 + 8))->Data = iVar2;
    if ((iVar2 == 0) && (iVar1 == 0)) {
      *(int *)((longlong)IVar4 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar2,iVar1,(ForAnyElementType *)IVar4,iVar2,(int *)((longlong)IVar4 + 0xc));
      if (iVar2 != 0) {
        memcpy(*(FScriptContainerElement **)IVar4,_Src.Data,(longlong)iVar2 << 2);
      }
    }
  }
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar4 + 0x10))->Data =
       *(undefined4 *)&((ForAnyElementType *)((longlong)IVar3 + 0x10))->Data;
  IVar3 = param_1[10];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar3 + 0x10) != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar5 = *(float **)IVar3;
  iVar1 = *(int *)((longlong)IVar3 + 8);
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  IVar3 = param_1[6];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar3 + 0x10) != *(int *)((longlong)IVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar6 = *(float **)IVar3;
  iVar2 = *(int *)((longlong)IVar3 + 8);
  if ((iVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_28._12_4_ = local_18._12_4_;
  local_28.ArrayNum = iVar1;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar2;
  local_28.DataPtr = pfVar5;
  local_18.DataPtr = pfVar6;
  Audio::ArrayMultiplyInPlace(&local_18,&local_28);
  return;
}

// ExecuteFunction @ 14b1e07d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FSampleAndHoldOperator>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  IOperator IVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  IVar4 = param_1[6];
  iVar8 = *(int *)((longlong)IVar4 + 0x1c);
  iVar2 = *(int *)((longlong)IVar4 + 0x14);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else {
    piVar5 = *(int **)IVar4;
    if (0 < *piVar5) {
      FSampleAndHoldOperator::SetToHold((FSampleAndHoldOperator *)param_1,0,*piVar5);
    }
    lVar1 = (longlong)iVar8 + -1;
    if (0 < lVar1) {
      lVar9 = 0;
      do {
        iVar8 = piVar5[lVar9 + 1];
        iVar3 = piVar5[lVar9];
        IVar4 = param_1[2];
        if ((1 < (byte)LogMetaSound._0_1_) &&
           (*(int *)((longlong)IVar4 + 0x10) != *(int *)((longlong)IVar4 + 8))) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(*(longlong *)IVar4 + (longlong)iVar3 * 4);
        FSampleAndHoldOperator::SetToHold((FSampleAndHoldOperator *)param_1,iVar3,iVar8);
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar1);
    }
    iVar8 = piVar5[lVar1];
    IVar4 = param_1[2];
    if ((1 < (byte)LogMetaSound._0_1_) &&
       (*(int *)((longlong)IVar4 + 0x10) != *(int *)((longlong)IVar4 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(*(longlong *)IVar4 + (longlong)iVar8 * 4);
  }
  FSampleAndHoldOperator::SetToHold((FSampleAndHoldOperator *)param_1,iVar8,iVar2);
  return;
}

// ExecuteFunction @ 14b1e0920

void __cdecl
Metasound::TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = *(float *)param_1[2];
  if (__real_322bcc77 <
      (float)((uint)(fVar3 - *(float *)(param_1 + 9)) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)(param_1 + 9) = fVar3;
    if (fVar3 == 0.0) {
      *(undefined4 *)param_1[6] = __real_3f800000;
      return;
    }
    fVar3 = powf(__real_40000000,fVar3 * __real_3daaaaab);
    *(float *)param_1[6] = fVar3;
  }
  return;
}

// ExecuteFunction @ 14b1e09c0

void __cdecl
Metasound::TExecutableOperator<Metasound::FStereoDelayOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FStereoDelayOperator::Execute((FStereoDelayOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b1e0a10

void __cdecl
Metasound::TExecutableOperator<Metasound::FStereoPannerOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FStereoPannerOperator::Execute((FStereoPannerOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b1e0a60

void __cdecl
Metasound::TExecutableOperator<Metasound::FSubharmonizerOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSubharmonizerOperator::Execute((FSubharmonizerOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b1e0ab0

void __cdecl
Metasound::TExecutableOperator<Metasound::FSuperOscillatorOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSuperOscillatorOperator::Execute((FSuperOscillatorOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b1e0b00

void __cdecl
Metasound::TExecutableOperator<Metasound::FSwitchAndRampOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSwitchAndRampOperator::Execute((FSwitchAndRampOperator *)param_1);
  return;
}

// GetExecuteFunction @ 14b1e25c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b1e25d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoDelayOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FStereoDelayOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b1e25e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoPannerOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FStereoPannerOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b1e25f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSubharmonizerOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FSubharmonizerOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1e41d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>::
GetPostExecuteFunction(TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1e41e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoDelayOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FStereoDelayOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1e41f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoPannerOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FStereoPannerOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b1e4200

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSubharmonizerOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FSubharmonizerOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1e4210

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FSemitoneToFrequencyMultiplierOperator>::ResetFunction;
}

// GetResetFunction @ 14b1e4220

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoDelayOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FStereoDelayOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FStereoDelayOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b1e4230

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoPannerOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FStereoPannerOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FStereoPannerOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b1e4240

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FSubharmonizerOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FSubharmonizerOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FSubharmonizerOperator>::ResetFunction;
}

// GetResetFunction @ 14b1ed290

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b1ed2a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ed2b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ed980

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b1ed990

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ed9a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ee040

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b1ee050

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ee110

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ee8a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b1ee8b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ee8c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1eee10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b1eee20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1eee30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ef5e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b1ef5f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ef600

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f0070

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f0080

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f0090

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f0cc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1f0cd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f0ce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f2c10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f2c20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f2c30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f3070

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f3080

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f3090

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f3590

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f35a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f35b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f3bd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f3be0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f3bf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f4270

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f4280

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f4290

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f48f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<float,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f4900

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f4910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f4e70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f4e80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f4e90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f5a70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1f5a80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f5af0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f63a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1f63b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f63c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f7590

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f75a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f75b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f7b00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f7b10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f7b20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f8430

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f8440

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f8450

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f8cc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f8cd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f8ce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f90c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f90d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f9170

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f9660

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<int,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f9670

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f9680

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1f9af0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerOnValueChangeOperator<bool>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1f9b00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1f9b10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fa040

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerOnValueChangeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fa050

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fa060

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fa380

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerOnValueChangeOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fa390

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fa3a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fad00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerCompareNodeOperator<bool>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fad10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fad20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fb2f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerCompareNodeOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fb390

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fb3a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fbab0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerCompareNodeOperator<int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fbac0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fbad0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fc260

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAnyOperator<8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fc270

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fc280

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fc7b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAnyOperator<7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fc7c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fc7d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fcc30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAnyOperator<6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fcc40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fcc50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fd2a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAnyOperator<5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fd2c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fd2d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fd920

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerOnThresholdOperator<float,float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fd9b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fdb30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fddf0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAnyOperator<4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fde00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fde10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fe460

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b1fe470

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fe480

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fe5d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAnyOperator<3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fe5e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<3>_> *this)

{
  return ExecuteFunction;
}

// GetResetFunction @ 14b1fe5f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
         ::ResetFunction;
}

// GetPostExecuteFunction @ 14b1fe600

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetExecuteFunction @ 14b1fe610

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fe620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fee70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerOnThresholdOperator<int,int>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1feef0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fef00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_>::
GetPostExecuteFunction(TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1fef10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAnyOperator<2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1fef20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1fef30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAnyOperator<2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b1ff620

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b1ff630

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b1ff640

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b200370

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b200380

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b200390

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b200910

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b200920

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b200930

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b200ec0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b200ed0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b200ee0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2016b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2016c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2016d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b201c90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b201d30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b201d40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b202290

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2022a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2022b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b202a10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerAccumulatorOperator<1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b202a20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b202a90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b203f20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<FString>_>::GetResetFunction
          (TExecutableOperator<Metasound::TValueOperator<FString>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TValueOperator<FString>_>::ResetFunction;
}

// GetExecuteFunction @ 14b203f30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<FString>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<FString>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b203f40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<FString>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<FString>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b204e10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<bool>_>::GetResetFunction
          (TExecutableOperator<Metasound::TValueOperator<bool>_> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::TValueOperator<bool>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b204e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<bool>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<bool>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b204e30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<bool>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<bool>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b205270

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b205280

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b205290

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b205470

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<float>_>::GetResetFunction
          (TExecutableOperator<Metasound::TValueOperator<float>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TValueOperator<float>_>::ResetFunction;
}

// GetExecuteFunction @ 14b205480

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<float>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<float>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b205580

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<float>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<float>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b205e30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<int>_>::GetResetFunction
          (TExecutableOperator<Metasound::TValueOperator<int>_> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::TValueOperator<int>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b205e40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<int>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<int>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b205e50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<int>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TValueOperator<int>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2067d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2067e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2067f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b206d10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b206d20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b206d30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2078b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b207950

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b207960

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2089b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2089c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2089d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b209000

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2090a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2090b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2095a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2095b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2095c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b209cc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSequenceOperator<2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b209cd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b209ce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20a2a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSelectOperator<8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b20a2b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20a2c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20a9e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSelectOperator<7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b20a9f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20aa00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20aef0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSelectOperator<6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b20af00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20af10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20b330

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSelectOperator<5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b20b340

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20b350

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20bf00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSelectOperator<4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b20bf10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20bf80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20c520

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b20c530

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20c540

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20c550

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSelectOperator<3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b20c560

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20c570

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20cda0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerSelectOperator<2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b20cdb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20cdc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerSelectOperator<2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20d230

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b20d240

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20d250

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20deb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b20dec0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20ded0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20eed0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b20eee0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20eef0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20f020

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b20f030

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20f080

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b20f9e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b20f9f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b20fa00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2100b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b2100c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2100d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b210550

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b210560

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b210570

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b210930

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b210940

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b210950

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b210a80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b210a90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b210ae0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b211290

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b2112a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2112b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2118a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2118b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2118c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b212590

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2125a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2125b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b213020

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b213090

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2130a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b213350

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b213360

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2133a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b213ab0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b213ac0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b213ad0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2141e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2141f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b214200

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2146a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2146b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2146c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b214d90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b214da0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b214db0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b215600

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<bool,2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b215610

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2156b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b215db0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>::
GetResetFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>::ResetFunction
  ;
}

// GetExecuteFunction @ 14b215dc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>::
GetExecuteFunction(TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b215dd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b216270

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b216280

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b216290

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_> @ 14b234d50

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_> @ 14b234d70

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_> @ 14b234d90

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_> @ 14b234db0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_> @ 14b234dd0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_> @ 14b234df0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_> @ 14b234e10

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_> @ 14b234e30

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_> @ 14b234e50

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_> @ 14b234e70

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_> @ 14b234e90

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_> @ 14b234eb0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_> @ 14b234ed0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_> @ 14b234ef0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_>::
~TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_>
          (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAnyOperator<2>_> @ 14b234f10

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<2>_>::
~TExecutableOperator<Metasound::TTriggerAnyOperator<2>_>
          (TExecutableOperator<Metasound::TTriggerAnyOperator<2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAnyOperator<2>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAnyOperator<3>_> @ 14b234f30

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<3>_>::
~TExecutableOperator<Metasound::TTriggerAnyOperator<3>_>
          (TExecutableOperator<Metasound::TTriggerAnyOperator<3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAnyOperator<3>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAnyOperator<4>_> @ 14b234f50

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<4>_>::
~TExecutableOperator<Metasound::TTriggerAnyOperator<4>_>
          (TExecutableOperator<Metasound::TTriggerAnyOperator<4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAnyOperator<4>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAnyOperator<5>_> @ 14b234f70

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<5>_>::
~TExecutableOperator<Metasound::TTriggerAnyOperator<5>_>
          (TExecutableOperator<Metasound::TTriggerAnyOperator<5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAnyOperator<5>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAnyOperator<6>_> @ 14b234f90

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<6>_>::
~TExecutableOperator<Metasound::TTriggerAnyOperator<6>_>
          (TExecutableOperator<Metasound::TTriggerAnyOperator<6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAnyOperator<6>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAnyOperator<7>_> @ 14b234fb0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<7>_>::
~TExecutableOperator<Metasound::TTriggerAnyOperator<7>_>
          (TExecutableOperator<Metasound::TTriggerAnyOperator<7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAnyOperator<7>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerAnyOperator<8>_> @ 14b234fd0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<8>_>::
~TExecutableOperator<Metasound::TTriggerAnyOperator<8>_>
          (TExecutableOperator<Metasound::TTriggerAnyOperator<8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerAnyOperator<8>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_> @ 14b234ff0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_>::
~TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_>
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_> @ 14b235010

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_>::
~TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_>
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_> @ 14b235030

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_>::
~TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_>
          (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_> @ 14b235050

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_>::
~TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_>
          (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_> @ 14b235070

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_>::
~TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_>
          (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_> @ 14b235090

void __thiscall
Metasound::
TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>::
~TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>
          (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_> @ 14b2350b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_>::
~TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_>
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_> @ 14b2350d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_>::
~TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_>
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_> @ 14b2350f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_>::
~TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_>
          (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_> @ 14b235110

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_> @ 14b235130

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_> @ 14b235150

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_> @ 14b235170

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_> @ 14b235190

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_> @ 14b2351b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_> @ 14b2351d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_> @ 14b2351f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_> @ 14b235210

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_> @ 14b235230

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_> @ 14b235250

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_> @ 14b235270

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_> @ 14b235290

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_> @ 14b2352b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_> @ 14b2352d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_> @ 14b2352f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_> @ 14b235310

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_> @ 14b235330

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_> @ 14b235350

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_> @ 14b235370

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_> @ 14b235390

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_> @ 14b2353b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_> @ 14b2353d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_> @ 14b2353f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_> @ 14b235410

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_> @ 14b235430

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_> @ 14b235450

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_> @ 14b235470

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_> @ 14b235490

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_> @ 14b2354b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_> @ 14b2354d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_> @ 14b2354f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_> @ 14b235510

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_> @ 14b235530

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_> @ 14b235550

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_>::
~TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_>
          (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSelectOperator<2>_> @ 14b235570

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<2>_>::
~TExecutableOperator<Metasound::TTriggerSelectOperator<2>_>
          (TExecutableOperator<Metasound::TTriggerSelectOperator<2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSelectOperator<2>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSelectOperator<3>_> @ 14b235590

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<3>_>::
~TExecutableOperator<Metasound::TTriggerSelectOperator<3>_>
          (TExecutableOperator<Metasound::TTriggerSelectOperator<3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSelectOperator<3>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSelectOperator<4>_> @ 14b2355b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<4>_>::
~TExecutableOperator<Metasound::TTriggerSelectOperator<4>_>
          (TExecutableOperator<Metasound::TTriggerSelectOperator<4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSelectOperator<4>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSelectOperator<5>_> @ 14b2355d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<5>_>::
~TExecutableOperator<Metasound::TTriggerSelectOperator<5>_>
          (TExecutableOperator<Metasound::TTriggerSelectOperator<5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSelectOperator<5>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSelectOperator<6>_> @ 14b2355f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<6>_>::
~TExecutableOperator<Metasound::TTriggerSelectOperator<6>_>
          (TExecutableOperator<Metasound::TTriggerSelectOperator<6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSelectOperator<6>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSelectOperator<7>_> @ 14b235610

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<7>_>::
~TExecutableOperator<Metasound::TTriggerSelectOperator<7>_>
          (TExecutableOperator<Metasound::TTriggerSelectOperator<7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSelectOperator<7>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSelectOperator<8>_> @ 14b235630

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<8>_>::
~TExecutableOperator<Metasound::TTriggerSelectOperator<8>_>
          (TExecutableOperator<Metasound::TTriggerSelectOperator<8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSelectOperator<8>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_> @ 14b235650

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_>::
~TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_>
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_> @ 14b235670

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_>::
~TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_>
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_> @ 14b235690

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_>::
~TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_>
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_> @ 14b2356b0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_>::
~TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_>
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_> @ 14b2356d0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_>::
~TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_>
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_> @ 14b2356f0

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_>::
~TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_>
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_> @ 14b235710

void __thiscall
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_>::
~TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_>
          (TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TValueOperator<int>_> @ 14b235730

void __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<int>_>::
~TExecutableOperator<Metasound::TValueOperator<int>_>
          (TExecutableOperator<Metasound::TValueOperator<int>_> *this)

{
  *this = (TExecutableOperator<Metasound::TValueOperator<int>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TValueOperator<float>_> @ 14b235750

void __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<float>_>::
~TExecutableOperator<Metasound::TValueOperator<float>_>
          (TExecutableOperator<Metasound::TValueOperator<float>_> *this)

{
  *this = (TExecutableOperator<Metasound::TValueOperator<float>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TValueOperator<FString>_> @ 14b235770

void __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<FString>_>::
~TExecutableOperator<Metasound::TValueOperator<FString>_>
          (TExecutableOperator<Metasound::TValueOperator<FString>_> *this)

{
  *this = (TExecutableOperator<Metasound::TValueOperator<FString>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TValueOperator<bool>_> @ 14b235790

void __thiscall
Metasound::TExecutableOperator<Metasound::TValueOperator<bool>_>::
~TExecutableOperator<Metasound::TValueOperator<bool>_>
          (TExecutableOperator<Metasound::TValueOperator<bool>_> *this)

{
  *this = (TExecutableOperator<Metasound::TValueOperator<bool>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator> @ 14b2357b0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator> @ 14b2357d0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator> @ 14b2357f0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator> @ 14b235810

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator> @ 14b235830

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator> @ 14b235850

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerCoinOperator> @ 14b235870

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCoinOperator>::
~TExecutableOperator<Metasound::FTriggerCoinOperator>
          (TExecutableOperator<Metasound::FTriggerCoinOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerCoinOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerControlOperator> @ 14b235890

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerControlOperator>::
~TExecutableOperator<Metasound::FTriggerControlOperator>
          (TExecutableOperator<Metasound::FTriggerControlOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerControlOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerCounterOperator> @ 14b2358b0

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCounterOperator>::
~TExecutableOperator<Metasound::FTriggerCounterOperator>
          (TExecutableOperator<Metasound::FTriggerCounterOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerCounterOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerDelayOperator> @ 14b2358d0

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerDelayOperator>::
~TExecutableOperator<Metasound::FTriggerDelayOperator>
          (TExecutableOperator<Metasound::FTriggerDelayOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerDelayOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerOnceOperator> @ 14b2358f0

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnceOperator>::
~TExecutableOperator<Metasound::FTriggerOnceOperator>
          (TExecutableOperator<Metasound::FTriggerOnceOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerOnceOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerPipeOperator> @ 14b235910

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerPipeOperator>::
~TExecutableOperator<Metasound::FTriggerPipeOperator>
          (TExecutableOperator<Metasound::FTriggerPipeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerPipeOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerRepeatOperator> @ 14b235930

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerRepeatOperator>::
~TExecutableOperator<Metasound::FTriggerRepeatOperator>
          (TExecutableOperator<Metasound::FTriggerRepeatOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerRepeatOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FTriggerToggleOperator> @ 14b235950

void __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerToggleOperator>::
~TExecutableOperator<Metasound::FTriggerToggleOperator>
          (TExecutableOperator<Metasound::FTriggerToggleOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FTriggerToggleOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FWaveShaperOperator> @ 14b235970

void __thiscall
Metasound::TExecutableOperator<Metasound::FWaveShaperOperator>::
~TExecutableOperator<Metasound::FWaveShaperOperator>
          (TExecutableOperator<Metasound::FWaveShaperOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FWaveShaperOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b273a50

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b273aa0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
  ::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b273af0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::Execute
            (param_1);
  return;
}

// ExecuteFunction @ 14b273b40

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
            ::CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::EBufferTriggerType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b273c50

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::Push
            ((void *)param_1[0x10],(TEnum<Metasound::ETriggerComparisonType,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b273d60

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>_>_>
  TVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FTransmissionAddress::operator!=
                    ((FTransmissionAddress *)param_1[6],(FTransmissionAddress *)(param_1 + 9));
  if (bVar5) {
    SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
            CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> *)(param_1 + 0x10);
    if (pTVar1 != TVar6.Ptr) {
      puVar3 = (undefined8 *)pTVar1->_padding_;
      pTVar1->_padding_ = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    if (pTVar1->_padding_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sender.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                         ,0x4a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::Push
            ((void *)param_1[0x10],(TEnum<Audio::EWaveShaperType,1> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b273e70

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<1>::Execute((TTriggerAccumulatorOperator<1> *)param_1);
  return;
}

// ExecuteFunction @ 14b273ec0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<2>::Execute((TTriggerAccumulatorOperator<2> *)param_1);
  return;
}

// ExecuteFunction @ 14b273f10

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<3>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<3>::Execute((TTriggerAccumulatorOperator<3> *)param_1);
  return;
}

// ExecuteFunction @ 14b273f60

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<4>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<4>::Execute((TTriggerAccumulatorOperator<4> *)param_1);
  return;
}

// ExecuteFunction @ 14b273fb0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<5>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<5>::Execute((TTriggerAccumulatorOperator<5> *)param_1);
  return;
}

// ExecuteFunction @ 14b274000

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<6>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<6>::Execute((TTriggerAccumulatorOperator<6> *)param_1);
  return;
}

// ExecuteFunction @ 14b274050

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<7>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<7>::Execute((TTriggerAccumulatorOperator<7> *)param_1);
  return;
}

// ExecuteFunction @ 14b2740a0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAccumulatorOperator<8>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerAccumulatorOperator<8>::Execute((TTriggerAccumulatorOperator<8> *)param_1);
  return;
}

// ExecuteFunction @ 14b2740f0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<2>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[4]);
  uVar8 = 0;
  do {
    if ((*(int *)(param_1 + 2) <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uVar8 * 0x20 + 8 + (longlong)param_1[1]);
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar7 = 0;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar7 * 4));
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar1);
      }
      FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar1 * 4));
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  return;
}

// ExecuteFunction @ 14b274200

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<3>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[4]);
  uVar8 = 0;
  do {
    if ((*(int *)(param_1 + 2) <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uVar8 * 0x20 + 8 + (longlong)param_1[1]);
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar7 = 0;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar7 * 4));
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar1);
      }
      FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar1 * 4));
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  return;
}

// ExecuteFunction @ 14b274310

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<4>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[4]);
  uVar8 = 0;
  do {
    if ((*(int *)(param_1 + 2) <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uVar8 * 0x20 + 8 + (longlong)param_1[1]);
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar7 = 0;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar7 * 4));
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar1);
      }
      FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar1 * 4));
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  return;
}

// ExecuteFunction @ 14b274420

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<5>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[4]);
  uVar8 = 0;
  do {
    if ((*(int *)(param_1 + 2) <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uVar8 * 0x20 + 8 + (longlong)param_1[1]);
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar7 = 0;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar7 * 4));
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar1);
      }
      FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar1 * 4));
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 5);
  return;
}

// ExecuteFunction @ 14b274530

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<6>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[4]);
  uVar8 = 0;
  do {
    if ((*(int *)(param_1 + 2) <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uVar8 * 0x20 + 8 + (longlong)param_1[1]);
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar7 = 0;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar7 * 4));
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar1);
      }
      FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar1 * 4));
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 6);
  return;
}

// ExecuteFunction @ 14b274640

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<7>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[4]);
  uVar8 = 0;
  do {
    if ((*(int *)(param_1 + 2) <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uVar8 * 0x20 + 8 + (longlong)param_1[1]);
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar7 = 0;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar7 * 4));
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar1);
      }
      FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar1 * 4));
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 7);
  return;
}

// ExecuteFunction @ 14b274750

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerAnyOperator<8>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[4]);
  uVar8 = 0;
  do {
    if ((*(int *)(param_1 + 2) <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uVar8 * 0x20 + 8 + (longlong)param_1[1]);
    iVar2 = *(int *)((longlong)plVar3 + 0x1c);
    if (0 < iVar2) {
      lVar4 = *plVar3;
      lVar1 = (longlong)iVar2 + -1;
      lVar7 = 0;
      if (0 < lVar1) {
        do {
          FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar7 * 4));
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar1);
      }
      FTrigger::TriggerFrame((FTrigger *)param_1[4],*(int *)(lVar4 + lVar1 * 4));
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 8);
  return;
}

// ExecuteFunction @ 14b274860

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x12]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerCompareNodeOperator<int>::Execute_::__l2::<lambda_1>,_Metasound::TTriggerCompareNodeOperator<int>::Execute_::__l2::<lambda_2>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             (<lambda_1>)0x0,(<lambda_2>)param_1);
  return;
}

// ExecuteFunction @ 14b2748d0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x12]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerCompareNodeOperator<float>::Execute_::__l2::<lambda_1>,_Metasound::TTriggerCompareNodeOperator<float>::Execute_::__l2::<lambda_2>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             (<lambda_1>)0x0,(<lambda_2>)param_1);
  return;
}

// ExecuteFunction @ 14b274940

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerCompareNodeOperator<bool>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x12]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerCompareNodeOperator<bool>::Execute_::__l2::<lambda_1>,_Metasound::TTriggerCompareNodeOperator<bool>::Execute_::__l2::<lambda_2>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             (<lambda_1>)0x0,(<lambda_2>)param_1);
  return;
}

// ExecuteFunction @ 14b2749b0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<int,int>_>::ExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IOperator IVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0xe]);
  iVar1 = *(int *)param_1[10];
  if (iVar1 == 0) {
LAB_14b274a86:
    IVar4 = param_1[2];
    iVar1 = *(int *)param_1[6];
    if (iVar1 < *(int *)&param_1[0x11].field_0x4) goto LAB_14b274aa7;
    bVar3 = SBORROW4(iVar1,*(int *)IVar4);
    iVar1 = iVar1 - *(int *)IVar4;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar5 = (float)(*(int *)param_1[6] * *(int *)param_1[6]);
        fVar6 = (float)(*(int *)param_1[2] * *(int *)param_1[2]);
        if (fVar5 < fVar6) {
          if (*(char *)(param_1 + 0x11) != '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0x11) = 1;
          FTrigger::TriggerFrame((FTrigger *)param_1[0xe],0);
          return;
        }
        if (fVar5 <= fVar6) {
          return;
        }
        if (*(char *)(param_1 + 0x11) == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x11) = 0;
        return;
      }
      goto LAB_14b274a86;
    }
    IVar4 = param_1[2];
    iVar1 = *(int *)param_1[6];
    if (*(int *)&param_1[0x11].field_0x4 < iVar1) goto LAB_14b274aa7;
    bVar3 = SBORROW4(*(int *)IVar4,iVar1);
    iVar1 = *(int *)IVar4 - iVar1;
  }
  if (bVar3 != iVar1 < 0) {
    FTrigger::TriggerFrame((FTrigger *)param_1[0xe],0);
  }
LAB_14b274aa7:
  *(int *)&param_1[0x11].field_0x4 = *(int *)IVar4;
  return;
}

// ExecuteFunction @ 14b274ac0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerOnThresholdOperator<float,float>_>::
ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IOperator IVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0xe]);
  iVar1 = *(int *)param_1[10];
  if (iVar1 == 0) {
LAB_14b274b98:
    IVar4 = param_1[2];
    if ((*(float *)param_1[6] < *(float *)&param_1[0x11].field_0x4) ||
       (*(float *)IVar4 <= *(float *)param_1[6])) goto LAB_14b274bbd;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar5 = *(float *)param_1[6] * *(float *)param_1[6];
        fVar6 = *(float *)param_1[2] * *(float *)param_1[2];
        if (fVar5 < fVar6) {
          if (*(char *)(param_1 + 0x11) != '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0x11) = 1;
          FTrigger::TriggerFrame((FTrigger *)param_1[0xe],0);
          return;
        }
        if (fVar5 <= fVar6) {
          return;
        }
        if (*(char *)(param_1 + 0x11) == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x11) = 0;
        return;
      }
      goto LAB_14b274b98;
    }
    IVar4 = param_1[2];
    fVar5 = *(float *)param_1[6];
    if ((*(float *)&param_1[0x11].field_0x4 <= fVar5 && fVar5 != *(float *)&param_1[0x11].field_0x4)
       || (fVar5 < *(float *)IVar4 || fVar5 == *(float *)IVar4)) goto LAB_14b274bbd;
  }
  FTrigger::TriggerFrame((FTrigger *)param_1[0xe],0);
LAB_14b274bbd:
  *(float *)&param_1[0x11].field_0x4 = *(float *)IVar4;
  return;
}

// ExecuteFunction @ 14b274be0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float>::Execute
            ((TTriggerOnThresholdOperator<Metasound::FAudioBuffer,float> *)param_1);
  return;
}

// ExecuteFunction @ 14b274c30

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<int>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  if (*(int *)param_1[2] != *(int *)(param_1 + 9)) {
    *(int *)(param_1 + 9) = *(int *)param_1[2];
    FTrigger::TriggerFrame((FTrigger *)param_1[6],0);
    return;
  }
  return;
}

// ExecuteFunction @ 14b274ca0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  if (__real_322bcc77 <
      (float)((uint)(*(float *)param_1[2] - *(float *)(param_1 + 9)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(float *)(param_1 + 9) = *(float *)param_1[2];
    FTrigger::TriggerFrame((FTrigger *)param_1[6],0);
    return;
  }
  return;
}

// ExecuteFunction @ 14b274d20

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerOnValueChangeOperator<bool>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  if (*(char *)param_1[2] != *(char *)(param_1 + 9)) {
    *(char *)(param_1 + 9) = *(char *)param_1[2];
    FTrigger::TriggerFrame((FTrigger *)param_1[6],0);
    return;
  }
  return;
}

// ExecuteFunction @ 14b274d90

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<int,2>::Update((TTriggerRouteOperator<int,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b274de0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,3>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<int,3>::Update((TTriggerRouteOperator<int,3> *)param_1);
  return;
}

// ExecuteFunction @ 14b274e30

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,4>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<int,4>::Update((TTriggerRouteOperator<int,4> *)param_1);
  return;
}

// ExecuteFunction @ 14b274e80

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,5>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<int,5>::Update((TTriggerRouteOperator<int,5> *)param_1);
  return;
}

// ExecuteFunction @ 14b274ed0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,6>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<int,6>::Update((TTriggerRouteOperator<int,6> *)param_1);
  return;
}

// ExecuteFunction @ 14b274f20

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,7>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<int,7>::Update((TTriggerRouteOperator<int,7> *)param_1);
  return;
}

// ExecuteFunction @ 14b274f70

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<int,8>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<int,8>::Update((TTriggerRouteOperator<int,8> *)param_1);
  return;
}

// ExecuteFunction @ 14b274fc0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<float,2>::Update((TTriggerRouteOperator<float,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b275010

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,3>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<float,3>::Update((TTriggerRouteOperator<float,3> *)param_1);
  return;
}

// ExecuteFunction @ 14b275060

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,4>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<float,4>::Update((TTriggerRouteOperator<float,4> *)param_1);
  return;
}

// ExecuteFunction @ 14b2750b0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,5>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<float,5>::Update((TTriggerRouteOperator<float,5> *)param_1);
  return;
}

// ExecuteFunction @ 14b275100

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,6>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<float,6>::Update((TTriggerRouteOperator<float,6> *)param_1);
  return;
}

// ExecuteFunction @ 14b275150

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,7>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<float,7>::Update((TTriggerRouteOperator<float,7> *)param_1);
  return;
}

// ExecuteFunction @ 14b2751a0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<float,8>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<float,8>::Update((TTriggerRouteOperator<float,8> *)param_1);
  return;
}

// ExecuteFunction @ 14b2751f0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,2>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FAudioBuffer,2>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b275240

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,3>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FAudioBuffer,3>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,3> *)param_1);
  return;
}

// ExecuteFunction @ 14b275290

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,4>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FAudioBuffer,4>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,4> *)param_1);
  return;
}

// ExecuteFunction @ 14b2752e0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,5>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FAudioBuffer,5>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,5> *)param_1);
  return;
}

// ExecuteFunction @ 14b275330

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,6>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FAudioBuffer,6>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,6> *)param_1);
  return;
}

// ExecuteFunction @ 14b275380

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,7>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FAudioBuffer,7>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,7> *)param_1);
  return;
}

// ExecuteFunction @ 14b2753d0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FAudioBuffer,8>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FAudioBuffer,8>::Update
            ((TTriggerRouteOperator<Metasound::FAudioBuffer,8> *)param_1);
  return;
}

// ExecuteFunction @ 14b275420

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,2>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FTime,2>::Update
            ((TTriggerRouteOperator<Metasound::FTime,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b275470

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,3>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FTime,3>::Update
            ((TTriggerRouteOperator<Metasound::FTime,3> *)param_1);
  return;
}

// ExecuteFunction @ 14b2754c0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,4>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FTime,4>::Update
            ((TTriggerRouteOperator<Metasound::FTime,4> *)param_1);
  return;
}

// ExecuteFunction @ 14b275510

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,5>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FTime,5>::Update
            ((TTriggerRouteOperator<Metasound::FTime,5> *)param_1);
  return;
}

// ExecuteFunction @ 14b275560

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,6>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FTime,6>::Update
            ((TTriggerRouteOperator<Metasound::FTime,6> *)param_1);
  return;
}

// ExecuteFunction @ 14b2755b0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,7>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FTime,7>::Update
            ((TTriggerRouteOperator<Metasound::FTime,7> *)param_1);
  return;
}

// ExecuteFunction @ 14b275600

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<Metasound::FTime,8>_>::
ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<Metasound::FTime,8>::Update
            ((TTriggerRouteOperator<Metasound::FTime,8> *)param_1);
  return;
}

// ExecuteFunction @ 14b275650

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<bool,2>::Update((TTriggerRouteOperator<bool,2> *)param_1);
  return;
}

// ExecuteFunction @ 14b2756a0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,3>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<bool,3>::Update((TTriggerRouteOperator<bool,3> *)param_1);
  return;
}

// ExecuteFunction @ 14b2756f0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,4>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<bool,4>::Update((TTriggerRouteOperator<bool,4> *)param_1);
  return;
}

// ExecuteFunction @ 14b275740

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,5>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<bool,5>::Update((TTriggerRouteOperator<bool,5> *)param_1);
  return;
}

// ExecuteFunction @ 14b275790

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,6>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<bool,6>::Update((TTriggerRouteOperator<bool,6> *)param_1);
  return;
}

// ExecuteFunction @ 14b2757e0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,7>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<bool,7>::Update((TTriggerRouteOperator<bool,7> *)param_1);
  return;
}

// ExecuteFunction @ 14b275830

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerRouteOperator<bool,8>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[6]);
  TTriggerRouteOperator<bool,8>::Update((TTriggerRouteOperator<bool,8> *)param_1);
  return;
}

// ExecuteFunction @ 14b275880

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerSelectOperator<2>::Execute((TTriggerSelectOperator<2> *)param_1);
  return;
}

// ExecuteFunction @ 14b2758d0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<3>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerSelectOperator<3>::Execute((TTriggerSelectOperator<3> *)param_1);
  return;
}

// ExecuteFunction @ 14b275920

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<4>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerSelectOperator<4>::Execute((TTriggerSelectOperator<4> *)param_1);
  return;
}

// ExecuteFunction @ 14b275970

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<5>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerSelectOperator<5>::Execute((TTriggerSelectOperator<5> *)param_1);
  return;
}

// ExecuteFunction @ 14b2759c0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<6>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerSelectOperator<6>::Execute((TTriggerSelectOperator<6> *)param_1);
  return;
}

// ExecuteFunction @ 14b275a10

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<7>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerSelectOperator<7>::Execute((TTriggerSelectOperator<7> *)param_1);
  return;
}

// ExecuteFunction @ 14b275a60

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSelectOperator<8>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TTriggerSelectOperator<8>::Execute((TTriggerSelectOperator<8> *)param_1);
  return;
}

// ExecuteFunction @ 14b275ab0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<2>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  <lambda_3> local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTrigger::AdvanceBlock(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]))
    ;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<2>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<2>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             local_res8,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b275ba0

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<3>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  <lambda_3> local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTrigger::AdvanceBlock(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]))
    ;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<3>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<3>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             local_res8,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b275c90

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<4>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  <lambda_3> local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTrigger::AdvanceBlock(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]))
    ;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<4>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<4>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             local_res8,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b275d80

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<5>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  <lambda_3> local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTrigger::AdvanceBlock(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]))
    ;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<5>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<5>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             local_res8,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b275e70

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<6>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  <lambda_3> local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTrigger::AdvanceBlock(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]))
    ;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<6>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<6>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             local_res8,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b275f60

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<7>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  <lambda_3> local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTrigger::AdvanceBlock(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]))
    ;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<7>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<7>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             local_res8,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b276050

void __cdecl
Metasound::TExecutableOperator<Metasound::TTriggerSequenceOperator<8>_>::ExecuteFunction
          (IOperator *param_1)

{
  IOperator this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  <lambda_3> local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0xe) <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTrigger::AdvanceBlock(*(FTrigger **)((longlong)(int)uVar3 * 0x20 + 8 + (longlong)param_1[0xd]))
    ;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  this = param_1[2];
  FTrigger::
  ExecuteFrames<_Metasound::TTriggerSequenceOperator<8>::Execute_::__l2::<lambda_3>,_Metasound::TTriggerSequenceOperator<8>::Execute_::__l2::<lambda_4>_>
            ((FTrigger *)this,*(int *)((longlong)this + 0x14),*(int *)((longlong)this + 0x1c),
             local_res8,(<lambda_4>)param_1);
  return;
}

// ExecuteFunction @ 14b276140

void __cdecl
Metasound::TExecutableOperator<Metasound::TValueOperator<int>_>::ExecuteFunction(IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x1a]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[6]);
  if (bVar5) {
    *(undefined4 *)param_1[0x12] = *(undefined4 *)param_1[10];
  }
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar5) {
    *(undefined4 *)param_1[0x12] = *(undefined4 *)param_1[0xe];
  }
  lVar7 = 0;
  iVar2 = *(int *)((longlong)param_1[6] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[6];
    lVar1 = (longlong)iVar2 + -1;
    lVar6 = lVar7;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar6 * 4));
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar1 * 4));
  }
  iVar2 = *(int *)((longlong)param_1[2] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[2];
    lVar1 = (longlong)iVar2 + -1;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar7 * 4));
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar1 * 4));
  }
  return;
}

// ExecuteFunction @ 14b276290

void __cdecl
Metasound::TExecutableOperator<Metasound::TValueOperator<float>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x1a]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[6]);
  if (bVar5) {
    *(undefined4 *)param_1[0x12] = *(undefined4 *)param_1[10];
  }
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar5) {
    *(undefined4 *)param_1[0x12] = *(undefined4 *)param_1[0xe];
  }
  lVar7 = 0;
  iVar2 = *(int *)((longlong)param_1[6] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[6];
    lVar1 = (longlong)iVar2 + -1;
    lVar6 = lVar7;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar6 * 4));
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar1 * 4));
  }
  iVar2 = *(int *)((longlong)param_1[2] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[2];
    lVar1 = (longlong)iVar2 + -1;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar7 * 4));
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar1 * 4));
  }
  return;
}

// ExecuteFunction @ 14b2763e0

void __cdecl
Metasound::TExecutableOperator<Metasound::TValueOperator<FString>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x1a]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[6]);
  if (bVar5) {
    ::FString::operator=((FString *)param_1[0x12],(FString *)param_1[10]);
  }
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar5) {
    ::FString::operator=((FString *)param_1[0x12],(FString *)param_1[0xe]);
  }
  lVar7 = 0;
  iVar2 = *(int *)((longlong)param_1[6] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[6];
    lVar1 = (longlong)iVar2 + -1;
    lVar6 = lVar7;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar6 * 4));
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar1 * 4));
  }
  iVar2 = *(int *)((longlong)param_1[2] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[2];
    lVar1 = (longlong)iVar2 + -1;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar7 * 4));
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar1 * 4));
  }
  return;
}

// ExecuteFunction @ 14b276530

void __cdecl
Metasound::TExecutableOperator<Metasound::TValueOperator<bool>_>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x1a]);
  FTrigger::AdvanceBlock((FTrigger *)param_1[0x16]);
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[6]);
  if (bVar5) {
    *(undefined1 *)param_1[0x12] = *(undefined1 *)param_1[10];
  }
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar5) {
    *(undefined1 *)param_1[0x12] = *(undefined1 *)param_1[0xe];
  }
  lVar7 = 0;
  iVar2 = *(int *)((longlong)param_1[6] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[6];
    lVar1 = (longlong)iVar2 + -1;
    lVar6 = lVar7;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar6 * 4));
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x1a],*(int *)(lVar3 + lVar1 * 4));
  }
  iVar2 = *(int *)((longlong)param_1[2] + 0x1c);
  if (0 < iVar2) {
    lVar3 = *(longlong *)param_1[2];
    lVar1 = (longlong)iVar2 + -1;
    if (0 < lVar1) {
      do {
        FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar7 * 4));
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar1);
    }
    FTrigger::TriggerFrame((FTrigger *)param_1[0x16],*(int *)(lVar3 + lVar1 * 4));
  }
  return;
}

// ExecuteFunction @ 14b276680

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b2766d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
  FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b276720

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::FConverterOperator::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b276770

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b2767c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b276810

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,int>::FConverterOperator>
::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)param_1[2];
  return;
}

// ExecuteFunction @ 14b276860

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerCoinOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTriggerCoinOperator::Execute((FTriggerCoinOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b2768b0

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerControlOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTriggerControlOperator::Execute((FTriggerControlOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b276900

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerCounterOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTriggerCounterOperator::Execute((FTriggerCounterOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b276950

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerDelayOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTriggerDelayOperator::Execute((FTriggerDelayOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b2769a0

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerOnceOperator>::ExecuteFunction(IOperator *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0xe]);
  iVar2 = *(int *)((longlong)param_1[2] + 0x1c);
  if (0 < iVar2) {
    lVar1 = (longlong)iVar2 + -1;
    lVar3 = *(longlong *)param_1[2];
    if (0 < lVar1) {
      lVar6 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar6 * 4);
        if (*(char *)(param_1 + 0x11) != '\0') {
          *(undefined1 *)(param_1 + 0x11) = 0;
          FTrigger::TriggerFrame((FTrigger *)param_1[0xe],iVar2);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar1);
    }
    iVar2 = *(int *)(lVar3 + lVar1 * 4);
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(undefined1 *)(param_1 + 0x11) = 0;
      FTrigger::TriggerFrame((FTrigger *)param_1[0xe],iVar2);
    }
  }
  if (0 < *(int *)((longlong)param_1[6] + 0x1c)) {
    if (0 < *(int *)((longlong)param_1[6] + 0x1c) + -1) {
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  return;
}

// ExecuteFunction @ 14b276aa0

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerPipeOperator>::ExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTriggerPipeOperator::Execute((FTriggerPipeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b276af0

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerRepeatOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTriggerRepeatOperator::Execute((FTriggerRepeatOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b276b40

void __cdecl
Metasound::TExecutableOperator<Metasound::FTriggerToggleOperator>::ExecuteFunction
          (IOperator *param_1)

{
  longlong lVar1;
  IOperator *pIVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FTrigger::AdvanceBlock((FTrigger *)param_1[0xe]);
  pIVar2 = param_1 + 0x12;
  lVar8 = 0;
  iVar3 = *(int *)((longlong)param_1[2] + 0x1c);
  if (0 < iVar3) {
    lVar4 = *(longlong *)param_1[2];
    lVar1 = (longlong)iVar3 + -1;
    lVar7 = lVar8;
    if (0 < lVar1) {
      do {
        iVar3 = *(int *)(lVar4 + lVar7 * 4);
        *(undefined1 *)*pIVar2 = 1;
        FTrigger::TriggerFrame((FTrigger *)param_1[0xe],iVar3);
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar1);
    }
    iVar3 = *(int *)(lVar4 + lVar1 * 4);
    *(undefined1 *)*pIVar2 = 1;
    FTrigger::TriggerFrame((FTrigger *)param_1[0xe],iVar3);
  }
  iVar3 = *(int *)((longlong)param_1[6] + 0x1c);
  if (0 < iVar3) {
    lVar4 = *(longlong *)param_1[6];
    lVar1 = (longlong)iVar3 + -1;
    if (0 < lVar1) {
      do {
        iVar3 = *(int *)(lVar4 + lVar8 * 4);
        *(undefined1 *)*pIVar2 = 0;
        FTrigger::TriggerFrame((FTrigger *)param_1[0xe],iVar3);
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar1);
    }
    iVar3 = *(int *)(lVar4 + lVar1 * 4);
    *(undefined1 *)param_1[0x12] = 0;
    FTrigger::TriggerFrame((FTrigger *)param_1[0xe],iVar3);
  }
  return;
}

// ExecuteFunction @ 14b276c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::TExecutableOperator<Metasound::FWaveShaperOperator>::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = *(float **)IVar2;
  IVar2 = param_1[0x16];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = *(float **)IVar2;
  IVar2 = param_1[2];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar2 + 0x10) != *(int *)((longlong)IVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)((longlong)IVar2 + 8);
  Audio::FWaveShaper::SetAmount((FWaveShaper *)(param_1 + 0x19),*(float *)param_1[6]);
  Audio::FWaveShaper::SetBias((FWaveShaper *)(param_1 + 0x19),*(float *)param_1[10]);
  Audio::FWaveShaper::SetOutputGainLinear((FWaveShaper *)(param_1 + 0x19),*(float *)param_1[0xe]);
  Audio::FWaveShaper::SetType((FWaveShaper *)(param_1 + 0x19),*(EWaveShaperType *)param_1[0x12]);
  Audio::FWaveShaper::ProcessAudioBuffer((FWaveShaper *)(param_1 + 0x19),pfVar3,pfVar4,iVar1);
  return;
}

// GetExecuteFunction @ 14b27a5e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCoinOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerCoinOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a5f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerControlOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerControlOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a600

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCounterOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerCounterOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a610

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerDelayOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerDelayOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnceOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerOnceOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a630

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerPipeOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerPipeOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a640

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerRepeatOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerRepeatOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a650

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerToggleOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FTriggerToggleOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b27a660

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWaveShaperOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FWaveShaperOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b283b90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCoinOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerCoinOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283ba0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerControlOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerControlOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283bb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCounterOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerCounterOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283bc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerDelayOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerDelayOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283bd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnceOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerOnceOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283be0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerPipeOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerPipeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283bf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerRepeatOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerRepeatOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283c00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerToggleOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FTriggerToggleOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b283c10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWaveShaperOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FWaveShaperOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b283c20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCoinOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerCoinOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FTriggerCoinOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b283c30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerControlOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerControlOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FTriggerControlOperator>::ResetFunction;
}

// GetResetFunction @ 14b283c40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerCounterOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerCounterOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FTriggerCounterOperator>::ResetFunction;
}

// GetResetFunction @ 14b283c50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerDelayOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerDelayOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FTriggerDelayOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b283c60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnceOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerOnceOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FTriggerOnceOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b283c70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerPipeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerPipeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FTriggerPipeOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b283c80

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerRepeatOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerRepeatOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FTriggerRepeatOperator>::ResetFunction;
}

// GetResetFunction @ 14b283c90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerToggleOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FTriggerToggleOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FTriggerToggleOperator>::ResetFunction;
}

// GetResetFunction @ 14b283ca0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWaveShaperOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FWaveShaperOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FWaveShaperOperator>::
         ResetFunction;
}

// GetResetFunction @ 14b292f60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b292f70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b292f80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b293290

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<7>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<7>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<7>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2932a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<7>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<7>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2932b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<7>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<7>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2935c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2935d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2935e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2938f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<5>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<5>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<5>_>::ResetFunction;
}

// GetExecuteFunction @ 14b293900

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<5>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<5>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b293910

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<5>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<5>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b293c20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b293c30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b293c40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b293f50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<3>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<3>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<3>_>::ResetFunction;
}

// GetExecuteFunction @ 14b293f60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<3>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<3>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b293f70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<3>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<3>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b294280

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b294290

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2942a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2945c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TWaveWriterOperator<1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2945d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2945e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TWaveWriterOperator<1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<1>_> @ 14b2979e0

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<1>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<1>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<1>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<2>_> @ 14b297a00

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<2>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<2>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<2>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<3>_> @ 14b297a20

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<3>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<3>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<3>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<3>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<4>_> @ 14b297a40

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<4>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<4>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<4>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<5>_> @ 14b297a60

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<5>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<5>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<5>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<5>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<6>_> @ 14b297a80

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<6>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<6>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<6>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<7>_> @ 14b297aa0

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<7>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<7>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<7>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<7>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TWaveWriterOperator<8>_> @ 14b297ac0

void __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<8>_>::
~TExecutableOperator<Metasound::TWaveWriterOperator<8>_>
          (TExecutableOperator<Metasound::TWaveWriterOperator<8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<8>_>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b2a02a0

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<1>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<1>::Execute((TWaveWriterOperator<1> *)param_1);
  return;
}

// ExecuteFunction @ 14b2a02f0

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<2>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<2>::Execute((TWaveWriterOperator<2> *)param_1);
  return;
}

// ExecuteFunction @ 14b2a0340

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<3>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<3>::Execute((TWaveWriterOperator<3> *)param_1);
  return;
}

// ExecuteFunction @ 14b2a0390

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<4>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<4>::Execute((TWaveWriterOperator<4> *)param_1);
  return;
}

// ExecuteFunction @ 14b2a03e0

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<5>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<5>::Execute((TWaveWriterOperator<5> *)param_1);
  return;
}

// ExecuteFunction @ 14b2a0430

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<6>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<6>::Execute((TWaveWriterOperator<6> *)param_1);
  return;
}

// ExecuteFunction @ 14b2a0480

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<7>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<7>::Execute((TWaveWriterOperator<7> *)param_1);
  return;
}

// ExecuteFunction @ 14b2a04d0

void __cdecl
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<8>_>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TWaveWriterOperator<8>::Execute((TWaveWriterOperator<8> *)param_1);
  return;
}

