// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// FLiveLinkSubjectPreset @ 14d012430

FLiveLinkSubjectPreset * __thiscall
FLiveLinkSubjectPreset::FLiveLinkSubjectPreset
          (FLiveLinkSubjectPreset *this,FLiveLinkSubjectPreset *param_1)

{
  UClass *pUVar1;
  ULiveLinkSubjectSettings *pUVar2;
  ULiveLinkVirtualSubject *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->Key).Source.B;
  uVar5 = (param_1->Key).Source.C;
  uVar6 = (param_1->Key).Source.D;
  (this->Key).Source.A = (param_1->Key).Source.A;
  (this->Key).Source.B = uVar4;
  (this->Key).Source.C = uVar5;
  (this->Key).Source.D = uVar6;
  (this->Key).SubjectName.Name = (param_1->Key).SubjectName.Name;
  pUVar1 = (param_1->Role).Class.field0_0x0.DebugPtr;
  (this->Role).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->Settings).field0_0x0.DebugPtr;
  (this->Settings).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (ULiveLinkSubjectSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->VirtualSubject).field0_0x0.DebugPtr;
  (this->VirtualSubject).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (ULiveLinkVirtualSubject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->bEnabled = param_1->bEnabled;
  return this;
}

