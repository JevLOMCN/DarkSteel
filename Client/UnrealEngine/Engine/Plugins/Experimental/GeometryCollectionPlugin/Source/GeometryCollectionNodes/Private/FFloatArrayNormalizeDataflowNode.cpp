// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e84e300

UScriptStruct * __cdecl FFloatArrayNormalizeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayNormalizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton;
}

// GetType @ 14e84e860

FName __thiscall FFloatArrayNormalizeDataflowNode::GetType(FFloatArrayNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatArrayNormalizeDataflowNode");
  return in_RDX;
}

// IsA @ 14e84e8d0

bool __thiscall
FFloatArrayNormalizeDataflowNode::IsA(FFloatArrayNormalizeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFloatArrayNormalizeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84e938;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84e938:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84e956;
      }
    }
  }
  bVar5 = true;
LAB_14e84e956:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84e990

FStructOnScope * __thiscall
FFloatArrayNormalizeDataflowNode::NewStructOnScope(FFloatArrayNormalizeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode,
                           (UObject *)pUVar2,L"FloatArrayNormalizeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84ea10

void __thiscall
FFloatArrayNormalizeDataflowNode::SerializeInternal
          (FFloatArrayNormalizeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayNormalizeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84ea8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84eb50

FName __thiscall
FFloatArrayNormalizeDataflowNode::GetDisplayName(FFloatArrayNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatArrayNormalize");
  return in_RDX;
}

// GetCategory @ 14e84eb80

FName __thiscall
FFloatArrayNormalizeDataflowNode::GetCategory(FFloatArrayNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e84ebf0

FString * __thiscall
FFloatArrayNormalizeDataflowNode::GetTags
          (FFloatArrayNormalizeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84ecd0

UScriptStruct * __thiscall
FFloatArrayNormalizeDataflowNode::TypedScriptStruct(FFloatArrayNormalizeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayNormalizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayNormalizeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e84f190

void __thiscall
FFloatArrayNormalizeDataflowNode::Evaluate
          (FFloatArrayNormalizeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 *puVar9;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar10;
  FDataflowSelection *this_00;
  FDataflowInput *pFVar11;
  float *pfVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float local_res8 [2];
  FContext *local_res10;
  TArray<float,TSizedDefaultAllocator<32>_> local_f8;
  TArray<float,TSizedDefaultAllocator<32>_> local_e8;
  FConnectionReference local_d8;
  FConnectionReference local_c0;
  FConnectionReference local_a8 [4];
  
  local_res10 = param_1;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)puVar9 != &this->OutFloatArray) {
    return;
  }
  pTVar10 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                      ((FDataflowNode *)this,param_1,&this->InFloatArray);
  this_00 = (FDataflowSelection *)
            FDataflowNode::GetValue<FDataflowVertexSelection>
                      ((FDataflowNode *)this,param_1,&this->Selection);
  local_d8.Reference = &this->MinRange;
  local_d8.Index = -1;
  local_d8.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d8);
  pfVar12 = FDataflowInput::GetValue<float>(pFVar11,param_1,local_d8.Reference);
  local_c0.Index = -1;
  local_c0.ContainerReference = (void *)0x0;
  fVar2 = *pfVar12;
  local_c0.Reference = &this->MaxRange;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c0);
  pfVar12 = FDataflowInput::GetValue<float>(pFVar11,param_1,local_c0.Reference);
  iVar5 = (this->InFloatArray).ArrayNum;
  lVar15 = (longlong)iVar5;
  local_res8[0] = 0.0;
  fVar3 = *pfVar12;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_f8,local_res8,iVar5);
  local_a8[0].Index = -1;
  local_a8[0].ContainerReference = (void *)0x0;
  local_a8[0].Reference = &this->Selection;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,local_a8);
  if (pFVar11->Connection == (FDataflowOutput *)0x0) {
    uVar14 = 0;
    if (0 < lVar15) {
      lVar19 = 0;
      fVar21 = __real_3089705f;
      fVar20 = __real_4e6e6b28;
      do {
        uVar16 = ~uVar14 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar14 < pTVar10->ArrayNum) {
          uVar18 = uVar16;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (pTVar10->AllocatorInstance).Data + lVar19 * 4;
        if (*(float *)pFVar1 <= fVar20 && fVar20 != *(float *)pFVar1) {
          uVar18 = 0;
          if ((int)uVar14 < pTVar10->ArrayNum) {
            uVar18 = uVar16;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar20 = *(float *)((pTVar10->AllocatorInstance).Data + lVar19 * 4);
        }
        uVar18 = 0;
        if ((int)uVar14 < pTVar10->ArrayNum) {
          uVar18 = uVar16;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (fVar21 < *(float *)((pTVar10->AllocatorInstance).Data + lVar19 * 4)) {
          uVar18 = 0;
          if ((int)uVar14 < pTVar10->ArrayNum) {
            uVar18 = uVar16;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar21 = *(float *)((pTVar10->AllocatorInstance).Data + lVar19 * 4);
        }
        uVar14 = uVar14 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar19 < lVar15);
      uVar14 = 0;
      lVar19 = 0;
      fVar21 = __real_3f800000 / (fVar21 - fVar20);
      do {
        uVar16 = ~uVar14 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar14 < local_f8.ArrayNum) {
          uVar18 = uVar16;
        }
        if (uVar18 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        fVar4 = *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4);
        uVar18 = 0;
        if ((int)uVar14 < local_f8.ArrayNum) {
          uVar18 = uVar16;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4) = (fVar4 - fVar20) * fVar21;
        uVar18 = 0;
        if ((int)uVar14 < local_f8.ArrayNum) {
          uVar18 = uVar16;
        }
        if (uVar18 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        fVar4 = *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4);
        uVar18 = 0;
        if ((int)uVar14 < local_f8.ArrayNum) {
          uVar18 = uVar16;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4) = (fVar3 - fVar2) * fVar4 + fVar2;
        lVar19 = lVar19 + 1;
        param_1 = local_res10;
      } while (lVar19 < lVar15);
    }
  }
  else {
    if (pTVar10->ArrayNum != (this_00->SelectionArray).NumBits) {
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_e8,&this->OutFloatArray);
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      goto LAB_14e84f9c0;
    }
    uVar14 = 0;
    if (0 < lVar15) {
      lVar19 = 0;
      fVar20 = __real_4e6e6b28;
      fVar21 = __real_3089705f;
      do {
        bVar8 = FDataflowSelection::IsSelected(this_00,uVar14);
        if (bVar8) {
          uVar16 = ~uVar14 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar14 < pTVar10->ArrayNum) {
            uVar18 = uVar16;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar1 = (pTVar10->AllocatorInstance).Data + lVar19 * 4;
          if (*(float *)pFVar1 <= fVar20 && fVar20 != *(float *)pFVar1) {
            uVar18 = 0;
            if ((int)uVar14 < pTVar10->ArrayNum) {
              uVar18 = uVar16;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar20 = *(float *)((pTVar10->AllocatorInstance).Data + lVar19 * 4);
          }
          uVar18 = 0;
          if ((int)uVar14 < pTVar10->ArrayNum) {
            uVar18 = uVar16;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (fVar21 < *(float *)((pTVar10->AllocatorInstance).Data + lVar19 * 4)) {
            uVar18 = 0;
            if ((int)uVar14 < pTVar10->ArrayNum) {
              uVar18 = uVar16;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar21 = *(float *)((pTVar10->AllocatorInstance).Data + lVar19 * 4);
          }
        }
        uVar14 = uVar14 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar19 < lVar15);
      uVar14 = 0;
      uVar18 = 1;
      lVar19 = 0;
      do {
        if ((((int)uVar14 < 0) || ((this_00->SelectionArray).NumBits <= (int)uVar14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar6 = (this_00->SelectionArray).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<unsigned_int>)&this_00->SelectionArray;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = FVar6;
        }
        uVar16 = uVar14;
        if ((int)uVar14 < 0) {
          uVar16 = uVar14 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar13 + (longlong)((int)uVar16 >> 5) * 4) & uVar18) != 0) {
          uVar17 = ~uVar14 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar14 < local_f8.ArrayNum) {
            uVar16 = uVar17;
          }
          if (uVar16 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          fVar4 = *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4);
          uVar16 = 0;
          if ((int)uVar14 < local_f8.ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4) =
               (fVar4 - fVar20) / (fVar21 - fVar20);
          uVar16 = 0;
          if ((int)uVar14 < local_f8.ArrayNum) {
            uVar16 = uVar17;
          }
          if (uVar16 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          fVar4 = *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4);
          uVar16 = 0;
          if ((int)uVar14 < local_f8.ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)(local_f8.AllocatorInstance.Data + lVar19 * 4) = (fVar3 - fVar2) * fVar4 + fVar2
          ;
        }
        uVar14 = uVar14 + 1;
        uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
        lVar19 = lVar19 + 1;
        param_1 = local_res10;
      } while (lVar19 < lVar15);
    }
  }
  FDataflowNode::
  SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_f8,&this->OutFloatArray);
LAB_14e84f9c0:
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// FFloatArrayNormalizeDataflowNode @ 14e91d320

FFloatArrayNormalizeDataflowNode * __thiscall
FFloatArrayNormalizeDataflowNode::FFloatArrayNormalizeDataflowNode
          (FFloatArrayNormalizeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowVertexSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_68.Reference = &this->InFloatArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar1 = &this->Selection;
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FFloatArrayNormalizeDataflowNode__6B_;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_68.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->InFloatArray).ArrayNum = 0;
  (this->InFloatArray).ArrayMax = 0;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->Selection).field_0x18 = 0;
  *(undefined4 *)&(this->Selection).field_0x20 = 0;
  *(undefined4 *)&(this->Selection).field_0x24 = 0x80;
  this->MinRange = 0.0;
  this->MaxRange = 1.0;
  (this->OutFloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutFloatArray).ArrayNum = 0;
  (this->OutFloatArray).ArrayMax = 0;
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
  local_68.Reference = &this->MinRange;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MaxRange;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->OutFloatArray;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// FFloatArrayNormalizeDataflowNode @ 14e91d4a0

FFloatArrayNormalizeDataflowNode * __thiscall
FFloatArrayNormalizeDataflowNode::FFloatArrayNormalizeDataflowNode
          (FFloatArrayNormalizeDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FFloatArrayNormalizeDataflowNode__6B_;
  (this->InFloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InFloatArray).ArrayNum = 0;
  (this->InFloatArray).ArrayMax = 0;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->Selection).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->Selection).field_0x4 = uVar1;
  *(undefined8 *)&(this->Selection).field_0x18 = 0;
  *(undefined4 *)&(this->Selection).field_0x20 = 0;
  *(undefined8 *)&(this->Selection).field_0x24 = 0x80;
  this->MaxRange = 1.0;
  (this->OutFloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutFloatArray).ArrayNum = 0;
  (this->OutFloatArray).ArrayMax = 0;
  return this;
}

