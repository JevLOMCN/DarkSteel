// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// AreFFTSettingsSupported @ 1444aa0c0

bool __cdecl Audio::FFFTFactory::AreFFTSettingsSupported(FFFTSettings *param_1,FName *param_2)

{
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_18;
  
  GetPrioritizedSupportingFactories(&local_18,param_1,param_2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return 0 < local_18.ArrayNum;
}

// NewFFTAlgorithm @ 1444c7650

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> __cdecl
Audio::FFFTFactory::NewFFTAlgorithm(FFFTSettings *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FName *in_R8;
  undefined1 local_res20 [8];
  FFFTSettings local_38;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_30;
  
  GetPrioritizedSupportingFactories(&local_30,(FFFTSettings *)param_2,in_R8);
  iVar3 = local_30.ArrayNum;
  pFVar1 = local_30.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar2.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if (local_30.ArrayNum != iVar3) {
      `TCheckedPointerIterator<Audio::IFFTAlgorithmFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar2.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar2.Data + 0x28))(*(longlong **)FVar2.Data,&local_38,param_2);
    if (local_38 != (FFFTSettings)0x0) {
      *param_1 = local_38;
      local_38.Log2Size = 0;
      local_38.bArrays128BitAligned = false;
      local_38.bEnableHardwareAcceleration = false;
      local_38._6_2_ = 0;
LAB_1444c7725:
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      return (TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_>)
             (IFFTAlgorithm *)param_1;
    }
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
    if (local_38 != (FFFTSettings)0x0) {
      (*(code *)**(undefined8 **)local_38)(local_38,1);
    }
    FVar2.Data = FVar2.Data + 8;
  }
  if (2 < (byte)LogSignalProcessing._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
  }
  param_1->Log2Size = 0;
  param_1->bArrays128BitAligned = false;
  param_1->bEnableHardwareAcceleration = false;
  *(undefined2 *)&param_1->field_0x6 = 0;
  goto LAB_1444c7725;
}

