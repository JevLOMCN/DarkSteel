// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 13

// StaticStruct @ 14dabb920

UScriptStruct * __cdecl FGetStaticMeshBoundingBoxDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode,
                         (UObject *)pUVar1,L"GetStaticMeshBoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton;
}

// GetType @ 14dabb960

FName __thiscall
FGetStaticMeshBoundingBoxDataflowNode::GetType(FGetStaticMeshBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetStaticMeshBoundingBoxDataflowNode");
  return in_RDX;
}

// IsA @ 14dabb990

bool __thiscall
FGetStaticMeshBoundingBoxDataflowNode::IsA
          (FGetStaticMeshBoundingBoxDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetStaticMeshBoundingBoxDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabb9f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabb9f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabba16;
      }
    }
  }
  bVar5 = true;
LAB_14dabba16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabba50

FStructOnScope * __thiscall
FGetStaticMeshBoundingBoxDataflowNode::NewStructOnScope(FGetStaticMeshBoundingBoxDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode,
                           (UObject *)pUVar2,L"GetStaticMeshBoundingBoxDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabbad0

void __thiscall
FGetStaticMeshBoundingBoxDataflowNode::SerializeInternal
          (FGetStaticMeshBoundingBoxDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode,
                         (UObject *)pUVar1,L"GetStaticMeshBoundingBoxDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabbb4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabbb60

FName __thiscall
FGetStaticMeshBoundingBoxDataflowNode::GetDisplayName(FGetStaticMeshBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetStaticMeshBoundingBox");
  return in_RDX;
}

// GetCategory @ 14dabbb90

FName __thiscall
FGetStaticMeshBoundingBoxDataflowNode::GetCategory(FGetStaticMeshBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Static Mesh");
  return in_RDX;
}

// GetTags @ 14dabbbc0

FString * __thiscall
FGetStaticMeshBoundingBoxDataflowNode::GetTags
          (FGetStaticMeshBoundingBoxDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Bounds Size Dimensions Extents Center");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabbbf0

UScriptStruct * __thiscall
FGetStaticMeshBoundingBoxDataflowNode::TypedScriptStruct
          (FGetStaticMeshBoundingBoxDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode,
                         (UObject *)pUVar1,L"GetStaticMeshBoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14dabbc30

/* WARNING: Removing unreachable block (ram,0x00014dabbe57) */
/* WARNING: Removing unreachable block (ram,0x00014dabbe65) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FGetStaticMeshBoundingBoxDataflowNode::GetRenderParametersImpl
          (FGetStaticMeshBoundingBoxDataflowNode *this,
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

// Evaluate @ 14dabbea0

void __thiscall
FGetStaticMeshBoundingBoxDataflowNode::Evaluate
          (FGetStaticMeshBoundingBoxDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  double dVar2;
  TObjectPtr<UStaticMesh_const_> this_00;
  FProperty *pFVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined5 uVar14;
  longlong *plVar15;
  bool bVar16;
  uint uVar17;
  undefined1 *puVar18;
  FDataflowInput *this_01;
  undefined8 uVar19;
  ulong64 uVar20;
  undefined8 *puVar21;
  TBoxSphereBounds<double,double> *pTVar22;
  FDataflowOutput *pFVar23;
  FTimestamp FVar24;
  FGuid *pFVar25;
  ulong64 uVar26;
  FDataflowOutput *pFVar27;
  double dVar28;
  FDataflowOutput *local_118;
  undefined1 local_110 [8];
  TVector<double>_u_0 local_108;
  FDataflowInput *local_f0;
  TBoxSphereBounds<double,double> local_e0;
  FGuid local_a8 [7];
  
  puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((TBox<double> *)puVar18 != &this->BoundingBox) &&
      (puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TVector<double> *)puVar18 != &this->Center)) &&
     (puVar18 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TVector<double> *)puVar18 != &this->Dimensions)) {
    return;
  }
  local_e0.SphereRadius._1_4_ = 0;
  local_e0.SphereRadius._5_2_ = 0;
  local_e0.SphereRadius._7_1_ = 0;
  local_108._s_0.X = (double)&this->StaticMesh;
  local_e0.SphereRadius._0_1_ = 0;
  local_108._8_4_ = 0xffffffff;
  local_108._s_0.Z = 0.0;
  this_01 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_108._s_0);
  uVar19 = local_108._s_0.X;
  pFVar23 = this_01->Connection;
  local_118 = pFVar23;
  local_f0 = this_01;
  if (pFVar23 != (FDataflowOutput *)0x0) {
    bVar16 = FDataflowOutput::HasFrozenValue(pFVar23);
    if (bVar16) {
      uVar19 = FDataflowOutput::GetFrozenPropertyValue(pFVar23,(uchar *)uVar19);
    }
    else {
      bVar16 = FDataflowOutput::Evaluate(pFVar23,param_1);
      if (!bVar16) {
        FVar24 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
        uVar17 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
        pFVar25 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,local_a8);
        pFVar3 = (FProperty *)this_01->_padding_;
        uVar26 = CityHash64((char *)&local_118->_padding_,0x10);
        UE::Dataflow::FContext::SetData<TObjectPtr<UStaticMesh_const_>_const_&>
                  (param_1,(uint)uVar26,pFVar3,(TObjectPtr<UStaticMesh_const_> *)uVar19,pFVar25,
                   uVar17,(FTimestamp *)FVar24.Value);
        this_01 = local_f0;
      }
      pFVar23 = local_118;
      uVar26 = UE::Dataflow::FTimestamp::Invalid;
      uVar20 = CityHash64((char *)&local_118->_padding_,0x10);
      bVar16 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar20,(FTimestamp)uVar26);
      if (bVar16) {
        pFVar3 = (FProperty *)this_01->_padding_;
        uVar26 = CityHash64((char *)&pFVar23->_padding_,0x10);
        puVar21 = (undefined8 *)
                  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar26 & 0xffffffff);
        if (puVar21 != (undefined8 *)0x0) {
          uVar19 = UE::Dataflow::FContextCacheElementBase::
                   GetTypedData<TObjectPtr<UStaticMesh_const_>_>
                             ((FContextCacheElementBase *)*puVar21,(IContextCacheStore *)param_1,
                              pFVar3,(TObjectPtr<UStaticMesh_const_> *)uVar19);
        }
      }
    }
  }
  this_00.field0_0x0 =
       (TObjectPtr<UStaticMesh_const_>_u_0)*(TObjectPtr<UStaticMesh_const_>_u_0 *)uVar19;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    dVar4 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar28 = 0.0;
    dVar1 = 0.0;
    dVar2 = 0.0;
    if (this_00.field0_0x0 == (UStaticMesh *)0x0) goto LAB_14dabc129;
    UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
  }
  dVar4 = 0.0;
  dVar7 = 0.0;
  dVar9 = 0.0;
  dVar28 = 0.0;
  dVar1 = 0.0;
  dVar2 = 0.0;
  if (this_00.field0_0x0 != (UStaticMesh *)0x0) {
    pTVar22 = UStaticMesh::GetBounds((UStaticMesh *)this_00.field0_0x0,&local_e0);
    dVar28 = (pTVar22->Origin).field0_0x0._s_0.Y;
    dVar1 = (pTVar22->Origin).field0_0x0._s_0.X;
    dVar2 = (pTVar22->Origin).field0_0x0._s_0.Z;
    dVar4 = dVar28 + (pTVar22->BoxExtent).field0_0x0._s_0.Y;
    dVar7 = dVar1 - (pTVar22->BoxExtent).field0_0x0._s_0.X;
    dVar28 = dVar28 - (pTVar22->BoxExtent).field0_0x0._s_0.Y;
    dVar1 = dVar1 + (pTVar22->BoxExtent).field0_0x0._s_0.X;
    dVar9 = dVar2 - (pTVar22->BoxExtent).field0_0x0._s_0.Z;
    dVar2 = dVar2 + (pTVar22->BoxExtent).field0_0x0._s_0.Z;
    local_e0.SphereRadius._0_1_ = 1;
  }
LAB_14dabc129:
  uVar14 = CONCAT41(local_e0.SphereRadius._1_4_,local_e0.SphereRadius._0_1_);
  uVar19 = CONCAT17(local_e0.SphereRadius._7_1_,CONCAT25(local_e0.SphereRadius._5_2_,uVar14));
  local_108._s_0.X = (double)&this->BoundingBox;
  local_108._8_4_ = 0xffffffff;
  local_108._s_0.Z = 0.0;
  pFVar23 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)&local_108._s_0)
  ;
  if (pFVar23 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TBox<double>_&,UE::Math::TBox<double>_>'::__l7::<lambda_1>::
    operator()(local_110);
  }
  else if (pFVar23->_padding_ != 0) {
    FVar24 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar23);
    uVar17 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar23);
    pFVar25 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar23,local_a8);
    pFVar3 = (FProperty *)pFVar23->_padding_;
    uVar26 = CityHash64((char *)&pFVar23->_padding_,0x10);
    local_118 = (FDataflowOutput *)0x0;
    pFVar27 = ::operator_new(0x70);
    pFVar23 = local_118;
    if (pFVar27 != (FDataflowOutput *)0x0) {
      uVar10 = pFVar25->A;
      uVar11 = pFVar25->B;
      uVar12 = pFVar25->C;
      uVar13 = pFVar25->D;
      pFVar27->_padding_ = *(longlong *)FVar24.Value;
      auVar6._8_4_ = SUB84(dVar28,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      pFVar27->_padding_ = (longlong)dVar7;
      pFVar27->_padding_ = auVar6._8_8_;
      pFVar27->_padding_ =
           (longlong)&___7__TContextCacheElement_AEAU__TBox_N_Math_UE___Dataflow_UE__6B_;
      auVar8._8_4_ = SUB84(dVar1,0);
      auVar8._0_8_ = dVar9;
      auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      pFVar27->_padding_ = (longlong)dVar9;
      pFVar27->_padding_ = auVar8._8_8_;
      *(undefined4 *)&pFVar27->_padding_ = 0;
      auVar5._8_4_ = SUB84(dVar2,0);
      auVar5._0_8_ = dVar4;
      auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      pFVar27->_padding_ = (longlong)dVar4;
      (pFVar27->Connections).AllocatorInstance = (ForAnyElementType)auVar5._8_8_;
      pFVar27->_padding_ = (longlong)pFVar3;
      *(uint *)((longlong)&pFVar27->_padding_ + 4) = uVar10;
      *(uint *)&pFVar27->_padding_ = uVar11;
      *(uint *)((longlong)&pFVar27->_padding_ + 4) = uVar12;
      *(uint *)&pFVar27->_padding_ = uVar13;
      *(uint *)&pFVar27->_padding_ = uVar17;
      (pFVar27->Connections).ArrayNum = (int)uVar14;
      (pFVar27->Connections).ArrayMax = (int)((ulonglong)uVar19 >> 0x20);
    }
    if (local_118 != (FDataflowOutput *)0x0) {
      plVar15 = &local_118->_padding_;
      local_118 = pFVar27;
      (**(code **)*plVar15)(pFVar23,1);
      pFVar27 = local_118;
    }
    local_118 = pFVar27;
    if (local_118 == (FDataflowOutput *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar26,pFVar3,pFVar25,uVar17,(FTimestamp *)FVar24.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar26 & 0xffffffff,&local_118);
    }
    if (local_118 != (FDataflowOutput *)0x0) {
      (**(code **)local_118->_padding_)(local_118,1);
    }
  }
  local_108._s_0.X = (dVar1 + dVar7) * __real_3fe0000000000000;
  local_108._s_0.Y = (dVar4 + dVar28) * __real_3fe0000000000000;
  local_108._s_0.Z = (dVar2 + dVar9) * __real_3fe0000000000000;
  FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
            ((FDataflowNode *)this,param_1,(TVector<double> *)&local_108._s_0,&this->Center);
  local_108._s_0.X = dVar1 - dVar7;
  local_108._s_0.Y = dVar4 - dVar28;
  local_108._s_0.Z = dVar2 - dVar9;
  FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
            ((FDataflowNode *)this,param_1,(TVector<double> *)&local_108._s_0,&this->Dimensions);
  return;
}

// FGetStaticMeshBoundingBoxDataflowNode @ 14dacd760

FGetStaticMeshBoundingBoxDataflowNode * __thiscall
FGetStaticMeshBoundingBoxDataflowNode::FGetStaticMeshBoundingBoxDataflowNode
          (FGetStaticMeshBoundingBoxDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FGetStaticMeshBoundingBoxDataflowNode__6B_;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  local_58.Reference = &this->StaticMesh;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (((TObjectPtr<UStaticMesh_const_> *)local_58.Reference)->field0_0x0).DebugPtr = (UStaticMesh *)0x0
  ;
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

// FGetStaticMeshBoundingBoxDataflowNode @ 14dacd930

FGetStaticMeshBoundingBoxDataflowNode * __thiscall
FGetStaticMeshBoundingBoxDataflowNode::FGetStaticMeshBoundingBoxDataflowNode
          (FGetStaticMeshBoundingBoxDataflowNode *this)

{
  undefined8 uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetStaticMeshBoundingBoxDataflowNode__6B_;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
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

