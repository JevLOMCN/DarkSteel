// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e86f250

UScriptStruct * __cdecl FSetVertexColorFromVertexSelectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode,
                           (UObject *)pUVar1,L"SetVertexColorFromVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
         OuterSingleton;
}

// GetType @ 14e86f300

FName __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::GetType
          (FSetVertexColorFromVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetVertexColorFromVertexSelectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e86f3b0

bool __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::IsA
          (FSetVertexColorFromVertexSelectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetVertexColorFromVertexSelectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86f418;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86f418:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86f436;
      }
    }
  }
  bVar5 = true;
LAB_14e86f436:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86f470

FStructOnScope * __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::NewStructOnScope
          (FSetVertexColorFromVertexSelectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode,
                           (UObject *)pUVar2,L"SetVertexColorFromVertexSelectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86fc30

void __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::SerializeInternal
          (FSetVertexColorFromVertexSelectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode,
                           (UObject *)pUVar1,L"SetVertexColorFromVertexSelectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86fcad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86fcc0

FName __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::GetDisplayName
          (FSetVertexColorFromVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetVertexColorFromVertexSelection");
  return in_RDX;
}

// GetCategory @ 14e86fd70

FName __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::GetCategory
          (FSetVertexColorFromVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection|Utilities");
  return in_RDX;
}

// GetTags @ 14e86fdb0

FString * __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::GetTags
          (FSetVertexColorFromVertexSelectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86fe10

UScriptStruct * __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::TypedScriptStruct
          (FSetVertexColorFromVertexSelectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode,
                           (UObject *)pUVar1,L"SetVertexColorFromVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8702f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::Evaluate
          (FSetVertexColorFromVertexSelectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float *pfVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  FManagedArrayCollection *pFVar10;
  FDataflowSelection *this_00;
  FName *pFVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TManagedArray<FLinearColor> *pTVar13;
  FValueType *this_01;
  uint uVar14;
  FValueType *pFVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  FName local_128;
  FName local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  FName local_108 [2];
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar1 = &this->Collection;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar9 == pFVar1) {
    pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar10);
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowVertexSelection>
                        ((FDataflowNode *)this,param_1,&this->VertexSelection);
    iVar7 = (this_00->SelectionArray).NumBits;
    iVar6 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::VerticesGroup);
    if (iVar6 == iVar7) {
      iVar7 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::VerticesGroup);
      FVar4 = FGeometryCollection::VerticesGroup;
      lVar16 = (longlong)iVar7;
      pFVar11 = ::FName::FName(local_108,"Color");
      local_120 = FVar4;
      local_128 = *pFVar11;
      pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_f8.Map,(TTuple<FName,FName> *)&local_128);
      pFVar15 = (FValueType *)0x0;
      this_01 = (FValueType *)&pTVar12->field_0x10;
      if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        this_01 = pFVar15;
      }
      if (((this_01 != (FValueType *)0x0) &&
          (pTVar13 = FManagedArrayCollection::FValueType::ModifyTypedPtr<FLinearColor>(this_01),
          pTVar13 != (TManagedArray<FLinearColor> *)0x0)) && (0 < iVar7)) {
        lVar17 = 0;
        do {
          uVar14 = (uint)pFVar15;
          bVar5 = FDataflowSelection::IsSelected(this_00,uVar14);
          if (bVar5) {
            local_118 = (this->SelectedColor).field0_0x0._s_0.R;
            fStack_114 = (this->SelectedColor).field0_0x0._s_0.G;
            fStack_110 = (this->SelectedColor).field0_0x0._s_0.B;
            fStack_10c = (this->SelectedColor).field0_0x0._s_0.A;
            uVar8 = 0;
            if ((int)uVar14 < *(int *)&pTVar13->field_0x18) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if (uVar8 == 0) {
              local_138 = (longlong)(int)uVar14;
              local_130 = (longlong)*(int *)&pTVar13->field_0x18;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pfVar2 = (float *)(*(longlong *)&pTVar13->field_0x10 + lVar17);
            *pfVar2 = local_118;
            pfVar2[1] = fStack_114;
            pfVar2[2] = fStack_110;
            pfVar2[3] = fStack_10c;
          }
          pFVar15 = (FValueType *)(ulonglong)(uVar14 + 1);
          lVar17 = lVar17 + 0x10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FSetVertexColorFromVertexSelectionDataflowNode @ 14e92bf90

FSetVertexColorFromVertexSelectionDataflowNode * __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::FSetVertexColorFromVertexSelectionDataflowNode
          (FSetVertexColorFromVertexSelectionDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowVertexSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FSetVertexColorFromVertexSelectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->VertexSelection;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  (this->SelectedColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
  (this->SelectedColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
  (this->SelectedColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
  (this->SelectedColor).field0_0x0._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081
  ;
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

// FSetVertexColorFromVertexSelectionDataflowNode @ 14e92c100

FSetVertexColorFromVertexSelectionDataflowNode * __thiscall
FSetVertexColorFromVertexSelectionDataflowNode::FSetVertexColorFromVertexSelectionDataflowNode
          (FSetVertexColorFromVertexSelectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSetVertexColorFromVertexSelectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->VertexSelection).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->VertexSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  (this->SelectedColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
  (this->SelectedColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
  (this->SelectedColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
  (this->SelectedColor).field0_0x0._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081
  ;
  return this;
}

