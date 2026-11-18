// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Compute @ 14c7eadd0

bool __thiscall UE::Geometry::FPNTriangles::Compute(FPNTriangles *this)

{
  FDynamicMesh3 *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FProgressCancel *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  TVar8;
  longlong *plVar9;
  FDynamicMeshAttributeSet *pFVar10;
  FDynamicMeshAttributeSet *pFVar11;
  undefined1 local_res8 [8];
  char local_res10 [8];
  undefined1 local_res18 [8];
  FProgressCancel *local_res20;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> local_318;
  undefined1 local_308 [32];
  ForAnyElementType local_2e8;
  void *local_2e0;
  ForAnyElementType local_2d8;
  undefined1 local_2d0 [24];
  TArrayView<std::nullptr_t,int> local_2b8;
  code *local_2a8;
  FProgressCancel ***local_2a0;
  FProgressCancel **local_298;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *local_290;
  FDynamicMesh3 *local_288;
  FDynamicMesh3 *local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  char *local_268;
  undefined1 *local_260;
  FDynamicMesh3 local_258;
  
  if (this->TessellationLevel < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TessellationLevel >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\PNTriangles.cpp"
                       ,0x18e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (this->Mesh == (FDynamicMesh3 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\PNTriangles.cpp"
                       ,399,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if ((this->TessellationLevel < 0) || (pFVar1 = this->Mesh, pFVar1 == (FDynamicMesh3 *)0x0)) {
    return false;
  }
  if (this->TessellationLevel == 0) {
    return true;
  }
  pFVar10 = (FDynamicMeshAttributeSet *)0x0;
  local_308._8_8_ = (FScriptContainerElement *)0x0;
  local_308._16_8_ = 0;
  local_308._0_8_ = (FDynamicMesh3 *)0x0;
  if (((pFVar1->VertexNormals).bIsSet == false) &&
     (((pFVar11 = (pFVar1->AttributeSet).Ptr, pFVar11 == (FDynamicMeshAttributeSet *)0x0 ||
       ((pFVar11->NormalLayers).Array.ArrayNum < 1)) ||
      (*(longlong *)(pFVar11->NormalLayers).Array.AllocatorInstance.Data == 0)))) {
    bVar5 = false;
    local_308._0_8_ = pFVar1;
    FMeshNormals::Compute_FaceAvg((FMeshNormals *)local_308,true,true);
  }
  else {
    bVar5 = true;
  }
  local_308._24_8_ = (FDynamicMesh3 *)0x0;
  local_2e8.Data = (FScriptContainerElement *)0x0;
  pFVar11 = (FDynamicMeshAttributeSet *)local_308;
  if (bVar5) {
    pFVar11 = pFVar10;
  }
  local_2e0 = (void *)0x0;
  local_2d8.Data = (FScriptContainerElement *)0x0;
  bVar5 = FPNTrianglesLocals::ComputeControlPoints
                    ((FControlPoints *)(local_308 + 0x18),this->Mesh,(FMeshNormals *)pFVar11,false,
                     this->Progress);
  if (!bVar5) {
    bVar5 = false;
    goto LAB_14c7eb119;
  }
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.ArrayNum = 0;
  local_318.ArrayMax = 0;
  FDynamicMesh3::FDynamicMesh3(&local_258);
  bVar5 = FPNTrianglesLocals::TessellateMesh
                    (this->Mesh,this->TessellationLevel,this->Progress,&local_318,&local_258);
  if (bVar5) {
    local_res20 = this->Progress;
    local_res18[0] = local_258.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0;
    local_res10[0] = local_258.VertexNormals.bIsSet;
    local_298 = &local_res20;
    local_290 = &local_318;
    local_288 = this->Mesh;
    local_278 = local_308 + 0x18;
    local_270 = local_res8;
    local_268 = local_res10;
    local_260 = local_res18;
    local_2a8 = Core::Private::Function::
                TFunctionRefCaller<`FPNTrianglesLocals::DisplaceAndSetQuadraticNormals'::__l2::<lambda_1>,void,int>
                ::Call;
    local_2a0 = &local_298;
    local_res8[0] = 0;
    local_2b8.DataPtr = (void **)0x0;
    local_2b8.ArrayNum = 0;
    local_280 = &local_258;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_318.ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_2a8,(<lambda_1>)0x0,None,&local_2b8);
    pFVar4 = local_res20;
    if (local_res20 != (FProgressCancel *)0x0) {
      if (local_res20->WasCancelled == false) {
        Core::Private::Function::CheckCallable(*(void **)&local_res20->CancelF);
        pcVar3 = *(code **)&pFVar4->CancelF;
        plVar2 = *(longlong **)&(pFVar4->CancelF).field_0x28;
        plVar9 = (longlong *)&(pFVar4->CancelF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = plVar2;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        bVar5 = (bool)(*pcVar3)(uVar7);
        pFVar4->WasCancelled = bVar5;
        if (bVar5 == false) goto LAB_14c7eb055;
      }
      goto LAB_14c7eb0f7;
    }
LAB_14c7eb055:
    if (this->bRecalculateNormals != false) {
      if (local_258.AttributeSet.Ptr == (FDynamicMeshAttributeSet *)0x0) {
        if (local_258.VertexNormals.bIsSet != false) {
          FMeshNormals::QuickComputeVertexNormals(&local_258,false);
        }
      }
      else {
        local_2d0._8_8_ = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
        local_2d0._16_8_ = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
        TVar8.Ptr = pFVar10;
        if (local_258.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
          TVar8.Ptr = local_258.AttributeSet.Ptr;
        }
        if (0 < ((TVar8.Ptr)->NormalLayers).Array.ArrayNum) {
          pFVar10 = *(FDynamicMeshAttributeSet **)
                     ((TVar8.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        local_2d0._0_8_ = &local_258;
        FMeshNormals::Compute_Overlay_FaceAvg
                  ((FMeshNormals *)local_2d0,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar10,true,true
                  );
        FMeshNormals::CopyToOverlay
                  ((FMeshNormals *)local_2d0,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar10,false);
        if ((TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)local_2d0._8_8_ !=
            (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
          FMemory::Free((void *)local_2d0._8_8_);
        }
      }
    }
    FDynamicMesh3::Copy(this->Mesh,&local_258,true,true,true,true);
    bVar5 = true;
  }
  else {
LAB_14c7eb0f7:
    bVar5 = false;
  }
  FDynamicMesh3::~FDynamicMesh3(&local_258);
  if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.AllocatorInstance.Data);
  }
LAB_14c7eb119:
  if (local_2e0 != (void *)0x0) {
    FMemory::Free(local_2e0);
  }
  if ((FDynamicMesh3 *)local_308._24_8_ != (FDynamicMesh3 *)0x0) {
    FMemory::Free((void *)local_308._24_8_);
  }
  if ((FScriptContainerElement *)local_308._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._8_8_);
  }
  return bVar5;
}

