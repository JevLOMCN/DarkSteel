// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Copy @ 1419e6370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FBitWriterMark::Copy
          (FBitWriterMark *this,FBitWriter *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)((param_1->Num - this->Num) + 7 >> 3);
  if (0 < iVar4) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,iVar4,Default);
    uVar5 = iVar4 - 1;
    uVar3 = 0;
    if ((int)uVar5 < param_2->ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (param_2->AllocatorInstance).Data[(int)uVar5] = (FScriptContainerElement)0x0;
    iVar4 = (int)this->Num;
    appBitsCpy((uchar *)(param_2->AllocatorInstance).Data,0,
               (uchar *)(param_1->Buffer).AllocatorInstance.Data,iVar4,(int)param_1->Num - iVar4);
  }
  return;
}

// Pop @ 141a0fe70

void __thiscall FBitWriterMark::Pop(FBitWriterMark *this,FBitWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = this->Num;
  if ((uVar3 & 7) != 0) {
    bVar2 = ""[(uint)uVar3 & 7];
    uVar6 = (uint)((longlong)uVar3 >> 3);
    uVar7 = 0;
    if ((int)uVar6 < (param_1->Buffer).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (param_1->Buffer).AllocatorInstance.Data + (int)uVar6;
    *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 & bVar2);
  }
  uVar7 = (uint)(this->Num + 7 >> 3);
  uVar6 = (uint)(param_1->Num + 7 >> 3);
  if (uVar6 != uVar7) {
    uVar8 = 0;
    if ((int)uVar7 < (param_1->Buffer).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    memset((param_1->Buffer).AllocatorInstance.Data + (int)uVar7,0,(longlong)(int)(uVar6 - uVar7));
  }
  if (this->Overflowed == false) {
    FArchiveState::ClearError((FArchiveState *)param_1);
  }
  else {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  param_1->Num = this->Num;
  return;
}

