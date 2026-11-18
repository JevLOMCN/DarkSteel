// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// FMeshAttributeTransfer @ 14c6df7a0

FMeshAttributeTransfer * __thiscall
UE::Geometry::FMeshAttributeTransfer::FMeshAttributeTransfer
          (FMeshAttributeTransfer *this,FDynamicMesh3 *param_1,FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMeshAttributeTransfer *pFVar3;
  
  this->SourceMesh = param_1;
  this->_padding_ = (longlong)&___7FMeshAttributeTransfer_Geometry_UE__6B_;
  this->TargetMesh = param_2;
  this->TransferType = MaterialID;
  (this->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Errors).ArrayNum = 0;
  (this->Errors).ArrayMax = 0;
  (this->SourceSpatial).Ptr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  if (param_1 == (FDynamicMesh3 *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5567449832450162704>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshAttributeTransfer.cpp"
                       ,0x10,"SourceMeshIn");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshAttributeTransfer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_2 == (FDynamicMesh3 *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5567449832450162705>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\MeshAttributeTransfer.cpp"
                       ,0x11,"TargetMeshIn");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshAttributeTransfer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FMeshAttributeTransfer @ 14c6e1680

void __thiscall
UE::Geometry::FMeshAttributeTransfer::~FMeshAttributeTransfer(FMeshAttributeTransfer *this)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMeshAttributeTransfer_Geometry_UE__6B_;
  pTVar1 = (this->SourceSpatial).Ptr;
  if (pTVar1 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  pFVar2 = (this->Errors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator() @ 14c6e6f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshAttributeTransfer::Apply_MaterialID'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  double *pdVar11;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  double local_140;
  double local_138;
  double local_130;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [8];
  TArray<int,TFixedAllocator<7>_> local_d0;
  undefined8 local_a8 [2];
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (*(FDynamicMesh3 **)(*(longlong *)this + 0x10),param_1,
             (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_110._s_0,
             (TVector<double> *)&local_f8._s_0);
  uVar5 = __real_7fefffffffffffff;
  pdVar11 = &BarySamplePoints[0].field0_0x0._s_0.Z;
  local_d0.ArrayMax = 7;
  local_d0.ArrayNum = 0;
  do {
    dVar1 = ((TVector<double>_u_0_s_0 *)(pdVar11 + -2))->X;
    dVar2 = pdVar11[-1];
    dVar3 = *pdVar11;
    local_140 = dVar2 * local_110._s_0.X + dVar1 * local_128._s_0.X + dVar3 * local_f8._s_0.X;
    local_138 = dVar2 * local_110._s_0.Y + dVar1 * local_128._s_0.Y + dVar3 * local_f8._s_0.Y;
    local_130 = dVar2 * local_110._s_0.Z + dVar1 * local_128._s_0.Z + dVar3 * local_f8._s_0.Z;
    local_a8[0] = uVar5;
    local_98 = 0;
    local_70 = (longlong *)0x0;
    local_68 = 0;
    uVar7 = (**(code **)(**(longlong **)(*(longlong *)this + 0x30) + 0x20))
                      (*(longlong **)(*(longlong *)this + 0x30),&local_140,local_d8,local_a8);
    if (local_98 != 0) {
      plVar9 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar9 = local_70;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    local_148._0_4_ =
         *(uchar (*) [4])
          (*(longlong *)
            (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x20) + (ulonglong)(uVar7 >> 9) * 8
            ) + (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((&local_d0 <= (TArray<int,TFixedAllocator<7>_> *)local_148) &&
       (local_148 < local_d0.AllocatorInstance.InlineData + local_d0.ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_d0.ArrayNum == local_d0.ArrayMax) {
      local_d0.ArrayNum =
           UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<7>::ForElementType<int>_>
                     (0x404,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
    }
    pdVar11 = pdVar11 + 3;
    lVar10 = (longlong)local_d0.ArrayNum;
    local_d0.ArrayNum = local_d0.ArrayNum + 1;
    *(undefined4 *)local_d0.AllocatorInstance.InlineData[lVar10].Pad = local_148._0_4_;
  } while ((longlong)pdVar11 < 0x154d66a88);
  iVar8 = SelectMostFrequentElement<TFixedAllocator<7>_>(&local_d0);
  *(int *)(*(longlong *)
            (*(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x20) +
            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) = iVar8;
  return;
}

// Apply @ 14c70b4e0

bool __thiscall UE::Geometry::FMeshAttributeTransfer::Apply(FMeshAttributeTransfer *this)

{
  TArray<UE::Geometry::EMeshAttributeTransferError,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  if (this->SourceMesh != (FDynamicMesh3 *)0x0) {
    if (this->TargetMesh != (FDynamicMesh3 *)0x0) {
      if (this->TransferType == MaterialID) {
        bVar5 = Apply_MaterialID(this);
        return bVar5;
      }
      pTVar1 = &this->Errors;
      local_10[0] = 4;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_10) &&
         ((FScriptContainerElement *)local_10 < pFVar3 + (longlong)(this->Errors).ArrayMax * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      iVar7 = (this->Errors).ArrayNum;
      piVar2 = &(this->Errors).ArrayMax;
      if (iVar7 == *piVar2) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->Errors).ArrayNum = iVar7 + 1;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_10[0];
      return false;
    }
    pTVar1 = &this->Errors;
    local_14 = 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_14) &&
       ((FScriptContainerElement *)&local_14 < pFVar3 + (longlong)(this->Errors).ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar7 = (this->Errors).ArrayNum;
    piVar2 = &(this->Errors).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Errors).ArrayNum = iVar7 + 1;
    *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_14;
    return false;
  }
  pTVar1 = &this->Errors;
  local_18 = 0;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)(this->Errors).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = (this->Errors).ArrayNum;
  piVar2 = &(this->Errors).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Errors).ArrayNum = iVar7 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18;
  return false;
}

// Apply_MaterialID @ 14c714570

bool __thiscall UE::Geometry::FMeshAttributeTransfer::Apply_MaterialID(FMeshAttributeTransfer *this)

{
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar1;
  int *piVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar9;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar10;
  undefined8 *puVar11;
  TDynamicMeshScalarTriangleAttribute<int> *local_res8;
  TDynamicMeshScalarTriangleAttribute<int> *local_res10;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FMeshAttributeTransfer **local_30;
  FMeshAttributeTransfer *local_28;
  TDynamicMeshScalarTriangleAttribute<int> **local_20;
  TDynamicMeshScalarTriangleAttribute<int> **local_18;
  
  pFVar3 = (this->SourceMesh->AttributeSet).Ptr;
  if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) {
    local_res10 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  }
  else {
    local_res10 = (pFVar3->MaterialIDAttrib).Ptr;
    if (local_res10 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pFVar3 = (this->TargetMesh->AttributeSet).Ptr;
      if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) {
        local_res8 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
      }
      else {
        local_res8 = (pFVar3->MaterialIDAttrib).Ptr;
        if (local_res8 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          pTVar9 = ::operator_new(0xc0);
          pTVar10 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
          if (pTVar9 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
            pTVar10 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(pTVar9,this->SourceMesh,true);
          }
          pTVar1 = &this->SourceSpatial;
          if (pTVar1 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
                         *)&local_50) {
            if (pTVar10 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) goto LAB_14c71462b;
            puVar11 = (undefined8 *)pTVar10->_padding_;
          }
          else {
            pTVar9 = pTVar1->Ptr;
            pTVar1->Ptr = pTVar10;
            if (pTVar9 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) goto LAB_14c71462b;
            puVar11 = (undefined8 *)pTVar9->_padding_;
            pTVar10 = pTVar9;
          }
          (*(code *)*puVar11)(pTVar10,1);
LAB_14c71462b:
          local_20 = &local_res10;
          local_38 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FMeshAttributeTransfer::Apply_MaterialID'::__l2::<lambda_1>,void,int>
                     ::Call;
          local_18 = &local_res8;
          local_30 = &local_28;
          local_48.DataPtr = (void **)0x0;
          local_48.ArrayNum = 0;
          local_28 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",
                     (this->TargetMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->TargetMesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
                     (TFunctionRef<void___cdecl(int)> *)&local_38,local_res8._0_1_,None,&local_48);
          return true;
        }
      }
      pFVar4 = (this->Errors).AllocatorInstance.Data;
      local_58 = 3;
      if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)(this->Errors).ArrayMax * 4))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = (this->Errors).ArrayNum;
      piVar2 = &(this->Errors).ArrayMax;
      local_54 = local_58;
      if (iVar8 == *piVar2) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->Errors).AllocatorInstance,piVar2);
        local_54 = local_58;
      }
      goto LAB_14c7147d5;
    }
  }
  pFVar4 = (this->Errors).AllocatorInstance.Data;
  local_54 = 2;
  if (((pFVar4 <= (FScriptContainerElement *)&local_54) &&
      ((FScriptContainerElement *)&local_54 < pFVar4 + (longlong)(this->Errors).ArrayMax * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar8 = (this->Errors).ArrayNum;
  piVar2 = &(this->Errors).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Errors).AllocatorInstance,piVar2);
  }
LAB_14c7147d5:
  (this->Errors).ArrayNum = iVar8 + 1;
  *(undefined4 *)((this->Errors).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_54;
  return false;
}

