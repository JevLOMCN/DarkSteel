// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e85c660

UScriptStruct * __cdecl FMergeUVIslandsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMergeUVIslandsDataflowNode,(UObject *)pUVar1,
                         L"MergeUVIslandsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton;
}

// GetType @ 14e85c9b0

FName __thiscall FMergeUVIslandsDataflowNode::GetType(FMergeUVIslandsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMergeUVIslandsDataflowNode");
  return in_RDX;
}

// IsA @ 14e85ca90

bool __thiscall FMergeUVIslandsDataflowNode::IsA(FMergeUVIslandsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMergeUVIslandsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e85caf8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e85caf8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e85cb16;
      }
    }
  }
  bVar5 = true;
LAB_14e85cb16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e85cb50

FStructOnScope * __thiscall
FMergeUVIslandsDataflowNode::NewStructOnScope(FMergeUVIslandsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMergeUVIslandsDataflowNode,(UObject *)pUVar2,
                           L"MergeUVIslandsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e85cd10

void __thiscall
FMergeUVIslandsDataflowNode::SerializeInternal(FMergeUVIslandsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMergeUVIslandsDataflowNode,(UObject *)pUVar1,
                         L"MergeUVIslandsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85cd8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e85cda0

FName __thiscall FMergeUVIslandsDataflowNode::GetDisplayName(FMergeUVIslandsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MergeUVIslands");
  return in_RDX;
}

// GetCategory @ 14e85cdd0

FName __thiscall FMergeUVIslandsDataflowNode::GetCategory(FMergeUVIslandsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|UV");
  return in_RDX;
}

// GetTags @ 14e85ce00

FString * __thiscall
FMergeUVIslandsDataflowNode::GetTags
          (FMergeUVIslandsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e85ce30

UScriptStruct * __thiscall
FMergeUVIslandsDataflowNode::TypedScriptStruct(FMergeUVIslandsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMergeUVIslandsDataflowNode,(UObject *)pUVar1,
                         L"MergeUVIslandsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMergeUVIslandsDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e85d270

/* WARNING: Removing unreachable block (ram,0x00014e85d4a8) */
/* WARNING: Removing unreachable block (ram,0x00014e85d4b6) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FMergeUVIslandsDataflowNode::GetRenderParametersImpl
          (FMergeUVIslandsDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FString *pFVar5;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18 [2];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FName local_88;
  FName FStack_80;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = ::FName::FName(local_res18,"3DView");
  ::FName::FName(&local_88,"Collection");
  ::FName::FName(&FStack_80,"UVChannel");
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_98,2,&local_8c);
  *(FName *)local_98.Data = local_88;
  *(FName *)(local_98.Data + 8) = FStack_80;
  ::FName::FName(&local_res10,"FGeometryCollection");
  pFVar5 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar5);
  _Src.Data = local_98.Data;
  local_58 = local_res10;
  lVar8 = (longlong)local_90;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_90);
  if (local_90 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_90,0,&local_50,local_90,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar8 << 3);
  }
  local_40 = *pFVar4;
  pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x30;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar7 + 0x10) = local_58;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar7 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar7 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar7 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_98.Data != (FName *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e85d580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMergeUVIslandsDataflowNode::Evaluate
          (FMergeUVIslandsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  int iVar9;
  undefined1 *puVar10;
  FDataflowInput *pFVar11;
  FManagedArrayCollection *this_00;
  int *piVar12;
  double *pdVar13;
  FGeometryCollection *pFVar14;
  FDataflowSelection *this_01;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1b8;
  FConnectionReference local_1a8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_188;
  FConnectionReference local_178;
  FConnectionReference local_160;
  FConnectionReference local_148;
  FConnectionReference local_130;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  FConnectionReference local_f8;
  FConnectionReference local_e0;
  FMergeIslandSettings local_c8;
  TArrayView<bool,int> local_a8;
  TArrayView<bool,int> local_98;
  FMergeIslandSettings local_88 [2];
  
  piVar12 = &this->UVChannel;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar10 == piVar12) {
    local_178.ContainerReference = (void *)0x0;
    local_178.Index = -1;
    local_178.Reference = piVar12;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_178);
    if (pFVar11->Connection != (FDataflowOutput *)0x0) {
      local_f8.Index = -1;
      local_f8.ContainerReference = (void *)0x0;
      local_f8.Reference = piVar12;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_178,&local_f8);
      return;
    }
    FDataflowNode::SetValue<int_const_&,int>
              ((FDataflowNode *)this,param_1,local_178.Reference,piVar12);
    return;
  }
  pFVar1 = &this->Collection;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar10 != pFVar1) {
    return;
  }
  this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  iVar9 = FManagedArrayCollection::NumElements(this_00,FGeometryCollection::FacesGroup);
  uVar16 = 0;
  if (iVar9 == 0) {
    local_160.Index = -1;
    local_160.ContainerReference = (void *)0x0;
    local_160.Reference = pFVar1;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_160);
    if (pFVar11->Connection != (FDataflowOutput *)0x0) {
      local_e0.Index = -1;
      local_e0.ContainerReference = (void *)0x0;
      local_e0.Reference = pFVar1;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_160,&local_e0);
      return;
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_160.Reference,pFVar1);
    return;
  }
  local_148.Index = -1;
  local_148.ContainerReference = (void *)0x0;
  local_148.Reference = piVar12;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
  piVar12 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_148.Reference);
  iVar9 = *piVar12;
  pdVar13 = FDataflowNode::GetValue<double>
                      ((FDataflowNode *)this,param_1,&this->MaxNormalDeviationDeg);
  uVar21 = SUB84(*pdVar13,0);
  uVar22 = (undefined4)((ulonglong)*pdVar13 >> 0x20);
  pdVar13 = FDataflowNode::GetValue<double>
                      ((FDataflowNode *)this,param_1,&this->AreaDistortionThreshold);
  uVar5 = *(undefined4 *)pdVar13;
  uVar6 = *(undefined4 *)((longlong)pdVar13 + 4);
  pdVar13 = FDataflowNode::GetValue<double>
                      ((FDataflowNode *)this,param_1,&this->NormalSmoothingAlpha);
  local_130.Index = -1;
  local_130.ContainerReference = (void *)0x0;
  uVar19 = SUB84(*pdVar13,0);
  uVar20 = (undefined4)((ulonglong)*pdVar13 >> 0x20);
  local_130.Reference = &this->NormalSmoothingRounds;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_130);
  piVar12 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_130.Reference);
  iVar2 = *piVar12;
  pFVar14 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
  if ((pFVar14 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeomCollection.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionUVNodes.cpp"
                         ,0x6d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1a8.Index = -1;
  local_1a8.ContainerReference = (void *)0x0;
  local_1a8.Reference = &this->FaceSelection;
  pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1a8);
  if (pFVar11->Connection == (FDataflowOutput *)0x0) {
    FManagedBitArrayBase::GetAsBoolArray((FManagedBitArrayBase *)&pFVar14->Visible,&local_188);
    local_108 = local_188.AllocatorInstance.Data;
    if ((local_188.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1a8.ContainerReference = (void *)CONCAT44(local_c8._20_4_,iVar2);
    iStack_100 = local_188.ArrayNum;
    local_98.DataPtr = (bool *)local_108;
    local_c8.AreaDistortionThreshold._0_4_ = uVar5;
    local_c8.AreaDistortionThreshold._4_4_ = uVar6;
    local_c8.MaxNormalDeviationDeg._0_4_ = uVar21;
    local_c8.MaxNormalDeviationDeg._4_4_ = uVar22;
    local_c8.NormalSmoothingRounds = iVar2;
    local_c8.NormalSmoothingAlpha._0_4_ = uVar19;
    local_c8.NormalSmoothingAlpha._4_4_ = uVar20;
    UE::PlanarCut::MergeUVIslands(iVar9,pFVar14,&local_c8,&local_98,(FProgressCancel *)0x0);
  }
  else {
    this_01 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowFaceSelection>
                        ((FDataflowNode *)this,param_1,&this->FaceSelection);
    iVar3 = (this_01->SelectionArray).NumBits;
    if (iVar3 < 1) goto LAB_14e85d9f6;
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1b8,iVar3,Default);
    uVar18 = uVar16;
    if (0 < (this_01->SelectionArray).NumBits) {
      do {
        uVar17 = (uint)uVar16;
        FVar8 = (FScriptContainerElement)FDataflowSelection::IsSelected(this_01,uVar17);
        uVar15 = 0;
        if ((int)uVar17 < local_1b8.ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar16 = (ulonglong)(uVar17 + 1);
        local_1b8.AllocatorInstance.Data[uVar18] = FVar8;
        uVar18 = uVar18 + 1;
      } while ((int)(uVar17 + 1) < (this_01->SelectionArray).NumBits);
    }
    iVar3 = local_1b8.ArrayNum;
    local_118 = local_1b8.AllocatorInstance.Data;
    if ((local_1b8.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1a8.ContainerReference = (void *)CONCAT44(local_c8._20_4_,iVar2);
    iStack_110 = iVar3;
    local_a8._12_4_ = uStack_10c;
    local_a8.ArrayNum = iVar3;
    local_a8.DataPtr = (bool *)local_118;
    local_88[0]._20_4_ = local_c8._20_4_;
    local_88[0].AreaDistortionThreshold._0_4_ = uVar5;
    local_88[0].AreaDistortionThreshold._4_4_ = uVar6;
    local_88[0].MaxNormalDeviationDeg._0_4_ = uVar21;
    local_88[0].MaxNormalDeviationDeg._4_4_ = uVar22;
    local_88[0].NormalSmoothingRounds = iVar2;
    local_88[0].NormalSmoothingAlpha._0_4_ = uVar19;
    local_88[0].NormalSmoothingAlpha._4_4_ = uVar20;
    UE::PlanarCut::MergeUVIslands(iVar9,pFVar14,local_88,&local_a8,(FProgressCancel *)0x0);
    local_188.AllocatorInstance.Data = local_1b8.AllocatorInstance.Data;
  }
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
LAB_14e85d9f6:
  FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar14,&this->Collection);
  if (pFVar14 != (FGeometryCollection *)0x0) {
    (**(code **)pFVar14->_padding_)(pFVar14,1);
  }
  return;
}

// FMergeUVIslandsDataflowNode @ 14e924e50

FMergeUVIslandsDataflowNode * __thiscall
FMergeUVIslandsDataflowNode::FMergeUVIslandsDataflowNode
          (FMergeUVIslandsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowFaceSelection *pFVar2;
  int *piVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  FDataflowOutput *pFVar6;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FMergeUVIslandsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar2 = &this->FaceSelection;
  uVar4 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar4;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  this->UVChannel = 0;
  this->AreaDistortionThreshold = 1.5;
  this->NormalSmoothingRounds = 0;
  this->MaxNormalDeviationDeg = 45.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  this->NormalSmoothingAlpha = 0.25;
  local_68.Index = -1;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  piVar3 = &this->UVChannel;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = piVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->AreaDistortionThreshold;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MaxNormalDeviationDeg;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->NormalSmoothingRounds;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->NormalSmoothingAlpha;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = piVar3;
  local_48.Reference = piVar3;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (int *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  return this;
}

// FMergeUVIslandsDataflowNode @ 14e9250d0

FMergeUVIslandsDataflowNode * __thiscall
FMergeUVIslandsDataflowNode::FMergeUVIslandsDataflowNode(FMergeUVIslandsDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMergeUVIslandsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined8 *)&(this->FaceSelection).field_0x24 = 0x80;
  this->AreaDistortionThreshold = 1.5;
  this->MaxNormalDeviationDeg = 45.0;
  this->NormalSmoothingAlpha = 0.25;
  this->NormalSmoothingRounds = 0;
  return this;
}

