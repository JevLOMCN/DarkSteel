// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 320

// GetResetFunction @ 14b2c3dd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMetasoundWaveTableGetNodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b2c3e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2c3e30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator>::
GetPostExecuteFunction(TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c4540

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2c4550

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2c4560

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c5010

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2c5020

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2c5030

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c7620

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator>::
GetResetFunction(TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMetasoundWaveTableOscillatorNodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b2c7630

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2c7640

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c7720

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2c7730

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2c79a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c8060

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>::
GetResetFunction(TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b2c8070

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator> *this
                  )

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2c8080

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2c9b20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2c9b30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2c9b80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ca3e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2ca400

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2ca410

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2cd1f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2cd200

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2cd210

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2cda00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2cda10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2cdab0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ce320

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2ce330

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2ce340

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2cec70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2cec80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2cec90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2cfcd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2cfce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2cfcf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d0a30

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2d0a50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d0a60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d1950

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMetaSoundWaveTablePlayerNodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b2d19f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d1a00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator>::
GetPostExecuteFunction(TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d1a10

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<8>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2d1b10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d1b20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d3340

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<6>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2d33b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d33c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d3dd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<4>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2d3de0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d3df0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d4610

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<2>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2d4620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d4630

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d5160

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2d5170

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d5180

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d5920

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_>::GetResetFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<1>_>::ResetFunction;
}

// GetExecuteFunction @ 14b2d5930

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_>::GetExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d5940

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d74f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2d7500

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d7510

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2d9b90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2d9ba0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2d9bb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2dc810

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2dc820

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2dc8f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2dceb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2dcec0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2dced0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2dd970

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2dd980

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2dda20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ddc00

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b2ddc10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2ddcb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2deb50

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2deb60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2deb70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2def20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2defb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2defc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2dfa70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2dfa80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2dfa90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e0ee0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e0ef0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e0f90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e2030

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e2040

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e20d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e3120

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e3130

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e3140

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e36a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e36b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e36c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e3dc0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e3dd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e3de0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e42d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e42e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e4370

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e5140

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e5150

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e51c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e57c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e57d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e57f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e5ca0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e5cb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e5cc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e6100

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e6110

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e6120

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e6d70

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e6d80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e6e20

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e8800

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e8810

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e8820

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e8d60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e8d70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e8d80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e8d90

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e8da0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e8e10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e8e20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>::
         ResetFunction;
}

// GetExecuteFunction @ 14b2e8e30

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e8e40

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2e9f20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2e9f90

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2e9fb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ea870

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2ea880

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2ea890

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2eadf0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2eae00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2eae10

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2eae20

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2eae50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2eae60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2eb9d0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2eb9e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2eb9f0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2eca60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2eca70

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2eca80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ed0e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2ed100

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2ed140

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ee5e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
         ::ResetFunction;
}

// GetResetFunction @ 14b2ee5f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2ee600

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14b2ee610

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2ee620

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14b2ee630

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2efb40

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
::GetResetFunction(void *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2efb50

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
::GetExecuteFunction(void *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2efb60

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
::GetPostExecuteFunction(void *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2f1c60

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>::
GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2f1ca0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>::
GetExecuteFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2f1cb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2f22b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b2f22c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2f22d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2f4050

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWavePlayerOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FWavePlayerOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FWavePlayerOperator>::
         ResetFunction;
}

// GetExecuteFunction @ 14b2f4060

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWavePlayerOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FWavePlayerOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2f40d0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWavePlayerOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FWavePlayerOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2f70f0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2f7100

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2f7110

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2f8de0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2f8df0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2f8e00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2fcbd0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                   *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2fcbe0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2fcbf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2fd850

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FMetasoundWaveTableEvaluateNodeOperator>::ResetFunction;
}

// GetExecuteFunction @ 14b2fd860

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator>::
GetExecuteFunction(TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2fd870

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b2ff710

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>::
GetResetFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>
                 *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>
         ::ResetFunction;
}

// GetExecuteFunction @ 14b2ff720

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>::
GetExecuteFunction(TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>
                   *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b2ff730

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>
           *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e0c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e0e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e100

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e120

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e140

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e160

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e180

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e1a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e1c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e1e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e200

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e220

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e240

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e260

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e280

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e2a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e2c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e2e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e300

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e320

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e340

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e360

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e380

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e3a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_> @ 14b34e3c0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_>::
~TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_>
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_> @ 14b34e3e0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_>::
~TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_>
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_> @ 14b34e400

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_>::
~TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_>
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_> @ 14b34e420

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_>::
~TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_>
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_> @ 14b34e440

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_>::
~TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_>
          (TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_> @ 14b34e460

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_>::
~TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_>
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_> @ 14b34e480

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_>::
~TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_>
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_> @ 14b34e4a0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_>::
~TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_>
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_> @ 14b34e4c0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_>::
~TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_>
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_> @ 14b34e4e0

void __thiscall
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_>::
~TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_>
          (TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_> *this)

{
  *this = (TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_>)&___7IOperator_Metasound__6B_
  ;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_> @ 14b34e500

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e520

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e540

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e560

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_> @ 14b34e580

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_> @ 14b34e5a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_> @ 14b34e5c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_> @ 14b34e5e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_> @ 14b34e600

void __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
::
~TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
          (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_> @ 14b34e620

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e640

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e660

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_> @ 14b34e680

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_> @ 14b34e6a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_> @ 14b34e6c0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_> @ 14b34e6e0

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_> @ 14b34e700

void __thiscall
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_> @ 14b34e720

void __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>::
~TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>
          (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>
           *this)

{
  *this = (TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>
           )&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator> @ 14b34e740

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator> @ 14b34e760

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator> @ 14b34e780

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator> @ 14b34e7a0

void __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
::
~TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
          (void *this)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator> @ 14b34e7c0

void __thiscall
Metasound::TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator>::
~TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator>
          (TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator> @ 14b34e7e0

void __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>::
~TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>
          (TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator> @ 14b34e800

void __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>::
~TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>
          (TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator> @ 14b34e820

void __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator>::
~TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator>
          (TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator> @ 14b34e840

void __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator>::
~TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator>
          (TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator> @ 14b34e860

void __thiscall
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator>::
~TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator>
          (TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FWaveInfoNodeOperator> @ 14b34e880

void __thiscall
Metasound::TExecutableOperator<Metasound::FWaveInfoNodeOperator>::
~TExecutableOperator<Metasound::FWaveInfoNodeOperator>
          (TExecutableOperator<Metasound::FWaveInfoNodeOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FWaveInfoNodeOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FWavePlayerOperator> @ 14b34e8a0

void __thiscall
Metasound::TExecutableOperator<Metasound::FWavePlayerOperator>::
~TExecutableOperator<Metasound::FWavePlayerOperator>
          (TExecutableOperator<Metasound::FWavePlayerOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FWavePlayerOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14b3a1320

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar5) {
    TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      ConstructItems<Metasound::FAudioBusAsset,Metasound::FAudioBusAsset,int>
                (*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 0x10,
                 (FAudioBusAsset *)*(FScriptContainerElement **)IVar3,iVar1);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a1410

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar5) {
    TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      ConstructItems<Metasound::FWaveAsset,Metasound::FWaveAsset,int>
                (*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 0x10,
                 (FWaveAsset *)*(FScriptContainerElement **)IVar3,iVar1);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a1500

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar5) {
    TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[0xe],
               (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[6]);
    IVar2 = param_1[0xe];
    IVar3 = param_1[10];
    if ((IVar2 == IVar3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar3 + 8))->Data;
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar1,(ForAnyElementType *)IVar2,(int *)((longlong)IVar2 + 8),
                         (int *)((longlong)IVar2 + 0xc));
      ConstructItems<Metasound::FWaveTableBankAsset,Metasound::FWaveTableBankAsset,int>
                (*(FScriptContainerElement **)IVar2 + (longlong)iVar6 * 0x10,
                 (FWaveTableBankAsset *)*(FScriptContainerElement **)IVar3,iVar1);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a15f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar8) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)IVar2;
      IVar2 = param_1[0xe];
      lVar4 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      uVar5 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
      *(undefined8 *)IVar2 = uVar5;
      *(longlong *)((longlong)IVar2 + 8) = lVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a1730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar8) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)IVar2;
      IVar2 = param_1[0xe];
      lVar4 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      uVar5 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
      *(undefined8 *)IVar2 = uVar5;
      *(longlong *)((longlong)IVar2 + 8) = lVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a1870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FTrigger::operator_bool((FTrigger *)param_1[2]);
  if (bVar8) {
    IVar2 = param_1[6];
    iVar1 = *(int *)param_1[10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)IVar2;
      IVar2 = param_1[0xe];
      lVar4 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      uVar5 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
      *(undefined8 *)IVar2 = uVar5;
      *(longlong *)((longlong)IVar2 + 8) = lVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a19b0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14b3a1a00

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14b3a1a50

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ExecuteFunction @ 14b3a1aa0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14b3a1af0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14b3a1b40

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ExecuteFunction @ 14b3a1b90

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  return;
}

// ExecuteFunction @ 14b3a1be0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  return;
}

// ExecuteFunction @ 14b3a1c30

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  Execute((TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *)param_1);
  return;
}

// ExecuteFunction @ 14b3a1c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined8 *puVar9;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FTrigger::operator_bool((FTrigger *)param_1[4]);
  if (bVar8) {
    IVar2 = param_1[0xc];
    iVar1 = *(int *)param_1[0x10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      IVar3 = param_1[0x14];
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)((longlong)IVar3 + 8);
      uVar5 = *(undefined8 *)IVar3;
      puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)IVar2);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = (TReferenceControllerBase<1> *)puVar9[1];
      *puVar9 = uVar5;
      puVar9[1] = lVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a1dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined8 *puVar9;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FTrigger::operator_bool((FTrigger *)param_1[4]);
  if (bVar8) {
    IVar2 = param_1[0xc];
    iVar1 = *(int *)param_1[0x10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      IVar3 = param_1[0x14];
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)((longlong)IVar3 + 8);
      uVar5 = *(undefined8 *)IVar3;
      puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)IVar2);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = (TReferenceControllerBase<1> *)puVar9[1];
      *puVar9 = uVar5;
      puVar9[1] = lVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a1f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  IOperator IVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined8 *puVar9;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0xd5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = FTrigger::operator_bool((FTrigger *)param_1[4]);
  if (bVar8) {
    IVar2 = param_1[0xc];
    iVar1 = *(int *)param_1[0x10];
    if ((iVar1 < 0) || (*(int *)((longlong)IVar2 + 8) <= iVar1)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Execute(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      IVar3 = param_1[0x14];
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)((longlong)IVar3 + 8);
      uVar5 = *(undefined8 *)IVar3;
      puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)IVar2);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = (TReferenceControllerBase<1> *)puVar9[1];
      *puVar9 = uVar5;
      puVar9[1] = lVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// ExecuteFunction @ 14b3a2040

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2090

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  return;
}

// ExecuteFunction @ 14b3a20e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  Execute((TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2130

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
             )param_1);
  return;
}

// ExecuteFunction @ 14b3a2180

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  return;
}

// ExecuteFunction @ 14b3a21d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2220

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<1>_>::ExecuteFunction
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
  TAudioBusReaderOperator<1>::Execute((TAudioBusReaderOperator<1> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2270

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<2>_>::ExecuteFunction
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
  TAudioBusReaderOperator<2>::Execute((TAudioBusReaderOperator<2> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a22c0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<4>_>::ExecuteFunction
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
  TAudioBusReaderOperator<4>::Execute((TAudioBusReaderOperator<4> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2310

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<6>_>::ExecuteFunction
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
  TAudioBusReaderOperator<6>::Execute((TAudioBusReaderOperator<6> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2360

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusReaderOperator<8>_>::ExecuteFunction
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
  TAudioBusReaderOperator<8>::Execute((TAudioBusReaderOperator<8> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a23b0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<1>_>::ExecuteFunction
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
  TAudioBusWriterOperator<1>::Execute((TAudioBusWriterOperator<1> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2400

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<2>_>::ExecuteFunction
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
  TAudioBusWriterOperator<2>::Execute((TAudioBusWriterOperator<2> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2450

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<4>_>::ExecuteFunction
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
  TAudioBusWriterOperator<4>::Execute((TAudioBusWriterOperator<4> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a24a0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<6>_>::ExecuteFunction
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
  TAudioBusWriterOperator<6>::Execute((TAudioBusWriterOperator<6> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a24f0

void __cdecl
Metasound::TExecutableOperator<Metasound::TAudioBusWriterOperator<8>_>::ExecuteFunction
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
  TAudioBusWriterOperator<8>::Execute((TAudioBusWriterOperator<8> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2540

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>::
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
  ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>::Execute
            ((TReceiverOperator<WaveTable::FWaveTable> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2590

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  return;
}

// ExecuteFunction @ 14b3a25e0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
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
  ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
  ::Execute((TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)param_1
           );
  return;
}

// ExecuteFunction @ 14b3a2630

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
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
  TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Execute
            ((TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2680

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
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
  TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b3a26d0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
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
  TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
  Execute(param_1);
  return;
}

// ExecuteFunction @ 14b3a2720

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>::
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
  ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>::Execute
            ((TReceiverOperator<Metasound::FAudioBusAsset> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2770

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>::
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
  ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>::Execute
            ((TReceiverOperator<Metasound::FWaveAsset> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a27c0

void __cdecl
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
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
  ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>::Execute
            ((TReceiverOperator<Metasound::FWaveTableBankAsset> *)param_1);
  return;
}

// ExecuteFunction @ 14b3a2810

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>::
ExecuteFunction(IOperator *param_1)

{
  TSender<WaveTable::FWaveTable> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
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
    SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::ResetSenderAndCleanupChannel
              ((TSendOperator<WaveTable::FWaveTable> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::CreateNewSender
                      ((TSendOperator<WaveTable::FWaveTable> *)param_1);
    pTVar1 = (TSender<WaveTable::FWaveTable> *)(param_1 + 0x10);
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
  TSender<WaveTable::FWaveTable>::Push
            ((TSender<WaveTable::FWaveTable> *)param_1[0x10],(FWaveTable *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a2920

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
    SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                             *)param_1);
    pTVar1 = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
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
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1[0x10],
             (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a2a30

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
    SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)param_1)
    ;
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                             *)param_1);
    pTVar1 = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10)
    ;
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
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)param_1[0x10],
             (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a2b40

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
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
    TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    ResetSenderAndCleanupChannel
              ((TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *
               )param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
            CreateNewSender((TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                             *)param_1);
    pTVar1 = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
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
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Push
            ((TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1[0x10],
             (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a2c50

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
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
    TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            ::CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
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
  TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::Push
            ((void *)param_1[0x10],
             (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a2d60

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
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
    TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    ResetSenderAndCleanupChannel(param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::
            TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            ::CreateNewSender(param_1);
    pTVar1 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
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
  TSender<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::Push
            ((void *)param_1[0x10],
             (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a2e70

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>::
ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::FAudioBusAsset> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
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
    SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FAudioBusAsset> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::CreateNewSender
                      ((TSendOperator<Metasound::FAudioBusAsset> *)param_1);
    pTVar1 = (TSender<Metasound::FAudioBusAsset> *)(param_1 + 0x10);
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
  TSender<Metasound::FAudioBusAsset>::Push
            ((TSender<Metasound::FAudioBusAsset> *)param_1[0x10],(FAudioBusAsset *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a2f80

void __cdecl
Metasound::TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>::
ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::FWaveAsset> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
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
    SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FWaveAsset> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::CreateNewSender
                      ((TSendOperator<Metasound::FWaveAsset> *)param_1);
    pTVar1 = (TSender<Metasound::FWaveAsset> *)(param_1 + 0x10);
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
  TSender<Metasound::FWaveAsset>::Push
            ((TSender<Metasound::FWaveAsset> *)param_1[0x10],(FWaveAsset *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a3090

void __cdecl
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>::
ExecuteFunction(IOperator *param_1)

{
  TSender<Metasound::FWaveTableBankAsset> *pTVar1;
  IOperator IVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
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
    SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::ResetSenderAndCleanupChannel
              ((TSendOperator<Metasound::FWaveTableBankAsset> *)param_1);
    IVar2 = param_1[6];
    param_1[10] = *(IOperator *)((longlong)IVar2 + 8);
    param_1[0xb] = *(IOperator *)((longlong)IVar2 + 0x10);
    param_1[0xc] = *(IOperator *)((longlong)IVar2 + 0x18);
    TVar6 = SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::CreateNewSender
                      ((TSendOperator<Metasound::FWaveTableBankAsset> *)param_1);
    pTVar1 = (TSender<Metasound::FWaveTableBankAsset> *)(param_1 + 0x10);
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
  TSender<Metasound::FWaveTableBankAsset>::Push
            ((TSender<Metasound::FWaveTableBankAsset> *)param_1[0x10],
             (FWaveTableBankAsset *)param_1[2]);
  return;
}

// ExecuteFunction @ 14b3a31a0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
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
  TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
  ::FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b3a31f0

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
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
  TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
  ::FConverterOperator::Execute(param_1);
  return;
}

// ExecuteFunction @ 14b3a3240

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
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

// ExecuteFunction @ 14b3a3290

void __cdecl
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
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

// ExecuteFunction @ 14b3a32e0

void __cdecl
Metasound::TExecutableOperator<Metasound::FMetaSoundWaveTablePlayerNodeOperator>::ExecuteFunction
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
  FMetaSoundWaveTablePlayerNodeOperator::Execute((FMetaSoundWaveTablePlayerNodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b3a3330

void __cdecl
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>::
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
  FMetasoundWaveTableBankEvaluateNodeOperator::Execute
            ((FMetasoundWaveTableBankEvaluateNodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b3a3380

void __cdecl
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>::ExecuteFunction
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
  FMetasoundWaveTableEnvelopeNodeOperator::Execute
            ((FMetasoundWaveTableEnvelopeNodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b3a33d0

void __cdecl
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableEvaluateNodeOperator>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  FWaveTableView local_48 [2];
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
  local_res8[0] = 0.0;
  WaveTable::FWaveTable::GetView((FWaveTable *)param_1[2],local_48);
  WaveTable::FWaveTableSampler::Reset((FWaveTableSampler *)(param_1 + 0xd));
  WaveTable::FWaveTableSampler::SetInterpolationMode
            ((FWaveTableSampler *)(param_1 + 0xd),*(EInterpolationMode *)param_1[10]);
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  WaveTable::FWaveTableSampler::SetPhase((FWaveTableSampler *)(param_1 + 0xd),fVar3);
  WaveTable::FWaveTableSampler::Process
            ((FWaveTableSampler *)(param_1 + 0xd),local_48,local_res8,Hold);
  *(float *)param_1[0x15] = local_res8[0];
  return;
}

// ExecuteFunction @ 14b3a34b0

void __cdecl
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableGetNodeOperator>::ExecuteFunction
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
  FMetasoundWaveTableGetNodeOperator::Execute((FMetasoundWaveTableGetNodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b3a3500

void __cdecl
Metasound::TExecutableOperator<Metasound::FMetasoundWaveTableOscillatorNodeOperator>::
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
  FMetasoundWaveTableOscillatorNodeOperator::Execute
            ((FMetasoundWaveTableOscillatorNodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b3a3550

void __cdecl
Metasound::TExecutableOperator<Metasound::FWaveInfoNodeOperator>::ExecuteFunction
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
  FWaveInfoNodeOperator::Execute((FWaveInfoNodeOperator *)param_1);
  return;
}

// ExecuteFunction @ 14b3a35a0

void __cdecl
Metasound::TExecutableOperator<Metasound::FWavePlayerOperator>::ExecuteFunction(IOperator *param_1)

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
  FWavePlayerOperator::Execute((FWavePlayerOperator *)param_1);
  return;
}

// GetExecuteFunction @ 14b3b4160

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWaveInfoNodeOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FWaveInfoNodeOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14b3bf060

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWaveInfoNodeOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FWaveInfoNodeOperator> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14b3bfeb0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FWaveInfoNodeOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FWaveInfoNodeOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FWaveInfoNodeOperator>
         ::ResetFunction;
}

