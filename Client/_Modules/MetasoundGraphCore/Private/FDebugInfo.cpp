// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 6

// GetActiveNode @ 14ad54e50

INode * __thiscall Metasound::ThreadLocalDebug::FDebugInfo::GetActiveNode(FDebugInfo *this)

{
  return this->ActiveNode;
}

// GetActiveNodeClassNameAndVersion @ 14ad54e60

wchar_t * __thiscall
Metasound::ThreadLocalDebug::FDebugInfo::GetActiveNodeClassNameAndVersion(FDebugInfo *this)

{
  if ((this->ActiveNode != (INode *)0x0) && ((this->NodeClassNameAndVersion).Data.ArrayNum != 0)) {
    return (wchar_t *)(this->NodeClassNameAndVersion).Data.AllocatorInstance.Data;
  }
  return L"";
}

// GetCurrentAsset @ 14ad54f30

FAssetMetaData * __thiscall
Metasound::ThreadLocalDebug::FDebugInfo::GetCurrentAsset(FDebugInfo *this)

{
  return &this->AssetMetaData;
}

// GetFullNodeAssetMetaData @ 14ad55d30

FAssetMetaData * __thiscall
Metasound::ThreadLocalDebug::FDebugInfo::GetFullNodeAssetMetaData
          (FDebugInfo *this,FAssetMetaData *__return_storage_ptr__)

{
  INode *pIVar1;
  FNodeClassName *this_00;
  FString *pFVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  int iVar5;
  FName local_res8;
  FString local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  pFVar4 = &(this->AssetMetaData).AssetName;
  pIVar1 = this->ActiveNode;
  __return_storage_ptr__->ClassName = (this->AssetMetaData).ClassName;
  __return_storage_ptr__->AssetName = *pFVar4;
  if (pIVar1 == (INode *)0x0) {
    __return_storage_ptr__->AssetPath = *pFVar4;
    return __return_storage_ptr__;
  }
  this_00 = (FNodeClassName *)(**(code **)((longlong)*this->ActiveNode + 0x18))();
  pFVar2 = FNodeClassName::ToString(this_00,&local_18);
  pTVar3 = &::FName::ToString(pFVar4,&local_28)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar3,2 - (uint)(pTVar3->ArrayNum != 0));
  ::FString::AppendChar((FString *)&local_38,L'/');
  ::FString::ConcatFF(&local_48,(FString *)&local_38,pFVar2);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_res8,iVar5,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                          FNAME_Add);
  __return_storage_ptr__->AssetPath = *pFVar4;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetActiveNode @ 14ad63070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::ThreadLocalDebug::FDebugInfo::SetActiveNode(FDebugInfo *this,INode *param_1)

{
  FScriptContainerElement *pFVar1;
  FNodeClassName *this_00;
  FString *pFVar2;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this->ActiveNode = param_1;
  if (param_1 == (INode *)0x0) {
    ::FString::operator=(&this->NodeClassNameAndVersion,L"[No Active Debug Node Set]");
  }
  else {
    this_00 = (FNodeClassName *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
    pFVar2 = FNodeClassName::ToString(this_00,&local_88);
    FStringFormatArg::FStringFormatArg(&local_78,pFVar2);
    FStringFormatArg::FStringFormatArg(&local_58,this_00[1].Namespace.ComparisonIndex.Value);
    FStringFormatArg::FStringFormatArg(&local_38,this_00[1].Namespace.Number);
    local_98.ArrayNum = 3;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_98.AllocatorInstance,3,&local_98.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_98.AllocatorInstance.Data,&local_78,3);
    ::FString::FormatImpl(&local_a8,L"{0} v{1}.{2}",&local_98);
    pFVar2 = &this->NodeClassNameAndVersion;
    if (pFVar2 != &local_a8) {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar2->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      (this->NodeClassNameAndVersion).Data.ArrayNum = local_a8.Data.ArrayNum;
      (this->NodeClassNameAndVersion).Data.ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetCurrentAsset @ 14ad63270

void __thiscall
Metasound::ThreadLocalDebug::FDebugInfo::SetCurrentAsset
          (FDebugInfo *this,FName param_1,FName param_2,FName param_3)

{
  (this->AssetMetaData).ClassName = param_1;
  (this->AssetMetaData).AssetName = param_2;
  (this->AssetMetaData).AssetPath = param_3;
  return;
}

