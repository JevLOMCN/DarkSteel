// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8699d0

UScriptStruct * __cdecl FSetVertexColorFromFloatArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"SetVertexColorFromFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e869aa0

FName __thiscall
FSetVertexColorFromFloatArrayDataflowNode::GetType(FSetVertexColorFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetVertexColorFromFloatArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e869ad0

bool __thiscall
FSetVertexColorFromFloatArrayDataflowNode::IsA
          (FSetVertexColorFromFloatArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetVertexColorFromFloatArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e869b38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e869b38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e869b56;
      }
    }
  }
  bVar5 = true;
LAB_14e869b56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e869c00

FStructOnScope * __thiscall
FSetVertexColorFromFloatArrayDataflowNode::NewStructOnScope
          (FSetVertexColorFromFloatArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode,
                           (UObject *)pUVar2,L"SetVertexColorFromFloatArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e869d40

void __thiscall
FSetVertexColorFromFloatArrayDataflowNode::SerializeInternal
          (FSetVertexColorFromFloatArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"SetVertexColorFromFloatArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e869dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e869e50

FName __thiscall
FSetVertexColorFromFloatArrayDataflowNode::GetDisplayName
          (FSetVertexColorFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetVertexColorFromFloatArray");
  return in_RDX;
}

// GetCategory @ 14e869e80

FName __thiscall
FSetVertexColorFromFloatArrayDataflowNode::GetCategory
          (FSetVertexColorFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection|Utilities");
  return in_RDX;
}

// GetTags @ 14e869f40

FString * __thiscall
FSetVertexColorFromFloatArrayDataflowNode::GetTags
          (FSetVertexColorFromFloatArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e869fa0

UScriptStruct * __thiscall
FSetVertexColorFromFloatArrayDataflowNode::TypedScriptStruct
          (FSetVertexColorFromFloatArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"SetVertexColorFromFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton;
}

// Evaluate @ 14e86a540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetVertexColorFromFloatArrayDataflowNode::Evaluate
          (FSetVertexColorFromFloatArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  EManagedArrayType *pEVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  FManagedArrayCollection *pFVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  FName *pFVar14;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar15;
  TManagedArrayBase<FLinearColor> *this_00;
  FValueType *pFVar16;
  uint uVar17;
  FValueType *pFVar18;
  FValueType *pFVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  FContext *local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FManagedArrayCollection local_118;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138 = param_1;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar11 == &this->Collection) {
    pFVar12 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_118,pFVar12);
    pTVar13 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->FloatArray);
    iVar9 = FManagedArrayCollection::NumElements(&local_118,FGeometryCollection::VerticesGroup);
    fVar6 = __real_3f800000;
    if (pTVar13->ArrayNum == iVar9) {
      pFVar18 = (FValueType *)0x0;
      fVar22 = 0.0;
      lVar20 = (longlong)iVar9;
      fVar21 = __real_3f800000;
      if ((this->bNormalizeInput != false) &&
         (pFVar16 = pFVar18, pFVar19 = pFVar18, fVar21 = fVar22, 0 < iVar9)) {
        do {
          uVar17 = (uint)pFVar16;
          uVar10 = 0;
          if ((int)uVar17 < pTVar13->ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_148 = (longlong)(int)uVar17;
            local_140 = (longlong)pTVar13->ArrayNum;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          fVar21 = *(float *)((pTVar13->AllocatorInstance).Data + (longlong)pFVar19 * 4);
          pFVar19 = (FValueType *)&pFVar19->field_0x1;
          if (fVar21 <= fVar22) {
            fVar21 = fVar22;
          }
          pFVar16 = (FValueType *)(ulonglong)(uVar17 + 1);
          fVar22 = fVar21;
        } while ((longlong)pFVar19 < lVar20);
      }
      FVar7 = FGeometryCollection::VerticesGroup;
      pFVar14 = ::FName::FName(&local_120,"Color");
      local_128 = FVar7;
      local_130 = *pFVar14;
      pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_118.Map,(TTuple<FName,FName> *)&local_130);
      pFVar16 = (FValueType *)&pTVar15->field_0x10;
      if (pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar16 = pFVar18;
      }
      if ((pFVar16 != (FValueType *)0x0) &&
         (this_00 = (TManagedArrayBase<FLinearColor> *)
                    FManagedArrayCollection::FValueType::ModifyTypedPtr<FLinearColor>(pFVar16),
         this_00 != (TManagedArrayBase<FLinearColor> *)0x0)) {
        if (__real_322bcc77 < (float)((uint)fVar21 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (0 < lVar20) {
            pFVar16 = pFVar18;
            pFVar19 = pFVar18;
            do {
              uVar17 = (uint)pFVar18;
              uVar10 = 0;
              if ((int)uVar17 < pTVar13->ArrayNum) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if (uVar10 == 0) {
                local_148 = (longlong)(int)uVar17;
                local_140 = (longlong)pTVar13->ArrayNum;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              iVar9 = (this_00->Array).ArrayNum;
              fVar22 = (this->Color).field0_0x0._s_0.R;
              fVar3 = (this->Color).field0_0x0._s_0.G;
              fVar4 = (this->Color).field0_0x0._s_0.B;
              fVar5 = (this->Color).field0_0x0._s_0.A;
              fVar23 = (fVar6 / fVar21) *
                       *(float *)((pTVar13->AllocatorInstance).Data + (longlong)pFVar19 * 4);
              uVar10 = 0;
              if ((int)uVar17 < iVar9) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if (uVar10 == 0) {
                local_148 = (longlong)(int)uVar17;
                local_140 = (longlong)iVar9;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              pFVar18 = (FValueType *)(ulonglong)(uVar17 + 1);
              pFVar19 = (FValueType *)&pFVar19->field_0x1;
              pEVar1 = &pFVar16->ArrayType + (longlong)(this_00->Array).AllocatorInstance.Data;
              *(float *)pEVar1 = fVar23 * fVar22;
              (((FName *)(pEVar1 + 4))->ComparisonIndex).Value = (uint)(fVar23 * fVar3);
              *(float *)(pEVar1 + 8) = fVar23 * fVar4;
              *(float *)(pEVar1 + 0xc) = fVar23 * fVar5;
              pFVar16 = (FValueType *)&pFVar16->SharedManagedArray;
              param_1 = local_138;
            } while ((longlong)pFVar19 < lVar20);
          }
        }
        else {
          TManagedArrayBase<FLinearColor>::Fill(this_00,&FLinearColor::Black);
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_118,&this->Collection);
    FManagedArrayCollection::~FManagedArrayCollection(&local_118);
  }
  return;
}

// FSetVertexColorFromFloatArrayDataflowNode @ 14e92bba0

FSetVertexColorFromFloatArrayDataflowNode * __thiscall
FSetVertexColorFromFloatArrayDataflowNode::FSetVertexColorFromFloatArrayDataflowNode
          (FSetVertexColorFromFloatArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FSetVertexColorFromFloatArrayDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this->bNormalizeInput = true;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  (this->Color).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R]
  ;
  (this->Color).field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G]
  ;
  (this->Color).field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B]
  ;
  (this->Color).field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FloatArray;
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

// FSetVertexColorFromFloatArrayDataflowNode @ 14e92bd00

FSetVertexColorFromFloatArrayDataflowNode * __thiscall
FSetVertexColorFromFloatArrayDataflowNode::FSetVertexColorFromFloatArrayDataflowNode
          (FSetVertexColorFromFloatArrayDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSetVertexColorFromFloatArrayDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->bNormalizeInput = true;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  (this->Color).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R]
  ;
  (this->Color).field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G]
  ;
  (this->Color).field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B]
  ;
  (this->Color).field0_0x0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  return this;
}

