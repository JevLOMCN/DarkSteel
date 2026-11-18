// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e855ee0

UScriptStruct * __cdecl FUnionIntArraysDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode,(UObject *)pUVar1,
                         L"UnionIntArraysDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton;
}

// GetType @ 14e855f20

FName __thiscall FUnionIntArraysDataflowNode::GetType(FUnionIntArraysDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FUnionIntArraysDataflowNode");
  return in_RDX;
}

// IsA @ 14e855f60

bool __thiscall FUnionIntArraysDataflowNode::IsA(FUnionIntArraysDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FUnionIntArraysDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e855fc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e855fc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e855fe6;
      }
    }
  }
  bVar5 = true;
LAB_14e855fe6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e856020

FStructOnScope * __thiscall
FUnionIntArraysDataflowNode::NewStructOnScope(FUnionIntArraysDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode,(UObject *)pUVar2,
                           L"UnionIntArraysDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e856310

void __thiscall
FUnionIntArraysDataflowNode::SerializeInternal(FUnionIntArraysDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode,(UObject *)pUVar1,
                         L"UnionIntArraysDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85638d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8563b0

FName __thiscall FUnionIntArraysDataflowNode::GetDisplayName(FUnionIntArraysDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UnionIntArrays");
  return in_RDX;
}

// GetCategory @ 14e8563f0

FName __thiscall FUnionIntArraysDataflowNode::GetCategory(FUnionIntArraysDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities");
  return in_RDX;
}

// GetTags @ 14e856420

FString * __thiscall
FUnionIntArraysDataflowNode::GetTags
          (FUnionIntArraysDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e856450

UScriptStruct * __thiscall
FUnionIntArraysDataflowNode::TypedScriptStruct(FUnionIntArraysDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode,(UObject *)pUVar1,
                         L"UnionIntArraysDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUnionIntArraysDataflowNode.OuterSingleton;
}

// Evaluate @ 14e856620

void __thiscall
FUnionIntArraysDataflowNode::Evaluate
          (FUnionIntArraysDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  FConnectionReference local_48;
  FConnectionReference local_30;
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar5 == &this->OutArray) {
    local_48.Reference = &this->InArray1;
    uVar9 = 0;
    local_48.ContainerReference = (void *)0x0;
    local_48.Index = -1;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    pTVar7 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (pFVar6,param_1,local_48.Reference);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = pTVar7->ArrayNum;
    lVar10 = (longlong)local_60;
    pFVar1 = (pTVar7->AllocatorInstance).Data;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,pFVar1,lVar10 << 2);
    }
    local_30.Reference = &this->InArray2;
    local_30.Index = -1;
    local_30.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_30);
    pTVar7 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (pFVar6,param_1,local_30.Reference);
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = pTVar7->ArrayNum;
    lVar10 = (longlong)local_70;
    pFVar1 = (pTVar7->AllocatorInstance).Data;
    if (local_70 == 0) {
      local_6c = 0;
      iVar11 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_70,0,&local_78,local_70,&local_6c);
      memcpy(local_78.Data,pFVar1,lVar10 << 2);
      iVar11 = local_70;
    }
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    uVar8 = uVar9;
    if (0 < local_60) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < local_60) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&local_58,(int *)(local_68.Data + (longlong)(int)uVar8 * 4));
        uVar8 = uVar8 + 1;
        iVar11 = local_70;
      } while ((int)uVar8 < local_60);
    }
    if (0 < iVar11) {
      do {
        uVar8 = 0;
        if ((int)uVar9 < iVar11) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&local_58,(int *)(local_78.Data + (longlong)(int)uVar9 * 4));
        uVar9 = uVar9 + 1;
        iVar11 = local_70;
      } while ((int)uVar9 < local_70);
    }
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_58,&this->OutArray);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return;
}

// FUnionIntArraysDataflowNode @ 14e9310d0

FUnionIntArraysDataflowNode * __thiscall
FUnionIntArraysDataflowNode::FUnionIntArraysDataflowNode
          (FUnionIntArraysDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  pTVar1 = &this->InArray1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FUnionIntArraysDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InArray1).ArrayNum = 0;
  (this->InArray1).ArrayMax = 0;
  (this->InArray2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InArray2).ArrayNum = 0;
  (this->InArray2).ArrayMax = 0;
  (this->OutArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutArray).ArrayNum = 0;
  (this->OutArray).ArrayMax = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->InArray2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = &this->OutArray;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

