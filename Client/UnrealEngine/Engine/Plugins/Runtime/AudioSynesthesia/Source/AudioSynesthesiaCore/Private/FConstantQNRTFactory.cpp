// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// GetName @ 14d7ece10

FName __thiscall Audio::FConstantQNRTFactory::GetName(FConstantQNRTFactory *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"ConstantQNRTFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetTitle @ 14d7ece90

FString * __thiscall
Audio::FConstantQNRTFactory::GetTitle(FConstantQNRTFactory *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Constant Q Analyzer Non-Real-Time");
  return __return_storage_ptr__;
}

// NewResult @ 14d7ecec0

TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_> __thiscall
Audio::FConstantQNRTFactory::NewResult(FConstantQNRTFactory *this)

{
  IAnalyzerNRTResult IVar1;
  IAnalyzerNRTResult *in_RDX;
  
  IVar1 = (IAnalyzerNRTResult)::operator_new(0xb8);
  if (IVar1 != (IAnalyzerNRTResult)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7FConstantQNRTResult_Audio__6B_;
    *(undefined8 *)((longlong)IVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x30) = 0;
    *(undefined4 *)((longlong)IVar1 + 8) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x38) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x3c) = 0x80;
    *(undefined4 *)((longlong)IVar1 + 0x40) = 0xffffffff;
    *(undefined4 *)((longlong)IVar1 + 0x44) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x50) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x58) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x60) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x68) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x80) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x88) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x8c) = 0x80;
    *(undefined4 *)((longlong)IVar1 + 0x90) = 0xffffffff;
    *(undefined4 *)((longlong)IVar1 + 0x94) = 0;
    *(undefined8 *)((longlong)IVar1 + 0xa0) = 0;
    *(undefined4 *)((longlong)IVar1 + 0xa8) = 0;
    *(undefined1 *)((longlong)IVar1 + 0xb0) = 0;
    return (TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_>)in_RDX;
  }
  *in_RDX = (IAnalyzerNRTResult)0x0;
  return (TUniquePtr<Audio::IAnalyzerNRTResult,TDefaultDelete<Audio::IAnalyzerNRTResult>_>)in_RDX;
}

// NewWorker @ 14d7ecf80

TUniquePtr<Audio::IAnalyzerNRTWorker,TDefaultDelete<Audio::IAnalyzerNRTWorker>_> __thiscall
Audio::FConstantQNRTFactory::NewWorker
          (FConstantQNRTFactory *this,FAnalyzerNRTParameters *param_1,IAnalyzerNRTSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Audio::IAnalyzerNRTWorker,TDefaultDelete<Audio::IAnalyzerNRTWorker>_> TVar3;
  FConstantQNRTWorker *this_00;
  FAnalyzerNRTParameters FVar4;
  FConstantQNRTSettings *in_R9;
  
  if (in_R9 == (FConstantQNRTSettings *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != ConstantQSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                       ,0x10b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (IAnalyzerNRTWorker *)(*pcVar1)();
      return (TUniquePtr<Audio::IAnalyzerNRTWorker,TDefaultDelete<Audio::IAnalyzerNRTWorker>_>)
             TVar3.Ptr;
    }
  }
  this_00 = ::operator_new(0x88);
  if (this_00 != (FConstantQNRTWorker *)0x0) {
    FVar4 = (FAnalyzerNRTParameters)
            FConstantQNRTWorker::FConstantQNRTWorker
                      (this_00,(FAnalyzerNRTParameters *)param_2,in_R9);
    *param_1 = FVar4;
    return (TUniquePtr<Audio::IAnalyzerNRTWorker,TDefaultDelete<Audio::IAnalyzerNRTWorker>_>)
           (IAnalyzerNRTWorker *)param_1;
  }
  param_1->SampleRate = 0.0;
  param_1->NumChannels = 0;
  return (TUniquePtr<Audio::IAnalyzerNRTWorker,TDefaultDelete<Audio::IAnalyzerNRTWorker>_>)
         (IAnalyzerNRTWorker *)param_1;
}

