// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FNavigationLinkBase @ 146dd6280

FNavigationLinkBase * __thiscall
FNavigationLinkBase::FNavigationLinkBase(FNavigationLinkBase *this,FNavigationLinkBase *param_1)

{
  undefined1 uVar1;
  UClass *pUVar2;
  byte bVar3;
  uint uVar4;
  
  this->LeftProjectHeight = param_1->LeftProjectHeight;
  this->MaxFallDownLength = param_1->MaxFallDownLength;
  this->UserId = param_1->UserId;
  (this->NavLinkId).Id = (param_1->NavLinkId).Id;
  this->SnapRadius = param_1->SnapRadius;
  this->SnapHeight = param_1->SnapHeight;
  (this->SupportedAgents).field0_0x0 = (param_1->SupportedAgents).field0_0x0;
  uVar4 = ((this->field7_0x24).SupportedAgentsBits ^ (param_1->field7_0x24).SupportedAgentsBits) & 1
          ^ (this->field7_0x24).SupportedAgentsBits;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 2 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 4 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 8 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x10 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x20 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x40 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x80 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x100 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x200 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x400 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x800 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x1000 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x2000 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x4000 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  (this->field7_0x24).SupportedAgentsBits =
       (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x8000 ^ uVar4;
  this->field7_0x24 = param_1->field7_0x24;
  (this->Direction).Value = (param_1->Direction).Value;
  bVar3 = (this->bUseSnapHeight ^ param_1->bUseSnapHeight) & 1 ^ this->field_0x29;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 2 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 4 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 8 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 0x10 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 0x20 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 0x40 ^ bVar3;
  this->field_0x29 = bVar3;
  this->field_0x29 = (bVar3 ^ param_1->field_0x29) & 0x7f ^ param_1->field_0x29;
  bVar3 = (this->bCustomFlag6 ^ param_1->bCustomFlag6) & 1 ^ this->field_0x2a;
  this->field_0x2a = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x2a) & 2 ^ bVar3;
  this->field_0x2a = bVar3;
  this->field_0x2a = (bVar3 ^ param_1->field_0x2a) & 4 ^ bVar3;
  pUVar2 = (param_1->AreaClass).Class.field0_0x0.DebugPtr;
  (this->AreaClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->AreaClassOb).WeakPtr = (param_1->AreaClassOb).WeakPtr;
  return this;
}

// FNavigationLinkBase @ 146dd6480

FNavigationLinkBase * __thiscall
FNavigationLinkBase::FNavigationLinkBase(FNavigationLinkBase *this,FNavigationLinkBase *param_1)

{
  undefined1 uVar1;
  UClass *pUVar2;
  byte bVar3;
  uint uVar4;
  
  this->LeftProjectHeight = param_1->LeftProjectHeight;
  this->MaxFallDownLength = param_1->MaxFallDownLength;
  this->UserId = param_1->UserId;
  (this->NavLinkId).Id = (param_1->NavLinkId).Id;
  this->SnapRadius = param_1->SnapRadius;
  this->SnapHeight = param_1->SnapHeight;
  (this->SupportedAgents).field0_0x0 = (param_1->SupportedAgents).field0_0x0;
  uVar4 = ((this->field7_0x24).SupportedAgentsBits ^ (param_1->field7_0x24).SupportedAgentsBits) & 1
          ^ (this->field7_0x24).SupportedAgentsBits;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 2 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 4 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 8 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x10 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x20 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x40 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x80 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x100 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x200 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x400 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x800 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x1000 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x2000 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  uVar4 = (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x4000 ^ uVar4;
  (this->field7_0x24).SupportedAgentsBits = uVar4;
  (this->field7_0x24).SupportedAgentsBits =
       (uVar4 ^ (param_1->field7_0x24).SupportedAgentsBits) & 0x8000 ^ uVar4;
  this->field7_0x24 = param_1->field7_0x24;
  (this->Direction).Value = (param_1->Direction).Value;
  bVar3 = (this->bUseSnapHeight ^ param_1->bUseSnapHeight) & 1 ^ this->field_0x29;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 2 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 4 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 8 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 0x10 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 0x20 ^ bVar3;
  this->field_0x29 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x29) & 0x40 ^ bVar3;
  this->field_0x29 = bVar3;
  this->field_0x29 = (bVar3 ^ param_1->field_0x29) & 0x7f ^ param_1->field_0x29;
  bVar3 = (this->bCustomFlag6 ^ param_1->bCustomFlag6) & 1 ^ this->field_0x2a;
  this->field_0x2a = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x2a) & 2 ^ bVar3;
  this->field_0x2a = bVar3;
  this->field_0x2a = (bVar3 ^ param_1->field_0x2a) & 4 ^ bVar3;
  pUVar2 = (param_1->AreaClass).Class.field0_0x0.DebugPtr;
  (this->AreaClass).Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->AreaClassOb).WeakPtr = (param_1->AreaClassOb).WeakPtr;
  return this;
}

