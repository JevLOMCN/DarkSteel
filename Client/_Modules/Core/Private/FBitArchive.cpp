// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FBitArchive @ 1419cc720

FBitArchive * __thiscall FBitArchive::FBitArchive(FBitArchive *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  *(undefined ***)this = &___7FBitArchive__6B_;
  pTVar1 = CVarMaxNetStringSize.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_1419cc75e;
    }
  }
  lVar3 = 0;
LAB_1419cc75e:
  *(longlong *)&this->field_0x38 = (longlong)*(int *)((longlong)pTVar1->ShadowedValue + lVar3);
  return this;
}

// SerializeBitsWithOffset @ 141a1eb00

void __thiscall
FBitArchive::SerializeBitsWithOffset(FBitArchive *this,void *param_1,int param_2,long64 param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitArchive.h"
             ,0x14,L"Pure virtual not implemented (%s)");
  return;
}

