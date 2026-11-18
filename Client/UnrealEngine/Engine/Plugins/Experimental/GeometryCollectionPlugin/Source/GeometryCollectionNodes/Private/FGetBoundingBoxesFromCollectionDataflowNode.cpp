// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8aa0c0

UScriptStruct * __cdecl FGetBoundingBoxesFromCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetBoundingBoxesFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8aa130

FName __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::GetType
          (FGetBoundingBoxesFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetBoundingBoxesFromCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8aa1f0

bool __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::IsA
          (FGetBoundingBoxesFromCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetBoundingBoxesFromCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8aa258;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8aa258:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8aa276;
      }
    }
  }
  bVar5 = true;
LAB_14e8aa276:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8aa2f0

FStructOnScope * __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::NewStructOnScope
          (FGetBoundingBoxesFromCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode,
                           (UObject *)pUVar2,L"GetBoundingBoxesFromCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8aa370

void __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::SerializeInternal
          (FGetBoundingBoxesFromCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetBoundingBoxesFromCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8aa3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8aa510

FName __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::GetDisplayName
          (FGetBoundingBoxesFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetBoundingBoxesFromCollection");
  return in_RDX;
}

// GetCategory @ 14e8aa540

FName __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::GetCategory
          (FGetBoundingBoxesFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8aa5b0

FString * __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::GetTags
          (FGetBoundingBoxesFromCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8aa610

UScriptStruct * __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::TypedScriptStruct
          (FGetBoundingBoxesFromCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetBoundingBoxesFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetBoundingBoxesFromCollectionDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8aa930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::Evaluate
          (FGetBoundingBoxesFromCollectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  FDataflowTransformSelection *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  FManagedArrayCollection *pFVar13;
  TMatrix<double> *pTVar14;
  FDataflowInput *pFVar15;
  FDataflowOutput *this_00;
  FTimestamp FVar16;
  FGuid *pFVar17;
  ulong64 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStackY_4b8 [32];
  ForAnyElementType local_468;
  undefined8 local_460;
  undefined1 local_458 [8];
  undefined8 *local_450;
  FDataflowTransformSelection *local_448;
  FContext *local_440;
  FConnectionReference local_438;
  FConnectionReference local_420;
  FGuid local_400;
  FCollectionTransformFacade local_3e8;
  FBoundsFacade local_2f8;
  TVector<double>_u_0 local_198;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  TVector<double>_u_0 local_160;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  TTransform<double> local_128;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_440 = param_1;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)puVar12 == &this->BoundingBoxes)
  {
    pFVar13 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    local_448 = FDataflowNode::GetValue<FDataflowTransformSelection>
                          ((FDataflowNode *)this,param_1,&this->TransformSelection);
    GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_2f8,pFVar13);
    if ((local_2f8.BoundingBoxAttribute.ConstAttributeArray ==
         (TManagedArray<UE::Math::TBox<double>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_3e8,pFVar13);
    uVar23 = 0;
    local_468.Data = (FScriptContainerElement *)0x0;
    local_460 = 0;
    iVar10 = (**(code **)(*(longlong *)local_2f8.BoundingBoxAttribute.ConstAttributeArray + 0x60))
                       (local_2f8.BoundingBoxAttribute.ConstAttributeArray);
    pFVar8 = local_448;
    if (0 < iVar10) {
      uVar24 = 1;
      uVar25 = uVar23;
      do {
        uVar22 = (uint)uVar23;
        uVar11 = 0;
        if ((int)uVar22 < *(int *)&(local_2f8.BoundingBoxAttribute.ConstAttributeArray)->field_0x18)
        {
          uVar11 = ~uVar22 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar21 = *(longlong *)&(local_2f8.BoundingBoxAttribute.ConstAttributeArray)->field_0x10;
        local_160._s_0.X = *(double *)(lVar21 + uVar25);
        local_160._s_0.Y = ((double *)(lVar21 + uVar25))[1];
        pdVar1 = (double *)(lVar21 + 0x10 + uVar25);
        local_160._s_0.Z = *pdVar1;
        dStack_148 = pdVar1[1];
        puVar20 = (undefined8 *)(lVar21 + 0x20 + uVar25);
        local_140 = *puVar20;
        uStack_138 = puVar20[1];
        local_130 = *(undefined8 *)(lVar21 + 0x30 + uVar25);
        GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransform
                  (&local_3e8,&local_128,uVar22);
        pTVar14 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_128,&local_c8);
        UE::Math::TBox<double>::TransformBy
                  ((TBox<double> *)&local_160._s_0,(TBox<double> *)&local_198._s_0,pTVar14);
        local_438.Index = -1;
        local_438.ContainerReference = (void *)0x0;
        local_438.Reference = &this->TransformSelection;
        pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_438);
        if (pFVar15->Connection == (FDataflowOutput *)0x0) {
          if (((local_468.Data <= &local_198) &&
              (&local_198 <
               (TVector<double>_u_0 *)(local_468.Data + (longlong)local_460._4_4_ * 0x38))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = (int)local_460;
          if ((int)local_460 == local_460._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&local_468,(int *)((longlong)&local_460 + 4));
          }
          local_460 = CONCAT44(local_460._4_4_,iVar10 + 1);
          lVar21 = (longlong)iVar10 * 0x38;
          *(double *)(local_468.Data + lVar21) = local_198._s_0.X;
          *(double *)(local_468.Data + lVar21 + 8) = local_198._s_0.Y;
          *(double *)(local_468.Data + lVar21 + 0x10) = local_198._s_0.Z;
          *(double *)(local_468.Data + lVar21 + 0x10 + 8) = dStack_180;
          pFVar2 = local_468.Data + lVar21 + 0x20;
          *(undefined4 *)pFVar2 = local_178;
          *(undefined4 *)(pFVar2 + 4) = uStack_174;
          *(undefined4 *)(pFVar2 + 8) = uStack_170;
          *(undefined4 *)(pFVar2 + 0xc) = uStack_16c;
          *(undefined8 *)(local_468.Data + lVar21 + 0x30) = local_168;
        }
        else {
          if ((((int)uVar22 < 0) || (*(int *)&pFVar8->field_0x20 <= (int)uVar22)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar12 = &pFVar8->field_0x8;
          if (*(undefined1 **)&pFVar8->field_0x18 != (undefined1 *)0x0) {
            puVar12 = *(undefined1 **)&pFVar8->field_0x18;
          }
          uVar11 = uVar22;
          if ((int)uVar22 < 0) {
            uVar11 = uVar22 + 0x1f;
          }
          if ((*(uint *)(puVar12 + (longlong)((int)uVar11 >> 5) * 4) & uVar24) != 0) {
            if (((local_468.Data <= &local_198) &&
                (&local_198 <
                 (TVector<double>_u_0 *)(local_468.Data + (longlong)local_460._4_4_ * 0x38))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (int)local_460;
            if ((int)local_460 == local_460._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&local_468,(int *)((longlong)&local_460 + 4));
            }
            local_460 = CONCAT44(local_460._4_4_,iVar10 + 1);
            lVar21 = (longlong)iVar10 * 0x38;
            *(double *)(local_468.Data + lVar21) = local_198._s_0.X;
            *(double *)(local_468.Data + lVar21 + 8) = local_198._s_0.Y;
            *(double *)(local_468.Data + lVar21 + 0x10) = local_198._s_0.Z;
            *(double *)(local_468.Data + lVar21 + 0x10 + 8) = dStack_180;
            pFVar2 = local_468.Data + lVar21 + 0x20;
            *(undefined4 *)pFVar2 = local_178;
            *(undefined4 *)(pFVar2 + 4) = uStack_174;
            *(undefined4 *)(pFVar2 + 8) = uStack_170;
            *(undefined4 *)(pFVar2 + 0xc) = uStack_16c;
            *(undefined8 *)(local_468.Data + lVar21 + 0x30) = local_168;
          }
        }
        uVar23 = (ulonglong)(uVar22 + 1);
        uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
        uVar25 = uVar25 + 0x38;
        iVar10 = (**(code **)(*(longlong *)local_2f8.BoundingBoxAttribute.ConstAttributeArray + 0x60
                             ))(local_2f8.BoundingBoxAttribute.ConstAttributeArray);
        param_1 = local_440;
      } while ((int)(uVar22 + 1) < iVar10);
    }
    puVar20 = (undefined8 *)0x0;
    local_420.Reference = &this->BoundingBoxes;
    local_420.Index = -1;
    local_420.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_420);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::
      SetValue<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>'
      ::__l7::<lambda_1>::operator()(local_458);
    }
    else if (this_00->_padding_ != 0) {
      FVar16 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar24 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar17 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_400);
      pFVar3 = (FProperty *)this_00->_padding_;
      uVar18 = CityHash64((char *)&this_00->_padding_,0x10);
      local_450 = (undefined8 *)0x0;
      puVar19 = ::operator_new(0x48);
      puVar7 = local_450;
      if (puVar19 != (undefined8 *)0x0) {
        uVar11 = pFVar17->A;
        uVar22 = pFVar17->B;
        uVar5 = pFVar17->C;
        uVar6 = pFVar17->D;
        puVar19[6] = *(undefined8 *)FVar16.Value;
        *puVar19 = &
                   ___7__TContextCacheElement_V__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar19 + 1) = 0;
        *(uint *)((longlong)puVar19 + 0xc) = uVar11;
        *(uint *)(puVar19 + 2) = uVar22;
        *(uint *)((longlong)puVar19 + 0x14) = uVar5;
        *(uint *)(puVar19 + 3) = uVar6;
        puVar19[4] = pFVar3;
        *(uint *)(puVar19 + 5) = uVar24;
        puVar19[7] = local_468.Data;
        local_468.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar19 + 8) = (int)local_460;
        *(int *)((longlong)puVar19 + 0x44) = local_460._4_4_;
        local_460 = 0;
        puVar20 = puVar19;
      }
      if (local_450 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*local_450;
        local_450 = puVar20;
        (*(code *)*puVar19)(puVar7,1);
        puVar20 = local_450;
      }
      local_450 = puVar20;
      if (local_450 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar18,pFVar3,pFVar17,uVar24,(FTimestamp *)FVar16.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar18 & 0xffffffff,&local_450);
      }
      if (local_450 != (undefined8 *)0x0) {
        (**(code **)*local_450)(local_450,1);
      }
    }
    if ((TVector<double>_u_0 *)local_468.Data != (TVector<double>_u_0 *)0x0) {
      FMemory::Free(local_468.Data);
    }
  }
  return;
}

// FGetBoundingBoxesFromCollectionDataflowNode @ 14e91f9a0

FGetBoundingBoxesFromCollectionDataflowNode * __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::FGetBoundingBoxesFromCollectionDataflowNode
          (FGetBoundingBoxesFromCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2
          )

{
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FGetBoundingBoxesFromCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  (this->BoundingBoxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundingBoxes).ArrayNum = 0;
  (this->BoundingBoxes).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->BoundingBoxes;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FGetBoundingBoxesFromCollectionDataflowNode @ 14e91fad0

FGetBoundingBoxesFromCollectionDataflowNode * __thiscall
FGetBoundingBoxesFromCollectionDataflowNode::FGetBoundingBoxesFromCollectionDataflowNode
          (FGetBoundingBoxesFromCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetBoundingBoxesFromCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  (this->BoundingBoxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundingBoxes).ArrayNum = 0;
  (this->BoundingBoxes).ArrayMax = 0;
  return this;
}

