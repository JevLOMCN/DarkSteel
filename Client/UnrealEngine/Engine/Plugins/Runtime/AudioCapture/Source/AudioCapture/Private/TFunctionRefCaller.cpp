// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 2

// Call @ 14d0cecd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices
            (*(UObject **)param_1,(FOnAudioInputDevicesObtained *)((longlong)param_1 + 8));
  return;
}

// Call @ 14d0cecf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,void,void_const_*,int,int,int,double,bool>
::Call(void *param_1,void **param_2,int *param_3,int *param_4,int *param_5,double *param_6,
      bool *param_7)

{
  UAudioGenerator::OnGeneratedAudio(*(UAudioGenerator **)param_1,*param_2,*param_3 * *param_4);
  return;
}

