// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 5

// FDiscoveredPathData @ 142ad6110

FDiscoveredPathData * __thiscall
UE::AssetDataGather::Private::FDiscoveredPathData::FDiscoveredPathData
          (FDiscoveredPathData *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3,FDateTime *param_4,bool param_5,EGatherableFileType param_6)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  long64 lVar5;
  FDiscoveredPathData *pFVar6;
  FString *pFVar7;
  FString local_28;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  (this->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.ArrayNum = 0;
  (this->LocalAbsPath).Data.ArrayMax = 0;
  pFVar6 = (FDiscoveredPathData *)::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (this != pFVar6) {
    pFVar4 = (this->LocalAbsPath).Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->LocalAbsPath).Data.AllocatorInstance.Data =
         (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data;
    (pFVar6->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LocalAbsPath).Data.ArrayNum = (pFVar6->LocalAbsPath).Data.ArrayNum;
    (this->LocalAbsPath).Data.ArrayMax = (pFVar6->LocalAbsPath).Data.ArrayMax;
    (pFVar6->LocalAbsPath).Data.ArrayNum = 0;
    (pFVar6->LocalAbsPath).Data.ArrayMax = 0;
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
  pFVar7 = ::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar7) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LongPackageName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->LongPackageName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  uVar2 = *(undefined8 *)&param_3->Size;
  pFVar1 = &this->RelPath;
  pwVar3 = param_3->DataPtr;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelPath).Data.ArrayNum = 0;
  (this->RelPath).Data.ArrayMax = 0;
  pFVar7 = ::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar7) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RelPath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->RelPath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lVar5 = param_4->Ticks;
  this->bIsReadOnly = param_5;
  this->Type = param_6;
  (this->PackageTimestamp).Ticks = lVar5;
  return this;
}

// FDiscoveredPathData @ 142ad6280

FDiscoveredPathData * __thiscall
UE::AssetDataGather::Private::FDiscoveredPathData::FDiscoveredPathData
          (FDiscoveredPathData *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3,EGatherableFileType param_4)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FDiscoveredPathData *pFVar5;
  FString *pFVar6;
  FString local_28;
  
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  (this->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalAbsPath).Data.ArrayNum = 0;
  (this->LocalAbsPath).Data.ArrayMax = 0;
  pFVar5 = (FDiscoveredPathData *)::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
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
  uVar2 = *(undefined8 *)&param_3->Size;
  pFVar1 = &this->RelPath;
  pwVar3 = param_3->DataPtr;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelPath).Data.ArrayNum = 0;
  (this->RelPath).Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize(&local_28,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar6) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RelPath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->RelPath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->Type = param_4;
  (this->PackageTimestamp).Ticks = 0;
  this->bIsReadOnly = false;
  return this;
}

// Assign @ 142aebad0

void __thiscall
UE::AssetDataGather::Private::FDiscoveredPathData::Assign
          (FDiscoveredPathData *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3,FDateTime *param_4,bool param_5,EGatherableFileType param_6)

{
  long64 lVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AssignStringWithoutShrinking(&this->LocalAbsPath,&local_18);
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  AssignStringWithoutShrinking(&this->LongPackageName,&local_18);
  local_18.DataPtr = param_3->DataPtr;
  local_18.Size = param_3->Size;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  AssignStringWithoutShrinking(&this->RelPath,&local_18);
  this->Type = param_6;
  lVar1 = param_4->Ticks;
  this->bIsReadOnly = param_5;
  (this->PackageTimestamp).Ticks = lVar1;
  return;
}

// Assign @ 142aebb60

void __thiscall
UE::AssetDataGather::Private::FDiscoveredPathData::Assign
          (FDiscoveredPathData *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,
          TStringView<wchar_t> *param_3,EGatherableFileType param_4)

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
  local_18.DataPtr = param_3->DataPtr;
  local_18.Size = param_3->Size;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  AssignStringWithoutShrinking(&this->RelPath,&local_18);
  this->Type = param_4;
  return;
}

// GetAllocatedSize @ 142afafa0

ulong64 __thiscall
UE::AssetDataGather::Private::FDiscoveredPathData::GetAllocatedSize(FDiscoveredPathData *this)

{
  return ((longlong)(this->RelPath).Data.ArrayMax + (longlong)(this->LongPackageName).Data.ArrayMax
         + (longlong)(this->LocalAbsPath).Data.ArrayMax) * 2;
}

