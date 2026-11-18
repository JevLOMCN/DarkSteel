// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e87b490

UScriptStruct * __cdecl FCollectionSelectTransformStringDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectTransformStringDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectTransformStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.
         OuterSingleton;
}

// GetType @ 14e87b5c0

FName __thiscall
FCollectionSelectTransformStringDataflowNode::GetType
          (FCollectionSelectTransformStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSelectTransformStringDataflowNode");
  return in_RDX;
}

// IsA @ 14e87b5f0

bool __thiscall
FCollectionSelectTransformStringDataflowNode::IsA
          (FCollectionSelectTransformStringDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSelectTransformStringDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e87b658;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e87b658:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e87b676;
      }
    }
  }
  bVar5 = true;
LAB_14e87b676:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e87b6b0

FStructOnScope * __thiscall
FCollectionSelectTransformStringDataflowNode::NewStructOnScope
          (FCollectionSelectTransformStringDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectTransformStringDataflowNode,
                             (UObject *)pUVar2,L"CollectionSelectTransformStringDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e87b730

void __thiscall
FCollectionSelectTransformStringDataflowNode::SerializeInternal
          (FCollectionSelectTransformStringDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectTransformStringDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectTransformStringDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87b7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e87b7c0

FName __thiscall
FCollectionSelectTransformStringDataflowNode::GetDisplayName
          (FCollectionSelectTransformStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSelectTransformString");
  return in_RDX;
}

// GetCategory @ 14e87b7f0

FName __thiscall
FCollectionSelectTransformStringDataflowNode::GetCategory
          (FCollectionSelectTransformStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e87b820

FString * __thiscall
FCollectionSelectTransformStringDataflowNode::GetTags
          (FCollectionSelectTransformStringDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Name, Bone, Attribute");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e87b850

UScriptStruct * __thiscall
FCollectionSelectTransformStringDataflowNode::TypedScriptStruct
          (FCollectionSelectTransformStringDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectTransformStringDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectTransformStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectTransformStringDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e87b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionSelectTransformStringDataflowNode::Evaluate
          (FCollectionSelectTransformStringDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  uint *puVar1;
  EDataflowCollectionSelectionByNameMethod EVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  FDataflowInput *pFVar10;
  FManagedArrayCollection *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  TManagedArray<FString> *pTVar15;
  size_t sVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  wchar_t *_Str;
  uint uVar19;
  undefined1 auStackY_138 [32];
  longlong local_108;
  longlong local_100;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TManagedArray<FString> *local_e8;
  FContext *local_e0;
  FConnectionReference local_d8;
  FConnectionReference local_c0;
  FConnectionReference local_a8;
  FConnectionReference local_90;
  FName local_78;
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar11 = &this->Collection;
  local_e0 = param_1;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar9 == pFVar11) {
    local_d8.ContainerReference = (void *)0x0;
    local_d8.Index = -1;
    local_d8.Reference = pFVar11;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d8);
    if (pFVar10->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,local_d8.Reference,pFVar11);
    }
    else {
      local_90.Index = -1;
      local_90.ContainerReference = (void *)0x0;
      local_90.Reference = pFVar11;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_d8,&local_90);
    }
  }
  else {
    puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FDataflowTransformSelection *)puVar9 == &this->TransformSelection) {
      pFVar11 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar11);
      local_c0.Reference = &this->SearchText;
      local_c0.Index = -1;
      uVar18 = 0;
      local_c0.ContainerReference = (void *)0x0;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c0);
      pFVar12 = FDataflowInput::GetValue<FString>(pFVar10,param_1,local_c0.Reference);
      local_a8.Reference = &this->Attribute;
      local_a8.Index = -1;
      local_a8.ContainerReference = (void *)0x0;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
      pFVar13 = FDataflowInput::GetValue<FString>(pFVar10,param_1,local_a8.Reference);
      local_70.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_70.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_70.SelectionArray.NumBits = 0;
      local_70.SelectionArray.MaxBits = 0x80;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      FDataflowSelection::InitFromArray(&local_70,pFVar11,&local_f8);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      FVar5 = FTransformCollection::TransformGroup;
      iVar7 = (pFVar13->Data).ArrayNum;
      uVar19 = 1;
      uVar8 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar8 = 0;
      }
      pFVar14 = ::FName::FName(&local_78,uVar8,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                               FNAME_Add);
      pTVar15 = FManagedArrayCollection::FindAttributeTyped<FString>(pFVar11,*pFVar14,FVar5);
      local_e8 = pTVar15;
      if (pTVar15 != (TManagedArray<FString> *)0x0) {
        iVar7 = (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15);
        local_100 = (longlong)iVar7;
        if (0 < iVar7) {
          local_108 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar18 < *(int *)&pTVar15->field_0x18) {
              uVar8 = ~uVar18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            EVar2 = this->Method;
            pFVar13 = (FString *)(*(longlong *)&pTVar15->field_0x10 + local_108);
            if (EVar2 == Exact) {
              iVar7 = (pFVar13->Data).ArrayNum;
              iVar3 = (pFVar12->Data).ArrayNum;
              if (iVar7 == iVar3) {
                if (iVar7 < 2) {
                  bVar6 = true;
                }
                else {
                  iVar7 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                                     (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
                  bVar6 = iVar7 == 0;
                }
              }
              else {
                bVar6 = iVar7 + iVar3 == 1;
              }
LAB_14e87bd0d:
              if (bVar6 == false) goto LAB_14e87bd63;
              if ((((int)uVar18 < 0) || (local_70.SelectionArray.NumBits <= (int)uVar18)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_70.SelectionArray;
              if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_70.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar8 = uVar18;
              if ((int)uVar18 < 0) {
                uVar8 = uVar18 + 0x1f;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)((int)uVar8 >> 5) * 4);
              *puVar1 = *puVar1 | uVar19;
            }
            else {
              if (EVar2 == StartsWith) {
                iVar7 = (pFVar12->Data).ArrayNum;
                if (iVar7 == 0) {
                  bVar6 = ::FString::StartsWith(pFVar13,L"",0,CaseSensitive);
                }
                else {
                  bVar6 = ::FString::StartsWith
                                    (pFVar13,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                                     iVar7 + -1,CaseSensitive);
                }
                goto LAB_14e87bd0d;
              }
              if (EVar2 == EndsWith) {
                iVar7 = (pFVar12->Data).ArrayNum;
                if (iVar7 == 0) {
                  bVar6 = ::FString::EndsWith(pFVar13,L"",0,CaseSensitive);
                }
                else {
                  bVar6 = ::FString::EndsWith(pFVar13,(wchar_t *)
                                                      (pFVar12->Data).AllocatorInstance.Data,
                                              iVar7 + -1,CaseSensitive);
                }
                goto LAB_14e87bd0d;
              }
              if (EVar2 == Contains) {
                if ((pFVar12->Data).ArrayNum == 0) {
                  _Str = L"";
                }
                else {
                  _Str = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
                  if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
                    bVar6 = false;
                    goto LAB_14e87bd0d;
                  }
                }
                sVar16 = wcslen(_Str);
                iVar7 = ::FString::Find(pFVar13,_Str,(int)sVar16,CaseSensitive,FromStart,-1);
                bVar6 = iVar7 != -1;
                goto LAB_14e87bd0d;
              }
LAB_14e87bd63:
              if ((((int)uVar18 < 0) || (local_70.SelectionArray.NumBits <= (int)uVar18)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar17 = (ForElementType<unsigned_int>)&local_70.SelectionArray;
              if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_70.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar8 = uVar18;
              if ((int)uVar18 < 0) {
                uVar8 = uVar18 + 0x1f;
              }
              puVar1 = (uint *)((longlong)FVar17 + (longlong)((int)uVar8 >> 5) * 4);
              *puVar1 = *puVar1 & ~uVar19;
            }
            local_108 = local_108 + 0x10;
            uVar18 = uVar18 + 1;
            uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
            local_100 = local_100 + -1;
            pTVar15 = local_e8;
          } while (local_100 != 0);
        }
      }
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,local_e0,(FDataflowTransformSelection *)&local_70,
                 &this->TransformSelection);
      if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// FCollectionSelectTransformStringDataflowNode @ 14e9151e0

FCollectionSelectTransformStringDataflowNode * __thiscall
FCollectionSelectTransformStringDataflowNode::FCollectionSelectTransformStringDataflowNode
          (FCollectionSelectTransformStringDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar2;
  uint uVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionSelectTransformStringDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  ::FString::FString(&this->Attribute,"BoneName");
  this->Method = Contains;
  pFVar2 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->SearchText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchText).Data.ArrayNum = 0;
  (this->SearchText).Data.ArrayMax = 0;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SearchText;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Attribute;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar2;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_68);
  }
  return this;
}

// FCollectionSelectTransformStringDataflowNode @ 14e915390

FCollectionSelectTransformStringDataflowNode * __thiscall
FCollectionSelectTransformStringDataflowNode::FCollectionSelectTransformStringDataflowNode
          (FCollectionSelectTransformStringDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionSelectTransformStringDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&this->Attribute,"BoneName");
  this->Method = Contains;
  (this->SearchText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchText).Data.ArrayNum = 0;
  (this->SearchText).Data.ArrayMax = 0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}

