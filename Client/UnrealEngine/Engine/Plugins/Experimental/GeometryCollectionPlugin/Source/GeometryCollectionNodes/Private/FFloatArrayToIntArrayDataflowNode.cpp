// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e838f90

UScriptStruct * __cdecl FFloatArrayToIntArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayToIntArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e839200

FName __thiscall FFloatArrayToIntArrayDataflowNode::GetType(FFloatArrayToIntArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatArrayToIntArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e839230

bool __thiscall
FFloatArrayToIntArrayDataflowNode::IsA(FFloatArrayToIntArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFloatArrayToIntArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e839298;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e839298:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8392b6;
      }
    }
  }
  bVar5 = true;
LAB_14e8392b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8392f0

FStructOnScope * __thiscall
FFloatArrayToIntArrayDataflowNode::NewStructOnScope(FFloatArrayToIntArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode,
                           (UObject *)pUVar2,L"FloatArrayToIntArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8393a0

void __thiscall
FFloatArrayToIntArrayDataflowNode::SerializeInternal
          (FFloatArrayToIntArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayToIntArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83941d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e839430

FName __thiscall
FFloatArrayToIntArrayDataflowNode::GetDisplayName(FFloatArrayToIntArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatArrayToIntArray");
  return in_RDX;
}

// GetCategory @ 14e839490

FName __thiscall
FFloatArrayToIntArrayDataflowNode::GetCategory(FFloatArrayToIntArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Conversions");
  return in_RDX;
}

// GetTags @ 14e8394c0

FString * __thiscall
FFloatArrayToIntArrayDataflowNode::GetTags
          (FFloatArrayToIntArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8395b0

UScriptStruct * __thiscall
FFloatArrayToIntArrayDataflowNode::TypedScriptStruct(FFloatArrayToIntArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayToIntArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayToIntArrayDataflowNode.OuterSingleton;
}

// Evaluate @ 14e839830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FFloatArrayToIntArrayDataflowNode::Evaluate
          (FFloatArrayToIntArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  EFloatArrayToIntArrayFunctionEnum EVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<int,TSizedDefaultAllocator<32>_> local_48 [2];
  
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar7 != &this->IntArray) {
    return;
  }
  pTVar8 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                     ((FDataflowNode *)this,param_1,&this->FloatArray);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = pTVar8->ArrayNum;
  lVar11 = (longlong)local_50;
  _Src = (pTVar8->AllocatorInstance).Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,_Src,lVar11 << 2);
  }
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(local_48,local_50,Default);
  fVar2 = __real_3f000000;
  fVar1 = __real_bf000000;
  EVar3 = this->Function;
  if (EVar3 == Dataflow_FloatToInt_Function_Floor) {
    uVar10 = 0;
    if (0 < local_50) {
      lVar11 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar10 < local_50) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)(local_58.Data + lVar11);
        uVar12 = 0;
        if ((int)uVar10 < local_48[0].ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(int *)(local_48[0].AllocatorInstance.Data + lVar11) =
             (int)ROUND((fVar1 + fVar1) - fVar2) >> 1;
        lVar11 = lVar11 + 4;
      } while ((int)uVar10 < local_50);
    }
  }
  else if (EVar3 == Dataflow_FloatToInt_Function_Ceil) {
    uVar10 = 0;
    if (0 < local_50) {
      lVar11 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar10 < local_50) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar2 = *(float *)(local_58.Data + lVar11);
        uVar12 = 0;
        if ((int)uVar10 < local_48[0].ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(int *)(local_48[0].AllocatorInstance.Data + lVar11) =
             -((int)ROUND(fVar1 - (fVar2 + fVar2)) >> 1);
        lVar11 = lVar11 + 4;
      } while ((int)uVar10 < local_50);
    }
  }
  else if (EVar3 == Dataflow_FloatToInt_Function_Round) {
    uVar10 = 0;
    if (0 < local_50) {
      lVar11 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar10 < local_50) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = *(float *)(local_58.Data + lVar11);
        uVar12 = 0;
        if ((int)uVar10 < local_48[0].ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(int *)(local_48[0].AllocatorInstance.Data + lVar11) =
             (int)ROUND(fVar1 + fVar1 + fVar2) >> 1;
        lVar11 = lVar11 + 4;
      } while ((int)uVar10 < local_50);
    }
  }
  else if (EVar3 == Dataflow_FloatToInt_Function_Truncate) {
    uVar10 = 0;
    if (0 < local_50) {
      lVar11 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar10 < local_50) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        auVar14 = roundps(ZEXT416(*(uint *)(local_58.Data + lVar11)),
                          ZEXT416(*(uint *)(local_58.Data + lVar11)),3);
        uVar12 = 0;
        if ((int)uVar10 < local_48[0].ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(int *)(local_48[0].AllocatorInstance.Data + lVar11) = (int)auVar14._0_4_;
        lVar11 = lVar11 + 4;
      } while ((int)uVar10 < local_50);
    }
  }
  else {
    if (EVar3 == Dataflow_FloatToInt_NonZeroToIndex) {
      uVar12 = 0;
      uVar10 = 0;
      if (0 < local_50) {
        lVar13 = 0;
        lVar11 = 0;
        iVar9 = local_50;
        do {
          uVar6 = 0;
          if ((int)uVar10 < iVar9) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             iVar9 = local_50, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(float *)(local_58.Data + lVar11) != 0.0) {
            uVar6 = 0;
            if ((int)uVar12 < local_48[0].ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar12 = uVar12 + 1;
            *(uint *)(local_48[0].AllocatorInstance.Data + lVar13) = uVar10;
            lVar13 = lVar13 + 4;
            iVar9 = local_50;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 4;
        } while ((int)uVar10 < iVar9);
      }
    }
    else {
      if (EVar3 != Dataflow_FloatToInt_ZeroToIndex) goto LAB_14e839e6c;
      uVar12 = 0;
      uVar10 = 0;
      if (0 < local_50) {
        lVar13 = 0;
        lVar11 = 0;
        iVar9 = local_50;
        do {
          uVar6 = 0;
          if ((int)uVar10 < iVar9) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             iVar9 = local_50, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(float *)(local_58.Data + lVar11) == 0.0) {
            uVar6 = 0;
            if ((int)uVar12 < local_48[0].ArrayNum) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar12 = uVar12 + 1;
            *(uint *)(local_48[0].AllocatorInstance.Data + lVar13) = uVar10;
            lVar13 = lVar13 + 4;
            iVar9 = local_50;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 4;
        } while ((int)uVar10 < iVar9);
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(local_48,uVar12,Default);
  }
LAB_14e839e6c:
  FDataflowNode::
  SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,local_48,&this->IntArray);
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

