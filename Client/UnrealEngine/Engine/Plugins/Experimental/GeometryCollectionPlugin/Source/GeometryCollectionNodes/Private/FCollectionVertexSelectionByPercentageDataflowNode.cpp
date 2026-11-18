// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e868100

UScriptStruct * __cdecl FCollectionVertexSelectionByPercentageDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode
                         ,(UObject *)pUVar1,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
         OuterSingleton;
}

// GetType @ 14e868220

FName __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::GetType
          (FCollectionVertexSelectionByPercentageDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionVertexSelectionByPercentageDataflowNode");
  return in_RDX;
}

// IsA @ 14e868250

bool __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::IsA
          (FCollectionVertexSelectionByPercentageDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionVertexSelectionByPercentageDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8682b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8682b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8682d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8682d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e868310

FStructOnScope * __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::NewStructOnScope
          (FCollectionVertexSelectionByPercentageDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode
                           ,(UObject *)pUVar2,L"CollectionVertexSelectionByPercentageDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8683d0

void __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::SerializeInternal
          (FCollectionVertexSelectionByPercentageDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode
                         ,(UObject *)pUVar1,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86844d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e868660

FName __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::GetDisplayName
          (FCollectionVertexSelectionByPercentageDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionVertexSelectByPercentage");
  return in_RDX;
}

// GetCategory @ 14e868690

FName __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::GetCategory
          (FCollectionVertexSelectionByPercentageDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Vertex");
  return in_RDX;
}

// GetTags @ 14e8686c0

FString * __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::GetTags
          (FCollectionVertexSelectionByPercentageDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8686f0

UScriptStruct * __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::TypedScriptStruct
          (FCollectionVertexSelectionByPercentageDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode
                         ,(UObject *)pUVar1,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e868a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::Evaluate
          (FCollectionVertexSelectionByPercentageDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowVertexSelection *pFVar1;
  float fVar2;
  int iVar3;
  undefined1 *puVar4;
  FDataflowVertexSelection *pFVar5;
  FDataflowInput *pFVar6;
  int *piVar7;
  float *pfVar8;
  uint uVar9;
  ForElementType<unsigned_int> _Dst;
  void *_Src;
  undefined1 auStack_c8 [32];
  FConnectionReference local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  FDataflowSelection local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar1 = &this->VertexSelection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowVertexSelection *)puVar4 == pFVar1) {
    pFVar5 = FDataflowNode::GetValue<FDataflowVertexSelection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    local_80.GroupName.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x0;
    local_80.GroupName.Number = *(uint *)&pFVar5->field_0x4;
    local_80.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_80.SelectionArray.MaxBits = 0;
    local_80.SelectionArray.NumBits = 0;
    uVar9 = *(int *)&pFVar5->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar9) {
      local_80.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar9) {
        local_80.SelectionArray.MaxBits = uVar9;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80.SelectionArray,0);
    }
    local_80.SelectionArray.NumBits = *(int *)&pFVar5->field_0x20;
    if (local_80.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar5->field_0x18;
      if (*(void **)&pFVar5->field_0x18 == (void *)0x0) {
        _Src = &pFVar5->field_0x8;
      }
      _Dst = (ForElementType<unsigned_int>)&local_80.SelectionArray;
      if (local_80.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        _Dst = local_80.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_80.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_a8.Reference = &this->Percentage;
    local_a8.Index = -1;
    local_a8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
    piVar7 = FDataflowInput::GetValue<int>(pFVar6,param_1,local_a8.Reference);
    iVar3 = *piVar7;
    local_a8.Reference = &this->RandomSeed;
    local_a8.Index = -1;
    local_a8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
    pfVar8 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_a8.Reference);
    fVar2 = *pfVar8;
    FDataflowSelection::AsArray(&local_80,&local_90);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByPercentage
              (&local_90,iVar3,this->bDeterministic,fVar2);
    FDataflowSelection::SetFromArray(&local_80,&local_90);
    FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
              ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_80,pFVar1);
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    if (local_80.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_80.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FCollectionVertexSelectionByPercentageDataflowNode @ 14e919670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCollectionVertexSelectionByPercentageDataflowNode * __thiscall
FCollectionVertexSelectionByPercentageDataflowNode::
FCollectionVertexSelectionByPercentageDataflowNode
          (FCollectionVertexSelectionByPercentageDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowVertexSelection *pFVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  FDataflowOutput *this_00;
  int iVar5;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  pFVar1 = &this->VertexSelection;
  this->_padding_ = (longlong)&___7FCollectionVertexSelectionByPercentageDataflowNode__6B_;
  pfVar2 = &this->RandomSeed;
  uVar3 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  this->Percentage = 100;
  this->bDeterministic = false;
  *pfVar2 = 0.0;
  uVar3 = rand();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  iVar4 = (int)((float)(uVar3 & 0x7fff) * ___real_40c351c7);
  iVar5 = 200000;
  if (iVar4 < 200000) {
    iVar5 = iVar4;
  }
  *pfVar2 = (float)(iVar5 + -100000);
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Percentage;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pfVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  local_38.Reference = pFVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FDataflowVertexSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

