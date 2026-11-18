// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e852300

UScriptStruct * __cdecl FVectorArrayNormalizeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode,
                         (UObject *)pUVar1,L"VectorArrayNormalizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton;
}

// GetType @ 14e8525c0

FName __thiscall FVectorArrayNormalizeDataflowNode::GetType(FVectorArrayNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FVectorArrayNormalizeDataflowNode");
  return in_RDX;
}

// IsA @ 14e852680

bool __thiscall
FVectorArrayNormalizeDataflowNode::IsA(FVectorArrayNormalizeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FVectorArrayNormalizeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8526e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8526e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e852706;
      }
    }
  }
  bVar5 = true;
LAB_14e852706:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e852770

FStructOnScope * __thiscall
FVectorArrayNormalizeDataflowNode::NewStructOnScope(FVectorArrayNormalizeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode,
                           (UObject *)pUVar2,L"VectorArrayNormalizeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e852850

void __thiscall
FVectorArrayNormalizeDataflowNode::SerializeInternal
          (FVectorArrayNormalizeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode,
                         (UObject *)pUVar1,L"VectorArrayNormalizeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8528cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e852920

FName __thiscall
FVectorArrayNormalizeDataflowNode::GetDisplayName(FVectorArrayNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VectorArrayNormalize");
  return in_RDX;
}

// GetCategory @ 14e852950

FName __thiscall
FVectorArrayNormalizeDataflowNode::GetCategory(FVectorArrayNormalizeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vector");
  return in_RDX;
}

// GetTags @ 14e852980

FString * __thiscall
FVectorArrayNormalizeDataflowNode::GetTags
          (FVectorArrayNormalizeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8529b0

UScriptStruct * __thiscall
FVectorArrayNormalizeDataflowNode::TypedScriptStruct(FVectorArrayNormalizeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode,
                         (UObject *)pUVar1,L"VectorArrayNormalizeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVectorArrayNormalizeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e852db0

void __thiscall
FVectorArrayNormalizeDataflowNode::Evaluate
          (FVectorArrayNormalizeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  undefined1 *puVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FDataflowSelection *this_00;
  FDataflowInput *pFVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_118;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_108;
  FConnectionReference local_f8;
  FConnectionReference local_e0;
  TVector<double>_u_0 local_c8;
  double local_a0;
  
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar10 !=
      &this->OutVectorArray) {
    return;
  }
  pTVar11 = FDataflowNode::GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                      ((FDataflowNode *)this,param_1,&this->InVectorArray);
  this_00 = (FDataflowSelection *)
            FDataflowNode::GetValue<FDataflowVertexSelection>
                      ((FDataflowNode *)this,param_1,&this->Selection);
  local_f8.Reference = &this->Magnitude;
  local_f8.Index = -1;
  local_f8.ContainerReference = (void *)0x0;
  pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
  pfVar13 = FDataflowInput::GetValue<float>(pFVar12,param_1,local_f8.Reference);
  lVar15 = (longlong)pTVar11->ArrayNum;
  local_c8._s_0.Z = 0.0;
  fVar1 = *pfVar13;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_c8._s_0.X = 0.0;
  local_c8._s_0.Y = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (&local_118,(TVector<double> *)&local_c8._s_0,pTVar11->ArrayNum);
  local_e0.Index = -1;
  local_e0.ContainerReference = (void *)0x0;
  local_e0.Reference = &this->Selection;
  pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e0);
  dVar7 = __real_3e45798ee0000000;
  dVar6 = __real_3ff0000000000000;
  if (pFVar12->Connection == (FDataflowOutput *)0x0) {
    uVar14 = 0;
    if (0 < lVar15) {
      lVar16 = 0;
      dVar5 = (double)fVar1;
      do {
        uVar9 = 0;
        if ((int)uVar14 < pTVar11->ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar11->AllocatorInstance).Data;
        pFVar2 = pFVar3 + lVar16;
        dVar20 = *(double *)pFVar2;
        dVar19 = *(double *)(pFVar2 + 8);
        local_a0 = *(double *)(pFVar3 + lVar16 + 0x10);
        dVar17 = dVar19 * dVar19 + dVar20 * dVar20 + local_a0 * local_a0;
        dVar18 = local_a0;
        if (dVar7 < dVar17) {
          dVar18 = dVar6 / SQRT(dVar17);
          dVar20 = dVar20 * dVar18;
          dVar19 = dVar19 * dVar18;
          dVar18 = local_a0 * dVar18;
        }
        uVar9 = 0;
        if ((int)uVar14 < local_118.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar14 = uVar14 + 1;
        *(double *)(local_118.AllocatorInstance.Data + lVar16) = dVar20 * dVar5;
        *(double *)(local_118.AllocatorInstance.Data + lVar16 + 8) = dVar19 * dVar5;
        *(double *)(local_118.AllocatorInstance.Data + lVar16 + 0x10) = dVar18 * dVar5;
        lVar16 = lVar16 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  else {
    if (pTVar11->ArrayNum != (this_00->SelectionArray).NumBits) {
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayNum = 0;
      local_108.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_108,&this->OutVectorArray);
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      goto LAB_14e85323e;
    }
    uVar14 = 0;
    if (0 < lVar15) {
      lVar16 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < pTVar11->ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pTVar11->AllocatorInstance).Data;
        local_a0 = *(double *)(pFVar2 + lVar16 + 0x10);
        pFVar2 = pFVar2 + lVar16;
        dVar5 = *(double *)pFVar2;
        dVar20 = *(double *)(pFVar2 + 8);
        bVar8 = FDataflowSelection::IsSelected(this_00,uVar14);
        if (bVar8) {
          dVar18 = dVar20 * dVar20 + dVar5 * dVar5 + local_a0 * local_a0;
          dVar19 = local_a0;
          if (dVar7 < dVar18) {
            dVar19 = dVar6 / SQRT(dVar18);
            dVar5 = dVar5 * dVar19;
            dVar20 = dVar20 * dVar19;
            dVar19 = local_a0 * dVar19;
          }
          dVar18 = (double)fVar1;
          uVar9 = 0;
          if ((int)uVar14 < local_118.ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(double *)(local_118.AllocatorInstance.Data + lVar16) = dVar18 * dVar5;
          *(double *)(local_118.AllocatorInstance.Data + lVar16 + 8) = dVar18 * dVar20;
          *(double *)(local_118.AllocatorInstance.Data + lVar16 + 0x10) = dVar18 * dVar19;
        }
        uVar14 = uVar14 + 1;
        lVar16 = lVar16 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  FDataflowNode::
  SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_118,&this->OutVectorArray);
LAB_14e85323e:
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// FVectorArrayNormalizeDataflowNode @ 14e9312d0

FVectorArrayNormalizeDataflowNode * __thiscall
FVectorArrayNormalizeDataflowNode::FVectorArrayNormalizeDataflowNode
          (FVectorArrayNormalizeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowVertexSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_58.Reference = &this->InVectorArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar1 = &this->Selection;
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FVectorArrayNormalizeDataflowNode__6B_;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_58.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InVectorArray).ArrayNum = 0;
  (this->InVectorArray).ArrayMax = 0;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->Selection).field_0x18 = 0;
  *(undefined4 *)&(this->Selection).field_0x20 = 0;
  *(undefined4 *)&(this->Selection).field_0x24 = 0x80;
  this->Magnitude = 1.0;
  (this->OutVectorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutVectorArray).ArrayNum = 0;
  (this->OutVectorArray).ArrayMax = 0;
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
  local_58.Reference = &this->Magnitude;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->OutVectorArray;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FVectorArrayNormalizeDataflowNode @ 14e931430

FVectorArrayNormalizeDataflowNode * __thiscall
FVectorArrayNormalizeDataflowNode::FVectorArrayNormalizeDataflowNode
          (FVectorArrayNormalizeDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FVectorArrayNormalizeDataflowNode__6B_;
  (this->InVectorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InVectorArray).ArrayNum = 0;
  (this->InVectorArray).ArrayMax = 0;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->Selection).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->Selection).field_0x4 = uVar1;
  *(undefined8 *)&(this->Selection).field_0x18 = 0;
  *(undefined4 *)&(this->Selection).field_0x20 = 0;
  *(undefined4 *)&(this->Selection).field_0x24 = 0x80;
  this->Magnitude = 1.0;
  (this->OutVectorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutVectorArray).ArrayNum = 0;
  (this->OutVectorArray).ArrayMax = 0;
  return this;
}

