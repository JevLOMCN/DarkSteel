// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// operator= @ 146f971e0

TWeakInterfacePtr<IAISightTargetInterface> * __thiscall
TWeakInterfacePtr<IAISightTargetInterface>::operator=
          (TWeakInterfacePtr<IAISightTargetInterface> *this,IAISightTargetInterface *param_1)

{
  bool bVar1;
  UObject *local_res8;
  FWeakObjectPtr local_18;
  IAISightTargetInterface *pIStack_10;
  
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  pIStack_10 = (IAISightTargetInterface *)0x0;
  if (param_1 != (IAISightTargetInterface *)0x0) {
    local_res8 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (local_res8 != (UObject *)0x0) goto LAB_146f97217;
  }
  local_res8 = (UObject *)0x0;
LAB_146f97217:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_res8);
  bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_18,(void *)0x0);
  if (!bVar1) {
    pIStack_10 = param_1;
  }
  (this->ObjectInstance).WeakPtr = local_18;
  this->InterfaceInstance = pIStack_10;
  return this;
}

// operator== @ 146f976b0

bool __thiscall
TWeakInterfacePtr<INavMovementInterface>::operator==
          (TWeakInterfacePtr<INavMovementInterface> *this,void *param_1)

{
  bool bVar1;
  
  if (this->InterfaceInstance != (INavMovementInterface *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// operator-> @ 146f97760

INavMovementInterface * __thiscall
TWeakInterfacePtr<INavMovementInterface>::operator->(TWeakInterfacePtr<INavMovementInterface> *this)

{
  code *pcVar1;
  bool bVar2;
  INavMovementInterface *pIVar3;
  
  if (this->InterfaceInstance != (INavMovementInterface *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar2) goto LAB_146f9779f;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                     ,0x8d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (INavMovementInterface *)(*pcVar1)();
    return pIVar3;
  }
LAB_146f9779f:
  return this->InterfaceInstance;
}

