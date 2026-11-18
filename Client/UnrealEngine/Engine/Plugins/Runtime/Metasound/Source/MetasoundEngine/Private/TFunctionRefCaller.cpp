// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 130

// Call @ 14b366c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(TSharedPtr<Audio::FParameterInterface,1>),void,TSharedPtr<Audio::FParameterInterface,1>_>
::Call(void *param_1,TSharedPtr<Audio::FParameterInterface,1> *param_2)

{
  code *pcVar1;
  FParameterInterface *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_2->Object;
  pcVar1 = *(code **)param_1;
  local_10 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FParameterInterface *)0x0;
  (*pcVar1)(&local_18);
  return;
}

// Call @ 14b366c50

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(FName,FName),bool,FName,FName>::Call
          (void *param_1,FName *param_2,FName *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014b366c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,*param_3);
  return (bool)uVar1;
}

// Call @ 14b366c70

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366ca0

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366cd0

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366d00

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366d30

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366d60

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366d90

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366dc0

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366df0

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366e20

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366e50

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366e80

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366eb0

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366ee0

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366f10

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366f40

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366f70

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366fa0

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateInputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b366fd0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367000

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367030

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367060

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367090

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3670c0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3670f0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367120

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367150

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367180

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3671b0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3671e0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367210

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367240

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367270

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3672a0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3672d0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367300

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367330

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<WaveTable::FWaveTable>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367360

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367390

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3673c0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3673f0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367420

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  ::operator()(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367450

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367480

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3674b0

FOutputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FOutputBinding>
::Call(FOutputBinding *__return_storage_ptr__,void *param_1)

{
  Metasound::VertexDataPrivate::
  TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b3674e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Metasound::Engine::RegisterExternalInterfaces'::__l2::<lambda_1>::<lambda_invoker_cdecl>'::__l2::<lambda_1>,void,UClass_&>
::Call(void *param_1,UClass *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  ForAnyElementType FVar9;
  undefined1 auStackX_8 [8];
  TArray<UClass_const_*,TSizedDefaultAllocator<32>_> TStack_28;
  
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  if (*plVar3 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ::Audio::FParameterInterface::FindSupportedUClasses((FParameterInterface *)*plVar3,&TStack_28);
  iVar7 = TStack_28.ArrayNum;
  **(byte **)param_1 = **(byte **)param_1 | TStack_28.ArrayNum == 0;
  pFVar1 = TStack_28.AllocatorInstance.Data + (longlong)TStack_28.ArrayNum * 8;
  FVar9.Data = TStack_28.AllocatorInstance.Data;
LAB_14b3531b0:
  do {
    if (TStack_28.ArrayNum != iVar7) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UClass_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (FVar9.Data == pFVar1) {
      if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_28.AllocatorInstance.Data);
      }
      return;
    }
    lVar4 = *(longlong *)FVar9.Data;
    if (lVar4 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SupportedUClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\Interfaces\\MetasoundInterface.cpp"
                         ,0x7d,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pbVar5 = *(byte **)param_1;
    if (param_2 != (UClass *)0x0) {
      iVar2 = (int)param_2->_padding_;
      if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
          &param_2->_padding_)) {
        *pbVar5 = *pbVar5 | 1;
        FVar9.Data = FVar9.Data + 8;
        goto LAB_14b3531b0;
      }
    }
    *pbVar5 = *pbVar5;
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// Call @ 14b3674f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<WaveTable::FWaveTable> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<WaveTable::FWaveTable> *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<WaveTable::FWaveTable>
            (&(param_2->Data).TypedValue,(TDataReadReference<WaveTable::FWaveTable> *)appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b367500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
            (param_2,(TDataReadReference<WaveTable::FWaveTable> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<WaveTable::FWaveTable>_>
            (param_2,(TDataReadReference<WaveTable::FWaveTable> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b3675c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                         *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] =
       &
       ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
            (&(param_2->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b3675d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
            (param_2,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
            (param_2,(TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                         *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] =
       &
       ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
            (&(param_2->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b3676a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
            (param_2,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
            (param_2,(TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                         *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] =
       &
       ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
            (&(param_2->Data).TypedValue,
             (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b367770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
            (param_2,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b3677d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
            (param_2,(TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (&(param_2->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
              *)appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b367840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
            (param_2,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b3678a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
            (param_2,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                         *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  pFVar9 = Metasound::
           GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::
  FAnyDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            (&(param_2->Data).TypedValue,
             (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
              *)appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b367910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
            (param_2,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &
                ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
            (param_2,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                      *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b3679d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<Metasound::FAudioBusAsset> *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBusAsset>
            (&(param_2->Data).TypedValue,
             (TDataReadReference<Metasound::FAudioBusAsset> *)appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b3679e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
            (param_2,(TDataReadReference<Metasound::FAudioBusAsset> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
            (param_2,(TDataReadReference<Metasound::FAudioBusAsset> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FWaveAsset> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<Metasound::FWaveAsset> *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FWaveAsset>
            (&(param_2->Data).TypedValue,(TDataReadReference<Metasound::FWaveAsset> *)appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b367ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
            (param_2,(TDataReadReference<Metasound::FWaveAsset> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::FWaveAsset>_>
            (param_2,(TDataReadReference<Metasound::FWaveAsset> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  longlong lVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar8;
  FName *pFVar9;
  undefined **appuStack_48 [2];
  TReferenceControllerBase<0> *pTStack_38;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)param_1;
  if ((param_2->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
                       (&(param_2->Data).TypedValue,
                        (TDataReadReference<Metasound::FWaveTableBankAsset> *)auStack_28);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)&pTVar8->field_0x10;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)&pTVar8->field_0x8;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    *(undefined8 *)&pTVar8->field_0x8 = uVar4;
    *(undefined8 *)&pTVar8->field_0x10 = uVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)auStack_28._16_8_);
    return;
  }
  appuStack_48[1] = *(undefined ***)(lVar1 + 8);
  pTStack_38 = *(TReferenceControllerBase<0> **)(lVar1 + 0x10);
  if (pTStack_38 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_38->SharedReferenceCount = pTStack_38->SharedReferenceCount + 1;
  }
  appuStack_48[0] = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  pFVar9 = Metasound::GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  bVar7 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Data).bIsSet != false) &&
     (pIVar2 = (param_2->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FWaveTableBankAsset>
            (&(param_2->Data).TypedValue,
             (TDataReadReference<Metasound::FWaveTableBankAsset> *)appuStack_48);
  (param_2->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_38);
  return;
}

// Call @ 14b367b80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
            (param_2,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  undefined **local_28 [2];
  TReferenceControllerBase<0> *local_18;
  
  local_28[1] = *(undefined ***)(*(longlong *)param_1 + 8);
  local_18 = *(TReferenceControllerBase<0> **)(*(longlong *)param_1 + 0x10);
  if (local_18 != (TReferenceControllerBase<0> *)0x0) {
    local_18->SharedReferenceCount = local_18->SharedReferenceCount + 1;
  }
  local_28[0] = &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  Metasound::VertexDataPrivate::FOutputBinding::
  Set<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
            (param_2,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// Call @ 14b367c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_>::Get
            (&TStack_28,(param_2->Data).TypedValue.AccessType,
             (param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<WaveTable::FWaveTable>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_> **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<WaveTable::FWaveTable>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&TStack_28,(param_2->Data).TypedValue.AccessType,(param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
             **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&TStack_28,(param_2->Data).TypedValue.AccessType,(param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367c90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
             **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367ca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  ::Get(&TStack_28,(param_2->Data).TypedValue.AccessType,(param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
             **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
             **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  ::Get(&TStack_28,(param_2->Data).TypedValue.AccessType,(param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
             **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
             **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  ::Get(&TStack_28,(param_2->Data).TypedValue.AccessType,(param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
  *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
             **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_>::Get
            (&TStack_28,(param_2->Data).TypedValue.AccessType,
             (param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367d10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FAudioBusAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_> **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBusAsset>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_>::Get
            (&TStack_28,(param_2->Data).TypedValue.AccessType,
             (param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_> **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveAsset>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367d40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<0> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> TStack_28;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> **)param_1;
  if ((param_2->Data).bIsSet == false) {
    pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
    bVar4 = Metasound::IsCastable((FName)(param_2->Vertex)._padding_,*pFVar5);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0xf3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TOptional<Metasound::FAnyDataReference>::
    Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_const_&>
              (&param_2->Data,pTVar1);
    if ((param_2->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
              ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
    return;
  }
  if ((param_2->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x369,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Metasound::FAnyDataReference::
  TGetAs<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_>::
  Get(&TStack_28,(param_2->Data).TypedValue.AccessType,(param_2->Data).TypedValue.DataRefPtr.Ptr);
  pTVar3 = *(TReferenceControllerBase<0> **)&pTVar1->field_0x10;
  *(undefined8 *)&pTVar1->field_0x8 = TStack_28._8_8_;
  *(undefined8 *)&pTVar1->field_0x10 = TStack_28._16_8_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14b367d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindWriteVertex<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
::Call(void *param_1,FOutputBinding *param_2)

{
  TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  
  pTVar1 = *(TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_> **)param_1;
  pFVar5 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_2->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_2->Vertex).field_0x14;
  bVar4 = Metasound::IsCastable(FVar2,*pFVar5);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TOptional<Metasound::FAnyDataReference>::
  Emplace<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FWaveTableBankAsset>_>_const_&>
            (&param_2->Data,pTVar1);
  if ((param_2->Data).bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_2,&(param_2->Data).TypedValue);
  return;
}

// Call @ 14b367d60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorGraphSet'::__l2::<lambda_1>_>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14b367d70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `Metasound::FMetasoundGeneratorHandle::HandleGeneratorVertexInterfaceChanged'::__l2::<lambda_1>::
  operator()(param_1);
  return false;
}

// Call @ 14b367d90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated'::__l5::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorCreated'::__l5::<lambda_1>_>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14b367da0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed'::__l5::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleGeneratorDestroyed'::__l5::<lambda_1>_>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14b367db0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`Metasound::FMetasoundGeneratorHandle::HandleOutputChanged'::__l29::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b367de0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(FMetasoundGeneratorHandle **)param_1 != (FMetasoundGeneratorHandle *)0x0) {
      Metasound::FMetasoundGeneratorHandle::UpdateOutputWatchersInternal
                (*(FMetasoundGeneratorHandle **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
  }
LAB_14b367de0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// Call @ 14b367e20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`UMetaSoundSource::InitResources'::__l7::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(param_1);
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1);
  }
  return false;
}

// Call @ 14b367e50

FInputBinding * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<bool>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
::Call(FInputBinding *__return_storage_ptr__,void *param_1)

{
  `Metasound::FInputVertexInterfaceData::SetValue<bool>'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 14b367e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMetaSoundAssetKey,UObject_&>
::Call(void *param_1,FMetaSoundAssetKey *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  IMetasoundUObjectRegistry *pIVar3;
  longlong *plVar4;
  
  pIVar3 = Metasound::IMetasoundUObjectRegistry::Get();
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,param_3);
  if (plVar4 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetaSoundAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                       ,0x5d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014b367ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
  return;
}

// Call @ 14b367ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,FMetaSoundAssetKey,UObject_&>
::Call(void *param_1,FMetaSoundAssetKey *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  IMetasoundUObjectRegistry *pIVar3;
  longlong *plVar4;
  
  pIVar3 = Metasound::IMetasoundUObjectRegistry::Get();
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,param_3);
  if (plVar4 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetaSoundAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                       ,0x399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014b367f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
  return;
}

// Call @ 14b367f60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSource::FindFirstNoninflatableGraph'::__l2::<lambda_1>,void,UMetaSoundSource_const_&>
::Call(void *param_1,UMetaSoundSource *param_2)

{
  UMetaSoundSource::FAudioParameterCollector::CollectPresetOverrides
            (*(FAudioParameterCollector **)param_1,
             &(param_2->RootMetasoundDocument).RootGraph.PresetOptions.InputsInheritingDefault,
             &(param_2->RuntimeInputData).InputMap);
  return;
}

// Call @ 14b367f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSettings::GeneratePageOrderInternal'::__l2::<lambda_1>,void,FMetaSoundPageSettings_const_&>
::Call(void *param_1,FMetaSoundPageSettings *param_2)

{
  int *piVar1;
  uint *puVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  
  puVar2 = *(uint **)((longlong)param_1 + 8);
  **(byte **)param_1 =
       **(byte **)param_1 |
       (((puVar2[3] == (param_2->UniqueId).D && puVar2[2] == (param_2->UniqueId).C) &&
        puVar2[1] == (param_2->UniqueId).B) && *puVar2 == (param_2->UniqueId).A);
  if (**(char **)param_1 != '\0') {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    if (((FMetaSoundPageSettings *)pFVar3->Data <= param_2) &&
       (param_2 < (FMetaSoundPageSettings *)
                  (&((FMetaSoundPageSettings *)pFVar3->Data)->UniqueId +
                  *(int *)((longlong)&pFVar3[1].Data + 4)))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    uVar6 = *(undefined8 *)&(param_2->UniqueId).C;
    pFVar4 = pFVar3->Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x10) = *(undefined8 *)&param_2->UniqueId;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = uVar6;
  }
  return;
}

// Call @ 14b367f90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FMetasoundUObjectRegistry::GetEntryByUObject'::__l2::<lambda_1>,bool,Metasound::IMetasoundUObjectRegistryEntry_const_*>
::Call(void *param_1,IMetasoundUObjectRegistryEntry **param_2)

{
  IMetasoundUObjectRegistryEntry *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = *param_2;
  if (pIVar1 == (IMetasoundUObjectRegistryEntry *)0x0) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b367fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,**(undefined8 **)param_1);
  return (bool)uVar2;
}

// Call @ 14b367fc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::InitTargetPageDelegates'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  UAudioComponent *pUVar4;
  ulong64 *puVar5;
  bool bVar6;
  undefined1 auStackX_8 [8];
  
  lVar3 = *(longlong *)param_1;
  bVar6 = false;
  puVar5 = *(ulong64 **)(lVar3 + 0xa8);
  iVar2 = *(int *)(lVar3 + 0xb0);
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xb0) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar5 == puVar1) break;
    pUVar4 = UAudioComponent::GetAudioComponentFromID(*puVar5);
    if (pUVar4 != (UAudioComponent *)0x0) {
      (**(code **)(*(longlong *)pUVar4 + 0x668))(pUVar4);
      bVar6 = true;
    }
    puVar5 = puVar5 + 1;
  }
  return bVar6;
}

// Call @ 14b367fd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FMetasoundUObjectRegistry::IsRegisteredClass'::__l2::<lambda_1>,bool,Metasound::IMetasoundUObjectRegistryEntry_const_*>
::Call(void *param_1,IMetasoundUObjectRegistryEntry **param_2)

{
  IMetasoundUObjectRegistryEntry *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = *param_2;
  if (pIVar1 != (IMetasoundUObjectRegistryEntry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b367fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,*(undefined8 *)param_1);
    return (bool)uVar2;
  }
  return false;
}

// Call @ 14b367ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnEdgeAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  bool bVar1;
  
  bVar1 = UMetaSoundSourceBuilder::AddEdgeToTransactor
                    (*(UMetaSoundSourceBuilder **)param_1,
                     *(FMetasoundFrontendEdge **)((longlong)param_1 + 8),param_2);
  return bVar1;
}

// Call @ 14b368010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UAudioComponent *pUVar8;
  FAudioDevice *this;
  FMetasoundFrontendLiteral *this_00;
  ulong64 *puVar9;
  undefined1 auStackY_c8 [32];
  undefined1 auStack_98 [8];
  FDynamicOperatorTransactor *pFStack_90;
  code *apcStack_88 [2];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  FLiteral FStack_58;
  ulonglong uStack_40;
  
  uStack_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  lVar3 = *(longlong *)param_1;
  puVar9 = *(ulong64 **)(lVar3 + 0xa8);
  iVar2 = *(int *)(lVar3 + 0xb0);
  puVar1 = puVar9 + iVar2;
  pFStack_90 = param_2;
  while( true ) {
    if (*(int *)(lVar3 + 0xb0) != iVar2) {
      auStack_98[0] = 0;
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_98);
    }
    if (puVar9 == puVar1) break;
    uVar4 = *puVar9;
    pUVar8 = UAudioComponent::GetAudioComponentFromID(uVar4);
    if (pUVar8 != (UAudioComponent *)0x0) {
      this = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar8->field_0x250 + 0x88))();
      if (this != (FAudioDevice *)0x0) {
        uStack_70 = **(undefined8 **)((longlong)param_1 + 0x10);
        apcStack_88[0] =
             TFunctionRefCaller<``UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,void,FActiveSound_&>
             ::Call;
        uStack_60 = 0;
        ppuStack_78 = &TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnInputAdded'::`2'::<lambda_1>::operator()'::`12'::<lambda_1>,1,0>
                       ::_vftable_;
        FAudioDevice::SendCommandToActiveSounds
                  (this,uVar4,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_88,
                   (TStatId)0x154f11430);
      }
    }
    puVar9 = puVar9 + 1;
  }
  this_00 = FMetasoundFrontendClassInput::FindConstDefaultChecked
                      (*(FMetasoundFrontendClassInput **)((longlong)param_1 + 0x10),
                       &Metasound::Frontend::DefaultPageID);
  FMetasoundFrontendLiteral::ToLiteral
            (this_00,&FStack_58,(FName *)(*(longlong *)((longlong)param_1 + 0x10) + 8),
             (IDataTypeRegistry *)0x0,(FProxyDataCache *)0x0);
  Metasound::DynamicGraph::FDynamicOperatorTransactor::AddInputDataDestination
            (pFStack_90,(FGuid *)(*(FName **)((longlong)param_1 + 0x10) + 4),
             *(FName **)((longlong)param_1 + 0x10),&FStack_58,
             FMetaSoundFrontendDocumentBuilder::CreateDataReference);
  if (0xc < FStack_58.Value.TypeIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[FStack_58.Value.TypeIndex])(&FStack_58);
  return true;
}

// Call @ 14b368020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnNodeAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  IMetaSoundDocumentInterface *pIVar6;
  longlong lVar7;
  FMetasoundFrontendDocument *pFVar8;
  FMetasoundFrontendGraph *pFVar9;
  uint uVar10;
  FGuid *pFVar11;
  FMetasoundFrontendNode *pFStackX_8;
  FMetasoundFrontendNode *pFStackX_18;
  undefined1 auStack_a8 [16];
  FString FStack_98;
  FString FStack_88;
  FGuid *pFStack_78;
  FMetasoundFrontendClass *pFStack_70;
  FMetasoundFrontendGraph *pFStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 *puStack_30;
  
  pIVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentInterfaceChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28));
  lVar7 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6);
  lVar2 = *(longlong *)param_1;
  pFVar8 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28));
  pFVar9 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar8->RootGraph,(FGuid *)(lVar2 + 0xc0));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  uVar10 = 0;
  if ((int)uVar1 < (pFVar9->Nodes).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar11 = (FGuid *)((pFVar9->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
  pFStack_70 = FMetaSoundFrontendDocumentBuilder::FindDependency
                         ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28),
                          pFVar11 + 1);
  if ((pFStack_70 == (FMetasoundFrontendClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x228,
                         L"Node successfully added to graph but document is missing associated dependency"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  pFStack_78 = pFVar11;
  pFStack_68 = pFVar9;
  lStack_60 = lVar7 + 0x70;
  (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,auStack_a8);
  puStack_30 = auStack_a8;
  Metasound::Frontend::FGraphBuilder::CreateNode((FCreateNodeParams *)&pFStackX_8);
  if (pFStackX_8 == (FMetasoundFrontendNode *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(pFVar11 + 2),&FStack_88);
      FMetaSoundFrontendDocumentBuilder::GetDebugName
                ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28),&FStack_98);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
      }
      if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = false;
  }
  else {
    pFStackX_18 = pFStackX_8;
    pFStackX_8 = (FMetasoundFrontendNode *)0x0;
    Metasound::DynamicGraph::FDynamicOperatorTransactor::AddNode
              (param_2,pFVar11,(INode *)&pFStackX_18);
    bVar4 = true;
  }
  if (pFStackX_8 != (FMetasoundFrontendNode *)0x0) {
    (*(code *)**(undefined8 **)&pFStackX_8->ID)(pFStackX_8,1);
  }
  return bVar4;
}

// Call @ 14b368030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnNodeConfigurationUpdated'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  IMetaSoundDocumentInterface *pIVar7;
  longlong lVar8;
  FMetasoundFrontendDocument *pFVar9;
  FMetasoundFrontendGraph *pFVar10;
  FMetasoundFrontendVertex *pFVar11;
  uint uVar12;
  FGuid *pFVar13;
  byte bVar14;
  FMetasoundFrontendNode *pFVar15;
  FGuid *pFVar16;
  char acStackX_8 [8];
  undefined1 auStackX_18 [8];
  FMetasoundFrontendNode *pFStackX_20;
  FMetasoundFrontendNode *pFStack_e8;
  undefined8 uStack_e0;
  FMetasoundFrontendNode *pFStack_d8;
  char *pcStack_d0;
  FDynamicOperatorTransactor *pFStack_c8;
  undefined1 auStack_c0 [16];
  FString FStack_b0;
  FString FStack_a0;
  FMetasoundFrontendNode *pFStack_88;
  FMetasoundFrontendClass *pFStack_80;
  FMetasoundFrontendGraph *pFStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 *puStack_40;
  
  pIVar7 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentInterfaceChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28));
  lVar8 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7);
  lVar3 = *(longlong *)param_1;
  pFVar9 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar3 + 0x28));
  pFVar10 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                      (&pFVar9->RootGraph,(FGuid *)(lVar3 + 0xc0));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  uVar12 = 0;
  if ((int)uVar1 < (pFVar10->Nodes).ArrayNum) {
    uVar12 = ~uVar1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar15 = (FMetasoundFrontendNode *)
            ((pFVar10->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88);
  pFStack_80 = FMetaSoundFrontendDocumentBuilder::FindDependency
                         ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28),
                          &pFVar15->ClassID);
  if ((pFStack_80 == (FMetasoundFrontendClass *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x25d,
                         L"Node successfully configured on graph but document is missing associated dependency"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  pFStack_88 = pFVar15;
  pFStack_78 = pFVar10;
  lStack_70 = lVar8 + 0x70;
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7,auStack_c0);
  puStack_40 = auStack_c0;
  Metasound::Frontend::FGraphBuilder::CreateNode((FCreateNodeParams *)&pFStackX_20);
  if (pFStackX_20 == (FMetasoundFrontendNode *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&pFVar15->Name,&FStack_a0);
      FMetaSoundFrontendDocumentBuilder::GetDebugName
                ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28),&FStack_b0);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
      }
      if (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar5 = Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveNode
                      (param_2,(FGuid *)pFVar15);
    if (bVar5) {
      pFStack_e8 = pFStackX_20;
      pFStackX_20 = (FMetasoundFrontendNode *)0x0;
      bVar5 = Metasound::DynamicGraph::FDynamicOperatorTransactor::AddNode
                        (param_2,(FGuid *)pFVar15,(INode *)&pFStack_e8);
      if (bVar5) {
        uStack_e0 = *(undefined8 *)param_1;
        pcStack_d0 = acStackX_8;
        acStackX_8[0] = '\x01';
        pFStack_d8 = pFVar15;
        pFStack_c8 = param_2;
        ``UMetaSoundSourceBuilder::OnNodeConfigurationUpdated'::__l2::<lambda_1>::operator()'::__l30
        ::<lambda_1>::operator()(&uStack_e0,&(pFVar15->Interface).Inputs);
        ``UMetaSoundSourceBuilder::OnNodeConfigurationUpdated'::__l2::<lambda_1>::operator()'::__l30
        ::<lambda_1>::operator()(&uStack_e0,&(pFVar15->Interface).Outputs);
        iVar2 = (pFVar15->InputLiterals).ArrayNum;
        bVar14 = 1;
        pFVar13 = (FGuid *)(pFVar15->InputLiterals).AllocatorInstance.Data;
        pFVar16 = (FGuid *)((longlong)pFVar13 + (longlong)iVar2 * 0x68);
        while( true ) {
          if ((pFVar15->InputLiterals).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FMetasoundFrontendVertexLiteral_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(auStackX_18);
          }
          if (pFVar13 == pFVar16) break;
          pFVar11 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                              ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28),
                               (FGuid *)pFVar15,pFVar13,(FGuid *)0x0);
          if (pFVar11 == (FMetasoundFrontendVertex *)0x0) {
            bVar14 = 0;
            pFVar13 = (FGuid *)&pFVar13[6].C;
          }
          else {
            bVar5 = UMetaSoundSourceBuilder::AddNodeInputLiteralToTransactor
                              (*(UMetaSoundSourceBuilder **)param_1,pFVar15,pFVar11,
                               (FMetasoundFrontendLiteral *)(pFVar13 + 1),param_2);
            bVar14 = bVar14 & bVar5;
            pFVar13 = (FGuid *)&pFVar13[6].C;
          }
        }
        if ((acStackX_8[0] != '\0') && (bVar14 != 0)) {
          bVar5 = true;
          goto LAB_14b35c16f;
        }
      }
    }
  }
  bVar5 = false;
LAB_14b35c16f:
  if (pFStackX_20 != (FMetasoundFrontendNode *)0x0) {
    (*(code *)**(undefined8 **)&pFStackX_20->ID)(pFStackX_20,1);
  }
  return bVar5;
}

// Call @ 14b368040

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnOutputAdded'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendDocument *pFVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  uint uVar7;
  FName *pFVar8;
  
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28));
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar5->RootGraph);
  uVar1 = *(uint *)((longlong)param_1 + 8);
  uVar7 = 0;
  if ((int)uVar1 < (pFVar6->Outputs).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar8 = (FName *)((pFVar6->Outputs).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x34);
  Metasound::DynamicGraph::FDynamicOperatorTransactor::AddOutputDataSource
            (param_2,(FGuid *)(pFVar8 + 4),pFVar8);
  return true;
}

// Call @ 14b368050

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemoveSwappingEdge'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  FGuid *pFVar1;
  longlong lVar2;
  bool bVar3;
  FMetasoundFrontendVertex *pFVar4;
  FMetasoundFrontendVertex *pFVar5;
  FMetasoundFrontendLiteral *this;
  FLiteral *pFVar6;
  undefined1 auStackX_8 [8];
  FLiteral FStack_38;
  
  lVar2 = *(longlong *)param_1;
  pFVar4 = FMetaSoundFrontendDocumentBuilder::FindNodeOutput
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28),
                      (FGuid *)((longlong)param_1 + 8),(FGuid *)((longlong)param_1 + 0x18),
                      (FGuid *)0x0);
  pFVar1 = (FGuid *)((longlong)param_1 + 0x28);
  pFVar5 = FMetaSoundFrontendDocumentBuilder::FindNodeInput
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28),pFVar1,
                      (FGuid *)((longlong)param_1 + 0x38),(FGuid *)0x0);
  if ((pFVar4 == (FMetasoundFrontendVertex *)0x0) || (pFVar5 == (FMetasoundFrontendVertex *)0x0)) {
LAB_14b35c422:
    bVar3 = false;
  }
  else {
    this = Metasound::Engine::BuilderSubsystemPrivate::TryResolveNodeInputDefault
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28),pFVar1,
                      pFVar5->Name);
    if (this == (FMetasoundFrontendLiteral *)0x0) {
      bVar3 = ``UMetaSoundSourceBuilder::OnRemoveSwappingEdge'::__l2::<lambda_1>::operator()'::__l5
              ::<lambda_1>::operator()(auStackX_8);
      if (!bVar3) goto LAB_14b35c422;
    }
    pFVar6 = FMetasoundFrontendLiteral::ToLiteral
                       (this,&FStack_38,&pFVar5->TypeName,(IDataTypeRegistry *)0x0,
                        (FProxyDataCache *)0x0);
    Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveDataEdge
              (param_2,(FGuid *)((longlong)param_1 + 8),&pFVar4->Name,pFVar1,&pFVar5->Name,pFVar6,
               FMetaSoundFrontendDocumentBuilder::CreateDataReference);
    bVar3 = true;
  }
  return bVar3;
}

// Call @ 14b368060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemoveSwappingNode'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMetasoundFrontendDocument *pFVar6;
  FMetasoundFrontendGraph *pFVar7;
  uint uVar8;
  
  lVar2 = *(longlong *)param_1;
  pFVar6 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(lVar2 + 0x28));
  pFVar7 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     (&pFVar6->RootGraph,(FGuid *)(lVar2 + 0xc0));
  uVar1 = *(uint *)((longlong)param_1 + 8);
  uVar8 = 0;
  if ((int)uVar1 < (pFVar7->Nodes).ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveNode
            (param_2,(FGuid *)((pFVar7->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88)
            );
  return true;
}

// Call @ 14b368070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  UAudioComponent *pUVar5;
  FAudioDevice *this;
  ulong64 *puVar6;
  undefined1 auStackX_8 [8];
  code *apcStack_58 [2];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  
  Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveInputDataDestination
            (param_2,*(FName **)((longlong)param_1 + 0x10));
  lVar3 = *(longlong *)param_1;
  puVar6 = *(ulong64 **)(lVar3 + 0xa8);
  iVar2 = *(int *)(lVar3 + 0xb0);
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xb0) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar6 == puVar1) break;
    uVar4 = *puVar6;
    pUVar5 = UAudioComponent::GetAudioComponentFromID(uVar4);
    if (pUVar5 != (UAudioComponent *)0x0) {
      this = (FAudioDevice *)(**(code **)(*(longlong *)&pUVar5->field_0x250 + 0x88))();
      if (this != (FAudioDevice *)0x0) {
        uStack_40 = **(undefined8 **)((longlong)param_1 + 0x10);
        apcStack_58[0] =
             TFunctionRefCaller<``UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,void,FActiveSound_&>
             ::Call;
        uStack_30 = 0;
        ppuStack_48 = &TFunction_OwnedObject<``UMetaSoundSourceBuilder::OnRemovingInput'::`2'::<lambda_1>::operator()'::`12'::<lambda_1>,1,0>
                       ::_vftable_;
        FAudioDevice::SendCommandToActiveSounds
                  (this,uVar4,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_58,
                   (TStatId)0x154f11430);
      }
    }
    puVar6 = puVar6 + 1;
  }
  return true;
}

// Call @ 14b368080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemovingOutput'::__l2::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendDocument *pFVar5;
  FMetasoundFrontendClassInterface *pFVar6;
  uint uVar7;
  
  pFVar5 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked
                     ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28));
  pFVar6 = FMetasoundFrontendClass::GetDefaultInterface
                     ((FMetasoundFrontendClass *)&pFVar5->RootGraph);
  uVar1 = *(uint *)((longlong)param_1 + 8);
  uVar7 = 0;
  if ((int)uVar1 < (pFVar6->Outputs).ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveOutputDataSource
            (param_2,(FName *)((pFVar6->Outputs).AllocatorInstance.Data +
                              (longlong)(int)uVar1 * 0x34));
  return true;
}

// Call @ 14b368090

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundCacheSubsystem::PrecacheMetaSoundInternal'::__l2::<lambda_1>,void,UMetaSoundSource_const_&>
::Call(void *param_1,UMetaSoundSource *param_2)

{
  return;
}

// Call @ 14b3680a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID'::__l2::<lambda_1>,void,FGuid_const_&,FMetasoundFrontendLiteral_const_&>
::Call(void *param_1,FGuid *param_2,FMetasoundFrontendLiteral *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  
  lVar1 = *(longlong *)param_1;
  pFVar7 = (ForAnyElementType *)(lVar1 + 0x98);
  if (((FGuid *)pFVar7->Data <= param_2) &&
     (param_2 < (FGuid *)pFVar7->Data + *(int *)(lVar1 + 0xa4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)(lVar1 + 0xa0);
  if (iVar6 == *(int *)(lVar1 + 0xa4)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar7,(int *)(lVar1 + 0xa4));
  }
  *(int *)(lVar1 + 0xa0) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_2->C;
  pFVar2 = pFVar7->Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10) = *(undefined8 *)param_2;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10 + 8) = uVar4;
  return;
}

// Call @ 14b3680b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageID'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
::Call(void *param_1,FMetasoundFrontendGraph *param_2)

{
  FGuid *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  
  lVar2 = *(longlong *)param_1;
  pFVar1 = &param_2->PageID;
  pFVar8 = (ForAnyElementType *)(lVar2 + 0x98);
  if ((pFVar8->Data <= pFVar1) && (pFVar1 < pFVar8->Data + (longlong)*(int *)(lVar2 + 0xa4) * 0x10))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)(lVar2 + 0xa0);
  if (iVar7 == *(int *)(lVar2 + 0xa4)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar8,(int *)(lVar2 + 0xa4));
  }
  *(int *)(lVar2 + 0xa0) = iVar7 + 1;
  uVar5 = *(undefined8 *)&(param_2->PageID).C;
  pFVar3 = pFVar8->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)pFVar1;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar5;
  return;
}

// Call @ 14b3680c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::Engine::FDocumentBuilderRegistry::ResolveTargetPageIDInternal'::__l2::<lambda_1>,void,FMetaSoundPageSettings_const_&>
::Call(void *param_1,FMetaSoundPageSettings *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = *(uint **)((longlong)param_1 + 8);
  **(byte **)param_1 =
       **(byte **)param_1 |
       (((puVar3[2] == (param_2->UniqueId).C && puVar3[1] == (param_2->UniqueId).B) &&
        puVar3[3] == (param_2->UniqueId).D) && *puVar3 == (param_2->UniqueId).A);
  if ((**(char **)param_1 != '\0') && (**(char **)((longlong)param_1 + 0x10) == '\0')) {
    puVar3 = (uint *)**(undefined8 **)((longlong)param_1 + 0x18);
    puVar4 = puVar3 + (longlong)*(int *)(*(undefined8 **)((longlong)param_1 + 0x18) + 1) * 4;
    if (puVar3 != puVar4) {
      while ((((param_2->UniqueId).B != puVar3[1] || (param_2->UniqueId).C != puVar3[2]) ||
             (param_2->UniqueId).D != puVar3[3]) || (param_2->UniqueId).A != *puVar3) {
        puVar3 = puVar3 + 4;
        if (puVar3 == puVar4) {
          return;
        }
      }
      **(char **)((longlong)param_1 + 0x10) = '\x01';
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x20);
      uVar2 = *(undefined8 *)&(param_2->UniqueId).C;
      *puVar1 = *(undefined8 *)&param_2->UniqueId;
      puVar1[1] = uVar2;
    }
  }
  return;
}

// Call @ 14b3680d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::SearchAndIterateDirectoryAssets'::__l2::<lambda_1>,void,UClass_&>
::Call(void *param_1,UClass *param_2)

{
  longlong lVar1;
  int iVar2;
  FAssetData *pFVar3;
  FAssetData *pFVar4;
  undefined1 auStackX_8 [8];
  FAssetData *pFStack_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)param_1;
  if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  *(UClass **)(lVar1 + 0x30) = param_2;
  pFStack_18 = (FAssetData *)0x0;
  uStack_10 = 0;
  (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x4b8))
            (*(longlong **)((longlong)param_1 + 8),&pFStack_18,*(undefined8 *)param_1);
  iVar2 = (int)uStack_10;
  pFVar4 = pFStack_18 + (int)uStack_10;
  pFVar3 = pFStack_18;
  while( true ) {
    if ((int)uStack_10 != iVar2) {
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar3 == pFVar4) break;
    (*(code *)**(undefined8 **)((longlong)param_1 + 0x10))
              ((*(undefined8 **)((longlong)param_1 + 0x10))[1],pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  DestructItems<FAssetData,int>(pFStack_18,(int)uStack_10);
  if (pFStack_18 != (FAssetData *)0x0) {
    FMemory::Free(pFStack_18);
  }
  return;
}

// Call @ 14b3680e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnNodeInputLiteralSet'::__l5::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  uVar1 = **(uint **)((longlong)param_1 + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x60)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = UMetaSoundSourceBuilder::AddNodeInputLiteralToTransactor
                    (*(UMetaSoundSourceBuilder **)param_1,
                     *(FMetasoundFrontendNode **)((longlong)param_1 + 8),
                     *(FMetasoundFrontendVertex **)((longlong)param_1 + 0x10),
                     (FMetasoundFrontendLiteral *)
                     (*(longlong *)(lVar2 + 0x58) + 0x10 + (longlong)(int)uVar1 * 0x68),param_2);
  return bVar4;
}

// Call @ 14b3680f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::OnRemovingNodeInputLiteral'::__l5::<lambda_1>,bool,Metasound::DynamicGraph::FDynamicOperatorTransactor_&>
::Call(void *param_1,FDynamicOperatorTransactor *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMetasoundFrontendLiteral *this;
  FLiteral *pFVar4;
  undefined1 auStackY_68 [32];
  undefined8 uStack_38;
  FLiteral FStack_30;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = Metasound::Engine::BuilderSubsystemPrivate::TryResolveNodeInputDefault
                   ((FMetaSoundFrontendDocumentBuilder *)(*(longlong *)param_1 + 0x28),
                    *(FGuid **)((longlong)param_1 + 8),**(FName **)((longlong)param_1 + 0x10));
  if (this == (FMetasoundFrontendLiteral *)0x0) {
    uStack_38 = *(undefined8 *)((longlong)param_1 + 0x10);
    bVar2 = ``UMetaSoundSourceBuilder::OnRemovingNodeInputLiteral'::__l5::<lambda_1>::operator()'::
            __l2::<lambda_1>::operator()(&uStack_38);
    if (!bVar2) {
      return bVar2;
    }
  }
  pFVar4 = FMetasoundFrontendLiteral::ToLiteral
                     (this,&FStack_30,(FName *)(*(longlong *)((longlong)param_1 + 0x10) + 8),
                      (IDataTypeRegistry *)0x0,(FProxyDataCache *)0x0);
  Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue
            (param_2,*(FGuid **)((longlong)param_1 + 8),*(FName **)((longlong)param_1 + 0x10),pFVar4
             ,FMetaSoundFrontendDocumentBuilder::CreateDataReference);
  if ((0xc < FStack_30.Value.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[FStack_30.Value.TypeIndex])(&FStack_30);
  return true;
}

// Call @ 14b368100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  code *apcStack_48 [2];
  longlong alStack_38 [3];
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)param_1;
  pcVar1 = *(code **)(*plVar3 + 0x20);
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  lStack_60 = *plVar2;
  lStack_58 = plVar2[1];
  lStack_68 = plVar2[2];
  apcStack_48[0] = (code *)0x0;
  plStack_20 = FMemory::Malloc(0x20,8);
  *plStack_20 = (longlong)
                &TFunction_OwnedObject<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::`8'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
  plStack_20[1] = lStack_60;
  plStack_20[2] = lStack_58;
  plStack_20[3] = lStack_68;
  if (plStack_20 + 1 != (longlong *)0x0) {
    apcStack_48[0] =
         TFunctionRefCaller<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMetaSoundAssetKey,UObject_&>
         ::Call;
  }
  (*pcVar1)(plVar3,param_2,apcStack_48);
  if (apcStack_48[0] != (code *)0x0) {
    plVar3 = alStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// Call @ 14b368110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMetaSoundSourceBuilder::OnInputAdded'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,void,FActiveSound_&>
::Call(void *param_1,FActiveSound *param_2)

{
  Metasound::FMetaSoundParameterTransmitter::AddAvailableParameter
            ((FMetaSoundParameterTransmitter *)(param_2->InstanceTransmitter).Object,
             *(FName *)param_1);
  return;
}

// Call @ 14b368130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMetaSoundSourceBuilder::OnRemovingInput'::__l2::<lambda_1>::operator()'::__l12::<lambda_1>,void,FActiveSound_&>
::Call(void *param_1,FActiveSound *param_2)

{
  Metasound::FMetaSoundParameterTransmitter::RemoveAvailableParameter
            ((FMetaSoundParameterTransmitter *)(param_2->InstanceTransmitter).Object,
             *(FName *)param_1);
  return;
}

// Call @ 14b368150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<bool>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
::Call(void *param_1,FInputBinding *param_2)

{
  Metasound::VertexDataPrivate::FInputBinding::SetValue<bool>(param_2,*(bool **)param_1);
  return;
}

// Call @ 14b368170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMetaSoundSourceBuilder::InitTargetPageDelegates'::__l2::<lambda_2>,void,Metasound::Frontend::FGraphModifyDelegates_&>
::Call(void *param_1,FGraphModifyDelegates *param_2)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_2->NodeDelegates,
             *(void **)param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_2->NodeDelegates).OnNodeConfigurationUpdated,*(void **)param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_2->NodeDelegates).OnNodeInputLiteralSet,*(void **)param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_2->NodeDelegates).OnRemoveSwappingNode,*(void **)param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_2->NodeDelegates).OnRemovingNodeInputLiteral,*(void **)param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)param_2,*(void **)param_1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(param_2->EdgeDelegates).OnRemoveSwappingEdge,*(void **)param_1);
  return;
}

// Call @ 14b368180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  code *apcStack_48 [2];
  longlong alStack_38 [3];
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  lStack_60 = *(longlong *)((longlong)param_1 + 8);
  lStack_58 = *(longlong *)((longlong)param_1 + 0x10);
  plVar2 = *(longlong **)param_1;
  lStack_68 = *(longlong *)((longlong)param_1 + 0x18);
  apcStack_48[0] = (code *)0x0;
  pcVar1 = *(code **)(*plVar2 + 0x20);
  plStack_20 = FMemory::Malloc(0x20,8);
  *plStack_20 = (longlong)
                &TFunction_OwnedObject<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
  plStack_20[1] = lStack_60;
  plStack_20[2] = lStack_58;
  plStack_20[3] = lStack_68;
  if (plStack_20 + 1 != (longlong *)0x0) {
    apcStack_48[0] =
         TFunctionRefCaller<``Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,FMetaSoundAssetKey,UObject_&>
         ::Call;
  }
  (*pcVar1)(plVar2,param_2,apcStack_48);
  if (apcStack_48[0] != (code *)0x0) {
    plVar2 = alStack_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar2 = plStack_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// Call @ 14b368190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::UnregisterAssetClassesInDirectories'::__l2::<lambda_2>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  IMetasoundUObjectRegistry *pIVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar9;
  FMetasoundAssetBase *this;
  INodeClassRegistry *pIVar10;
  FName *pFVar11;
  longlong lVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_> *this_00;
  FTopLevelAssetPath FStack_1c8;
  FMetaSoundAssetKey FStack_1b8;
  undefined1 auStack_198 [24];
  undefined8 uStack_180;
  void *pvStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ForElementType<FSetElementId> FStack_160;
  ulonglong uStack_150;
  <lambda_1> <Stack_148;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> TStack_140;
  FString FStack_f0;
  FNodeClassRegistryKey FStack_e0;
  undefined1 auStack_b8 [32];
  FMetasoundFrontendVersionNumber FStack_98;
  byte bStack_8e;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> TStack_78;
  
  TStack_140.Hash.InlineData[0] = '\0';
  TStack_140.Hash.InlineData[1] = '\0';
  TStack_140.Hash.InlineData[2] = '\0';
  TStack_140.Hash.InlineData[3] = '\0';
  TStack_140.Hash._padding_ = 0;
  TStack_140.HashSize = 0;
  TStack_140._76_4_ = 0;
  TStack_140.Elements._16_8_ = 0;
  TStack_140.Elements._24_8_ = 0;
  TStack_140.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  TStack_140.Elements._48_8_ = _UNK_150631d98;
  TStack_140.Elements._0_8_ = 0;
  TStack_140.Elements._8_8_ = 0;
  TStack_140.Elements._32_8_ = 0;
  TStack_140.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pUVar7 = FAssetData::FastGetAsset(param_2,false,&TStack_140);
  if (pUVar7 == (UObject *)0x0) {
    Metasound::Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo
              ((FMetaSoundAssetClassInfo *)auStack_b8,param_2);
    if ((bStack_8e & 1) == 0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6979144095893554377>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                         ,0x4c9,"ClassInfo.bIsValid");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      FMetaSoundAssetKey::FMetaSoundAssetKey
                (&FStack_1b8,(FMetasoundFrontendClassName *)(auStack_b8 + 8),&FStack_98);
      Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&FStack_e0,&FStack_1b8);
      pIVar10 = Metasound::Frontend::INodeClassRegistry::Get();
      cVar4 = (**(code **)((longlong)*pIVar10 + 0x40))(pIVar10,&FStack_e0);
      if (cVar4 != '\0') {
        pIVar10 = Metasound::Frontend::INodeClassRegistry::Get();
        (**(code **)((longlong)*pIVar10 + 0x38))(pIVar10,&FStack_e0);
        FStack_1c8.PackageName.ComparisonIndex.Value = 0;
        FStack_1c8.PackageName.Number = 0;
        FStack_1c8.AssetName.ComparisonIndex.Value = 0;
        FStack_1c8.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&FStack_1c8,param_2->PackageName,param_2->AssetName);
        lVar2 = *(longlong *)param_1;
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x168);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        uVar5 = ::GetTypeHash(&FStack_1b8);
        if (*(int *)(lVar2 + 0x120) != *(int *)(lVar2 + 0x14c)) {
          lVar12 = *(longlong *)(lVar2 + 0x158);
          if (*(longlong *)(lVar2 + 0x158) == 0) {
            lVar12 = lVar2 + 0x150;
          }
          uVar5 = *(uint *)(lVar12 + (ulonglong)(*(int *)(lVar2 + 0x160) - 1U & uVar5) * 4);
          if (uVar5 != 0xffffffff) {
            do {
              pFVar11 = (FName *)((longlong)(int)uVar5 * 0x38 +
                                 *(longlong *)
                                  &((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                     *)(lVar2 + 0x118))->Elements);
              if ((((*pFVar11 == FStack_1b8.ClassName.Namespace) &&
                   (pFVar11[1] == FStack_1b8.ClassName.Name)) &&
                  (pFVar11[2] == FStack_1b8.ClassName.Variant)) &&
                 ((pFVar11[3].ComparisonIndex.Value == FStack_1b8.Version.Major &&
                  (pFVar11[3].Number == FStack_1b8.Version.Minor)))) {
                if (uVar5 != 0xffffffff) {
                  this_00 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                             *)(pFVar11 + 4);
                  if (pFVar11 == (FName *)0x0) {
                    this_00 = (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                               *)0x0;
                  }
                  if (this_00 !=
                      (TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                       *)0x0) {
                    <Stack_148.InAssetPath = &FStack_1c8;
                    iVar6 = TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>
                            ::
                            RemoveAllSwap<_Metasound::Engine::AssetSubsystemPrivate::RemoveClassInfo_::__l5::<lambda_1>_>
                                      (this_00,&<Stack_148,No);
                    if (0 < iVar6) {
                      if (((1 < iVar6) && (FStack_1c8.PackageName == (FName)0x0)) &&
                         (3 < (byte)LogMetaSound._0_1_)) {
                        FMetaSoundAssetKey::ToString(&FStack_1b8,&FStack_f0);
                        Logging::Private::BasicLog<4>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                        if (FStack_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(FStack_f0.Data.AllocatorInstance.Data);
                        }
                      }
                      if ((this_00->ArrayNum == 0) &&
                         (*(int *)(lVar2 + 0x120) != *(int *)(lVar2 + 0x14c))) {
                        uVar5 = ::GetTypeHash(&FStack_1b8);
                        TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::RemoveImpl<FMetaSoundAssetKey>
                                  ((TSet<TTuple<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetaSoundAssetKey,TArray<Metasound::Frontend::FMetaSoundAssetClassInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                    *)(lVar2 + 0x118),uVar5,&FStack_1b8);
                      }
                    }
                  }
                }
                break;
              }
              uVar5 = pFVar11[6].ComparisonIndex.Value;
            } while (uVar5 != 0xffffffff);
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  else {
    pIVar8 = Metasound::IMetasoundUObjectRegistry::Get();
    auStack_198._16_8_ = 0;
    uStack_180 = 0;
    FStack_160.InlineData[0] = '\0';
    FStack_160.InlineData[1] = '\0';
    FStack_160.InlineData[2] = '\0';
    FStack_160.InlineData[3] = '\0';
    FStack_160._padding_ = 0;
    pcVar1 = *(code **)((longlong)*pIVar8 + 0x50);
    uStack_150 = 0;
    auStack_198._0_8_ = (FScriptContainerElement *)0x0;
    auStack_198._8_8_ = 0;
    pvStack_178 = (void *)0x0;
    uStack_170 = ___xmm_00000000ffffffff0000008000000000;
    uStack_168 = _UNK_150631d98;
    FStack_160.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar9 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
             TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                       (&TStack_78,
                        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)auStack_198);
    pUVar7 = FAssetData::FastGetAsset(param_2,true,pTVar9);
    uStack_150 = uStack_150 & 0xffffffff00000000;
    if (FStack_160.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FStack_160.SecondaryData);
    }
    iVar6 = SUB84(auStack_198._8_8_,4);
    auStack_198._8_8_ = auStack_198._8_8_ & 0xffffffff00000000;
    if (iVar6 != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)auStack_198,0,(int *)(auStack_198 + 0xc));
    }
    uVar5 = uStack_170._4_4_;
    uStack_168 = 0xffffffff;
    uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
    if (0x80 < uVar5) {
      uStack_170 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_198 + 0x10),0);
    }
    if (pvStack_178 != (void *)0x0) {
      FMemory::Free(pvStack_178);
    }
    if ((FScriptContainerElement *)auStack_198._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_198._0_8_);
    }
    this = (FMetasoundAssetBase *)(*pcVar1)(pIVar8,pUVar7);
    if ((this == (FMetasoundAssetBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MetaSoundAsset",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                           ,0x4c1,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMetasoundAssetBase::UnregisterGraphWithFrontend(this);
    (**(code **)(**(longlong **)param_1 + 0xc0))(*(longlong **)param_1,param_2);
  }
  return;
}

