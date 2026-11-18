// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// NetDeltaSerialize @ 1484e3d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UScriptStruct::ICppStructOps::NetDeltaSerialize
          (ICppStructOps *this,FNetDeltaSerializeInfo *param_1,void *param_2)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  EStructOpsFakeVTableFlags EVar6;
  uint uVar7;
  
  pFVar1 = this->FakeVPtr;
  if ((pFVar1->Capabilities).HasNetDeltaSerializer) {
    if (((pFVar1->Flags & NetDeltaSerialize) == None) &&
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
                 (NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|
                  ConstructForTests|Construct); EVar6 != None; EVar6 = EVar6 & EVar6 - Construct) {
      uVar7 = uVar7 + 1;
    }
    cVar5 = (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar7 * 2))(param_1,param_2);
    if (cVar5 != '\0') {
      return true;
    }
  }
  return false;
}

