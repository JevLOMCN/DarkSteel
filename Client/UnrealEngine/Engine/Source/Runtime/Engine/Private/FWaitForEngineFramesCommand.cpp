// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FWaitForEngineFramesCommand @ 148809470

FWaitForEngineFramesCommand * __thiscall
FWaitForEngineFramesCommand::FWaitForEngineFramesCommand
          (FWaitForEngineFramesCommand *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FWaitForEngineFramesCommand *pFVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->FramesToWait = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FWaitForEngineFramesCommand__6B_;
  this->FrameCounter = 0;
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFramesToWait > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                       ,0x454,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWaitForEngineFramesCommand *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->FramesToWait = param_1;
  return this;
}

// Update @ 14885fe00

bool __thiscall FWaitForEngineFramesCommand::Update(FWaitForEngineFramesCommand *this)

{
  this->FrameCounter = this->FrameCounter + 1;
  return this->FrameCounter == this->FramesToWait;
}

