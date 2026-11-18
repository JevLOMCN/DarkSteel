// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e85f350

UScriptStruct * __cdecl FCollectionFaceSelectionCustomDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode,
                         (UObject *)pUVar1,L"CollectionFaceSelectionCustomDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton
  ;
}

// GetType @ 14e85f7a0

FName __thiscall
FCollectionFaceSelectionCustomDataflowNode::GetType
          (FCollectionFaceSelectionCustomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionFaceSelectionCustomDataflowNode");
  return in_RDX;
}

// IsA @ 14e85f8a0

bool __thiscall
FCollectionFaceSelectionCustomDataflowNode::IsA
          (FCollectionFaceSelectionCustomDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionFaceSelectionCustomDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e85f908;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e85f908:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e85f926;
      }
    }
  }
  bVar5 = true;
LAB_14e85f926:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e85f9a0

FStructOnScope * __thiscall
FCollectionFaceSelectionCustomDataflowNode::NewStructOnScope
          (FCollectionFaceSelectionCustomDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode,
                           (UObject *)pUVar2,L"CollectionFaceSelectionCustomDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e85faa0

void __thiscall
FCollectionFaceSelectionCustomDataflowNode::SerializeInternal
          (FCollectionFaceSelectionCustomDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode,
                         (UObject *)pUVar1,L"CollectionFaceSelectionCustomDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85fb1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e85fb70

FName __thiscall
FCollectionFaceSelectionCustomDataflowNode::GetDisplayName
          (FCollectionFaceSelectionCustomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionFaceSelectCustom");
  return in_RDX;
}

// GetCategory @ 14e85fbe0

FName __thiscall
FCollectionFaceSelectionCustomDataflowNode::GetCategory
          (FCollectionFaceSelectionCustomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Face");
  return in_RDX;
}

// GetTags @ 14e85fc90

FString * __thiscall
FCollectionFaceSelectionCustomDataflowNode::GetTags
          (FCollectionFaceSelectionCustomDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e85fcc0

UScriptStruct * __thiscall
FCollectionFaceSelectionCustomDataflowNode::TypedScriptStruct
          (FCollectionFaceSelectionCustomDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode,
                         (UObject *)pUVar1,L"CollectionFaceSelectionCustomDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 14e85ffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionFaceSelectionCustomDataflowNode::Evaluate
          (FCollectionFaceSelectionCustomDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowFaceSelection *pFVar1;
  uint *puVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  FManagedArrayCollection *pFVar9;
  FDataflowInput *pFVar10;
  FString *pFVar11;
  ulonglong uVar12;
  wchar_t *_Str;
  ForElementType<unsigned_int> FVar13;
  ForAnyElementType this_00;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  FConnectionReference local_b0;
  undefined1 local_98 [24];
  void *local_80;
  undefined4 local_78;
  undefined4 local_74;
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = &this->FaceSelection;
  pFVar9 = &this->Collection;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowFaceSelection *)puVar8 == pFVar1) {
    pFVar9 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar9);
    FVar3 = FGeometryCollection::FacesGroup;
    uVar5 = ::GetTypeHash(FGeometryCollection::FacesGroup.ComparisonIndex.Value);
    if (*(int *)&(pFVar9->GroupInfo).field_0x8 != *(int *)&(pFVar9->GroupInfo).field_0x34) {
      puVar8 = *(undefined1 **)&(pFVar9->GroupInfo).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(pFVar9->GroupInfo).field_0x38;
      }
      iVar16 = *(int *)(puVar8 + (ulonglong)
                                 (*(int *)&(pFVar9->GroupInfo).field_0x48 - 1U &
                                 FVar3.Number + uVar5) * 4);
      if (iVar16 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar9->GroupInfo + (longlong)iVar16 * 0x14) == FVar3) {
            if (iVar16 != -1) {
              local_70.GroupName = FDataflowFaceSelection::FacesGroupName;
              local_70.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_70.SelectionArray.NumBits = 0;
              local_70.SelectionArray.MaxBits = 0x80;
              FDataflowSelection::InitializeFromCollection(&local_70,pFVar9,false);
              local_98._0_8_ = &this->FaceIndicies;
              local_98._8_4_ = -1;
              local_98._16_8_ = (void *)0x0;
              pFVar10 = FDataflowNode::FindInput
                                  ((FDataflowNode *)this,(FConnectionReference *)local_98);
              pFVar11 = FDataflowInput::GetValue<FString>(pFVar10,param_1,(FString *)local_98._0_8_)
              ;
              local_b0.Reference = (void *)0x0;
              local_b0.Index = (pFVar11->Data).ArrayNum;
              lVar14 = (longlong)local_b0.Index;
              pFVar15 = (pFVar11->Data).AllocatorInstance.Data;
              if (local_b0.Index == 0) {
                local_b0._12_4_ = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_b0.Index,0,(ForAnyElementType *)&local_b0,local_b0.Index,
                           (int *)&local_b0.field_0xc);
                memcpy(local_b0.Reference,pFVar15,lVar14 * 2);
              }
              local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c0.ArrayNum = 0;
              local_c0.ArrayMax = 0;
              ::FString::ParseIntoArray((FString *)&local_b0,&local_c0,L" ",true);
              iVar16 = local_c0.ArrayNum;
              uVar12 = (ulonglong)local_c0.ArrayNum;
              pFVar15 = local_c0.AllocatorInstance.Data + uVar12 * 0x10;
              this_00.Data = local_c0.AllocatorInstance.Data;
              goto LAB_14e8601b0;
            }
            break;
          }
          iVar16 = *(int *)(*(longlong *)&pFVar9->GroupInfo + 0xc + (longlong)iVar16 * 0x14);
        } while (iVar16 != -1);
      }
    }
    local_98._0_4_ = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
    local_98._4_4_ = FDataflowFaceSelection::FacesGroupName.Number;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_74 = 0x80;
    FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
              ((FDataflowNode *)this,param_1,(FDataflowFaceSelection *)local_98,pFVar1);
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
  }
  else {
    puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar8 == pFVar9) {
      local_98._16_8_ = (void *)0x0;
      local_98._8_4_ = -1;
      local_98._0_8_ = pFVar9;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_98);
      if (pFVar10->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_98._0_8_,pFVar9);
      }
      else {
        local_b0.Index = -1;
        local_b0.ContainerReference = (void *)0x0;
        local_b0.Reference = pFVar9;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,(FConnectionReference *)local_98,&local_b0);
      }
    }
  }
  return;
LAB_14e8601b0:
  if ((int)uVar12 != iVar16) {
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c8);
  }
  if (this_00.Data == pFVar15) {
    FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
              ((FDataflowNode *)this,param_1,(FDataflowFaceSelection *)&local_70,pFVar1);
    DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    if (local_b0.Reference != (void *)0x0) {
      FMemory::Free(local_b0.Reference);
    }
    if (local_70.SelectionArray.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0
       ) {
      return;
    }
    FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
    return;
  }
  bVar4 = ::FString::IsNumeric((FString *)this_00.Data);
  if (!bVar4) {
LAB_14e86026b:
    uVar12 = local_c0._8_8_ & 0xffffffff;
    this_00.Data = this_00.Data + 0x10;
    goto LAB_14e8601b0;
  }
  if (*(int *)(this_00.Data + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)this_00.Data;
  }
  iVar6 = _wtoi(_Str);
  if ((iVar6 < 0) || (local_70.SelectionArray.NumBits <= iVar6)) {
    ::FString::PrintfImpl
              ((FString *)local_98,L"Index %d is not a valid vertex index for face group size %d.");
    UE::Dataflow::FContext::Error
              (param_1,(FString *)local_98,(FDataflowNode *)this,(FDataflowOutput *)0x0);
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    goto LAB_14e86026b;
  }
  FVar13 = (ForElementType<unsigned_int>)&local_70.SelectionArray;
  if (local_70.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FVar13 = local_70.SelectionArray.AllocatorInstance.SecondaryData;
  }
  iVar7 = iVar6;
  if (iVar6 < 0) {
    iVar7 = iVar6 + 0x1f;
  }
  puVar2 = (uint *)((longlong)FVar13 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  uVar12 = local_c0._8_8_ & 0xffffffff;
  this_00.Data = this_00.Data + 0x10;
  goto LAB_14e8601b0;
}

// FCollectionFaceSelectionCustomDataflowNode @ 14e914e00

FCollectionFaceSelectionCustomDataflowNode * __thiscall
FCollectionFaceSelectionCustomDataflowNode::FCollectionFaceSelectionCustomDataflowNode
          (FCollectionFaceSelectionCustomDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowFaceSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionFaceSelectionCustomDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->FaceSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  (this->FaceIndicies).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceIndicies).Data.ArrayNum = 0;
  (this->FaceIndicies).Data.ArrayMax = 0;
  uVar2 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FaceIndicies;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  return this;
}

// FCollectionFaceSelectionCustomDataflowNode @ 14e914f70

FCollectionFaceSelectionCustomDataflowNode * __thiscall
FCollectionFaceSelectionCustomDataflowNode::FCollectionFaceSelectionCustomDataflowNode
          (FCollectionFaceSelectionCustomDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionFaceSelectionCustomDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->FaceIndicies).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceIndicies).Data.ArrayNum = 0;
  (this->FaceIndicies).Data.ArrayMax = 0;
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  return this;
}

