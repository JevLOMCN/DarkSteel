// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d50a0

UScriptStruct * __cdecl FVisualizeFractureDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeFractureDataflowNode,(UObject *)pUVar1,
                         L"VisualizeFractureDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton;
}

// GetType @ 14e8d5350

FName __thiscall FVisualizeFractureDataflowNode::GetType(FVisualizeFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FVisualizeFractureDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d5430

bool __thiscall
FVisualizeFractureDataflowNode::IsA(FVisualizeFractureDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FVisualizeFractureDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d5498;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d5498:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d54b6;
      }
    }
  }
  bVar5 = true;
LAB_14e8d54b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d54f0

FStructOnScope * __thiscall
FVisualizeFractureDataflowNode::NewStructOnScope(FVisualizeFractureDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeFractureDataflowNode,
                           (UObject *)pUVar2,L"VisualizeFractureDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d5570

void __thiscall
FVisualizeFractureDataflowNode::SerializeInternal
          (FVisualizeFractureDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeFractureDataflowNode,(UObject *)pUVar1,
                         L"VisualizeFractureDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d55ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d5630

FName __thiscall
FVisualizeFractureDataflowNode::GetDisplayName(FVisualizeFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VisualizeFracture");
  return in_RDX;
}

// GetCategory @ 14e8d5660

FName __thiscall FVisualizeFractureDataflowNode::GetCategory(FVisualizeFractureDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture|Utilities");
  return in_RDX;
}

// GetTags @ 14e8d5750

FString * __thiscall
FVisualizeFractureDataflowNode::GetTags
          (FVisualizeFractureDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d5800

UScriptStruct * __thiscall
FVisualizeFractureDataflowNode::TypedScriptStruct(FVisualizeFractureDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeFractureDataflowNode,(UObject *)pUVar1,
                         L"VisualizeFractureDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVisualizeFractureDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d5da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVisualizeFractureDataflowNode::Evaluate
          (FVisualizeFractureDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FName FVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  FManagedArrayCollection *pFVar16;
  FDataflowInput *pFVar17;
  TVector<double> *pTVar18;
  FName *pFVar19;
  TManagedArray<UE::Math::TVector<float>_> *pTVar20;
  int *piVar21;
  float *pfVar22;
  TManagedArray<FLinearColor> *pTVar23;
  FString *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  undefined1 auStackY_268 [32];
  FRandomStream local_238;
  FConnectionReference local_230;
  FConnectionReference local_218;
  FConnectionReference local_200;
  FConnectionReference local_1e8;
  FConnectionReference local_1d0;
  FConnectionReference local_1b8;
  FConnectionReference local_1a0;
  FName local_188;
  FName local_180;
  FName local_178 [2];
  FLinearColor_u_0 local_168;
  FLinearColor_u_0 local_158;
  FString local_148;
  FManagedArrayCollection local_138;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_268;
  puVar15 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar15 == &this->Collection) {
    pFVar16 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_138,pFVar16);
    local_218.Reference = &this->Offset;
    local_218.Index = -1;
    uVar25 = 0;
    local_218.ContainerReference = (void *)0x0;
    pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,&local_218);
    pTVar18 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar17,param_1,local_218.Reference);
    FVar10 = FGeometryCollection::VerticesGroup;
    pvVar3 = (void *)(pTVar18->field0_0x0)._s_0.Z;
    dVar29 = SUB168(*(undefined1 (*) [16])&pTVar18->field0_0x0,0);
    dVar28 = SUB168(*(undefined1 (*) [16])&pTVar18->field0_0x0,8);
    local_1a0.ContainerReference = pvVar3;
    if (__real_3f1a36e2e0000000 <
        SQRT(dVar29 * dVar29 + dVar28 * dVar28 + (double)pvVar3 * (double)pvVar3)) {
      pFVar19 = ::FName::FName(&local_188,"Vertex");
      pTVar20 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                          (&local_138,*pFVar19,FVar10);
      iVar12 = (**(code **)(*(longlong *)pTVar20 + 0x60))(pTVar20);
      if (0 < iVar12) {
        uVar27 = uVar25;
        do {
          uVar26 = (uint)uVar27;
          uVar13 = 0;
          if ((int)uVar26 < *(int *)&pTVar20->field_0x18) {
            uVar13 = ~uVar26 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)&pTVar20->field_0x10;
          uVar27 = (ulonglong)(uVar26 + 1);
          *(float *)(uVar25 + lVar4) = (float)dVar29 + *(float *)(uVar25 + lVar4);
          *(float *)(uVar25 + 4 + lVar4) = (float)dVar28 + *(float *)(uVar25 + 4 + lVar4);
          *(float *)(uVar25 + 8 + lVar4) = (float)(double)pvVar3 + *(float *)(uVar25 + 8 + lVar4);
          uVar25 = uVar25 + 0xc;
          iVar12 = (**(code **)(*(longlong *)pTVar20 + 0x60))(pTVar20);
        } while ((int)(uVar26 + 1) < iVar12);
      }
    }
    local_200.Reference = &this->Level;
    local_200.Index = -1;
    local_200.ContainerReference = (void *)0x0;
    pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,&local_200);
    piVar21 = FDataflowInput::GetValue<int>(pFVar17,param_1,local_200.Reference);
    iVar12 = *piVar21;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InLevel >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionFracturingNodes.cpp"
                            ,0x599,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (this->bApplyExplodedView != false) {
      local_1e8.Reference = &this->ExplodeAmount;
      local_1e8.Index = -1;
      local_1e8.ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1e8);
      pfVar22 = FDataflowInput::GetValue<float>(pFVar17,param_1,local_1e8.Reference);
      local_1d0.Index = -1;
      local_1d0.ContainerReference = (void *)0x0;
      fVar1 = *pfVar22;
      local_1d0.Reference = &this->Scale;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d0);
      pTVar18 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                          (pFVar17,param_1,local_1d0.Reference);
      FFractureEngineFracturing::GenerateExplodedViewAttribute(&local_138,pTVar18,fVar1,iVar12,-1);
    }
    FVar10 = FTransformCollection::TransformGroup;
    if (this->bApplyColor == false) {
      local_230.Reference = &this->Collection;
      local_230.Index = -1;
      local_230.ContainerReference = (void *)0x0;
      pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,&local_230);
      if (pFVar17->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_230.Reference,&this->Collection);
      }
      else {
        local_1a0.Index = -1;
        local_1a0.ContainerReference = (void *)0x0;
        local_1a0.Reference = &this->Collection;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_230,&local_1a0);
      }
    }
    else {
      pFVar19 = ::FName::FName(&local_180,"BoneColor");
      bVar11 = FManagedArrayCollection::HasAttribute(&local_138,*pFVar19,FVar10);
      FVar10 = FTransformCollection::TransformGroup;
      if (bVar11) {
        pFVar19 = ::FName::FName(local_178,"BoneColor");
        pTVar23 = FManagedArrayCollection::ModifyAttribute<FLinearColor>(&local_138,*pFVar19,FVar10)
        ;
        iVar14 = (**(code **)(*(longlong *)pTVar23 + 0x60))(pTVar23);
        local_1b8.Reference = &this->RandomSeed;
        local_1b8.Index = -1;
        local_1b8.ContainerReference = (void *)0x0;
        pFVar17 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b8);
        piVar21 = FDataflowInput::GetValue<int>(pFVar17,param_1,local_1b8.Reference);
        local_238.InitialSeed = *piVar21 + iVar14;
        local_238.Seed = local_238.InitialSeed;
        FFractureEngineFracturing::InitColors(&local_138);
        if ((this->ColoringType == ColorByParent) &&
           (bVar11 = FManagedArrayCollection::HasAttribute
                               (&local_138,FTransformCollection::LevelAttribute,
                                FTransformCollection::TransformGroup), bVar11)) {
          FFractureEngineFracturing::SetBoneColorByParent
                    (&local_138,&local_238,iVar12,this->RandomColorRangeMin,
                     this->RandomColorRangeMax);
        }
        else if ((this->ColoringType == ColorByLevel) &&
                (bVar11 = FManagedArrayCollection::HasAttribute
                                    (&local_138,FTransformCollection::LevelAttribute,
                                     FTransformCollection::TransformGroup), bVar11)) {
          FFractureEngineFracturing::SetBoneColorByLevel(&local_138,iVar12);
        }
        else if ((this->ColoringType == ColorByCluster) &&
                (bVar11 = FManagedArrayCollection::HasAttribute
                                    (&local_138,FTransformCollection::LevelAttribute,
                                     FTransformCollection::TransformGroup), bVar11)) {
          FFractureEngineFracturing::SetBoneColorByCluster
                    (&local_138,&local_238,iVar12,this->RandomColorRangeMin,
                     this->RandomColorRangeMax);
        }
        else if ((this->ColoringType == ColorByLeafLevel) &&
                (bVar11 = FManagedArrayCollection::HasAttribute
                                    (&local_138,FTransformCollection::LevelAttribute,
                                     FTransformCollection::TransformGroup), bVar11)) {
          FFractureEngineFracturing::SetBoneColorByLeafLevel(&local_138,iVar12);
        }
        else if (this->ColoringType == ColorByLeaf) {
          FFractureEngineFracturing::SetBoneColorByLeaf
                    (&local_138,&local_238,iVar12,this->RandomColorRangeMin,
                     this->RandomColorRangeMax);
        }
        else if (this->ColoringType == ColorByAttr) {
          uVar6 = *(undefined8 *)&(this->Max).MaxColor.field0_0x0;
          uVar7 = *(undefined8 *)((longlong)&(this->Max).MaxColor.field0_0x0 + 8);
          uVar8 = *(undefined8 *)&(this->Min).MinColor.field0_0x0;
          uVar9 = *(undefined8 *)((longlong)&(this->Min).MinColor.field0_0x0 + 8);
          fVar1 = (this->Max).MaxAttrValue;
          fVar2 = (this->Min).MinAttrValue;
          pFVar24 = ::FString::FString(&local_148,&this->Attribute);
          local_168._0_8_ = uVar6;
          local_168._8_8_ = uVar7;
          local_158._0_8_ = uVar8;
          local_158._8_8_ = uVar9;
          FFractureEngineFracturing::SetBoneColorByAttr
                    (&local_138,pFVar24,fVar2,fVar1,(FLinearColor *)&local_158._s_0,
                     (FLinearColor *)&local_168._s_0);
        }
        FFractureEngineFracturing::TransferBoneColorToVertexColor(&local_138);
        FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,&local_138,&this->Collection);
      }
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_138);
  }
  return;
}

// FVisualizeFractureDataflowNode @ 14e931a40

FVisualizeFractureDataflowNode * __thiscall
FVisualizeFractureDataflowNode::FVisualizeFractureDataflowNode
          (FVisualizeFractureDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowInput *pFVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FVisualizeFractureDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this->bApplyExplodedView = true;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  (this->Min).MinAttrValue = 0.0;
  this->bApplyColor = true;
  this->ColoringType = ColorByLevel;
  this->Level = 0;
  this->RandomSeed = 0;
  this->ExplodeAmount = 0.5;
  this->RandomColorRangeMin = 0x28;
  this->RandomColorRangeMax = 0xbe;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  (this->Min).MinColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->Max).MaxAttrValue = 1.0;
  local_68.Index = -1;
  (this->Max).MaxColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  (this->Offset).field0_0x0._s_0.X = 0.0;
  (this->Offset).field0_0x0._s_0.Y = 0.0;
  (this->Offset).field0_0x0._s_0.Z = 0.0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomSeed;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Level;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->ExplodeAmount;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Scale;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Offset;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  return this;
}

// FVisualizeFractureDataflowNode @ 14e931ca0

FVisualizeFractureDataflowNode * __thiscall
FVisualizeFractureDataflowNode::FVisualizeFractureDataflowNode(FVisualizeFractureDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FVisualizeFractureDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->bApplyExplodedView = true;
  this->Level = 0;
  this->RandomSeed = 0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  this->ExplodeAmount = 0.5;
  this->bApplyColor = true;
  this->ColoringType = ColorByLevel;
  this->RandomColorRangeMin = 0x28;
  this->RandomColorRangeMax = 0xbe;
  (this->Min).MinAttrValue = 0.0;
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Min).MinColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->Max).MaxAttrValue = 1.0;
  (this->Max).MaxColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  (this->Offset).field0_0x0._s_0.X = 0.0;
  (this->Offset).field0_0x0._s_0.Y = 0.0;
  (this->Offset).field0_0x0._s_0.Z = 0.0;
  return this;
}

