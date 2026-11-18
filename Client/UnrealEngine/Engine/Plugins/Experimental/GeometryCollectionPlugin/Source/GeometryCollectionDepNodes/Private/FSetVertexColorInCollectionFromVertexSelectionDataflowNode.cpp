// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 12

// StaticStruct @ 14e969720

UScriptStruct * __cdecl
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
                         ,(UObject *)pUVar1,
                         L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
         .OuterSingleton;
}

// GetType @ 14e969760

FName __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::GetType
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e969790

bool __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::IsA
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e9697f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e9697f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e969816;
      }
    }
  }
  bVar5 = true;
LAB_14e969816:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e969850

FStructOnScope * __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::NewStructOnScope
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
        .OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
      Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
                           ,(UObject *)pUVar2,
                           L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e9698d0

void __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::SerializeInternal
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
                         ,(UObject *)pUVar1,
                         L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
             .OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
             .OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e96994d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e969960

FName __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::GetDisplayName
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetVertexColorInCollectionFromVertexSelection");
  return in_RDX;
}

// GetCategory @ 14e969990

FName __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::GetCategory
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection|Utilities");
  return in_RDX;
}

// GetTags @ 14e9699c0

FString * __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::GetTags
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e9699f0

UScriptStruct * __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::TypedScriptStruct
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
                         ,(UObject *)pUVar1,
                         L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
         .OuterSingleton;
}

// Evaluate @ 14e969a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::Evaluate
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this,FContext *param_1,
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
  FDataflowInput *pFVar10;
  FManagedArrayCollection *pFVar11;
  FDataflowVertexSelection *pFVar12;
  FName *pFVar13;
  TManagedArray<FLinearColor> *pTVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  FContext *local_138;
  FConnectionReference local_130;
  FConnectionReference local_118;
  FName local_100;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar1 = &this->Collection;
  local_138 = param_1;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar9 == pFVar1) {
    local_130.ContainerReference = (void *)0x0;
    local_130.Index = -1;
    local_130.Reference = pFVar1;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_130);
    pFVar11 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar10,param_1,local_130.Reference)
    ;
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar11);
    local_118.Reference = &this->VertexSelection;
    local_118.Index = -1;
    local_118.ContainerReference = (void *)0x0;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
    pFVar12 = FDataflowInput::GetValue<FDataflowVertexSelection>
                        (pFVar10,param_1,local_118.Reference);
    iVar7 = *(int *)&pFVar12->field_0x20;
    iVar6 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::VerticesGroup);
    if (iVar6 == iVar7) {
      iVar7 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::VerticesGroup);
      FVar4 = FGeometryCollection::VerticesGroup;
      lVar18 = (longlong)iVar7;
      pFVar13 = ::FName::FName(&local_100,"Color");
      pTVar14 = FManagedArrayCollection::FindAttribute<FLinearColor>(&local_f8,*pFVar13,FVar4);
      if ((pTVar14 != (TManagedArray<FLinearColor> *)0x0) && (uVar15 = 0, 0 < iVar7)) {
        uVar17 = 1;
        lVar16 = 0;
        do {
          if ((((int)uVar15 < 0) || (*(int *)&pFVar12->field_0x20 <= (int)uVar15)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar9 = &pFVar12->field_0x8;
          if (*(undefined1 **)&pFVar12->field_0x18 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&pFVar12->field_0x18;
          }
          uVar8 = uVar15;
          if ((int)uVar15 < 0) {
            uVar8 = uVar15 + 0x1f;
          }
          if ((*(uint *)(puVar9 + (longlong)((int)uVar8 >> 5) * 4) & uVar17) == 0) {
            local_148 = (this->NonSelectedColor).field0_0x0._s_0.R;
            fStack_144 = (this->NonSelectedColor).field0_0x0._s_0.G;
            fStack_140 = (this->NonSelectedColor).field0_0x0._s_0.B;
            fStack_13c = (this->NonSelectedColor).field0_0x0._s_0.A;
          }
          else {
            local_148 = (this->SelectedColor).field0_0x0._s_0.R;
            fStack_144 = (this->SelectedColor).field0_0x0._s_0.G;
            fStack_140 = (this->SelectedColor).field0_0x0._s_0.B;
            fStack_13c = (this->SelectedColor).field0_0x0._s_0.A;
          }
          uVar8 = 0;
          if ((int)uVar15 < *(int *)&pTVar14->field_0x18) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_158 = (longlong)(int)uVar15;
            local_150 = (longlong)*(int *)&pTVar14->field_0x18;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar15 = uVar15 + 1;
          uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
          pfVar2 = (float *)(lVar16 + *(longlong *)&pTVar14->field_0x10);
          *pfVar2 = local_148;
          pfVar2[1] = fStack_144;
          pfVar2[2] = fStack_140;
          pfVar2[3] = fStack_13c;
          lVar16 = lVar16 + 0x10;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,local_138,&local_f8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FSetVertexColorInCollectionFromVertexSelectionDataflowNode @ 14e96b860

FSetVertexColorInCollectionFromVertexSelectionDataflowNode * __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::
FSetVertexColorInCollectionFromVertexSelectionDataflowNode
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this,FNodeParameters *param_1
          ,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FSetVertexColorInCollectionFromVertexSelectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->VertexSelection;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  local_58.Index = -1;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  (this->SelectedColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
  (this->SelectedColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
  (this->SelectedColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
  (this->SelectedColor).field0_0x0._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081
  ;
  (this->NonSelectedColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
  (this->NonSelectedColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
  (this->NonSelectedColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
  (this->NonSelectedColor).field0_0x0._s_0.A =
       (float)FColor::Blue.field0_0x0._3_1_ * __real_3b808081;
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

// FSetVertexColorInCollectionFromVertexSelectionDataflowNode @ 14e96ba10

FSetVertexColorInCollectionFromVertexSelectionDataflowNode * __thiscall
FSetVertexColorInCollectionFromVertexSelectionDataflowNode::
FSetVertexColorInCollectionFromVertexSelectionDataflowNode
          (FSetVertexColorInCollectionFromVertexSelectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSetVertexColorInCollectionFromVertexSelectionDataflowNode__6B_;
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
  (this->NonSelectedColor).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
  (this->NonSelectedColor).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
  (this->NonSelectedColor).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
  (this->NonSelectedColor).field0_0x0._s_0.A =
       (float)FColor::Blue.field0_0x0._3_1_ * __real_3b808081;
  return this;
}

