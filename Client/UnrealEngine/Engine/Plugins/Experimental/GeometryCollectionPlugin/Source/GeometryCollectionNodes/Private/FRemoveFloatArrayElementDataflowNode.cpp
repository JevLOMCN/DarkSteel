// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e85a2e0

UScriptStruct * __cdecl FRemoveFloatArrayElementDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode,
                         (UObject *)pUVar1,L"RemoveFloatArrayElementDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton;
}

// GetType @ 14e85b120

FName __thiscall
FRemoveFloatArrayElementDataflowNode::GetType(FRemoveFloatArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRemoveFloatArrayElementDataflowNode");
  return in_RDX;
}

// IsA @ 14e85b150

bool __thiscall
FRemoveFloatArrayElementDataflowNode::IsA(FRemoveFloatArrayElementDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRemoveFloatArrayElementDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e85b1b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e85b1b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e85b1d6;
      }
    }
  }
  bVar5 = true;
LAB_14e85b1d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e85b210

FStructOnScope * __thiscall
FRemoveFloatArrayElementDataflowNode::NewStructOnScope(FRemoveFloatArrayElementDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode,
                           (UObject *)pUVar2,L"RemoveFloatArrayElementDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e85b290

void __thiscall
FRemoveFloatArrayElementDataflowNode::SerializeInternal
          (FRemoveFloatArrayElementDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode,
                         (UObject *)pUVar1,L"RemoveFloatArrayElementDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85b30d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e85b320

FName __thiscall
FRemoveFloatArrayElementDataflowNode::GetDisplayName(FRemoveFloatArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RemoveFloatArrayElement");
  return in_RDX;
}

// GetCategory @ 14e85b350

FName __thiscall
FRemoveFloatArrayElementDataflowNode::GetCategory(FRemoveFloatArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e85b380

FString * __thiscall
FRemoveFloatArrayElementDataflowNode::GetTags
          (FRemoveFloatArrayElementDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e85b3b0

UScriptStruct * __thiscall
FRemoveFloatArrayElementDataflowNode::TypedScriptStruct(FRemoveFloatArrayElementDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode,
                         (UObject *)pUVar1,L"RemoveFloatArrayElementDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRemoveFloatArrayElementDataflowNode.OuterSingleton;
}

// Evaluate @ 14e85b4f0

void __thiscall
FRemoveFloatArrayElementDataflowNode::Evaluate
          (FRemoveFloatArrayElementDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  uint uVar9;
  TArray<float,TSizedDefaultAllocator<32>_> local_28;
  
  pTVar1 = &this->FloatArray;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)puVar6 == pTVar1) {
    pTVar7 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,pTVar1);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = pTVar7->ArrayNum;
    lVar8 = (longlong)local_28.ArrayNum;
    _Src = (pTVar7->AllocatorInstance).Data;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,_Src,lVar8 << 2);
    }
    if (0 < local_28.ArrayNum) {
      uVar2 = this->Index;
      if ((-1 < (int)uVar2) && ((int)uVar2 < local_28.ArrayNum)) {
        if (this->bPreserveOrder == false) {
          uVar9 = 0;
          if ((int)uVar2 < local_28.ArrayNum) {
            uVar9 = ~uVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (local_28.ArrayNum - uVar2) + -1;
          if (1 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            memmove(local_28.AllocatorInstance.Data + (longlong)(int)uVar2 * 4,
                    local_28.AllocatorInstance.Data + (longlong)(local_28.ArrayNum - iVar5) * 4,
                    (longlong)iVar5 << 2);
          }
          local_28.ArrayNum = local_28.ArrayNum + -1;
        }
        else {
          uVar9 = 0;
          if ((int)uVar2 < local_28.ArrayNum) {
            uVar9 = ~uVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (local_28.ArrayNum - uVar2) + -1;
          if (iVar5 != 0) {
            memmove(local_28.AllocatorInstance.Data + (longlong)(int)uVar2 * 4,
                    local_28.AllocatorInstance.Data + (longlong)(int)uVar2 * 4 + 4,
                    (longlong)iVar5 << 2);
          }
          local_28.ArrayNum = local_28.ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_28.AllocatorInstance,local_28.ArrayNum,&local_28.ArrayMax);
        }
      }
    }
    FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_28,pTVar1);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// FRemoveFloatArrayElementDataflowNode @ 14e92a750

FRemoveFloatArrayElementDataflowNode * __thiscall
FRemoveFloatArrayElementDataflowNode::FRemoveFloatArrayElementDataflowNode
          (FRemoveFloatArrayElementDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->bPreserveOrder = true;
  pTVar1 = &this->FloatArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FRemoveFloatArrayElementDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  this->Index = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Index;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

