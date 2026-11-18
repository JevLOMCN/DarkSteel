// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// FSourceBufferState @ 14b34aeb0

FSourceBufferState * __thiscall
Metasound::WavePlayerNodePrivate::FSourceBufferState::FSourceBufferState
          (FSourceBufferState *this,FSoundWaveProxyReader *param_1,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FSourceBufferState *pFVar9;
  
  iVar2 = param_1->NumFramesInWave;
  iVar3 = param_1->LoopEndFrameIndex;
  iVar4 = param_1->LoopStartFrameIndex;
  bVar1 = (param_1->Settings).bIsLooping;
  iVar8 = Audio::GetMultichannelBufferNumFrames(param_2);
  iVar5 = param_1->CurrentFrameIndex;
  this->StartFrameIndex = -1;
  this->EndFrameIndex = -1;
  this->EOFFrameIndexInBuffer = -1;
  this->LoopEndFrameIndexInBuffer = -1;
  this->EOFFrameIndexInWave = -1;
  this->LoopStartFrameIndexInWave = -1;
  this->LoopEndFrameIndexInWave = -1;
  if (iVar5 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStartFrameIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                       ,0x61,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FSourceBufferState *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (iVar8 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumFrames >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                       ,0x62,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FSourceBufferState *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLoopStartFrameIndexInWave >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                       ,99,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FSourceBufferState *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLoopEndFrameIndexInWave >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                       ,100,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FSourceBufferState *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEOFFrameIndexInWave >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                       ,0x65,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FSourceBufferState *)(*pcVar6)();
      return pFVar9;
    }
  }
  this->StartFrameIndex = iVar5;
  this->EndFrameIndex = iVar5;
  this->EOFFrameIndexInBuffer = iVar2 - iVar5;
  this->LoopStartFrameIndexInWave = iVar4;
  this->LoopEndFrameIndexInWave = iVar3;
  this->LoopEndFrameIndexInBuffer = iVar3 - iVar5;
  this->EOFFrameIndexInWave = iVar2;
  Append(this,iVar8,bVar1);
  return this;
}

// Append @ 14b365410

void __thiscall
Metasound::WavePlayerNodePrivate::FSourceBufferState::Append
          (FSourceBufferState *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumFrames >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                       ,0x91,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = this->EndFrameIndex + param_1;
  this->EndFrameIndex = iVar3;
  if (param_2) {
    iVar4 = iVar3 - this->LoopEndFrameIndexInWave;
    if (0 < iVar4) {
      iVar3 = this->LoopStartFrameIndexInWave + iVar4;
    }
    this->EndFrameIndex = iVar3;
  }
  return;
}

