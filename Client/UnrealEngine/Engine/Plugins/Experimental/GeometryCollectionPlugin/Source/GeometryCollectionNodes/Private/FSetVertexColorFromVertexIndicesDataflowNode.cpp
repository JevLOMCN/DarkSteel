// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e86c8b0

UScriptStruct * __cdecl FSetVertexColorFromVertexIndicesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode,
                         (UObject *)pUVar1,L"SetVertexColorFromVertexIndicesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.
         OuterSingleton;
}

// GetType @ 14e86cc40

FName __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::GetType
          (FSetVertexColorFromVertexIndicesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetVertexColorFromVertexIndicesDataflowNode");
  return in_RDX;
}

// IsA @ 14e86cc70

bool __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::IsA
          (FSetVertexColorFromVertexIndicesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetVertexColorFromVertexIndicesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86ccd8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86ccd8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86ccf6;
      }
    }
  }
  bVar5 = true;
LAB_14e86ccf6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86cd30

FStructOnScope * __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::NewStructOnScope
          (FSetVertexColorFromVertexIndicesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode,
                             (UObject *)pUVar2,L"SetVertexColorFromVertexIndicesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86cdb0

void __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::SerializeInternal
          (FSetVertexColorFromVertexIndicesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode,
                         (UObject *)pUVar1,L"SetVertexColorFromVertexIndicesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86ce2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86ce40

FName __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::GetDisplayName
          (FSetVertexColorFromVertexIndicesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetVertexColorFromVertexIndices");
  return in_RDX;
}

// GetCategory @ 14e86ce70

FName __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::GetCategory
          (FSetVertexColorFromVertexIndicesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection|Utilities");
  return in_RDX;
}

// GetTags @ 14e86cea0

FString * __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::GetTags
          (FSetVertexColorFromVertexIndicesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86ced0

UScriptStruct * __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::TypedScriptStruct
          (FSetVertexColorFromVertexIndicesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode,
                         (UObject *)pUVar1,L"SetVertexColorFromVertexIndicesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e86d0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::Evaluate
          (FSetVertexColorFromVertexIndicesDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  FManagedArrayCollection *pFVar11;
  FDataflowInput *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FName *pFVar13;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar14;
  TManagedArray<FLinearColor> *pTVar15;
  FValueType *this_01;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [8];
  FContext *local_140;
  FName local_138;
  FName local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  FConnectionReference local_118;
  FName local_100;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_140 = param_1;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar10 == &this->Collection) {
    pFVar11 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar11);
    iVar8 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::VerticesGroup);
    local_118.Index = -1;
    local_118.ContainerReference = (void *)0x0;
    local_118.Reference = &this->VertexIndicesIn;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
    pTVar12 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (this_00,param_1,&this->VertexIndicesIn);
    FVar6 = FGeometryCollection::VerticesGroup;
    pFVar13 = ::FName::FName(&local_100,"Color");
    local_130 = FVar6;
    local_138 = *pFVar13;
    pTVar14 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&local_f8.Map,(TTuple<FName,FName> *)&local_138);
    this_01 = (FValueType *)&pTVar14->field_0x10;
    if (pTVar14 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      this_01 = (FValueType *)0x0;
    }
    if ((this_01 != (FValueType *)0x0) &&
       (pTVar15 = FManagedArrayCollection::FValueType::ModifyTypedPtr<FLinearColor>(this_01),
       pTVar15 != (TManagedArray<FLinearColor> *)0x0)) {
      pFVar16 = (pTVar12->AllocatorInstance).Data;
      iVar3 = pTVar12->ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar3 * 4;
      while( true ) {
        if (pTVar12->ArrayNum != iVar3) {
          local_148[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_148);
        }
        param_1 = local_140;
        if (pFVar16 == pFVar1) break;
        uVar4 = *(uint *)pFVar16;
        if ((-1 < (int)uVar4) && ((int)uVar4 < iVar8)) {
          local_128 = (this->SelectedColor).field0_0x0._s_0.R;
          fStack_124 = (this->SelectedColor).field0_0x0._s_0.G;
          fStack_120 = (this->SelectedColor).field0_0x0._s_0.B;
          fStack_11c = (this->SelectedColor).field0_0x0._s_0.A;
          uVar9 = 0;
          if ((int)uVar4 < *(int *)&pTVar15->field_0x18) {
            uVar9 = ~uVar4 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (local_158 = (longlong)(int)uVar4, local_150 = (longlong)*(int *)&pTVar15->field_0x18,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pfVar2 = (float *)(*(longlong *)&pTVar15->field_0x10 + (longlong)(int)uVar4 * 0x10);
          *pfVar2 = local_128;
          pfVar2[1] = fStack_124;
          pfVar2[2] = fStack_120;
          pfVar2[3] = fStack_11c;
        }
        pFVar16 = pFVar16 + 4;
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,&this->Collection);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FSetVertexColorFromVertexIndicesDataflowNode @ 14e92bda0

FSetVertexColorFromVertexIndicesDataflowNode * __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::FSetVertexColorFromVertexIndicesDataflowNode
          (FSetVertexColorFromVertexIndicesDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FSetVertexColorFromVertexIndicesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  (this->VertexIndicesIn).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexIndicesIn).ArrayNum = 0;
  (this->VertexIndicesIn).ArrayMax = 0;
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
  local_58.Reference = &this->VertexIndicesIn;
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

// FSetVertexColorFromVertexIndicesDataflowNode @ 14e92bef0

FSetVertexColorFromVertexIndicesDataflowNode * __thiscall
FSetVertexColorFromVertexIndicesDataflowNode::FSetVertexColorFromVertexIndicesDataflowNode
          (FSetVertexColorFromVertexIndicesDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSetVertexColorFromVertexIndicesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->VertexIndicesIn).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexIndicesIn).ArrayNum = 0;
  (this->VertexIndicesIn).ArrayMax = 0;
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

