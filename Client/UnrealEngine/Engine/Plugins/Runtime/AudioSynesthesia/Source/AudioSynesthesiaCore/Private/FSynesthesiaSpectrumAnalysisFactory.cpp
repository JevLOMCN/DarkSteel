// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// GetName @ 14d7ebfd0

FName __thiscall
Audio::FSynesthesiaSpectrumAnalysisFactory::GetName(FSynesthesiaSpectrumAnalysisFactory *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"SpectrumAnalysisFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetTitle @ 14d7ec050

FString * __thiscall
Audio::FSynesthesiaSpectrumAnalysisFactory::GetTitle
          (FSynesthesiaSpectrumAnalysisFactory *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Real-Time Spectrum Analyzer");
  return __return_storage_ptr__;
}

// NewResult @ 14d7ec080

TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> __thiscall
Audio::FSynesthesiaSpectrumAnalysisFactory::NewResult(FSynesthesiaSpectrumAnalysisFactory *this)

{
  IAnalyzerResult IVar1;
  IAnalyzerResult *in_RDX;
  
  IVar1 = (IAnalyzerResult)::operator_new(0x60);
  if (IVar1 != (IAnalyzerResult)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7FSynesthesiaSpectrumResult_Audio__6B_;
    *(undefined4 *)((longlong)IVar1 + 8) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x30) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x38) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x3c) = 0x80;
    *(undefined4 *)((longlong)IVar1 + 0x40) = 0xffffffff;
    *(undefined4 *)((longlong)IVar1 + 0x44) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x50) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x58) = 0;
    return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)in_RDX;
  }
  *in_RDX = (IAnalyzerResult)0x0;
  return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)in_RDX;
}

// NewWorker @ 14d7ec0f0

TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_> __thiscall
Audio::FSynesthesiaSpectrumAnalysisFactory::NewWorker
          (FSynesthesiaSpectrumAnalysisFactory *this,FAnalyzerParameters *param_1,
          IAnalyzerSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_> TVar3;
  FSynesthesiaSpectrumAnalysisWorker *this_00;
  FAnalyzerParameters FVar4;
  FSynesthesiaSpectrumAnalysisSettings *in_R9;
  
  if (in_R9 == (FSynesthesiaSpectrumAnalysisSettings *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != SpectrumSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalysisFactory.cpp"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (IAnalyzerWorker *)(*pcVar1)();
      return (TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_>)TVar3.Ptr;
    }
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FSynesthesiaSpectrumAnalysisWorker *)0x0) {
    FVar4 = (FAnalyzerParameters)
            FSynesthesiaSpectrumAnalysisWorker::FSynesthesiaSpectrumAnalysisWorker
                      (this_00,(FAnalyzerParameters *)param_2,in_R9);
    *param_1 = FVar4;
    return (TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_>)
           (IAnalyzerWorker *)param_1;
  }
  param_1->SampleRate = 0;
  param_1->NumChannels = 0;
  return (TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_>)
         (IAnalyzerWorker *)param_1;
}

