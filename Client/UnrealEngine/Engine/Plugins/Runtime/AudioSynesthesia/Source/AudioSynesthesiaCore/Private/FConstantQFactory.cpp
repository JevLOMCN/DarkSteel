// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// GetName @ 14d7ed0b0

FName __thiscall Audio::FConstantQFactory::GetName(FConstantQFactory *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"ConstantQFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetTitle @ 14d7ed170

FString * __thiscall
Audio::FConstantQFactory::GetTitle(FConstantQFactory *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Real-Time Constant Q Analyzer");
  return __return_storage_ptr__;
}

// NewResult @ 14d7ed1a0

TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> __thiscall
Audio::FConstantQFactory::NewResult(FConstantQFactory *this)

{
  IAnalyzerResult IVar1;
  IAnalyzerResult *in_RDX;
  
  IVar1 = (IAnalyzerResult)::operator_new(0x58);
  if (IVar1 != (IAnalyzerResult)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7FConstantQResult_Audio__6B_;
    *(undefined8 *)((longlong)IVar1 + 8) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x28) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x30) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x34) = 0x80;
    *(undefined4 *)((longlong)IVar1 + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)IVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)IVar1 + 0x48) = 0;
    *(undefined4 *)((longlong)IVar1 + 0x50) = 0;
    return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)in_RDX;
  }
  *in_RDX = (IAnalyzerResult)0x0;
  return (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_>)in_RDX;
}

// NewWorker @ 14d7ed210

TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_> __thiscall
Audio::FConstantQFactory::NewWorker
          (FConstantQFactory *this,FAnalyzerParameters *param_1,IAnalyzerSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_> TVar3;
  FConstantQWorker *this_00;
  FAnalyzerParameters FVar4;
  FConstantQSettings *in_R9;
  
  if (in_R9 == (FConstantQSettings *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != ConstantQSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQFactory.cpp"
                       ,0x90,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (IAnalyzerWorker *)(*pcVar1)();
      return (TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_>)TVar3.Ptr;
    }
  }
  this_00 = ::operator_new(0x80);
  if (this_00 != (FConstantQWorker *)0x0) {
    FVar4 = (FAnalyzerParameters)
            FConstantQWorker::FConstantQWorker(this_00,(FAnalyzerParameters *)param_2,in_R9);
    *param_1 = FVar4;
    return (TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_>)
           (IAnalyzerWorker *)param_1;
  }
  param_1->SampleRate = 0;
  param_1->NumChannels = 0;
  return (TUniquePtr<Audio::IAnalyzerWorker,TDefaultDelete<Audio::IAnalyzerWorker>_>)
         (IAnalyzerWorker *)param_1;
}

