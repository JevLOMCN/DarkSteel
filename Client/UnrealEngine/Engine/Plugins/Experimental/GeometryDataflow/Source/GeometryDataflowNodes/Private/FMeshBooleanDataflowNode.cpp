// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryDataflowNodes
// Functions: 12

// StaticStruct @ 14e7ff170

UScriptStruct * __cdecl FMeshBooleanDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryDataflowNodes();
    Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode,(UObject *)pUVar1,
                         L"MeshBooleanDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton;
}

// GetType @ 14e7ff1b0

FName __thiscall FMeshBooleanDataflowNode::GetType(FMeshBooleanDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMeshBooleanDataflowNode");
  return in_RDX;
}

// IsA @ 14e7ff1e0

bool __thiscall FMeshBooleanDataflowNode::IsA(FMeshBooleanDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMeshBooleanDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e7ff248;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e7ff248:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e7ff266;
      }
    }
  }
  bVar5 = true;
LAB_14e7ff266:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e7ff2a0

FStructOnScope * __thiscall
FMeshBooleanDataflowNode::NewStructOnScope(FMeshBooleanDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryDataflowNodes();
      Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode,(UObject *)pUVar2,
                           L"MeshBooleanDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e7ff320

void __thiscall
FMeshBooleanDataflowNode::SerializeInternal(FMeshBooleanDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryDataflowNodes();
    Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode,(UObject *)pUVar1,
                         L"MeshBooleanDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e7ff39d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e7ff3b0

FName __thiscall FMeshBooleanDataflowNode::GetDisplayName(FMeshBooleanDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MeshBoolean");
  return in_RDX;
}

// GetCategory @ 14e7ff3e0

FName __thiscall FMeshBooleanDataflowNode::GetCategory(FMeshBooleanDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e7ff410

FString * __thiscall
FMeshBooleanDataflowNode::GetTags(FMeshBooleanDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e7ff440

UScriptStruct * __thiscall
FMeshBooleanDataflowNode::TypedScriptStruct(FMeshBooleanDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryDataflowNodes();
    Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode,(UObject *)pUVar1,
                         L"MeshBooleanDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e7ff480

/* WARNING: Removing unreachable block (ram,0x00014e7ff6ff) */
/* WARNING: Removing unreachable block (ram,0x00014e7ff70d) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FMeshBooleanDataflowNode::GetRenderParametersImpl
          (FMeshBooleanDataflowNode *this,
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
  ForAnyElementType local_68;
  undefined8 local_60;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res18,"3DView");
  ::FName::FName(&local_res10,"Mesh");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"FDynamicMesh3");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"SurfaceRender");
  local_68.Data = (FScriptContainerElement *)0x0;
  iVar4 = (pFVar7->Data).ArrayNum;
  pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
  local_60 = CONCAT44(local_60._4_4_,iVar4);
  if (iVar4 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,&local_68,iVar4,(int *)((longlong)&local_60 + 4));
    memcpy(local_68.Data,pFVar9,(longlong)iVar4 * 2);
  }
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
  *(FScriptContainerElement **)pFVar9 = local_68.Data;
  *(undefined4 *)(pFVar9 + 8) = (undefined4)local_60;
  *(undefined4 *)(pFVar9 + 0xc) = local_60._4_4_;
  *(FName *)(pFVar9 + 0x10) = local_58;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar9 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar9 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar9 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e7ff750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshBooleanDataflowNode::Evaluate
          (FMeshBooleanDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh> *pTVar1;
  EMeshBooleanOperationEnum EVar2;
  TObjectPtr<UDynamicMesh> TVar3;
  TObjectPtr<UDynamicMesh> TVar4;
  FDynamicMesh3 *pFVar5;
  FDynamicMesh3 *pFVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  uint uVar13;
  undefined1 *puVar14;
  FDataflowInput *pFVar15;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar16;
  UObject *pUVar17;
  UDynamicMesh *pUVar18;
  FDataflowOutput *pFVar19;
  FTimestamp FVar20;
  FGuid *pFVar21;
  ulong64 uVar22;
  undefined8 *puVar23;
  EBooleanOp EVar24;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  undefined8 *local_340;
  FProperty *local_338;
  FConnectionReference local_328;
  FConnectionReference local_310;
  FMeshBoolean local_2e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pTVar1 = &this->Mesh;
  puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar14 != pTVar1) {
    return;
  }
  local_328.Reference = &this->Mesh1;
  local_328.ContainerReference = (void *)0x0;
  local_328.Index = -1;
  pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
  pTVar16 = &FDataflowInput::GetValue<TObjectPtr<UDynamicMesh>_>
                       (pFVar15,param_1,local_328.Reference)->field0_0x0;
  TVar3.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar16->DebugPtr;
  local_310.Reference = pTVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar3.field0_0x0 == (UDynamicMesh *)0x0) goto LAB_14e7ffabc;
    UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
  }
  if (TVar3.field0_0x0 != (UDynamicMesh *)0x0) {
    local_328.Reference = &this->Mesh2;
    local_328.Index = -1;
    local_328.ContainerReference = (void *)0x0;
    pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
    pTVar16 = &FDataflowInput::GetValue<TObjectPtr<UDynamicMesh>_>
                         (pFVar15,param_1,local_328.Reference)->field0_0x0;
    TVar4.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar16->DebugPtr;
    if (TVar4.field0_0x0 != (UDynamicMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
      }
      pFVar5 = *(FDynamicMesh3 **)((longlong)TVar3.field0_0x0 + 0xb8);
      pFVar6 = *(FDynamicMesh3 **)((longlong)TVar4.field0_0x0 + 0xb8);
      if ((0 < (pFVar5->VertexRefCounts).UsedCount) && (0 < (pFVar6->VertexRefCounts).UsedCount)) {
        pUVar17 = GetTransientPackageAsObject();
        pUVar18 = NewObject<UDynamicMesh>(pUVar17);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UDynamicMesh *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar18);
        }
        UDynamicMesh::Reset(pUVar18);
        EVar2 = this->Operation;
        EVar24 = Intersect;
        if (EVar2 != Dataflow_MeshBoolean_Intersect) {
          if (EVar2 == Dataflow_MeshBoolean_Union) {
            EVar24 = Union;
          }
          else {
            EVar24 = Intersect;
            if (EVar2 == Dataflow_MeshBoolean_Difference) {
              EVar24 = Difference;
            }
          }
        }
        UE::Geometry::FMeshBoolean::FMeshBoolean
                  (&local_2e8,pFVar5,pFVar6,(pUVar18->Mesh).Ptr,EVar24);
        local_2e8.bSimplifyAlongNewEdges = true;
        local_2e8.PreserveUVsOnlyForMesh = 0;
        local_2e8.bWeldSharedEdges = false;
        local_2e8.bTrackAllNewEdges = true;
        bVar12 = UE::Geometry::FMeshBoolean::Compute(&local_2e8);
        if (bVar12) {
          local_310.Index = -1;
          local_310.ContainerReference = (void *)0x0;
          pFVar19 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_310);
          if (pFVar19 == (FDataflowOutput *)0x0) {
            `FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>'::__l7::
            <lambda_1>::operator()(local_348);
          }
          else if (pFVar19->_padding_ != 0) {
            FVar20 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar19);
            uVar13 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar19);
            pFVar21 = FDataflowConnection::GetOwningNodeGuid
                                ((FDataflowConnection *)pFVar19,(FGuid *)&local_328);
            local_338 = (FProperty *)pFVar19->_padding_;
            uVar22 = CityHash64((char *)&pFVar19->_padding_,0x10);
            local_340 = (undefined8 *)0x0;
            puVar23 = ::operator_new(0x50);
            if (puVar23 == (undefined8 *)0x0) {
              puVar23 = (undefined8 *)0x0;
            }
            else {
              uVar7 = *(undefined8 *)FVar20.Value;
              uVar9 = *(undefined8 *)pFVar21;
              uVar10 = *(undefined8 *)&pFVar21->C;
              *puVar23 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
              puVar23[4] = local_338;
              puVar23[6] = uVar7;
              *(undefined4 *)(puVar23 + 1) = 3;
              *(undefined8 *)((longlong)puVar23 + 0xc) = uVar9;
              *(undefined8 *)((longlong)puVar23 + 0x14) = uVar10;
              *(uint *)(puVar23 + 5) = uVar13;
              puVar23[7] = &___7FGCObject__6B_;
              *(undefined2 *)(puVar23 + 8) = 0;
              FGCObject::RegisterGCObject((FGCObject *)(puVar23 + 7));
              *puVar23 = &UE::Dataflow::
                          TContextCacheElementUObject<TObjectPtr<UDynamicMesh>&___ptr64>::
                          _vftable__for__UE__Dataflow__FContextCacheElementBase__;
              puVar23[7] = &UE::Dataflow::
                            TContextCacheElementUObject<TObjectPtr<UDynamicMesh>&___ptr64>::
                            _vftable__for__FGCObject__;
              puVar23[9] = pUVar18;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar18);
              }
            }
            puVar11 = local_340;
            if (local_340 != (undefined8 *)0x0) {
              puVar8 = (undefined8 *)*local_340;
              local_340 = puVar23;
              (*(code *)*puVar8)(puVar11,1);
              puVar23 = local_340;
            }
            local_340 = puVar23;
            if (local_340 == (undefined8 *)0x0) {
              UE::Dataflow::FContext::SetNullData
                        (param_1,(uint)uVar22,local_338,pFVar21,uVar13,(FTimestamp *)FVar20.Value);
            }
            else {
              (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar22 & 0xffffffff,&local_340);
            }
            if (local_340 != (undefined8 *)0x0) {
              (**(code **)*local_340)(local_340,1);
              UE::Geometry::FMeshBoolean::~FMeshBoolean(&local_2e8);
              return;
            }
          }
          UE::Geometry::FMeshBoolean::~FMeshBoolean(&local_2e8);
          return;
        }
        UE::Geometry::FMeshBoolean::~FMeshBoolean(&local_2e8);
      }
    }
  }
LAB_14e7ffabc:
  pUVar17 = GetTransientPackageAsObject();
  pUVar18 = NewObject<UDynamicMesh>(pUVar17);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  local_310.Index = -1;
  local_310.ContainerReference = (void *)0x0;
  pFVar19 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_310);
  if (pFVar19 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>'::__l7::<lambda_1>
    ::operator()(local_348);
  }
  else if (pFVar19->_padding_ != 0) {
    FVar20 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar19);
    uVar13 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar19);
    pFVar21 = FDataflowConnection::GetOwningNodeGuid
                        ((FDataflowConnection *)pFVar19,(FGuid *)&local_328);
    local_338 = (FProperty *)pFVar19->_padding_;
    uVar22 = CityHash64((char *)&pFVar19->_padding_,0x10);
    local_340 = (undefined8 *)0x0;
    puVar23 = ::operator_new(0x50);
    if (puVar23 == (undefined8 *)0x0) {
      puVar23 = (undefined8 *)0x0;
    }
    else {
      uVar7 = *(undefined8 *)FVar20.Value;
      uVar9 = *(undefined8 *)pFVar21;
      uVar10 = *(undefined8 *)&pFVar21->C;
      *puVar23 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
      puVar23[4] = local_338;
      puVar23[6] = uVar7;
      *(undefined4 *)(puVar23 + 1) = 3;
      *(undefined8 *)((longlong)puVar23 + 0xc) = uVar9;
      *(undefined8 *)((longlong)puVar23 + 0x14) = uVar10;
      *(uint *)(puVar23 + 5) = uVar13;
      puVar23[7] = &___7FGCObject__6B_;
      *(undefined2 *)(puVar23 + 8) = 0;
      FGCObject::RegisterGCObject((FGCObject *)(puVar23 + 7));
      *puVar23 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_>::
                  _vftable__for__UE__Dataflow__FContextCacheElementBase__;
      puVar23[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_>::
                    _vftable__for__FGCObject__;
      puVar23[9] = pUVar18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UDynamicMesh *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar18);
      }
    }
    puVar11 = local_340;
    if (local_340 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*local_340;
      local_340 = puVar23;
      (*(code *)*puVar8)(puVar11,1);
      puVar23 = local_340;
    }
    local_340 = puVar23;
    if (local_340 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar22,local_338,pFVar21,uVar13,(FTimestamp *)FVar20.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar22 & 0xffffffff,&local_340);
    }
    if (local_340 != (undefined8 *)0x0) {
      (**(code **)*local_340)(local_340,1);
    }
  }
  return;
}

// FMeshBooleanDataflowNode @ 14e800740

FMeshBooleanDataflowNode * __thiscall
FMeshBooleanDataflowNode::FMeshBooleanDataflowNode
          (FMeshBooleanDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->Operation = Dataflow_MeshBoolean_Intersect;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FMeshBooleanDataflowNode__6B_;
  local_58.Reference = &this->Mesh1;
  (this->Mesh2).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_58.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Mesh2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

