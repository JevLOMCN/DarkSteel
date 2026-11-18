// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// Contains @ 146bf6b90

bool __thiscall TRangeSet<float>::Contains(TRangeSet<float> *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement local_28 [4];
  float local_24;
  FScriptContainerElement local_20 [4];
  float local_1c;
  
  iVar7 = 0;
  do {
    if ((iVar7 < 0) || ((this->Ranges).ArrayNum <= iVar7)) {
      return false;
    }
    if ((iVar7 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = (this->Ranges).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    local_24 = param_1;
    local_28[0] = (FScriptContainerElement)0x1;
    if (*pFVar6 == (FScriptContainerElement)0x2) {
LAB_146bf6c40:
      pFVar5 = pFVar6 + 8;
      local_1c = param_1;
      local_20[0] = (FScriptContainerElement)0x1;
      if (pFVar6[8] == (FScriptContainerElement)0x2) {
        return true;
      }
      if (*(float *)(pFVar6 + 0xc) <= param_1) {
        if (*(float *)(pFVar6 + 0xc) < param_1) {
          pFVar5 = local_20;
        }
        if (pFVar6[8] != (FScriptContainerElement)0x1) goto LAB_146bf6c7c;
      }
      if (*(float *)(pFVar6 + 0xc) == *(float *)(pFVar5 + 4)) {
        return true;
      }
    }
    else {
      fVar1 = *(float *)(pFVar6 + 4);
      pFVar5 = pFVar6;
      if (fVar1 < param_1) {
LAB_146bf6c3a:
        if (fVar1 == *(float *)(pFVar5 + 4)) goto LAB_146bf6c40;
      }
      else {
        if (param_1 < fVar1) {
          pFVar5 = local_28;
        }
        if (*pFVar6 == (FScriptContainerElement)0x1) goto LAB_146bf6c3a;
      }
    }
LAB_146bf6c7c:
    iVar7 = iVar7 + 1;
  } while( true );
}

