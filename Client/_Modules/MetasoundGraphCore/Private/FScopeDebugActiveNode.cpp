// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 3

// FScopeDebugActiveNode @ 14ad3c690

FScopeDebugActiveNode * __thiscall
Metasound::ThreadLocalDebug::FScopeDebugActiveNode::FScopeDebugActiveNode
          (FScopeDebugActiveNode *this,FDebugInfo *param_1,INode *param_2)

{
  FDebugInfo *pFVar1;
  INode *pIVar2;
  FNodeClassName *this_00;
  FString *pFVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  int iVar6;
  FName local_res8;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FName local_28;
  FName FStack_20;
  FName local_18;
  
  (this->AssetMetaData).ClassName.ComparisonIndex = 0;
  (this->AssetMetaData).ClassName.Number = 0;
  (this->AssetMetaData).AssetName.ComparisonIndex = 0;
  (this->AssetMetaData).AssetName.Number = 0;
  (this->AssetMetaData).AssetPath.ComparisonIndex = 0;
  (this->AssetMetaData).AssetPath.Number = 0;
  this->PriorNode = (INode *)0x0;
  this->DebugInfo = param_1;
  if (param_1 != (FDebugInfo *)0x0) {
    this->PriorNode = param_1->ActiveNode;
    FDebugInfo::SetActiveNode(param_1,param_2);
    pFVar1 = this->DebugInfo;
    if (pFVar1 != (FDebugInfo *)0x0) {
      pIVar2 = pFVar1->ActiveNode;
      local_28 = (pFVar1->AssetMetaData).ClassName;
      FStack_20 = (pFVar1->AssetMetaData).AssetName;
      local_18 = FStack_20;
      if (pIVar2 != (INode *)0x0) {
        this_00 = (FNodeClassName *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
        pFVar3 = FNodeClassName::ToString(this_00,&local_38);
        pTVar4 = &::FName::ToString(&(pFVar1->AssetMetaData).AssetName,&local_48)->Data;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_58,pTVar4,2 - (uint)(pTVar4->ArrayNum != 0));
        ::FString::AppendChar((FString *)&local_58,L'/');
        ::FString::ConcatFF(&local_68,(FString *)&local_58,pFVar3);
        iVar6 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        pFVar5 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                                FNAME_Add);
        local_18 = *pFVar5;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      (this->AssetMetaData).ClassName = local_28;
      (this->AssetMetaData).AssetName = FStack_20;
      (this->AssetMetaData).AssetPath = local_18;
    }
  }
  return this;
}

// ~FScopeDebugActiveNode @ 14ad3e020

void __thiscall
Metasound::ThreadLocalDebug::FScopeDebugActiveNode::~FScopeDebugActiveNode
          (FScopeDebugActiveNode *this)

{
  if (this->DebugInfo != (FDebugInfo *)0x0) {
    FDebugInfo::SetActiveNode(this->DebugInfo,this->PriorNode);
    return;
  }
  return;
}

// UpdateAssetMetaData @ 14ad69570

void __thiscall
Metasound::ThreadLocalDebug::FScopeDebugActiveNode::UpdateAssetMetaData(FScopeDebugActiveNode *this)

{
  FDebugInfo *pFVar1;
  INode *pIVar2;
  FNodeClassName *this_00;
  FString *pFVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  int iVar6;
  FName local_res8;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FName local_28;
  FName FStack_20;
  FName local_18;
  
  pFVar1 = this->DebugInfo;
  if (pFVar1 != (FDebugInfo *)0x0) {
    pIVar2 = pFVar1->ActiveNode;
    local_28 = (pFVar1->AssetMetaData).ClassName;
    FStack_20 = (pFVar1->AssetMetaData).AssetName;
    local_18 = FStack_20;
    if (pIVar2 != (INode *)0x0) {
      this_00 = (FNodeClassName *)(**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
      pFVar3 = FNodeClassName::ToString(this_00,&local_38);
      pTVar4 = &::FName::ToString(&(pFVar1->AssetMetaData).AssetName,&local_48)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_58,pTVar4,2 - (uint)(pTVar4->ArrayNum != 0));
      ::FString::AppendChar((FString *)&local_58,L'/');
      ::FString::ConcatFF(&local_68,(FString *)&local_58,pFVar3);
      iVar6 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar5 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                              FNAME_Add);
      local_18 = *pFVar5;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    (this->AssetMetaData).ClassName = local_28;
    (this->AssetMetaData).AssetName = FStack_20;
    (this->AssetMetaData).AssetPath = local_18;
  }
  return;
}

