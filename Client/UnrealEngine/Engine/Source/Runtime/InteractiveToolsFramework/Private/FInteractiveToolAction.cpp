// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// FInteractiveToolAction @ 1496d23c0

FInteractiveToolAction * __thiscall
FInteractiveToolAction::FInteractiveToolAction
          (FInteractiveToolAction *this,FInteractiveToolAction *param_1)

{
  ITextData *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  this->ClassType = param_1->ClassType;
  this->ActionID = param_1->ActionID;
  ::FString::FString(&this->ActionName,&param_1->ActionName);
  (this->ShortName).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->ShortName).TextData.Reference;
  (this->ShortName).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ShortName).Flags = (param_1->ShortName).Flags;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Description).TextData.Reference;
  (this->Description).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Description).Flags = (param_1->Description).Flags;
  this->DefaultModifiers = param_1->DefaultModifiers;
  (this->DefaultKey).KeyName = (param_1->DefaultKey).KeyName;
  (this->DefaultKey).KeyDetails.Object = (param_1->DefaultKey).KeyDetails.Object;
  pTVar2 = (param_1->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar3 = *(longlong *)&param_1->OnAction;
  *(longlong *)&this->OnAction = lVar3;
  *(undefined8 *)&(this->OnAction).field_0x28 = 0;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)&(param_1->OnAction).field_0x28;
    puVar5 = (undefined8 *)&(param_1->OnAction).field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = puVar4;
    }
    (**(code **)*puVar5)();
  }
  return this;
}

