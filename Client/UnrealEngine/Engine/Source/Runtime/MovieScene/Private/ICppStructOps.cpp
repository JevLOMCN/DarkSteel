// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Copy @ 1460b7ca0

bool __thiscall
UScriptStruct::ICppStructOps::Copy(ICppStructOps *this,void *param_1,void *param_2,int param_3)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  EStructOpsFakeVTableFlags EVar6;
  uint uVar7;
  
  pFVar1 = this->FakeVPtr;
  if ((pFVar1->Capabilities).HasCopy) {
    if (((pFVar1->Flags & Copy) == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar7 = 0;
    for (EVar6 = pFVar1->Flags &
                 (GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|NetSerialize|
                  PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|Construct)
        ; EVar6 != None; EVar6 = EVar6 & EVar6 - Construct) {
      uVar7 = uVar7 + 1;
    }
    cVar5 = (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar7 * 2))(param_1,param_2,param_3);
    if (cVar5 != '\0') {
      return true;
    }
  }
  return false;
}

