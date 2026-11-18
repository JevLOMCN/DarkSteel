// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FArchiveCrc32 @ 141ed17f0

FArchiveCrc32 * __thiscall
FArchiveCrc32::FArchiveCrc32(FArchiveCrc32 *this,uint param_1,UObject *param_2)

{
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->CRC = param_1;
  this->_padding_ = (longlong)&___7FArchiveCrc32__6B_;
  this->InitialCRC = param_1;
  this->RootObject = param_2;
  return this;
}

// operator<< @ 141ed6680

FArchive * __thiscall FArchiveCrc32::operator<<(FArchiveCrc32 *this,UObject **param_1)

{
  bool bVar1;
  uint uVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  ForAnyElementType FVar5;
  FString local_198;
  undefined1 local_188 [160];
  FArchiveState local_e8;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  TNode *local_38;
  TNode *local_30;
  UObject *local_28;
  UObject *pUStack_20;
  
  if (((this->RootObject == (UObject *)0x0) ||
      ((UObjectBaseUtility *)*param_1 == (UObjectBaseUtility *)0x0)) ||
     (bVar1 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)*param_1,this->RootObject), !bVar1)) {
    uVar2 = this->CRC;
    if ((UObjectBaseUtility *)*param_1 == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_198,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*param_1,&local_198,(UObject *)0x0);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_198.Data.ArrayNum != 0) {
      FVar5.Data = local_198.Data.AllocatorInstance.Data;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar5.Data,uVar2);
    this->CRC = uVar2;
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  else {
    FArchiveState::FArchiveState((FArchiveState *)local_188);
    pTVar4 = (TNode *)0x0;
    local_188._0_8_ = &___7FArchiveObjectCrc32__6B_;
    local_188._144_8_ = (FScriptContainerElement *)0x0;
    local_e8._padding_ = 0;
    local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_188._152_4_ = 0;
    local_188._156_4_ = 0;
    local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_e8._40_8_ = 0;
    local_e8.ArSerializingDefaults = 0;
    local_e8.ArPortFlags = 0;
    local_e8.ArMaxSerializeSize = 0;
    local_e8.ArUEVer.FileVersionUE4 = 0;
    local_e8.ArUEVer.FileVersionUE5 = 0;
    local_e8.ArLicenseeUEVer = 0;
    local_e8.ArEngineVer.Major = 0;
    local_e8.ArEngineVer.Minor = 0;
    local_e8.ArEngineVer.Patch = 0;
    local_e8.ArEngineVer._6_2_ = 0;
    local_e8.ArEngineVer.Changelist = 0;
    local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_e8.SerializedProperty = (FProperty *)0x0;
    local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_e8.bCustomVersionsAreReset = false;
    local_e8._129_7_ = 0;
    local_e8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_e8);
    local_58 = 0;
    local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_50 = local_188 + 0x90;
    local_48 = 0;
    FArchiveState::SetIsSaving(&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    pTVar3 = ::operator_new(0x10);
    if (pTVar3 != (TNode *)0x0) {
      pTVar3->NextNode = (TNode *)0x0;
      pTVar3->Item = (UObject *)0x0;
      pTVar3->NextNode = (TNode *)0x0;
      pTVar4 = pTVar3;
    }
    local_188[0x2a] = local_188[0x2a] | 0x10;
    local_28 = (UObject *)0x0;
    pUStack_20 = (UObject *)0x0;
    local_38 = pTVar4;
    local_30 = pTVar4;
    (**(code **)(local_188._0_8_ + 0xd8))(local_188,1);
    uVar2 = FArchiveObjectCrc32::Crc32
                      ((FArchiveObjectCrc32 *)local_188,*param_1,this->RootObject,this->CRC);
    local_188._0_8_ = &___7FArchiveObjectCrc32__6B_;
    this->CRC = uVar2;
    pTVar4 = local_30;
    while (pTVar4 != (TNode *)0x0) {
      local_30 = pTVar4->NextNode;
      ::operator_delete(pTVar4,0x10);
      pTVar4 = local_30;
    }
    local_30 = pTVar4;
    FArchive::~FArchive((FArchive *)&local_e8);
    if ((FScriptContainerElement *)local_188._144_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._144_8_);
    }
    FArchive::~FArchive((FArchive *)local_188);
  }
  return (FArchive *)this;
}

// operator<< @ 141ed68b0

FArchive * __thiscall FArchiveCrc32::operator<<(FArchiveCrc32 *this,FName *param_1)

{
  uint uVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  uVar1 = this->CRC;
  pFVar2 = ::FName::ToString(param_1,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(pwVar3,uVar1);
  this->CRC = uVar1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// GetArchiveName @ 141ef8ef0

FString * __thiscall
FArchiveCrc32::GetArchiveName(FArchiveCrc32 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveCrc32");
  return __return_storage_ptr__;
}

// Reset @ 141f0e2c0

void __thiscall FArchiveCrc32::Reset(FArchiveCrc32 *this)

{
  FArchiveState::Reset((FArchiveState *)this);
  this->CRC = this->InitialCRC;
  return;
}

// Serialize @ 141f0f2b0

void __thiscall FArchiveCrc32::Serialize(FArchiveCrc32 *this,void *param_1,long64 param_2)

{
  uint uVar1;
  int iVar2;
  
  for (; 0 < param_2; param_2 = param_2 - iVar2) {
    iVar2 = 0x7fffffff;
    if ((ulonglong)param_2 < 0x7fffffff) {
      iVar2 = (int)param_2;
    }
    uVar1 = (*FCrc::MemCrc32Func)(param_1,iVar2,this->CRC);
    this->CRC = uVar1;
    param_1 = (void *)((longlong)param_1 + (longlong)iVar2);
  }
  return;
}

