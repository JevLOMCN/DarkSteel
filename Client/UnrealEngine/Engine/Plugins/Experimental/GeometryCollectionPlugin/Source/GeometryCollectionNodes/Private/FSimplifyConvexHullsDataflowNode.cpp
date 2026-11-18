// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b0d50

UScriptStruct * __cdecl FSimplifyConvexHullsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"SimplifyConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton;
}

// GetType @ 14e8b13a0

FName __thiscall FSimplifyConvexHullsDataflowNode::GetType(FSimplifyConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSimplifyConvexHullsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b14f0

bool __thiscall
FSimplifyConvexHullsDataflowNode::IsA(FSimplifyConvexHullsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSimplifyConvexHullsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b1558;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b1558:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b1576;
      }
    }
  }
  bVar5 = true;
LAB_14e8b1576:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b1630

FStructOnScope * __thiscall
FSimplifyConvexHullsDataflowNode::NewStructOnScope(FSimplifyConvexHullsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode,
                           (UObject *)pUVar2,L"SimplifyConvexHullsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b1770

void __thiscall
FSimplifyConvexHullsDataflowNode::SerializeInternal
          (FSimplifyConvexHullsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"SimplifyConvexHullsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b17ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b1830

FName __thiscall
FSimplifyConvexHullsDataflowNode::GetDisplayName(FSimplifyConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SimplifyConvexHulls");
  return in_RDX;
}

// GetCategory @ 14e8b18c0

FName __thiscall
FSimplifyConvexHullsDataflowNode::GetCategory(FSimplifyConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8b1920

FString * __thiscall
FSimplifyConvexHullsDataflowNode::GetTags
          (FSimplifyConvexHullsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b1990

UScriptStruct * __thiscall
FSimplifyConvexHullsDataflowNode::TypedScriptStruct(FSimplifyConvexHullsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"SimplifyConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSimplifyConvexHullsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b1f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSimplifyConvexHullsDataflowNode::Evaluate
          (FSimplifyConvexHullsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  FManagedArrayCollection *pFVar7;
  FDataflowSelection *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  bool bVar13;
  undefined1 auStack_218 [32];
  FConnectionReference local_1f8;
  FConnectionReference local_1e0;
  FConnectionReference local_1c8;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FConnectionReference local_198;
  FConnectionReference local_180;
  FSimplifyHullSettings local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_130;
  TArrayView<int_const_,int> local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  FScriptContainerElement *pFVar12;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pFVar1 = &this->Collection;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar5 == pFVar1) {
    pFVar12 = (FScriptContainerElement *)0x0;
    iVar11 = 0;
    local_198.ContainerReference = (void *)0x0;
    local_198.Index = -1;
    local_198.Reference = pFVar1;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_198);
    if (pFVar6->Connection != (FDataflowOutput *)0x0) {
      pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,pFVar1);
      FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar7);
      iVar4 = FManagedArrayCollection::NumElements(&local_f8,FTransformCollection::TransformGroup);
      if (iVar4 == 0) {
        FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
        FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
      }
      else {
        bVar13 = false;
        local_180.Index = -1;
        local_180.ContainerReference = (void *)0x0;
        local_180.Reference = &this->OptionalSelectionFilter;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_180);
        if (pFVar6->Connection != (FDataflowOutput *)0x0) {
          this_00 = (FDataflowSelection *)
                    FDataflowNode::GetValue<FDataflowTransformSelection>
                              ((FDataflowNode *)this,param_1,&this->OptionalSelectionFilter);
          bVar13 = true;
          pTVar8 = FDataflowSelection::AsArray(this_00,&local_130);
          iVar11 = 0;
          if (&local_108 != pTVar8) {
            pFVar12 = (pTVar8->AllocatorInstance).Data;
            (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            iVar11 = pTVar8->ArrayNum;
            pTVar8->ArrayNum = 0;
            pTVar8->ArrayMax = 0;
          }
          if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.AllocatorInstance.Data);
          }
        }
        local_168.SimplifyMethod = this->SimplifyMethod;
        local_1f8.Reference = &this->SimplificationDistanceThreshold;
        local_168.SmallAreaThreshold = __real_3fb999999999999a;
        local_1f8.Index = -1;
        local_1f8.ContainerReference = (void *)0x0;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1f8);
        pfVar9 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_1f8.Reference);
        local_1e0.Index = -1;
        local_1e0.ContainerReference = (void *)0x0;
        local_1e0.Reference = &this->SimplificationAngleThreshold;
        local_168.ErrorTolerance = (double)*pfVar9;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1e0);
        pfVar9 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_1e0.Reference);
        local_1c8.Index = -1;
        local_1c8.ContainerReference = (void *)0x0;
        local_168.bUseExistingVertexPositions = this->bUseExistingVertices;
        local_168.AngleThreshold = (double)*pfVar9;
        local_1c8.Reference = &this->MinTargetTriangleCount;
        local_168.bUseGeometricTolerance = true;
        local_168.bUseTargetTriangleCount = true;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
        piVar10 = FDataflowInput::GetValue<int>(pFVar6,param_1,local_1c8.Reference);
        local_168.TargetTriangleCount = *piVar10;
        local_1a8 = pFVar12;
        if ((iVar11 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_118._12_4_ = uStack_19c;
        local_118.ArrayNum = iVar11;
        local_118.DataPtr = (int *)local_1a8;
        iStack_1a0 = iVar11;
        UE::FractureEngine::Convex::SimplifyConvexHulls(&local_f8,&local_168,bVar13,&local_118);
        FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
      }
    }
  }
  return;
}

// FSimplifyConvexHullsDataflowNode @ 14e92c3b0

FSimplifyConvexHullsDataflowNode * __thiscall
FSimplifyConvexHullsDataflowNode::FSimplifyConvexHullsDataflowNode
          (FSimplifyConvexHullsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar2;
  FLinearColor FVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FSimplifyConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar2 = &this->OptionalSelectionFilter;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar4;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  this->SimplifyMethod = MeshQSlim;
  this->SimplificationAngleThreshold = 10.0;
  this->SimplificationDistanceThreshold = 10.0;
  this->MinTargetTriangleCount = 0xc;
  this->bUseExistingVertices = false;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar3 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SimplificationAngleThreshold;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SimplificationDistanceThreshold;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MinTargetTriangleCount;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 2.0;
  return this;
}

// FSimplifyConvexHullsDataflowNode @ 14e92c5e0

FSimplifyConvexHullsDataflowNode * __thiscall
FSimplifyConvexHullsDataflowNode::FSimplifyConvexHullsDataflowNode
          (FSimplifyConvexHullsDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSimplifyConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->OptionalSelectionFilter).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->OptionalSelectionFilter).field_0x4 = uVar2;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  this->bUseExistingVertices = false;
  this->SimplificationAngleThreshold = 10.0;
  this->SimplificationDistanceThreshold = 10.0;
  this->MinTargetTriangleCount = 0xc;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar1 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ColorRandomSeed = 0;
  this->bRandomizeColor = true;
  return this;
}

