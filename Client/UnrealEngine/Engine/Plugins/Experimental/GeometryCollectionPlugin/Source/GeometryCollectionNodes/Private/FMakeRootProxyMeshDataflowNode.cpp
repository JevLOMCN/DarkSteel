// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8db9d0

UScriptStruct * __cdecl FMakeRootProxyMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeRootProxyMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e8dbdf0

FName __thiscall FMakeRootProxyMeshDataflowNode::GetType(FMakeRootProxyMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeRootProxyMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8dbe80

bool __thiscall
FMakeRootProxyMeshDataflowNode::IsA(FMakeRootProxyMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeRootProxyMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8dbee8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8dbee8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8dbf06;
      }
    }
  }
  bVar5 = true;
LAB_14e8dbf06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8dbf80

FStructOnScope * __thiscall
FMakeRootProxyMeshDataflowNode::NewStructOnScope(FMakeRootProxyMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshDataflowNode,
                           (UObject *)pUVar2,L"MakeRootProxyMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8dc000

void __thiscall
FMakeRootProxyMeshDataflowNode::SerializeInternal
          (FMakeRootProxyMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeRootProxyMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8dc07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8dc0e0

FName __thiscall
FMakeRootProxyMeshDataflowNode::GetDisplayName(FMakeRootProxyMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeRootProxyMesh");
  return in_RDX;
}

// GetCategory @ 14e8dc110

FName __thiscall FMakeRootProxyMeshDataflowNode::GetCategory(FMakeRootProxyMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e8dc140

FString * __thiscall
FMakeRootProxyMeshDataflowNode::GetTags
          (FMakeRootProxyMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8dc170

UScriptStruct * __thiscall
FMakeRootProxyMeshDataflowNode::TypedScriptStruct(FMakeRootProxyMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeRootProxyMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8dc210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMakeRootProxyMeshDataflowNode::Evaluate
          (FMakeRootProxyMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 *puVar6;
  FDataflowInput *pFVar7;
  TObjectPtr<UStaticMesh>_u_0 *pTVar8;
  TTransform<double> *pTVar9;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar10;
  FDataflowOutput *this_00;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  FContextCacheElementUStruct *pFVar14;
  FContextCacheElementUStruct *pFVar15;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [8];
  FContextCacheElementUStruct *local_120;
  FConnectionReference local_118;
  FConnectionReference local_f8 [2];
  TObjectPtr<UStaticMesh>_u_0 local_c8 [2];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowRootProxyMesh *)puVar6 == &this->RootProxyMesh) {
    local_118.Reference = &this->Mesh;
    pFVar15 = (FContextCacheElementUStruct *)0x0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_118.Index = -1;
    local_118.ContainerReference = (void *)0x0;
    local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
    ;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
    pTVar8 = &FDataflowInput::GetValue<TObjectPtr<UStaticMesh>_>(pFVar7,param_1,local_118.Reference)
              ->field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pTVar8->DebugPtr != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pTVar8->DebugPtr);
    }
    local_c8[0].DebugPtr = *(UStaticMesh **)pTVar8;
    local_118.Reference = &this->Transform;
    local_118.Index = -1;
    local_118.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
    pTVar9 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                       (pFVar7,param_1,local_118.Reference);
    local_b8 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
    local_a8 = *(undefined1 (*) [16])(pTVar9->Rotation).ZW.m128d_f64;
    local_98 = *(undefined1 (*) [16])(pTVar9->Translation).XY.m128d_f64;
    local_88 = *(undefined1 (*) [16])(pTVar9->Translation).ZW.m128d_f64;
    local_78 = *(undefined1 (*) [16])(pTVar9->Scale3D).XY.m128d_f64;
    local_68 = *(undefined1 (*) [16])(pTVar9->Scale3D).ZW.m128d_f64;
    pTVar10 = FDataflowNode::
              GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->OverrideMaterials);
    if (&local_58 != pTVar10) {
      iVar1 = pTVar10->ArrayNum;
      pFVar2 = (pTVar10->AllocatorInstance).Data;
      local_58.ArrayNum = iVar1;
      if ((iVar1 != 0) || (local_58.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,local_58.ArrayMax,&local_58.AllocatorInstance,iVar1,&local_58.ArrayMax)
        ;
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  (local_58.AllocatorInstance.Data,(TObjectPtr<UMaterialInterface> *)pFVar2,iVar1);
      }
    }
    local_f8[0].Index = -1;
    local_f8[0].ContainerReference = (void *)0x0;
    local_f8[0].Reference = &this->RootProxyMesh;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,local_f8);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowRootProxyMesh,FDataflowRootProxyMesh>'::__l7::<lambda_1>::
      operator()(local_128);
    }
    else if (this_00->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar5 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)this_00,(FGuid *)&local_118);
      pFVar3 = (FProperty *)this_00->_padding_;
      uVar13 = CityHash64((char *)&this_00->_padding_,0x10);
      local_120 = (FContextCacheElementUStruct *)0x0;
      pFVar14 = ::operator_new(0x58);
      if (pFVar14 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
        local_f8[0].Reference = *(void **)pFVar12;
        local_f8[0].Index = pFVar12->C;
        local_f8[0]._12_4_ = pFVar12->D;
        pFVar15 = UE::Dataflow::FContextCacheElementUStruct::
                  FContextCacheElementUStruct<FDataflowRootProxyMesh>
                            (pFVar14,(FGuid *)local_f8,pFVar3,
                             (FDataflowRootProxyMesh *)&local_c8[0].ObjectPtr,uVar5,
                             (FTimestamp)*FVar11.Value);
      }
      pFVar14 = local_120;
      if (local_120 != (FContextCacheElementUStruct *)0x0) {
        plVar4 = &local_120->_padding_;
        local_120 = pFVar15;
        (**(code **)*plVar4)(pFVar14,1);
        pFVar15 = local_120;
      }
      local_120 = pFVar15;
      if (local_120 == (FContextCacheElementUStruct *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar13,pFVar3,pFVar12,uVar5,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar13 & 0xffffffff,&local_120);
      }
      if (local_120 != (FContextCacheElementUStruct *)0x0) {
        (**(code **)local_120->_padding_)(local_120,1);
      }
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// FMakeRootProxyMeshDataflowNode @ 14e923480

FMakeRootProxyMeshDataflowNode * __thiscall
FMakeRootProxyMeshDataflowNode::FMakeRootProxyMeshDataflowNode
          (FMakeRootProxyMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FMakeRootProxyMeshDataflowNode__6B_;
  local_58.Reference = &this->Mesh;
  (((TObjectPtr<UStaticMesh> *)local_58.Reference)->field0_0x0).DebugPtr = (UStaticMesh *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->RootProxyMesh).Mesh.field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootProxyMesh).Transform.Scale3D.ZW.m128d_f64 = auVar14;
  (this->RootProxyMesh).OverrideMaterials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMesh).OverrideMaterials.ArrayNum = 0;
  (this->RootProxyMesh).OverrideMaterials.ArrayMax = 0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Transform;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->OverrideMaterials;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->RootProxyMesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FMakeRootProxyMeshDataflowNode @ 14e923650

/* WARNING: Type propagation algorithm not settling */

FMakeRootProxyMeshDataflowNode * __thiscall
FMakeRootProxyMeshDataflowNode::FMakeRootProxyMeshDataflowNode(FMakeRootProxyMeshDataflowNode *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMakeRootProxyMeshDataflowNode__6B_;
  (this->Mesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
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

