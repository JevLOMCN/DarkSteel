// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 11

// StaticStruct @ 14e969040

UScriptStruct * __cdecl FSetVertexColorInCollectionFromFloatArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
                         ,(UObject *)pUVar1,L"SetVertexColorInCollectionFromFloatArrayDataflowNode")
    ;
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
         OuterSingleton;
}

// GetType @ 14e969080

FName __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::GetType
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetVertexColorInCollectionFromFloatArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e9690b0

bool __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::IsA
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetVertexColorInCollectionFromFloatArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e969118;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e969118:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e969136;
      }
    }
  }
  bVar5 = true;
LAB_14e969136:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e969170

FStructOnScope * __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::NewStructOnScope
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
      Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
                           ,(UObject *)pUVar2,
                           L"SetVertexColorInCollectionFromFloatArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e9691f0

void __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::SerializeInternal
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
                         ,(UObject *)pUVar1,L"SetVertexColorInCollectionFromFloatArrayDataflowNode")
    ;
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
             .OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
             .OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e96926d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e969280

FName __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::GetDisplayName
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetVertexColorInCollectionFromFloatArray");
  return in_RDX;
}

// GetCategory @ 14e9692b0

FName __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::GetCategory
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection|Utilities");
  return in_RDX;
}

// GetTags @ 14e9692e0

FString * __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::GetTags
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e969310

UScriptStruct * __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::TypedScriptStruct
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
                         ,(UObject *)pUVar1,L"SetVertexColorInCollectionFromFloatArrayDataflowNode")
    ;
  }
  return Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e969350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::Evaluate
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  code *pcVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  FDataflowInput *pFVar14;
  FManagedArrayCollection *pFVar15;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar16;
  FName *pFVar17;
  TManagedArray<FLinearColor> *pTVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  FContext *local_168;
  FConnectionReference local_160;
  FConnectionReference local_148;
  FName local_130;
  FManagedArrayCollection local_128;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168 = param_1;
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar13 == &this->Collection) {
    local_160.ContainerReference = (void *)0x0;
    local_160.Index = -1;
    local_160.Reference = &this->Collection;
    pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_160);
    pFVar15 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar14,param_1,local_160.Reference)
    ;
    FManagedArrayCollection::FManagedArrayCollection(&local_128,pFVar15);
    local_148.Reference = &this->FloatArray;
    local_148.Index = -1;
    local_148.ContainerReference = (void *)0x0;
    pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
    pTVar16 = FDataflowInput::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                        (pFVar14,param_1,local_148.Reference);
    iVar11 = FManagedArrayCollection::NumElements(&local_128,FGeometryCollection::VerticesGroup);
    FVar9 = FGeometryCollection::VerticesGroup;
    if (pTVar16->ArrayNum == iVar11) {
      pFVar17 = ::FName::FName(&local_130,"Color");
      pTVar18 = FManagedArrayCollection::FindAttribute<FLinearColor>(&local_128,*pFVar17,FVar9);
      if ((pTVar18 != (TManagedArray<FLinearColor> *)0x0) && (uVar19 = 0, 0 < iVar11)) {
        lVar20 = 0;
        lVar21 = 0;
        do {
          uVar22 = ~uVar19 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar19 < pTVar16->ArrayNum) {
            uVar12 = uVar22;
          }
          if (uVar12 == 0) {
            local_178 = (longlong)(int)uVar19;
            local_170 = (longlong)pTVar16->ArrayNum;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          fVar1 = *(float *)((pTVar16->AllocatorInstance).Data + lVar20 * 4);
          fVar2 = this->Scale;
          uVar12 = 0;
          if ((int)uVar19 < pTVar16->ArrayNum) {
            uVar12 = uVar22;
          }
          if (uVar12 == 0) {
            local_178 = (longlong)(int)uVar19;
            local_170 = (longlong)pTVar16->ArrayNum;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          fVar3 = *(float *)((pTVar16->AllocatorInstance).Data + lVar20 * 4);
          fVar4 = this->Scale;
          uVar12 = 0;
          if ((int)uVar19 < pTVar16->ArrayNum) {
            uVar12 = uVar22;
          }
          if (uVar12 == 0) {
            local_178 = (longlong)(int)uVar19;
            local_170 = (longlong)pTVar16->ArrayNum;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          fVar5 = *(float *)((pTVar16->AllocatorInstance).Data + lVar20 * 4);
          fVar6 = this->Scale;
          uVar12 = 0;
          if ((int)uVar19 < *(int *)&pTVar18->field_0x18) {
            uVar12 = uVar22;
          }
          if (uVar12 == 0) {
            local_178 = (longlong)(int)uVar19;
            local_170 = (longlong)*(int *)&pTVar18->field_0x18;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          lVar7 = *(longlong *)&pTVar18->field_0x10;
          uVar19 = uVar19 + 1;
          lVar20 = lVar20 + 1;
          *(float *)(lVar7 + lVar21) = fVar5 * fVar6;
          *(float *)(lVar7 + 4 + lVar21) = fVar3 * fVar4;
          *(float *)(lVar7 + 8 + lVar21) = fVar1 * fVar2;
          *(undefined4 *)(lVar7 + 0xc + lVar21) = 0x3f800000;
          lVar21 = lVar21 + 0x10;
          param_1 = local_168;
        } while (lVar20 < iVar11);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_128,&this->Collection);
    FManagedArrayCollection::~FManagedArrayCollection(&local_128);
  }
  return;
}

// FSetVertexColorInCollectionFromFloatArrayDataflowNode @ 14e96b750

FSetVertexColorInCollectionFromFloatArrayDataflowNode * __thiscall
FSetVertexColorInCollectionFromFloatArrayDataflowNode::
FSetVertexColorInCollectionFromFloatArrayDataflowNode
          (FSetVertexColorInCollectionFromFloatArrayDataflowNode *this,FNodeParameters *param_1,
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
  this->_padding_ = (longlong)&___7FSetVertexColorInCollectionFromFloatArrayDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this->Scale = 1.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
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

