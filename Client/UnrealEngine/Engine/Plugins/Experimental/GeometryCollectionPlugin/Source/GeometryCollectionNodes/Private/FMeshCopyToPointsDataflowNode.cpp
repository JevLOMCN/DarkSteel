// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e881f60

UScriptStruct * __cdecl FMeshCopyToPointsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode,(UObject *)pUVar1,
                         L"MeshCopyToPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton;
}

// GetType @ 14e881fb0

FName __thiscall FMeshCopyToPointsDataflowNode::GetType(FMeshCopyToPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMeshCopyToPointsDataflowNode");
  return in_RDX;
}

// IsA @ 14e881fe0

bool __thiscall
FMeshCopyToPointsDataflowNode::IsA(FMeshCopyToPointsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMeshCopyToPointsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e882048;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e882048:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e882066;
      }
    }
  }
  bVar5 = true;
LAB_14e882066:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8820a0

FStructOnScope * __thiscall
FMeshCopyToPointsDataflowNode::NewStructOnScope(FMeshCopyToPointsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode,(UObject *)pUVar2
                           ,L"MeshCopyToPointsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e882120

void __thiscall
FMeshCopyToPointsDataflowNode::SerializeInternal
          (FMeshCopyToPointsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode,(UObject *)pUVar1,
                         L"MeshCopyToPointsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88219d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e882260

FName __thiscall FMeshCopyToPointsDataflowNode::GetDisplayName(FMeshCopyToPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ScatterMeshes");
  return in_RDX;
}

// GetCategory @ 14e882290

FName __thiscall FMeshCopyToPointsDataflowNode::GetCategory(FMeshCopyToPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e882300

FString * __thiscall
FMeshCopyToPointsDataflowNode::GetTags
          (FMeshCopyToPointsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e882330

UScriptStruct * __thiscall
FMeshCopyToPointsDataflowNode::TypedScriptStruct(FMeshCopyToPointsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode,(UObject *)pUVar1,
                         L"MeshCopyToPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshCopyToPointsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8826a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshCopyToPointsDataflowNode::Evaluate
          (FMeshCopyToPointsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double *pdVar1;
  TObjectPtr<UDynamicMesh> TVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  atomic<unsigned_char> aVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FDynamicMesh3 *pFVar10;
  short sVar11;
  int iVar12;
  undefined1 *puVar13;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  UObject *pUVar16;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  ulonglong uVar17;
  uint uVar18;
  FDynamicMesh3 *pFVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  FDynamicMesh3 *pFVar24;
  FScriptContainerElement *pFVar25;
  bool bVar26;
  undefined1 auStackY_c88 [32];
  undefined1 local_c38;
  undefined1 local_c37 [7];
  UDynamicMesh *local_c30;
  uint local_c24;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> local_c20;
  FMeshCopyToPointsDataflowNode *local_c10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_c08;
  FDynamicMesh3 *local_c00;
  FDynamicMesh3 *local_bf8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_bf0;
  TObjectPtr<UDynamicMesh>_u_0 local_be8;
  FContext *local_be0;
  FDynamicMeshEditor local_bd8;
  TObjectPtr<UDynamicMesh>_u_0 local_bd0;
  FDynamicMeshEditor local_bc8;
  TDynamicVector<unsigned_short,512> local_bc0;
  TDynamicVector<int,512> local_ba8;
  TDynamicVector<unsigned_short,512> local_b88;
  TDynamicVector<int,512> local_b70;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_b48;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_b18;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_ae8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_ab8;
  double local_a60;
  FDynamicMesh3 local_a58;
  FDynamicMesh3 local_828;
  FMeshIndexMappings local_5f8;
  FMeshIndexMappings local_338;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_c88;
  pTVar23 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->Mesh;
  local_c10 = this;
  local_bf0 = pTVar23;
  local_be0 = param_1;
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar13 == pTVar23) {
    pTVar14 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                         ((FDataflowNode *)this,param_1,&this->MeshToCopy)->field0_0x0;
    TVar2.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar14->DebugPtr;
    if (TVar2.field0_0x0 == (UDynamicMesh *)0x0) {
      pUVar16 = GetTransientPackageAsObject();
      local_bd0.DebugPtr = NewObject<UDynamicMesh>(pUVar16);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_bd0.DebugPtr != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_bd0.DebugPtr);
      }
      FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>
                ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_bd0.ObjectPtr,
                 (TObjectPtr<UDynamicMesh> *)pTVar23);
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pFVar19 = *(FDynamicMesh3 **)((longlong)TVar2.field0_0x0 + 0xb8);
      local_be8.DebugPtr = (UDynamicMesh *)0x0;
      local_c00 = pFVar19;
      pTVar15 = FDataflowNode::
                GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                          ((FDataflowNode *)this,param_1,&this->Points);
      local_c08 = pTVar15;
      if ((0 < pTVar15->ArrayNum) && (0 < (pFVar19->VertexRefCounts).UsedCount)) {
        pUVar16 = GetTransientPackageAsObject();
        this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar16);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
        }
        local_be8.DebugPtr = this_00.DebugPtr;
        UDynamicMesh::Reset(this_00.DebugPtr);
        local_bd8.Mesh = ((this_00.DebugPtr)->Mesh).Ptr;
        local_c24 = pTVar15->ArrayNum;
        uVar17 = (ulonglong)(int)local_c24;
        pFVar24 = (FDynamicMesh3 *)(pTVar15->AllocatorInstance).Data;
        local_bf8 = (FDynamicMesh3 *)(&pFVar24->_padding_ + uVar17 * 3);
        while( true ) {
          pFVar10 = local_bf8;
          if (pTVar15->ArrayNum != (int)uVar17) {
            `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_c37);
          }
          param_1 = local_be0;
          this = local_c10;
          pTVar23 = local_bf0;
          if (pFVar24 == pFVar10) break;
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_a58,pFVar19);
          UE::Geometry::TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
                    (&local_bc0,&local_a58.VertexRefCounts.RefCounts);
          UE::Geometry::TDynamicVector<int,512>::TDynamicVector<int,512>
                    (&local_ba8,&local_a58.VertexRefCounts.FreeIndices);
          uVar22 = local_bc0.CurBlock * 0x200 + local_bc0.CurBlockUsed;
          uVar17 = 0;
          if ((uVar22 != 0) &&
             (uVar17 = 0,
             0xfffd < (ushort)(**(short **)local_bc0.Blocks.AllocatorInstance.Data - 1U))) {
            uVar17 = 1;
            uVar20 = 1;
            if (1 < (int)uVar22) {
              do {
                uVar17 = uVar20;
                sVar11 = *(short *)(*(longlong *)
                                     (local_bc0.Blocks.AllocatorInstance.Data + (uVar17 >> 9) * 8) +
                                   (ulonglong)((uint)uVar17 & 0x1ff) * 2);
                if ((sVar11 != 0) && (sVar11 != -1)) break;
                uVar18 = (uint)uVar17 + 1;
                uVar17 = (ulonglong)uVar18;
                uVar20 = uVar17;
              } while ((int)uVar18 < (int)uVar22);
            }
          }
          uVar18 = (uint)uVar17;
          FVar21.Data = local_bc0.Blocks.AllocatorInstance.Data;
          while (uVar18 != uVar22) {
            uVar20 = (ulonglong)((uint)uVar17 & 0x1ff);
            lVar3 = *(longlong *)
                     (local_a58.Vertices.Blocks.AllocatorInstance.Data + (uVar17 >> 9) * 8);
            pdVar1 = (double *)(lVar3 + uVar20 * 0x18);
            dVar7 = (double)local_c10->Scale;
            dVar8 = dVar7 * *(double *)(lVar3 + 0x10 + uVar20 * 0x18) +
                    (double)(pFVar24->Vertices).Blocks.AllocatorInstance.Data;
            dVar9 = dVar7 * *pdVar1 + (double)pFVar24->_padding_;
            dVar7 = dVar7 * pdVar1[1] + *(double *)&pFVar24->Vertices;
            sVar11 = _dclass(dVar9);
            if (((sVar11 < 1) && (sVar11 = _dclass(dVar7), sVar11 < 1)) &&
               (sVar11 = _dclass(dVar8), sVar11 < 1)) {
              *(double *)(lVar3 + uVar20 * 0x18) = dVar9;
              *(double *)(lVar3 + 8 + uVar20 * 0x18) = dVar7;
              *(double *)(lVar3 + 0x10 + uVar20 * 0x18) = dVar8;
              FVar21.Data = local_bc0.Blocks.AllocatorInstance.Data;
              if (local_a58.ChangeStampShape.bIsEnabled != false) {
                LOCK();
                bVar26 = local_a58.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
                if (bVar26) {
                  local_a58.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar26) {
                  UE::FMutex::LockSlow(&local_a58.ChangeStampShape.Mutex);
                }
                local_a58.ChangeStampShape.Value = local_a58.ChangeStampShape.Value + 1;
                LOCK();
                aVar6 = local_a58.ChangeStampShape.Mutex.State - 1;
                UNLOCK();
                bVar5 = (byte)local_a58.ChangeStampShape.Mutex.State & 2;
                FVar21.Data = local_bc0.Blocks.AllocatorInstance.Data;
                local_a58.ChangeStampShape.Mutex.State = aVar6;
                if (bVar5 != 0) {
                  UE::FMutex::WakeWaitingThread(&local_a58.ChangeStampShape.Mutex);
                  FVar21.Data = local_bc0.Blocks.AllocatorInstance.Data;
                }
              }
            }
            uVar18 = (uint)uVar17 + 1;
            uVar17 = (ulonglong)uVar18;
            if ((int)uVar18 < (int)uVar22) {
              do {
                sVar11 = *(short *)(*(longlong *)(FVar21.Data + (uVar17 >> 9) * 8) +
                                   (ulonglong)((uint)uVar17 & 0x1ff) * 2);
                if ((sVar11 != 0) && (sVar11 != -1)) break;
                uVar18 = (uint)uVar17 + 1;
                uVar17 = (ulonglong)uVar18;
              } while ((int)uVar18 < (int)uVar22);
              uVar18 = (uint)uVar17;
            }
          }
          UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_5f8);
          local_b48._0_8_ = 0;
          local_b48._40_8_ = 0;
          local_b18._0_8_ = 0;
          local_b18._40_8_ = 0;
          UE::Geometry::FDynamicMeshEditor::AppendMesh
                    (&local_bd8,&local_a58,&local_5f8,&local_b18,&local_b48,false);
          UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_5f8);
          UE::Geometry::TDynamicVector<int,512>::Empty(&local_ba8,0);
          if (local_ba8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ba8.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<unsigned_short,512>::Empty(&local_bc0,0);
          if (local_bc0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_bc0.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_a58);
          uVar17 = (ulonglong)local_c24;
          pFVar24 = (FDynamicMesh3 *)&(pFVar24->Vertices).Blocks.ArrayNum;
          pFVar19 = local_c00;
          pTVar15 = local_c08;
        }
      }
      FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
                ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_be8.ObjectPtr,
                 (TObjectPtr<UDynamicMesh> *)pTVar23);
    }
  }
  else {
    pTVar23 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this->Meshes;
    local_c08 = pTVar23;
    puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar13 == pTVar23) {
      local_c20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c20.ArrayNum = 0;
      local_c20.ArrayMax = 0;
      pTVar14 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                           ((FDataflowNode *)this,param_1,&this->MeshToCopy)->field0_0x0;
      TVar2.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar14->DebugPtr;
      if (TVar2.field0_0x0 != (UDynamicMesh *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
        }
        pFVar19 = *(FDynamicMesh3 **)((longlong)TVar2.field0_0x0 + 0xb8);
        local_bf8 = pFVar19;
        local_bf0 = FDataflowNode::
                    GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                              ((FDataflowNode *)this,param_1,&this->Points);
        local_c24 = local_bf0->ArrayNum;
        uVar17 = (ulonglong)(int)local_c24;
        if ((0 < (int)local_c24) && (0 < (pFVar19->VertexRefCounts).UsedCount)) {
          pFVar25 = (local_bf0->AllocatorInstance).Data;
          local_c00 = (FDynamicMesh3 *)(pFVar25 + uVar17 * 0x18);
          while( true ) {
            pFVar24 = local_c00;
            uVar20 = 0;
            if (local_bf0->ArrayNum != (int)uVar17) {
              local_c38 = 0;
              `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_c38);
            }
            pTVar23 = local_c08;
            param_1 = local_be0;
            this = local_c10;
            if ((FDynamicMesh3 *)pFVar25 == pFVar24) break;
            pUVar16 = GetTransientPackageAsObject();
            local_c30 = NewObject<UDynamicMesh>(pUVar16);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_c30 != (UDynamicMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_c30);
            }
            UDynamicMesh::Reset(local_c30);
            if (((local_c20.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c30) &&
                ((FScriptContainerElement *)&local_c30 <
                 local_c20.AllocatorInstance.Data + (longlong)local_c20.ArrayMax * 8)) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar26)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar12 = local_c20.ArrayNum;
            if (local_c20.ArrayNum == local_c20.ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_c20.AllocatorInstance,&local_c20.ArrayMax);
            }
            local_c20.ArrayNum = iVar12 + 1;
            *(UDynamicMesh **)(local_c20.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_c30;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_c30 != (UDynamicMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_c30);
            }
            local_bc8.Mesh = (local_c30->Mesh).Ptr;
            UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_828,pFVar19);
            UE::Geometry::TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
                      (&local_b88,&local_828.VertexRefCounts.RefCounts);
            UE::Geometry::TDynamicVector<int,512>::TDynamicVector<int,512>
                      (&local_b70,&local_828.VertexRefCounts.FreeIndices);
            uVar22 = local_b88.CurBlock * 0x200 + local_b88.CurBlockUsed;
            if ((uVar22 != 0) &&
               (0xfffd < (ushort)(**(short **)local_b88.Blocks.AllocatorInstance.Data - 1U))) {
              uVar20 = 1;
              uVar17 = 1;
              if (1 < (int)uVar22) {
                do {
                  uVar20 = uVar17;
                  sVar11 = *(short *)(*(longlong *)
                                       (local_b88.Blocks.AllocatorInstance.Data + (uVar20 >> 9) * 8)
                                     + (ulonglong)((uint)uVar20 & 0x1ff) * 2);
                  if ((sVar11 != 0) && (sVar11 != -1)) break;
                  uVar18 = (uint)uVar20 + 1;
                  uVar20 = (ulonglong)uVar18;
                  uVar17 = uVar20;
                } while ((int)uVar18 < (int)uVar22);
              }
            }
            uVar18 = (uint)uVar20;
            FVar21.Data = local_b88.Blocks.AllocatorInstance.Data;
            while (uVar18 != uVar22) {
              uVar17 = (ulonglong)((uint)uVar20 & 0x1ff);
              lVar3 = *(longlong *)
                       (local_828.Vertices.Blocks.AllocatorInstance.Data + (uVar20 >> 9) * 8);
              pdVar1 = (double *)(lVar3 + uVar17 * 0x18);
              local_a60 = *(double *)(lVar3 + 0x10 + uVar17 * 0x18);
              dVar7 = (double)local_c10->Scale;
              dVar9 = dVar7 * *pdVar1 + *(double *)pFVar25;
              dVar8 = dVar7 * pdVar1[1] + *(double *)(pFVar25 + 8);
              dVar7 = dVar7 * local_a60 + *(double *)(pFVar25 + 0x10);
              sVar11 = _dclass(dVar9);
              if (((sVar11 < 1) && (sVar11 = _dclass(dVar8), sVar11 < 1)) &&
                 (sVar11 = _dclass(dVar7), sVar11 < 1)) {
                *(double *)(lVar3 + uVar17 * 0x18) = dVar9;
                *(double *)(lVar3 + 8 + uVar17 * 0x18) = dVar8;
                *(double *)(lVar3 + 0x10 + uVar17 * 0x18) = dVar7;
                FVar21.Data = local_b88.Blocks.AllocatorInstance.Data;
                if (local_828.ChangeStampShape.bIsEnabled != false) {
                  LOCK();
                  bVar26 = local_828.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
                  if (bVar26) {
                    local_828.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
                  }
                  UNLOCK();
                  if (!bVar26) {
                    UE::FMutex::LockSlow(&local_828.ChangeStampShape.Mutex);
                  }
                  local_828.ChangeStampShape.Value = local_828.ChangeStampShape.Value + 1;
                  LOCK();
                  aVar6 = local_828.ChangeStampShape.Mutex.State - 1;
                  UNLOCK();
                  bVar5 = (byte)local_828.ChangeStampShape.Mutex.State & 2;
                  FVar21.Data = local_b88.Blocks.AllocatorInstance.Data;
                  local_828.ChangeStampShape.Mutex.State = aVar6;
                  if (bVar5 != 0) {
                    UE::FMutex::WakeWaitingThread(&local_828.ChangeStampShape.Mutex);
                    FVar21.Data = local_b88.Blocks.AllocatorInstance.Data;
                  }
                }
              }
              uVar18 = (uint)uVar20 + 1;
              uVar20 = (ulonglong)uVar18;
              if ((int)uVar18 < (int)uVar22) {
                do {
                  sVar11 = *(short *)(*(longlong *)(FVar21.Data + (uVar20 >> 9) * 8) +
                                     (ulonglong)((uint)uVar20 & 0x1ff) * 2);
                  if ((sVar11 != 0) && (sVar11 != -1)) break;
                  uVar18 = (uint)uVar20 + 1;
                  uVar20 = (ulonglong)uVar18;
                } while ((int)uVar18 < (int)uVar22);
                uVar18 = (uint)uVar20;
              }
            }
            UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_338);
            local_ae8._0_8_ = 0;
            local_ae8._40_8_ = 0;
            local_ab8._0_8_ = 0;
            local_ab8._40_8_ = 0;
            UE::Geometry::FDynamicMeshEditor::AppendMesh
                      (&local_bc8,&local_828,&local_338,&local_ab8,&local_ae8,false);
            UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_338);
            UE::Geometry::TDynamicVector<int,512>::Empty(&local_b70,0);
            if (local_b70.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b70.Blocks.AllocatorInstance.Data);
            }
            UE::Geometry::TDynamicVector<unsigned_short,512>::Empty(&local_b88,0);
            if (local_b88.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b88.Blocks.AllocatorInstance.Data);
            }
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_828);
            pFVar25 = pFVar25 + 0x18;
            uVar17 = (ulonglong)local_c24;
            pFVar19 = local_bf8;
          }
        }
      }
      FDataflowNode::
      SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_c20,
                 (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)pTVar23);
      if (local_c20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c20.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FMeshCopyToPointsDataflowNode @ 14e925270

FMeshCopyToPointsDataflowNode * __thiscall
FMeshCopyToPointsDataflowNode::FMeshCopyToPointsDataflowNode
          (FMeshCopyToPointsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->Scale = 1.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FMeshCopyToPointsDataflowNode__6B_;
  local_58.Reference = &this->Points;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_58.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->MeshToCopy).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->MeshToCopy;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Meshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

