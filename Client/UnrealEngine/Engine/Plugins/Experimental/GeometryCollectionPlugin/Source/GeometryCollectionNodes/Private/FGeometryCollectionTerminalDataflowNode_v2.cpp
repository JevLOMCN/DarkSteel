// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e831180

UScriptStruct * __cdecl FGeometryCollectionTerminalDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2,
                         (UObject *)pUVar1,L"GeometryCollectionTerminalDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton
  ;
}

// GetType @ 14e831310

FName __thiscall
FGeometryCollectionTerminalDataflowNode_v2::GetType
          (FGeometryCollectionTerminalDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionTerminalDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e831350

bool __thiscall
FGeometryCollectionTerminalDataflowNode_v2::IsA
          (FGeometryCollectionTerminalDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionTerminalDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8313b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8313b8:
    if (!bVar5) {
      bVar5 = FDataflowTerminalNode::IsA((FDataflowTerminalNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8313d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8313d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e831410

FStructOnScope * __thiscall
FGeometryCollectionTerminalDataflowNode_v2::NewStructOnScope
          (FGeometryCollectionTerminalDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2,
                           (UObject *)pUVar2,L"GeometryCollectionTerminalDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8314c0

void __thiscall
FGeometryCollectionTerminalDataflowNode_v2::SerializeInternal
          (FGeometryCollectionTerminalDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2,
                         (UObject *)pUVar1,L"GeometryCollectionTerminalDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83153d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e831650

FName __thiscall
FGeometryCollectionTerminalDataflowNode_v2::GetDisplayName
          (FGeometryCollectionTerminalDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollectionTerminal");
  return in_RDX;
}

// GetCategory @ 14e831700

FName __thiscall
FGeometryCollectionTerminalDataflowNode_v2::GetCategory
          (FGeometryCollectionTerminalDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Terminal");
  return in_RDX;
}

// GetTags @ 14e831740

FString * __thiscall
FGeometryCollectionTerminalDataflowNode_v2::GetTags
          (FGeometryCollectionTerminalDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e831800

UScriptStruct * __thiscall
FGeometryCollectionTerminalDataflowNode_v2::TypedScriptStruct
          (FGeometryCollectionTerminalDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2,
                         (UObject *)pUVar1,L"GeometryCollectionTerminalDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode_v2.OuterSingleton
  ;
}

// Evaluate @ 14e831ba0

void __thiscall
FGeometryCollectionTerminalDataflowNode_v2::Evaluate
          (FGeometryCollectionTerminalDataflowNode_v2 *this,FContext *param_1)

{
  FManagedArrayCollection *pFVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  FDataflowInput *pFVar3;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  local_38.Index = -1;
  pFVar1 = &this->Collection;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar1;
  pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  if (pFVar3->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_38.Reference,pFVar1);
  }
  else {
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    local_20.Reference = pFVar1;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_38,&local_20);
  }
  pTVar2 = &this->Materials;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pTVar2;
  pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  if (pFVar3->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,local_38.Reference,pTVar2);
  }
  else {
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    local_20.Reference = pTVar2;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_38,&local_20);
  }
  local_20.Reference = &this->InstancedMeshes;
  local_20.Index = -1;
  local_20.ContainerReference = (void *)0x0;
  FDataflowNode::
  SafeForwardInput<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_20,local_20.Reference);
  return;
}

// SetAssetValue @ 14e832160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionTerminalDataflowNode_v2::SetAssetValue
          (FGeometryCollectionTerminalDataflowNode_v2 *this,TObjectPtr<UObject> param_1,
          FContext *param_2)

{
  int *piVar1;
  FGeometryCollectionProxyMeshData *pFVar2;
  int iVar3;
  FDataflowOutput *pFVar4;
  FProperty *pFVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  code *pcVar8;
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  FDataflowInput *pFVar14;
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar15;
  FTimestamp FVar16;
  FGuid *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  undefined8 *puVar20;
  TTransform<double> *pTVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar24;
  UGeometryCollection *this_01;
  undefined1 auStackY_328 [32];
  undefined1 local_2d8 [8];
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *local_2d0;
  FDataflowInput *local_2c8;
  FDataflowOutput *local_2c0;
  TReferenceControllerBase<1> *local_2b8;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *local_2b0;
  FManagedArrayCollection *local_2a8;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *local_2a0;
  FGeometryCollection *local_298;
  FConnectionReference local_290;
  FConnectionReference local_278;
  FConnectionReference local_260;
  FGuid local_240;
  FCollectionTransformFacade local_228;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  this_01 = *(UGeometryCollection **)param_1.field0_0x0;
  if (this_01 != (UGeometryCollection *)0x0) {
    pUVar13 = Z_Construct_UClass_UGeometryCollection_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar13->_padding_)) goto LAB_14e8321bf;
  }
  this_01 = (UGeometryCollection *)0x0;
LAB_14e8321bf:
  if (this_01 != (UGeometryCollection *)0x0) {
    local_278.Index = -1;
    local_278.ContainerReference = (void *)0x0;
    local_278.Reference = &this->RootProxyMeshes;
    pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_278);
    if (pFVar14->Connection != (FDataflowOutput *)0x0) {
      FGeometryCollectionProxyMeshData::Reset(&this_01->RootProxyData);
    }
    local_2b8 = (this_01->GeometryCollection).SharedReferenceCount.ReferenceController;
    local_298 = (this_01->GeometryCollection).Object;
    if (local_2b8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_2b8->SharedReferenceCount = (atomic<int>)((int)local_2b8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_298 != (FGeometryCollection *)0x0) {
      local_2a8 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_2,&this->Collection);
      local_2b0 = FDataflowNode::
                  GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                            ((FDataflowNode *)this,param_2,&this->Materials);
      local_2a0 = FDataflowNode::
                  GetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
                            ((FDataflowNode *)this,param_2,&this->InstancedMeshes);
      local_290.Index = -1;
      local_290.ContainerReference = (void *)0x0;
      local_290.Reference = &this->RootProxyMeshes;
      pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_290);
      pTVar15 = local_290.Reference;
      local_2d0 = local_290.Reference;
      pFVar4 = pFVar14->Connection;
      pTVar9 = local_290.Reference;
      local_2c8 = pFVar14;
      local_2c0 = pFVar4;
      if (pFVar4 != (FDataflowOutput *)0x0) {
        bVar10 = FDataflowOutput::HasFrozenValue(pFVar4);
        if (bVar10) {
          pTVar15 = (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)
                    FDataflowOutput::GetFrozenPropertyValue(pFVar4,(uchar *)pTVar15);
          pTVar9 = pTVar15;
        }
        else {
          bVar10 = FDataflowOutput::Evaluate(pFVar4,param_2);
          if (!bVar10) {
            FVar16 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar14);
            uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar14);
            pFVar14 = local_2c8;
            pFVar17 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)local_2c8,&local_240);
            pFVar5 = (FProperty *)pFVar14->_padding_;
            uVar18 = CityHash64((char *)&local_2c0->_padding_,0x10);
            UE::Dataflow::FContext::
            SetData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
                      (param_2,(uint)uVar18,pFVar5,local_2d0,pFVar17,uVar11,
                       (FTimestamp *)FVar16.Value);
            pFVar14 = local_2c8;
            pTVar15 = local_2d0;
          }
          pFVar4 = local_2c0;
          uVar18 = UE::Dataflow::FTimestamp::Invalid;
          uVar19 = CityHash64((char *)&local_2c0->_padding_,0x10);
          bVar10 = UE::Dataflow::FContext::HasData(param_2,(uint)uVar19,(FTimestamp)uVar18);
          pTVar9 = pTVar15;
          if (bVar10) {
            pFVar5 = (FProperty *)pFVar14->_padding_;
            uVar18 = CityHash64((char *)&pFVar4->_padding_,0x10);
            puVar20 = (undefined8 *)
                      (**(code **)(param_2->_padding_ + 0x30))(param_2,uVar18 & 0xffffffff);
            pTVar9 = local_2d0;
            if (puVar20 != (undefined8 *)0x0) {
              pTVar15 = UE::Dataflow::FContextCacheElementBase::
                        GetTypedData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
                                  ((FContextCacheElementBase *)*puVar20,
                                   (IContextCacheStore *)param_2,pFVar5,pTVar15);
              pTVar9 = pTVar15;
            }
          }
        }
      }
      local_2d0 = pTVar9;
      UGeometryCollection::ResetFrom
                (this_01,local_2a8,
                 (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)local_2b0,false);
      UGeometryCollection::SetAutoInstanceMeshes(this_01,local_2a0);
      local_260.Reference = &this->RootProxyMeshes;
      local_260.Index = -1;
      local_260.ContainerReference = (void *)0x0;
      pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_260);
      if (pFVar14->Connection != (FDataflowOutput *)0x0) {
        GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
                  (&local_228,(FManagedArrayCollection *)local_298);
        GeometryCollection::Facades::FCollectionTransformFacade::GetRootTransform
                  (&local_228,&local_108);
        pFVar23 = (pTVar15->AllocatorInstance).Data;
        pFVar2 = &this_01->RootProxyData;
        iVar3 = pTVar15->ArrayNum;
        pFVar24 = pFVar23 + (longlong)iVar3 * 0x80;
        while( true ) {
          if (pTVar15->ArrayNum != iVar3) {
            local_2d8[0] = 0;
            `TCheckedPointerIterator<FDataflowRootProxyMesh_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_2d8);
          }
          if (pFVar23 == pFVar24) break;
          pFVar6 = (pFVar2->ProxyMeshes).AllocatorInstance.Data;
          if (((pFVar6 <= pFVar23) &&
              (pFVar23 < pFVar6 + (longlong)(this_01->RootProxyData).ProxyMeshes.ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = (this_01->RootProxyData).ProxyMeshes.ArrayNum;
          piVar1 = &(this_01->RootProxyData).ProxyMeshes.ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)pFVar2,piVar1);
          }
          pFVar6 = (pFVar2->ProxyMeshes).AllocatorInstance.Data;
          (this_01->RootProxyData).ProxyMeshes.ArrayNum = iVar12 + 1;
          pUVar7 = *(UObject **)pFVar23;
          *(UObject **)(pFVar6 + (longlong)iVar12 * 8) = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          pTVar21 = UE::Math::TTransform<double>::GetRelativeTransform
                              ((TTransform<double> *)(pFVar23 + 0x10),&local_a8,&local_108);
          pFVar6 = (this_01->RootProxyData).MeshTransforms.AllocatorInstance.Data;
          fStack_130 = (float)(pTVar21->Rotation).ZW.m128d_f64[0];
          fStack_12c = (float)(pTVar21->Rotation).ZW.m128d_f64[1];
          local_138 = (float)(pTVar21->Rotation).XY.m128d_f64[0];
          fStack_134 = (float)(pTVar21->Rotation).XY.m128d_f64[1];
          fStack_120 = (float)(pTVar21->Translation).ZW.m128d_f64[0];
          fStack_11c = (float)(pTVar21->Translation).ZW.m128d_f64[1];
          local_128 = (float)(pTVar21->Translation).XY.m128d_f64[0];
          fStack_124 = (float)(pTVar21->Translation).XY.m128d_f64[1];
          local_118 = (float)(pTVar21->Scale3D).XY.m128d_f64[0];
          fStack_114 = (float)(pTVar21->Scale3D).XY.m128d_f64[1];
          fStack_110 = (float)(pTVar21->Scale3D).ZW.m128d_f64[0];
          fStack_10c = (float)(pTVar21->Scale3D).ZW.m128d_f64[1];
          if (((pFVar6 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 <
               pFVar6 + (longlong)(this_01->RootProxyData).MeshTransforms.ArrayMax * 0x30)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = (this_01->RootProxyData).MeshTransforms.ArrayNum;
          piVar1 = &(this_01->RootProxyData).MeshTransforms.ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1030,&(this_01->RootProxyData).MeshTransforms.AllocatorInstance,
                                piVar1);
          }
          (this_01->RootProxyData).MeshTransforms.ArrayNum = iVar12 + 1;
          piVar1 = &(this_01->RootProxyData).MeshOverrideMaterials.ArrayMax;
          lVar22 = (longlong)iVar12;
          pFVar6 = (this_01->RootProxyData).MeshTransforms.AllocatorInstance.Data;
          *(ulonglong *)(pFVar6 + lVar22 * 0x30) = CONCAT44(fStack_134,local_138);
          *(ulonglong *)(pFVar6 + lVar22 * 0x30 + 8) = CONCAT44(fStack_12c,fStack_130);
          *(ulonglong *)(pFVar6 + lVar22 * 0x30 + 0x10) = CONCAT44(fStack_124,local_128);
          *(ulonglong *)(pFVar6 + lVar22 * 0x30 + 0x10 + 8) = CONCAT44(fStack_11c,fStack_120);
          *(ulonglong *)(pFVar6 + lVar22 * 0x30 + 0x20) = CONCAT44(fStack_114,local_118);
          *(ulonglong *)(pFVar6 + lVar22 * 0x30 + 0x20 + 8) = CONCAT44(fStack_10c,fStack_110);
          iVar12 = (this_01->RootProxyData).MeshOverrideMaterials.ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this_01->RootProxyData).MeshOverrideMaterials.
                                       AllocatorInstance,piVar1);
          }
          pFVar6 = (this_01->RootProxyData).MeshOverrideMaterials.AllocatorInstance.Data;
          (this_01->RootProxyData).MeshOverrideMaterials.ArrayNum = iVar12 + 1;
          this_00 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                    (pFVar6 + (longlong)iVar12 * 0x10);
          DefaultConstructItems<FGeometryCollectionProxyMeshMaterials,int>(this_00,1);
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                    (this_00,(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
                             (pFVar23 + 0x70));
          pFVar23 = pFVar23 + 0x80;
          pTVar15 = local_2d0;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b8);
  }
  return;
}

// FGeometryCollectionTerminalDataflowNode_v2 @ 14e91e800

FGeometryCollectionTerminalDataflowNode_v2 * __thiscall
FGeometryCollectionTerminalDataflowNode_v2::FGeometryCollectionTerminalDataflowNode_v2
          (FGeometryCollectionTerminalDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FGeometryCollectionTerminalDataflowNode_v2__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pTVar1 = &this->Materials;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pTVar2 = &this->InstancedMeshes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RootProxyMeshes;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar1;
  local_48.Reference = pTVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference !=
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar2;
  local_48.Reference = pTVar2;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference !=
      (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// ~FGeometryCollectionTerminalDataflowNode_v2 @ 14e933480

void __thiscall
FGeometryCollectionTerminalDataflowNode_v2::~FGeometryCollectionTerminalDataflowNode_v2
          (FGeometryCollectionTerminalDataflowNode_v2 *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)(this->RootProxyMeshes).AllocatorInstance.Data,
             (this->RootProxyMeshes).ArrayNum);
  pFVar1 = (this->RootProxyMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  this->_padding_ = (longlong)&___7FDataflowTerminalNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

