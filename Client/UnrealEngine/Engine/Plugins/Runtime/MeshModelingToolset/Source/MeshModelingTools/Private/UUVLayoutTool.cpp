// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 25

// StaticClass @ 14cd42230

UClass * __cdecl UUVLayoutTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVLayoutTool",
               &Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton,
               StaticRegisterNativesUUVLayoutTool,0x1a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutTool>,
               InternalVTableHelperCtorCaller<UUVLayoutTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton;
}

// UUVLayoutTool @ 14cd51670

UUVLayoutTool * __thiscall UUVLayoutTool::UUVLayoutTool(UUVLayoutTool *this,FVTableHelper *param_1)

{
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__UMultiSelectionMeshEditingTool__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->Previews).ArrayNum = 0;
  (this->Previews).ArrayMax = 0;
  (this->Factories).ArrayNum = 0;
  (this->Factories).ArrayMax = 0;
  (this->OriginalDynamicMeshes).ArrayNum = 0;
  (this->OriginalDynamicMeshes).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->UVChannelProperties).field0_0x0.DebugPtr = (UMeshUVChannelProperties *)0x0;
  (this->BasicProperties).field0_0x0.DebugPtr = (UUVLayoutProperties *)0x0;
  (this->MaterialSettings).field0_0x0.DebugPtr = (UExistingMeshMaterialProperties *)0x0;
  (this->Previews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->UVLayoutView).field0_0x0.DebugPtr = (UUVLayoutPreview *)0x0;
  return this;
}

// UUVLayoutTool @ 14cd51770

UUVLayoutTool * __thiscall UUVLayoutTool::UUVLayoutTool(UUVLayoutTool *this)

{
  UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__UMultiSelectionMeshEditingTool__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  (this->Previews).ArrayNum = 0;
  (this->Previews).ArrayMax = 0;
  (this->Factories).ArrayNum = 0;
  (this->Factories).ArrayMax = 0;
  (this->OriginalDynamicMeshes).ArrayNum = 0;
  (this->OriginalDynamicMeshes).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->UVChannelProperties).field0_0x0.DebugPtr = (UMeshUVChannelProperties *)0x0;
  (this->BasicProperties).field0_0x0.DebugPtr = (UUVLayoutProperties *)0x0;
  (this->MaterialSettings).field0_0x0.DebugPtr = (UExistingMeshMaterialProperties *)0x0;
  (this->Previews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->UVLayoutView).field0_0x0.DebugPtr = (UUVLayoutPreview *)0x0;
  return this;
}

// ~UUVLayoutTool @ 14cd53900

void __thiscall UUVLayoutTool::~UUVLayoutTool(UUVLayoutTool *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__UMultiSelectionMeshEditingTool__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  DestructItems<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,int>
            ((TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)
             (this->OriginalDynamicMeshes).AllocatorInstance.Data,
             (this->OriginalDynamicMeshes).ArrayNum);
  pFVar1 = (this->OriginalDynamicMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Factories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Previews).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0xe0 = &___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool
            ((UMultiSelectionMeshEditingTool *)this);
  return;
}

// operator() @ 14cd567a0

void __thiscall
`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_2>::operator()
          (void *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  longlong lVar1;
  UUVLayoutPreview *this_00;
  bool bVar2;
  int iVar3;
  FDynamicMesh3 local_238;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 400) != 0) {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
    bVar2 = UMeshOpPreviewWithBackgroundCompute::GetCurrentResultCopy(param_1,&local_238,false);
    if (bVar2) {
      this_00 = *(UUVLayoutPreview **)(lVar1 + 400);
      if (*(UMeshUVChannelProperties **)(lVar1 + 0xe8) == (UMeshUVChannelProperties *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = UMeshUVChannelProperties::GetSelectedChannelIndex
                          (*(UMeshUVChannelProperties **)(lVar1 + 0xe8),true);
      }
      UUVLayoutPreview::UpdateUVMesh(this_00,&local_238,iVar3);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  }
  return;
}

// CanAccept @ 14cd63020

bool __thiscall UUVLayoutTool::CanAccept(UUVLayoutTool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(char *)(*(longlong *)pFVar4 + 0xa1) == '\0') {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  uVar3 = (**(code **)(*(longlong *)this + 0x398))(this);
  return (bool)uVar3;
}

// GenerateAsset @ 14cd6b020

void __thiscall
UUVLayoutTool::GenerateAsset
          (UUVLayoutTool *this,TArray<FDynamicMeshOpResult,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  FDynamicMesh3 *pFVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FText *pFVar6;
  uint uVar7;
  longlong lVar8;
  FText local_28;
  
  lVar5 = (**(code **)(*(longlong *)this + 0x2d8))();
  pcVar1 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x10);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"UUVLayoutTool",L"UVLayoutToolTransactionName",L"UV Layout Tool");
  (*pcVar1)(lVar5 + 0x28,pFVar6);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if ((param_1->ArrayNum != *(int *)&this->field_0xd0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Results.Num() == Targets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\UVLayoutTool.cpp"
                         ,0x13c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar7 = 0;
  if (0 < *(int *)&this->field_0xd0) {
    lVar8 = 0;
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar2 = *(FDynamicMesh3 **)((param_1->AllocatorInstance).Data + lVar5);
      if ((pFVar2 == (FDynamicMesh3 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DynamicMesh != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\UVLayoutTool.cpp"
                             ,0x141,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&this->field_0xd0) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::ToolTarget::CommitDynamicMeshUVUpdate
                (*(UToolTarget **)(lVar8 + *(longlong *)&this->field_0xc8),pFVar2);
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x58;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < *(int *)&this->field_0xd0);
  }
  lVar5 = (**(code **)(*(longlong *)this + 0x2d8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014cd6b201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
  return;
}

// GetPrivateStaticClass @ 14cd6e820

UClass * __cdecl UUVLayoutTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVLayoutTool",
               &Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton,
               StaticRegisterNativesUUVLayoutTool,0x1a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutTool>,
               InternalVTableHelperCtorCaller<UUVLayoutTool>,local_res8,
               UMultiSelectionMeshEditingTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutTool.InnerSingleton;
}

// GetSelectedUVChannel @ 14cd6f140

int __thiscall UUVLayoutTool::GetSelectedUVChannel(UUVLayoutTool *this)

{
  UMeshUVChannelProperties *this_00;
  int iVar1;
  
  this_00 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  if (this_00 != (UMeshUVChannelProperties *)0x0) {
    iVar1 = UMeshUVChannelProperties::GetSelectedChannelIndex(this_00,true);
    return iVar1;
  }
  return 0;
}

// HasAccept @ 14cd6fa50

bool __thiscall UUVLayoutTool::HasAccept(UUVLayoutTool *this)

{
  return true;
}

// HasCancel @ 14cd6fa80

bool __thiscall UUVLayoutTool::HasCancel(UUVLayoutTool *this)

{
  return true;
}

// IsInputSelectionValidOnOutput @ 14cd71b40

bool __thiscall UUVLayoutTool::IsInputSelectionValidOnOutput(UUVLayoutTool *this)

{
  return true;
}

// OnPreviewMeshUpdated @ 14cd75170

void __thiscall
UUVLayoutTool::OnPreviewMeshUpdated
          (UUVLayoutTool *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  UMeshUVChannelProperties *this_00;
  UUVLayoutPreview *this_01;
  bool bVar1;
  int iVar2;
  FDynamicMesh3 local_238;
  
  if ((this->UVLayoutView).field0_0x0.DebugPtr != (UUVLayoutPreview *)0x0) {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
    bVar1 = UMeshOpPreviewWithBackgroundCompute::GetCurrentResultCopy(param_1,&local_238,false);
    if (bVar1) {
      this_00 = (this->UVChannelProperties).field0_0x0.DebugPtr;
      this_01 = (this->UVLayoutView).field0_0x0.DebugPtr;
      if (this_00 == (UMeshUVChannelProperties *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = UMeshUVChannelProperties::GetSelectedChannelIndex(this_00,true);
      }
      UUVLayoutPreview::UpdateUVMesh(this_01,&local_238,iVar2);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  }
  return;
}

// OnPropertyModified @ 14cd75290

void __thiscall
UUVLayoutTool::OnPropertyModified(UUVLayoutTool *this,UObject *param_1,FProperty *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UUVLayoutProperties *pUVar3;
  UMeshUVChannelProperties *pUVar4;
  UExistingMeshMaterialProperties *pUVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->BasicProperties).field0_0x0.DebugPtr;
  if (pUVar3 == (UUVLayoutProperties *)0x0) {
    bVar7 = param_1 == (UObject *)0x0;
  }
  else {
    bVar7 = pUVar3 == (UUVLayoutProperties *)param_1;
  }
  if (!bVar7) {
    pUVar4 = (this->UVChannelProperties).field0_0x0.DebugPtr;
    if (pUVar4 == (UMeshUVChannelProperties *)0x0) {
      bVar7 = param_1 == (UObject *)0x0;
    }
    else {
      bVar7 = pUVar4 == (UMeshUVChannelProperties *)param_1;
    }
    if (!bVar7) {
      pUVar5 = (this->MaterialSettings).field0_0x0.DebugPtr;
      if (pUVar5 == (UExistingMeshMaterialProperties *)0x0) {
        bVar7 = param_1 == (UObject *)0x0;
      }
      else {
        bVar7 = pUVar5 == (UExistingMeshMaterialProperties *)param_1;
      }
      if (!bVar7) {
        return;
      }
      UpdatePreviewMaterial(this);
      return;
    }
  }
  UpdateNumPreviews(this);
  pFVar6 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)pFVar6);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// OnShutdown @ 14cd75520

void __thiscall UUVLayoutTool::OnShutdown(UUVLayoutTool *this,EToolShutdownType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UUVLayoutPreview *pUVar3;
  UUVLayoutPreviewProperties *pUVar4;
  code *pcVar5;
  UUVLayoutProperties *pUVar6;
  UExistingMeshMaterialProperties *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FDynamicMeshOpResult *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res10 [8];
  TArray<FDynamicMeshOpResult,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FDynamicMeshOpResult local_88;
  
  pUVar3 = (this->UVLayoutView).field0_0x0.DebugPtr;
  if (pUVar3 != (UUVLayoutPreview *)0x0) {
    pUVar4 = (pUVar3->Settings).field0_0x0.DebugPtr;
    pcVar5 = *(code **)(pUVar4->_padding_ + 0x2b0);
    ::FString::FString(&local_b8,L"");
    (*pcVar5)(pUVar4,this,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    UUVLayoutPreview::Disconnect((this->UVLayoutView).field0_0x0.DebugPtr);
  }
  pUVar6 = (this->BasicProperties).field0_0x0.DebugPtr;
  pcVar5 = *(code **)(pUVar6->_padding_ + 0x2b0);
  ::FString::FString(&local_a8,L"");
  (*pcVar5)(pUVar6,this,&local_a8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pUVar7 = (this->MaterialSettings).field0_0x0.DebugPtr;
  pcVar5 = *(code **)(pUVar7->_padding_ + 0x2b0);
  ::FString::FString(&local_98,L"");
  (*pcVar5)(pUVar7,this,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  uVar18 = 0;
  uVar17 = uVar18;
  uVar20 = uVar18;
  if (0 < *(int *)&this->field_0xd0) {
    do {
      uVar19 = (uint)uVar20;
      uVar13 = 0;
      if ((int)uVar19 < *(int *)&this->field_0xd0) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::ToolTarget::ShowSourceObject(*(UToolTarget **)(uVar17 + *(longlong *)&this->field_0xc8));
      uVar17 = uVar17 + 8;
      uVar20 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < *(int *)&this->field_0xd0);
  }
  pFVar21 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  pFVar1 = pFVar21 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar21 == pFVar1) break;
    pFVar15 = UMeshOpPreviewWithBackgroundCompute::Shutdown
                        (*(UMeshOpPreviewWithBackgroundCompute **)pFVar21,&local_88);
    iVar14 = local_c8.ArrayNum;
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
    }
    local_c8.ArrayNum = iVar14 + 1;
    pFVar16 = local_c8.AllocatorInstance.Data + (longlong)iVar14 * 0x58;
    *(FDynamicMesh3 **)&pFVar16->field_0x0 = (pFVar15->Mesh).Ptr;
    (pFVar15->Mesh).Ptr = (FDynamicMesh3 *)0x0;
    dVar11 = (pFVar15->Transform).Rotation.field0_0x0._s_0.Y;
    *(double *)(pFVar16 + 8) = (pFVar15->Transform).Rotation.field0_0x0._s_0.X;
    *(double *)(pFVar16 + 0x10) = dVar11;
    dVar11 = (pFVar15->Transform).Rotation.field0_0x0._s_0.W;
    *(double *)(pFVar16 + 0x18) = (pFVar15->Transform).Rotation.field0_0x0._s_0.Z;
    *(double *)(pFVar16 + 0x20) = dVar11;
    dVar11 = (pFVar15->Transform).Translation.field0_0x0._s_0.Y;
    *(double *)(pFVar16 + 0x28) = (pFVar15->Transform).Translation.field0_0x0._s_0.X;
    *(double *)(pFVar16 + 0x30) = dVar11;
    uVar8 = *(undefined4 *)((longlong)&(pFVar15->Transform).Translation.field0_0x0 + 0x14);
    uVar9 = *(undefined4 *)&(pFVar15->Transform).Scale3D.field0_0x0;
    uVar10 = *(undefined4 *)((longlong)&(pFVar15->Transform).Scale3D.field0_0x0 + 4);
    *(undefined4 *)(pFVar16 + 0x38) =
         *(undefined4 *)((longlong)&(pFVar15->Transform).Translation.field0_0x0 + 0x10);
    *(undefined4 *)(pFVar16 + 0x3c) = uVar8;
    *(undefined4 *)(pFVar16 + 0x40) = uVar9;
    *(undefined4 *)(pFVar16 + 0x44) = uVar10;
    uVar8 = *(undefined4 *)((longlong)&(pFVar15->Transform).Scale3D.field0_0x0 + 0xc);
    uVar9 = *(undefined4 *)((longlong)&(pFVar15->Transform).Scale3D.field0_0x0 + 0x10);
    uVar10 = *(undefined4 *)((longlong)&(pFVar15->Transform).Scale3D.field0_0x0 + 0x14);
    *(undefined4 *)(pFVar16 + 0x48) =
         *(undefined4 *)((longlong)&(pFVar15->Transform).Scale3D.field0_0x0 + 8);
    *(undefined4 *)(pFVar16 + 0x4c) = uVar8;
    *(undefined4 *)(pFVar16 + 0x50) = uVar9;
    *(undefined4 *)(pFVar16 + 0x54) = uVar10;
    if (local_88.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
      (**(code **)(local_88.Mesh.Ptr)->_padding_)(local_88.Mesh.Ptr,1);
    }
    pFVar21 = pFVar21 + 8;
  }
  if (param_1 == Accept) {
    GenerateAsset(this,&local_c8);
  }
  uVar17 = uVar18;
  if (0 < *(int *)&this->field_0xd0) {
    do {
      uVar19 = (uint)uVar17;
      uVar13 = 0;
      if ((int)uVar19 < (this->Factories).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)((this->Factories).AllocatorInstance.Data + uVar18) = 0;
      uVar18 = uVar18 + 8;
      uVar17 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < *(int *)&this->field_0xd0);
  }
  DestructItems<FDynamicMeshOpResult,int>
            ((FDynamicMeshOpResult *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FDynamicMeshOpResult *)local_c8.AllocatorInstance.Data != (FDynamicMeshOpResult *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return;
}

// OnTick @ 14cd75d50

void __thiscall UUVLayoutTool::OnTick(UUVLayoutTool *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UUVLayoutPreview *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UMeshOpPreviewWithBackgroundCompute::Tick
              (*(UMeshOpPreviewWithBackgroundCompute **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  this_00 = (this->UVLayoutView).field0_0x0.DebugPtr;
  if (this_00 != (UUVLayoutPreview *)0x0) {
    UUVLayoutPreview::OnTick(this_00,param_1);
  }
  return;
}

// Render @ 14cd7ad50

void __thiscall UUVLayoutTool::Render(UUVLayoutTool *this,IToolsContextRenderAPI *param_1)

{
  UUVLayoutPreview *this_00;
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x398))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,&this->CameraState);
  this_00 = (this->UVLayoutView).field0_0x0.DebugPtr;
  if (this_00 != (UUVLayoutPreview *)0x0) {
    UUVLayoutPreview::Render(this_00,param_1);
  }
  return;
}

// Setup @ 14cd7d340

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

void __thiscall UUVLayoutTool::Setup(UUVLayoutTool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USceneComponent *pUVar3;
  UUVLayoutPreviewProperties *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UMeshUVChannelProperties *pUVar8;
  FMeshDescription *pFVar9;
  UClass *pUVar10;
  UUVLayoutProperties *pUVar11;
  UExistingMeshMaterialProperties *pUVar12;
  UUVLayoutPreview *pUVar13;
  UWorld *pUVar14;
  AActor *pAVar15;
  double *pdVar16;
  FText *pFVar17;
  longlong *plVar18;
  TTransform<double> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  undefined1 local_2a8 [4];
  FGetMeshParameters local_2a4;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FComponentMaterialSet local_258;
  FText local_248;
  FText local_238;
  code *local_228 [2];
  undefined **local_218;
  UUVLayoutTool *local_210;
  undefined8 local_200;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TTransform<double> local_1b8;
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  uVar21 = 0;
  uVar23 = uVar21;
  if (0 < *(int *)&this->field_0xd0) {
    do {
      uVar20 = (uint)uVar21;
      uVar7 = 0;
      if ((int)uVar20 < *(int *)&this->field_0xd0) {
        uVar7 = ~uVar20 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_2b8 = (longlong)(int)uVar20;
        local_2b0 = (longlong)*(int *)&this->field_0xd0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      UE::ToolTarget::HideSourceObject(*(UToolTarget **)(uVar23 + *(longlong *)&this->field_0xc8));
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar23 = uVar23 + 8;
    } while ((int)(uVar20 + 1) < *(int *)&this->field_0xd0);
    if (*(int *)&this->field_0xd0 == 1) {
      pUVar8 = NewObject<UMeshUVChannelProperties>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UMeshUVChannelProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->UVChannelProperties).field0_0x0.DebugPtr = pUVar8;
      pcVar5 = *(code **)(pUVar8->_padding_ + 0x2b8);
      ::FString::FString(&local_298,L"");
      (*pcVar5)(pUVar8,this);
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      pUVar8 = (this->UVChannelProperties).field0_0x0.DebugPtr;
      local_2a4.bHaveRequestLOD = false;
      local_2a4._1_3_ = 0;
      local_2a4.RequestLOD = Default;
      local_2a4.bWantMeshTangents = false;
      local_2a4._9_3_ = 0;
      if (*(int *)&this->field_0xd0 < 1) {
        local_2b8 = 0;
        local_2b0 = (longlong)*(int *)&this->field_0xd0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar9 = UE::ToolTarget::GetMeshDescription
                         ((UToolTarget *)**(undefined8 **)&this->field_0xc8,&local_2a4);
      UMeshUVChannelProperties::Initialize(pUVar8,pFVar9,false);
      UMeshUVChannelProperties::ValidateSelection
                ((this->UVChannelProperties).field0_0x0.DebugPtr,true);
      (**(code **)(*(longlong *)this + 0x318))(this,(this->UVChannelProperties).field0_0x0.DebugPtr)
      ;
      pUVar8 = (this->UVChannelProperties).field0_0x0.DebugPtr;
      local_218 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UUVLayoutTool::Setup'::`7'::<lambda_1>,0,0>::_vftable_;
      local_200 = 0;
      local_228[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UUVLayoutTool::Setup'::__l7::<lambda_1>,void,FString_const_&>
                     ::Call;
      local_210 = this;
      FWatchablePropertySet::WatchProperty<FString>
                ((FWatchablePropertySet *)&pUVar8->_padding_,&pUVar8->UVChannel,
                 (TFunction<void___cdecl(FString_const_&)> *)local_228);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = Z_Construct_UClass_UUVLayoutProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_158,pUVar10);
  local_158._8_8_ = this;
  pUVar11 = (UUVLayoutProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
  if (local_158._64_8_ != 0) {
    plVar18 = (longlong *)(local_158 + 0x50);
    if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_158._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UUVLayoutProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->BasicProperties).field0_0x0.DebugPtr = pUVar11;
  pcVar5 = *(code **)(pUVar11->_padding_ + 0x2b8);
  ::FString::FString(&local_288,L"");
  (*pcVar5)(pUVar11,this,&local_288);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  ((this->BasicProperties).field0_0x0.DebugPtr)->bUDIMCVAREnabled = false;
  ((this->BasicProperties).field0_0x0.DebugPtr)->bEnableUDIMLayout = false;
  (**(code **)(*(longlong *)this + 0x318))(this,(this->BasicProperties).field0_0x0.DebugPtr);
  pUVar12 = NewObject<UExistingMeshMaterialProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UExistingMeshMaterialProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->MaterialSettings).field0_0x0.DebugPtr = pUVar12;
  pcVar5 = *(code **)(pUVar12->_padding_ + 0x2b8);
  ::FString::FString(&local_278,L"");
  (*pcVar5)(pUVar12,this);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)this + 0x318))(this,(this->MaterialSettings).field0_0x0.DebugPtr);
  if (*(int *)&this->field_0xd0 == 1) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UUVLayoutPreview_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar10);
    local_d8._8_8_ = this;
    pUVar13 = (UUVLayoutPreview *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar18 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UUVLayoutPreview *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->UVLayoutView).field0_0x0.DebugPtr = pUVar13;
    pUVar14 = (UWorld *)(**(code **)(*(longlong *)this + 0x3b0))(this);
    UUVLayoutPreview::CreateInWorld(pUVar13,pUVar14);
    if (*(int *)&this->field_0xd0 < 1) {
      local_2b8 = 0;
      local_2b0 = (longlong)*(int *)&this->field_0xd0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UE::ToolTarget::GetMaterialSet
              (&local_258,(UToolTarget *)**(undefined8 **)&this->field_0xc8,false);
    UUVLayoutPreview::SetSourceMaterials((this->UVLayoutView).field0_0x0.DebugPtr,&local_258);
    if (*(int *)&this->field_0xd0 < 1) {
      local_2b8 = 0;
      local_2b0 = (longlong)*(int *)&this->field_0xd0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar15 = UE::ToolTarget::GetTargetActor((UToolTarget *)**(undefined8 **)&this->field_0xc8);
    pUVar13 = (this->UVLayoutView).field0_0x0.DebugPtr;
    pdVar16 = (double *)(**(code **)(pAVar15->_padding_ + 0x670))(pAVar15,local_58,0,0);
    pUVar3 = (pAVar15->RootComponent).field0_0x0.DebugPtr;
    if (pUVar3 == (USceneComponent *)0x0) {
      pTVar19 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar19 = &pUVar3->ComponentToWorld;
    }
    local_1f8._s_0.X = *pdVar16;
    local_1f8._s_0.Y = pdVar16[1];
    local_1f8._s_0.Z = pdVar16[2];
    dStack_1e0 = pdVar16[3];
    local_1d8 = pdVar16[4];
    dStack_1d0 = pdVar16[5];
    local_1c8 = pdVar16[6];
    local_1b8.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
    local_1b8.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
    local_1b8.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
    local_1b8.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
    local_1b8.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
    local_1b8.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
    local_1b8.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
    local_1b8.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
    local_1b8.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
    local_1b8.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
    local_1b8.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
    local_1b8.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
    UUVLayoutPreview::SetSourceWorldPosition(pUVar13,&local_1b8,(TBox<double> *)&local_1f8._s_0);
    pUVar4 = (((this->UVLayoutView).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
    pcVar5 = *(code **)(pUVar4->_padding_ + 0x2b8);
    ::FString::FString(&local_268,L"");
    (*pcVar5)(pUVar4,this,&local_268);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)this + 0x318))
              (this,(((this->UVLayoutView).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr);
    if (local_258.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Materials.AllocatorInstance.Data);
    }
  }
  UpdatePreviewMaterial(this);
  pFVar22 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar1 = pFVar22 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_2a8);
    }
    if (pFVar22 == pFVar1) break;
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)pFVar22);
    pFVar22 = pFVar22 + 8;
  }
  pcVar5 = *(code **)(*(longlong *)this + 0x380);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_248,L"UUVLayoutTool",L"ToolName",L"UV Layout");
  (*pcVar5)(this,pFVar17);
  if (local_248.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
  }
  plVar18 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pcVar5 = *(code **)(*plVar18 + 0x360);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_238,L"UUVLayoutTool",L"OnStartUVLayoutTool",
                       L"Transform/Rotate/Scale existing UV Charts using various strategies");
  (*pcVar5)(plVar18,pFVar17,2);
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUUVLayoutTool @ 14cd81510

void __cdecl UUVLayoutTool::StaticRegisterNativesUUVLayoutTool(void)

{
  return;
}

// UpdateNumPreviews @ 14cd83830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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

void __thiscall UUVLayoutTool::UpdateNumPreviews(UUVLayoutTool *this)

{
  int *piVar1;
  TArray<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UUVLayoutOperatorFactory>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  longlong lVar5;
  UUVLayoutProperties *pUVar6;
  FName FVar7;
  UMeshOpPreviewWithBackgroundCompute *this_00;
  UPreviewMesh *pUVar8;
  code *pcVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  longlong lVar23;
  undefined8 uVar24;
  UUVLayoutTool *pUVar25;
  TReferenceControllerBase<1> *pTVar26;
  TReferenceControllerBase<1> *pTVar27;
  TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_> *pTVar28;
  ForAnyElementType _Src;
  bool bVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  TReferenceControllerBase<1> *pTVar34;
  FDynamicMesh3 *pFVar35;
  UObject *pUVar36;
  UClass *pUVar37;
  TTransform<double> *pTVar38;
  FName *pFVar39;
  UWorld *pUVar40;
  UInteractiveToolManager *pUVar41;
  UMaterialInterface *pUVar42;
  FScriptContainerElement *pFVar43;
  longlong *plVar44;
  longlong *plVar45;
  uint uVar46;
  longlong lVar47;
  FSharedReferencer<1> FVar48;
  TReferenceControllerBase<1> *pTVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  TReferenceControllerBase<1> *pTVar52;
  uint uVar53;
  undefined1 auStackY_5b8 [32];
  UObject *local_568;
  TReferenceControllerBase<1> *local_560;
  FSharedReferencer<1> FStack_558;
  uint local_550;
  TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_> *local_548;
  UUVLayoutTool *local_540;
  longlong local_538;
  longlong local_530;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_528;
  FGetMeshParameters local_518;
  UUVLayoutTool *local_508;
  longlong local_500;
  FComponentMaterialSet local_4f8;
  FName local_4e8;
  <lambda_2> local_4e0;
  undefined8 local_4d8;
  TReferenceControllerBase<1> *pTStack_4d0;
  FDynamicMesh3 local_4c8;
  undefined1 local_298 [128];
  undefined1 local_218 [128];
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong *plStack_170;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  uVar32 = *(uint *)&this->field_0xd0;
  piVar1 = &(this->Previews).ArrayNum;
  iVar31 = *piVar1;
  uVar50 = (ulonglong)iVar31;
  lVar47 = (longlong)(int)uVar32;
  local_500 = lVar47;
  if ((int)uVar32 < iVar31) {
    uVar46 = iVar31 - 1;
    pTVar2 = &this->Previews;
    pUVar25 = this;
    for (lVar47 = (longlong)(int)uVar46; local_540 = pUVar25, (int)uVar32 <= lVar47;
        lVar47 = lVar47 + -1) {
      uVar53 = 0;
      if ((int)uVar46 < (this->Previews).ArrayNum) {
        uVar53 = ~uVar46 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UMeshOpPreviewWithBackgroundCompute::Cancel
                (*(UMeshOpPreviewWithBackgroundCompute **)
                  ((pTVar2->AllocatorInstance).Data + lVar47 * 8));
      uVar46 = uVar46 - 1;
      pUVar25 = local_540;
    }
    iVar31 = (this->Previews).ArrayNum;
    if (iVar31 < (int)uVar32) {
      iVar30 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar32 - iVar31,&pTVar2->AllocatorInstance,piVar1,
                          &(this->Previews).ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar30 * 8,0,
             (longlong)(int)(uVar32 - iVar31) << 3);
    }
    else {
      if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
      }
      if ((int)uVar32 < iVar31) {
        uVar46 = iVar31 - uVar32;
        if (((int)(uVar32 | uVar46) < 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar46 != 0) {
          pFVar43 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar32 * 8;
          iVar31 = ((this->Previews).ArrayNum - uVar46) - uVar32;
          if (iVar31 != 0) {
            memmove(pFVar43,pFVar43 + (longlong)(int)uVar46 * 8,(longlong)iVar31 << 3);
          }
          iVar31 = (this->Previews).ArrayNum - uVar46;
          (this->Previews).ArrayNum = iVar31;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,iVar31,&(this->Previews).ArrayMax);
        }
      }
    }
    TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_>::SetNum
              (&pUVar25->OriginalDynamicMeshes,uVar32,Default);
    TArray<TObjectPtr<UUVLayoutOperatorFactory>,TSizedDefaultAllocator<32>_>::SetNum
              (&pUVar25->Factories,uVar32,Default);
  }
  else {
    local_548 = &this->OriginalDynamicMeshes;
    local_540 = this;
    TArray<TSharedPtr<UE::Geometry::FDynamicMesh3,1>,TSizedDefaultAllocator<32>_>::SetNum
              (local_548,uVar32,Default);
    TArray<TObjectPtr<UUVLayoutOperatorFactory>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Factories,uVar32,Default);
    pTVar27 = _UNK_150651568;
    pTVar26 = ___xmm_00000000000000000000000000000010;
    if ((longlong)uVar50 < lVar47) {
      local_538 = uVar50 << 4;
      local_530 = uVar50 * 8;
      uVar51 = uVar50;
      do {
        pTVar34 = ::operator_new(0x240);
        FVar48.ReferenceController = pTVar27;
        pTVar49 = (TReferenceControllerBase<1> *)0x0;
        pTVar52 = pTVar26;
        if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
          pTVar34->SharedReferenceCount = (atomic<int>)0x1;
          pTVar34->WeakReferenceCount = (atomic<int>)0x1;
          pTVar34->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
          ;
          UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(pTVar34 + 1));
          if ((pTVar34 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar29)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          LOCK();
          pTVar34->SharedReferenceCount = (atomic<int>)((int)pTVar34->SharedReferenceCount + 1);
          UNLOCK();
          FVar48.ReferenceController = pTVar34;
          pTVar49 = pTVar34;
          pTVar52 = pTVar34 + 1;
        }
        uVar46 = (uint)uVar51;
        uVar53 = ~uVar46 >> 0x1f;
        uVar32 = 0;
        if ((int)uVar46 < local_548->ArrayNum) {
          uVar32 = uVar53;
        }
        local_560 = pTVar52;
        FStack_558.ReferenceController = FVar48.ReferenceController;
        local_550 = uVar53;
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar43 = (local_548->AllocatorInstance).Data + local_538;
        if (pFVar43 != (FScriptContainerElement *)&local_560) {
          *(TReferenceControllerBase<1> **)pFVar43 = pTVar52;
          local_560 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar43 + 8),&FStack_558);
          FVar48.ReferenceController = FStack_558.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar48.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar49)
        ;
        pUVar25 = local_540;
        local_518.bHaveRequestLOD = false;
        local_518._1_3_ = 0;
        local_518.RequestLOD = Default;
        local_518.bWantMeshTangents = false;
        local_518._9_3_ = 0;
        uVar32 = 0;
        if ((int)uVar46 < *(int *)&local_540->field_0xd0) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar35 = UE::ToolTarget::GetDynamicMeshCopy
                            (&local_4c8,
                             *(UToolTarget **)(*(longlong *)&pUVar25->field_0xc8 + local_530),
                             &local_518);
        uVar32 = 0;
        if ((int)uVar46 < (pUVar25->OriginalDynamicMeshes).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar43 = (pUVar25->OriginalDynamicMeshes).AllocatorInstance.Data + uVar50 * 0x10;
        if ((*(longlong *)pFVar43 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UE::Geometry::FDynamicMesh3::operator=(*(FDynamicMesh3 **)pFVar43,pFVar35);
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_4c8);
        pUVar36 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar36,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar37 = Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_218,pUVar37);
        local_218._8_8_ = pUVar36;
        pUVar36 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_218);
        if (local_218._64_8_ != 0) {
          plVar45 = (longlong *)(local_218 + 0x50);
          if ((longlong *)local_218._104_8_ != (longlong *)0x0) {
            plVar45 = (longlong *)local_218._104_8_;
          }
          (**(code **)(*plVar45 + 0x10))();
        }
        uVar33 = 0;
        uVar32 = uVar33;
        if ((int)uVar46 < (pUVar25->Factories).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar43 = (pUVar25->Factories).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar36 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar36);
        }
        *(UObject **)(pFVar43 + uVar50 * 8) = pUVar36;
        uVar32 = uVar33;
        if ((int)uVar46 < (pUVar25->OriginalDynamicMeshes).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar3 = &pUVar25->Factories;
        pFVar43 = (pUVar25->OriginalDynamicMeshes).AllocatorInstance.Data + uVar50 * 0x10;
        uVar32 = uVar33;
        if ((int)uVar46 < (pUVar25->Factories).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar4 = *(undefined8 *)pFVar43;
        lVar47 = *(longlong *)((pTVar3->AllocatorInstance).Data + uVar50 * 8);
        lVar5 = *(longlong *)(pFVar43 + 8);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        local_4d8 = *(undefined8 *)(lVar47 + 0x88);
        pTStack_4d0 = *(TReferenceControllerBase<1> **)(lVar47 + 0x90);
        *(undefined8 *)(lVar47 + 0x88) = uVar4;
        *(longlong *)(lVar47 + 0x90) = lVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_4d0);
        if ((int)uVar46 < (pUVar25->Factories).ArrayNum) {
          uVar33 = uVar53;
        }
        if ((uVar33 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar47 = *(longlong *)((pTVar3->AllocatorInstance).Data + uVar50 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 = (pUVar25->BasicProperties).field0_0x0.DebugPtr,
           pUVar6 != (UUVLayoutProperties *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        *(TObjectPtr<UUVLayoutProperties>_u_0 *)(lVar47 + 0x30) =
             (pUVar25->BasicProperties).field0_0x0;
        uVar33 = 0;
        uVar32 = uVar33;
        if ((int)uVar46 < *(int *)&pUVar25->field_0xd0) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar38 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_168,
                             *(UToolTarget **)(*(longlong *)&pUVar25->field_0xc8 + uVar50 * 8));
        dVar11 = (pTVar38->Rotation).XY.m128d_f64[0];
        dVar12 = (pTVar38->Rotation).XY.m128d_f64[1];
        dVar13 = (pTVar38->Rotation).ZW.m128d_f64[0];
        dVar14 = (pTVar38->Rotation).ZW.m128d_f64[1];
        dVar15 = (pTVar38->Translation).XY.m128d_f64[0];
        dVar16 = (pTVar38->Translation).XY.m128d_f64[1];
        dVar17 = (pTVar38->Translation).ZW.m128d_f64[0];
        dVar18 = (pTVar38->Translation).ZW.m128d_f64[1];
        dVar19 = (pTVar38->Scale3D).XY.m128d_f64[0];
        dVar20 = (pTVar38->Scale3D).XY.m128d_f64[1];
        dVar21 = (pTVar38->Scale3D).ZW.m128d_f64[0];
        dVar22 = (pTVar38->Scale3D).ZW.m128d_f64[1];
        uVar32 = uVar33;
        if ((int)uVar46 < (pUVar25->Factories).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plStack_170 = (longlong *)0x0;
        uStack_180 = pUVar25;
        lVar47 = *(longlong *)((pTVar3->AllocatorInstance).Data + uVar50 * 8);
        local_188 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UUVLayoutTool::UpdateNumPreviews'::`11'::<lambda_1>,1,0>
                     ::_vftable_;
        local_198 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UUVLayoutTool::UpdateNumPreviews'::__l11::<lambda_1>,int>::
                    Call;
        *(double *)(lVar47 + 0xd0) = dVar11;
        *(double *)(lVar47 + 0xd8) = dVar12;
        *(double *)(lVar47 + 0xe0) = dVar13;
        *(double *)(lVar47 + 0xe8) = dVar14;
        *(double *)(lVar47 + 0xf0) = dVar15;
        *(double *)(lVar47 + 0xf8) = dVar16;
        *(double *)(lVar47 + 0x100) = dVar17;
        *(double *)(lVar47 + 0x108) = dVar18;
        *(double *)(lVar47 + 0x110) = dVar19;
        *(double *)(lVar47 + 0x118) = dVar20;
        *(double *)(lVar47 + 0x120) = dVar21;
        *(double *)(lVar47 + 0x128) = dVar22;
        uVar32 = uVar33;
        if ((int)uVar46 < (pUVar25->Factories).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar47 = *(longlong *)((pTVar3->AllocatorInstance).Data + uVar50 * 8);
        lVar5 = *(longlong *)(lVar47 + 0xa0);
        uVar10 = *(undefined8 *)(lVar47 + 0xa8);
        lVar23 = *(longlong *)(lVar47 + 0xb0);
        uVar24 = *(undefined8 *)(lVar47 + 0xb8);
        uVar4 = *(undefined8 *)(lVar47 + 0xc0);
        plVar45 = *(longlong **)(lVar47 + 200);
        *(longlong *)(lVar47 + 0xa0) = (longlong)local_198;
        *(undefined8 *)(lVar47 + 0xa8) = uStack_190;
        *(undefined4 *)(lVar47 + 0xb0) = (undefined4)local_188;
        *(undefined4 *)(lVar47 + 0xb4) = local_188._4_4_;
        *(undefined4 *)(lVar47 + 0xb8) = (undefined4)uStack_180;
        *(undefined4 *)(lVar47 + 0xbc) = uStack_180._4_4_;
        *(undefined8 *)(lVar47 + 0xc0) = local_178;
        *(longlong **)(lVar47 + 200) = plStack_170;
        local_198 = (code *)lVar5;
        uStack_190 = uVar10;
        local_188 = (undefined **)lVar23;
        uStack_180 = (UUVLayoutTool *)uVar24;
        local_178 = uVar4;
        plStack_170 = plVar45;
        if (lVar5 != 0) {
          plVar44 = &local_188;
          if (plVar45 != (longlong *)0x0) {
            plVar44 = plVar45;
          }
          (**(code **)(*plVar44 + 0x10))();
        }
        pFVar39 = ::FName::FName(&local_4e8,"Preview");
        FVar7 = *pFVar39;
        uVar32 = uVar33;
        if ((int)uVar46 < (pUVar25->Factories).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar36 = *(UObject **)((pUVar25->Factories).AllocatorInstance.Data + uVar50 * 8);
        if (FVar7 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    (pUVar36,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar37 = Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_298,pUVar37);
        local_298._48_8_ = (FObjectInstancingGraph *)0x0;
        local_298._56_8_ = (UPackage *)0x0;
        local_298._24_4_ = RF_NoFlags;
        local_298._40_8_ = (UObject *)0x0;
        local_298[0x20] = false;
        local_298._8_8_ = pUVar36;
        local_298._16_8_ = FVar7;
        pUVar36 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_298);
        if (local_298._64_8_ != 0) {
          plVar45 = (longlong *)(local_298 + 0x50);
          if ((longlong *)local_298._104_8_ != (longlong *)0x0) {
            plVar45 = (longlong *)local_298._104_8_;
          }
          (**(code **)(*plVar45 + 0x10))();
        }
        local_568 = pUVar36;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar36 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar36);
        }
        pTVar2 = &pUVar25->Previews;
        pFVar43 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar43 <= (FScriptContainerElement *)&local_568) &&
            ((FScriptContainerElement *)&local_568 <
             pFVar43 + (longlong)(pUVar25->Previews).ArrayMax * 8)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar31 = (pUVar25->Previews).ArrayNum;
        if (iVar31 == (pUVar25->Previews).ArrayMax) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,&(pUVar25->Previews).ArrayMax);
        }
        (pUVar25->Previews).ArrayNum = iVar31 + 1;
        pFVar43 = (pTVar2->AllocatorInstance).Data + (longlong)iVar31 * 8;
        *(UObject **)pFVar43 = local_568;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_568 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_568);
        }
        this_00 = *(UMeshOpPreviewWithBackgroundCompute **)pFVar43;
        uVar32 = uVar33;
        if ((int)uVar46 < (pUVar25->Factories).ArrayNum) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar47 = *(longlong *)((pUVar25->Factories).AllocatorInstance.Data + uVar50 * 8);
        pTVar49 = (TReferenceControllerBase<1> *)(lVar47 + 0x28);
        if (lVar47 == 0) {
          pTVar49 = (TReferenceControllerBase<1> *)0x0;
        }
        pUVar40 = (UWorld *)(**(code **)(*(longlong *)pUVar25 + 0x3b0))(pUVar25);
        UMeshOpPreviewWithBackgroundCompute::Setup
                  (this_00,pUVar40,(IDynamicMeshOperatorFactory *)pTVar49);
        uVar32 = uVar33;
        if ((int)uVar46 < *(int *)&pUVar25->field_0xd0) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        ToolSetupUtil::ApplyRenderingConfigurationToPreview
                  ((this_00->PreviewMesh).field0_0x0.DebugPtr,
                   *(UToolTarget **)(*(longlong *)&pUVar25->field_0xc8 + uVar50 * 8));
        uVar32 = uVar33;
        if ((int)uVar46 < *(int *)&pUVar25->field_0xd0) {
          uVar32 = uVar53;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UE::ToolTarget::GetMaterialSet
                  (&local_4f8,*(UToolTarget **)(*(longlong *)&pUVar25->field_0xc8 + uVar50 * 8),
                   false);
        pUVar41 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar25 + 0x2d8))(pUVar25);
        pUVar42 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar41);
        _Src.Data = local_4f8.Materials.AllocatorInstance.Data;
        local_528.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar31 = local_4f8.Materials.ArrayNum;
        local_528.ArrayNum = iVar31;
        if (iVar31 == 0) {
          local_528.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar31,0,&local_528.AllocatorInstance,iVar31,&local_528.ArrayMax);
          memcpy(local_528.AllocatorInstance.Data,_Src.Data,(longlong)iVar31 << 3);
        }
        UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
                  (this_00,&local_528,pUVar42,(UMaterialInterface *)0x0);
        pTVar28 = local_548;
        uVar32 = local_550;
        pUVar8 = (this_00->PreviewMesh).field0_0x0.DebugPtr;
        uVar53 = uVar33;
        if ((int)uVar46 < local_548->ArrayNum) {
          uVar53 = local_550;
        }
        if ((uVar53 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UPreviewMesh::UpdatePreview
                  (pUVar8,*(FDynamicMesh3 **)((pTVar28->AllocatorInstance).Data + uVar50 * 0x10),
                   FullUpdate,AllVertexAttribs);
        pUVar25 = local_540;
        pUVar8 = (this_00->PreviewMesh).field0_0x0.DebugPtr;
        if ((int)uVar46 < *(int *)&local_540->field_0xd0) {
          uVar33 = uVar32;
        }
        if ((uVar33 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar38 = UE::ToolTarget::GetLocalToWorldTransform
                            (&local_108,
                             *(UToolTarget **)(*(longlong *)&pUVar25->field_0xc8 + uVar50 * 8));
        UPreviewMesh::SetTransform(pUVar8,pTVar38);
        local_508 = pUVar25;
        TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
        ::AddLambda<_UUVLayoutTool::UpdateNumPreviews_::__l11::<lambda_2>_>
                  ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
                    *)&this_00->OnMeshUpdated,&local_4e0);
        UMeshOpPreviewWithBackgroundCompute::SetVisibility(this_00,true);
        if (local_4f8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.Materials.AllocatorInstance.Data);
        }
        local_538 = local_538 + 0x10;
        local_530 = local_530 + 8;
        uVar51 = (ulonglong)(uVar46 + 1);
        uVar50 = uVar50 + 1;
      } while ((longlong)uVar50 < local_500);
    }
  }
  return;
}

// UpdatePreviewMaterial @ 14cd84f10

void __thiscall UUVLayoutTool::UpdatePreviewMaterial(UUVLayoutTool *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  UExistingMeshMaterialProperties::UpdateMaterials((this->MaterialSettings).field0_0x0.DebugPtr);
  UpdateNumPreviews(this);
  uVar6 = 0;
  if (0 < (this->Previews).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Previews).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Previews).AllocatorInstance.Data + lVar7);
      pUVar5 = UExistingMeshMaterialProperties::GetActiveOverrideMaterial
                         ((this->MaterialSettings).field0_0x0.DebugPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      uVar6 = uVar6 + 1;
      *(UMaterialInterface **)(lVar1 + 0x80) = pUVar5;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Previews).ArrayNum);
  }
  return;
}

// UpdateVisualization @ 14cd85ae0

void __thiscall UUVLayoutTool::UpdateVisualization(UUVLayoutTool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UpdatePreviewMaterial(this);
  pFVar3 = (this->Previews).AllocatorInstance.Data;
  iVar2 = (this->Previews).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Previews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMeshOpPreviewWithBackgroundCompute>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// _getUObject @ 14cd868a0

UObject * __thiscall UUVLayoutTool::_getUObject(UUVLayoutTool *this)

{
  return (UObject *)&this[-1].CameraState.AspectRatio;
}

// _getUObject`adjustor{152}' @ 14cd868ac

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UUVLayoutTool::_getUObject`adjustor{152}'
   (void)const __ptr64 */

UObject * __thiscall UUVLayoutTool::_getUObject_adjustor_152__(UUVLayoutTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UUVLayoutTool *)&this[-1].Previews.ArrayNum);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{184}' @ 14cd868c0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UUVLayoutTool::_getUObject`adjustor{184}'
   (void)const __ptr64 */

UObject * __thiscall UUVLayoutTool::_getUObject_adjustor_184__(UUVLayoutTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UUVLayoutTool *)&this[-1].UVChannelProperties);
  return (UObject *)pUVar1;
}

