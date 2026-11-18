// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8c2070

UScriptStruct * __cdecl FMergeConvexHullsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode,(UObject *)pUVar1,
                         L"MergeConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton;
}

// GetType @ 14e8c2140

FName __thiscall FMergeConvexHullsDataflowNode::GetType(FMergeConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMergeConvexHullsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c2180

bool __thiscall
FMergeConvexHullsDataflowNode::IsA(FMergeConvexHullsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMergeConvexHullsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c21e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c21e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c2206;
      }
    }
  }
  bVar5 = true;
LAB_14e8c2206:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c2550

FStructOnScope * __thiscall
FMergeConvexHullsDataflowNode::NewStructOnScope(FMergeConvexHullsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode,(UObject *)pUVar2
                           ,L"MergeConvexHullsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c25d0

void __thiscall
FMergeConvexHullsDataflowNode::SerializeInternal
          (FMergeConvexHullsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode,(UObject *)pUVar1,
                         L"MergeConvexHullsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c264d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c2660

FName __thiscall FMergeConvexHullsDataflowNode::GetDisplayName(FMergeConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MergeConvexHulls");
  return in_RDX;
}

// GetCategory @ 14e8c26e0

FName __thiscall FMergeConvexHullsDataflowNode::GetCategory(FMergeConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8c2710

FString * __thiscall
FMergeConvexHullsDataflowNode::GetTags
          (FMergeConvexHullsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c2740

UScriptStruct * __thiscall
FMergeConvexHullsDataflowNode::TypedScriptStruct(FMergeConvexHullsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode,(UObject *)pUVar1,
                         L"MergeConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMergeConvexHullsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c2af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e8c2fcc) */
/* WARNING: Removing unreachable block (ram,0x00014e8c3005) */

void __thiscall
FMergeConvexHullsDataflowNode::Evaluate
          (FMergeConvexHullsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  ENegativeSpaceSampleMethodDataflowEnum EVar3;
  FDataflowOutput *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined1 *puVar8;
  FManagedArrayCollection *pFVar9;
  FDataflowInput *pFVar10;
  FDataflowSelection *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  bool *pbVar12;
  int *piVar13;
  double *pdVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStackY_618 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_5e0;
  FSphereCovering local_5d0;
  FDataflowSphereCovering local_5b0;
  FSphereCovering local_590;
  FConnectionReference local_570;
  FConnectionReference local_558;
  FConnectionReference local_540;
  FMergeConvexHullSettings local_528;
  FScriptContainerElement *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  FScriptContainerElement *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  FConnectionReference local_4d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_4c0;
  TArrayView<int_const_,int> local_4a8;
  TArrayView<int_const_,int> local_498;
  FCollectionTransformSelectionFacade local_488;
  undefined1 local_218 [32];
  double dStack_1f8;
  bool local_1f0;
  bool local_1ef;
  int local_1ec;
  longlong local_1c8;
  longlong local_1b8 [3];
  longlong *local_1a0;
  longlong local_198;
  longlong local_188 [3];
  longlong *local_170;
  double local_168;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_618;
  pFVar1 = &this->Collection;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar8 != pFVar1) &&
     (puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowSphereCovering *)puVar8 != &this->SphereCovering)) {
    return;
  }
  pFVar9 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar9);
  bVar7 = false;
  local_4d8.Index = -1;
  local_5b0.Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b0.Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.ArrayNum = 0;
  local_5e0.ArrayMax = 0;
  local_4d8.ContainerReference = (void *)0x0;
  local_4d8.Reference = &this->OptionalSelectionFilter;
  pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_4d8);
  pFVar4 = pFVar10->Connection;
  if (pFVar4 != (FDataflowOutput *)0x0) {
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->OptionalSelectionFilter);
    pTVar11 = FDataflowSelection::AsArray(this_00,&local_4c0);
    if (&local_5e0 != pTVar11) {
      if (local_5e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e0.AllocatorInstance.Data);
      }
      local_5e0.AllocatorInstance.Data = (pTVar11->AllocatorInstance).Data;
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_5e0.ArrayNum = pTVar11->ArrayNum;
      local_5e0.ArrayMax = pTVar11->ArrayMax;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
    }
    if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.AllocatorInstance.Data);
    }
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_488,&local_f8);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
              (&local_488,&local_5e0,false);
  }
  local_570.Index = -1;
  local_590.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_570.Reference = &this->bProtectNegativeSpace;
  local_590.Position.ArrayNum = 0;
  local_590.Position.ArrayMax = 0;
  local_590.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.Radius.ArrayNum = 0;
  local_590.Radius.ArrayMax = 0;
  local_570.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_570);
  pbVar12 = FDataflowInput::GetValue<bool>(pFVar10,param_1,local_570.Reference);
  bVar2 = *pbVar12;
  UE::Geometry::FNegativeSpaceSampleSettings::FNegativeSpaceSampleSettings
            ((FNegativeSpaceSampleSettings *)local_218);
  if (bVar2 == false) goto LAB_14e8c2e85;
  local_558.Reference = &this->TargetNumSamples;
  local_558.Index = -1;
  local_558.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_558);
  piVar13 = FDataflowInput::GetValue<int>(pFVar10,param_1,local_558.Reference);
  local_218._4_4_ = *piVar13;
  pdVar14 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->MinRadius);
  dStack_1f8 = *pdVar14;
  pdVar14 = FDataflowNode::GetValue<double>
                      ((FDataflowNode *)this,param_1,&this->NegativeSpaceTolerance);
  local_218._24_8_ = *pdVar14;
  pdVar14 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->MinSampleSpacing);
  EVar3 = this->SampleMethod;
  local_218._8_8_ = *pdVar14;
  if (EVar3 == Uniform) {
LAB_14e8c2d65:
    local_218[0] = Uniform;
  }
  else if (EVar3 == VoxelSearch) {
    local_218[0] = VoxelSearch;
  }
  else {
    if (EVar3 != NavigableVoxelSearch) goto LAB_14e8c2d65;
    local_218[0] = NavigableVoxelSearch;
  }
  local_1f0 = this->bRequireSearchSampleCoverage;
  if ((double)local_218._8_8_ <= 0.0) {
    local_218._8_8_ = 0.0;
  }
  local_1ef = this->bOnlyConnectedToHull;
  if ((int)local_218._4_4_ < 1) {
    local_218._4_4_ = 1;
  }
  register0x00001200 = maxpd(stack0xfffffffffffffe00,ZEXT816(0));
  iVar15 = 0x50a;
  if (local_1ec < 0x50a) {
    iVar15 = local_1ec;
  }
  local_1ec = 4;
  if (4 < iVar15) {
    local_1ec = iVar15;
  }
  if (__real_3ff0000000000000 <= local_168) {
    local_168 = __real_3ff0000000000000;
  }
  if (local_168 <= __real_3fb999999999999a) {
    local_168 = __real_3fb999999999999a;
  }
  if (this->bComputeNegativeSpacePerBone == false) {
    iVar15 = local_5e0.ArrayNum;
    local_4f8 = local_5e0.AllocatorInstance.Data;
    if ((local_5e0.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_4f0 = iVar15;
    local_4a8._12_4_ = uStack_4ec;
    local_4a8.ArrayNum = iVar15;
    local_4a8.DataPtr = (int *)local_4f8;
    bVar7 = UE::FractureEngine::Convex::ComputeConvexHullsNegativeSpace
                      (&local_f8,&local_590,(FNegativeSpaceSampleSettings *)local_218,
                       pFVar4 != (FDataflowOutput *)0x0,&local_4a8,false);
  }
LAB_14e8c2e85:
  local_540.Reference = &this->MaxConvexCount;
  local_540.Index = -1;
  local_540.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_540);
  piVar13 = FDataflowInput::GetValue<int>(pFVar10,param_1,local_540.Reference);
  iVar15 = *piVar13;
  pdVar14 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->ErrorTolerance);
  local_528.ErrorToleranceInCm = *pdVar14;
  local_528.EmptySpace = &local_590;
  if (bVar7 == false) {
    local_528.EmptySpace = (FSphereCovering *)0x0;
  }
  if ((bVar2 == false) || (this->bComputeNegativeSpacePerBone == false)) {
    local_528.ComputeEmptySpacePerBoneSettings = (FNegativeSpaceSampleSettings *)0x0;
  }
  else {
    local_528.ComputeEmptySpacePerBoneSettings = (FNegativeSpaceSampleSettings *)local_218;
  }
  local_528.ProximityFilter = this->MergeProximityFilter;
  local_528.ProximityDistanceThreshold = this->MergeProximityDistanceThreshold;
  iVar6 = local_5e0.ArrayNum;
  local_4e8 = local_5e0.AllocatorInstance.Data;
  local_5d0.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.Position.ArrayNum = 0;
  local_5d0.Position.ArrayMax = 0;
  local_5d0.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.Radius.ArrayNum = 0;
  local_5d0.Radius.ArrayMax = 0;
  local_528.MaxConvexCount = iVar15;
  if ((local_5e0.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_4e0 = iVar6;
  local_498._12_4_ = uStack_4dc;
  local_498.ArrayNum = iVar6;
  local_498.DataPtr = (int *)local_4e8;
  FGeometryCollectionConvexUtility::MergeHullsOnTransforms
            (&local_f8,&local_528,pFVar4 != (FDataflowOutput *)0x0,&local_498,&local_5d0);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
  local_5b0.Spheres.Position.AllocatorInstance.Data = local_5d0.Position.AllocatorInstance.Data;
  local_5b0.Spheres.Position.ArrayNum = local_5d0.Position.ArrayNum;
  local_5b0.Spheres.Position.ArrayMax = local_5d0.Position.ArrayMax;
  local_5d0.Position.ArrayNum = 0;
  local_5d0.Position.ArrayMax = 0;
  local_5d0.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5b0.Spheres.Radius.AllocatorInstance.Data = local_5d0.Radius.AllocatorInstance.Data;
  local_5b0.Spheres.Radius.ArrayNum = local_5d0.Radius.ArrayNum;
  local_5b0.Spheres.Radius.ArrayMax = local_5d0.Radius.ArrayMax;
  local_5d0.Radius.ArrayNum = 0;
  local_5d0.Radius.ArrayMax = 0;
  local_5d0.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>
            ((FDataflowNode *)this,param_1,&local_5b0,&this->SphereCovering);
  if (local_5d0.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Radius.AllocatorInstance.Data);
  }
  if (local_5d0.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Position.AllocatorInstance.Data);
  }
  if (local_198 != 0) {
    plVar16 = local_188;
    if (local_170 != (longlong *)0x0) {
      plVar16 = local_170;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (local_1c8 != 0) {
    plVar16 = local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar16 = local_1a0;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (local_590.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Radius.AllocatorInstance.Data);
  }
  if (local_590.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Position.AllocatorInstance.Data);
  }
  if (local_5e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.AllocatorInstance.Data);
  }
  if (local_5b0.Spheres.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Spheres.Radius.AllocatorInstance.Data);
  }
  if (local_5b0.Spheres.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Spheres.Position.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  return;
}

// FMergeConvexHullsDataflowNode @ 14e924810

FMergeConvexHullsDataflowNode * __thiscall
FMergeConvexHullsDataflowNode::FMergeConvexHullsDataflowNode
          (FMergeConvexHullsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FName *pFVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  bool *pbVar6;
  int *piVar7;
  double *pdVar8;
  FLinearColor FVar9;
  FName this_00;
  FDataflowInput *pFVar10;
  FDataflowOutput *pFVar11;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FMergeConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  (((FDataflowSphereCovering *)((longlong)local_res8 + 0x2f8))->Spheres).Position.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (FName *)((longlong)local_res8 + 0x328);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  piVar3 = (int *)((longlong)local_res8 + 0x318);
  (((TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x308))->AllocatorInstance
  ).Data = (FScriptContainerElement *)0x0;
  pdVar4 = (double *)((longlong)local_res8 + 800);
  *(undefined8 *)((longlong)local_res8 + 0x310) = 0;
  pdVar5 = (double *)((longlong)local_res8 + 0x368);
  *pdVar4 = 0.0;
  pbVar6 = (bool *)((longlong)local_res8 + 0x358);
  *piVar3 = -1;
  piVar7 = (int *)((longlong)local_res8 + 0x360);
  pdVar8 = (double *)((longlong)local_res8 + 0x370);
  *pFVar2 = FDataflowTransformSelection::TransformGroupName;
  *(undefined8 *)((longlong)local_res8 + 0x340) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x348) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x34c) = 0x80;
  *pdVar5 = 1.0;
  *pdVar8 = 2.0;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(EConvexHullProximityFilter *)((longlong)local_res8 + 0x350) = None;
  *pbVar6 = false;
  *(undefined4 *)((longlong)local_res8 + 0x359) = 0;
  *(double *)((longlong)local_res8 + 0x378) = 10.0;
  *(float *)((longlong)local_res8 + 0x354) = 0.1;
  *piVar7 = 0x32;
  ((FDataflowNodeDebugDrawSettings *)((longlong)local_res8 + 0x380))->RenderType = Wireframe;
  FVar9 = FLinearColor::Gray;
  ((FDataflowNodeDebugDrawSettings *)((longlong)local_res8 + 0x380))->bTranslucent = true;
  *(float *)((longlong)local_res8 + 0x394) = 1.0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 900))->_s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  *(int *)((longlong)local_res8 + 0x39c) = 0;
  *(bool *)((longlong)local_res8 + 0x398) = true;
  ((FDataflowNodeSphereCoveringDebugDrawSettings *)((longlong)local_res8 + 0x3a0))->
  bDisplaySphereCovering = false;
  ((FDataflowNodeSphereCoveringDebugDrawSettings *)((longlong)local_res8 + 0x3a0))->RenderType =
       Wireframe;
  *(EDataflowSphereCoveringColorMethod *)((longlong)local_res8 + 0x3a8) = Single;
  *(bool *)((longlong)local_res8 + 0x3a2) = true;
  *(float *)((longlong)local_res8 + 0x3a4) = 0.25;
  FVar9 = FLinearColor::Red;
  *(int *)((longlong)local_res8 + 0x3bc) = 0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3ac))->_s_0 =
       (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3c0))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3d0))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar3;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)local_res8,&local_78,local_res18);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pdVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pbVar6;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar7;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pdVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pdVar8;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x378);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_58.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2f8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  ((FDataflowNodeDebugDrawSettings *)((longlong)this_00 + 0x380))->RenderType = Wireframe;
  FVar9 = FLinearColor::Green;
  *(float *)((longlong)this_00 + 0x394) = 2.0;
  ((FLinearColor_u_0 *)((longlong)this_00 + 900))->_s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  return (FMergeConvexHullsDataflowNode *)this_00;
}

// FMergeConvexHullsDataflowNode @ 14e924be0

FMergeConvexHullsDataflowNode * __thiscall
FMergeConvexHullsDataflowNode::FMergeConvexHullsDataflowNode(FMergeConvexHullsDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMergeConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->MaxConvexCount = -1;
  (this->SphereCovering).Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Position.ArrayNum = 0;
  (this->SphereCovering).Spheres.Position.ArrayMax = 0;
  (this->SphereCovering).Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Radius.ArrayNum = 0;
  (this->SphereCovering).Spheres.Radius.ArrayMax = 0;
  this->ErrorTolerance = 0.0;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->OptionalSelectionFilter).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->OptionalSelectionFilter).field_0x4 = uVar2;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  this->MinSampleSpacing = 1.0;
  this->NegativeSpaceTolerance = 2.0;
  this->MinRadius = 10.0;
  this->MergeProximityFilter = None;
  this->MergeProximityDistanceThreshold = 0.1;
  this->bProtectNegativeSpace = false;
  this->bComputeNegativeSpacePerBone = false;
  this->SampleMethod = Uniform;
  this->bRequireSearchSampleCoverage = false;
  this->bOnlyConnectedToHull = false;
  this->TargetNumSamples = 0x32;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar1 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
  (this->SphereCoveringDebugDrawRenderSettings).bDisplaySphereCovering = false;
  (this->SphereCoveringDebugDrawRenderSettings).RenderType = Wireframe;
  (this->SphereCoveringDebugDrawRenderSettings).bTranslucent = true;
  (this->SphereCoveringDebugDrawRenderSettings).LineWidthMultiplier = 0.25;
  (this->SphereCoveringDebugDrawRenderSettings).ColorMethod = Single;
  FVar1 = FLinearColor::Red;
  (this->SphereCoveringDebugDrawRenderSettings).ColorRandomSeed = 0;
  (this->SphereCoveringDebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->SphereCoveringDebugDrawRenderSettings).ColorA.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  (this->SphereCoveringDebugDrawRenderSettings).ColorB.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  return this;
}

