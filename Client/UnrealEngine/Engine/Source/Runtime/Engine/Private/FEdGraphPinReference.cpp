// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147b28f50

UScriptStruct * __cdecl FEdGraphPinReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEdGraphPinReference.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEdGraphPinReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinReference,(UObject *)pUVar1,
                         L"EdGraphPinReference");
  }
  return Z_Registration_Info_UScriptStruct_FEdGraphPinReference.OuterSingleton;
}

// Get @ 147b632f0

UEdGraphPin * __thiscall FEdGraphPinReference::Get(FEdGraphPinReference *this)

{
  longlong *plVar1;
  UEdGraphPin *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  longlong *plVar8;
  uint local_18;
  uint uStack_14;
  uint uStack_c;
  
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar7 != (UObject *)0x0) &&
     ((((this->PinId).D != 0 || (this->PinId).C != 0) || (this->PinId).B != 0) ||
      (this->PinId).A != 0)) {
    plVar8 = *(longlong **)(pUVar7 + 1);
    uVar3 = (this->PinId).A;
    uVar4 = (this->PinId).B;
    uVar5 = (this->PinId).C;
    uVar6 = (this->PinId).D;
    plVar1 = plVar8 + *(int *)&pUVar7[1].field_0x8;
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      pUVar2 = (UEdGraphPin *)*plVar8;
      if ((pUVar2 != (UEdGraphPin *)0x0) &&
         (((uVar6 == (pUVar2->PinId).D && uVar5 == (pUVar2->PinId).C) && uVar4 == (pUVar2->PinId).B)
          && uVar3 == (pUVar2->PinId).A)) {
        return pUVar2;
      }
    }
  }
  return (UEdGraphPin *)0x0;
}

// SetPin @ 147b8c920

void __thiscall FEdGraphPinReference::SetPin(FEdGraphPinReference *this,UEdGraphPin *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10;
  UEdGraphNode *local_res18;
  undefined8 local_res20;
  
  if (param_1 == (UEdGraphPin *)0x0) {
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    (this->OwningNode).WeakPtr = local_res10;
    (this->PinId).C = 0;
    (this->PinId).D = 0;
    (this->PinId).A = 0;
    (this->PinId).B = 0;
    return;
  }
  local_res18 = param_1->OwningNode;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18 != (UEdGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res18);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar6 == (UObject *)0x0) && (param_1->bWasTrashed == 0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1606850396188311170>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                       ,0x17e,"OwningNode.Get() || NewPin->IsPendingKill()");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar2 = (param_1->PinId).B;
  uVar3 = (param_1->PinId).C;
  uVar4 = (param_1->PinId).D;
  (this->PinId).A = (param_1->PinId).A;
  (this->PinId).B = uVar2;
  (this->PinId).C = uVar3;
  (this->PinId).D = uVar4;
  return;
}

