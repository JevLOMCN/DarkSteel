// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 5

// ~FGenerateCrossSectionOp @ 14c949590

void __thiscall
UE::Geometry::FGenerateCrossSectionOp::~FGenerateCrossSectionOp(FGenerateCrossSectionOp *this)

{
  FMeshPlaneCut *pFVar1;
  
  this->_padding_ = (longlong)&___7FGenerateCrossSectionOp_Geometry_UE__6B_;
  pFVar1 = (this->MeshCutter).Ptr;
  if (pFVar1 != (FMeshPlaneCut *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// CalculateResult @ 14c964300

void __thiscall
UE::Geometry::FGenerateCrossSectionOp::CalculateResult
          (FGenerateCrossSectionOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FDynamicMesh3 *pFVar3;
  bool bVar4;
  undefined8 uVar5;
  FMeshPlaneCut *pFVar6;
  FMeshPlaneCut *pFVar7;
  longlong *plVar8;
  TUniquePtr<UE::Geometry::FMeshPlaneCut,TDefaultDelete<UE::Geometry::FMeshPlaneCut>_> *pTVar9;
  longlong local_58 [2];
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar8 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) {
      return;
    }
  }
  pFVar3 = (FDynamicMesh3 *)this->_padding_;
  if (((this->InputMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FDynamicMesh3::Copy(pFVar3,(this->InputMesh).Object,true,true,true,true);
  pFVar3 = (FDynamicMesh3 *)this->_padding_;
  pFVar6 = ::operator_new(0x140);
  pFVar7 = (FMeshPlaneCut *)0x0;
  if (pFVar6 != (FMeshPlaneCut *)0x0) {
    local_48._s_0.X = (this->LocalPlaneNormal).field0_0x0._s_0.X;
    local_48._s_0.Y = (this->LocalPlaneNormal).field0_0x0._s_0.Y;
    local_48._s_0.Z = (this->LocalPlaneNormal).field0_0x0._s_0.Z;
    local_28._s_0.X = (this->LocalPlaneOrigin).field0_0x0._s_0.X;
    local_28._s_0.Y = (this->LocalPlaneOrigin).field0_0x0._s_0.Y;
    local_28._s_0.Z = (this->LocalPlaneOrigin).field0_0x0._s_0.Z;
    pFVar7 = FMeshPlaneCut::FMeshPlaneCut
                       (pFVar6,pFVar3,(TVector<double> *)&local_28._s_0,
                        (TVector<double> *)&local_48._s_0);
  }
  pTVar9 = &this->MeshCutter;
  if (pTVar9 != (TUniquePtr<UE::Geometry::FMeshPlaneCut,TDefaultDelete<UE::Geometry::FMeshPlaneCut>_>
                 *)local_58) {
    pFVar6 = pTVar9->Ptr;
    pTVar9->Ptr = pFVar7;
    pFVar7 = (FMeshPlaneCut *)0x0;
    if (pFVar6 != (FMeshPlaneCut *)0x0) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      goto LAB_14c96445c;
    }
  }
  if (pFVar7 != (FMeshPlaneCut *)0x0) {
    (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
  }
LAB_14c96445c:
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar8 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar5 = (**(code **)(*plVar8 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) {
      return;
    }
  }
  pTVar9 = &this->MeshCutter;
  pTVar9->Ptr->UVScaleFactor = 1.0;
  pTVar9->Ptr->bSimplifyAlongNewEdges = true;
  if ((((param_1 == (FProgressCancel *)0x0) || (bVar4 = FProgressCancel::Cancelled(param_1), !bVar4)
       ) && ((**(code **)(*(longlong *)pTVar9->Ptr + 0x10))(), param_1 != (FProgressCancel *)0x0))
     && (bVar4 = FProgressCancel::Cancelled(param_1), !bVar4)) {
    FProgressCancel::Cancelled(param_1);
  }
  return;
}

// GetCutLoops @ 14c97e920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FGenerateCrossSectionOp::GetCutLoops
          (FGenerateCrossSectionOp *this,
          TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FMeshPlaneCut *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  uint uVar8;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_28;
  
  pFVar1 = (this->MeshCutter).Ptr;
  uVar8 = 0;
  if ((pFVar1 != (FMeshPlaneCut *)0x0) && ((pFVar1->OpenBoundaries).ArrayNum != 0)) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    if ((pFVar1->OpenBoundaries).ArrayNum != 1) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3509940247448256581>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CurveOps\\GenerateCrossSectionOp.cpp"
                         ,0x45,"MeshCutter->OpenBoundaries.Num() == 1");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar1 = (this->MeshCutter).Ptr;
    if ((pFVar1->OpenBoundaries).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
    }
    if ((pFVar1->OpenBoundaries).AllocatorInstance.Data[0x28] == (FScriptContainerElement)0x0) {
      pFVar1 = (this->MeshCutter).Ptr;
      if ((pFVar1->OpenBoundaries).ArrayNum < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::SetNum(&local_28,*(int *)((pFVar1->OpenBoundaries).AllocatorInstance.Data + 0x10),Default);
      while( true ) {
        pFVar1 = (this->MeshCutter).Ptr;
        if ((pFVar1->OpenBoundaries).ArrayNum < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar4)();
            return pTVar7;
          }
        }
        if (*(int *)((pFVar1->OpenBoundaries).AllocatorInstance.Data + 0x10) <= (int)uVar8) break;
        pFVar1 = (this->MeshCutter).Ptr;
        if ((pFVar1->OpenBoundaries).ArrayNum < 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar4)();
            return pTVar7;
          }
        }
        pFVar2 = (pFVar1->OpenBoundaries).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(pFVar2 + 0x10)) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar4)();
            return pTVar7;
          }
        }
        lVar3 = *(longlong *)(pFVar2 + 8);
        uVar6 = 0;
        if ((int)uVar8 < local_28.ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar4)();
            return pTVar7;
          }
        }
        FEdgeLoop::GetVertices<UE::Math::TVector<double>_>
                  ((FEdgeLoop *)(lVar3 + (longlong)(int)uVar8 * 0x40),
                   (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                   (local_28.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10));
        uVar8 = uVar8 + 1;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_28.ArrayNum;
      __return_storage_ptr__->ArrayMax = local_28.ArrayMax;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0,0);
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 local_28.AllocatorInstance.Data,local_28.ArrayNum);
    }
    if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
        local_28.AllocatorInstance.Data !=
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCutSpans @ 14c97ec30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FGenerateCrossSectionOp::GetCutSpans
          (FGenerateCrossSectionOp *this,
          TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FMeshPlaneCut *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong local_res18;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_68;
  TPolyline<double,3> local_58;
  
  pFVar2 = (this->MeshCutter).Ptr;
  uVar11 = 0;
  if ((pFVar2 == (FMeshPlaneCut *)0x0) || ((pFVar2->OpenBoundaries).ArrayNum == 0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  if (((pFVar2->OpenBoundaries).ArrayNum != 1) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3509940247448256613>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CurveOps\\GenerateCrossSectionOp.cpp"
                         ,0x65,"MeshCutter->OpenBoundaries.Num() == 1"), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar3)();
    return pTVar8;
  }
  pFVar2 = (this->MeshCutter).Ptr;
  if (((pFVar2->OpenBoundaries).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar3)();
    return pTVar8;
  }
  if ((pFVar2->OpenBoundaries).AllocatorInstance.Data[0x28] == (FScriptContainerElement)0x0) {
    pFVar2 = (this->MeshCutter).Ptr;
    if (((pFVar2->OpenBoundaries).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::SetNum(&local_68,*(int *)((pFVar2->OpenBoundaries).AllocatorInstance.Data + 0x20),Default);
    local_res18 = 0;
    uVar13 = uVar11;
    while( true ) {
      pFVar2 = (this->MeshCutter).Ptr;
      if (((pFVar2->OpenBoundaries).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      FVar4.Data = local_68.AllocatorInstance.Data;
      uVar12 = (uint)uVar13;
      if (*(int *)((pFVar2->OpenBoundaries).AllocatorInstance.Data + 0x20) <= (int)uVar12) break;
      pFVar2 = (this->MeshCutter).Ptr;
      local_58.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Vertices.ArrayNum = 0;
      local_58.Vertices.ArrayMax = 0;
      if (((pFVar2->OpenBoundaries).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar10 = (pFVar2->OpenBoundaries).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)(pFVar10 + 0x20)) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      FEdgeSpan::GetPolyline((FEdgeSpan *)(*(longlong *)(pFVar10 + 0x18) + local_res18),&local_58);
      uVar7 = 0;
      if ((int)uVar12 < local_68.ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      FVar4.Data = local_58.Vertices.AllocatorInstance.Data;
      pFVar10 = local_68.AllocatorInstance.Data + uVar11;
      if (pFVar10 != (FScriptContainerElement *)&local_58) {
        iVar5 = local_58.Vertices.ArrayNum;
        lVar9 = (longlong)local_58.Vertices.ArrayNum;
        pFVar1 = pFVar10 + 0xc;
        *(int *)(pFVar10 + 8) = local_58.Vertices.ArrayNum;
        if ((local_58.Vertices.ArrayNum == 0) && (*(int *)pFVar1 == 0)) {
          *(int *)pFVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_58.Vertices.ArrayNum,*(int *)pFVar1,(ForAnyElementType *)pFVar10,
                     local_58.Vertices.ArrayNum,(int *)pFVar1);
          if (iVar5 != 0) {
            memcpy(*(void **)pFVar10,FVar4.Data,lVar9 * 0x18);
          }
        }
      }
      if (local_58.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Vertices.AllocatorInstance.Data);
      }
      local_res18 = local_res18 + 0x40;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar11 = uVar11 + 0x10;
    }
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AllocatorInstance).Data = FVar4.Data;
    __return_storage_ptr__->ArrayNum = local_68.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0,0);
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               local_68.AllocatorInstance.Data,local_68.ArrayNum);
  }
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      local_68.AllocatorInstance.Data !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetTransform @ 14c9857d0

void __thiscall
UE::Geometry::FGenerateCrossSectionOp::SetTransform
          (FGenerateCrossSectionOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

