// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 2

// ~IAnalyzerNRTResult @ 14d7f9610

void __thiscall Audio::IAnalyzerNRTResult::~IAnalyzerNRTResult(IAnalyzerNRTResult *this)

{
  *this = (IAnalyzerNRTResult)&___7IAnalyzerNRTResult_Audio__6B_;
  return;
}

// CopyFrom @ 14d803440

void __thiscall
Audio::IAnalyzerNRTResult::CopyFrom(IAnalyzerNRTResult *this,IAnalyzerNRTResult *param_1)

{
  code *pcVar1;
  bool bVar2;
  FBitWriter local_178;
  FBitReader local_b8;
  
  FBitWriter::FBitWriter(&local_178);
  (**(code **)((longlong)*param_1 + 8))(param_1,&local_178);
  if ((local_178._padding_._1_1_ & 2) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsError()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBitReader::FBitReader
            (&local_b8,(uchar *)local_178.Buffer.AllocatorInstance.Data,
             local_178.Num + 7U & 0xfffffffffffffff8);
  (**(code **)((longlong)*this + 8))(this,&local_b8);
  FBitReader::~FBitReader(&local_b8);
  FBitWriter::~FBitWriter(&local_178);
  return;
}

