// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e85fc50

UScriptStruct * __cdecl FBoxProjectUVDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxProjectUVDataflowNode,(UObject *)pUVar1,
                         L"BoxProjectUVDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton;
}

// GetType @ 14e85fe40

FName __thiscall FBoxProjectUVDataflowNode::GetType(FBoxProjectUVDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoxProjectUVDataflowNode");
  return in_RDX;
}

// IsA @ 14e85fe70

bool __thiscall FBoxProjectUVDataflowNode::IsA(FBoxProjectUVDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoxProjectUVDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e85fed8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e85fed8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e85fef6;
      }
    }
  }
  bVar5 = true;
LAB_14e85fef6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e85ff30

FStructOnScope * __thiscall
FBoxProjectUVDataflowNode::NewStructOnScope(FBoxProjectUVDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoxProjectUVDataflowNode,(UObject *)pUVar2,
                           L"BoxProjectUVDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e860350

void __thiscall
FBoxProjectUVDataflowNode::SerializeInternal(FBoxProjectUVDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxProjectUVDataflowNode,(UObject *)pUVar1,
                         L"BoxProjectUVDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8603cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8603e0

FName __thiscall FBoxProjectUVDataflowNode::GetDisplayName(FBoxProjectUVDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BoxProjectUV");
  return in_RDX;
}

// GetCategory @ 14e860410

FName __thiscall FBoxProjectUVDataflowNode::GetCategory(FBoxProjectUVDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|UV");
  return in_RDX;
}

// GetTags @ 14e860440

FString * __thiscall
FBoxProjectUVDataflowNode::GetTags(FBoxProjectUVDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e860470

UScriptStruct * __thiscall
FBoxProjectUVDataflowNode::TypedScriptStruct(FBoxProjectUVDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxProjectUVDataflowNode,(UObject *)pUVar1,
                         L"BoxProjectUVDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoxProjectUVDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e8604f0

/* WARNING: Removing unreachable block (ram,0x00014e860728) */
/* WARNING: Removing unreachable block (ram,0x00014e860736) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FBoxProjectUVDataflowNode::GetRenderParametersImpl
          (FBoxProjectUVDataflowNode *this,
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

// Evaluate @ 14e860820

void __thiscall
FBoxProjectUVDataflowNode::Evaluate
          (FBoxProjectUVDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  TVector2<float>_u_0_s_0 TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  FDataflowInput *pFVar7;
  FManagedArrayCollection *this_00;
  int *piVar8;
  TVector<double> *pTVar9;
  TVector2<float>_u_0 *pTVar10;
  FGeometryCollection *pFVar11;
  FConnectionReference local_178;
  FConnectionReference local_160;
  FConnectionReference local_148;
  FConnectionReference local_130;
  FConnectionReference local_118;
  FConnectionReference local_100;
  FConnectionReference local_e8;
  FConnectionReference local_d0;
  FConnectionReference local_b8;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  FConnectionReference local_88;
  FConnectionReference local_70;
  TArrayView<int,int> local_58;
  TVector<double>_u_0 local_48;
  
  piVar8 = &this->UVChannel;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar6 == piVar8) {
    local_178.ContainerReference = (void *)0x0;
    local_178.Index = -1;
    local_178.Reference = piVar8;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_178);
    if (pFVar7->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<int_const_&,int>
                ((FDataflowNode *)this,param_1,local_178.Reference,piVar8);
    }
    else {
      local_88.Index = -1;
      local_88.ContainerReference = (void *)0x0;
      local_88.Reference = piVar8;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_178,&local_88);
    }
  }
  else {
    pFVar1 = &this->Collection;
    puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar6 == pFVar1) {
      this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar1);
      iVar5 = FManagedArrayCollection::NumElements(this_00,FGeometryCollection::FacesGroup);
      if (iVar5 == 0) {
        local_160.Index = -1;
        local_160.ContainerReference = (void *)0x0;
        local_160.Reference = pFVar1;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_160);
        if (pFVar7->Connection == (FDataflowOutput *)0x0) {
          FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                    ((FDataflowNode *)this,param_1,local_160.Reference,pFVar1);
        }
        else {
          local_70.Index = -1;
          local_70.ContainerReference = (void *)0x0;
          local_70.Reference = pFVar1;
          FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_160,&local_70);
        }
      }
      else {
        local_148.Index = -1;
        local_148.ContainerReference = (void *)0x0;
        local_148.Reference = piVar8;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
        piVar8 = FDataflowInput::GetValue<int>(pFVar7,param_1,local_148.Reference);
        local_130.Index = -1;
        local_130.ContainerReference = (void *)0x0;
        iVar5 = *piVar8;
        local_130.Reference = &this->GutterSize;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_130);
        FDataflowInput::GetValue<int>(pFVar7,param_1,local_130.Reference);
        local_118.Reference = &this->ProjectionScale;
        local_118.Index = -1;
        local_118.ContainerReference = (void *)0x0;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
        pTVar9 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                           (pFVar7,param_1,local_118.Reference);
        local_100.Index = -1;
        local_100.ContainerReference = (void *)0x0;
        local_48._s_0.X = (pTVar9->field0_0x0)._s_0.X;
        local_48._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
        local_48._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
        local_100.Reference = &this->UVOffset;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_100);
        pTVar10 = &FDataflowInput::GetValue<UE::Math::TVector2<float>_>
                             (pFVar7,param_1,local_100.Reference)->field0_0x0;
        local_e8.Index = -1;
        local_e8.ContainerReference = (void *)0x0;
        TVar2 = pTVar10->_s_0;
        local_e8.Reference = &this->bAutoFitToBounds;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e8);
        FDataflowInput::GetValue<bool>(pFVar7,param_1,local_e8.Reference);
        local_d0.Reference = &this->bCenterBoxAtPivot;
        local_d0.Index = -1;
        local_d0.ContainerReference = (void *)0x0;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d0);
        FDataflowInput::GetValue<bool>(pFVar7,param_1,local_d0.Reference);
        local_b8.Reference = &this->bUniformProjectionScale;
        local_b8.Index = -1;
        local_b8.ContainerReference = (void *)0x0;
        pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b8);
        FDataflowInput::GetValue<bool>(pFVar7,param_1,local_b8.Reference);
        pFVar11 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
        if ((pFVar11 == (FGeometryCollection *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("GeomCollection.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionUVNodes.cpp"
                               ,0xfc,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_98 = 0;
        uStack_90 = 0;
        local_58._8_8_ = (ulonglong)uStack_8c << 0x20;
        local_58.DataPtr = (int *)0x0;
        UE::PlanarCut::BoxProjectUVs
                  (iVar5,pFVar11,(TVector<double> *)&local_48._s_0,AllFaces,&local_58,
                   (TVector2<float>)TVar2,this->bAutoFitToBounds,this->bCenterBoxAtPivot,
                   this->bUniformProjectionScale);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar11,pFVar1);
        if (pFVar11 != (FGeometryCollection *)0x0) {
          (**(code **)pFVar11->_padding_)(pFVar11,1);
        }
      }
    }
  }
  return;
}

// FBoxProjectUVDataflowNode @ 14e912b60

FBoxProjectUVDataflowNode * __thiscall
FBoxProjectUVDataflowNode::FBoxProjectUVDataflowNode
          (FBoxProjectUVDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FName this_01;
  FDataflowInput *pFVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FName local_res18;
  int *local_res20;
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FBoxProjectUVDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res20 = &this->UVChannel;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  *local_res20 = 0;
  local_78.ContainerReference = (void *)0x0;
  (this->ProjectionScale).field0_0x0._s_0.X = 100.0;
  this->GutterSize = 1;
  this->bAutoFitToBounds = false;
  this->bCenterBoxAtPivot = false;
  (this->ProjectionScale).field0_0x0._s_0.Y = 100.0;
  (this->ProjectionScale).field0_0x0._s_0.Z = 100.0;
  (this->UVOffset).field0_0x0._s_0.X = 0.5;
  (this->UVOffset).field0_0x0._s_0.Y = 0.5;
  this->bUniformProjectionScale = false;
  local_78.Index = -1;
  local_78.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,&local_res18)
  ;
  local_78.Reference = local_res20;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,&local_res18)
  ;
  this_01 = local_res8;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->ProjectionScale;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,&local_res18)
  ;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->UVOffset;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_01,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->bAutoFitToBounds;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_01,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->bCenterBoxAtPivot;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_01,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->bUniformProjectionScale;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_01,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->GutterSize;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_01,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = this_00;
  local_58.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_01,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_78);
  }
  local_78.Reference = (void *)((longlong)this_01 + 0x2f8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_01,&local_58,&local_res8);
  if (local_78.Reference != (int *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_78);
  }
  return (FBoxProjectUVDataflowNode *)this_01;
}

// FBoxProjectUVDataflowNode @ 14e912e00

FBoxProjectUVDataflowNode * __thiscall
FBoxProjectUVDataflowNode::FBoxProjectUVDataflowNode(FBoxProjectUVDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBoxProjectUVDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->UVChannel = 0;
  (this->ProjectionScale).field0_0x0._s_0.X = 100.0;
  (this->ProjectionScale).field0_0x0._s_0.Y = 100.0;
  (this->ProjectionScale).field0_0x0._s_0.Z = 100.0;
  this->GutterSize = 1;
  (this->UVOffset).field0_0x0._s_0.X = 0.5;
  (this->UVOffset).field0_0x0._s_0.Y = 0.5;
  this->bAutoFitToBounds = false;
  this->bCenterBoxAtPivot = false;
  this->bUniformProjectionScale = false;
  return this;
}

