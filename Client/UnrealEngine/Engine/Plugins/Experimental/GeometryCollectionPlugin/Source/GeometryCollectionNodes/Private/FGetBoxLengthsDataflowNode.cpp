// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e891f20

UScriptStruct * __cdecl FGetBoxLengthsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoxLengthsDataflowNode,(UObject *)pUVar1,
                         L"GetBoxLengthsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton;
}

// GetType @ 14e891fb0

FName __thiscall FGetBoxLengthsDataflowNode::GetType(FGetBoxLengthsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetBoxLengthsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8920a0

bool __thiscall FGetBoxLengthsDataflowNode::IsA(FGetBoxLengthsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetBoxLengthsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e892108;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e892108:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e892126;
      }
    }
  }
  bVar5 = true;
LAB_14e892126:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e892160

FStructOnScope * __thiscall
FGetBoxLengthsDataflowNode::NewStructOnScope(FGetBoxLengthsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetBoxLengthsDataflowNode,(UObject *)pUVar2,
                           L"GetBoxLengthsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8922f0

void __thiscall
FGetBoxLengthsDataflowNode::SerializeInternal(FGetBoxLengthsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoxLengthsDataflowNode,(UObject *)pUVar1,
                         L"GetBoxLengthsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89236d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8923c0

FName __thiscall FGetBoxLengthsDataflowNode::GetDisplayName(FGetBoxLengthsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetBoxLengths");
  return in_RDX;
}

// GetCategory @ 14e892430

FName __thiscall FGetBoxLengthsDataflowNode::GetCategory(FGetBoxLengthsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Box");
  return in_RDX;
}

// GetTags @ 14e892460

FString * __thiscall
FGetBoxLengthsDataflowNode::GetTags
          (FGetBoxLengthsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e892490

UScriptStruct * __thiscall
FGetBoxLengthsDataflowNode::TypedScriptStruct(FGetBoxLengthsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoxLengthsDataflowNode,(UObject *)pUVar1,
                         L"GetBoxLengthsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetBoxLengthsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e892810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGetBoxLengthsDataflowNode::Evaluate
          (FGetBoxLengthsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  FDataflowInput *this_00;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  TArray<float,TSizedDefaultAllocator<32>_> local_68;
  FConnectionReference local_58 [2];
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)puVar5 == &this->Lengths) {
    local_58[0].Reference = &this->Boxes;
    uVar8 = 0;
    local_58[0].ContainerReference = (void *)0x0;
    local_58[0].Index = -1;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,local_58);
    pTVar6 = FDataflowInput::GetValue<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                       (this_00,param_1,local_58[0].Reference);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_68,pTVar6->ArrayNum,Default);
    iVar7 = pTVar6->ArrayNum;
    uVar9 = uVar8;
    uVar11 = uVar8;
    if (0 < iVar7) {
      do {
        uVar10 = (uint)uVar11;
        uVar4 = 0;
        if ((int)uVar10 < iVar7) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (pTVar6->AllocatorInstance).Data;
        dVar14 = *(double *)(pFVar1 + uVar9 + 0x18) - *(double *)(pFVar1 + uVar9);
        dVar12 = *(double *)(pFVar1 + uVar9 + 0x20) - *(double *)(pFVar1 + uVar9 + 8);
        dVar13 = *(double *)(pFVar1 + uVar9 + 0x28) - *(double *)(pFVar1 + uVar9 + 0x10);
        switch(this->MeasurementMethod) {
        case XAxis:
          break;
        case YAxis:
          dVar14 = dVar12;
          break;
        case ZAxis:
          dVar14 = dVar13;
          break;
        case ShortestAxis:
          if (dVar12 <= dVar14) {
            dVar14 = dVar12;
          }
          if (dVar13 <= dVar14) {
            dVar14 = dVar13;
          }
          break;
        case LongestAxis:
          if (dVar14 <= dVar12) {
            dVar14 = dVar12;
          }
          if (dVar14 <= dVar13) {
            dVar14 = dVar13;
          }
          break;
        case Diagonal:
          auVar15._0_8_ = dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13;
          auVar15._8_8_ = 0;
          auVar15 = sqrtpd(auVar15,auVar15);
          dVar14 = auVar15._0_8_;
          break;
        default:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Public\\Dataflow\\GeometryCollectionNodes.h"
                             ,0x119,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar4 = 0;
        if ((int)uVar10 < local_68.ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)(local_68.AllocatorInstance.Data + uVar8 * 4) = (float)dVar14;
        uVar8 = uVar8 + 1;
        iVar7 = pTVar6->ArrayNum;
        uVar9 = uVar9 + 0x38;
        uVar11 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < iVar7);
    }
    FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_68,&this->Lengths);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

