// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e86d020

UScriptStruct * __cdecl FGetMeshBoundingBoxDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshBoundingBoxDataflowNode,(UObject *)pUVar1
                         ,L"GetMeshBoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton;
}

// GetType @ 14e86d3f0

FName __thiscall FGetMeshBoundingBoxDataflowNode::GetType(FGetMeshBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetMeshBoundingBoxDataflowNode");
  return in_RDX;
}

// IsA @ 14e86d450

bool __thiscall
FGetMeshBoundingBoxDataflowNode::IsA(FGetMeshBoundingBoxDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetMeshBoundingBoxDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86d4b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86d4b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86d4d6;
      }
    }
  }
  bVar5 = true;
LAB_14e86d4d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86d520

FStructOnScope * __thiscall
FGetMeshBoundingBoxDataflowNode::NewStructOnScope(FGetMeshBoundingBoxDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshBoundingBoxDataflowNode,
                           (UObject *)pUVar2,L"GetMeshBoundingBoxDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86d6e0

void __thiscall
FGetMeshBoundingBoxDataflowNode::SerializeInternal
          (FGetMeshBoundingBoxDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshBoundingBoxDataflowNode,(UObject *)pUVar1
                         ,L"GetMeshBoundingBoxDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86d75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86d770

FName __thiscall
FGetMeshBoundingBoxDataflowNode::GetDisplayName(FGetMeshBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetMeshBoundingBox");
  return in_RDX;
}

// GetCategory @ 14e86d830

FName __thiscall FGetMeshBoundingBoxDataflowNode::GetCategory(FGetMeshBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh");
  return in_RDX;
}

// GetTags @ 14e86d890

FString * __thiscall
FGetMeshBoundingBoxDataflowNode::GetTags
          (FGetMeshBoundingBoxDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Bounds Size Dimensions Extents Center");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86d8f0

UScriptStruct * __thiscall
FGetMeshBoundingBoxDataflowNode::TypedScriptStruct(FGetMeshBoundingBoxDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshBoundingBoxDataflowNode,(UObject *)pUVar1
                         ,L"GetMeshBoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMeshBoundingBoxDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e86da00

/* WARNING: Removing unreachable block (ram,0x00014e86dc27) */
/* WARNING: Removing unreachable block (ram,0x00014e86dc35) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FGetMeshBoundingBoxDataflowNode::GetRenderParametersImpl
          (FGetMeshBoundingBoxDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  FString *pFVar7;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res18,"3DView");
  ::FName::FName(&local_res10,"BoundingBox");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"FBox");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar7);
  _Src.Data = local_88.Data;
  lVar10 = (longlong)local_80;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_80);
  local_58 = FVar1;
  if (local_80 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_50,local_80,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar10 << 3);
  }
  local_40 = *pFVar5;
  pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar9 + 0x10) = local_58;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar9 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar9 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar9 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e870880

void __thiscall
FGetMeshBoundingBoxDataflowNode::Evaluate
          (FGetMeshBoundingBoxDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh_const_> TVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  undefined1 *puVar12;
  FDataflowInput *this_00;
  TObjectPtr<UDynamicMesh_const_>_u_0 *pTVar13;
  FDataflowOutput *this_01;
  FTimestamp FVar14;
  FGuid *pFVar15;
  ulong64 uVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_138 [8];
  undefined8 *local_130;
  TVector<double>_u_0 local_128;
  double local_110;
  double dStack_108;
  double local_100;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double dStack_d0;
  undefined1 local_c8;
  undefined4 uStack_c7;
  undefined2 uStack_c3;
  undefined1 uStack_c1;
  FConnectionReference local_c0 [5];
  
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((TBox<double> *)puVar12 != &this->BoundingBox) &&
      (puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TVector<double> *)puVar12 != &this->Center)) &&
     (puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TVector<double> *)puVar12 != &this->Dimensions)) {
    return;
  }
  uVar24 = 0;
  uVar25 = 0;
  uStack_c7 = 0;
  uStack_c3 = 0;
  uStack_c1 = 0;
  local_c0[0].Reference = &this->Mesh;
  local_e8 = 0.0;
  uStack_e0 = 0.0;
  local_c8 = 0;
  local_d8 = 0.0;
  dStack_d0 = 0.0;
  local_c0[0].Index = -1;
  local_c0[0].ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,local_c0);
  pTVar13 = &FDataflowInput::GetValue<TObjectPtr<UDynamicMesh_const_>_>
                       (this_00,param_1,local_c0[0].Reference)->field0_0x0;
  TVar1.field0_0x0 = (TObjectPtr<UDynamicMesh_const_>_u_0)pTVar13->DebugPtr;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  if (TVar1.field0_0x0 != (UDynamicMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    if (*(FDynamicMesh3 **)((longlong)TVar1.field0_0x0 + 0xb8) != (FDynamicMesh3 *)0x0) {
      UE::Geometry::FDynamicMesh3::GetBounds
                (*(FDynamicMesh3 **)((longlong)TVar1.field0_0x0 + 0xb8),
                 (TAxisAlignedBox3<double> *)&local_128._s_0,false);
      local_d8._0_4_ = SUB84(dStack_108,0);
      local_d8._4_4_ = (undefined4)((ulonglong)dStack_108 >> 0x20);
      uStack_e0._0_4_ = SUB84(local_110,0);
      uStack_e0._4_4_ = (undefined4)((ulonglong)local_110 >> 0x20);
      uVar24 = SUB84(local_100,0);
      uVar25 = (undefined4)((ulonglong)local_100 >> 0x20);
      dStack_d0 = local_100;
      local_e8 = local_128._s_0.Z;
      uVar18 = local_128._16_4_;
      uVar19 = local_128._20_4_;
      uVar20 = (undefined4)uStack_e0;
      uVar21 = uStack_e0._4_4_;
      uVar22 = (undefined4)local_d8;
      uVar23 = local_d8._4_4_;
      uVar26 = local_128._0_4_;
      uVar27 = local_128._4_4_;
      uVar28 = local_128._8_4_;
      uVar29 = local_128._12_4_;
      uStack_e0 = local_110;
      local_d8 = dStack_108;
    }
  }
  local_128._8_4_ = 0xffffffff;
  local_128._s_0.Z = 0.0;
  local_128._s_0.X = (double)&this->BoundingBox;
  this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)&local_128._s_0)
  ;
  if (this_01 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TBox<double>_&,UE::Math::TBox<double>_>'::__l7::<lambda_1>::
    operator()(local_138);
  }
  else if (this_01->_padding_ != 0) {
    FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
    uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
    pFVar15 = FDataflowConnection::GetOwningNodeGuid
                        ((FDataflowConnection *)this_01,(FGuid *)local_c0);
    pFVar2 = (FProperty *)this_01->_padding_;
    uVar16 = CityHash64((char *)&this_01->_padding_,0x10);
    local_130 = (undefined8 *)0x0;
    puVar17 = ::operator_new(0x70);
    puVar7 = local_130;
    if (puVar17 != (undefined8 *)0x0) {
      uVar5 = *(undefined8 *)pFVar15;
      uVar6 = *(undefined8 *)&pFVar15->C;
      uVar3 = *(undefined8 *)FVar14.Value;
      *(undefined4 *)(puVar17 + 7) = uVar26;
      *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar27;
      *(undefined4 *)(puVar17 + 8) = uVar28;
      *(undefined4 *)((longlong)puVar17 + 0x44) = uVar29;
      puVar17[6] = uVar3;
      *(undefined4 *)(puVar17 + 9) = uVar18;
      *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar19;
      *(undefined4 *)(puVar17 + 10) = uVar20;
      *(undefined4 *)((longlong)puVar17 + 0x54) = uVar21;
      *(undefined4 *)(puVar17 + 1) = 0;
      *(undefined8 *)((longlong)puVar17 + 0xc) = uVar5;
      *(undefined8 *)((longlong)puVar17 + 0x14) = uVar6;
      puVar17[4] = pFVar2;
      *(undefined4 *)(puVar17 + 0xb) = uVar22;
      *(undefined4 *)((longlong)puVar17 + 0x5c) = uVar23;
      *(undefined4 *)(puVar17 + 0xc) = uVar24;
      *(undefined4 *)((longlong)puVar17 + 100) = uVar25;
      *(uint *)(puVar17 + 5) = uVar11;
      puVar17[0xd] = CONCAT17(uStack_c1,CONCAT25(uStack_c3,CONCAT41(uStack_c7,local_c8)));
      *puVar17 = &___7__TContextCacheElement_AEAU__TBox_N_Math_UE___Dataflow_UE__6B_;
    }
    if (local_130 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*local_130;
      local_130 = puVar17;
      (*(code *)*puVar4)(puVar7,1);
      puVar17 = local_130;
    }
    local_130 = puVar17;
    if (local_130 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar16,pFVar2,pFVar15,uVar11,(FTimestamp *)FVar14.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar16 & 0xffffffff,&local_130);
    }
    if (local_130 != (undefined8 *)0x0) {
      (**(code **)*local_130)(local_130,1);
    }
  }
  dVar10 = dStack_d0;
  dVar9 = local_d8;
  dVar8 = uStack_e0;
  local_128._s_0.X = (uStack_e0 + (double)CONCAT44(uVar27,uVar26)) * __real_3fe0000000000000;
  local_128._s_0.Y = (local_d8 + (double)CONCAT44(uVar29,uVar28)) * __real_3fe0000000000000;
  local_128._s_0.Z = (dStack_d0 + local_e8) * __real_3fe0000000000000;
  FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
            ((FDataflowNode *)this,param_1,(TVector<double> *)&local_128._s_0,&this->Center);
  local_128._s_0.Z = dVar10 - local_e8;
  local_128._s_0.X = dVar8 - (double)CONCAT44(uVar27,uVar26);
  local_128._s_0.Y = dVar9 - (double)CONCAT44(uVar29,uVar28);
  FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
            ((FDataflowNode *)this,param_1,(TVector<double> *)&local_128._s_0,&this->Dimensions);
  return;
}

// FGetMeshBoundingBoxDataflowNode @ 14e920f40

FGetMeshBoundingBoxDataflowNode * __thiscall
FGetMeshBoundingBoxDataflowNode::FGetMeshBoundingBoxDataflowNode
          (FGetMeshBoundingBoxDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  undefined8 uVar1;
  FDataflowOutput *pFVar2;
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
  this->_padding_ = (longlong)&___7FGetMeshBoundingBoxDataflowNode__6B_;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  local_58.Reference = &this->Mesh;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (((TObjectPtr<UDynamicMesh_const_> *)local_58.Reference)->field0_0x0).DebugPtr =
       (UDynamicMesh *)0x0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Dimensions).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Dimensions).field0_0x0._s_0.Y = (double)uVar1;
  (this->Dimensions).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->BoundingBox;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Center;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Dimensions;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  return this;
}

// FGetMeshBoundingBoxDataflowNode @ 14e921110

FGetMeshBoundingBoxDataflowNode * __thiscall
FGetMeshBoundingBoxDataflowNode::FGetMeshBoundingBoxDataflowNode
          (FGetMeshBoundingBoxDataflowNode *this)

{
  undefined8 uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetMeshBoundingBoxDataflowNode__6B_;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Dimensions).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Dimensions).field0_0x0._s_0.Y = (double)uVar1;
  (this->Dimensions).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

