// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8af040

UScriptStruct * __cdecl FGetCentroidsFromCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCentroidsFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetCentroidsFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8af160

FName __thiscall
FGetCentroidsFromCollectionDataflowNode::GetType(FGetCentroidsFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetCentroidsFromCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8af190

bool __thiscall
FGetCentroidsFromCollectionDataflowNode::IsA
          (FGetCentroidsFromCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetCentroidsFromCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8af1f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8af1f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8af216;
      }
    }
  }
  bVar5 = true;
LAB_14e8af216:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8af250

FStructOnScope * __thiscall
FGetCentroidsFromCollectionDataflowNode::NewStructOnScope
          (FGetCentroidsFromCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetCentroidsFromCollectionDataflowNode,
                           (UObject *)pUVar2,L"GetCentroidsFromCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8af2d0

void __thiscall
FGetCentroidsFromCollectionDataflowNode::SerializeInternal
          (FGetCentroidsFromCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCentroidsFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetCentroidsFromCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8af34d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8af390

FName __thiscall
FGetCentroidsFromCollectionDataflowNode::GetDisplayName
          (FGetCentroidsFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetCentroidsFromCollection");
  return in_RDX;
}

// GetCategory @ 14e8af3c0

FName __thiscall
FGetCentroidsFromCollectionDataflowNode::GetCategory(FGetCentroidsFromCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8af430

FString * __thiscall
FGetCentroidsFromCollectionDataflowNode::GetTags
          (FGetCentroidsFromCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8af460

UScriptStruct * __thiscall
FGetCentroidsFromCollectionDataflowNode::TypedScriptStruct
          (FGetCentroidsFromCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetCentroidsFromCollectionDataflowNode,
                         (UObject *)pUVar1,L"GetCentroidsFromCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetCentroidsFromCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b0080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGetCentroidsFromCollectionDataflowNode::Evaluate
          (FGetCentroidsFromCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  FManagedArrayCollection *pFVar14;
  FDataflowSelection *this_00;
  FDataflowInput *pFVar15;
  TManagedArray<int> *pTVar16;
  uint uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_598 [32];
  FScriptContainerElement *local_578;
  FScriptContainerElement *local_570;
  longlong local_568;
  longlong local_560;
  undefined8 local_558;
  TArray<int,TSizedDefaultAllocator<32>_> local_548;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_538;
  longlong local_528;
  undefined1 local_520 [16];
  double local_510;
  FDataflowOutput *local_508;
  FContext *local_500;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_4f8;
  FConnectionReference local_4e8;
  double local_4d0;
  double dStack_4c8;
  double local_4c0;
  FCollectionHierarchyFacade local_4b8;
  FBoundsFacade local_408;
  FCollectionTransformFacade local_2a8;
  TTransform<double> local_1b8;
  FManagedArrayCollection local_158;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_598;
  local_500 = param_1;
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar13 == &this->Centroids)
  {
    local_538.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_538.ArrayNum = 0;
    local_538.ArrayMax = 0;
    local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_548.ArrayNum = 0;
    local_548.ArrayMax = 0;
    pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_158,pFVar14);
    Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_4b8,&local_158);
    bVar9 = Chaos::Facades::FCollectionHierarchyFacade::HasLevelAttribute(&local_4b8);
    if (!bVar9) {
      Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_4b8);
    }
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_4e8.Index = -1;
    local_4e8.ContainerReference = (void *)0x0;
    local_4e8.Reference = &this->TransformSelection;
    pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_4e8);
    local_508 = pFVar15->Connection;
    GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_408,&local_158);
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_2a8,&local_158);
    bVar9 = GeometryCollection::Facades::FBoundsFacade::IsValid(&local_408);
    if ((bVar9) &&
       (bVar9 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid(&local_2a8), bVar9)
       ) {
      GeometryCollection::Facades::FBoundsFacade::GetCentroids(&local_408,&local_4f8);
      if ((local_408.TransformToGeometryIndexAttribute.ConstAttributeArray ==
           (TManagedArray<int> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar16 = FManagedArrayCollection::GetAttribute<int>
                          (&local_158,FTransformCollection::LevelAttribute,
                           FTransformCollection::TransformGroup);
      uVar17 = 0;
      iVar10 = FManagedArrayCollection::NumElements(&local_158,FTransformCollection::TransformGroup)
      ;
      lVar20 = (longlong)iVar10;
      local_528 = lVar20;
      if (0 < iVar10) {
        lVar18 = 0;
        do {
          if ((-1 < (int)uVar17) &&
             ((int)uVar17 <
              *(int *)&(local_408.TransformToGeometryIndexAttribute.ConstAttributeArray)->field_0x18
             )) {
            uVar11 = 0;
            if ((int)uVar17 <
                *(int *)&(local_408.TransformToGeometryIndexAttribute.ConstAttributeArray)->
                         field_0x18) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if (uVar11 == 0) {
              local_578 = (FScriptContainerElement *)(longlong)(int)uVar17;
              local_570 = (FScriptContainerElement *)
                          (longlong)
                          *(int *)&(local_408.TransformToGeometryIndexAttribute.ConstAttributeArray)
                                   ->field_0x18;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              lVar20 = local_528;
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            uVar11 = *(uint *)(*(longlong *)
                                &(local_408.TransformToGeometryIndexAttribute.ConstAttributeArray)->
                                 field_0x10 + lVar18 * 4);
            pFVar19 = (FScriptContainerElement *)(longlong)(int)uVar11;
            if ((-1 < (int)uVar11) && (iVar10 = local_4f8.ArrayNum, (int)uVar11 < iVar10)) {
              uVar12 = 0;
              if ((int)uVar11 < iVar10) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if (uVar12 == 0) {
                local_570 = (FScriptContainerElement *)(longlong)iVar10;
                local_578 = pFVar19;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              dVar6 = *(double *)(local_4f8.AllocatorInstance.Data + (longlong)pFVar19 * 0x18);
              dVar7 = *(double *)(local_4f8.AllocatorInstance.Data + (longlong)pFVar19 * 0x18 + 8);
              dVar1 = *(double *)
                       (local_4f8.AllocatorInstance.Data + (longlong)pFVar19 * 0x18 + 0x10);
              local_4d0 = dVar6;
              dStack_4c8 = dVar7;
              local_4c0 = dVar1;
              GeometryCollection::Facades::FCollectionTransformFacade::
              ComputeCollectionSpaceTransform(&local_2a8,&local_1b8,uVar17);
              dVar1 = dVar1 * local_1b8.Scale3D.ZW.m128d_f64[0];
              dVar8 = local_1b8.Scale3D.ZW.m128d_f64[1] * 0.0;
              dVar29 = local_1b8.Rotation.XY.m128d_f64[1];
              dVar6 = local_1b8.Scale3D.XY.m128d_f64[0] * dVar6;
              dVar7 = local_1b8.Scale3D.XY.m128d_f64[1] * dVar7;
              uVar28 = (undefined4)((ulonglong)dVar7 >> 0x20);
              dVar4 = local_1b8.Rotation.ZW.m128d_f64[0];
              auVar31._8_4_ = SUB84(dVar7,0);
              auVar31._0_8_ = dVar6;
              auVar31._12_4_ = uVar28;
              auVar30 = blendpd((undefined1  [16])local_1b8.Rotation.XY.m128d_f64,
                                (undefined1  [16])local_1b8.Rotation.ZW.m128d_f64,2);
              auVar32._0_8_ = auVar31._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar29 * dVar6;
              auVar32._8_8_ = dVar1 * dVar29 - dVar4 * dVar7;
              auVar21._8_4_ = SUB84(dVar7,0);
              auVar21._0_8_ = dVar6;
              auVar21._12_4_ = uVar28;
              auVar22._8_4_ = SUB84(dVar8,0);
              auVar22._0_8_ = dVar1;
              auVar22._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              auVar22 = blendpd(auVar21,auVar22,2);
              dVar5 = local_1b8.Rotation.ZW.m128d_f64[1];
              auVar23._0_8_ = auVar22._0_8_ * dVar4 - auVar30._0_8_ * dVar1;
              auVar23._8_8_ = auVar22._8_8_ * dVar5 - auVar30._8_8_ * dVar8;
              auVar22 = blendpd(auVar32,auVar23,2);
              dVar8 = auVar32._8_8_ + auVar32._8_8_;
              dVar3 = auVar23._0_8_ + auVar23._0_8_;
              uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
              auVar33._0_8_ = auVar22._0_8_ + auVar22._0_8_;
              auVar33._8_8_ = auVar22._8_8_ + auVar22._8_8_;
              auVar26._8_4_ = SUB84(dVar3,0);
              auVar26._0_8_ = dVar8;
              auVar26._12_4_ = uVar28;
              auVar24._8_4_ = SUB84(dVar3,0);
              auVar24._0_8_ = dVar8;
              auVar24._12_4_ = uVar28;
              auVar22 = blendpd(auVar24,auVar33,2);
              auVar27._0_8_ = auVar26._8_8_ * local_1b8.Rotation.XY.m128d_f64[0] - dVar8 * dVar29;
              auVar27._8_8_ = auVar33._0_8_ * dVar29 - dVar3 * dVar4;
              auVar25._0_8_ = auVar22._0_8_ * dVar4 - auVar33._0_8_ * auVar30._0_8_;
              auVar25._8_8_ = auVar22._8_8_ * dVar5 - auVar33._8_8_ * auVar30._8_8_;
              auVar22 = blendpd(auVar27,auVar25,2);
              dVar3 = dVar3 * dVar5 + dVar7 + auVar25._0_8_ + local_1b8.Translation.XY.m128d_f64[1];
              local_510 = auVar33._0_8_ * dVar5 + dVar1 + auVar22._0_8_ +
                          local_1b8.Translation.ZW.m128d_f64[0];
              local_520._8_4_ = SUB84(dVar3,0);
              local_520._0_8_ =
                   dVar8 * dVar5 + dVar6 + auVar27._8_8_ + local_1b8.Translation.XY.m128d_f64[0];
              local_520._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              if (((local_508 == (FDataflowOutput *)0x0) ||
                  ((this_00->SelectionArray).NumBits <= (int)uVar17)) ||
                 (bVar9 = FDataflowSelection::IsSelected(this_00,uVar17), lVar20 = local_528, bVar9)
                 ) {
                if (local_538.AllocatorInstance.Data <= (FScriptContainerElement *)local_520) {
                  if ((FScriptContainerElement *)local_520 <
                      local_538.AllocatorInstance.Data + (longlong)local_538.ArrayMax * 0x18) {
                    local_560 = (longlong)local_538.ArrayNum;
                    local_558 = 0x18;
                    local_578 = (FScriptContainerElement *)local_520;
                    local_570 = local_538.AllocatorInstance.Data;
                    local_568 = (longlong)local_538.ArrayMax;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar9) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                }
                iVar10 = local_538.ArrayNum;
                if (local_538.ArrayNum == local_538.ArrayMax) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_538.AllocatorInstance,&local_538.ArrayMax);
                }
                local_538.ArrayNum = iVar10 + 1;
                *(undefined8 *)(local_538.AllocatorInstance.Data + (longlong)iVar10 * 0x18) =
                     local_520._0_8_;
                *(undefined8 *)(local_538.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 8) =
                     local_520._8_8_;
                *(double *)(local_538.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 0x10) =
                     local_510;
                uVar11 = 0;
                if ((int)uVar17 < *(int *)&pTVar16->field_0x18) {
                  uVar11 = ~uVar17 >> 0x1f;
                }
                if (uVar11 == 0) {
                  local_578 = (FScriptContainerElement *)(longlong)(int)uVar17;
                  local_570 = (FScriptContainerElement *)(longlong)*(int *)&pTVar16->field_0x18;
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar9) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                pFVar19 = (FScriptContainerElement *)
                          (*(longlong *)&pTVar16->field_0x10 + lVar18 * 4);
                if (local_548.AllocatorInstance.Data <= pFVar19) {
                  if (pFVar19 < local_548.AllocatorInstance.Data + (longlong)local_548.ArrayMax * 4)
                  {
                    local_560 = (longlong)local_548.ArrayNum;
                    local_558 = 4;
                    local_570 = local_548.AllocatorInstance.Data;
                    local_578 = pFVar19;
                    local_568 = (longlong)local_548.ArrayMax;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar9) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                }
                iVar10 = local_548.ArrayNum;
                if (local_548.ArrayNum == local_548.ArrayMax) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_548.AllocatorInstance,&local_548.ArrayMax);
                }
                local_548.ArrayNum = iVar10 + 1;
                *(undefined4 *)(local_548.AllocatorInstance.Data + (longlong)iVar10 * 4) =
                     *(undefined4 *)pFVar19;
                lVar20 = local_528;
              }
            }
          }
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 1;
          param_1 = local_500;
        } while (lVar18 < lVar20);
      }
      if (local_4f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.AllocatorInstance.Data);
      }
    }
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_548,&this->Levels);
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_538,&this->Centroids);
    FManagedArrayCollection::~FManagedArrayCollection(&local_158);
    if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.AllocatorInstance.Data);
    }
    if (local_538.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.AllocatorInstance.Data);
    }
  }
  return;
}

// FGetCentroidsFromCollectionDataflowNode @ 14e91fb40

FGetCentroidsFromCollectionDataflowNode * __thiscall
FGetCentroidsFromCollectionDataflowNode::FGetCentroidsFromCollectionDataflowNode
          (FGetCentroidsFromCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FDataflowTransformSelection *pFVar2;
  FLinearColor FVar3;
  uint uVar4;
  FDataflowOutput *pFVar5;
  FRichCurve *pFVar6;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FName local_res8;
  uint in_stack_ffffffffffffff78;
  FKeyHandle FVar7;
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FGetCentroidsFromCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar2 = &this->TransformSelection;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar4;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bColorByLevel = true;
  FVar3 = FLinearColor::Blue;
  this->bSizeByLevel = true;
  this->Size = 8.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->PointSize);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Centroids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Centroids).ArrayNum = 0;
  (this->Centroids).ArrayMax = 0;
  (this->Levels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Levels).ArrayNum = 0;
  (this->Levels).ArrayMax = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Centroids;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_78);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Levels;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar5,&local_78);
  }
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  pFVar6 = FRuntimeFloatCurve::GetRichCurve(&this->PointSize);
  FKeyHandle::FKeyHandle((FKeyHandle *)&local_res8);
  FVar7.Index = in_stack_ffffffffffffff78 & 0xffffff00;
  FRichCurve::AddKey(pFVar6,in_XMM1_Da,0.0,(bool)in_R9B,FVar7);
  pFVar6 = FRuntimeFloatCurve::GetRichCurve(&this->PointSize);
  FKeyHandle::FKeyHandle((FKeyHandle *)&local_res8);
  FRichCurve::AddKey(pFVar6,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar7.Index & 0xffffff00));
  return this;
}

// FGetCentroidsFromCollectionDataflowNode @ 14e91fd70

FGetCentroidsFromCollectionDataflowNode * __thiscall
FGetCentroidsFromCollectionDataflowNode::FGetCentroidsFromCollectionDataflowNode
          (FGetCentroidsFromCollectionDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetCentroidsFromCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bColorByLevel = true;
  FVar1 = FLinearColor::Blue;
  this->bSizeByLevel = true;
  this->Size = 8.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->PointSize);
  (this->Centroids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Centroids).ArrayNum = 0;
  (this->Centroids).ArrayMax = 0;
  (this->Levels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Levels).ArrayNum = 0;
  (this->Levels).ArrayMax = 0;
  return this;
}

// ~FGetCentroidsFromCollectionDataflowNode @ 14e933670

void __thiscall
FGetCentroidsFromCollectionDataflowNode::~FGetCentroidsFromCollectionDataflowNode
          (FGetCentroidsFromCollectionDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Levels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Centroids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointSize).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PointSize).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->PointSize).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->PointSize).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->PointSize).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PointSize).EditorCurveData._padding_);
  pvVar2 = *(void **)&(this->TransformSelection).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

