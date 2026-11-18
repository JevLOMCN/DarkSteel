// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// FCallbackData @ 142c95ab0

FCallbackData * __thiscall
UE::Editor::DataStorage::FQueryDescription::FCallbackData::FCallbackData
          (FCallbackData *this,FCallbackData *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ForElementType<FName> _Dst;
  ForElementType<FName> FVar5;
  undefined8 *puVar6;
  ForElementType<FName> FVar7;
  
  (this->BeforeGroups).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  FVar7 = (param_1->BeforeGroups).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->BeforeGroups).ArrayNum;
  (this->BeforeGroups).ArrayNum = iVar2;
  FVar5 = (ForElementType<FName>)param_1;
  if (FVar7 != (ForElementType<FName>)0x0) {
    FVar5 = FVar7;
  }
  piVar1 = &(this->BeforeGroups).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 2;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar2,0,(ForElementType<FName> *)this,iVar2,piVar1);
    FVar7 = (this->BeforeGroups).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<FName>)this;
    if (FVar7 != (ForElementType<FName>)0x0) {
      _Dst = FVar7;
    }
    memcpy((void *)_Dst,(void *)FVar5,(longlong)iVar2 << 3);
  }
  (this->AfterGroups).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  FVar7 = (param_1->AfterGroups).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->AfterGroups).ArrayNum;
  (this->AfterGroups).ArrayNum = iVar2;
  if (FVar7 == (ForElementType<FName>)0x0) {
    FVar7 = (ForElementType<FName>)&param_1->AfterGroups;
  }
  piVar1 = &(this->AfterGroups).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 2;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar2,0,&(this->AfterGroups).AllocatorInstance,iVar2,piVar1);
    FVar5 = (this->AfterGroups).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FName>)0x0) {
      FVar5 = (ForElementType<FName>)&this->AfterGroups;
    }
    memcpy((void *)FVar5,(void *)FVar7,(longlong)iVar2 << 3);
  }
  lVar3 = *(longlong *)&param_1->Function;
  *(longlong *)&this->Function = lVar3;
  *(undefined8 *)&(this->Function).field_0x28 = 0;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)&(param_1->Function).field_0x28;
    puVar6 = (undefined8 *)&(param_1->Function).field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4;
    }
    (**(code **)*puVar6)();
  }
  this->Name = param_1->Name;
  this->Group = param_1->Group;
  this->ActivationName = param_1->ActivationName;
  this->MonitoredType = param_1->MonitoredType;
  this->Type = param_1->Type;
  this->Phase = param_1->Phase;
  this->Active = param_1->Active;
  this->ActivationCount = param_1->ActivationCount;
  this->ExecutionMode = param_1->ExecutionMode;
  return this;
}

