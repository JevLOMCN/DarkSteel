// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 21

// StaticClass @ 14cbd10a0

UClass * __cdecl UConvertToPolygonsTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsTool",
               &Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton,
               StaticRegisterNativesUConvertToPolygonsTool,0x1d8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UConvertToPolygonsTool>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton;
}

// UConvertToPolygonsTool @ 14cbdcff0

UConvertToPolygonsTool * __thiscall
UConvertToPolygonsTool::UConvertToPolygonsTool(UConvertToPolygonsTool *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UConvertToPolygonsTool__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UConvertToPolygonsToolProperties *)0x0;
  (this->CopyFromLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  (this->PreviewCompute).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->OriginalDynamicMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bUsingSelection = false;
  (this->SelectionTriangleROI).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0
  ;
  (this->SelectionTriangleROI).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OriginalSubmesh).Object = (FDynamicSubmesh3 *)0x0;
  (this->OriginalSubmesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComputeOperatorSharedMesh).Object =
       (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->ComputeOperatorSharedMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PolygonEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolygonEdges).ArrayNum = 0;
  (this->PolygonEdges).ArrayMax = 0;
  (this->ActiveFromGroupSet).Object = (FPolygroupSet *)0x0;
  (this->ActiveFromGroupSet).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UConvertToPolygonsTool @ 14cbdd0b0

UConvertToPolygonsTool * __thiscall
UConvertToPolygonsTool::UConvertToPolygonsTool(UConvertToPolygonsTool *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UConvertToPolygonsTool__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UConvertToPolygonsToolProperties *)0x0;
  (this->CopyFromLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  (this->PreviewCompute).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->OriginalDynamicMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bUsingSelection = false;
  (this->SelectionTriangleROI).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0
  ;
  (this->SelectionTriangleROI).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OriginalSubmesh).Object = (FDynamicSubmesh3 *)0x0;
  (this->OriginalSubmesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComputeOperatorSharedMesh).Object =
       (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->ComputeOperatorSharedMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PolygonEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolygonEdges).ArrayNum = 0;
  (this->PolygonEdges).ArrayMax = 0;
  (this->ActiveFromGroupSet).Object = (FPolygroupSet *)0x0;
  (this->ActiveFromGroupSet).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UConvertToPolygonsTool",L"ConvertToPolygonsToolName",
                      L"Generate PolyGroups");
  pIVar1 = (ITextData *)this->_padding_;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    this->_padding_ = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->_padding_ = pFVar3->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UConvertToPolygonsTool @ 14cbe01c0

void __thiscall UConvertToPolygonsTool::~UConvertToPolygonsTool(UConvertToPolygonsTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UConvertToPolygonsTool__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveFromGroupSet).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PolygonEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeOperatorSharedMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalSubmesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectionTriangleROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalDynamicMesh).SharedReferenceCount.ReferenceController);
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  return;
}

// operator() @ 14cbe29a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UConvertToPolygonsTool::UpdateFromGroupLayer'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TReferenceControllerBase<1> **ppTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  undefined1 local_res8 [8];
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar3 = UPolygroupLayersProperties::HasSelectedPolygroup
                    (*(UPolygroupLayersProperties **)(*(longlong *)this + 0x150));
  if (bVar3) {
    pTVar5 = UE::Geometry::FindPolygroupLayerByName
                       (param_1,*(FName *)(*(longlong *)(*(longlong *)this + 0x150) + 0xb0));
    if (pTVar5 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      local_res8[0] = 0;
      ``UConvertToPolygonsTool::UpdateFromGroupLayer'::__l2::<lambda_1>::operator()'::__l7::
      <lambda_1>::operator()(local_res8);
    }
    pTVar4 = ::operator_new(0x28);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FVar8.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPolygroupSet_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FPolygroupSet::FPolygroupSet((FPolygroupSet *)(pTVar4 + 1),param_1,pTVar5);
      pTVar7 = pTVar4 + 1;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FVar8.ReferenceController = pTVar4;
      local_18 = pTVar7;
    }
    lVar1 = *(longlong *)this;
    ppTVar6 = (TReferenceControllerBase<1> **)(lVar1 + 0x1c8);
    FStack_10.ReferenceController = FVar8.ReferenceController;
    if (ppTVar6 != &local_18) {
      *ppTVar6 = pTVar7;
      local_18 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar1 + 0x1d0),&FStack_10);
      FVar8.ReferenceController = FStack_10.ReferenceController;
    }
  }
  else {
    pTVar4 = ::operator_new(0x28);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPolygroupSet_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FPolygroupSet::FPolygroupSet((FPolygroupSet *)(pTVar4 + 1),param_1);
      pTVar7 = pTVar4 + 1;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar4;
      local_28 = pTVar7;
    }
    lVar1 = *(longlong *)this;
    ppTVar6 = (TReferenceControllerBase<1> **)(lVar1 + 0x1c8);
    FVar8.ReferenceController = FStack_20.ReferenceController;
    if (ppTVar6 != &local_28) {
      *ppTVar6 = pTVar7;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar1 + 0x1d0),&FStack_20);
      FVar8.ReferenceController = FStack_20.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14cbe2fc0

void __thiscall
`UConvertToPolygonsTool::UpdateVisualization'::__l2::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  UPreviewGeometry *this_00;
  code *local_48;
  FDynamicMesh3 **local_40;
  FString local_38;
  FDynamicMesh3 *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = *(longlong *)this;
  local_18 = *(undefined8 *)((longlong)this + 8);
  this_00 = *(UPreviewGeometry **)(local_20 + 0x160);
  local_10 = *(undefined8 *)((longlong)this + 0x10);
  local_40 = &local_28;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``UConvertToPolygonsTool::UpdateVisualization'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
             ::Call;
  iVar1 = *(int *)(local_20 + 0x1c0);
  local_28 = param_1;
  ::FString::FString(&local_38,L"GroupBorders");
  UPreviewGeometry::CreateOrUpdateLineSet
            (this_00,&local_38,iVar1,
             (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
              *)&local_48,1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cbe3220

void __thiscall
`UConvertToPolygonsTool::Setup'::__l11::<lambda_2>::operator()
          (void *this,FDynamicMeshOperator *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  
  lVar2 = *(longlong *)this;
  pFVar3 = (ForAnyElementType *)((longlong)&param_1[2].ResultTransform.Rotation.field0_0x0 + 0x10);
  pFVar4 = (ForAnyElementType *)(lVar2 + 0x1b8);
  if (pFVar4 != pFVar3) {
    iVar1 = *(int *)((longlong)&param_1[2].ResultTransform.Rotation.field0_0x0 + 0x18);
    _Src = pFVar3->Data;
    *(int *)(lVar2 + 0x1c0) = iVar1;
    if ((iVar1 == 0) && (*(int *)(lVar2 + 0x1c4) == 0)) {
      *(int *)(lVar2 + 0x1c4) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,*(int *)(lVar2 + 0x1c4),pFVar4,iVar1,(int *)(lVar2 + 0x1c4));
      if (iVar1 != 0) {
        memcpy(pFVar4->Data,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  UConvertToPolygonsTool::UpdateVisualization(*(UConvertToPolygonsTool **)this);
  return;
}

// operator() @ 14cbe32d0

bool __thiscall
`UConvertToPolygonsTool::Setup'::__l14::<lambda_3>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x188) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x188);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar7 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar7 = plVar2 + 7;
    }
    iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar2[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        if (*(int *)(*plVar2 + (longlong)iVar6 * 0xc) == param_2) goto LAB_14cbe336c;
        iVar6 = *(int *)(*plVar2 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_14cbe336c:
  return iVar6 != -1;
}

// CanAccept @ 14cbe83c0

bool __thiscall UConvertToPolygonsTool::CanAccept(UConvertToPolygonsTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  char cVar2;
  
  cVar2 = (**(code **)(this->_padding_ + 0x3a8))();
  if ((cVar2 != '\0') &&
     ((pUVar1 = (this->PreviewCompute).field0_0x0.DebugPtr,
      pUVar1 == (UMeshOpPreviewWithBackgroundCompute *)0x0 || (pUVar1->bResultValid != false)))) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 14cbef4f0

UClass * __cdecl UConvertToPolygonsTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsTool",
               &Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton,
               StaticRegisterNativesUConvertToPolygonsTool,0x1d8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UConvertToPolygonsTool>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsTool.InnerSingleton;
}

// HasAccept @ 14cbf2280

bool __thiscall UConvertToPolygonsTool::HasAccept(UConvertToPolygonsTool *this)

{
  return true;
}

// HasCancel @ 14cbf22b0

bool __thiscall UConvertToPolygonsTool::HasCancel(UConvertToPolygonsTool *this)

{
  return true;
}

// OnSelectedFromGroupLayerChanged @ 14cbf28a0

void __thiscall
UConvertToPolygonsTool::OnSelectedFromGroupLayerChanged(UConvertToPolygonsTool *this)

{
  UpdateFromGroupLayer(this);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->PreviewCompute).field0_0x0.DebugPtr);
  return;
}

// OnSettingsModified @ 14cbf28d0

void __thiscall UConvertToPolygonsTool::OnSettingsModified(UConvertToPolygonsTool *this)

{
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->CopyFromLayerProperties).field0_0x0.DebugPtr,
             ((this->Settings).field0_0x0.DebugPtr)->ConversionMode == CopyFromLayer);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->PreviewCompute).field0_0x0.DebugPtr);
  return;
}

// OnShutdown @ 14cbf2a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UConvertToPolygonsTool::OnShutdown(UConvertToPolygonsTool *this,EToolShutdownType param_1)

{
  undefined1 *puVar1;
  short sVar2;
  UConvertToPolygonsToolProperties *pUVar3;
  code *pcVar4;
  UPreviewGeometry *this_00;
  UPreviewMesh *this_01;
  UMeshOpPreviewWithBackgroundCompute *this_02;
  TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *pTVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FDynamicMesh3 *pFVar13;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar14;
  FString *pFVar15;
  FName *pFVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  ulonglong uVar18;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> this_03;
  byte bVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined1 *puVar23;
  FConversionToMeshDescriptionOptions *pFVar24;
  uint uVar25;
  uint *puVar26;
  undefined1 auStackY_558 [32];
  undefined1 local_528;
  undefined1 local_527;
  EToolShutdownType local_526;
  FConversionToMeshDescriptionOptions local_525;
  FConversionToMeshDescriptionOptions local_51c;
  FConversionToMeshDescriptionOptions local_513;
  undefined1 local_50a [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_508;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_500;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4f8;
  undefined8 uStack_4d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4d0;
  undefined8 uStack_4c8;
  TBitArray<FDefaultBitArrayAllocator> *local_4c0;
  uint uStack_4b8;
  int iStack_4b4;
  int local_4b0;
  int iStack_4ac;
  int iStack_4a8;
  undefined4 uStack_4a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_460;
  int iStack_458;
  uint uStack_454;
  undefined1 *local_450;
  undefined4 uStack_448;
  int iStack_444;
  int local_440;
  undefined4 uStack_43c;
  int iStack_438;
  undefined4 uStack_434;
  int local_430;
  int local_42c;
  int local_428;
  undefined1 local_424 [12];
  FString local_418;
  undefined8 local_408;
  FSharedReferencer<1> FStack_400;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f0;
  undefined8 uStack_3d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c0;
  undefined8 uStack_3a0;
  FString local_398;
  FName local_388;
  FText local_380;
  FString local_370;
  FDynamicMeshOpResult local_358;
  undefined4 local_2dc;
  FDynamicMesh3 local_2d8;
  FGeometrySelection local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(pUVar3->_padding_ + 0x2b0);
  local_526 = param_1;
  ::FString::FString(&local_398,L"");
  (*pcVar4)(pUVar3,this,&local_398);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
  this_00 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  iVar22 = 0;
  if (this_00 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::Disconnect(this_00);
    (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  }
  this_01 = (this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr;
  if (this_01 != (UPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect(this_01);
    (this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  }
  this_02 = (this->PreviewCompute).field0_0x0.DebugPtr;
  if (this_02 == (UMeshOpPreviewWithBackgroundCompute *)0x0) goto LAB_14cbf3783;
  UMeshOpPreviewWithBackgroundCompute::Shutdown(this_02,&local_358);
  if (param_1 == Accept) {
    lVar12 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar4 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x10);
    FText::AsLocalizable_Advanced_LocText
              (&local_380,L"UConvertToPolygonsTool",L"ConvertToPolygonsToolTransactionName",
               L"Find PolyGroups");
    (*pcVar4)(lVar12 + 0x28);
    if (local_380.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_380.TextData.Reference + 0x10))();
    }
    this_03.Ptr = local_358.Mesh.Ptr;
    if (local_358.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7157263858606801360>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ConvertToPolygonsTool.cpp"
                         ,0x1d0,"DynamicMeshResult != nullptr");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      bVar8 = ::FName::Equals(((this->Settings).field0_0x0.DebugPtr)->GroupLayer,L"Default");
      if (bVar8) {
        if (this->bUsingSelection == false) {
          local_513.bSetPolyGroups = true;
          local_513.bUpdatePositions = true;
          local_513.bUpdateNormals = true;
          local_513.bUpdateTangents = false;
          pFVar24 = &local_513;
          local_513.bUpdateUVs = false;
          local_513.bUpdateVtxColors = false;
          local_513.bTransformVtxColorsSRGBToLinear = true;
          local_513.bConvertBackToNonManifold = false;
          local_513.bSetHardEdgesFromNormalSeams = true;
        }
        else {
          pTVar17 = TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>::
                    operator*<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                              (&this->SelectionTriangleROI);
          iVar22 = *(int *)&(pTVar17->Elements).field_0x28;
          iStack_458 = 0;
          local_440 = 0;
          puVar1 = &(pTVar17->Elements).field_0x10;
          uStack_454 = 1;
          iStack_444 = 0;
          if (iVar22 != 0) {
            puVar26 = *(uint **)&(pTVar17->Elements).field_0x20;
            if (puVar26 == (uint *)0x0) {
              puVar26 = (uint *)puVar1;
            }
            uVar10 = *puVar26;
            while (uVar10 == 0) {
              lVar12 = (longlong)iStack_458;
              local_440 = local_440 + 0x20;
              iStack_458 = iStack_458 + 1;
              iStack_444 = iVar22;
              if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_458)
              goto LAB_14cbf31be;
              uVar10 = puVar26[lVar12 + 1];
            }
            uStack_454 = -uVar10 & uVar10;
            uVar18 = (ulonglong)uStack_454 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_430 = (int)lVar12;
            iStack_444 = local_440 + -1 + local_430;
            if (iVar22 < iStack_444) {
              iStack_444 = iVar22;
            }
          }
LAB_14cbf31be:
          uStack_43c = local_2dc;
          iStack_438 = *(int *)&(pTVar17->Elements).field_0x8 -
                       *(int *)&(pTVar17->Elements).field_0x34;
          uStack_448 = 0xffffffff;
          uVar10 = *(uint *)&(pTVar17->Elements).field_0x28;
          TStack_3c0._padding_ = CONCAT44(uStack_454,iStack_458);
          uVar11 = uVar10 & 0xffffffe0;
          TStack_3c0.CurrentBitIndex = iStack_444;
          TStack_3c0.UnvisitedBitMask = 0xffffffff;
          iVar9 = (int)uVar10 >> 5;
          TStack_3c0._28_4_ = local_2dc;
          TStack_3c0.BaseBitIndex = local_440;
          uStack_3a0 = CONCAT44(uStack_434,iStack_438);
          local_508 = pTVar17;
          local_460 = pTVar17;
          local_450 = puVar1;
          local_3c8 = pTVar17;
          TStack_3c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar10 < 0) || (iVar22 < (int)uVar10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar25 = *(uint *)&(pTVar17->Elements).field_0x28;
          if (uVar10 != uVar25) {
            puVar23 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
            if (puVar23 == (undefined1 *)0x0) {
              puVar23 = puVar1;
            }
            uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar9 * 4);
            while (uVar10 == 0) {
              lVar12 = (longlong)iVar9;
              uVar11 = uVar11 + 0x20;
              iVar9 = iVar9 + 1;
              uVar10 = uVar25;
              if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
              goto LAB_14cbf32e0;
              uVar10 = *(uint *)(puVar23 + lVar12 * 4 + 4);
            }
            uVar18 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_42c = (int)lVar12;
            uVar10 = local_42c + -1 + uVar11;
            if ((int)uVar25 < (int)uVar10) {
              uVar10 = uVar25;
            }
          }
LAB_14cbf32e0:
          while( true ) {
            pTVar17 = local_3c8;
            if (*(int *)&(local_3c8->Elements).field_0x8 - *(int *)&(local_3c8->Elements).field_0x34
                != (int)uStack_3a0) {
              local_527 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_527);
            }
            if (((TStack_3c0.CurrentBitIndex == uVar10) &&
                (TStack_3c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (pTVar17 == local_508)) break;
            uVar11 = *(uint *)(*(longlong *)&pTVar17->Elements +
                              (longlong)TStack_3c0.CurrentBitIndex * 0xc);
            if (((this->OriginalSubmesh).Object == (FDynamicSubmesh3 *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar22 = UE::Geometry::TIndexMap<int>::GetTo
                               (&(((this->OriginalSubmesh).Object)->Mappings).TriangleMap,uVar11);
            iVar22 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_03.Ptr,iVar22);
            if (((this->OriginalDynamicMesh).Object == (FDynamicMesh3 *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar13 = (this->OriginalDynamicMesh).Object;
            if ((pFVar13->TriangleGroups).bIsSet != false) {
              *(int *)(*(longlong *)
                        ((pFVar13->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4) = iVar22;
              iVar9 = iVar22 + 1;
              if (iVar22 + 1 < pFVar13->GroupIDCounter) {
                iVar9 = pFVar13->GroupIDCounter;
              }
              pFVar13->GroupIDCounter = iVar9;
            }
            TStack_3c0.UnvisitedBitMask = TStack_3c0.UnvisitedBitMask & ~TStack_3c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c0);
          }
          local_51c.bSetPolyGroups = true;
          local_51c.bUpdatePositions = true;
          local_51c.bUpdateNormals = true;
          local_51c.bUpdateTangents = false;
          local_51c.bUpdateUVs = false;
          local_51c.bUpdateVtxColors = false;
          local_51c.bTransformVtxColorsSRGBToLinear = true;
          local_51c.bConvertBackToNonManifold = false;
          local_51c.bSetHardEdgesFromNormalSeams = true;
          this_03.Ptr = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::
                        operator*<UE::Geometry::FDynamicMesh3>(&this->OriginalDynamicMesh);
          pFVar24 = &local_51c;
        }
        UE::ToolTarget::CommitDynamicMeshUpdate
                  ((UToolTarget *)this->_padding_,this_03.Ptr,true,pFVar24,
                   (FComponentMaterialSet *)0x0);
      }
      else {
        pFVar13 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                            (&this->OriginalDynamicMesh);
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2d8,pFVar13);
        if (local_2d8.AttributeSet.Ptr == (FDynamicMeshAttributeSet *)0x0) {
          UE::Geometry::FDynamicMesh3::EnableAttributes(&local_2d8);
        }
        bVar8 = ::FName::Equals(((this->Settings).field0_0x0.DebugPtr)->GroupLayer,L"Create New...")
        ;
        if (bVar8) {
          iVar9 = (**(code **)((local_2d8.AttributeSet.Ptr)->_padding_ + 200))();
          (**(code **)((local_2d8.AttributeSet.Ptr)->_padding_ + 0xd0))
                    (local_2d8.AttributeSet.Ptr,iVar9 + 1);
          pTVar14 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                              (local_2d8.AttributeSet.Ptr,iVar9);
          pFVar15 = ::FString::FString(&local_370,
                                       &((this->Settings).field0_0x0.DebugPtr)->NewLayerName);
          UE::Geometry::MakeUniqueGroupLayerName(&local_418,&local_2d8,pFVar15);
          iVar9 = local_418.Data.ArrayNum + -1;
          if (local_418.Data.ArrayNum == 0) {
            iVar9 = iVar22;
          }
          pFVar16 = ::FName::FName(&local_388,iVar9,(wchar_t *)local_418.Data.AllocatorInstance.Data
                                   ,FNAME_Add);
          uVar10 = pFVar16->Number;
          *(uint *)&pTVar14->field_0x8 = (pFVar16->ComparisonIndex).Value;
          *(uint *)&pTVar14->field_0xc = uVar10;
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
        }
        else {
          pTVar14 = UE::Geometry::FindPolygroupLayerByName
                              (&local_2d8,((this->Settings).field0_0x0.DebugPtr)->GroupLayer);
        }
        if (pTVar14 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          if (2 < (byte)LogGeometry._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
          }
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2d8);
        }
        else {
          if (this->bUsingSelection == false) {
            local_2d8.TriangleRefCounts.RefCounts.CurBlockUsed =
                 local_2d8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                 local_2d8.TriangleRefCounts.RefCounts.CurBlockUsed;
            uVar18 = 0;
            if ((local_2d8.TriangleRefCounts.RefCounts.CurBlockUsed == 0) ||
               (uVar18 = 0,
               (ushort)(**(short **)
                          local_2d8.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data - 1U)
               < 0xfffe)) {
LAB_14cbf2fb9:
              uVar10 = (uint)uVar18;
            }
            else {
              uVar18 = 1;
              uVar10 = 1;
              if (1 < (int)local_2d8.TriangleRefCounts.RefCounts.CurBlockUsed) {
                do {
                  sVar2 = *(short *)(*(longlong *)
                                      (local_2d8.TriangleRefCounts.RefCounts.Blocks.
                                       AllocatorInstance.Data + (uVar18 >> 9) * 8) +
                                    (ulonglong)((uint)uVar18 & 0x1ff) * 2);
                  if ((sVar2 != 0) && (sVar2 != -1)) break;
                  uVar10 = (uint)uVar18 + 1;
                  uVar18 = (ulonglong)uVar10;
                } while ((int)uVar10 < (int)local_2d8.TriangleRefCounts.RefCounts.CurBlockUsed);
                goto LAB_14cbf2fb9;
              }
            }
joined_r0x00014cbf2fbc:
            if (uVar10 != local_2d8.TriangleRefCounts.RefCounts.CurBlockUsed) {
              do {
                uVar10 = (uint)uVar18;
                if (((this_03.Ptr)->TriangleGroups).bIsSet == false) {
                  iVar9 = -1;
                }
                else {
                  iVar9 = iVar22;
                  if (((-1 < (int)uVar10) &&
                      ((int)uVar10 <
                       (int)(((this_03.Ptr)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                            ((this_03.Ptr)->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
                     ((ushort)(*(short *)(*(longlong *)
                                           (((this_03.Ptr)->TriangleRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + (uVar18 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                    iVar9 = *(int *)(*(longlong *)
                                      (((this_03.Ptr)->TriangleGroups).TypedValue.Blocks.
                                       AllocatorInstance.Data + (uVar18 >> 9) * 8) +
                                    (ulonglong)(uVar10 & 0x1ff) * 4);
                  }
                }
                *(int *)(*(longlong *)(*(longlong *)&pTVar14->field_0x20 + (uVar18 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 4) = iVar9;
                do {
                  uVar10 = uVar10 + 1;
                  uVar18 = (ulonglong)uVar10;
                  if ((int)local_2d8.TriangleRefCounts.RefCounts.CurBlockUsed <= (int)uVar10)
                  goto joined_r0x00014cbf2fbc;
                  sVar2 = *(short *)(*(longlong *)
                                      (local_2d8.TriangleRefCounts.RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8) +
                                    (ulonglong)(uVar10 & 0x1ff) * 2);
                } while ((sVar2 == 0) || (sVar2 == -1));
              } while( true );
            }
          }
          else {
            pTVar17 = TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>::
                      operator*<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                (&this->SelectionTriangleROI);
            local_480._padding_._4_4_ = 1;
            local_480.UnvisitedBitMask = 0xffffffff;
            local_480._padding_._0_4_ = 0;
            local_480.CurrentBitIndex = 0;
            local_480.BaseBitIndex = 0;
            local_4a0.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar17->Elements).field_0x10;
            local_480.Array = local_4a0.Array;
            if (*(int *)&(pTVar17->Elements).field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
            }
            uVar10 = *(uint *)&(pTVar17->Elements).field_0x28;
            TStack_4f8._padding_ =
                 CONCAT44(local_480._padding_._4_4_,(undefined4)local_480._padding_);
            bVar19 = (byte)uVar10 & 0x1f;
            TStack_4f8.CurrentBitIndex = local_480.CurrentBitIndex;
            TStack_4f8.UnvisitedBitMask = local_480.UnvisitedBitMask;
            TStack_4f8._28_4_ = local_480._28_4_;
            TStack_4f8.BaseBitIndex = local_480.BaseBitIndex;
            uStack_4d8 = CONCAT44(uStack_4d8._4_4_,
                                  *(int *)&(pTVar17->Elements).field_0x8 -
                                  *(int *)&(pTVar17->Elements).field_0x34);
            local_4a0._padding_._0_4_ = (int)uVar10 >> 5;
            local_4a0._padding_._4_4_ = 1 << bVar19;
            local_4a0.UnvisitedBitMask = -1 << bVar19;
            TStack_4f8.Array = local_480.Array;
            local_4a0.BaseBitIndex = uVar10 & 0xffffffe0;
            TStack_3f0.Array = local_480.Array;
            uStack_3d0 = uStack_4d8;
            local_500 = pTVar17;
            local_4a0.CurrentBitIndex = uVar10;
            local_3f8 = pTVar17;
            TStack_3f0._padding_ = TStack_4f8._padding_;
            TStack_3f0._16_8_ = TStack_4f8._16_8_;
            TStack_3f0._24_8_ = TStack_4f8._24_8_;
            if (((int)uVar10 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar10 != *(uint *)&(pTVar17->Elements).field_0x28) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4a0);
            }
            iVar22 = local_4a0.CurrentBitIndex;
            pTVar7 = local_4a0.Array;
            uStack_4c8 = CONCAT44(local_4a0._padding_._4_4_,(int)local_4a0._padding_);
            iStack_4b4 = local_4a0.CurrentBitIndex;
            uStack_4b8 = local_4a0.UnvisitedBitMask;
            iStack_4ac = local_4a0._28_4_;
            local_4b0 = local_4a0.BaseBitIndex;
            local_4c0 = local_4a0.Array;
            while( true ) {
              pTVar6 = local_3f8;
              if (*(int *)&(local_3f8->Elements).field_0x8 -
                  *(int *)&(local_3f8->Elements).field_0x34 != (int)uStack_3d0) {
                local_528 = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_528);
              }
              if (((TStack_3f0.CurrentBitIndex == iVar22) && (TStack_3f0.Array == pTVar7)) &&
                 (pTVar6 == pTVar17)) break;
              uVar10 = *(uint *)(*(longlong *)&pTVar6->Elements +
                                (longlong)TStack_3f0.CurrentBitIndex * 0xc);
              if (((this->OriginalSubmesh).Object == (FDynamicSubmesh3 *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar11 = UE::Geometry::TIndexMap<int>::GetTo
                                 (&(((this->OriginalSubmesh).Object)->Mappings).TriangleMap,uVar10);
              if (((this_03.Ptr)->TriangleGroups).bIsSet == false) {
                uVar21 = 0xffffffff;
              }
              else {
                if ((-1 < (int)uVar11) &&
                   ((int)uVar11 <
                    (int)(((this_03.Ptr)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         ((this_03.Ptr)->TriangleRefCounts).RefCounts.CurBlockUsed))) {
                  lVar12 = (ulonglong)(uVar11 >> 9) * 8;
                  if ((ushort)(*(short *)(*(longlong *)
                                           (((this_03.Ptr)->TriangleRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + lVar12) +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
                    uVar21 = *(undefined4 *)
                              (*(longlong *)
                                (((this_03.Ptr)->TriangleGroups).TypedValue.Blocks.AllocatorInstance
                                 .Data + lVar12) + (ulonglong)(uVar11 & 0x1ff) * 4);
                    goto LAB_14cbf2f1b;
                  }
                }
                uVar21 = 0;
              }
LAB_14cbf2f1b:
              *(undefined4 *)
               (*(longlong *)(*(longlong *)&pTVar14->field_0x20 + (ulonglong)(uVar10 >> 9) * 8) +
               (ulonglong)(uVar10 & 0x1ff) * 4) = uVar21;
              TStack_3f0.UnvisitedBitMask =
                   TStack_3f0.UnvisitedBitMask & ~TStack_3f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f0);
            }
          }
          local_525.bSetPolyGroups = true;
          local_525.bUpdatePositions = true;
          local_525.bUpdateNormals = true;
          local_525.bUpdateTangents = false;
          local_525.bUpdateUVs = false;
          local_525.bUpdateVtxColors = false;
          local_525.bTransformVtxColorsSRGBToLinear = true;
          local_525.bConvertBackToNonManifold = false;
          local_525.bSetHardEdgesFromNormalSeams = true;
          UE::ToolTarget::CommitDynamicMeshUpdate
                    ((UToolTarget *)this->_padding_,&local_2d8,true,&local_525,
                     (FComponentMaterialSet *)0x0);
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2d8);
        }
      }
    }
    if (this->bUsingSelection != false) {
      local_a8.Selection.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_a8.Selection.Elements._48_8_ = _UNK_150631d98;
      local_a8.ElementType = Face;
      local_a8.TopologyType = Triangle;
      local_a8.Selection.Elements._0_8_ = 0;
      local_a8.Selection.Elements._8_8_ = 0;
      local_a8.Selection.Elements._32_8_ = 0;
      local_a8.Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      iVar22 = 0;
      local_a8.Selection.HashSize = 0;
      if (((this->SelectionTriangleROI).Object ==
           (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar17 = (this->SelectionTriangleROI).Object;
      iVar9 = *(int *)&(pTVar17->Elements).field_0x28;
      puVar1 = &(pTVar17->Elements).field_0x10;
      local_4b0 = 0;
      uVar10 = 1;
      iStack_4b4 = 0;
      if (iVar9 != 0) {
        puVar26 = *(uint **)&(pTVar17->Elements).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar1;
        }
        uVar11 = *puVar26;
        iVar22 = 0;
        while (uVar11 == 0) {
          lVar12 = (longlong)iVar22;
          local_4b0 = local_4b0 + 0x20;
          iVar22 = iVar22 + 1;
          iStack_4b4 = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14cbf358d;
          uVar11 = puVar26[lVar12 + 1];
        }
        uVar10 = -uVar11 & uVar11;
        uVar18 = (ulonglong)uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_428 = (int)lVar12;
        iStack_4b4 = local_4b0 + -1 + local_428;
        if (iVar9 < iStack_4b4) {
          iStack_4b4 = iVar9;
        }
      }
LAB_14cbf358d:
      uVar11 = *(uint *)&(pTVar17->Elements).field_0x28;
      iStack_4a8 = *(int *)&(pTVar17->Elements).field_0x8 - *(int *)&(pTVar17->Elements).field_0x34;
      uVar20 = uVar11 & 0xffffffe0;
      uStack_4b8 = 0xffffffff;
      uVar25 = -1 << ((byte)uVar11 & 0x1f);
      uStack_4c8 = CONCAT44(uVar10,iVar22);
      iStack_4ac = iStack_444;
      TStack_4f8._padding_ = uStack_4c8;
      iVar22 = (int)uVar11 >> 5;
      local_508 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  CONCAT44(local_508._4_4_,uVar25);
      uStack_4d8 = CONCAT44(uStack_4a4,iStack_4a8);
      TStack_4f8.UnvisitedBitMask = 0xffffffff;
      TStack_4f8.CurrentBitIndex = iStack_4b4;
      TStack_4f8.BaseBitIndex = local_4b0;
      TStack_4f8._28_4_ = iStack_444;
      local_500 = pTVar17;
      TStack_4f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_4d0 = pTVar17;
      local_4c0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (((int)uVar11 < 0) || (iVar9 < (int)uVar11)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar25 = (uint)local_508;
      }
      uVar10 = *(uint *)&(pTVar17->Elements).field_0x28;
      if (uVar11 != uVar10) {
        puVar23 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = puVar1;
        }
        uVar25 = uVar25 & *(uint *)(puVar23 + (longlong)iVar22 * 4);
        while (uVar25 == 0) {
          lVar12 = (longlong)iVar22;
          uVar20 = uVar20 + 0x20;
          iVar22 = iVar22 + 1;
          uVar11 = uVar10;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_14cbf36a0;
          uVar25 = *(uint *)(puVar23 + lVar12 * 4 + 4);
        }
        uVar18 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar11 = (int)lVar12 + -1 + uVar20;
        if ((int)uVar10 < (int)uVar11) {
          uVar11 = uVar10;
        }
      }
LAB_14cbf36a0:
      while( true ) {
        pTVar6 = local_500;
        if (*(int *)&(local_500->Elements).field_0x8 - *(int *)&(local_500->Elements).field_0x34 !=
            (int)uStack_4d8) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_50a);
        }
        if (((TStack_4f8.CurrentBitIndex == uVar11) &&
            (TStack_4f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar6 == pTVar17)) break;
        local_424._4_8_ =
             ZEXT48(*(uint *)(*(longlong *)&pTVar6->Elements +
                             (longlong)TStack_4f8.CurrentBitIndex * 0xc));
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&local_a8.Selection,(ulong64 *)local_424,(bool *)(local_424 + 4));
        TStack_4f8.UnvisitedBitMask = TStack_4f8.UnvisitedBitMask & ~TStack_4f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4f8);
      }
      UE::Geometry::SetToolOutputGeometrySelectionForTarget
                ((UInteractiveTool *)this,(UToolTarget *)this->_padding_,&local_a8);
      local_a8.Selection.HashSize = 0;
      if (local_a8.Selection.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Selection.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Selection.Elements);
    }
    lVar12 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
    param_1 = local_526;
  }
  if (local_358.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_358.Mesh.Ptr)->_padding_)(local_358.Mesh.Ptr,1);
  }
LAB_14cbf3783:
  pTVar5 = (this->ComputeOperatorSharedMesh).Object;
  if (pTVar5 != (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&pTVar5->ObjectLock);
    pTVar5->ObjectRawPtr = (FDynamicMesh3 *)0x0;
    local_408 = 0;
    FStack_400.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pTVar5->ObjectSharedPtr != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_408) {
      (pTVar5->ObjectSharedPtr).Object = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar5->ObjectSharedPtr).SharedReferenceCount,&FStack_400);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_400.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)&pTVar5->ObjectLock);
  }
  USingleTargetWithSelectionTool::OnShutdown((USingleTargetWithSelectionTool *)this,param_1);
  return;
}

// OnTick @ 14cbf3810

void __thiscall UConvertToPolygonsTool::OnTick(UConvertToPolygonsTool *this,float param_1)

{
  USingleTargetWithSelectionTool::OnTick((USingleTargetWithSelectionTool *)this,param_1);
  UMeshOpPreviewWithBackgroundCompute::Tick((this->PreviewCompute).field0_0x0.DebugPtr,param_1);
  return;
}

// Setup @ 14cbf4f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cbf6159) */
/* WARNING: Removing unreachable block (ram,0x00014cbf6414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConvertToPolygonsTool::Setup(UConvertToPolygonsTool *this)

{
  int *piVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *this_00;
  TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> *this_01;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  FDynamicMesh3 *pFVar6;
  FDynamicMeshAttributeSet *pFVar7;
  FGeometrySelection *pFVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FDynamicSubmesh3 *pFVar11;
  FSharedReferencer<1> FVar12;
  UClass *pUVar13;
  UConvertToPolygonsToolProperties *pUVar14;
  UObject *pUVar15;
  UMeshOpPreviewWithBackgroundCompute *pUVar16;
  UWorld *pUVar17;
  UInteractiveToolManager *pUVar18;
  UMaterialInterface *pUVar19;
  UPreviewMesh *this_02;
  UPreviewGeometry *pUVar20;
  void *this_03;
  UPolygroupLayersProperties *pUVar21;
  FDynamicMeshAttributeSet *this_04;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar22;
  FScriptContainerElement *pFVar23;
  longlong *plVar24;
  FText *pFVar25;
  undefined ***pppuVar26;
  FScriptContainerElement *pFVar27;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar28;
  FDynamicMeshAttributeSet *pFVar29;
  int iVar30;
  TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *pTVar31;
  undefined1 auStackY_a48 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_9f8;
  FString local_9e8;
  FString local_9d8;
  FDynamicMesh3 *local_9c8;
  FSharedReferencer<1> FStack_9c0;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_9b8;
  TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> local_9a8;
  FDynamicMesh3 *local_998;
  FSharedReferencer<1> FStack_990;
  FDynamicMesh3 *local_988;
  FSharedReferencer<1> FStack_980;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_978;
  FGetMeshParameters local_968;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_958;
  UConvertToPolygonsTool *local_948;
  FName local_940;
  UConvertToPolygonsTool *local_938 [2];
  code *local_928;
  undefined **local_918;
  UConvertToPolygonsTool *local_910;
  undefined ***local_900;
  code *local_8f8;
  UConvertToPolygonsTool **local_8f0;
  TArrayView<int_const_,int> local_8e8;
  FString local_8d8;
  FString local_8c8;
  <lambda_2> local_8b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_8b0;
  FString local_8a0;
  FText local_890;
  code *local_878 [2];
  undefined **local_868;
  UConvertToPolygonsTool *local_860;
  undefined8 local_850;
  code *local_848 [2];
  undefined **local_838;
  UConvertToPolygonsTool *local_830;
  undefined8 local_820;
  code *local_818 [2];
  undefined **local_808;
  UConvertToPolygonsTool *local_800;
  undefined8 local_7f0;
  code *local_7e8 [2];
  undefined **local_7d8;
  UConvertToPolygonsTool *local_7d0;
  undefined8 local_7c0;
  code *local_7b8 [2];
  undefined **local_7a8;
  UConvertToPolygonsTool *local_7a0;
  undefined8 local_790;
  code *local_788 [2];
  undefined **local_778;
  UConvertToPolygonsTool *local_770;
  undefined8 local_760;
  code *local_758 [2];
  undefined **local_748;
  UConvertToPolygonsTool *local_740;
  undefined8 local_730;
  code *local_728 [2];
  undefined **local_718;
  UConvertToPolygonsTool *local_710;
  undefined8 local_700;
  code *local_6f8 [2];
  undefined **local_6e8;
  UConvertToPolygonsTool *local_6e0;
  undefined8 local_6d0;
  code *local_6c8 [2];
  undefined **local_6b8;
  UConvertToPolygonsTool *local_6b0;
  undefined8 local_6a0;
  code *local_698 [2];
  undefined **local_688;
  UConvertToPolygonsTool *local_680;
  undefined8 local_670;
  code *local_668 [2];
  undefined **local_658;
  UConvertToPolygonsTool *local_650;
  undefined8 local_640;
  code *local_638 [2];
  undefined **local_628;
  UConvertToPolygonsTool *local_620;
  undefined8 local_610;
  code *local_608 [2];
  undefined **local_5f8;
  UConvertToPolygonsTool *local_5f0;
  undefined8 local_5e0;
  code *local_5d8 [2];
  undefined **local_5c8;
  UConvertToPolygonsTool *local_5c0;
  undefined8 local_5b0;
  code *local_5a8 [2];
  undefined **local_598;
  UConvertToPolygonsTool *local_590;
  undefined8 local_580;
  code *local_578 [2];
  code *local_568 [3];
  undefined8 local_550;
  FDynamicMesh3 local_548;
  undefined1 local_318 [128];
  undefined1 local_298 [128];
  undefined1 local_218 [128];
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a48;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  UE::ToolTarget::GetMaterialSet
            ((FComponentMaterialSet *)&local_958,(UToolTarget *)this->_padding_,false);
  local_968.bHaveRequestLOD = false;
  local_968._1_3_ = 0;
  local_968.RequestLOD = Default;
  local_968.bWantMeshTangents = false;
  local_968._9_3_ = 0;
  pFVar6 = UE::ToolTarget::GetDynamicMeshCopy(&local_548,(UToolTarget *)this->_padding_,&local_968);
  pFVar7 = ::operator_new(0x240);
  pFVar29 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar7 == (FDynamicMeshAttributeSet *)0x0) {
    local_9b8.Object = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FDynamicMesh3 *)&DAT_00000010;
    local_9b8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar7 = pFVar29;
  }
  else {
    ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue = FindPolygons;
    *(undefined4 *)&((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->bIsSet = 1;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&pFVar7->_padding_,pFVar6);
    pFVar6 = (FDynamicMesh3 *)&pFVar7->_padding_;
    if ((pFVar6 == (FDynamicMesh3 *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue =
         ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue + FindPolygons;
    UNLOCK();
    local_9b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    local_9b8.Object = pFVar6;
  }
  this_00 = &this->OriginalDynamicMesh;
  if (this_00 != &local_9b8) {
    this_00->Object = pFVar6;
    local_9b8.Object = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OriginalDynamicMesh).SharedReferenceCount,&local_9b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_548);
  local_9a8.SharedReferenceCount.ReferenceController = ::operator_new(0x60);
  if ((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController ==
      (FDynamicMeshAttributeSet *)0x0) {
    local_9a8.Object =
         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         ___xmm_00000000000000000000000000000010;
    pTVar9 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&DAT_00000010;
    local_9a8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar7 = pFVar29;
  }
  else {
    ((TOptional<EConvertToPolygonsMode> *)
    &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->_padding_)->
    TypedValue = FindPolygons;
    pTVar9 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->
              _padding_;
    *(undefined4 *)
     &((TOptional<EConvertToPolygonsMode> *)
      &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->_padding_)
      ->bIsSet = 1;
    ((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator_____00_SharedPointerInternals__6B_
    ;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->UVLayers).
    Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->UVLayers).
    Array.ArrayNum = 0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->UVLayers).
    Array.ArrayMax = 0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->
    MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->WeightLayers)
    .Array.ArrayNum = 0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->WeightLayers)
    .Array.ArrayMax = 0;
    *(undefined8 *)
     &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->_padding_ =
         0;
    ((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->ParentMesh =
         (FDynamicMesh3 *)0x0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->NormalLayers)
    .Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->NormalLayers)
    .Array.ArrayNum = 0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->NormalLayers)
    .Array.ArrayMax = 0x80;
    *(undefined4 *)
     &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->ColorLayer =
         0xffffffff;
    *(undefined4 *)
     &((TFunction<void___cdecl(EConvertToPolygonsMode_const_&)> *)
      &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->ColorLayer)
      ->field_0x4 = 0;
    (((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->WeightLayers)
    .Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((pTVar9 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    ((TOptional<EConvertToPolygonsMode> *)
    &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->_padding_)->
    TypedValue = ((TOptional<EConvertToPolygonsMode> *)
                 &((FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController)->
                  _padding_)->TypedValue + FindPolygons;
    UNLOCK();
    pFVar7 = (FDynamicMeshAttributeSet *)local_9a8.SharedReferenceCount.ReferenceController;
    local_9a8.Object = pTVar9;
  }
  this_01 = &this->SelectionTriangleROI;
  if (this_01 != &local_9a8) {
    this_01->Object = pTVar9;
    local_9a8.Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SelectionTriangleROI).SharedReferenceCount,&local_9a8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  local_9f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9f8.ArrayNum = 0;
  local_9f8.ArrayMax = 0;
  cVar4 = (**(code **)(this->_padding_ + 0x3d8))(this);
  if (cVar4 != '\0') {
    pFVar8 = (FGeometrySelection *)(**(code **)(this->_padding_ + 0x3e0))(this);
    local_8f0 = local_938;
    local_8f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l5::<lambda_1>,void,int>::Call
    ;
    local_938[0] = this;
    pFVar6 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                       (this_00);
    UE::Geometry::EnumerateSelectionTriangles
              (pFVar8,pFVar6,(TFunctionRef<void___cdecl(int)> *)&local_8f8,(FPolygroupSet *)0x0);
    pTVar9 = TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>::operator->
                       (this_01);
    pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(pTVar9,&local_8b0);
    if (&local_9f8 != pTVar10) {
      if (local_9f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9f8.AllocatorInstance.Data);
      }
      local_9f8.AllocatorInstance.Data = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_9f8.ArrayNum = pTVar10->ArrayNum;
      local_9f8.ArrayMax = pTVar10->ArrayMax;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
    }
    if (local_8b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b0.AllocatorInstance.Data);
    }
    pFVar6 = this_00->Object;
    pFVar7 = ::operator_new(0x600);
    if (pFVar7 == (FDynamicMeshAttributeSet *)0x0) {
      local_9c8 = ___xmm_00000000000000000000000000000010;
      pFVar11 = (FDynamicSubmesh3 *)&DAT_00000010;
      FStack_9c0.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
      pFVar7 = pFVar29;
    }
    else {
      ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue = FindPolygons;
      *(undefined4 *)&((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->bIsSet = 1;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFDynamicSubmesh3_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      *(FDynamicMesh3 **)&pFVar7->_padding_ = pFVar6;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&pFVar7->ParentMesh);
      UE::Geometry::FMeshIndexMappings::FMeshIndexMappings
                ((FMeshIndexMappings *)&pFVar7[1].SkinWeightAttributes.field_0x30);
      pFVar7[3]._padding_ = 0;
      pFVar7[3].ParentMesh = (FDynamicMesh3 *)0x0;
      pFVar7[3].NormalLayers.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar7[3].NormalLayers.Array.ArrayNum = 0;
      pFVar7[3].NormalLayers.Array.ArrayMax = 0x80;
      *(undefined4 *)&pFVar7[3].ColorLayer.Ptr = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar7[3].ColorLayer.Ptr + 4) = 0;
      pFVar7[3].WeightLayers.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar7[3].WeightLayers.Array.ArrayNum = 0;
      pFVar7[3].PolygroupLayers.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar7[3].PolygroupLayers.Array.ArrayNum = 0;
      pFVar7[3].PolygroupLayers.Array.ArrayMax = 0;
      *(undefined8 *)&pFVar7[3].SkinWeightAttributes.field_0x10 = 0;
      *(undefined4 *)&pFVar7[3].SkinWeightAttributes.field_0x18 = 0;
      *(undefined4 *)&pFVar7[3].SkinWeightAttributes.field_0x1c = 0x80;
      *(undefined4 *)&pFVar7[3].SkinWeightAttributes.field_0x20 = 0xffffffff;
      *(undefined4 *)&pFVar7[3].SkinWeightAttributes.field_0x24 = 0;
      *(undefined8 *)&pFVar7[3].SkinWeightAttributes.field_0x30 = 0;
      *(undefined4 *)&pFVar7[3].SkinWeightAttributes.field_0x38 = 0;
      *(undefined8 *)&pFVar7[3].SkinWeightAttributes.field_0x40 = 0;
      *(undefined8 *)&pFVar7[3].SkinWeightAttributes.field_0x48 = 0;
      *(undefined8 *)&pFVar7[3].MorphTargetAttributes.field_0x10 = 0;
      *(undefined4 *)&pFVar7[3].MorphTargetAttributes.field_0x18 = 0;
      *(undefined4 *)&pFVar7[3].MorphTargetAttributes.field_0x1c = 0x80;
      *(undefined4 *)&pFVar7[3].MorphTargetAttributes.field_0x20 = 0xffffffff;
      *(undefined4 *)&pFVar7[3].MorphTargetAttributes.field_0x24 = 0;
      *(undefined8 *)&pFVar7[3].MorphTargetAttributes.field_0x30 = 0;
      *(undefined4 *)&pFVar7[3].MorphTargetAttributes.field_0x38 = 0;
      pFVar7[3].MorphTargetAttributes.field_0x40 = 1;
      local_8e8.ArrayNum = local_9f8.ArrayNum;
      local_8e8.DataPtr = (int *)local_9f8.AllocatorInstance.Data;
      if ((local_9f8.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Geometry::FDynamicSubmesh3::Compute
                ((FDynamicSubmesh3 *)&pFVar7->_padding_,&local_8e8,0xf,true);
      pFVar11 = (FDynamicSubmesh3 *)&pFVar7->_padding_;
      if ((pFVar11 == (FDynamicSubmesh3 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue =
           ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue + FindPolygons;
      UNLOCK();
      FStack_9c0.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      local_9c8 = (FDynamicMesh3 *)pFVar11;
    }
    if (&this->OriginalSubmesh != (TSharedPtr<UE::Geometry::FDynamicSubmesh3,1> *)&local_9c8) {
      (this->OriginalSubmesh).Object = pFVar11;
      local_9c8 = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OriginalSubmesh).SharedReferenceCount,&FStack_9c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_9c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
    this->bUsingSelection = true;
  }
  if (this->bUsingSelection == false) {
    pFVar6 = (this->OriginalDynamicMesh).Object;
    FVar12.ReferenceController = ::operator_new(0x280);
    if ((FDynamicMeshAttributeSet *)FVar12.ReferenceController == (FDynamicMeshAttributeSet *)0x0) {
      local_988 = ___xmm_00000000000000000000000000000010;
      pTVar31 = (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)&DAT_00000010;
      FVar12.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
      pFVar7 = pFVar29;
    }
    else {
      ((TOptional<EConvertToPolygonsMode> *)
      &((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_)->TypedValue =
           FindPolygons;
      *(undefined4 *)
       &((TOptional<EConvertToPolygonsMode> *)
        &((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_)->bIsSet = 1;
      ((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TConstObjectSharedAccess_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
      ;
      *(undefined8 *)&((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_ = 0;
      ((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->ParentMesh = (FDynamicMesh3 *)0x0;
      (((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->UVLayers).Array.AllocatorInstance.
      Data = (FScriptContainerElement *)0x0;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3
                ((FDynamicMesh3 *)
                 &(((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->UVLayers).Array.
                  ArrayNum);
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &(((FDynamicMeshAttributeSet *)((longlong)FVar12.ReferenceController + 0x1a8))->
                  SkinWeightAttributes).field_0x40,4000);
      pTVar31 = (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)
                &((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_;
      *(FDynamicMesh3 **)&((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_ =
           pFVar6;
      if ((pTVar31 == (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      ((TOptional<EConvertToPolygonsMode> *)
      &((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_)->TypedValue =
           ((TOptional<EConvertToPolygonsMode> *)
           &((FDynamicMeshAttributeSet *)FVar12.ReferenceController)->_padding_)->TypedValue +
           FindPolygons;
      UNLOCK();
      pFVar7 = (FDynamicMeshAttributeSet *)FVar12.ReferenceController;
      local_988 = (FDynamicMesh3 *)pTVar31;
    }
    FStack_980.ReferenceController = FVar12.ReferenceController;
    if (&this->ComputeOperatorSharedMesh !=
        (TSharedPtr<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1> *)
        &local_988) {
      (this->ComputeOperatorSharedMesh).Object = pTVar31;
      local_988 = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ComputeOperatorSharedMesh).SharedReferenceCount,&FStack_980);
      FVar12.ReferenceController = FStack_980.ReferenceController;
    }
  }
  else {
    pFVar11 = TSharedPtr<UE::Geometry::FDynamicSubmesh3,1>::operator->(&this->OriginalSubmesh);
    pFVar7 = ::operator_new(0x280);
    if (pFVar7 == (FDynamicMeshAttributeSet *)0x0) {
      local_998 = ___xmm_00000000000000000000000000000010;
      pTVar31 = (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)&DAT_00000010;
      FStack_990.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
      pFVar7 = pFVar29;
    }
    else {
      ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue = FindPolygons;
      *(undefined4 *)&((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->bIsSet = 1;
      pFVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TConstObjectSharedAccess_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
      ;
      *(undefined8 *)&pFVar7->_padding_ = 0;
      pFVar7->ParentMesh = (FDynamicMesh3 *)0x0;
      (pFVar7->UVLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3
                ((FDynamicMesh3 *)&(pFVar7->UVLayers).Array.ArrayNum);
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pFVar7[1].SkinWeightAttributes.field_0x40,4000);
      pTVar31 = (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)&pFVar7->_padding_;
      *(FDynamicMesh3 **)&pFVar7->_padding_ = &pFVar11->Submesh;
      if ((pTVar31 == (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue =
           ((TOptional<EConvertToPolygonsMode> *)&pFVar7->_padding_)->TypedValue + FindPolygons;
      UNLOCK();
      FStack_990.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      local_998 = (FDynamicMesh3 *)pTVar31;
    }
    FVar12.ReferenceController = FStack_990.ReferenceController;
    if (&this->ComputeOperatorSharedMesh !=
        (TSharedPtr<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1> *)
        &local_998) {
      (this->ComputeOperatorSharedMesh).Object = pTVar31;
      local_998 = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ComputeOperatorSharedMesh).SharedReferenceCount,&FStack_990);
      FVar12.ReferenceController = FStack_990.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = UConvertToPolygonsToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar13);
  local_118._8_8_ = this;
  pUVar14 = (UConvertToPolygonsToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar24 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UConvertToPolygonsToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar14;
  pcVar2 = *(code **)(pUVar14->_padding_ + 0x2b8);
  ::FString::FString(&local_8d8,L"");
  (*pcVar2)(pUVar14,this,&local_8d8);
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->Settings).field0_0x0.DebugPtr);
  UE::ToolTarget::GetLocalToWorldTransform(&local_98,(UToolTarget *)this->_padding_);
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = UConvertToPolygonsOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_318,pUVar13);
  local_318._8_8_ = this;
  pUVar15 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_318);
  if (local_318._64_8_ != 0) {
    plVar24 = (longlong *)(local_318 + 0x50);
    if ((longlong *)local_318._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_318._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(UConvertToPolygonsTool **)&pUVar15[1].field_0x8 = this;
  FObjectInitializer::AssertIfInConstructor
            (pUVar15,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_298,pUVar13);
  local_298._8_8_ = pUVar15;
  pUVar16 = (UMeshOpPreviewWithBackgroundCompute *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_298);
  if (local_298._64_8_ != 0) {
    plVar24 = (longlong *)(local_298 + 0x50);
    if ((longlong *)local_298._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_298._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->PreviewCompute).field0_0x0.DebugPtr = pUVar16;
  pFVar7 = pFVar29;
  if (pUVar15 != (UObject *)0x0) {
    pFVar7 = (FDynamicMeshAttributeSet *)(pUVar15 + 1);
  }
  pUVar17 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar16,pUVar17,(IDynamicMeshOperatorFactory *)pFVar7);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  UMeshOpPreviewWithBackgroundCompute::SetIsMeshTopologyConstant
            ((this->PreviewCompute).field0_0x0.DebugPtr,true,VertexNormals|Positions);
  UPreviewMesh::SetTransform
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             &local_98);
  UPreviewMesh::SetTangentsMode
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             AutoCalculated);
  UPreviewMesh::UpdatePreview
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (this->OriginalDynamicMesh).Object,FullUpdate,AllVertexAttribs);
  pUVar16 = (this->PreviewCompute).field0_0x0.DebugPtr;
  pUVar18 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar19 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar18);
  _Src.Data = local_958.AllocatorInstance.Data;
  local_978.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_958.ArrayNum == 0) {
    local_978.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_958.ArrayNum,0,&local_978.AllocatorInstance,local_958.ArrayNum,
               &local_978.ArrayMax);
    memcpy(local_978.AllocatorInstance.Data,_Src.Data,(longlong)local_958.ArrayNum << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar16,&local_978,pUVar19,(UMaterialInterface *)0x0);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility
            ((this->PreviewCompute).field0_0x0.DebugPtr,true);
  local_948 = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UConvertToPolygonsTool::Setup_::__l11::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((this->PreviewCompute).field0_0x0.DebugPtr)->OnOpCompleted,&local_8b8);
  if (this->bUsingSelection != false) {
    pUVar15 = GetTransientPackageAsObject();
    this_02 = NewObject<UPreviewMesh>(pUVar15);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_02 != (UPreviewMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    (this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr = this_02;
    pUVar17 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
    UPreviewMesh::CreateInWorld(this_02,pUVar17,&local_98);
    ToolSetupUtil::ApplyRenderingConfigurationToPreview
              ((this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr,(UToolTarget *)this->_padding_)
    ;
    UPreviewMesh::SetMaterials((this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr,&local_958);
    local_868 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`14'::<lambda_3>,1,0>::
                 _vftable_;
    local_850 = 0;
    local_878[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l14::<lambda_3>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
                   ::Call;
    local_860 = this;
    UPreviewMesh::EnableSecondaryTriangleBuffers
              ((this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr,
               (TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)local_878);
    UPreviewMesh::SetSecondaryBuffersVisibility
              ((this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr,false);
    UPreviewMesh::SetTangentsMode
              ((this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr,AutoCalculated);
    UPreviewMesh::UpdatePreview
              ((this->UnmodifiedAreaPreviewMesh).field0_0x0.DebugPtr,
               (this->OriginalDynamicMesh).Object,FullUpdate,AllVertexAttribs);
  }
  pUVar20 = NewObject<UPreviewGeometry>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UPreviewGeometry *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->PreviewGeometry).field0_0x0.DebugPtr = pUVar20;
  pUVar17 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  UPreviewGeometry::CreateInWorld(pUVar20,pUVar17,&local_98);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_918 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_4>,0,0>::
               _vftable_;
  local_900 = (undefined ***)0x0;
  local_928 = UE::Core::Private::Function::
              TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_4>,void,enum_EConvertToPolygonsMode_const_&>
              ::Call;
  local_910 = this;
  this_03 = ::operator_new(0xa0);
  pFVar7 = pFVar29;
  if (this_03 != (void *)0x0) {
    local_578[0] = local_928;
    local_550 = 0;
    if (local_928 != (code *)0x0) {
      pppuVar26 = &local_918;
      if (local_900 != (undefined ***)0x0) {
        pppuVar26 = local_900;
      }
      (*(code *)**pppuVar26)(pppuVar26,local_578 + 2);
    }
    pFVar7 = (FDynamicMeshAttributeSet *)
             FWatchablePropertySet::TPropertyWatcher<enum_EConvertToPolygonsMode>::
             TPropertyWatcher<enum_EConvertToPolygonsMode><enum_EConvertToPolygonsMode,void>
                       (this_03,&pUVar14->ConversionMode,
                        (TFunction<void___cdecl(EConvertToPolygonsMode_const_&)> *)local_578);
  }
  iVar5 = (int)pUVar14->_padding_;
  piVar1 = (int *)((longlong)&pUVar14->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar14->_padding_,piVar1);
  }
  *(int *)&pUVar14->_padding_ = iVar5 + 1;
  *(FDynamicMeshAttributeSet **)(pUVar14->_padding_ + (longlong)iVar5 * 8) = pFVar7;
  if (local_928 != (code *)0x0) {
    pppuVar26 = &local_918;
    if (local_900 != (undefined ***)0x0) {
      pppuVar26 = local_900;
    }
    (*(code *)(*pppuVar26)[2])();
  }
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_838 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_5>,0,0>::
               _vftable_;
  local_820 = 0;
  local_848[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_5>,void,bool_const_&>
                 ::Call;
  local_830 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->bShowGroupColors,
             (TFunction<void___cdecl(bool_const_&)> *)local_848);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_808 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_6>,0,0>::
               _vftable_;
  local_7f0 = 0;
  local_818[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_6>,void,float_const_&>
                 ::Call;
  local_800 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->AngleTolerance,
             (TFunction<void___cdecl(float_const_&)> *)local_818);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_7d8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_7>,0,0>::
               _vftable_;
  local_7c0 = 0;
  local_7e8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_7>,void,bool_const_&>
                 ::Call;
  local_7d0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->bUseAverageGroupNormal,
             (TFunction<void___cdecl(bool_const_&)> *)local_7e8);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_7a8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_8>,0,0>::
               _vftable_;
  local_790 = 0;
  local_7b8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_8>,void,int_const_&>
                 ::Call;
  local_7a0 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->NumPoints,
             (TFunction<void___cdecl(int_const_&)> *)local_7b8);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_778 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_9>,0,0>::
               _vftable_;
  local_760 = 0;
  local_788[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_9>,void,bool_const_&>
                 ::Call;
  local_770 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->bSplitExisting,
             (TFunction<void___cdecl(bool_const_&)> *)local_788);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_748 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_10>,0,0>::
               _vftable_;
  local_730 = 0;
  local_758[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_10>,void,bool_const_&>
                 ::Call;
  local_740 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->bNormalWeighted,
             (TFunction<void___cdecl(bool_const_&)> *)local_758);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_718 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_11>,0,0>::
               _vftable_;
  local_700 = 0;
  local_728[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_11>,void,float_const_&>
                 ::Call;
  local_710 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->NormalWeighting,
             (TFunction<void___cdecl(float_const_&)> *)local_728);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_6e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_12>,0,0>::
               _vftable_;
  local_6d0 = 0;
  local_6f8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_12>,void,int_const_&>
                 ::Call;
  local_6e0 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->MinGroupSize,
             (TFunction<void___cdecl(int_const_&)> *)local_6f8);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_6b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_13>,0,0>::
               _vftable_;
  local_6a0 = 0;
  local_6c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_13>,void,float_const_&>
                 ::Call;
  local_6b0 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->QuadAdjacencyWeight,
             (TFunction<void___cdecl(float_const_&)> *)local_6c8);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_688 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_14>,0,0>::
               _vftable_;
  local_670 = 0;
  local_698[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_14>,void,float_const_&>
                 ::Call;
  local_680 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->QuadMetricClamp,
             (TFunction<void___cdecl(float_const_&)> *)local_698);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_658 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_15>,0,0>::
               _vftable_;
  local_640 = 0;
  local_668[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_15>,void,int_const_&>
                 ::Call;
  local_650 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->QuadSearchRounds,
             (TFunction<void___cdecl(int_const_&)> *)local_668);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_628 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_16>,0,0>::
               _vftable_;
  local_610 = 0;
  local_638[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_16>,void,bool_const_&>
                 ::Call;
  local_620 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->bRespectUVSeams,
             (TFunction<void___cdecl(bool_const_&)> *)local_638);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_5f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_17>,0,0>::
               _vftable_;
  local_5e0 = 0;
  local_608[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_17>,void,bool_const_&>
                 ::Call;
  local_5f0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->bRespectHardNormals,
             (TFunction<void___cdecl(bool_const_&)> *)local_608);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar13 = Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_218,pUVar13);
  local_218._8_8_ = this;
  pUVar21 = (UPolygroupLayersProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_218);
  if (local_218._64_8_ != 0) {
    plVar24 = (longlong *)(local_218 + 0x50);
    if ((longlong *)local_218._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_218._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar21 != (UPolygroupLayersProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  (this->CopyFromLayerProperties).field0_0x0.DebugPtr = pUVar21;
  UPolygroupLayersProperties::InitializeGroupLayers(pUVar21,(this->OriginalDynamicMesh).Object);
  pUVar21 = (this->CopyFromLayerProperties).field0_0x0.DebugPtr;
  local_5c8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_18>,0,0>::
               _vftable_;
  local_5b0 = 0;
  local_5d8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_18>,void,FName_const_&>
                 ::Call;
  local_5c0 = this;
  FWatchablePropertySet::WatchProperty<FName>
            ((FWatchablePropertySet *)&pUVar21->_padding_,&pUVar21->ActiveGroupLayer,
             (TFunction<void___cdecl(FName_const_&)> *)local_5d8);
  (**(code **)(this->_padding_ + 0x318))(this,(this->CopyFromLayerProperties).field0_0x0.DebugPtr);
  UpdateFromGroupLayer(this);
  (**(code **)(this->_padding_ + 0x338))(this,(this->CopyFromLayerProperties).field0_0x0.DebugPtr);
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  piVar1 = &(pUVar14->OptionsList).ArrayMax;
  pFVar27 = (pUVar14->OptionsList).AllocatorInstance.Data;
  iVar5 = (pUVar14->OptionsList).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar27,iVar5);
    (pUVar14->OptionsList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pUVar14->OptionsList).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar27,iVar5);
    (pUVar14->OptionsList).ArrayNum = 0;
  }
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  pTVar28 = &pUVar14->OptionsList;
  ::FString::FString(&local_9e8,L"Default");
  pFVar27 = (pTVar28->AllocatorInstance).Data;
  if (((pFVar27 <= (FScriptContainerElement *)&local_9e8) &&
      ((FScriptContainerElement *)&local_9e8 <
       pFVar27 + (longlong)(pUVar14->OptionsList).ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (pUVar14->OptionsList).ArrayNum;
  piVar1 = &(pUVar14->OptionsList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar28->AllocatorInstance,piVar1);
  }
  (pUVar14->OptionsList).ArrayNum = iVar5 + 1;
  pFVar27 = (pTVar28->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar27 = 0;
  *(FScriptContainerElement **)pFVar27 = local_9e8.Data.AllocatorInstance.Data;
  *(int *)(pFVar27 + 8) = local_9e8.Data.ArrayNum;
  *(int *)(pFVar27 + 0xc) = local_9e8.Data.ArrayMax;
  local_9e8.Data.ArrayNum = 0;
  local_9e8.Data.ArrayMax = 0;
  local_9e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (((this->OriginalDynamicMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = pFVar29;
  if ((((this->OriginalDynamicMesh).Object)->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    while( true ) {
      if (((this->OriginalDynamicMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (**(code **)(((((this->OriginalDynamicMesh).Object)->AttributeSet).Ptr)->_padding_ +
                          200))();
      iVar30 = (int)pFVar7;
      if (iVar5 <= iVar30) break;
      if (((this->OriginalDynamicMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (((this->OriginalDynamicMesh).Object)->AttributeSet).Ptr;
      this_04 = pFVar29;
      if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
        this_04 = pFVar7;
      }
      pTVar22 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(this_04,iVar30);
      pUVar14 = (this->Settings).field0_0x0.DebugPtr;
      pTVar28 = &pUVar14->OptionsList;
      local_940.ComparisonIndex.Value = *(uint *)&pTVar22->field_0x8;
      local_940.Number = *(uint *)&pTVar22->field_0xc;
      pFVar23 = (FScriptContainerElement *)::FName::ToString(&local_940,&local_8a0);
      pFVar27 = (pTVar28->AllocatorInstance).Data;
      if (((pFVar27 <= pFVar23) &&
          (pFVar23 < pFVar27 + (longlong)(pUVar14->OptionsList).ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (pUVar14->OptionsList).ArrayNum;
      piVar1 = &(pUVar14->OptionsList).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar28->AllocatorInstance,piVar1);
      }
      (pUVar14->OptionsList).ArrayNum = iVar5 + 1;
      pFVar27 = (pTVar28->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar27 = 0;
      *(undefined8 *)pFVar27 = *(undefined8 *)pFVar23;
      *(undefined8 *)pFVar23 = 0;
      *(int *)(pFVar27 + 8) = *(int *)(pFVar23 + 8);
      *(int *)(pFVar27 + 0xc) = *(int *)(pFVar23 + 0xc);
      *(undefined8 *)(pFVar23 + 8) = 0;
      if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
      }
      pFVar7 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar30 + 1);
    }
  }
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  pTVar28 = &pUVar14->OptionsList;
  ::FString::FString(&local_9d8,L"Create New...");
  pFVar27 = (pTVar28->AllocatorInstance).Data;
  if (((pFVar27 <= (FScriptContainerElement *)&local_9d8) &&
      ((FScriptContainerElement *)&local_9d8 <
       pFVar27 + (longlong)(pUVar14->OptionsList).ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (pUVar14->OptionsList).ArrayNum;
  piVar1 = &(pUVar14->OptionsList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar28->AllocatorInstance,piVar1);
  }
  (pUVar14->OptionsList).ArrayNum = iVar5 + 1;
  pFVar27 = (pTVar28->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar27 = 0;
  *(FScriptContainerElement **)pFVar27 = local_9d8.Data.AllocatorInstance.Data;
  *(int *)(pFVar27 + 8) = local_9d8.Data.ArrayNum;
  *(int *)(pFVar27 + 0xc) = local_9d8.Data.ArrayMax;
  local_9d8.Data.ArrayNum = 0;
  local_9d8.Data.ArrayMax = 0;
  local_9d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pUVar14 = (this->Settings).field0_0x0.DebugPtr;
  local_598 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UConvertToPolygonsTool::Setup'::`2'::<lambda_19>,0,0>::
               _vftable_;
  local_580 = 0;
  local_5a8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UConvertToPolygonsTool::Setup'::__l2::<lambda_19>,void,FName_const_&>
                 ::Call;
  local_590 = this;
  FWatchablePropertySet::WatchProperty<FName>
            ((FWatchablePropertySet *)&pUVar14->_padding_,&pUVar14->GroupLayer,
             (TFunction<void___cdecl(FName_const_&)> *)local_5a8);
  if (this->bUsingSelection != false) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_198,pUVar13);
    local_198._8_8_ = this;
    pUVar15 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
    if (local_198._64_8_ != 0) {
      plVar24 = (longlong *)(local_198 + 0x50);
      if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
        plVar24 = (longlong *)local_198._104_8_;
      }
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar15);
    }
    this->_padding_ = (longlong)pUVar15;
    pcVar2 = *(code **)(*(longlong *)pUVar15 + 0x2b8);
    ::FString::FString(&local_8c8,L"");
    (*pcVar2)(pUVar15,this,&local_8c8);
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x318))(this,this->_padding_);
    UGeometrySelectionVisualizationProperties::Initialize
              ((UGeometrySelectionVisualizationProperties *)this->_padding_,(UInteractiveTool *)this
              );
    *(undefined1 *)(this->_padding_ + 0xb0) = 1;
    *(char *)(this->_padding_ + 0xb2) = (char)this->_padding_;
    *(undefined1 *)(this->_padding_ + 0xb3) = *(undefined1 *)((longlong)&this->_padding_ + 4);
    pUVar20 = NewObject<UPreviewGeometry>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UPreviewGeometry *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar20);
    }
    this->_padding_ = (longlong)pUVar20;
    pUVar17 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
    UPreviewGeometry::CreateInWorld(pUVar20,pUVar17,&local_98);
    if (((this->OriginalDynamicMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Geometry::InitializeGeometrySelectionVisualization
              ((UPreviewGeometry *)this->_padding_,
               (UGeometrySelectionVisualizationProperties *)this->_padding_,
               (this->OriginalDynamicMesh).Object,(FGeometrySelection *)&this->_padding_,
               (FGroupTopology *)0x0,(FGeometrySelection *)0x0,&local_9f8,(TTransform<double> *)0x0)
    ;
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->PreviewCompute).field0_0x0.DebugPtr);
  UpdateVisualization(this);
  plVar24 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar2 = *(code **)(*plVar24 + 0x360);
  pFVar25 = FText::AsLocalizable_Advanced_LocText
                      (&local_890,L"UConvertToPolygonsTool",L"OnStartTool",
                       L"Cluster triangles of the Mesh into PolyGroups using various strategies");
  (*pcVar2)(plVar24,pFVar25,2);
  if (local_890.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_890.TextData.Reference + 0x10))();
  }
  if (local_9f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f8.AllocatorInstance.Data);
  }
  if (local_958.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUConvertToPolygonsTool @ 14cbf6ad0

void __cdecl UConvertToPolygonsTool::StaticRegisterNativesUConvertToPolygonsTool(void)

{
  return;
}

// UpdateFromGroupLayer @ 14cbf87b0

void __thiscall UConvertToPolygonsTool::UpdateFromGroupLayer(UConvertToPolygonsTool *this)

{
  code *pcVar1;
  bool bVar2;
  UConvertToPolygonsTool *local_res8 [4];
  code *local_18;
  UConvertToPolygonsTool **local_10;
  
  if ((this->ComputeOperatorSharedMesh).Object ==
      (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UConvertToPolygonsTool::UpdateFromGroupLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_res8[0] = this;
  UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::AccessSharedObject
            ((this->ComputeOperatorSharedMesh).Object,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_18);
  return;
}

// UpdateOpParameters @ 14cbf8830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UConvertToPolygonsTool::UpdateOpParameters
          (UConvertToPolygonsTool *this,FConvertToPolygonsOp *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *pTVar2;
  FPolygroupSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auStack_148 [32];
  TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FPolygroupSet *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  param_1->bCalculateNormals = ((this->Settings).field0_0x0.DebugPtr)->bCalculateNormals;
  param_1->ConversionMode = ((this->Settings).field0_0x0.DebugPtr)->ConversionMode;
  param_1->AngleTolerance = (double)((this->Settings).field0_0x0.DebugPtr)->AngleTolerance;
  param_1->bUseAverageGroupNormal = ((this->Settings).field0_0x0.DebugPtr)->bUseAverageGroupNormal;
  param_1->NumPoints = ((this->Settings).field0_0x0.DebugPtr)->NumPoints;
  param_1->bSubdivideExisting = ((this->Settings).field0_0x0.DebugPtr)->bSplitExisting;
  param_1->WeightingType = (uint)(((this->Settings).field0_0x0.DebugPtr)->bNormalWeighted != false);
  (param_1->WeightingCoeffs).field0_0x0._s_0.X =
       (double)((this->Settings).field0_0x0.DebugPtr)->NormalWeighting;
  (param_1->WeightingCoeffs).field0_0x0._s_0.Y = 1.0;
  (param_1->WeightingCoeffs).field0_0x0._s_0.Z = 1.0;
  param_1->MinGroupSize = ((this->Settings).field0_0x0.DebugPtr)->MinGroupSize;
  param_1->QuadMetricClamp = (double)((this->Settings).field0_0x0.DebugPtr)->QuadMetricClamp;
  param_1->QuadAdjacencyWeight = (double)((this->Settings).field0_0x0.DebugPtr)->QuadAdjacencyWeight
  ;
  param_1->QuadSearchRounds = ((this->Settings).field0_0x0.DebugPtr)->QuadSearchRounds;
  param_1->bRespectUVSeams = ((this->Settings).field0_0x0.DebugPtr)->bRespectUVSeams;
  param_1->bRespectHardNormals = ((this->Settings).field0_0x0.DebugPtr)->bRespectHardNormals;
  pTVar1 = (this->ComputeOperatorSharedMesh).SharedReferenceCount.ReferenceController;
  pTVar2 = (this->ComputeOperatorSharedMesh).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = (param_1->OriginalMesh).Object;
  pTStack_120 = (param_1->OriginalMesh).SharedReferenceCount.ReferenceController;
  (param_1->OriginalMesh).Object = pTVar2;
  (param_1->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120);
  if (this->bUsingSelection != false) {
    if ((this->OriginalDynamicMesh).Object == (FDynamicMesh3 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    param_1->InitialGroupID = ((this->OriginalDynamicMesh).Object)->GroupIDCounter;
  }
  pFVar3 = (this->ActiveFromGroupSet).Object;
  if (pFVar3 != (FPolygroupSet *)0x0) {
    pTVar1 = (this->ActiveFromGroupSet).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118 = (param_1->SourcePolyGroups).Object;
    pTStack_110 = (param_1->SourcePolyGroups).SharedReferenceCount.ReferenceController;
    (param_1->SourcePolyGroups).Object = pFVar3;
    (param_1->SourcePolyGroups).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110)
    ;
    if (this->bUsingSelection != false) {
      if ((this->ActiveFromGroupSet).Object == (FPolygroupSet *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      param_1->InitialGroupID = ((this->ActiveFromGroupSet).Object)->MaxGroupID;
    }
  }
  UE::ToolTarget::GetLocalToWorldTransform(&local_88,(UToolTarget *)this->_padding_);
  param_1->_padding_ = (longlong)local_88.Rotation.XY.m128d_f64[0];
  param_1->_padding_ = (longlong)local_88.Rotation.XY.m128d_f64[1];
  param_1->_padding_ = (longlong)local_88.Rotation.ZW.m128d_f64[0];
  param_1->_padding_ = (longlong)local_88.Rotation.ZW.m128d_f64[1];
  param_1->_padding_ = (longlong)local_88.Translation.XY.m128d_f64[0];
  param_1->_padding_ = (longlong)local_88.Translation.XY.m128d_f64[1];
  param_1->_padding_ = (longlong)local_88.Translation.ZW.m128d_f64[0];
  param_1->_padding_ = (longlong)local_88.Scale3D.XY.m128d_f64[0];
  param_1->_padding_ = (longlong)local_88.Scale3D.XY.m128d_f64[1];
  param_1->_padding_ = (longlong)local_88.Scale3D.ZW.m128d_f64[0];
  return;
}

// UpdateVisualization @ 14cbf98d0

void __thiscall UConvertToPolygonsTool::UpdateVisualization(UConvertToPolygonsTool *this)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  UMeshOpPreviewWithBackgroundCompute *this_01;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UInteractiveToolManager *pUVar7;
  UMaterialInterface *pUVar8;
  ulonglong uVar9;
  longlong lVar10;
  FColor_u_0 local_res8 [2];
  undefined4 local_res10 [2];
  ForAnyElementType local_a8;
  int local_a0;
  int iStack_9c;
  UMaterialInstanceDynamic *local_98;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_90;
  code *local_80;
  UConvertToPolygonsTool **local_78;
  UConvertToPolygonsTool *local_70;
  FColor_u_0 *local_68;
  undefined4 *local_60;
  code *local_58 [2];
  undefined **local_48;
  UConvertToPolygonsTool *local_40;
  undefined8 local_30;
  
  if ((this->PreviewCompute).field0_0x0.DebugPtr != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    this_00 = (UObjectBaseUtility *)this->_padding_;
    plVar6 = (longlong *)0x0;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar5 = Z_Construct_UClass_UMaterialProvider_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
    }
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    iStack_9c = 0;
    if (((this->Settings).field0_0x0.DebugPtr)->bShowGroupColors == false) {
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_a8,0);
      UPreviewMesh::ClearTriangleColorFunction
                ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 FastUpdate);
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x10))();
      if (0 < (int)uVar4) {
        uVar9 = (ulonglong)uVar4;
        do {
          pUVar7 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
          local_98 = ToolSetupUtil::GetVertexColorMaterial(pUVar7,false);
          if (((local_a8.Data <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < local_a8.Data + (longlong)iStack_9c * 8)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_a0 == iStack_9c) {
            local_a0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_a8,&iStack_9c);
          }
          iVar1 = local_a0 + 1;
          *(UMaterialInstanceDynamic **)(local_a8.Data + (longlong)local_a0 * 8) = local_98;
          uVar9 = uVar9 - 1;
          local_a0 = iVar1;
        } while (uVar9 != 0);
      }
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UConvertToPolygonsTool::UpdateVisualization'::`8'::<lambda_1>,0,0>
                  ::_vftable_;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UConvertToPolygonsTool::UpdateVisualization'::__l8::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
                    ::Call;
      local_30 = 0;
      local_40 = this;
      UPreviewMesh::SetTriangleColorFunction
                ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 (TFunction<FColor___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)local_58,
                 FastUpdate);
    }
    this_01 = (this->PreviewCompute).field0_0x0.DebugPtr;
    pUVar7 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pUVar8 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar7);
    _Src.Data = local_a8.Data;
    lVar10 = (longlong)local_a0;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = local_a0;
    if (local_a0 == 0) {
      local_90.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_a0,0,&local_90.AllocatorInstance,local_a0,&local_90.ArrayMax);
      memcpy(local_90.AllocatorInstance.Data,_Src.Data,lVar10 << 3);
    }
    UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
              (this_01,&local_90,pUVar8,(UMaterialInterface *)0x0);
    local_res8[0] = FColor::Red.field0_0x0;
    local_res10[0] = 0x40000000;
    if (((this->ComputeOperatorSharedMesh).Object ==
         (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68 = local_res8;
    local_60 = local_res10;
    local_78 = &local_70;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`UConvertToPolygonsTool::UpdateVisualization'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_70 = this;
    UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::AccessSharedObject
              ((this->ComputeOperatorSharedMesh).Object,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_80);
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
  }
  return;
}

