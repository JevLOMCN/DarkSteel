// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// FMessageEndpointBuilder @ 14d012790

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageEndpointBuilder * __thiscall
FMessageEndpointBuilder::FMessageEndpointBuilder(FMessageEndpointBuilder *this,FName *param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  Type TVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  undefined8 *puVar6;
  FTaskGraphInterface *pFVar7;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar4 = ::FName::FName(&local_res8,"Messaging");
  FVar1 = *pFVar4;
  this_00 = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  puVar6 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x68))(pIVar5,local_18);
  (this->BusPtr).Object = (IMessageBus *)*puVar6;
  pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
  (this->BusPtr).WeakReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  this->Disabled = false;
  *(undefined8 *)&this->OnNotification = 0;
  *(undefined8 *)&(this->OnNotification).field_0x8 = 0;
  *(undefined4 *)&(this->OnNotification).field_0x10 = 0;
  (this->Handlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Handlers).ArrayNum = 0;
  (this->Handlers).ArrayMax = 0;
  this->InboxEnabled = false;
  this->Name = *param_1;
  pFVar7 = FTaskGraphInterface::Get();
  TVar3 = (**(code **)((longlong)*pFVar7 + 0x10))(pFVar7,0);
  this->RecipientThread = TVar3;
  return this;
}

