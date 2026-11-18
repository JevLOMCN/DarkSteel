// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 2

// FAutomationWorkerSingleTestReply @ 148bfe6e0

FAutomationWorkerSingleTestReply * __thiscall
FAutomationWorkerSingleTestReply::FAutomationWorkerSingleTestReply
          (FAutomationWorkerSingleTestReply *this,FAutomationWorkerSingleTestReply *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar3;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.AllocatorInstance.Data =
       (param_1->DisplayName).Data.AllocatorInstance.Data;
  (param_1->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = (param_1->DisplayName).Data.ArrayNum;
  (this->DisplayName).Data.ArrayMax = (param_1->DisplayName).Data.ArrayMax;
  (param_1->DisplayName).Data.ArrayNum = 0;
  (param_1->DisplayName).Data.ArrayMax = 0;
  (this->FullTestPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullTestPath).Data.AllocatorInstance.Data =
       (param_1->FullTestPath).Data.AllocatorInstance.Data;
  (param_1->FullTestPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullTestPath).Data.ArrayNum = (param_1->FullTestPath).Data.ArrayNum;
  (this->FullTestPath).Data.ArrayMax = (param_1->FullTestPath).Data.ArrayMax;
  (param_1->FullTestPath).Data.ArrayNum = 0;
  (param_1->FullTestPath).Data.ArrayMax = 0;
  (this->TestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestName).Data.AllocatorInstance.Data = (param_1->TestName).Data.AllocatorInstance.Data;
  (param_1->TestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestName).Data.ArrayNum = (param_1->TestName).Data.ArrayNum;
  (this->TestName).Data.ArrayMax = (param_1->TestName).Data.ArrayMax;
  (param_1->TestName).Data.ArrayNum = 0;
  (param_1->TestName).Data.ArrayMax = 0;
  (this->TestParameter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestParameter).Data.AllocatorInstance.Data =
       (param_1->TestParameter).Data.AllocatorInstance.Data;
  (param_1->TestParameter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestParameter).Data.ArrayNum = (param_1->TestParameter).Data.ArrayNum;
  (this->TestParameter).Data.ArrayMax = (param_1->TestParameter).Data.ArrayMax;
  (param_1->TestParameter).Data.ArrayNum = 0;
  (param_1->TestParameter).Data.ArrayMax = 0;
  (this->SourceFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceFile).Data.AllocatorInstance.Data = (param_1->SourceFile).Data.AllocatorInstance.Data
  ;
  (param_1->SourceFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceFile).Data.ArrayNum = (param_1->SourceFile).Data.ArrayNum;
  (this->SourceFile).Data.ArrayMax = (param_1->SourceFile).Data.ArrayMax;
  (param_1->SourceFile).Data.ArrayNum = 0;
  (param_1->SourceFile).Data.ArrayMax = 0;
  iVar1 = param_1->SourceFileLine;
  (this->AssetPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SourceFileLine = iVar1;
  (this->AssetPath).Data.AllocatorInstance.Data = (param_1->AssetPath).Data.AllocatorInstance.Data;
  (param_1->AssetPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetPath).Data.ArrayNum = (param_1->AssetPath).Data.ArrayNum;
  (this->AssetPath).Data.ArrayMax = (param_1->AssetPath).Data.ArrayMax;
  (param_1->AssetPath).Data.ArrayNum = 0;
  (param_1->AssetPath).Data.ArrayMax = 0;
  (this->OpenCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenCommand).Data.AllocatorInstance.Data =
       (param_1->OpenCommand).Data.AllocatorInstance.Data;
  (param_1->OpenCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenCommand).Data.ArrayNum = (param_1->OpenCommand).Data.ArrayNum;
  (this->OpenCommand).Data.ArrayMax = (param_1->OpenCommand).Data.ArrayMax;
  (param_1->OpenCommand).Data.ArrayNum = 0;
  (param_1->OpenCommand).Data.ArrayMax = 0;
  this->TestFlags = param_1->TestFlags;
  uVar2 = param_1->NumParticipantsRequired;
  (this->TestTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NumParticipantsRequired = uVar2;
  (this->TestTags).Data.AllocatorInstance.Data = (param_1->TestTags).Data.AllocatorInstance.Data;
  (param_1->TestTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestTags).Data.ArrayNum = (param_1->TestTags).Data.ArrayNum;
  (this->TestTags).Data.ArrayMax = (param_1->TestTags).Data.ArrayMax;
  (param_1->TestTags).Data.ArrayNum = 0;
  (param_1->TestTags).Data.ArrayMax = 0;
  return this;
}

// FAutomationWorkerSingleTestReply @ 148bfe840

FAutomationWorkerSingleTestReply * __thiscall
FAutomationWorkerSingleTestReply::FAutomationWorkerSingleTestReply
          (FAutomationWorkerSingleTestReply *this,FAutomationTestInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this->_padding_ = 0;
  pFVar1 = &this->TestName;
  this->_padding_ = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullTestPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->TestTags;
  (this->FullTestPath).Data.ArrayNum = 0;
  (this->FullTestPath).Data.ArrayMax = 0;
  (this->TestName).Data.ArrayNum = 0;
  (this->TestName).Data.ArrayMax = 0;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->TestParameter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestParameter).Data.ArrayNum = 0;
  (this->TestParameter).Data.ArrayMax = 0;
  (this->SourceFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceFile).Data.ArrayNum = 0;
  (this->SourceFile).Data.ArrayMax = 0;
  this->SourceFileLine = 0;
  (this->AssetPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetPath).Data.ArrayNum = 0;
  (this->AssetPath).Data.ArrayMax = 0;
  (this->OpenCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenCommand).Data.ArrayNum = 0;
  (this->OpenCommand).Data.ArrayMax = 0;
  this->TestFlags = 0;
  this->NumParticipantsRequired = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestTags).Data.ArrayNum = 0;
  (this->TestTags).Data.ArrayMax = 0;
  ::FString::operator=(&this->DisplayName,&param_1->DisplayName);
  ::FString::operator=(&this->FullTestPath,&param_1->FullTestPath);
  iVar5 = (param_1->TestName).Data.ArrayNum;
  pFVar3 = (param_1->TestName).Data.AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,iVar5);
  if (iVar5 == 0) {
    local_50 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_58,iVar5,(int *)((longlong)&local_50 + 4));
    memcpy(local_58.Data,pFVar3,(longlong)iVar5 * 2);
  }
  if (pFVar1 != (FString *)&local_58) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_58.Data;
    (this->TestName).Data.ArrayNum = (int)local_50;
    local_58.Data = (FScriptContainerElement *)0x0;
    (this->TestName).Data.ArrayMax = local_50._4_4_;
    local_50 = 0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_30 = (param_1->TestParameter).Data.ArrayNum;
  lVar4 = (longlong)local_30;
  pFVar3 = (param_1->TestParameter).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar3,lVar4 * 2);
  }
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange(&this->TestParameter,(wchar_t *)local_38.Data,iVar5);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_30 = (param_1->SourceFile).Data.ArrayNum;
  lVar4 = (longlong)local_30;
  pFVar3 = (param_1->SourceFile).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar3,lVar4 * 2);
  }
  iVar6 = 0;
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = iVar6;
  }
  ::FString::AssignRange(&this->SourceFile,(wchar_t *)local_38.Data,iVar5);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  this->SourceFileLine = param_1->SourceFileLine;
  local_30 = (param_1->AssetPath).Data.ArrayNum;
  lVar4 = (longlong)local_30;
  pFVar3 = (param_1->AssetPath).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar3,lVar4 * 2);
  }
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = iVar6;
  }
  ::FString::AssignRange(&this->AssetPath,(wchar_t *)local_38.Data,iVar5);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_30 = (param_1->OpenCommand).Data.ArrayNum;
  lVar4 = (longlong)local_30;
  pFVar3 = (param_1->OpenCommand).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,pFVar3,lVar4 * 2);
  }
  iVar5 = local_30 + -1;
  if (local_30 == 0) {
    iVar5 = iVar6;
  }
  ::FString::AssignRange(&this->OpenCommand,(wchar_t *)local_38.Data,iVar5);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  this->TestFlags = param_1->TestFlags;
  this->NumParticipantsRequired = param_1->NumParticipantsRequired;
  iVar5 = (param_1->TestTags).Data.ArrayNum;
  pFVar3 = (param_1->TestTags).Data.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar5);
  if (iVar5 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&local_48,iVar5,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,pFVar3,(longlong)iVar5 * 2);
  }
  if (pFVar2 != (FString *)&local_48) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_48.Data;
    (this->TestTags).Data.ArrayNum = (int)local_40;
    local_48.Data = (FScriptContainerElement *)0x0;
    (this->TestTags).Data.ArrayMax = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return this;
}

