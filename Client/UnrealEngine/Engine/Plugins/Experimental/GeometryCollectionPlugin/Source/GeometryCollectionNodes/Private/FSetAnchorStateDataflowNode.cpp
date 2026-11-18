// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8cddb0

UScriptStruct * __cdecl FSetAnchorStateDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetAnchorStateDataflowNode,(UObject *)pUVar1,
                         L"SetAnchorStateDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton;
}

// GetType @ 14e8cde40

FName __thiscall FSetAnchorStateDataflowNode::GetType(FSetAnchorStateDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetAnchorStateDataflowNode");
  return in_RDX;
}

// IsA @ 14e8cdea0

bool __thiscall FSetAnchorStateDataflowNode::IsA(FSetAnchorStateDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetAnchorStateDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8cdf08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8cdf08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8cdf26;
      }
    }
  }
  bVar5 = true;
LAB_14e8cdf26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ce080

FStructOnScope * __thiscall
FSetAnchorStateDataflowNode::NewStructOnScope(FSetAnchorStateDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetAnchorStateDataflowNode,(UObject *)pUVar2,
                           L"SetAnchorStateDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ce1c0

void __thiscall
FSetAnchorStateDataflowNode::SerializeInternal(FSetAnchorStateDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetAnchorStateDataflowNode,(UObject *)pUVar1,
                         L"SetAnchorStateDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ce23d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ce2e0

FName __thiscall FSetAnchorStateDataflowNode::GetDisplayName(FSetAnchorStateDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetAnchorState");
  return in_RDX;
}

// GetCategory @ 14e8ce340

FName __thiscall FSetAnchorStateDataflowNode::GetCategory(FSetAnchorStateDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8ce3a0

FString * __thiscall
FSetAnchorStateDataflowNode::GetTags
          (FSetAnchorStateDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ce530

UScriptStruct * __thiscall
FSetAnchorStateDataflowNode::TypedScriptStruct(FSetAnchorStateDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetAnchorStateDataflowNode,(UObject *)pUVar1,
                         L"SetAnchorStateDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetAnchorStateDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8ce5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetAnchorStateDataflowNode::Evaluate
          (FSetAnchorStateDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  uint *puVar2;
  EAnchorStateEnum EVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  FManagedArrayCollection *pFVar7;
  FDataflowInput *pFVar8;
  FDataflowTransformSelection *pFVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  void *_Src;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_1d8 [32];
  FConnectionReference local_1b8;
  FCollectionAnchoringFacade local_198;
  FDataflowSelection local_128;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 == pFVar1) {
    pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar7);
    uVar13 = 0;
    local_1b8.ContainerReference = (void *)0x0;
    local_1b8.Index = -1;
    local_1b8.Reference = pFVar1;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b8);
    if (pFVar8->Connection != (FDataflowOutput *)0x0) {
      pFVar9 = FDataflowNode::GetValue<FDataflowTransformSelection>
                         ((FDataflowNode *)this,param_1,&this->TransformSelection);
      local_128.GroupName.ComparisonIndex.Value = *(uint *)&pFVar9->field_0x0;
      local_128.GroupName.Number = *(uint *)&pFVar9->field_0x4;
      local_128.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_128.SelectionArray.MaxBits = 0;
      local_128.SelectionArray.NumBits = 0;
      uVar10 = *(int *)&pFVar9->field_0x20 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar10) {
        local_128.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar10) {
          local_128.SelectionArray.MaxBits = uVar10;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128.SelectionArray,0);
      }
      local_128.SelectionArray.NumBits = *(int *)&pFVar9->field_0x20;
      if (local_128.SelectionArray.NumBits != 0) {
        _Src = *(void **)&pFVar9->field_0x18;
        if (*(void **)&pFVar9->field_0x18 == (void *)0x0) {
          _Src = &pFVar9->field_0x8;
        }
        FVar11 = (ForElementType<unsigned_int>)&local_128.SelectionArray;
        if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_128.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar11,_Src,(ulonglong)(local_128.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      Chaos::Facades::FCollectionAnchoringFacade::FCollectionAnchoringFacade(&local_198,&local_f8);
      bVar4 = Chaos::Facades::FCollectionAnchoringFacade::HasAnchoredAttribute(&local_198);
      if (!bVar4) {
        Chaos::Facades::FCollectionAnchoringFacade::AddAnchoredAttribute(&local_198);
      }
      EVar3 = this->AnchorState;
      local_1b8.Reference = (FManagedArrayCollection *)0x0;
      local_1b8.Index = 0;
      local_1b8._12_4_ = 0;
      FDataflowSelection::AsArrayValidated
                (&local_128,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1b8,&local_f8);
      Chaos::Facades::FCollectionAnchoringFacade::SetAnchored
                (&local_198,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1b8,
                 EVar3 == Dataflow_AnchorState_Anchored);
      if (this->bSetNotSelectedBonesToOppositeState != false) {
        FVar11 = (ForElementType<unsigned_int>)&local_128.SelectionArray;
        if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_128.SelectionArray.AllocatorInstance.SecondaryData;
        }
        iVar5 = (int)(local_128.SelectionArray.NumBits + 0x1fU +
                     ((int)(local_128.SelectionArray.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
        uVar10 = local_128.SelectionArray.NumBits & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        uVar14 = 0xffffffff >> ((byte)(0x20 - uVar10) & 0x1f);
        if (0x1f < (int)(0x20 - uVar10)) {
          uVar14 = 0xffffffff;
        }
        uVar10 = 0xffffffff;
        if (iVar5 == 1) {
          uVar10 = uVar14;
        }
        if (0 < iVar5) {
          do {
            puVar2 = (uint *)((longlong)FVar11 + uVar13 * 4);
            uVar12 = *(uint *)((longlong)FVar11 + uVar13 * 4) & uVar10;
            if (uVar10 == 0xffffffff) {
              uVar12 = *puVar2;
            }
            uVar10 = ~uVar12 & uVar14;
            if ((uint)uVar13 != iVar5 - 1U) {
              uVar10 = ~uVar12;
            }
            uVar12 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            *puVar2 = uVar10;
            uVar10 = 0xffffffff;
            if (uVar12 == iVar5 - 1U) {
              uVar10 = uVar14;
            }
          } while ((int)uVar12 < iVar5);
        }
        FDataflowSelection::AsArrayValidated
                  (&local_128,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1b8,&local_f8);
        Chaos::Facades::FCollectionAnchoringFacade::SetAnchored
                  (&local_198,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1b8,
                   EVar3 != Dataflow_AnchorState_Anchored);
      }
      if (local_1b8.Reference != (FManagedArrayCollection *)0x0) {
        FMemory::Free(local_1b8.Reference);
      }
      if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_128.SelectionArray.AllocatorInstance.SecondaryData);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FSetAnchorStateDataflowNode @ 14e92b0d0

FSetAnchorStateDataflowNode * __thiscall
FSetAnchorStateDataflowNode::FSetAnchorStateDataflowNode
          (FSetAnchorStateDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->AnchorState = Dataflow_AnchorState_Anchored;
  this->bSetNotSelectedBonesToOppositeState = false;
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FSetAnchorStateDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  return this;
}

