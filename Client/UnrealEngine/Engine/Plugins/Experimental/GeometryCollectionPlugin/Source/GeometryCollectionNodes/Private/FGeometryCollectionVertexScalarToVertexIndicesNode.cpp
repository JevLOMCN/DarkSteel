// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e865b00

UScriptStruct * __cdecl FGeometryCollectionVertexScalarToVertexIndicesNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode
                         ,(UObject *)pUVar1,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
         OuterSingleton;
}

// GetType @ 14e8664a0

FName __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::GetType
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionVertexScalarToVertexIndicesNode");
  return in_RDX;
}

// IsA @ 14e8664d0

bool __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::IsA
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionVertexScalarToVertexIndicesNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e866538;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e866538:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e866556;
      }
    }
  }
  bVar5 = true;
LAB_14e866556:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8665d0

FStructOnScope * __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::NewStructOnScope
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode
                           ,(UObject *)pUVar2,L"GeometryCollectionVertexScalarToVertexIndicesNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e866690

void __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::SerializeInternal
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode
                         ,(UObject *)pUVar1,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86670d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e866780

FName __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::GetDisplayName
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VertexScalarToVertexIndices");
  return in_RDX;
}

// GetCategory @ 14e8667b0

FName __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::GetCategory
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e8667e0

FString * __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::GetTags
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Collection Vertex Weight Map to Indices");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e866810

UScriptStruct * __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::TypedScriptStruct
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode
                         ,(UObject *)pUVar1,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
         OuterSingleton;
}

// Evaluate @ 14e867040

void __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::Evaluate
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *pFVar5;
  FDataflowInput *this_00;
  FCollectionAttributeKey *pFVar6;
  FName *pFVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  TManagedArray<float> *pTVar9;
  FValueType *this_01;
  uint uVar10;
  longlong lVar11;
  FName local_res8;
  FName local_res18;
  uint local_88 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  FName local_70;
  FName local_68;
  FConnectionReference local_60;
  FString local_48;
  FString local_38;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar4 == &this->VertexIndices) {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    local_60.Reference = &this->AttributeKey;
    local_60.Index = -1;
    local_60.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
    pFVar6 = FDataflowInput::GetValue<FCollectionAttributeKey>(this_00,param_1,local_60.Reference);
    ::FString::FString(&local_48,&pFVar6->Attribute);
    ::FString::FString(&local_38,&pFVar6->Group);
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pFVar7 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                            FNAME_Add);
    local_68 = *pFVar7;
    uVar10 = local_48.Data.ArrayNum - 1;
    if (local_48.Data.ArrayNum == 0) {
      uVar10 = 0;
    }
    pFVar7 = ::FName::FName(&local_res18,uVar10,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                            FNAME_Add);
    local_70 = *pFVar7;
    pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&pFVar5->Map,(TTuple<FName,FName> *)&local_70);
    this_01 = (FValueType *)&pTVar8->field_0x10;
    if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      this_01 = (FValueType *)0x0;
    }
    if ((this_01 != (FValueType *)0x0) &&
       (pTVar9 = FManagedArrayCollection::FValueType::GetTypedPtr<float>(this_01),
       pTVar9 != (TManagedArray<float> *)0x0)) {
      local_88[0] = 0;
      iVar3 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
      if ((int)local_88[0] < iVar3) {
        do {
          lVar11 = (longlong)(int)local_88[0];
          uVar10 = 0;
          if ((int)local_88[0] < *(int *)&pTVar9->field_0x18) {
            uVar10 = ~local_88[0] >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (this->SelectionThreshold < *(float *)(*(longlong *)&pTVar9->field_0x10 + lVar11 * 4))
          {
            if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)local_88) &&
                ((FScriptContainerElement *)local_88 <
                 local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 4)) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = local_80.ArrayNum;
            if (local_80.ArrayNum == local_80.ArrayMax) {
              iVar3 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_80.AllocatorInstance,&local_80.ArrayMax);
            }
            local_80.ArrayNum = iVar3 + 1;
            *(uint *)(local_80.AllocatorInstance.Data + (longlong)iVar3 * 4) = local_88[0];
          }
          local_88[0] = local_88[0] + 1;
          iVar3 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
        } while ((int)local_88[0] < iVar3);
      }
    }
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_80,&this->VertexIndices);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// FGeometryCollectionVertexScalarToVertexIndicesNode @ 14e91f300

FGeometryCollectionVertexScalarToVertexIndicesNode * __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::
FGeometryCollectionVertexScalarToVertexIndicesNode
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FGeometryCollectionVertexScalarToVertexIndicesNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar2 = ::FString::FString((FString *)&local_58,"Vertices");
  pFVar3 = ::FString::FString((FString *)&local_38,"");
  ::FString::FString(&(this->AttributeKey).Attribute,pFVar3);
  ::FString::FString(&(this->AttributeKey).Group,pFVar2);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->SelectionThreshold = 0.0;
  (this->VertexIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexIndices).ArrayNum = 0;
  (this->VertexIndices).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_38.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_38,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->AttributeKey;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_38,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_38.Reference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->VertexIndices;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_58,&local_res8);
  if (local_38.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_38);
  }
  return this;
}

// FGeometryCollectionVertexScalarToVertexIndicesNode @ 14e91f470

FGeometryCollectionVertexScalarToVertexIndicesNode * __thiscall
FGeometryCollectionVertexScalarToVertexIndicesNode::
FGeometryCollectionVertexScalarToVertexIndicesNode
          (FGeometryCollectionVertexScalarToVertexIndicesNode *this)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGeometryCollectionVertexScalarToVertexIndicesNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar2 = ::FString::FString(&local_28,"Vertices");
  pFVar3 = ::FString::FString(&local_18,"");
  ::FString::FString(&(this->AttributeKey).Attribute,pFVar3);
  ::FString::FString(&(this->AttributeKey).Group,pFVar2);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->SelectionThreshold = 0.0;
  (this->VertexIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexIndices).ArrayNum = 0;
  (this->VertexIndices).ArrayMax = 0;
  return this;
}

