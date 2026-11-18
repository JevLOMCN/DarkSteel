// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// FToolMenuProfile @ 142c3a010

FToolMenuProfile * __thiscall
FToolMenuProfile::FToolMenuProfile(FToolMenuProfile *this,FToolMenuProfile *param_1)

{
  TMap<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  *pTVar1;
  TMap<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  *pTVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMap<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  *pTVar5;
  TMap<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  *pTVar6;
  void *pvVar7;
  
  pTVar1 = &this->Entries;
  this->Name = param_1->Name;
  pTVar2 = &param_1->Entries;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Entries).field_0x8 = 0;
  *(undefined8 *)&(this->Entries).field_0x20 = 0;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  *(undefined8 *)&(this->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    puVar3 = &(param_1->Entries).field_0x10;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    puVar4 = &(this->Entries).field_0x10;
    *(undefined8 *)pTVar2 = 0;
    *(undefined4 *)&(this->Entries).field_0x8 = *(undefined4 *)&(param_1->Entries).field_0x8;
    *(undefined4 *)&(this->Entries).field_0xc = *(undefined4 *)&(param_1->Entries).field_0xc;
    *(undefined8 *)&(param_1->Entries).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->Entries).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar7 = *(void **)&(this->Entries).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(undefined8 *)&(this->Entries).field_0x20 = *(undefined8 *)&(param_1->Entries).field_0x20;
      *(undefined8 *)&(param_1->Entries).field_0x20 = 0;
      *(undefined4 *)&(this->Entries).field_0x28 = *(undefined4 *)&(param_1->Entries).field_0x28;
      *(undefined4 *)&(this->Entries).field_0x2c = *(undefined4 *)&(param_1->Entries).field_0x2c;
      *(undefined8 *)&(param_1->Entries).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Entries).field_0x30 = *(undefined4 *)&(param_1->Entries).field_0x30;
    *(undefined4 *)&(this->Entries).field_0x34 = *(undefined4 *)&(param_1->Entries).field_0x34;
    *(undefined4 *)&(param_1->Entries).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Entries).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Entries).field_0x40 == 0) {
    *(undefined4 *)&(this->Entries).field_0x38 = *(undefined4 *)&(param_1->Entries).field_0x38;
  }
  pvVar7 = *(void **)&(this->Entries).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  *(undefined8 *)&(this->Entries).field_0x40 = *(undefined8 *)&(param_1->Entries).field_0x40;
  *(undefined8 *)&(param_1->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = *(undefined4 *)&(param_1->Entries).field_0x48;
  pTVar5 = &param_1->Sections;
  *(undefined4 *)&(param_1->Entries).field_0x48 = 0;
  pTVar6 = &this->Sections;
  *(undefined8 *)pTVar6 = 0;
  *(undefined8 *)&(this->Sections).field_0x8 = 0;
  *(undefined8 *)&(this->Sections).field_0x20 = 0;
  *(undefined4 *)&(this->Sections).field_0x28 = 0;
  *(undefined4 *)&(this->Sections).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sections).field_0x34 = 0;
  *(undefined8 *)&(this->Sections).field_0x40 = 0;
  *(undefined4 *)&(this->Sections).field_0x48 = 0;
  if (pTVar6 != pTVar5) {
    puVar3 = &(param_1->Sections).field_0x10;
    *(undefined8 *)pTVar6 = *(undefined8 *)pTVar5;
    puVar4 = &(this->Sections).field_0x10;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->Sections).field_0x8 = *(undefined4 *)&(param_1->Sections).field_0x8;
    *(undefined4 *)&(this->Sections).field_0xc = *(undefined4 *)&(param_1->Sections).field_0xc;
    *(undefined8 *)&(param_1->Sections).field_0x8 = 0;
    if (puVar4 != puVar3) {
      if (*(longlong *)&(param_1->Sections).field_0x20 == 0) {
        memmove(puVar4,puVar3,0x10);
      }
      pvVar7 = *(void **)&(this->Sections).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(undefined8 *)&(this->Sections).field_0x20 = *(undefined8 *)&(param_1->Sections).field_0x20;
      *(undefined8 *)&(param_1->Sections).field_0x20 = 0;
      *(undefined4 *)&(this->Sections).field_0x28 = *(undefined4 *)&(param_1->Sections).field_0x28;
      *(undefined4 *)&(this->Sections).field_0x2c = *(undefined4 *)&(param_1->Sections).field_0x2c;
      *(undefined8 *)&(param_1->Sections).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Sections).field_0x30 = *(undefined4 *)&(param_1->Sections).field_0x30;
    *(undefined4 *)&(this->Sections).field_0x34 = *(undefined4 *)&(param_1->Sections).field_0x34;
    *(undefined4 *)&(param_1->Sections).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Sections).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Sections).field_0x40 == 0) {
    *(undefined4 *)&(this->Sections).field_0x38 = *(undefined4 *)&(param_1->Sections).field_0x38;
  }
  pvVar7 = *(void **)&(this->Sections).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  *(undefined8 *)&(this->Sections).field_0x40 = *(undefined8 *)&(param_1->Sections).field_0x40;
  *(undefined8 *)&(param_1->Sections).field_0x40 = 0;
  *(undefined4 *)&(this->Sections).field_0x48 = *(undefined4 *)&(param_1->Sections).field_0x48;
  *(undefined4 *)&(param_1->Sections).field_0x48 = 0;
  (this->SuppressExtenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuppressExtenders).AllocatorInstance.Data =
       (param_1->SuppressExtenders).AllocatorInstance.Data;
  (param_1->SuppressExtenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuppressExtenders).ArrayNum = (param_1->SuppressExtenders).ArrayNum;
  (this->SuppressExtenders).ArrayMax = (param_1->SuppressExtenders).ArrayMax;
  (param_1->SuppressExtenders).ArrayNum = 0;
  (param_1->SuppressExtenders).ArrayMax = 0;
  FNamePermissionList::FNamePermissionList(&this->MenuPermissions,&param_1->MenuPermissions);
  return this;
}

