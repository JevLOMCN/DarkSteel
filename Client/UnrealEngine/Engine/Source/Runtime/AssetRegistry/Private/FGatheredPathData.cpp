// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 6

// FGatheredPathData @ 142ad6620

FGatheredPathData * __thiscall
UE::AssetDataGather::Private::FGatheredPathData::FGatheredPathData
          (FGatheredPathData *this,FDiscoveredPathData *param_1)

{
  (this->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.AllocatorInstance.Data =
       (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
  (param_1->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.ArrayNum = (param_1->LocalAbsPath).Data.ArrayNum;
  (this->LocalAbsPath).Data.ArrayMax = (param_1->LocalAbsPath).Data.ArrayMax;
  (param_1->LocalAbsPath).Data.ArrayNum = 0;
  (param_1->LocalAbsPath).Data.ArrayMax = 0;
  (this->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongPackageName).Data.AllocatorInstance.Data =
       (param_1->LongPackageName).Data.AllocatorInstance.Data;
  (param_1->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongPackageName).Data.ArrayNum = (param_1->LongPackageName).Data.ArrayNum;
  (this->LongPackageName).Data.ArrayMax = (param_1->LongPackageName).Data.ArrayMax;
  (param_1->LongPackageName).Data.ArrayNum = 0;
  (param_1->LongPackageName).Data.ArrayMax = 0;
  (this->PackageTimestamp).Ticks = (param_1->PackageTimestamp).Ticks;
  this->bIsReadOnly = param_1->bIsReadOnly;
  this->Type = param_1->Type;
  return this;
}

// FGatheredPathData @ 142ad6680

FGatheredPathData * __thiscall
UE::AssetDataGather::Private::FGatheredPathData::FGatheredPathData
          (FGatheredPathData *this,FDiscoveredPathData *param_1)

{
  FString *pFVar1;
  EGatherableFileType EVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FGatheredPathData *pFVar7;
  FString *pFVar8;
  int iVar9;
  int iVar10;
  FString local_38;
  
  iVar4 = (param_1->LongPackageName).Data.ArrayNum;
  EVar2 = param_1->Type;
  bVar3 = param_1->bIsReadOnly;
  pFVar5 = (param_1->LongPackageName).Data.AllocatorInstance.Data;
  pFVar6 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
  iVar9 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar9 = 0;
  }
  iVar4 = (param_1->LocalAbsPath).Data.ArrayNum;
  (this->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.ArrayNum = 0;
  (this->LocalAbsPath).Data.ArrayMax = 0;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  pFVar7 = (FGatheredPathData *)::FString::ConstructFromPtrSize(&local_38,(wchar_t *)pFVar6,iVar10);
  if (this != pFVar7) {
    pFVar6 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->LocalAbsPath).Data.AllocatorInstance.Data =
         (pFVar7->LocalAbsPath).Data.AllocatorInstance.Data;
    (pFVar7->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LocalAbsPath).Data.ArrayNum = (pFVar7->LocalAbsPath).Data.ArrayNum;
    (this->LocalAbsPath).Data.ArrayMax = (pFVar7->LocalAbsPath).Data.ArrayMax;
    (pFVar7->LocalAbsPath).Data.ArrayNum = 0;
    (pFVar7->LocalAbsPath).Data.ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = &this->LongPackageName;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongPackageName).Data.ArrayNum = 0;
  (this->LongPackageName).Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize(&local_38,(wchar_t *)pFVar5,iVar9);
  if (pFVar1 != pFVar8) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LongPackageName).Data.ArrayNum = (pFVar8->Data).ArrayNum;
    (this->LongPackageName).Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  (this->PackageTimestamp).Ticks = (param_1->PackageTimestamp).Ticks;
  this->Type = EVar2;
  this->bIsReadOnly = bVar3;
  return this;
}

// FGatheredPathData @ 142ad67b0

FGatheredPathData * __thiscall
UE::AssetDataGather::Private::FGatheredPathData::FGatheredPathData
          (FGatheredPathData *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          FDateTime *param_3,bool param_4,EGatherableFileType param_5)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FGatheredPathData *pFVar5;
  FString *pFVar6;
  FString local_28;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  (this->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.ArrayNum = 0;
  (this->LocalAbsPath).Data.ArrayMax = 0;
  pFVar5 = (FGatheredPathData *)::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (this != pFVar5) {
    pFVar4 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->LocalAbsPath).Data.AllocatorInstance.Data =
         (pFVar5->LocalAbsPath).Data.AllocatorInstance.Data;
    (pFVar5->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LocalAbsPath).Data.ArrayNum = (pFVar5->LocalAbsPath).Data.ArrayNum;
    (this->LocalAbsPath).Data.ArrayMax = (pFVar5->LocalAbsPath).Data.ArrayMax;
    (pFVar5->LocalAbsPath).Data.ArrayNum = 0;
    (pFVar5->LocalAbsPath).Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  uVar2 = *(undefined8 *)&param_2->Size;
  pFVar1 = &this->LongPackageName;
  pwVar3 = param_2->DataPtr;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LongPackageName).Data.ArrayNum = 0;
  (this->LongPackageName).Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar6) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LongPackageName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->LongPackageName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->PackageTimestamp).Ticks = param_3->Ticks;
  this->bIsReadOnly = param_4;
  this->Type = param_5;
  return this;
}

// Assign @ 142aebbe0

void __thiscall
UE::AssetDataGather::Private::FGatheredPathData::Assign
          (FGatheredPathData *this,FDiscoveredPathData *param_1)

{
  EGatherableFileType EVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  int iVar5;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->LongPackageName).Data.AllocatorInstance.Data;
  EVar1 = param_1->Type;
  bVar2 = param_1->bIsReadOnly;
  iVar3 = (param_1->LongPackageName).Data.ArrayNum;
  iVar5 = iVar3 + -1;
  local_28.DataPtr = (wchar_t *)(param_1->LocalAbsPath).Data.AllocatorInstance.Data;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  iVar3 = (param_1->LocalAbsPath).Data.ArrayNum;
  local_18.Size = iVar5;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  local_28.Size = iVar5;
  AssignStringWithoutShrinking(&this->LocalAbsPath,&local_28);
  AssignStringWithoutShrinking(&this->LongPackageName,&local_18);
  lVar4 = (param_1->PackageTimestamp).Ticks;
  this->bIsReadOnly = bVar2;
  this->Type = EVar1;
  (this->PackageTimestamp).Ticks = lVar4;
  return;
}

// Assign @ 142aebca0

void __thiscall
UE::AssetDataGather::Private::FGatheredPathData::Assign
          (FGatheredPathData *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          FDateTime *param_3,bool param_4,EGatherableFileType param_5)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AssignStringWithoutShrinking(&this->LocalAbsPath,&local_18);
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  AssignStringWithoutShrinking(&this->LongPackageName,&local_18);
  (this->PackageTimestamp).Ticks = param_3->Ticks;
  this->bIsReadOnly = param_4;
  this->Type = param_5;
  return;
}

// GetAllocatedSize @ 142afb0c0

ulong64 __thiscall
UE::AssetDataGather::Private::FGatheredPathData::GetAllocatedSize(FGatheredPathData *this)

{
  return ((longlong)(this->LongPackageName).Data.ArrayMax +
         (longlong)(this->LocalAbsPath).Data.ArrayMax) * 2;
}

