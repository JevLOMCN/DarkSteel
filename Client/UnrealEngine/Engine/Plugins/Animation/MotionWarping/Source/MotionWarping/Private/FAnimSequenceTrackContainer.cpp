// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 1

// GetNum @ 14cf0ffa0

int __thiscall FAnimSequenceTrackContainer::GetNum(FAnimSequenceTrackContainer *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (this->AnimationTracks).ArrayNum;
  if ((this->TrackNames).ArrayNum != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackNames.Num() == AnimationTracks.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequence.h"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = (this->AnimationTracks).ArrayNum;
  }
  return iVar3;
}

