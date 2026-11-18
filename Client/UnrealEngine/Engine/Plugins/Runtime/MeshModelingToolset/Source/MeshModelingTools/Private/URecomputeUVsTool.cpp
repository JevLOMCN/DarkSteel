// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 25

// StaticClass @ 14cc8f8e0

UClass * __cdecl URecomputeUVsTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecomputeUVsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RecomputeUVsTool",
               &Z_Registration_Info_UClass_URecomputeUVsTool.InnerSingleton,
               StaticRegisterNativesURecomputeUVsTool,0x140,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URecomputeUVsTool>,
               InternalVTableHelperCtorCaller<URecomputeUVsTool>,local_res8,
               USingleSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecomputeUVsTool.InnerSingleton;
}

// URecomputeUVsTool @ 14ccbf4d0

URecomputeUVsTool * __thiscall
URecomputeUVsTool::URecomputeUVsTool(URecomputeUVsTool *this,FVTableHelper *param_1)

{
  USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this,param_1);
  this->bCreateUVLayoutViewOnSetup = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->UVChannelProperties).field0_0x0.DebugPtr = (UMeshUVChannelProperties *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (URecomputeUVsToolProperties *)0x0;
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  (this->MaterialSettings).field0_0x0.DebugPtr = (UExistingMeshMaterialProperties *)0x0;
  (this->UVLayoutView).field0_0x0.DebugPtr = (UUVLayoutPreview *)0x0;
  (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr = (URecomputeUVsOpFactory *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->InputMesh).Object = (FDynamicMesh3 *)0x0;
  (this->InputMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ActiveGroupSet).Object = (FPolygroupSet *)0x0;
  (this->ActiveGroupSet).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// URecomputeUVsTool @ 14ccbf580

URecomputeUVsTool * __thiscall URecomputeUVsTool::URecomputeUVsTool(URecomputeUVsTool *this)

{
  USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this);
  this->bCreateUVLayoutViewOnSetup = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->UVChannelProperties).field0_0x0.DebugPtr = (UMeshUVChannelProperties *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (URecomputeUVsToolProperties *)0x0;
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  (this->MaterialSettings).field0_0x0.DebugPtr = (UExistingMeshMaterialProperties *)0x0;
  (this->UVLayoutView).field0_0x0.DebugPtr = (UUVLayoutPreview *)0x0;
  (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr = (URecomputeUVsOpFactory *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->InputMesh).Object = (FDynamicMesh3 *)0x0;
  (this->InputMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ActiveGroupSet).Object = (FPolygroupSet *)0x0;
  (this->ActiveGroupSet).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~URecomputeUVsTool @ 14ccc4b50

void __thiscall URecomputeUVsTool::~URecomputeUVsTool(URecomputeUVsTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionMeshEditingTool__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveGroupSet).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputMesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  USingleSelectionMeshEditingTool::~USingleSelectionMeshEditingTool
            ((USingleSelectionMeshEditingTool *)this);
  return;
}

// operator() @ 14ccce630

void __thiscall
`URecomputeUVsTool::Setup'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FString local_28;
  FString local_18;
  
  lVar2 = *(longlong *)(*(longlong *)this + 0xe0);
  lVar3 = *(longlong *)(*(longlong *)this + 0xf8);
  this_00 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar2 + 0xc0);
  iVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    (this_00,(FString *)(lVar2 + 0xb0));
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar3 + 0xd0),this_00);
  if ((iVar7 < 0) || (*(int *)(lVar2 + 200) <= iVar7)) {
    pFVar8 = ::FString::FString(&local_28,L"");
    bVar5 = false;
    bVar6 = true;
  }
  else {
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = ::FString::FString(&local_18,
                                (FString *)
                                ((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10));
    bVar5 = true;
    bVar6 = false;
  }
  iVar1 = (pFVar8->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            ((FString *)(lVar3 + 0xc0),(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar7);
  if (bVar6) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ccd3b60

void __thiscall
`URecomputeUVsTool::Setup'::__l2::<lambda_4>::operator()
          (void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int local_res8 [8];
  longlong local_28;
  int *local_20;
  code *local_18;
  longlong *local_10;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x108) != 0) {
    lVar2 = *(longlong *)(lVar1 + 0xe0);
    if (lVar2 == 0) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] =
           TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                     ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar2 + 0xc0),
                      (FString *)(lVar2 + 0xb0));
      if (local_res8[0] == -1) {
        local_res8[0] = 0;
      }
    }
    local_20 = local_res8;
    plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x118) + 0x68);
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`URecomputeUVsTool::OnPreviewMeshUpdated'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = lVar1;
    (**(code **)(*plVar3 + 0x2b0))(plVar3,&local_18);
  }
  if (*(UExistingMeshMaterialProperties **)(lVar1 + 0xf8) == (UExistingMeshMaterialProperties *)0x0)
  {
    return;
  }
  UExistingMeshMaterialProperties::UpdateMaterials
            (*(UExistingMeshMaterialProperties **)(lVar1 + 0xf8));
  return;
}

// CanAccept @ 14cceba70

bool __thiscall URecomputeUVsTool::CanAccept(URecomputeUVsTool *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3a8))();
  if ((cVar1 != '\0') && (((this->Preview).field0_0x0.DebugPtr)->bResultValid != false)) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 14cd01330

UClass * __cdecl URecomputeUVsTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecomputeUVsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RecomputeUVsTool",
               &Z_Registration_Info_UClass_URecomputeUVsTool.InnerSingleton,
               StaticRegisterNativesURecomputeUVsTool,0x140,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<URecomputeUVsTool>,
               InternalVTableHelperCtorCaller<URecomputeUVsTool>,local_res8,
               USingleSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecomputeUVsTool.InnerSingleton;
}

// GetSelectedUVChannel @ 14cd02410

int __thiscall URecomputeUVsTool::GetSelectedUVChannel(URecomputeUVsTool *this)

{
  UMeshUVChannelProperties *pUVar1;
  int iVar2;
  
  pUVar1 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeshUVChannelProperties *)0x0) {
    iVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                      (&pUVar1->UVChannelNamesList,&pUVar1->UVChannel);
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}

// HasAccept @ 14cd03480

bool __thiscall URecomputeUVsTool::HasAccept(URecomputeUVsTool *this)

{
  return true;
}

// HasCancel @ 14cd03520

bool __thiscall URecomputeUVsTool::HasCancel(URecomputeUVsTool *this)

{
  return true;
}

// IsInputSelectionValidOnOutput @ 14cd08730

bool __thiscall URecomputeUVsTool::IsInputSelectionValidOnOutput(URecomputeUVsTool *this)

{
  return true;
}

// OnPreviewMeshUpdated @ 14cd11b50

void __thiscall URecomputeUVsTool::OnPreviewMeshUpdated(URecomputeUVsTool *this)

{
  UMeshUVChannelProperties *pUVar1;
  UPreviewMesh *pUVar2;
  UExistingMeshMaterialProperties *this_00;
  int local_res8 [8];
  URecomputeUVsTool *local_28;
  int *local_20;
  code *local_18;
  URecomputeUVsTool **local_10;
  
  if ((this->UVLayoutView).field0_0x0.DebugPtr != (UUVLayoutPreview *)0x0) {
    pUVar1 = (this->UVChannelProperties).field0_0x0.DebugPtr;
    if (pUVar1 == (UMeshUVChannelProperties *)0x0) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] =
           TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                     (&pUVar1->UVChannelNamesList,&pUVar1->UVChannel);
      if (local_res8[0] == -1) {
        local_res8[0] = 0;
      }
    }
    local_20 = local_res8;
    pUVar2 = (((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`URecomputeUVsTool::OnPreviewMeshUpdated'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = this;
    (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2,&local_18);
  }
  this_00 = (this->MaterialSettings).field0_0x0.DebugPtr;
  if (this_00 == (UExistingMeshMaterialProperties *)0x0) {
    return;
  }
  UExistingMeshMaterialProperties::UpdateMaterials(this_00);
  return;
}

// OnPropertyModified @ 14cd11cb0

void __thiscall
URecomputeUVsTool::OnPropertyModified(URecomputeUVsTool *this,UObject *param_1,FProperty *param_2)

{
  URecomputeUVsToolProperties *pUVar1;
  UMeshUVChannelProperties *pUVar2;
  UExistingMeshMaterialProperties *pUVar3;
  UMeshOpPreviewWithBackgroundCompute *pUVar4;
  bool bVar5;
  UMaterialInstanceDynamic *pUVar6;
  bool bVar7;
  
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  bVar5 = false;
  if (pUVar1 == (URecomputeUVsToolProperties *)0x0) {
    bVar7 = param_1 == (UObject *)0x0;
  }
  else {
    bVar7 = pUVar1 == (URecomputeUVsToolProperties *)param_1;
  }
  if (bVar7) {
LAB_14cd11cf8:
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
    bVar5 = true;
  }
  else {
    pUVar2 = (this->UVChannelProperties).field0_0x0.DebugPtr;
    if (pUVar2 == (UMeshUVChannelProperties *)0x0) {
      bVar7 = param_1 == (UObject *)0x0;
    }
    else {
      bVar7 = pUVar2 == (UMeshUVChannelProperties *)param_1;
    }
    if (bVar7) goto LAB_14cd11cf8;
  }
  pUVar3 = (this->MaterialSettings).field0_0x0.DebugPtr;
  if (pUVar3 == (UExistingMeshMaterialProperties *)0x0) {
    bVar7 = param_1 == (UObject *)0x0;
  }
  else {
    bVar7 = pUVar3 == (UExistingMeshMaterialProperties *)param_1;
  }
  if ((!bVar7) && (!bVar5)) {
    return;
  }
  UExistingMeshMaterialProperties::UpdateMaterials(pUVar3);
  pUVar3 = (this->MaterialSettings).field0_0x0.DebugPtr;
  if (pUVar3->MaterialMode == Checkerboard) {
    pUVar6 = (pUVar3->CheckerMaterial).field0_0x0.DebugPtr;
joined_r0x00014cd11d58:
    if (pUVar6 != (UMaterialInstanceDynamic *)0x0) goto LAB_14cd11d5c;
  }
  else if (pUVar3->MaterialMode == Override) {
    pUVar6 = (UMaterialInstanceDynamic *)(pUVar3->OverrideMaterial).field0_0x0.DebugPtr;
    goto joined_r0x00014cd11d58;
  }
  pUVar6 = (UMaterialInstanceDynamic *)0x0;
LAB_14cd11d5c:
  pUVar4 = (this->Preview).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (pUVar4->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar6;
  return;
}

// OnSelectedGroupLayerChanged @ 14cd12370

void __thiscall URecomputeUVsTool::OnSelectedGroupLayerChanged(URecomputeUVsTool *this)

{
  UpdateActiveGroupLayer(this);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  return;
}

// OnShutdown @ 14cd12da0

void __thiscall URecomputeUVsTool::OnShutdown(URecomputeUVsTool *this,EToolShutdownType param_1)

{
  UUVLayoutPreview *pUVar1;
  UUVLayoutPreviewProperties *pUVar2;
  code *pcVar3;
  UMeshUVChannelProperties *pUVar4;
  URecomputeUVsToolProperties *pUVar5;
  UPolygroupLayersProperties *pUVar6;
  UExistingMeshMaterialProperties *pUVar7;
  bool bVar8;
  longlong lVar9;
  FText *pFVar10;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FDynamicMeshOpResult local_68;
  
  pUVar1 = (this->UVLayoutView).field0_0x0.DebugPtr;
  if (pUVar1 != (UUVLayoutPreview *)0x0) {
    pUVar2 = (pUVar1->Settings).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x2b0);
    ::FString::FString(&local_c8,L"RecomputeUVsTool");
    (*pcVar3)(pUVar2,this,&local_c8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    UUVLayoutPreview::Disconnect((this->UVLayoutView).field0_0x0.DebugPtr);
  }
  pUVar4 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_b8,L"");
  (*pcVar3)(pUVar4,this,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->Settings).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar5->_padding_ + 0x2b0);
  ::FString::FString(&local_a8,L"");
  (*pcVar3)(pUVar5,this,&local_a8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pUVar6 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar6->_padding_ + 0x2b8);
  ::FString::FString(&local_98,L"RecomputeUVsTool");
  (*pcVar3)(pUVar6,this,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pUVar7 = (this->MaterialSettings).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar7->_padding_ + 0x2b0);
  ::FString::FString(&local_88,L"ModelingUVTools");
  (*pcVar3)(pUVar7,this,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
  UMeshOpPreviewWithBackgroundCompute::Shutdown((this->Preview).field0_0x0.DebugPtr,&local_68);
  if (param_1 == Accept) {
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*(longlong *)(lVar9 + 0x28) + 0x10);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"URecomputeUVsTool",L"RecomputeUVs",L"Recompute UVs");
    (*pcVar3)(lVar9 + 0x28,pFVar10);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7200669755877883734>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\RecomputeUVsTool.cpp"
                         ,0xaa,"NewDynamicMesh");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      UE::ToolTarget::CommitDynamicMeshUVUpdate((UToolTarget *)this->_padding_,local_68.Mesh.Ptr);
    }
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
  }
  if ((this->RecomputeUVsOpFactory).field0_0x0.DebugPtr != (URecomputeUVsOpFactory *)0x0) {
    (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr = (URecomputeUVsOpFactory *)0x0;
  }
  if (local_68.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_68.Mesh.Ptr)->_padding_)(local_68.Mesh.Ptr,1);
  }
  return;
}

// OnTick @ 14cd15180

void __thiscall URecomputeUVsTool::OnTick(URecomputeUVsTool *this,float param_1)

{
  UUVLayoutPreview *this_00;
  
  UMeshOpPreviewWithBackgroundCompute::Tick((this->Preview).field0_0x0.DebugPtr,param_1);
  this_00 = (this->UVLayoutView).field0_0x0.DebugPtr;
  if (this_00 != (UUVLayoutPreview *)0x0) {
    UUVLayoutPreview::OnTick(this_00,param_1);
  }
  return;
}

// Render @ 14cd1c230

/* WARNING: Type propagation algorithm not settling */

void __thiscall URecomputeUVsTool::Render(URecomputeUVsTool *this,IToolsContextRenderAPI *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UUVLayoutPreviewProperties *pUVar5;
  UUVLayoutPreview *this_00;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  double *pdVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined1 auStack_f8 [240];
  
  this_00 = (this->UVLayoutView).field0_0x0.DebugPtr;
  if (this_00 == (UUVLayoutPreview *)0x0) {
    return;
  }
  pdVar10 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,auStack_f8);
  dVar1 = pdVar10[1];
  (this_00->CameraState).Position.field0_0x0._s_0.X = *pdVar10;
  (this_00->CameraState).Position.field0_0x0._s_0.Y = dVar1;
  dVar1 = pdVar10[3];
  (this_00->CameraState).Position.field0_0x0._s_0.Z = pdVar10[2];
  *(double *)&(this_00->CameraState).field_0x18 = dVar1;
  dVar1 = pdVar10[5];
  (this_00->CameraState).Orientation.X = pdVar10[4];
  (this_00->CameraState).Orientation.Y = dVar1;
  dVar1 = pdVar10[7];
  (this_00->CameraState).Orientation.Z = pdVar10[6];
  (this_00->CameraState).Orientation.W = dVar1;
  dVar1 = pdVar10[9];
  *(double *)&(this_00->CameraState).HorizontalFOVDegrees = pdVar10[8];
  *(double *)&(this_00->CameraState).AspectRatio = dVar1;
  dVar1 = pdVar10[0xb];
  (this_00->CameraState).DPIScale = pdVar10[10];
  *(double *)&(this_00->CameraState).field_0x58 = dVar1;
  UUVLayoutPreview::RecalculatePosition(this_00);
  pUVar5 = (this_00->Settings).field0_0x0.DebugPtr;
  if (pUVar5->bEnabled != false) {
    dVar1 = (this_00->CurrentWorldFrame).Rotation.field0_0x0._s_0.X;
    dVar12 = (this_00->SourceObjectWorldBounds).Max.field0_0x0._s_0.Y -
             (this_00->SourceObjectWorldBounds).Min.field0_0x0._s_0.Y;
    dVar2 = (this_00->CurrentWorldFrame).Rotation.field0_0x0._s_0.W;
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    dVar3 = (this_00->CurrentWorldFrame).Rotation.field0_0x0._s_0.Y;
    dStack_148 = (this_00->CurrentWorldFrame).Origin.field0_0x0._s_0.X;
    dStack_140 = (this_00->CurrentWorldFrame).Origin.field0_0x0._s_0.Y;
    dVar4 = (this_00->CurrentWorldFrame).Rotation.field0_0x0._s_0.Z;
    dVar6 = dVar4 + dVar4;
    dStack_138 = (this_00->CurrentWorldFrame).Origin.field0_0x0._s_0.Z;
    dVar14 = (double)(float)(dVar12 * (double)pUVar5->Scale);
    dVar13 = dVar3 + dVar3;
    dVar7 = (dVar2 * dVar6 + dVar1 * dVar13) * dVar14;
    dVar8 = (dVar1 * dVar13 - dVar2 * dVar6) * dVar14;
    dVar12 = (__real_3ff0000000000000 - (dVar13 * dVar3 + dVar6 * dVar4)) * dVar14;
    dVar13 = (dVar1 * dVar6 - dVar2 * dVar13) * dVar14;
    dVar2 = ((dVar1 + dVar1) * dVar2 + dVar6 * dVar3) * dVar14;
    dVar14 = (__real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + dVar6 * dVar4)) * dVar14;
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    uVar9 = __real_3f000000;
    dStack_130 = dVar12 + dStack_148;
    dStack_128 = dVar7 + dStack_140;
    dStack_120 = dVar13 + dStack_138;
    (**(code **)(*plVar11 + 0x30))
              (plVar11,&dStack_148,&dStack_130,&FLinearColor::Black,1,__real_3f000000,0,1);
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    dStack_118 = dVar12 + dStack_148;
    dStack_110 = dVar7 + dStack_140;
    dStack_108 = dVar13 + dStack_138;
    dStack_130 = dVar8 + dStack_118;
    dStack_128 = dVar14 + dStack_110;
    dStack_120 = dVar2 + dStack_108;
    (**(code **)(*plVar11 + 0x30))(plVar11,&dStack_118,&dStack_130,&FLinearColor::Black,1,uVar9,0,1)
    ;
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    dStack_118 = dVar8 + dStack_148;
    dStack_130 = dVar12 + dStack_148 + dVar8;
    dStack_128 = dVar7 + dStack_140 + dVar14;
    dStack_110 = dVar14 + dStack_140;
    dStack_120 = dVar13 + dStack_138 + dVar2;
    dStack_108 = dVar2 + dStack_138;
    (**(code **)(*plVar11 + 0x30))(plVar11,&dStack_130,&dStack_118,&FLinearColor::Black,1,uVar9,0,1)
    ;
    plVar11 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    dStack_118 = dVar8 + dStack_148;
    dStack_110 = dVar14 + dStack_140;
    dStack_108 = dVar2 + dStack_138;
    (**(code **)(*plVar11 + 0x30))(plVar11,&dStack_118,&dStack_148,&FLinearColor::Black,1,uVar9,0,1)
    ;
  }
  return;
}

// Setup @ 14cd29410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall URecomputeUVsTool::Setup(URecomputeUVsTool *this)

{
  int *piVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar2;
  FString *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPolygroupSet *pFVar7;
  UPreviewMesh *this_00;
  UUVLayoutPreviewProperties *pUVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ForAnyElementType _Src;
  bool bVar12;
  int iVar13;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar14;
  FDynamicMesh3 *pFVar15;
  UClass *pUVar16;
  URecomputeUVsToolProperties *pUVar17;
  UMeshUVChannelProperties *pUVar18;
  FString *pFVar19;
  TPropertyWatcher<FString> *this_01;
  UMaterialInstanceDynamic *pUVar20;
  UPolygroupLayersProperties *pUVar21;
  UExistingMeshMaterialProperties *pUVar22;
  UObject *pUVar23;
  URecomputeUVsOpFactory *pUVar24;
  TTransform<double> *pTVar25;
  UMeshOpPreviewWithBackgroundCompute *pUVar26;
  UWorld *pUVar27;
  UInteractiveToolManager *pUVar28;
  UMaterialInterface *pUVar29;
  UUVLayoutPreview *pUVar30;
  AActor *pAVar31;
  double *pdVar32;
  FText *pFVar33;
  longlong *plVar34;
  undefined ***pppuVar35;
  UMaterialInstanceDynamic *pUVar36;
  undefined1 auStackY_938 [32];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_8f8;
  FGetMeshParameters local_8e8;
  URecomputeUVsTool *local_8d8;
  FDynamicMesh3 *local_8d0;
  FSharedReferencer<1> local_8c8;
  FComponentMaterialSet local_8c0;
  code *local_8a8;
  undefined **local_898;
  URecomputeUVsTool *local_890;
  undefined ***local_880;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_828;
  FString local_818;
  FString local_808;
  FDynamicMesh3 *local_7f8;
  TReferenceControllerBase<1> *pTStack_7f0;
  FPolygroupSet *local_7e8;
  TReferenceControllerBase<1> *pTStack_7e0;
  FText local_7d8;
  FText local_7c8;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double local_7a0;
  double dStack_798;
  double local_790;
  <lambda_4> local_788 [2];
  code *local_778 [2];
  undefined **local_768;
  URecomputeUVsTool *local_760;
  undefined8 local_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  double local_718;
  double dStack_710;
  double dStack_708;
  double dStack_700;
  TVector<double>_u_0 local_6f8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  code *local_6b8 [2];
  code *local_6a8 [3];
  undefined8 local_690;
  TTransform<double> local_688;
  FDynamicMesh3 local_628;
  undefined1 local_3f8 [128];
  undefined1 local_378 [128];
  undefined1 local_2f8 [128];
  undefined1 local_278 [128];
  undefined1 local_1f8 [128];
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  TTransform<double> local_148;
  undefined1 local_e8 [64];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_938;
  pUVar36 = (UMaterialInstanceDynamic *)0x0;
  iVar13 = 0;
  local_8d8 = (URecomputeUVsTool *)((ulonglong)local_8d8 & 0xffffffff00000000);
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pTVar14 = MakeShared<UE::Geometry::FDynamicMesh3,1>(&local_828);
  local_8c8.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
  local_8d0 = pTVar14->Object;
  if (local_8c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_8c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->InputMesh;
  if (pTVar2 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_8d0) {
    pTVar2->Object = local_8d0;
    local_8d0 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputMesh).SharedReferenceCount,&local_8c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_828.SharedReferenceCount.ReferenceController);
  local_8e8.bHaveRequestLOD = false;
  local_8e8._1_3_ = 0;
  local_8e8.RequestLOD = Default;
  local_8e8.bWantMeshTangents = false;
  local_8e8._9_3_ = 0;
  pFVar15 = UE::ToolTarget::GetDynamicMeshCopy(&local_628,(UToolTarget *)this->_padding_,&local_8e8)
  ;
  if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(pTVar2->Object,pFVar15);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_628);
  UE::ToolTarget::GetMaterialSet(&local_8c0,(UToolTarget *)this->_padding_,false);
  UE::ToolTarget::GetLocalToWorldTransform(&local_148,(UToolTarget *)this->_padding_);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar16 = Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_3f8,pUVar16);
  local_3f8._8_8_ = this;
  pUVar17 = (URecomputeUVsToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3f8);
  if (local_3f8._64_8_ != 0) {
    plVar34 = (longlong *)(local_3f8 + 0x50);
    if ((longlong *)local_3f8._104_8_ != (longlong *)0x0) {
      plVar34 = (longlong *)local_3f8._104_8_;
    }
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (URecomputeUVsToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar17;
  pcVar9 = *(code **)(pUVar17->_padding_ + 0x2b8);
  ::FString::FString(&local_868,L"");
  (*pcVar9)(pUVar17,this,&local_868);
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  ((this->Settings).field0_0x0.DebugPtr)->bUDIMCVAREnabled = false;
  ((this->Settings).field0_0x0.DebugPtr)->bEnableUDIMLayout = false;
  (**(code **)(this->_padding_ + 0x318))(this,(this->Settings).field0_0x0.DebugPtr);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar16 = UMeshUVChannelProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_378,pUVar16);
  local_378._8_8_ = this;
  pUVar18 = (UMeshUVChannelProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_378);
  if (local_378._64_8_ != 0) {
    plVar34 = (longlong *)(local_378 + 0x50);
    if ((longlong *)local_378._104_8_ != (longlong *)0x0) {
      plVar34 = (longlong *)local_378._104_8_;
    }
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar18 != (UMeshUVChannelProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->UVChannelProperties).field0_0x0.DebugPtr = pUVar18;
  pcVar9 = *(code **)(pUVar18->_padding_ + 0x2b8);
  ::FString::FString(&local_858,L"");
  (*pcVar9)(pUVar18,this);
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  pUVar18 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  pFVar4 = (pTVar2->Object->AttributeSet).Ptr;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    iVar13 = (**(code **)(pFVar4->_padding_ + 0xa8))();
  }
  UMeshUVChannelProperties::Initialize(pUVar18,iVar13,false);
  pUVar18 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  pFVar3 = &pUVar18->UVChannel;
  iVar13 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                     (&pUVar18->UVChannelNamesList,pFVar3);
  if (iVar13 == -1) {
    bVar12 = (pUVar18->UVChannelNamesList).ArrayNum < 1;
    if (bVar12) {
      pFVar19 = ::FString::FString(&local_818,L"");
    }
    else {
      pFVar19 = ::FString::FString(&local_808,
                                   (FString *)(pUVar18->UVChannelNamesList).AllocatorInstance.Data);
    }
    if (pFVar3 != pFVar19) {
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
      (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pUVar18->UVChannel).Data.ArrayNum = (pFVar19->Data).ArrayNum;
      (pUVar18->UVChannel).Data.ArrayMax = (pFVar19->Data).ArrayMax;
      (pFVar19->Data).ArrayNum = 0;
      (pFVar19->Data).ArrayMax = 0;
    }
    if ((bVar12) && (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
    if ((!bVar12) && (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  pUVar18 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  local_898 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`URecomputeUVsTool::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_880 = (undefined ***)0x0;
  local_8a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`URecomputeUVsTool::Setup'::__l2::<lambda_1>,void,FString_const_&>
              ::Call;
  local_890 = this;
  this_01 = ::operator_new(0xb0);
  pUVar20 = pUVar36;
  if (this_01 != (TPropertyWatcher<FString> *)0x0) {
    local_6b8[0] = local_8a8;
    local_690 = 0;
    if (local_8a8 != (code *)0x0) {
      pppuVar35 = &local_898;
      if (local_880 != (undefined ***)0x0) {
        pppuVar35 = local_880;
      }
      (*(code *)**pppuVar35)(pppuVar35,local_6b8 + 2);
    }
    pUVar20 = (UMaterialInstanceDynamic *)
              FWatchablePropertySet::TPropertyWatcher<FString>::
              TPropertyWatcher<FString><FString,void>
                        (this_01,&pUVar18->UVChannel,
                         (TFunction<void___cdecl(FString_const_&)> *)local_6b8);
  }
  iVar13 = (int)pUVar18->_padding_;
  piVar1 = (int *)((longlong)&pUVar18->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar18->_padding_,piVar1);
  }
  *(int *)&pUVar18->_padding_ = iVar13 + 1;
  *(UMaterialInstanceDynamic **)(pUVar18->_padding_ + (longlong)iVar13 * 8) = pUVar20;
  if (local_8a8 != (code *)0x0) {
    pppuVar35 = &local_898;
    if (local_880 != (undefined ***)0x0) {
      pppuVar35 = local_880;
    }
    (*(code *)(*pppuVar35)[2])();
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->UVChannelProperties).field0_0x0.DebugPtr);
  pUVar21 = NewObject<UPolygroupLayersProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar21 != (UPolygroupLayersProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = pUVar21;
  pcVar9 = *(code **)(pUVar21->_padding_ + 0x2b8);
  ::FString::FString(&local_848,L"RecomputeUVsTool");
  (*pcVar9)(pUVar21,this,&local_848);
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  UPolygroupLayersProperties::InitializeGroupLayers
            ((this->PolygroupLayerProperties).field0_0x0.DebugPtr,pTVar2->Object);
  pUVar21 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  local_768 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`URecomputeUVsTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_750 = 0;
  local_778[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`URecomputeUVsTool::Setup'::__l2::<lambda_2>,void,FName_const_&>
                 ::Call;
  local_760 = this;
  FWatchablePropertySet::WatchProperty<FName>
            ((FWatchablePropertySet *)&pUVar21->_padding_,&pUVar21->ActiveGroupLayer,
             (TFunction<void___cdecl(FName_const_&)> *)local_778);
  (**(code **)(this->_padding_ + 0x318))(this,(this->PolygroupLayerProperties).field0_0x0.DebugPtr);
  UpdateActiveGroupLayer(this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar16 = UExistingMeshMaterialProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2f8,pUVar16);
  local_2f8._8_8_ = this;
  pUVar22 = (UExistingMeshMaterialProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2f8);
  if (local_2f8._64_8_ != 0) {
    plVar34 = (longlong *)(local_2f8 + 0x50);
    if ((longlong *)local_2f8._104_8_ != (longlong *)0x0) {
      plVar34 = (longlong *)local_2f8._104_8_;
    }
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar22 != (UExistingMeshMaterialProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar22);
  }
  (this->MaterialSettings).field0_0x0.DebugPtr = pUVar22;
  pUVar22->MaterialMode = Checkerboard;
  pUVar22 = (this->MaterialSettings).field0_0x0.DebugPtr;
  pcVar9 = *(code **)(pUVar22->_padding_ + 0x2b8);
  ::FString::FString(&local_838,L"ModelingUVTools");
  (*pcVar9)(pUVar22,this,&local_838);
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->MaterialSettings).field0_0x0.DebugPtr);
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  UExistingMeshMaterialProperties::UpdateMaterials((this->MaterialSettings).field0_0x0.DebugPtr);
  pUVar23 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar23,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar16 = Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_278,pUVar16);
  local_278._8_8_ = pUVar23;
  pUVar24 = (URecomputeUVsOpFactory *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_278);
  if (local_278._64_8_ != 0) {
    plVar34 = (longlong *)(local_278 + 0x50);
    if ((longlong *)local_278._104_8_ != (longlong *)0x0) {
      plVar34 = (longlong *)local_278._104_8_;
    }
    (**(code **)(*plVar34 + 0x10))(plVar34);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar24 != (URecomputeUVsOpFactory *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr = pUVar24;
  pTVar6 = (this->InputMesh).SharedReferenceCount.ReferenceController;
  pFVar15 = pTVar2->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7f8 = (pUVar24->OriginalMesh).Object;
  pTStack_7f0 = (pUVar24->OriginalMesh).SharedReferenceCount.ReferenceController;
  (pUVar24->OriginalMesh).Object = pFVar15;
  (pUVar24->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7f0);
  pTVar6 = (this->ActiveGroupSet).SharedReferenceCount.ReferenceController;
  pUVar24 = (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr;
  pFVar7 = (this->ActiveGroupSet).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7e8 = (pUVar24->InputGroups).Object;
  pTStack_7e0 = (pUVar24->InputGroups).SharedReferenceCount.ReferenceController;
  (pUVar24->InputGroups).Object = pFVar7;
  (pUVar24->InputGroups).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_7e0);
  pUVar24 = (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 = (this->Settings).field0_0x0.DebugPtr, pUVar17 != (URecomputeUVsToolProperties *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (pUVar24->Settings).field0_0x0 = (this->Settings).field0_0x0;
  pTVar25 = UE::ToolTarget::GetLocalToWorldTransform(&local_a8,(UToolTarget *)this->_padding_);
  local_748 = (pTVar25->Rotation).XY.m128d_f64[0];
  dStack_740 = (pTVar25->Rotation).XY.m128d_f64[1];
  local_738 = (pTVar25->Rotation).ZW.m128d_f64[0];
  dStack_730 = (pTVar25->Rotation).ZW.m128d_f64[1];
  local_7b8 = (pTVar25->Translation).XY.m128d_f64[0];
  dStack_7b0 = (pTVar25->Translation).XY.m128d_f64[1];
  local_7a8 = (pTVar25->Translation).ZW.m128d_f64[0];
  dStack_710 = (pTVar25->Scale3D).XY.m128d_f64[0];
  dStack_708 = (pTVar25->Scale3D).XY.m128d_f64[1];
  local_790 = (pTVar25->Scale3D).ZW.m128d_f64[0];
  local_718 = local_7a8;
  dStack_700 = local_790;
  pUVar24 = (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr;
  local_7a0 = dStack_710;
  dStack_798 = dStack_708;
  (pUVar24->TargetTransform).Rotation.field0_0x0._s_0.X = local_748;
  (pUVar24->TargetTransform).Rotation.field0_0x0._s_0.Y = dStack_740;
  (pUVar24->TargetTransform).Rotation.field0_0x0._s_0.Z = local_738;
  (pUVar24->TargetTransform).Rotation.field0_0x0._s_0.W = dStack_730;
  (pUVar24->TargetTransform).Translation.field0_0x0._s_0.X = local_7b8;
  (pUVar24->TargetTransform).Translation.field0_0x0._s_0.Y = dStack_7b0;
  (pUVar24->TargetTransform).Translation.field0_0x0._s_0.Z = local_7a8;
  (pUVar24->TargetTransform).Scale3D.field0_0x0._s_0.X = dStack_710;
  (pUVar24->TargetTransform).Scale3D.field0_0x0._s_0.Y = dStack_708;
  (pUVar24->TargetTransform).Scale3D.field0_0x0._s_0.Z = local_790;
  pUVar24 = (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr;
  local_728 = local_7b8;
  dStack_720 = dStack_7b0;
  local_178 = *(longlong *)&pUVar24->GetSelectedUVChannel;
  uVar11 = *(undefined8 *)&(pUVar24->GetSelectedUVChannel).field_0x8;
  local_168 = *(longlong *)&(pUVar24->GetSelectedUVChannel).field_0x10;
  uStack_160 = *(undefined8 *)&(pUVar24->GetSelectedUVChannel).field_0x18;
  uVar10 = *(undefined8 *)&(pUVar24->GetSelectedUVChannel).field_0x20;
  plStack_150 = *(longlong **)&(pUVar24->GetSelectedUVChannel).field_0x28;
  *(code **)&pUVar24->GetSelectedUVChannel =
       UE::Core::Private::Function::
       TFunctionRefCaller<`URecomputeUVsTool::Setup'::__l2::<lambda_3>,int>::Call;
  *(undefined8 *)&(pUVar24->GetSelectedUVChannel).field_0x8 = uStack_170;
  *(undefined4 *)&(pUVar24->GetSelectedUVChannel).field_0x10 = 0x529794c0;
  *(undefined4 *)&(pUVar24->GetSelectedUVChannel).field_0x14 = 1;
  *(URecomputeUVsTool **)&(pUVar24->GetSelectedUVChannel).field_0x18 = this;
  *(undefined4 *)&(pUVar24->GetSelectedUVChannel).field_0x20 = (undefined4)local_158;
  *(undefined4 *)&(pUVar24->GetSelectedUVChannel).field_0x24 = local_158._4_4_;
  *(undefined4 *)&(pUVar24->GetSelectedUVChannel).field_0x28 = 0;
  *(undefined4 *)&(pUVar24->GetSelectedUVChannel).field_0x2c = 0;
  uStack_170 = uVar11;
  local_158 = uVar10;
  if (local_178 != 0) {
    plVar34 = &local_168;
    if (plStack_150 != (longlong *)0x0) {
      plVar34 = plStack_150;
    }
    (**(code **)(*plVar34 + 0x10))();
  }
  pUVar26 = NewObject<UMeshOpPreviewWithBackgroundCompute>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar26 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar26);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar26;
  pUVar24 = (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr;
  pUVar27 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  pUVar20 = (UMaterialInstanceDynamic *)&pUVar24->_padding_;
  if (pUVar24 == (URecomputeUVsOpFactory *)0x0) {
    pUVar20 = pUVar36;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar26,pUVar27,(IDynamicMeshOperatorFactory *)pUVar20)
  ;
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  UPreviewMesh::SetTangentsMode
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated
            );
  this_00 = (((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr;
  if ((pTVar2->Object == (FDynamicMesh3 *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UPreviewMesh::ReplaceMesh(this_00,pTVar2->Object);
  pUVar26 = (this->Preview).field0_0x0.DebugPtr;
  pUVar28 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar29 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar28);
  _Src.Data = local_8c0.Materials.AllocatorInstance.Data;
  local_8f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_8c0.Materials.ArrayNum == 0) {
    local_8f8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_8c0.Materials.ArrayNum,0,&local_8f8.AllocatorInstance,
               local_8c0.Materials.ArrayNum,&local_8f8.ArrayMax);
    memcpy(local_8f8.AllocatorInstance.Data,_Src.Data,(longlong)local_8c0.Materials.ArrayNum << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar26,&local_8f8,pUVar29,(UMaterialInterface *)0x0);
  UPreviewMesh::SetTransform
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_148);
  local_8d8 = this;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddLambda<_URecomputeUVsTool::Setup_::__l2::<lambda_4>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((this->Preview).field0_0x0.DebugPtr)->OnMeshUpdated,local_788);
  pUVar22 = (this->MaterialSettings).field0_0x0.DebugPtr;
  if (pUVar22->MaterialMode == Checkerboard) {
    pUVar20 = (pUVar22->CheckerMaterial).field0_0x0.DebugPtr;
joined_r0x00014cd29eb3:
    if (pUVar20 != (UMaterialInstanceDynamic *)0x0) goto LAB_14cd29eb8;
  }
  else if (pUVar22->MaterialMode == Override) {
    pUVar20 = (UMaterialInstanceDynamic *)(pUVar22->OverrideMaterial).field0_0x0.DebugPtr;
    goto joined_r0x00014cd29eb3;
  }
  pUVar20 = pUVar36;
LAB_14cd29eb8:
  pUVar26 = (this->Preview).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (pUVar26->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar20;
  if (this->bCreateUVLayoutViewOnSetup != false) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar16 = Z_Construct_UClass_UUVLayoutPreview_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1f8,pUVar16);
    local_1f8._8_8_ = this;
    pUVar30 = (UUVLayoutPreview *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1f8);
    if (local_1f8._64_8_ != 0) {
      plVar34 = (longlong *)(local_1f8 + 0x50);
      if ((longlong *)local_1f8._104_8_ != (longlong *)0x0) {
        plVar34 = (longlong *)local_1f8._104_8_;
      }
      (**(code **)(*plVar34 + 0x10))(plVar34);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UUVLayoutPreview *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar30);
    }
    (this->UVLayoutView).field0_0x0.DebugPtr = pUVar30;
    pUVar27 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
    UUVLayoutPreview::CreateInWorld(pUVar30,pUVar27);
    UUVLayoutPreview::SetSourceMaterials((this->UVLayoutView).field0_0x0.DebugPtr,&local_8c0);
    pUVar30 = (this->UVLayoutView).field0_0x0.DebugPtr;
    pAVar31 = UE::ToolTarget::GetTargetActor((UToolTarget *)this->_padding_);
    pdVar32 = (double *)(**(code **)(pAVar31->_padding_ + 0x670))(pAVar31,local_e8,0,0);
    local_6f8._s_0.X = *pdVar32;
    local_6f8._s_0.Y = pdVar32[1];
    local_6f8._s_0.Z = pdVar32[2];
    dStack_6e0 = pdVar32[3];
    local_6d8 = pdVar32[4];
    dStack_6d0 = pdVar32[5];
    local_6c8 = pdVar32[6];
    local_688.Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
    local_688.Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
    local_688.Rotation.ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
    local_688.Rotation.ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
    local_688.Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
    local_688.Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
    local_688.Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
    local_688.Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
    local_688.Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
    local_688.Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
    local_688.Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
    local_688.Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
    UUVLayoutPreview::SetSourceWorldPosition(pUVar30,&local_688,(TBox<double> *)&local_6f8._s_0);
    ((((this->UVLayoutView).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->bEnabled = false;
    ((((this->UVLayoutView).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->bShowWireframe =
         false;
    pUVar8 = (((this->UVLayoutView).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
    pcVar9 = *(code **)(pUVar8->_padding_ + 0x2b8);
    ::FString::FString(&local_878,L"RecomputeUVsTool");
    (*pcVar9)(pUVar8,this,&local_878);
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
    (**(code **)(this->_padding_ + 0x318))
              (this,(((this->UVLayoutView).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr);
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  pcVar9 = *(code **)(this->_padding_ + 0x380);
  pFVar33 = FText::AsLocalizable_Advanced_LocText
                      (&local_7d8,L"URecomputeUVsTool",L"ToolNameLocal",L"UV Unwrap");
  (*pcVar9)(this,pFVar33);
  if (local_7d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
  }
  plVar34 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar9 = *(code **)(*plVar34 + 0x360);
  pFVar33 = FText::AsLocalizable_Advanced_LocText
                      (&local_7c8,L"URecomputeUVsTool",L"OnStartTool_Regions",
                       L"Generate UVs for PolyGroups or existing UV islands of the mesh using various strategies."
                      );
  (*pcVar9)(plVar34,pFVar33,2);
  if (local_7c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7c8.TextData.Reference + 0x10))();
  }
  if (local_8c0.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Materials.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesURecomputeUVsTool @ 14cd2f2a0

void __cdecl URecomputeUVsTool::StaticRegisterNativesURecomputeUVsTool(void)

{
  return;
}

// UpdateActiveGroupLayer @ 14cd322a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall URecomputeUVsTool::UpdateActiveGroupLayer(URecomputeUVsTool *this)

{
  FDynamicMesh3 *pFVar1;
  FName FVar2;
  URecomputeUVsOpFactory *pUVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar7;
  FSharedReferencer<1> FVar8;
  FPolygroupSet *pFVar9;
  undefined1 local_res8 [8];
  FPolygroupSet *local_48;
  FSharedReferencer<1> FStack_40;
  FPolygroupSet *local_38;
  FSharedReferencer<1> FStack_30;
  FPolygroupSet *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  bVar5 = UPolygroupLayersProperties::HasSelectedPolygroup
                    ((this->PolygroupLayerProperties).field0_0x0.DebugPtr);
  if (bVar5) {
    FVar2 = ((this->PolygroupLayerProperties).field0_0x0.DebugPtr)->ActiveGroupLayer;
    if ((this->InputMesh).Object == (FDynamicMesh3 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar7 = UE::Geometry::FindPolygroupLayerByName((this->InputMesh).Object,FVar2);
    if (pTVar7 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      local_res8[0] = 0;
      `URecomputeUVsTool::UpdateActiveGroupLayer'::__l7::<lambda_1>::operator()(local_res8);
    }
    pFVar1 = (this->InputMesh).Object;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FPolygroupSet *)&DAT_00000010;
      FVar8.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPolygroupSet_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FPolygroupSet::FPolygroupSet((FPolygroupSet *)(pTVar6 + 1),pFVar1,pTVar7);
      pFVar9 = (FPolygroupSet *)(pTVar6 + 1);
      if (pFVar9 == (FPolygroupSet *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      FVar8.ReferenceController = pTVar6;
      local_38 = pFVar9;
    }
    FStack_30.ReferenceController = FVar8.ReferenceController;
    if (&this->ActiveGroupSet != (TSharedPtr<UE::Geometry::FPolygroupSet,1> *)&local_38) {
      (this->ActiveGroupSet).Object = pFVar9;
      local_38 = (FPolygroupSet *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveGroupSet).SharedReferenceCount,&FStack_30);
      FVar8.ReferenceController = FStack_30.ReferenceController;
    }
  }
  else {
    pFVar1 = (this->InputMesh).Object;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_48 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FPolygroupSet *)&DAT_00000010;
      FStack_40.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPolygroupSet_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FPolygroupSet::FPolygroupSet((FPolygroupSet *)(pTVar6 + 1),pFVar1);
      pFVar9 = (FPolygroupSet *)(pTVar6 + 1);
      if (pFVar9 == (FPolygroupSet *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      FStack_40.ReferenceController = pTVar6;
      local_48 = pFVar9;
    }
    FVar8.ReferenceController = FStack_40.ReferenceController;
    if (&this->ActiveGroupSet != (TSharedPtr<UE::Geometry::FPolygroupSet,1> *)&local_48) {
      (this->ActiveGroupSet).Object = pFVar9;
      local_48 = (FPolygroupSet *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveGroupSet).SharedReferenceCount,&FStack_40);
      FVar8.ReferenceController = FStack_40.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pUVar3 = (this->RecomputeUVsOpFactory).field0_0x0.DebugPtr;
  if (pUVar3 != (URecomputeUVsOpFactory *)0x0) {
    pTVar6 = (this->ActiveGroupSet).SharedReferenceCount.ReferenceController;
    pFVar9 = (this->ActiveGroupSet).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = (pUVar3->InputGroups).Object;
    pTStack_20 = (pUVar3->InputGroups).SharedReferenceCount.ReferenceController;
    (pUVar3->InputGroups).Object = pFVar9;
    (pUVar3->InputGroups).SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    return;
  }
  return;
}

// _getUObject @ 14cd3f730

UObject * __thiscall URecomputeUVsTool::_getUObject(URecomputeUVsTool *this)

{
  return (UObject *)&this[-1].Preview;
}

// _getUObject`adjustor{152}' @ 14cd3f73c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   URecomputeUVsTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall URecomputeUVsTool::_getUObject_adjustor_152__(URecomputeUVsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((URecomputeUVsTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{176}' @ 14cd3f750

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   URecomputeUVsTool::_getUObject`adjustor{176}' (void)const __ptr64 */

UObject * __thiscall URecomputeUVsTool::_getUObject_adjustor_176__(URecomputeUVsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((URecomputeUVsTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// operator() @ 150577510

bool __thiscall
`URecomputeUVsTool::UpdateActiveGroupLayer'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7200669755877883673>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7200669755877883673>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

