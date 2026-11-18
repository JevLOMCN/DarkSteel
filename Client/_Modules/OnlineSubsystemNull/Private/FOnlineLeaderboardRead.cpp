// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 1

// FindPlayerRecord @ 14ed23f90

FOnlineStatsRow * __thiscall
FOnlineLeaderboardRead::FindPlayerRecord(FOnlineLeaderboardRead *this,FUniqueNetId *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FOnlineStatsRow *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < (this->Rows).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < (this->Rows).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FOnlineStatsRow *)(*pcVar3)();
        return pFVar7;
      }
      pFVar1 = (this->Rows).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + uVar10 + 0x10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FOnlineStatsRow *)(*pcVar3)();
        return pFVar7;
      }
      puVar2 = *(undefined8 **)(pFVar1 + uVar10 + 0x10);
      cVar5 = (**(code **)*puVar2)(puVar2,param_1);
      if (cVar5 != '\0') {
        uVar6 = 0;
        if ((int)uVar8 < (this->Rows).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FOnlineStatsRow *)(*pcVar3)();
          return pFVar7;
        }
        return (FOnlineStatsRow *)
               ((this->Rows).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x78);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x78;
    } while ((int)(uVar8 + 1) < (this->Rows).ArrayNum);
  }
  return (FOnlineStatsRow *)0x0;
}

