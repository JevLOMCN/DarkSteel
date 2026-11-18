// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e82f2b0

UScriptStruct * __cdecl FAddRootProxyMeshToArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode,
                         (UObject *)pUVar1,L"AddRootProxyMeshToArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e82f640

FName __thiscall
FAddRootProxyMeshToArrayDataflowNode::GetType(FAddRootProxyMeshToArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAddRootProxyMeshToArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e82f6d0

bool __thiscall
FAddRootProxyMeshToArrayDataflowNode::IsA(FAddRootProxyMeshToArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAddRootProxyMeshToArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82f738;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82f738:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82f756;
      }
    }
  }
  bVar5 = true;
LAB_14e82f756:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82f7c0

FStructOnScope * __thiscall
FAddRootProxyMeshToArrayDataflowNode::NewStructOnScope(FAddRootProxyMeshToArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode,
                           (UObject *)pUVar2,L"AddRootProxyMeshToArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82f880

void __thiscall
FAddRootProxyMeshToArrayDataflowNode::SerializeInternal
          (FAddRootProxyMeshToArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode,
                         (UObject *)pUVar1,L"AddRootProxyMeshToArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82f8fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82f910

FName __thiscall
FAddRootProxyMeshToArrayDataflowNode::GetDisplayName(FAddRootProxyMeshToArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AddRootProxyMeshToArray");
  return in_RDX;
}

// GetCategory @ 14e82f970

FName __thiscall
FAddRootProxyMeshToArrayDataflowNode::GetCategory(FAddRootProxyMeshToArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e82f9a0

FString * __thiscall
FAddRootProxyMeshToArrayDataflowNode::GetTags
          (FAddRootProxyMeshToArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82fa90

UScriptStruct * __thiscall
FAddRootProxyMeshToArrayDataflowNode::TypedScriptStruct(FAddRootProxyMeshToArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode,
                         (UObject *)pUVar1,L"AddRootProxyMeshToArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddRootProxyMeshToArrayDataflowNode.OuterSingleton;
}

// Evaluate @ 14e82fed0

void __thiscall
FAddRootProxyMeshToArrayDataflowNode::Evaluate
          (FAddRootProxyMeshToArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  FDataflowRootProxyMesh *pFVar3;
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> local_38;
  FConnectionReference local_28;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)puVar2 == &this->RootProxyMeshes
     ) {
    local_28.Reference = &this->RootProxyMesh;
    local_28.ContainerReference = (void *)0x0;
    local_28.Index = -1;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pFVar3 = FDataflowInput::GetValue<FDataflowRootProxyMesh>(this_00,param_1,local_28.Reference);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1080,&local_38.AllocatorInstance,&local_38.ArrayMax);
    local_38.ArrayNum = iVar1 + 1;
    FDataflowRootProxyMesh::FDataflowRootProxyMesh
              ((FDataflowRootProxyMesh *)(local_38.AllocatorInstance.Data + (longlong)iVar1 * 0x80),
               pFVar3);
    FDataflowNode::
    SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_38,&this->RootProxyMeshes);
    DestructItems<FDataflowRootProxyMesh,int>
              ((FDataflowRootProxyMesh *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FDataflowRootProxyMesh *)local_38.AllocatorInstance.Data != (FDataflowRootProxyMesh *)0x0)
    {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// FAddRootProxyMeshToArrayDataflowNode @ 14e910120

FAddRootProxyMeshToArrayDataflowNode * __thiscall
FAddRootProxyMeshToArrayDataflowNode::FAddRootProxyMeshToArrayDataflowNode
          (FAddRootProxyMeshToArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  pTVar1 = &this->RootProxyMeshes;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FAddRootProxyMeshToArrayDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  (this->RootProxyMesh).Mesh.field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_58.ContainerReference = (void *)0x0;
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Scale3D.ZW.m128d_f64 = auVar9;
  (this->RootProxyMesh).OverrideMaterials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMesh).OverrideMaterials.ArrayNum = 0;
  (this->RootProxyMesh).OverrideMaterials.ArrayMax = 0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->RootProxyMesh;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FAddRootProxyMeshToArrayDataflowNode @ 14e910270

/* WARNING: Type propagation algorithm not settling */

FAddRootProxyMeshToArrayDataflowNode * __thiscall
FAddRootProxyMeshToArrayDataflowNode::FAddRootProxyMeshToArrayDataflowNode
          (FAddRootProxyMeshToArrayDataflowNode *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FAddRootProxyMeshToArrayDataflowNode__6B_;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  (this->RootProxyMesh).Mesh.field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RootProxyMesh).Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RootProxyMesh).Transform.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootProxyMesh).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootProxyMesh).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RootProxyMesh).Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RootProxyMesh).Transform.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RootProxyMesh).Transform.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootProxyMesh).Transform.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RootProxyMesh).Transform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RootProxyMesh).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RootProxyMesh).Transform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RootProxyMesh).Transform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->RootProxyMesh).OverrideMaterials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMesh).OverrideMaterials.ArrayNum = 0;
  (this->RootProxyMesh).OverrideMaterials.ArrayMax = 0;
  return this;
}

