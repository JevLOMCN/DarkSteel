// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 13

// StaticClass @ 14cd43090

UClass * __cdecl UWeldMeshEdgesTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesTool",
               &Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesTool,0x1c8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeldMeshEdgesTool>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton;
}

// UWeldMeshEdgesTool @ 14cd52210

UWeldMeshEdgesTool * __thiscall
UWeldMeshEdgesTool::UWeldMeshEdgesTool(UWeldMeshEdgesTool *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UWeldMeshEdgesTool__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UWeldMeshEdgesToolProperties *)0x0;
  (this->PreviewCompute).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OperatorFactory).field0_0x0.DebugPtr = (UWeldMeshEdgesOperatorFactory *)0x0;
  (this->SourceMesh).Object = (FDynamicMesh3 *)0x0;
  (this->SourceMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SelectedEdges).Elements = 0;
  *(undefined8 *)&(this->SelectedEdges).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedEdges).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x30 = 0xffffffff;
  (this->SelectedEdges).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedEdges).HashSize = 0;
  return this;
}

// UWeldMeshEdgesTool @ 14cd522c0

UWeldMeshEdgesTool * __thiscall UWeldMeshEdgesTool::UWeldMeshEdgesTool(UWeldMeshEdgesTool *this)

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
  this->_padding_ = (longlong)&___7UWeldMeshEdgesTool__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UWeldMeshEdgesToolProperties *)0x0;
  (this->PreviewCompute).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OperatorFactory).field0_0x0.DebugPtr = (UWeldMeshEdgesOperatorFactory *)0x0;
  (this->SourceMesh).Object = (FDynamicMesh3 *)0x0;
  (this->SourceMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SelectedEdges).Elements = 0;
  *(undefined8 *)&(this->SelectedEdges).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedEdges).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x34 = 0;
  (this->SelectedEdges).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedEdges).HashSize = 0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UWeldMeshEdgesTool",L"WeldMeshEdgesToolName",L"Weld Edges");
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

// ~UWeldMeshEdgesTool @ 14cd53b30

void __thiscall UWeldMeshEdgesTool::~UWeldMeshEdgesTool(UWeldMeshEdgesTool *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UWeldMeshEdgesTool__6B_;
  (this->SelectedEdges).HashSize = 0;
  FVar1 = (this->SelectedEdges).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedEdges).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceMesh).SharedReferenceCount.ReferenceController);
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  return;
}

// CanAccept @ 14cd630e0

bool __thiscall UWeldMeshEdgesTool::CanAccept(UWeldMeshEdgesTool *this)

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

// GetPrivateStaticClass @ 14cd6ee00

UClass * __cdecl UWeldMeshEdgesTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesTool",
               &Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesTool,0x1c8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeldMeshEdgesTool>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesTool.InnerSingleton;
}

// HasAccept @ 14cd6fa70

bool __thiscall UWeldMeshEdgesTool::HasAccept(UWeldMeshEdgesTool *this)

{
  return true;
}

// HasCancel @ 14cd6faa0

bool __thiscall UWeldMeshEdgesTool::HasCancel(UWeldMeshEdgesTool *this)

{
  return true;
}

// OnShutdown @ 14cd75b30

void __thiscall UWeldMeshEdgesTool::OnShutdown(UWeldMeshEdgesTool *this,EToolShutdownType param_1)

{
  UWeldMeshEdgesToolProperties *pUVar1;
  code *pcVar2;
  UMeshElementsVisualizerProperties *pUVar3;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  bool bVar4;
  longlong lVar5;
  FText *pFVar6;
  FConversionToMeshDescriptionOptions local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FDynamicMeshOpResult local_68;
  
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_98,L"");
  (*pcVar2)(pUVar1,this,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
  pUVar3 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar3 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7957004636185951945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\WeldMeshEdgesTool.cpp"
                       ,0x137,"MeshElementsDisplay->Settings");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
    ::FString::FString(&local_88,L"WeldEdges");
    (*pcVar2)(pUVar3,this,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  UPreviewGeometry::Disconnect((UPreviewGeometry *)(this->MeshElementsDisplay).field0_0x0.DebugPtr);
  this_00 = (this->PreviewCompute).field0_0x0.DebugPtr;
  if (this_00 != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UMeshOpPreviewWithBackgroundCompute::Shutdown(this_00,&local_68);
    if (param_1 == Accept) {
      lVar5 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar2 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x10);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"UWeldMeshEdgesTool",L"WeldMeshEdgesToolTransactionName",
                          L"Weld Edges");
      (*pcVar2)(lVar5 + 0x28,pFVar6);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7957004636185951932>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\WeldMeshEdgesTool.cpp"
                           ,0x144,"DynamicMeshResult != nullptr");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        local_a8.bSetPolyGroups = true;
        local_a8.bUpdatePositions = true;
        local_a8.bUpdateNormals = true;
        local_a8.bUpdateTangents = false;
        local_a8.bUpdateUVs = false;
        local_a8.bUpdateVtxColors = false;
        local_a8.bTransformVtxColorsSRGBToLinear = true;
        local_a8.bConvertBackToNonManifold = false;
        local_a8.bSetHardEdgesFromNormalSeams = true;
        UE::ToolTarget::CommitDynamicMeshUpdate
                  ((UToolTarget *)this->_padding_,local_68.Mesh.Ptr,true,&local_a8,
                   (FComponentMaterialSet *)0x0);
      }
      lVar5 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
    }
    if (local_68.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
      (**(code **)(local_68.Mesh.Ptr)->_padding_)(local_68.Mesh.Ptr,1);
    }
  }
  return;
}

// OnTick @ 14cd75e50

void __thiscall UWeldMeshEdgesTool::OnTick(UWeldMeshEdgesTool *this,float param_1)

{
  UMeshOpPreviewWithBackgroundCompute::Tick((this->PreviewCompute).field0_0x0.DebugPtr,param_1);
  UMeshElementsVisualizer::OnTick((this->MeshElementsDisplay).field0_0x0.DebugPtr,param_1);
  return;
}

// Setup @ 14cd7e940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UWeldMeshEdgesTool::Setup(UWeldMeshEdgesTool *this)

{
  int *piVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar2;
  UPreviewMesh *pUVar3;
  UMeshElementsVisualizerProperties *pUVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  char cVar6;
  bool bVar7;
  int iVar8;
  FDynamicMesh3 *pFVar9;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar10;
  FGeometrySelection *pFVar11;
  UClass *pUVar12;
  UWeldMeshEdgesOperatorFactory *pUVar13;
  UMeshOpPreviewWithBackgroundCompute *pUVar14;
  UWorld *pUVar15;
  UInteractiveToolManager *pUVar16;
  UMaterialInterface *pUVar17;
  UWeldMeshEdgesToolProperties *pUVar18;
  void *this_00;
  TPropertyWatcher<EWeldMeshEdgesAttributeUIMode> *pTVar19;
  UMeshElementsVisualizer *this_01;
  TTransform<double> *pTVar20;
  FText *pFVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  TPropertyWatcher<EWeldMeshEdgesAttributeUIMode> *pTVar24;
  undefined1 auStackY_7b8 [32];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_778;
  FDynamicMesh3 *local_768;
  FSharedReferencer<1> local_760;
  UWeldMeshEdgesTool *local_758;
  UWeldMeshEdgesTool *local_750;
  UWeldMeshEdgesTool *local_748;
  FComponentMaterialSet local_740;
  code *local_728;
  undefined **local_718;
  UWeldMeshEdgesTool *local_710;
  undefined ***local_700;
  code *local_6f8;
  UWeldMeshEdgesTool **local_6f0;
  FString local_6e8;
  FString local_6d8;
  <lambda_12> local_6c8;
  <lambda_13> local_6c0;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_6b8;
  FText local_6a8;
  FText local_698;
  code *local_688 [2];
  undefined **local_678;
  UWeldMeshEdgesTool *local_670;
  undefined8 local_660;
  code *local_658 [2];
  undefined **local_648;
  UWeldMeshEdgesTool *local_640;
  undefined8 local_630;
  code *local_628 [2];
  undefined **local_618;
  UWeldMeshEdgesTool *local_610;
  undefined8 local_600;
  code *local_5f8 [2];
  undefined **local_5e8;
  UWeldMeshEdgesTool *local_5e0;
  undefined8 local_5d0;
  code *local_5c8 [2];
  undefined **local_5b8;
  UWeldMeshEdgesTool *local_5b0;
  undefined8 local_5a0;
  code *local_598 [2];
  undefined **local_588;
  UWeldMeshEdgesTool *local_580;
  undefined8 local_570;
  code *local_568 [2];
  undefined **local_558;
  UWeldMeshEdgesTool *local_550;
  undefined8 local_540;
  code *local_538 [2];
  undefined **local_528;
  UWeldMeshEdgesTool *local_520;
  undefined8 local_510;
  code *local_508 [2];
  code *local_4f8 [3];
  undefined8 local_4e0;
  FDynamicMesh3 local_4d8;
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8 [128];
  code *local_128 [2];
  undefined **local_118;
  UWeldMeshEdgesTool *local_110;
  undefined ***local_100;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  GetMeshParams.bWantMeshTangents = true;
  pFVar9 = UE::ToolTarget::GetDynamicMeshCopy
                     (&local_4d8,(UToolTarget *)this->_padding_,&GetMeshParams);
  pTVar10 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3>(&local_6b8,pFVar9)
  ;
  local_760.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_768 = pTVar10->Object;
  if (local_760.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_760.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_760.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->SourceMesh;
  pTVar19 = (TPropertyWatcher<EWeldMeshEdgesAttributeUIMode> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_768) {
    pTVar2->Object = local_768;
    local_768 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SourceMesh).SharedReferenceCount,&local_760);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_760.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b8.SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_4d8);
  cVar6 = (**(code **)(this->_padding_ + 0x3d8))(this);
  if (cVar6 != '\0') {
    pFVar11 = (FGeometrySelection *)(**(code **)(this->_padding_ + 0x3e0))(this);
    local_6f0 = &local_758;
    local_6f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l5::<lambda_1>,void,int>::Call;
    local_758 = this;
    if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Geometry::EnumerateSelectionEdges
              (pFVar11,pTVar2->Object,(TFunctionRef<void___cdecl(int)> *)&local_6f8,
               (FPolygroupSet *)0x0);
  }
  UE::ToolTarget::GetLocalToWorldTransform(&local_f8,(UToolTarget *)this->_padding_);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = UWeldMeshEdgesOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2a8,pUVar12);
  local_2a8._8_8_ = this;
  pUVar13 = (UWeldMeshEdgesOperatorFactory *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2a8);
  if (local_2a8._64_8_ != 0) {
    plVar22 = (longlong *)(local_2a8 + 0x50);
    if ((longlong *)local_2a8._104_8_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_2a8._104_8_;
    }
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UWeldMeshEdgesOperatorFactory *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->OperatorFactory).field0_0x0.DebugPtr = pUVar13;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar13->WeldMeshEdgesTool).field0_0x0.DebugPtr = this;
  pUVar14 = NewObject<UMeshOpPreviewWithBackgroundCompute>
                      ((UObject *)(this->OperatorFactory).field0_0x0.DebugPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->PreviewCompute).field0_0x0.DebugPtr = pUVar14;
  pUVar13 = (this->OperatorFactory).field0_0x0.DebugPtr;
  pUVar15 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  pTVar24 = (TPropertyWatcher<EWeldMeshEdgesAttributeUIMode> *)&pUVar13->_padding_;
  if (pUVar13 == (UWeldMeshEdgesOperatorFactory *)0x0) {
    pTVar24 = pTVar19;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar14,pUVar15,(IDynamicMeshOperatorFactory *)pTVar24)
  ;
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  UPreviewMesh::SetTransform
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             &local_f8);
  UPreviewMesh::SetTangentsMode
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             ExternallyProvided);
  UPreviewMesh::UpdatePreview
            ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             pTVar2->Object,FullUpdate,AllVertexAttribs);
  UE::ToolTarget::GetMaterialSet(&local_740,(UToolTarget *)this->_padding_,false);
  pUVar14 = (this->PreviewCompute).field0_0x0.DebugPtr;
  pUVar16 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar17 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar16);
  _Src.Data = local_740.Materials.AllocatorInstance.Data;
  local_778.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_740.Materials.ArrayNum == 0) {
    local_778.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_740.Materials.ArrayNum,0,&local_778.AllocatorInstance,
               local_740.Materials.ArrayNum,&local_778.ArrayMax);
    memcpy(local_778.AllocatorInstance.Data,_Src.Data,(longlong)local_740.Materials.ArrayNum << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar14,&local_778,pUVar17,(UMaterialInterface *)0x0);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility
            ((this->PreviewCompute).field0_0x0.DebugPtr,true);
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = UWeldMeshEdgesToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_228,pUVar12);
  local_228._8_8_ = this;
  pUVar18 = (UWeldMeshEdgesToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_228);
  if (local_228._64_8_ != 0) {
    plVar22 = (longlong *)(local_228 + 0x50);
    if ((longlong *)local_228._104_8_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_228._104_8_;
    }
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar18 != (UWeldMeshEdgesToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar18;
  pcVar5 = *(code **)(pUVar18->_padding_ + 0x2b8);
  ::FString::FString(&local_6e8,L"");
  (*pcVar5)(pUVar18,this,&local_6e8);
  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->Settings).field0_0x0.DebugPtr);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_678 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_660 = 0;
  local_688[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_2>,void,float_const_&>
                 ::Call;
  local_670 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->Tolerance,
             (TFunction<void___cdecl(float_const_&)> *)local_688);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_648 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  local_630 = 0;
  local_658[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_3>,void,bool_const_&>
                 ::Call;
  local_640 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->bOnlyUnique,
             (TFunction<void___cdecl(bool_const_&)> *)local_658);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_618 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  local_600 = 0;
  local_628[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_4>,void,bool_const_&>
                 ::Call;
  local_610 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->bResolveTJunctions,
             (TFunction<void___cdecl(bool_const_&)> *)local_628);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_5e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  local_5d0 = 0;
  local_5f8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_5>,void,bool_const_&>
                 ::Call;
  local_5e0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->bSplitBowties,
             (TFunction<void___cdecl(bool_const_&)> *)local_5f8);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_718 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  local_700 = (undefined ***)0x0;
  local_728 = UE::Core::Private::Function::
              TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_6>,void,enum_EWeldMeshEdgesAttributeUIMode_const_&>
              ::Call;
  local_710 = this;
  this_00 = ::operator_new(0xa0);
  if (this_00 != (void *)0x0) {
    local_508[0] = local_728;
    local_4e0 = 0;
    if (local_728 != (code *)0x0) {
      pppuVar23 = &local_718;
      if (local_700 != (undefined ***)0x0) {
        pppuVar23 = local_700;
      }
      (*(code *)**pppuVar23)(pppuVar23,local_508 + 2);
    }
    pTVar19 = FWatchablePropertySet::TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode>::
              TPropertyWatcher<enum_EWeldMeshEdgesAttributeUIMode><enum_EWeldMeshEdgesAttributeUIMode,void>
                        (this_00,&pUVar18->AttrWeldingMode,
                         (TFunction<void___cdecl(EWeldMeshEdgesAttributeUIMode_const_&)> *)local_508
                        );
  }
  iVar8 = (int)pUVar18->_padding_;
  piVar1 = (int *)((longlong)&pUVar18->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar18->_padding_,piVar1);
  }
  *(int *)&pUVar18->_padding_ = iVar8 + 1;
  *(TPropertyWatcher<EWeldMeshEdgesAttributeUIMode> **)(pUVar18->_padding_ + (longlong)iVar8 * 8) =
       pTVar19;
  if (local_728 != (code *)0x0) {
    pppuVar23 = &local_718;
    if (local_700 != (undefined ***)0x0) {
      pppuVar23 = local_700;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_5b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  local_5a0 = 0;
  local_5c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_7>,void,float_const_&>
                 ::Call;
  local_5b0 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->SplitUVThreshold,
             (TFunction<void___cdecl(float_const_&)> *)local_5c8);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_588 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  local_570 = 0;
  local_598[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_8>,void,float_const_&>
                 ::Call;
  local_580 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->SplitColorThreshold,
             (TFunction<void___cdecl(float_const_&)> *)local_598);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_558 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  local_540 = 0;
  local_568[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_9>,void,float_const_&>
                 ::Call;
  local_550 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->SplitNormalThreshold,
             (TFunction<void___cdecl(float_const_&)> *)local_568);
  pUVar18 = (this->Settings).field0_0x0.DebugPtr;
  local_528 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  local_510 = 0;
  local_538[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_10>,void,float_const_&>
                 ::Call;
  local_520 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar18->_padding_,&pUVar18->SplitTangentsThreshold,
             (TFunction<void___cdecl(float_const_&)> *)local_538);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1a8,pUVar12);
  local_1a8._8_8_ = this;
  this_01 = (UMeshElementsVisualizer *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
  if (local_1a8._64_8_ != 0) {
    plVar22 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UMeshElementsVisualizer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = this_01;
  pTVar20 = UPreviewMesh::GetTransform
                      ((((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.
                       DebugPtr,&local_98);
  pUVar3 = (((this->PreviewCompute).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr;
  pUVar15 = (UWorld *)(**(code **)(*(longlong *)pUVar3 + 0x180))(pUVar3);
  UPreviewGeometry::CreateInWorld((UPreviewGeometry *)this_01,pUVar15,pTVar20);
  pUVar4 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar4 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7957004636185951988>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\WeldMeshEdgesTool.cpp"
                       ,0x10c,"MeshElementsDisplay->Settings");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pUVar4->bShowUVSeams = false;
    ((((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
    bShowNormalSeams = false;
    ((((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->
    bShowColorSeams = false;
    pUVar4 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
    pcVar5 = *(code **)(pUVar4->_padding_ + 0x2b8);
    ::FString::FString(&local_6d8,L"WeldEdges");
    (*pcVar5)(pUVar4,this,&local_6d8);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x318))
              (this,(((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.
                    DebugPtr);
  }
  local_118 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UWeldMeshEdgesTool::Setup'::`2'::<lambda_11>,1,0>::_vftable_;
  local_100 = (undefined ***)0x0;
  local_128[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWeldMeshEdgesTool::Setup'::__l2::<lambda_11>,void,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>_>
                 ::Call;
  local_110 = this;
  UMeshElementsVisualizer::SetMeshAccessFunction
            ((this->MeshElementsDisplay).field0_0x0.DebugPtr,
             (TUniqueFunction<void___cdecl(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>)>
              *)local_128);
  if (local_128[0] != (code *)0x0) {
    pppuVar23 = &local_118;
    if (local_100 != (undefined ***)0x0) {
      pppuVar23 = local_100;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  local_750 = this;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_12>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((this->PreviewCompute).field0_0x0.DebugPtr)->OnMeshUpdated,&local_6c8);
  local_748 = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_UWeldMeshEdgesTool::Setup_::__l2::<lambda_13>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((this->PreviewCompute).field0_0x0.DebugPtr)->OnOpCompleted,&local_6c0);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->PreviewCompute).field0_0x0.DebugPtr);
  pcVar5 = *(code **)(this->_padding_ + 0x380);
  pFVar21 = FText::AsLocalizable_Advanced_LocText
                      (&local_6a8,L"UWeldMeshEdgesTool",L"ToolName",L"Weld Edges");
  (*pcVar5)(this,pFVar21);
  if (local_6a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6a8.TextData.Reference + 0x10))();
  }
  plVar22 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar5 = *(code **)(*plVar22 + 0x360);
  pFVar21 = FText::AsLocalizable_Advanced_LocText
                      (&local_698,L"UWeldMeshEdgesTool",L"WeldMeshEdgesToolDescription",
                       L"Weld overlapping/identical border edges of the selected Mesh, by merging the vertices."
                      );
  (*pcVar5)(plVar22,pFVar21,2);
  if (local_698.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_698.TextData.Reference + 0x10))();
  }
  if (local_740.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_740.Materials.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUWeldMeshEdgesTool @ 14cd815c0

void __cdecl UWeldMeshEdgesTool::StaticRegisterNativesUWeldMeshEdgesTool(void)

{
  return;
}

// UpdateOpParameters @ 14cd84980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UWeldMeshEdgesTool::UpdateOpParameters(UWeldMeshEdgesTool *this,FWeldMeshEdgesOp *param_1)

{
  EWeldMeshEdgesAttributeUIMode EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDynamicMesh3 *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  EWeldAttributeMode EVar5;
  undefined1 auStack_118 [144];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  param_1->bOnlyUnique = ((this->Settings).field0_0x0.DebugPtr)->bOnlyUnique;
  param_1->bResolveTJunctions = ((this->Settings).field0_0x0.DebugPtr)->bResolveTJunctions;
  param_1->bSplitBowties = ((this->Settings).field0_0x0.DebugPtr)->bSplitBowties;
  param_1->Tolerance = (double)((this->Settings).field0_0x0.DebugPtr)->Tolerance;
  EVar1 = ((this->Settings).field0_0x0.DebugPtr)->AttrWeldingMode;
  if (EVar1 != None) {
    if (EVar1 == OnWeldedMeshEdgesOnly) {
      EVar5 = OnWeldedMeshEdgesOnly;
      goto LAB_14cd84a29;
    }
    if (EVar1 == OnFullMesh) {
      EVar5 = OnFullMesh;
      goto LAB_14cd84a29;
    }
  }
  EVar5 = None;
LAB_14cd84a29:
  param_1->WeldAttributeMode = EVar5;
  param_1->SplitUVThreshold = ((this->Settings).field0_0x0.DebugPtr)->SplitUVThreshold;
  param_1->SplitColorThreshold = ((this->Settings).field0_0x0.DebugPtr)->SplitColorThreshold;
  param_1->SplitNormalThreshold = ((this->Settings).field0_0x0.DebugPtr)->SplitNormalThreshold;
  param_1->SplitTangentsThreshold = ((this->Settings).field0_0x0.DebugPtr)->SplitTangentsThreshold;
  pTVar2 = (this->SourceMesh).SharedReferenceCount.ReferenceController;
  pFVar3 = (this->SourceMesh).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (param_1->SourceMesh).SharedReferenceCount.ReferenceController;
  (param_1->SourceMesh).Object = pFVar3;
  (param_1->SourceMesh).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&param_1->SelectedEdges,&this->SelectedEdges);
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

