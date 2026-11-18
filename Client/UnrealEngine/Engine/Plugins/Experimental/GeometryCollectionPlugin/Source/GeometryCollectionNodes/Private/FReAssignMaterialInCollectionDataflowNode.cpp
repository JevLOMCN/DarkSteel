// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e89df20

UScriptStruct * __cdecl FReAssignMaterialInCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode,
                         (UObject *)pUVar1,L"ReAssignMaterialInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e89df70

FName __thiscall
FReAssignMaterialInCollectionDataflowNode::GetType(FReAssignMaterialInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FReAssignMaterialInCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e89e040

bool __thiscall
FReAssignMaterialInCollectionDataflowNode::IsA
          (FReAssignMaterialInCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FReAssignMaterialInCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89e0a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89e0a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89e0c6;
      }
    }
  }
  bVar5 = true;
LAB_14e89e0c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89e100

FStructOnScope * __thiscall
FReAssignMaterialInCollectionDataflowNode::NewStructOnScope
          (FReAssignMaterialInCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode,
                           (UObject *)pUVar2,L"ReAssignMaterialInCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89e180

void __thiscall
FReAssignMaterialInCollectionDataflowNode::SerializeInternal
          (FReAssignMaterialInCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode,
                         (UObject *)pUVar1,L"ReAssignMaterialInCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89e1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89e210

FName __thiscall
FReAssignMaterialInCollectionDataflowNode::GetDisplayName
          (FReAssignMaterialInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ReAssignMaterialInCollection");
  return in_RDX;
}

// GetCategory @ 14e89e240

FName __thiscall
FReAssignMaterialInCollectionDataflowNode::GetCategory
          (FReAssignMaterialInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Materials");
  return in_RDX;
}

// GetTags @ 14e89e3b0

FString * __thiscall
FReAssignMaterialInCollectionDataflowNode::GetTags
          (FReAssignMaterialInCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89e3e0

UScriptStruct * __thiscall
FReAssignMaterialInCollectionDataflowNode::TypedScriptStruct
          (FReAssignMaterialInCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode,
                         (UObject *)pUVar1,L"ReAssignMaterialInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FReAssignMaterialInCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e89e450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FReAssignMaterialInCollectionDataflowNode::Evaluate
          (FReAssignMaterialInCollectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  TManagedArray<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  FManagedArrayCollection *pFVar8;
  FDataflowFaceSelection *pFVar9;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar10;
  FDataflowInput *pFVar11;
  int *piVar12;
  FName *pFVar13;
  TManagedArray<bool> *pTVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  int local_178;
  int local_174;
  TManagedArray<int> *local_170;
  FReAssignMaterialInCollectionDataflowNode *local_168;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *local_160;
  TManagedArray<bool> *local_158;
  FContext *local_150;
  FConnectionReference local_148;
  FConnectionReference local_130;
  FName local_118;
  FName local_110;
  FName local_108 [2];
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_168 = this;
  local_150 = param_1;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar7 == &this->Collection) {
    pFVar8 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar8);
    pFVar9 = FDataflowNode::GetValue<FDataflowFaceSelection>
                       ((FDataflowNode *)this,param_1,&this->FaceSelection);
    pTVar10 = FDataflowNode::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->Materials);
    local_148.Reference = &this->OutsideMaterialIdx;
    local_148.Index = -1;
    local_148.ContainerReference = (void *)0x0;
    local_160 = pTVar10;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
    piVar12 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_148.Reference);
    local_130.Index = -1;
    local_130.ContainerReference = (void *)0x0;
    iVar1 = *piVar12;
    local_130.Reference = &this->InsideMaterialIdx;
    local_174 = iVar1;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_130);
    piVar12 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_130.Reference);
    FVar3 = FGeometryCollection::FacesGroup;
    iVar18 = *piVar12;
    local_178 = iVar18;
    if (0 < pTVar10->ArrayNum) {
      pFVar13 = ::FName::FName(&local_118,"Internal");
      bVar5 = FManagedArrayCollection::HasAttribute(&local_f8,*pFVar13,FVar3);
      FVar3 = FGeometryCollection::FacesGroup;
      if ((bVar5) &&
         ((this->bAssignOutsideMaterial != false || (this->bAssignInsideMaterial != false)))) {
        pFVar13 = ::FName::FName(&local_110,"MaterialID");
        local_170 = FManagedArrayCollection::ModifyAttribute<int>(&local_f8,*pFVar13,FVar3);
        FVar3 = FGeometryCollection::FacesGroup;
        pFVar13 = ::FName::FName(local_108,"Internal");
        pTVar14 = FManagedArrayCollection::GetAttribute<bool>(&local_f8,*pFVar13,FVar3);
        uVar16 = 1;
        local_158 = pTVar14;
        if ((this->bAssignOutsideMaterial != false) &&
           (((-1 < iVar1 && (iVar1 < pTVar10->ArrayNum)) &&
            (uVar15 = 0, 0 < *(int *)&pFVar9->field_0x20)))) {
          uVar17 = 1;
          lVar22 = 0;
          do {
            if ((((int)uVar15 < 0) || (*(int *)&pTVar14->field_0x28 <= (int)uVar15)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            puVar7 = &pTVar14->field_0x10;
            if (*(undefined1 **)&pTVar14->field_0x20 != (undefined1 *)0x0) {
              puVar7 = *(undefined1 **)&pTVar14->field_0x20;
            }
            uVar6 = uVar15;
            if ((int)uVar15 < 0) {
              uVar6 = uVar15 + 0x1f;
            }
            lVar21 = (longlong)((int)uVar6 >> 5) * 4;
            if ((*(uint *)(puVar7 + lVar21) & uVar17) == 0) {
              if ((((int)uVar15 < 0) || (*(int *)&pFVar9->field_0x20 <= (int)uVar15)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar4 = local_170;
              puVar7 = &pFVar9->field_0x8;
              if (*(undefined1 **)&pFVar9->field_0x18 != (undefined1 *)0x0) {
                puVar7 = *(undefined1 **)&pFVar9->field_0x18;
              }
              if ((*(uint *)(puVar7 + lVar21) & uVar17) != 0) {
                uVar6 = 0;
                if ((int)uVar15 < *(int *)&local_170->field_0x18) {
                  uVar6 = ~uVar15 >> 0x1f;
                }
                if (uVar6 == 0) {
                  local_188 = (longlong)(int)uVar15;
                  local_180 = (longlong)*(int *)&local_170->field_0x18;
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                *(int *)(lVar22 + *(longlong *)&pTVar4->field_0x10) = local_174;
              }
            }
            uVar15 = uVar15 + 1;
            uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
            lVar22 = lVar22 + 4;
            this = local_168;
            pTVar10 = local_160;
            iVar18 = local_178;
          } while ((int)uVar15 < *(int *)&pFVar9->field_0x20);
        }
        pTVar14 = local_158;
        iVar1 = local_178;
        if ((((this->bAssignInsideMaterial != false) && (-1 < iVar18)) &&
            (iVar18 < pTVar10->ArrayNum)) && (uVar15 = 0, 0 < *(int *)&pFVar9->field_0x20)) {
          puVar7 = &local_158->field_0x10;
          lVar22 = 0;
          do {
            if ((((int)uVar15 < 0) || (*(int *)&pTVar14->field_0x28 <= (int)uVar15)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            puVar19 = *(undefined1 **)&pTVar14->field_0x20;
            puVar20 = puVar7;
            if (puVar19 != (undefined1 *)0x0) {
              puVar20 = puVar19;
            }
            lVar21 = (longlong)((int)(uVar15 + ((int)uVar15 >> 0x1f & 0x1fU)) >> 5);
            if ((*(uint *)(puVar20 + lVar21 * 4) & uVar16) != 0) {
              if ((((int)uVar15 < 0) || (*(int *)&pFVar9->field_0x20 <= (int)uVar15)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar4 = local_170;
              puVar19 = &pFVar9->field_0x8;
              if (*(undefined1 **)&pFVar9->field_0x18 != (undefined1 *)0x0) {
                puVar19 = *(undefined1 **)&pFVar9->field_0x18;
              }
              if ((*(uint *)(puVar19 + lVar21 * 4) & uVar16) != 0) {
                uVar17 = 0;
                if ((int)uVar15 < *(int *)&local_170->field_0x18) {
                  uVar17 = ~uVar15 >> 0x1f;
                }
                if (uVar17 == 0) {
                  local_188 = (longlong)(int)uVar15;
                  local_180 = (longlong)*(int *)&local_170->field_0x18;
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                *(int *)(lVar22 + *(longlong *)&pTVar4->field_0x10) = iVar1;
              }
            }
            uVar15 = uVar15 + 1;
            uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
            lVar22 = lVar22 + 4;
            this = local_168;
          } while ((int)uVar15 < *(int *)&pFVar9->field_0x20);
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,local_150,&local_f8,&this->Collection);
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,local_150,local_160,&this->Materials);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FReAssignMaterialInCollectionDataflowNode @ 14e92a320

FReAssignMaterialInCollectionDataflowNode * __thiscall
FReAssignMaterialInCollectionDataflowNode::FReAssignMaterialInCollectionDataflowNode
          (FReAssignMaterialInCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowFaceSelection *pFVar1;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FDataflowOutput *pFVar4;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FReAssignMaterialInCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->FaceSelection;
  uVar3 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  pTVar2 = &this->Materials;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  this->OutsideMaterialIdx = -1;
  this->InsideMaterialIdx = -1;
  this->bAssignOutsideMaterial = false;
  this->bAssignInsideMaterial = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->OutsideMaterialIdx;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->InsideMaterialIdx;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar2;
  local_48.Reference = pTVar2;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  return this;
}

// FReAssignMaterialInCollectionDataflowNode @ 14e92a520

FReAssignMaterialInCollectionDataflowNode * __thiscall
FReAssignMaterialInCollectionDataflowNode::FReAssignMaterialInCollectionDataflowNode
          (FReAssignMaterialInCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FReAssignMaterialInCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  this->bAssignOutsideMaterial = false;
  this->bAssignInsideMaterial = false;
  this->OutsideMaterialIdx = -1;
  this->InsideMaterialIdx = -1;
  return this;
}

