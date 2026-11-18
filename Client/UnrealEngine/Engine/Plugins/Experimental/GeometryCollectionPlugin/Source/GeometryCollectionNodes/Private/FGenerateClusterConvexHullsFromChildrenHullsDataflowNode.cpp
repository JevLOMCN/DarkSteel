// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b8f50

UScriptStruct * __cdecl FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
                         ,(UObject *)pUVar1,
                         L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8b91f0

FName __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::GetType
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b9220

bool __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::IsA
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b9288;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b9288:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b92a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b92a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b92e0

FStructOnScope * __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::NewStructOnScope
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
                           ,(UObject *)pUVar2,
                           L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b9390

void __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::SerializeInternal
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
                         ,(UObject *)pUVar1,
                         L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
             .OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
             .OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b940d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b9420

FName __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::GetDisplayName
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GenerateClusterConvexHullsFromChildrenHulls");
  return in_RDX;
}

// GetCategory @ 14e8b9450

FName __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::GetCategory
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8b9510

FString * __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::GetTags
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b9540

UScriptStruct * __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::TypedScriptStruct
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
                         ,(UObject *)pUVar1,
                         L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8b9800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e8b9d41) */
/* WARNING: Removing unreachable block (ram,0x00014e8b9d79) */
/* WARNING: Removing unreachable block (ram,0x00014e8b9db1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::Evaluate
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  ENegativeSpaceSampleMethodDataflowEnum EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar7;
  FDataflowInput *pFVar8;
  FDataflowSelection *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool *pbVar10;
  int *piVar11;
  double *pdVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStackY_558 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_520;
  FSphereCovering local_510;
  FDataflowSphereCovering local_4f0;
  FClusterConvexHullSettings local_4d0;
  FDataflowOutput *local_4b0;
  FConnectionReference local_4a8;
  FConnectionReference local_490;
  FConnectionReference local_478;
  FConnectionReference local_460;
  FScriptContainerElement *local_448;
  int iStack_440;
  undefined4 uStack_43c;
  FScriptContainerElement *local_438;
  int iStack_430;
  undefined4 uStack_42c;
  FConnectionReference local_428;
  TArray<int,TSizedDefaultAllocator<32>_> local_410;
  TArrayView<int_const_,int> local_3f8;
  TArrayView<int_const_,int> local_3e8;
  FCollectionTransformSelectionFacade local_3d8;
  undefined1 local_168 [32];
  double dStack_148;
  bool local_140;
  bool local_13f;
  int local_13c;
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  longlong local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  double local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar6 != pFVar1) &&
     (puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowSphereCovering *)puVar6 != &this->SphereCovering)) {
    return;
  }
  this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  local_4f0.Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Spheres.Position.ArrayNum = 0;
  local_4f0.Spheres.Position.ArrayMax = 0;
  local_4f0.Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f0.Spheres.Radius.ArrayNum = 0;
  local_4f0.Spheres.Radius.ArrayMax = 0;
  pFVar7 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
  if (pFVar7 == (FGeometryCollection *)0x0) {
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,this_00,pFVar1);
    goto LAB_14e8b9e01;
  }
  local_428.Index = -1;
  local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.ArrayNum = 0;
  local_520.ArrayMax = 0;
  local_428.ContainerReference = (void *)0x0;
  local_428.Reference = &this->OptionalSelectionFilter;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_428);
  local_4b0 = pFVar8->Connection;
  bVar15 = local_4b0 != (FDataflowOutput *)0x0;
  if (local_4b0 != (FDataflowOutput *)0x0) {
    this_01 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->OptionalSelectionFilter);
    pTVar9 = FDataflowSelection::AsArray(this_01,&local_410);
    if (&local_520 != pTVar9) {
      if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.AllocatorInstance.Data);
      }
      local_520.AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_520.ArrayNum = pTVar9->ArrayNum;
      local_520.ArrayMax = pTVar9->ArrayMax;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.AllocatorInstance.Data);
    }
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_3d8,this_00);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
              (&local_3d8,&local_520,false);
  }
  local_4a8.Index = -1;
  local_510.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.Reference = &this->bProtectNegativeSpace;
  local_510.Position.ArrayNum = 0;
  local_510.Position.ArrayMax = 0;
  local_510.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar5 = false;
  local_510.Radius.ArrayNum = 0;
  local_510.Radius.ArrayMax = 0;
  local_4a8.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_4a8);
  pbVar10 = FDataflowInput::GetValue<bool>(pFVar8,param_1,local_4a8.Reference);
  if (*pbVar10 != false) {
    UE::Geometry::FNegativeSpaceSampleSettings::FNegativeSpaceSampleSettings
              ((FNegativeSpaceSampleSettings *)local_168);
    local_490.Reference = &this->TargetNumSamples;
    local_490.Index = -1;
    local_490.ContainerReference = (void *)0x0;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_490);
    piVar11 = FDataflowInput::GetValue<int>(pFVar8,param_1,local_490.Reference);
    local_168._4_4_ = *piVar11;
    pdVar12 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->MinRadius);
    dStack_148 = *pdVar12;
    pdVar12 = FDataflowNode::GetValue<double>
                        ((FDataflowNode *)this,param_1,&this->NegativeSpaceTolerance);
    local_168._24_8_ = *pdVar12;
    pdVar12 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->MinSampleSpacing)
    ;
    EVar2 = this->SampleMethod;
    local_168._8_8_ = *pdVar12;
    if (EVar2 == Uniform) {
LAB_14e8b9a8f:
      local_168[0] = Uniform;
    }
    else if (EVar2 == VoxelSearch) {
      local_168[0] = VoxelSearch;
    }
    else {
      if (EVar2 != NavigableVoxelSearch) goto LAB_14e8b9a8f;
      local_168[0] = NavigableVoxelSearch;
    }
    local_140 = this->bRequireSearchSampleCoverage;
    if ((double)local_168._8_8_ <= 0.0) {
      local_168._8_8_ = 0.0;
    }
    local_13f = this->bOnlyConnectedToHull;
    if ((int)local_168._4_4_ < 1) {
      local_168._4_4_ = 1;
    }
    iVar3 = local_520.ArrayNum;
    iVar13 = 0x50a;
    if (local_13c < 0x50a) {
      iVar13 = local_13c;
    }
    register0x00001200 = maxpd(stack0xfffffffffffffeb0,ZEXT816(0));
    local_13c = 4;
    if (4 < iVar13) {
      local_13c = iVar13;
    }
    local_448 = local_520.AllocatorInstance.Data;
    if (__real_3ff0000000000000 <= local_b8) {
      local_b8 = __real_3ff0000000000000;
    }
    if (local_b8 <= __real_3fb999999999999a) {
      local_b8 = __real_3fb999999999999a;
    }
    if ((local_520.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_440 = iVar3;
    local_3f8._12_4_ = uStack_43c;
    local_3f8.ArrayNum = iVar3;
    local_3f8.DataPtr = (int *)local_448;
    bVar5 = UE::FractureEngine::Convex::ComputeConvexHullsNegativeSpace
                      ((FManagedArrayCollection *)pFVar7,&local_510,
                       (FNegativeSpaceSampleSettings *)local_168,bVar15,&local_3f8,true);
    if (local_e8 != 0) {
      plVar14 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar14 = local_c0;
      }
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    if (local_118 != 0) {
      plVar14 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar14 = local_f0;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  local_478.Reference = &this->ConvexCount;
  local_478.Index = -1;
  local_478.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_478);
  piVar11 = FDataflowInput::GetValue<int>(pFVar8,param_1,local_478.Reference);
  iVar3 = *piVar11;
  pdVar12 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->ErrorTolerance);
  local_460.Index = -1;
  local_4d0.ErrorToleranceInCm = *pdVar12;
  local_4d0.bUseExternalCollisionIfAvailable = this->bPreferExternalCollisionShapes;
  local_4d0.EmptySpace = &local_510;
  if (bVar5 == false) {
    local_4d0.EmptySpace = (FSphereCovering *)0x0;
  }
  local_460.Reference = &this->bAllowMergingLeafHulls;
  local_4d0.AllowMergesMethod = Any;
  local_460.ContainerReference = (void *)0x0;
  local_4d0.ConvexCount = iVar3;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_460);
  pbVar10 = FDataflowInput::GetValue<bool>(pFVar8,param_1,local_460.Reference);
  local_4d0.ProximityDistanceThreshold = this->MergeProximityDistanceThreshold;
  local_4d0.bAllowMergingLeafHulls = *pbVar10;
  local_4d0.ProximityFilter = this->MergeProximityFilter;
  if (local_4b0 == (FDataflowOutput *)0x0) {
    FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromChildrenHulls(pFVar7,&local_4d0)
    ;
  }
  else {
    iVar3 = local_520.ArrayNum;
    local_438 = local_520.AllocatorInstance.Data;
    if ((local_520.ArrayNum < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_430 = iVar3;
    local_3e8._12_4_ = uStack_42c;
    local_3e8.ArrayNum = iVar3;
    local_3e8.DataPtr = (int *)local_438;
    FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromChildrenHulls
              (pFVar7,&local_4d0,&local_3e8);
  }
  FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar7,&this->Collection);
  local_4f0.Spheres.Radius.ArrayNum = local_510.Radius.ArrayNum;
  local_4f0.Spheres.Radius.ArrayMax = local_510.Radius.ArrayMax;
  local_4f0.Spheres.Radius.AllocatorInstance.Data = local_510.Radius.AllocatorInstance.Data;
  local_4f0.Spheres.Position.ArrayNum = local_510.Position.ArrayNum;
  local_4f0.Spheres.Position.ArrayMax = local_510.Position.ArrayMax;
  local_4f0.Spheres.Position.AllocatorInstance.Data = local_510.Position.AllocatorInstance.Data;
  local_510.Radius.ArrayNum = 0;
  local_510.Radius.ArrayMax = 0;
  local_510.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_510.Position.ArrayNum = 0;
  local_510.Position.ArrayMax = 0;
  local_510.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.AllocatorInstance.Data);
  }
  (**(code **)pFVar7->_padding_)(pFVar7,1);
LAB_14e8b9e01:
  FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>
            ((FDataflowNode *)this,param_1,&local_4f0,&this->SphereCovering);
  if (local_4f0.Spheres.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Spheres.Radius.AllocatorInstance.Data);
  }
  if (local_4f0.Spheres.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Spheres.Position.AllocatorInstance.Data);
  }
  return;
}

// FGenerateClusterConvexHullsFromChildrenHullsDataflowNode @ 14e91d800

FGenerateClusterConvexHullsFromChildrenHullsDataflowNode * __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  byte *pbVar1;
  FName *pFVar2;
  int *piVar3;
  double *pdVar4;
  bool *pbVar5;
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
  this->_padding_ = (longlong)&___7FGenerateClusterConvexHullsFromChildrenHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  (((FDataflowSphereCovering *)((longlong)local_res8 + 0x2f8))->Spheres).Position.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (FName *)((longlong)local_res8 + 0x330);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  piVar3 = (int *)((longlong)local_res8 + 0x318);
  (((TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x308))->AllocatorInstance
  ).Data = (FScriptContainerElement *)0x0;
  pdVar4 = (double *)((longlong)local_res8 + 800);
  *(undefined8 *)((longlong)local_res8 + 0x310) = 0;
  pbVar5 = (bool *)((longlong)local_res8 + 0x360);
  *pdVar4 = 0.0;
  pbVar6 = (bool *)((longlong)local_res8 + 0x361);
  *piVar3 = 2;
  piVar7 = (int *)((longlong)local_res8 + 0x368);
  *(bool *)((longlong)local_res8 + 0x328) = true;
  pdVar8 = (double *)((longlong)local_res8 + 0x370);
  *pFVar2 = FDataflowTransformSelection::TransformGroupName;
  *(undefined8 *)((longlong)local_res8 + 0x348) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x350) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x354) = 0x80;
  *(double *)((longlong)local_res8 + 0x378) = 2.0;
  *(double *)((longlong)local_res8 + 0x380) = 10.0;
  *(EConvexHullProximityFilter *)((longlong)local_res8 + 0x358) = None;
  *pbVar5 = false;
  *pbVar6 = false;
  *(undefined2 *)((longlong)local_res8 + 0x362) = 0;
  *(bool *)((longlong)local_res8 + 0x364) = false;
  *pdVar8 = 1.0;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(float *)((longlong)local_res8 + 0x35c) = 0.1;
  *piVar7 = 0x32;
  ((FDataflowNodeDebugDrawSettings *)((longlong)local_res8 + 0x388))->RenderType = Wireframe;
  FVar9 = FLinearColor::Gray;
  ((FDataflowNodeDebugDrawSettings *)((longlong)local_res8 + 0x388))->bTranslucent = true;
  *(float *)((longlong)local_res8 + 0x39c) = 1.0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x38c))->_s_0 =
       (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  *(int *)((longlong)local_res8 + 0x3a4) = 0;
  *(bool *)((longlong)local_res8 + 0x3a0) = true;
  ((FDataflowNodeSphereCoveringDebugDrawSettings *)((longlong)local_res8 + 0x3a8))->
  bDisplaySphereCovering = false;
  ((FDataflowNodeSphereCoveringDebugDrawSettings *)((longlong)local_res8 + 0x3a8))->RenderType =
       Wireframe;
  *(EDataflowSphereCoveringColorMethod *)((longlong)local_res8 + 0x3b0) = Single;
  *(bool *)((longlong)local_res8 + 0x3aa) = true;
  *(float *)((longlong)local_res8 + 0x3ac) = 0.25;
  FVar9 = FLinearColor::Red;
  *(int *)((longlong)local_res8 + 0x3c4) = 0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3b4))->_s_0 =
       (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3c8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3d8))->_s_0 =
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
  local_78.Reference = pbVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
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
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x380);
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
  ((FDataflowNodeDebugDrawSettings *)((longlong)this_00 + 0x388))->RenderType = Wireframe;
  FVar9 = FLinearColor::Green;
  *(float *)((longlong)this_00 + 0x39c) = 2.0;
  ((FLinearColor_u_0 *)((longlong)this_00 + 0x38c))->_s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  return (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *)this_00;
}

// FGenerateClusterConvexHullsFromChildrenHullsDataflowNode @ 14e91dc20

FGenerateClusterConvexHullsFromChildrenHullsDataflowNode * __thiscall
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::
FGenerateClusterConvexHullsFromChildrenHullsDataflowNode
          (FGenerateClusterConvexHullsFromChildrenHullsDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGenerateClusterConvexHullsFromChildrenHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->ConvexCount = 2;
  (this->SphereCovering).Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Position.ArrayNum = 0;
  (this->SphereCovering).Spheres.Position.ArrayMax = 0;
  (this->SphereCovering).Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Radius.ArrayNum = 0;
  (this->SphereCovering).Spheres.Radius.ArrayMax = 0;
  this->ErrorTolerance = 0.0;
  this->bPreferExternalCollisionShapes = true;
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
  this->bAllowMergingLeafHulls = false;
  this->bProtectNegativeSpace = false;
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

