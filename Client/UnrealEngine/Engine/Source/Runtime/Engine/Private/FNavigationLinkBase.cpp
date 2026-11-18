// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 1472eaa70

UScriptStruct * __cdecl FNavigationLinkBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationLinkBase.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavigationLinkBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationLinkBase,(UObject *)pUVar1,
                         L"NavigationLinkBase");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationLinkBase.OuterSingleton;
}

// operator= @ 1472f26e0

FNavigationLinkBase * __thiscall
FNavigationLinkBase::operator=(FNavigationLinkBase *this,FNavigationLinkBase *param_1)

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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->AreaClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->AreaClass).Class.field0_0x0 = (param_1->AreaClass).Class.field0_0x0;
  (this->AreaClassOb).WeakPtr = (param_1->AreaClassOb).WeakPtr;
  return this;
}

// FNavigationLinkBase @ 14737be60

FNavigationLinkBase * __thiscall FNavigationLinkBase::FNavigationLinkBase(FNavigationLinkBase *this)

{
  undefined1 *puVar1;
  
  this->bCustomFlag6 = '\0';
  this->bIsGenerated = '\0';
  this->bCustomFlag7 = '\0';
  this->LeftProjectHeight = 0.0;
  (this->NavLinkId).Id = 0;
  (this->AreaClassOb).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->MaxFallDownLength = 1000.0;
  this->UserId = 0;
  this->SnapRadius = 30.0;
  this->SnapHeight = 50.0;
  (this->SupportedAgents).field0_0x0.PackedBits = 0x7fffffff;
  *(undefined2 *)&this->Direction = 0x200;
  (this->field7_0x24).SupportedAgentsBits = 0xffffffff;
  return this;
}

// GetAreaClass @ 147397f30

UClass * __thiscall FNavigationLinkBase::GetAreaClass(FNavigationLinkBase *this)

{
  int iVar1;
  bool bVar2;
  TSubclassOf<UNavAreaBase> TVar3;
  UClass *pUVar4;
  
  pUVar4 = (UClass *)FWeakObjectPtr::Get(&(this->AreaClassOb).WeakPtr);
  TVar3 = FNavigationSystem::DefaultWalkableArea;
  if (pUVar4 != (UClass *)0x0) {
    return pUVar4;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if ((TObjectPtr<UClass>_u_0)FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 ==
        (TObjectPtr<UClass>_u_0)0x0) {
      return (UClass *)0x0;
    }
  }
  else {
    if ((TObjectPtr<UClass>_u_0)FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 ==
        (TObjectPtr<UClass>_u_0)0x0) {
      return (UClass *)0x0;
    }
    UE::GC::MarkAsReachable((UObject *)FNavigationSystem::DefaultWalkableArea.Class.field0_0x0);
  }
  pUVar4 = Z_Construct_UClass_UNavAreaBase_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)((longlong)TVar3.Class.field0_0x0 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((longlong)TVar3.Class.field0_0x0 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return (UClass *)(TObjectPtr<UClass>_u_0)TVar3.Class.field0_0x0;
    }
  }
  return (UClass *)0x0;
}

// HasMetaArea @ 1473a2680

bool __thiscall FNavigationLinkBase::HasMetaArea(FNavigationLinkBase *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  UNavAreaBase *pUVar5;
  UClass *pUVar6;
  
  pUVar6 = (this->AreaClass).Class.field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
    return false;
  }
  pUVar4 = Z_Construct_UClass_UNavAreaBase_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar6->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  pUVar6 = (this->AreaClass).Class.field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
    return false;
  }
  pUVar4 = Z_Construct_UClass_UNavAreaBase_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar6 = (this->AreaClass).Class.field0_0x0.DebugPtr;
      goto LAB_1473a270b;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_1473a270b:
  pUVar5 = UClass::GetDefaultObject<UNavAreaBase>(pUVar6);
  cVar3 = (**(code **)(pUVar5->_padding_ + 0x2b8))(pUVar5);
  if (cVar3 == '\0') {
    return false;
  }
  return true;
}

// InitializeAreaClass @ 1473a4890

void __thiscall FNavigationLinkBase::InitializeAreaClass(FNavigationLinkBase *this,bool param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *local_res8;
  
  pUVar2 = (this->AreaClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UNavAreaBase_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_res8 = (this->AreaClass).Class.field0_0x0.DebugPtr;
        goto LAB_1473a48dc;
      }
    }
  }
  local_res8 = (UClass *)0x0;
LAB_1473a48dc:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->AreaClassOb).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// SetAreaClass @ 1473b5a40

void __thiscall FNavigationLinkBase::SetAreaClass(FNavigationLinkBase *this,UClass *param_1)

{
  UClass *local_res10 [3];
  
  if (param_1 != (UClass *)0x0) {
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->AreaClassOb).WeakPtr,(FObjectPtr)local_res10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->AreaClass).Class.field0_0x0.DebugPtr = param_1;
  }
  return;
}

