// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 66

// StaticClass @ 14caaf430

UClass * __cdecl UPreviewMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewMesh",
               &Z_Registration_Info_UClass_UPreviewMesh.InnerSingleton,
               StaticRegisterNativesUPreviewMesh,0x130,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPreviewMesh>,
               InternalVTableHelperCtorCaller<UPreviewMesh>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewMesh.InnerSingleton;
}

// UPreviewMesh @ 14caceeb0

UPreviewMesh * __thiscall UPreviewMesh::UPreviewMesh(UPreviewMesh *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  this->TemporaryParentActor = (APreviewMeshActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshAABBTree);
  this->bDecompositionEnabled = false;
  return this;
}

// UPreviewMesh @ 14cacef20

UPreviewMesh * __thiscall UPreviewMesh::UPreviewMesh(UPreviewMesh *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  this->TemporaryParentActor = (APreviewMeshActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshAABBTree);
  this->bDecompositionEnabled = false;
  this->bBuildSpatialDataStructure = false;
  return this;
}

// ~UPreviewMesh @ 14cad2980

void __thiscall UPreviewMesh::~UPreviewMesh(UPreviewMesh *this)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMeshVertexCommandChangeTarget__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IMeshCommandChangeTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IMeshReplacementCommandChangeTarget__;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x20,L"You must explicitly Disconnect() PreviewMesh before it is GCd");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->TemporaryParentActor != (APreviewMeshActor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TemporaryParentActor == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x21,L"You must explicitly Disconnect() PreviewMesh before it is GCd");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshAABBTree);
  *(undefined ***)&this->field_0x38 = &___7IMeshReplacementCommandChangeTarget__6B_;
  *(undefined ***)&this->field_0x30 = &___7IMeshCommandChangeTarget__6B_;
  *(undefined ***)&this->field_0x28 = &___7IMeshVertexCommandChangeTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyChange @ 14caeb190

void __thiscall UPreviewMesh::ApplyChange(UPreviewMesh *this,FMeshChange *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x273,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar5 = (longlong *)(*(longlong *)&this->field_0x20 + 0x5a0);
  (**(code **)(*plVar5 + 0x10))(plVar5,param_1,param_2);
  if (this->field_0x10 != '\0') {
    uVar3 = (**(code **)(**(longlong **)&this->field_0x20 + 0xb38))();
    *(undefined8 *)&this->bBuildSpatialDataStructure = 0;
    *(undefined8 *)&this->field_0x38 = uVar3;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x30,false);
    uVar4 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)&this->field_0x38);
    *(ulong64 *)&this->bBuildSpatialDataStructure = uVar4;
  }
  if (*(char *)&(this->MeshAABBTree).BoxExtents.Blocks.AllocatorInstance.Data != '\0') {
    UpdateRenderMeshDecomposition((UPreviewMesh *)&this[-1].MeshAABBTree.IndexList);
  }
  NotifyWorldPathTracedOutputInvalidated((UPreviewMesh *)&this[-1].MeshAABBTree.IndexList);
  return;
}

// ApplyChange @ 14caeb260

void __thiscall
UPreviewMesh::ApplyChange(UPreviewMesh *this,FMeshReplacementChange *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->field_0x18 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x282,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar5 = (longlong *)(*(longlong *)&this->field_0x18 + 0x5a8);
  (**(code **)(*plVar5 + 0x10))(plVar5,param_1,param_2);
  if (this->field_0x8 != '\0') {
    uVar3 = (**(code **)(**(longlong **)&this->field_0x18 + 0xb38))();
    *(undefined8 *)&this->field_0x38 = 0;
    *(undefined8 *)&this->field_0x30 = uVar3;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x28,false);
    uVar4 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)&this->field_0x30);
    *(ulong64 *)&this->field_0x38 = uVar4;
  }
  if ((char)(this->MeshAABBTree).BoxExtents.CurBlock != '\0') {
    UpdateRenderMeshDecomposition((UPreviewMesh *)&this[-1].MeshAABBTree.BoxExtents.Blocks.ArrayNum)
    ;
  }
  NotifyWorldPathTracedOutputInvalidated
            ((UPreviewMesh *)&this[-1].MeshAABBTree.BoxExtents.Blocks.ArrayNum);
  return;
}

// ApplyChange @ 14caeb330

void __thiscall
UPreviewMesh::ApplyChange(UPreviewMesh *this,FMeshVertexChange *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  APreviewMeshActor *pAVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x269,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  plVar5 = (longlong *)(*(longlong *)&this->field_0x28 + 0x598);
  (**(code **)(*plVar5 + 0x10))(plVar5,param_1,param_2);
  if (this->field_0x18 != '\0') {
    uVar3 = (**(code **)(**(longlong **)&this->field_0x28 + 0xb38))();
    this->TemporaryParentActor = (APreviewMeshActor *)0x0;
    *(undefined8 *)&this->bBuildSpatialDataStructure = uVar3;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->field_0x38,false);
    pAVar4 = (APreviewMeshActor *)
             UE::Geometry::FDynamicMesh3::GetChangeStamp
                       (*(FDynamicMesh3 **)&this->bBuildSpatialDataStructure);
    this->TemporaryParentActor = pAVar4;
  }
  return;
}

// CalculateTangents @ 14caf0c80

bool __thiscall UPreviewMesh::CalculateTangents(UPreviewMesh *this)

{
  EDynamicMeshComponentTangentsMode EVar1;
  FDynamicMesh3 *pFVar2;
  UDynamicMeshComponent *this_00;
  FDynamicMeshAttributeSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  TMeshTangents<float> *this_01;
  FDynamicMeshAttributeSet *this_02;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  FComputeTangentsOptions local_res8 [4];
  TMeshTangents<float> local_58;
  
  if (((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                         ,0xe6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar8 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb48))();
  if (lVar8 == 0) {
    return false;
  }
  pFVar2 = *(FDynamicMesh3 **)(lVar8 + 0xb8);
  if (pFVar2 == (FDynamicMesh3 *)0x0) {
    return false;
  }
  this_02 = (FDynamicMeshAttributeSet *)0x0;
  local_58.Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Tangents.ArrayNum = 0;
  local_58.Tangents.ArrayMax = 0;
  local_58.Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Bitangents.ArrayNum = 0;
  local_58.Bitangents.ArrayMax = 0;
  local_58.AllDegenerateTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.AllDegenerateTris.ArrayNum = 0;
  local_58.AllDegenerateTris.ArrayMax = 0;
  local_58.Mesh = (FDynamicMesh3 *)0x0;
  this_00 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  EVar1 = this_00->TangentsType;
  if (((EVar1 == Default) || (EVar1 != AutoCalculated)) ||
     (this_01 = UDynamicMeshComponent::GetAutoCalculatedTangents(this_00),
     this_01 == (TMeshTangents<float> *)0x0)) {
    pFVar3 = (pFVar2->AttributeSet).Ptr;
    if (pFVar3 == (FDynamicMeshAttributeSet *)0x0) goto LAB_14caf0e4c;
    iVar7 = (**(code **)(pFVar3->_padding_ + 0xb8))(pFVar3);
    pFVar10 = this_02;
    if ((0 < iVar7) && (0 < (pFVar3->NormalLayers).Array.ArrayNum)) {
      pFVar10 = *(FDynamicMeshAttributeSet **)(pFVar3->NormalLayers).Array.AllocatorInstance.Data;
    }
    iVar7 = (**(code **)(pFVar3->_padding_ + 0xa8))(pFVar3);
    pFVar9 = this_02;
    if ((0 < iVar7) && (0 < (pFVar3->UVLayers).Array.ArrayNum)) {
      pFVar9 = *(FDynamicMeshAttributeSet **)(pFVar3->UVLayers).Array.AllocatorInstance.Data;
    }
    if ((pFVar10 == (FDynamicMeshAttributeSet *)0x0) || (pFVar9 == (FDynamicMeshAttributeSet *)0x0))
    goto LAB_14caf0e4c;
    local_res8[0].bAveraged = true;
    local_res8[0].bAngleWeighted = true;
    UE::Geometry::TMeshTangents<float>::ComputeTriVertexTangents
              (&local_58,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar10,
               (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar9,local_res8);
    this_01 = &local_58;
  }
  pFVar3 = (pFVar2->AttributeSet).Ptr;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    this_02 = pFVar3;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(this_02);
  bVar5 = UE::Geometry::TMeshTangents<float>::CopyToOverlays(this_01,pFVar2);
  if (bVar5) {
    UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,true,false,false);
    NotifyWorldPathTracedOutputInvalidated(this);
    if (local_58.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllDegenerateTris.AllocatorInstance.Data);
    }
    if (local_58.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Bitangents.AllocatorInstance.Data);
    }
    if (local_58.Tangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Tangents.AllocatorInstance.Data);
    }
    return true;
  }
LAB_14caf0e4c:
  if (local_58.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllDegenerateTris.AllocatorInstance.Data);
  }
  if (local_58.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Bitangents.AllocatorInstance.Data);
  }
  if (local_58.Tangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Tangents.AllocatorInstance.Data);
  }
  return false;
}

// ClearOverrideRenderMaterial @ 14caf4750

void __thiscall UPreviewMesh::ClearOverrideRenderMaterial(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x95,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014caf4792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xbf8))();
  return;
}

// ClearOverrideSecondaryWireframeRenderMaterial @ 14caf47a0

void __thiscall UPreviewMesh::ClearOverrideSecondaryWireframeRenderMaterial(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xc2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014caf47e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xc68))();
  return;
}

// ClearOverrideWireframeRenderMaterial @ 14caf47f0

void __thiscall UPreviewMesh::ClearOverrideWireframeRenderMaterial(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xb6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014caf4832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xc48))();
  return;
}

// ClearPreview @ 14caf48f0

void __thiscall UPreviewMesh::ClearPreview(UPreviewMesh *this)

{
  FDynamicMesh3 *pFVar1;
  ulong64 uVar2;
  FDynamicMesh3 local_238;
  
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
  pFVar1 = (FDynamicMesh3 *)
           (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  UE::Geometry::FDynamicMesh3::Copy(pFVar1,&local_238,true,true,true,true);
  if (this->bBuildSpatialDataStructure != false) {
    pFVar1 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = pFVar1;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar2;
  }
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
  if (this->bDecompositionEnabled != false) {
    UpdateRenderMeshDecomposition(this);
  }
  NotifyWorldPathTracedOutputInvalidated(this);
  if (this->bBuildSpatialDataStructure != false) {
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = &local_238;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar2;
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  return;
}

// ClearSecondaryRenderMaterial @ 14caf49f0

void __thiscall UPreviewMesh::ClearSecondaryRenderMaterial(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xaa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014caf4a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xc18))();
  return;
}

// ClearTriangleColorFunction @ 14caf4a80

void __thiscall
UPreviewMesh::ClearTriangleColorFunction(UPreviewMesh *this,ERenderUpdateMode param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014caf4a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xcf0))();
  return;
}

// CreateInWorld @ 14cafe860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPreviewMesh::CreateInWorld(UPreviewMesh *this,UWorld *param_1,TTransform<double> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  APreviewMeshActor *pAVar3;
  FString *pFVar4;
  UDynamicMeshComponent *pUVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_188 [32];
  TRotator<double> local_158;
  FString local_140;
  FString local_130;
  undefined1 local_118 [128];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_158.Roll = 0.0;
  local_158.Pitch = 0.0;
  local_158.Yaw = 0.0;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  pUVar2 = APreviewMeshActor::StaticClass();
  pAVar3 = (APreviewMeshActor *)
           UWorld::SpawnActor(param_1,pUVar2,&UE::Math::TVector<double>::ZeroVector,&local_158,
                              (FActorSpawnParameters *)local_98);
  if (pAVar3 == (APreviewMeshActor *)0x0) {
    pAVar3 = (APreviewMeshActor *)0x0;
  }
  else {
    pUVar2 = APreviewMeshActor::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&pAVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pAVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<APreviewMeshActor>(&local_140);
      pwVar8 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<AActor>(&local_130,(AActor *)pAVar3);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar7);
    }
  }
  this->TemporaryParentActor = pAVar3;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar2);
  local_118._8_8_ = pAVar3;
  pUVar5 = (UDynamicMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar6 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar5;
  UDynamicMeshComponent::SetSceneProxyVerifyUsedMaterials(pUVar5,false);
  AActor::SetRootComponent
            ((AActor *)this->TemporaryParentActor,
             (USceneComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
  UActorComponent::RegisterComponent
            ((UActorComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
  AActor::SetActorTransform
            ((AActor *)this->TemporaryParentActor,param_2,false,(FHitResult *)0x0,None);
  pUVar5 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0xbe0))(pUVar5,0);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// DeferredEditMesh @ 14caff860

void __thiscall
UPreviewMesh::DeferredEditMesh
          (UPreviewMesh *this,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *param_1,
          bool param_2)

{
  FDynamicMesh3 *pFVar1;
  ulong64 uVar2;
  
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  if ((this->bBuildSpatialDataStructure != false) && (param_2)) {
    pFVar1 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = pFVar1;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar2;
  }
  return;
}

// DisableSecondaryTriangleBuffers @ 14cb01ea0

void __thiscall UPreviewMesh::DisableSecondaryTriangleBuffers(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb01ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xd20))();
  return;
}

// Disconnect @ 14cb01f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewMesh::Disconnect(UPreviewMesh *this)

{
  UDynamicMeshComponent *this_00;
  
  this_00 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (this_00 != (UDynamicMeshComponent *)0x0) {
    UActorComponent::UnregisterComponent((UActorComponent *)this_00);
    (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x4a0))();
    (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  }
  if (this->TemporaryParentActor != (APreviewMeshActor *)0x0) {
    AActor::Destroy((AActor *)this->TemporaryParentActor,false,true);
    this->TemporaryParentActor = (APreviewMeshActor *)0x0;
  }
  return;
}

// EditMesh @ 14cb043e0

void __thiscall
UPreviewMesh::EditMesh
          (UPreviewMesh *this,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *param_1)

{
  FDynamicMesh3 *pFVar1;
  ulong64 uVar2;
  
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
  if (this->bBuildSpatialDataStructure != false) {
    pFVar1 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = pFVar1;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar2;
  }
  if (this->bDecompositionEnabled != false) {
    UpdateRenderMeshDecomposition(this);
  }
  NotifyWorldPathTracedOutputInvalidated(this);
  return;
}

// EnableSecondaryTriangleBuffers @ 14cb04870

void __thiscall
UPreviewMesh::EnableSecondaryTriangleBuffers
          (UPreviewMesh *this,
          TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  longlong local_38 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,200,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_38[0] = *(longlong *)param_1;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0xd18);
  local_10 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_18 = *(undefined8 *)&param_1->field_0x20;
  local_28 = *(undefined4 *)&param_1->field_0x10;
  uStack_24 = *(undefined4 *)&param_1->field_0x14;
  uStack_20 = *(undefined4 *)&param_1->field_0x18;
  uStack_1c = *(undefined4 *)&param_1->field_0x1c;
  if (local_38[0] != 0) {
    *(undefined8 *)param_1 = 0;
  }
  (*pcVar2)(pUVar1,local_38);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// EnableWireframe @ 14cb04930

void __thiscall UPreviewMesh::EnableWireframe(UPreviewMesh *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr != (UDynamicMeshComponent *)0x0) {
    *(bool *)&((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DynamicMeshComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                     ,0x126,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(bool *)&((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ = param_1;
  return;
}

// ExtractPreviewMesh @ 14cb06a90

TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> __thiscall
UPreviewMesh::ExtractPreviewMesh(UPreviewMesh *this)

{
  UDynamicMeshComponent *pUVar1;
  UDynamicMesh *this_00;
  FDynamicMesh3 *in_RDX;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    this_00 = (UDynamicMesh *)(**(code **)(pUVar1->_padding_ + 0xb48))();
    UDynamicMesh::ExtractMesh(this_00);
    return (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>)
           in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>)
         in_RDX;
}

// FastNotifySecondaryTrianglesChanged @ 14cb06bc0

void __thiscall UPreviewMesh::FastNotifySecondaryTrianglesChanged(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xda,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UDynamicMeshComponent::FastNotifySecondaryTrianglesChanged
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr);
  return;
}

// FindNearestPoint @ 14cb091f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UPreviewMesh::FindNearestPoint
          (UPreviewMesh *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          bool param_2)

{
  UDynamicMeshComponent *pUVar1;
  double dVar2;
  FDynamicMesh3 *pFVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDynamicMeshComponent *)0x0) {
    pFVar3 = (FDynamicMesh3 *)0x0;
  }
  else {
    pFVar3 = (FDynamicMesh3 *)(**(code **)(pUVar1->_padding_ + 0xb38))();
  }
  if (param_2) {
    UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::FindNearestPoint_LinearSearch
              (__return_storage_ptr__,pFVar3,param_1);
  }
  else if (this->bBuildSpatialDataStructure == false) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  }
  else {
    local_78[0] = __real_7fefffffffffffff;
    local_68 = 0;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    (**(code **)((this->MeshAABBTree)._padding_ + 0x50))
              (&this->MeshAABBTree,__return_storage_ptr__,param_1,local_78);
    if (local_68 != 0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// FindRayIntersection @ 14cb09f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPreviewMesh::FindRayIntersection
          (UPreviewMesh *this,TRay<double> *param_1,FHitResult *param_2,
          TFunction<bool___cdecl(int)> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UDynamicMeshComponent *pUVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  TTransform<double> *pTVar12;
  TVector<double> *pTVar13;
  FDynamicMesh3 *this_00;
  longlong *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStackY_2b8 [32];
  double local_288;
  double dStack_280;
  double local_278;
  TVector<double>_u_0 TStack_270;
  TVector<double>_u_0 local_258;
  TQuaternion<double>_u_0 local_238;
  double local_218;
  double dStack_210;
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 TStack_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double> local_198;
  TVector<double>_u_0 local_178;
  double dStack_160;
  double local_158;
  double dStack_150;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  TVector<double> local_f8;
  EIntersectionType local_e0 [2];
  undefined8 local_d8 [2];
  undefined1 local_c8 [40];
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pUVar5 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if ((((pUVar5 != (UDynamicMeshComponent *)0x0) &&
       (cVar10 = (**(code **)(pUVar5->_padding_ + 0x560))(), dVar7 = __real_3ff0000000000000,
       cVar10 != '\0')) && (this->TemporaryParentActor != (APreviewMeshActor *)0x0)) &&
     (this->bBuildSpatialDataStructure != false)) {
    lVar6 = *(longlong *)&this->TemporaryParentActor->field_0x1b8;
    if (lVar6 == 0) {
      pTVar12 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar12 = (TTransform<double> *)(lVar6 + 0x1f0);
    }
    local_238._s_0.X = (pTVar12->Rotation).XY.m128d_f64[0];
    local_238._s_0.Y = (pTVar12->Rotation).XY.m128d_f64[1];
    local_238._s_0.Z = (pTVar12->Rotation).ZW.m128d_f64[0];
    local_238._s_0.W = (pTVar12->Rotation).ZW.m128d_f64[1];
    local_208 = (pTVar12->Translation).ZW.m128d_f64[0];
    local_258._s_0.Z = (pTVar12->Scale3D).ZW.m128d_f64[0];
    local_218 = (pTVar12->Translation).XY.m128d_f64[0];
    dStack_210 = (pTVar12->Translation).XY.m128d_f64[1];
    local_200 = *(undefined1 (*) [16])(pTVar12->Scale3D).XY.m128d_f64;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44(local_200._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_200._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar4 = __real_3ff0000000000000 / local_200._0_8_;
    }
    else {
      dVar4 = 0.0;
    }
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44(local_200._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_200._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar9 = __real_3ff0000000000000 / local_200._8_8_;
    }
    else {
      dVar9 = 0.0;
    }
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)local_258._s_0.Z >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_258._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    {
      dVar8 = __real_3ff0000000000000 / local_258._s_0.Z;
    }
    else {
      dVar8 = 0.0;
    }
    local_1f0 = local_258._s_0.Z;
    pTVar13 = UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_238._s_0,(TVector<double> *)&local_258._s_0,
                         &param_1->Direction);
    dVar1 = (pTVar13->field0_0x0)._s_0.X;
    dVar2 = (pTVar13->field0_0x0)._s_0.Y;
    dVar3 = (pTVar13->field0_0x0)._s_0.Z;
    pTVar13 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                        ((TTransformSRT3<double> *)&local_238._s_0,
                         (TVector<double> *)&local_258._s_0,&param_1->Origin);
    local_288 = (pTVar13->field0_0x0)._s_0.X;
    dStack_280 = (pTVar13->field0_0x0)._s_0.Y;
    local_278 = (pTVar13->field0_0x0)._s_0.Z;
    TStack_270._s_0.X = dVar4 * dVar1;
    TStack_270._s_0.Y = dVar9 * dVar2;
    TStack_270._s_0.Z = dVar8 * dVar3;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&TStack_270._s_0,__real_3e45798ee0000000);
    auVar15._0_8_ = TStack_270._s_0.Y * TStack_270._s_0.Y;
    auVar15._8_8_ = 0;
    auVar16._0_8_ =
         TStack_270._s_0.X * TStack_270._s_0.X + auVar15._0_8_ +
         TStack_270._s_0.Z * TStack_270._s_0.Z;
    auVar16._8_8_ = 0;
    auVar15 = sqrtpd(auVar15,auVar16);
    if (auVar15._0_8_ <= 0.0) {
      TStack_270._s_0.X = 0.0;
      TStack_270._s_0.Y = 0.0;
      TStack_270._s_0.Z = 0.0;
    }
    else {
      dVar7 = dVar7 / auVar15._0_8_;
      TStack_270._s_0.X = TStack_270._s_0.X * dVar7;
      TStack_270._s_0.Y = TStack_270._s_0.Y * dVar7;
      TStack_270._s_0.Z = TStack_270._s_0.Z * dVar7;
    }
    this_00 = (FDynamicMesh3 *)0x0;
    local_d8[0] = __real_7fefffffffffffff;
    local_c8._0_8_ = 0;
    local_a0 = (longlong *)0x0;
    local_98 = 0;
    TFunction<bool___cdecl(int)>::operator=((TFunction<bool___cdecl(int)> *)local_c8,param_3);
    iVar11 = (**(code **)((this->MeshAABBTree)._padding_ + 0x40))
                       (&this->MeshAABBTree,&local_288,local_d8);
    if (iVar11 != -1) {
      pUVar5 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      if (pUVar5 != (UDynamicMeshComponent *)0x0) {
        this_00 = (FDynamicMesh3 *)(**(code **)(pUVar5->_padding_ + 0xb38))();
      }
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,iVar11,(TVector<double> *)&local_1e8._s_0,
                 (TVector<double> *)&TStack_1d0._s_0,(TVector<double> *)&local_1b8._s_0);
      local_178._s_0.X = local_288;
      local_178._s_0.Y = dStack_280;
      local_178._s_0.Z = local_278;
      dStack_160 = TStack_270._s_0.X;
      local_158 = TStack_270._s_0.Y;
      dStack_150 = TStack_270._s_0.Z;
      local_148._s_0.X = local_1e8._s_0.X;
      local_148._s_0.Y = local_1e8._s_0.Y;
      local_148._s_0.Z = local_1e8._s_0.Z;
      dStack_130 = TStack_1d0._s_0.X;
      local_128 = TStack_1d0._s_0.Y;
      dStack_120 = TStack_1d0._s_0.Z;
      local_118 = local_1b8._s_0.X;
      dStack_110 = local_1b8._s_0.Y;
      local_108 = local_1b8._s_0.Z;
      UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                ((TRay<double> *)&local_178._s_0,(TTriangle3<double> *)&local_148._s_0,&local_100,
                 &local_f8,local_e0);
      param_2->FaceIndex = iVar11;
      param_2->Distance = (float)local_100;
      UE::Geometry::VectorUtil::Normal<double>
                ((TVector<double> *)&local_258._s_0,(TVector<double> *)&local_1e8._s_0,
                 (TVector<double> *)&TStack_1d0._s_0,(TVector<double> *)&local_1b8._s_0);
      pTVar13 = UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
                          ((TTransformSRT3<double> *)&local_238._s_0,&local_198,
                           (TVector<double> *)&local_258._s_0);
      dVar7 = (pTVar13->field0_0x0)._s_0.Z;
      dVar4 = (pTVar13->field0_0x0)._s_0.X;
      dVar9 = (pTVar13->field0_0x0)._s_0.Y;
      *(double *)&param_2->Normal = dVar4;
      *(double *)&(param_2->Normal).field_0x8 = dVar9;
      *(double *)&(param_2->Normal).field_0x10 = dVar7;
      *(double *)&param_2->ImpactNormal = dVar4;
      *(double *)&(param_2->ImpactNormal).field_0x8 = dVar9;
      local_258._s_0.X = (TStack_270._s_0.X * local_100 + local_288) * (double)local_200._0_8_;
      *(double *)&(param_2->ImpactNormal).field_0x10 = dVar7;
      local_258._s_0.Y = (TStack_270._s_0.Y * local_100 + dStack_280) * (double)local_200._8_8_;
      local_258._s_0.Z = (TStack_270._s_0.Z * local_100 + local_278) * local_1f0;
      pTVar13 = UE::Geometry::operator*<double>
                          (&local_198,(TQuaternion<double> *)&local_238._s_0,
                           (TVector<double> *)&local_258._s_0);
      dVar7 = (pTVar13->field0_0x0)._s_0.Y;
      dVar4 = (pTVar13->field0_0x0)._s_0.Z;
      *(double *)&param_2->ImpactPoint = local_218 + (pTVar13->field0_0x0)._s_0.X;
      *(double *)&(param_2->ImpactPoint).field_0x8 = dStack_210 + dVar7;
      *(double *)&(param_2->ImpactPoint).field_0x10 = local_208 + dVar4;
      if (local_c8._0_8_ != 0) {
        plVar14 = (longlong *)(local_c8 + 0x10);
        if (local_a0 != (longlong *)0x0) {
          plVar14 = local_a0;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (*(longlong *)param_3 != 0) {
        plVar14 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar14 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      return true;
    }
    if (local_c8._0_8_ != 0) {
      plVar14 = (longlong *)(local_c8 + 0x10);
      if (local_a0 != (longlong *)0x0) {
        plVar14 = local_a0;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  if (*(longlong *)param_3 != 0) {
    plVar14 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return false;
}

// ForceRebuildSpatial @ 14cb0a850

void __thiscall UPreviewMesh::ForceRebuildSpatial(UPreviewMesh *this)

{
  FDynamicMesh3 *pFVar1;
  ulong64 uVar2;
  
  if (this->bBuildSpatialDataStructure != false) {
    pFVar1 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = pFVar1;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar2;
  }
  return;
}

// GetActiveMaterial @ 14cb0d300

UMaterialInterface * __thiscall UPreviewMesh::GetActiveMaterial(UPreviewMesh *this,int param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  UMaterialInterface *pUVar5;
  
  cVar3 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xc00))();
  if (cVar3 != '\0') {
    pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb0d333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar5 = (UMaterialInterface *)(**(code **)(pUVar1->_padding_ + 0xc08))(pUVar1,param_1);
    return pUVar5;
  }
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x80,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UMaterialInterface *)(*pcVar2)();
      return pUVar5;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb0d37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar5 = (UMaterialInterface *)(**(code **)(pUVar1->_padding_ + 0x690))(pUVar1,param_1);
  return pUVar5;
}

// GetMaterial @ 14cb109f0

UMaterialInterface * __thiscall UPreviewMesh::GetMaterial(UPreviewMesh *this,int param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  UMaterialInterface *pUVar4;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x80,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UMaterialInterface *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb10a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar4 = (UMaterialInterface *)(**(code **)(pUVar1->_padding_ + 0x690))(pUVar1,param_1);
  return pUVar4;
}

// GetMaterials @ 14cb10b00

void __thiscall
UPreviewMesh::GetMaterials
          (UPreviewMesh *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UDynamicMeshComponent *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 local_18 [2];
  
  if (((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                         ,0x86,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = 0;
  iVar5 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x810))();
  if (0 < iVar5) {
    do {
      pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      local_18[0] = (**(code **)(pUVar1->_padding_ + 0x690))(pUVar1,iVar6);
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      iVar6 = iVar6 + 1;
      param_1->ArrayNum = iVar5 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
      iVar5 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x810))()
      ;
    } while (iVar6 < iVar5);
  }
  return;
}

// GetMesh @ 14cb10cb0

FDynamicMesh3 * __thiscall UPreviewMesh::GetMesh(UPreviewMesh *this)

{
  UDynamicMeshComponent *pUVar1;
  FDynamicMesh3 *pFVar2;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cb10cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FDynamicMesh3 *)(**(code **)(pUVar1->_padding_ + 0xb38))();
    return pFVar2;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetNumMaterials @ 14cb117a0

int __thiscall UPreviewMesh::GetNumMaterials(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x7a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb117e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x810))();
  return iVar3;
}

// GetOnMeshChanged @ 14cb11970

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UPreviewMesh::GetOnMeshChanged(UPreviewMesh *this)

{
  code *pcVar1;
  bool bVar2;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x292,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &((this->DynamicMeshComponent).field0_0x0.DebugPtr)->OnMeshChanged;
}

// GetPrivateStaticClass @ 14cb12e10

UClass * __cdecl UPreviewMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewMesh",
               &Z_Registration_Info_UClass_UPreviewMesh.InnerSingleton,
               StaticRegisterNativesUPreviewMesh,0x130,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPreviewMesh>,
               InternalVTableHelperCtorCaller<UPreviewMesh>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewMesh.InnerSingleton;
}

// GetSpatial @ 14cb14780

TMeshAABBTree3<UE::Geometry::FDynamicMesh3> * __thiscall
UPreviewMesh::GetSpatial(UPreviewMesh *this)

{
  ulong64 uVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar2;
  
  if ((((this->DynamicMeshComponent).field0_0x0.DebugPtr != (UDynamicMeshComponent *)0x0) &&
      (this->bBuildSpatialDataStructure != false)) && (-1 < (this->MeshAABBTree).RootIndex)) {
    uVar1 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    pTVar2 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
    if ((this->MeshAABBTree).MeshChangeStamp == uVar1) {
      pTVar2 = &this->MeshAABBTree;
    }
    return pTVar2;
  }
  return (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
}

// GetTransform @ 14cb14ab0

TTransform<double> * __thiscall
UPreviewMesh::GetTransform(UPreviewMesh *this,TTransform<double> *__return_storage_ptr__)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TTransform<double> *pTVar11;
  
  if (this->TemporaryParentActor != (APreviewMeshActor *)0x0) {
    lVar1 = *(longlong *)&this->TemporaryParentActor->field_0x1b8;
    if (lVar1 == 0) {
      pTVar11 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar11 = (TTransform<double> *)(lVar1 + 0x1f0);
    }
    dVar10 = (pTVar11->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
    dVar10 = (pTVar11->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
    return __return_storage_ptr__;
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  return __return_storage_ptr__;
}

// IsVisible @ 14cb23310

bool __thiscall UPreviewMesh::IsVisible(UPreviewMesh *this)

{
  UDynamicMeshComponent *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cb2331c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x560))();
    return (bool)uVar2;
  }
  return false;
}

// NotifyDeferredEditCompleted @ 14cb239e0

void __thiscall
UPreviewMesh::NotifyDeferredEditCompleted
          (UPreviewMesh *this,ERenderUpdateMode param_1,EMeshRenderAttributeFlags param_2,
          bool param_3)

{
  UDynamicMeshComponent *this_00;
  FDynamicMesh3 *pFVar1;
  ulong64 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if ((this->bBuildSpatialDataStructure != false) && (param_3)) {
    pFVar1 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = pFVar1;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar2;
  }
  if (param_1 == FullUpdate) {
    (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
    if (this->bDecompositionEnabled != false) {
      UpdateRenderMeshDecomposition(this);
    }
  }
  else if (param_1 == FastUpdate) {
    this_00 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    bVar3 = (bool)(param_2 >> 2 & 1);
    bVar4 = (bool)(param_2 >> 1 & 1);
    bVar5 = (bool)(param_2 >> 3 & 1);
    if ((param_2 & Positions) == None) {
      UDynamicMeshComponent::FastNotifyVertexAttributesUpdated(this_00,bVar3,bVar4,bVar5);
    }
    else {
      UDynamicMeshComponent::FastNotifyPositionsUpdated(this_00,bVar3,bVar4,bVar5);
    }
  }
  NotifyWorldPathTracedOutputInvalidated(this);
  return;
}

// NotifyRegionDeferredEditCompleted @ 14cb23ac0

void __thiscall
UPreviewMesh::NotifyRegionDeferredEditCompleted
          (UPreviewMesh *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          EMeshRenderAttributeFlags param_2)

{
  UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,param_1,param_2);
  NotifyWorldPathTracedOutputInvalidated(this);
  return;
}

// NotifyRegionDeferredEditCompleted @ 14cb23af0

void __thiscall
UPreviewMesh::NotifyRegionDeferredEditCompleted
          (UPreviewMesh *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          EMeshRenderAttributeFlags param_2)

{
  UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,param_1,param_2);
  NotifyWorldPathTracedOutputInvalidated(this);
  return;
}

// NotifyWorldPathTracedOutputInvalidated @ 14cb23b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(UPreviewMesh *this)

{
  UWorld *pUVar1;
  wchar_t *pwVar2;
  
  if (((this->TemporaryParentActor != (APreviewMeshActor *)0x0) &&
      (pUVar1 = AActor::GetWorld((AActor *)this->TemporaryParentActor), pUVar1 != (UWorld *)0x0)) &&
     (pUVar1->Scene != (FSceneInterface *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar2 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar2,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
                    /* WARNING: Could not recover jumptable at 0x00014cb23b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar1->Scene->_padding_ + 0x240))(pUVar1->Scene,1);
      return;
    }
  }
  return;
}

// ProcessMesh @ 14cb28da0

void __thiscall
UPreviewMesh::ProcessMesh
          (UPreviewMesh *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDynamicMeshComponent *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1381309959689469564>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x184,"DynamicMeshComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_18 = *(undefined8 *)param_1;
    local_10 = *(undefined8 *)&param_1->field_0x8;
    (**(code **)(pUVar1->_padding_ + 0xb40))(pUVar1,&local_18);
  }
  return;
}

// ReplaceMesh @ 14cb31c60

void __thiscall UPreviewMesh::ReplaceMesh(UPreviewMesh *this,FDynamicMesh3 *param_1)

{
  FDynamicMesh3 *pFVar1;
  ulong64 uVar2;
  
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb28))();
  if (this->bBuildSpatialDataStructure != false) {
    pFVar1 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = pFVar1;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar2 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar2;
  }
  if (this->bDecompositionEnabled != false) {
    UpdateRenderMeshDecomposition(this);
  }
  NotifyWorldPathTracedOutputInvalidated(this);
  return;
}

// ReplaceMesh @ 14cb31ce0

void __thiscall UPreviewMesh::ReplaceMesh(UPreviewMesh *this,FDynamicMesh3 *param_1)

{
  FDynamicMesh3 *pFVar1;
  FDynamicMesh3 local_238;
  
  pFVar1 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238,param_1);
  ReplaceMesh(this,pFVar1);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  return;
}

// SetEnableRenderMeshDecomposition @ 14cb366c0

void __thiscall UPreviewMesh::SetEnableRenderMeshDecomposition(UPreviewMesh *this,bool param_1)

{
  UDynamicMeshComponent *pUVar1;
  undefined8 local_res8 [4];
  
  if (this->bDecompositionEnabled != param_1) {
    this->bDecompositionEnabled = param_1;
    if (param_1) {
      UpdateRenderMeshDecomposition(this);
      return;
    }
    pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    local_res8[0] = 0;
    (**(code **)(pUVar1->_padding_ + 0xd28))(pUVar1,local_res8);
  }
  return;
}

// SetMaterial @ 14cb36ce0

void __thiscall
UPreviewMesh::SetMaterial(UPreviewMesh *this,int param_1,UMaterialInterface *param_2)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,param_1,param_2);
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
  if (this->bDecompositionEnabled != false) {
    UpdateRenderMeshDecomposition(this);
  }
  return;
}

// SetMaterial @ 14cb36d70

void __thiscall UPreviewMesh::SetMaterial(UPreviewMesh *this,UMaterialInterface *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,0,param_1);
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
  if (this->bDecompositionEnabled != false) {
    UpdateRenderMeshDecomposition(this);
  }
  return;
}

// SetMaterials @ 14cb36df0

void __thiscall
UPreviewMesh::SetMaterials
          (UPreviewMesh *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                         ,0x68,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x6b8);
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
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
      (*pcVar2)(pUVar1,uVar6,*(undefined8 *)((param_1->AllocatorInstance).Data + lVar7));
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
  if (this->bDecompositionEnabled == false) {
    return;
  }
  UpdateRenderMeshDecomposition(this);
  return;
}

// SetOverrideRenderMaterial @ 14cb373a0

void __thiscall
UPreviewMesh::SetOverrideRenderMaterial(UPreviewMesh *this,UMaterialInterface *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb373f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xbf0))(pUVar1,param_1);
  return;
}

// SetOverrideSecondaryWireframeRenderMaterial @ 14cb37400

void __thiscall
UPreviewMesh::SetOverrideSecondaryWireframeRenderMaterial
          (UPreviewMesh *this,UMaterialInterface *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xbc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb37451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xc60))(pUVar1,param_1);
  return;
}

// SetOverrideWireframeRenderMaterial @ 14cb37460

void __thiscall
UPreviewMesh::SetOverrideWireframeRenderMaterial(UPreviewMesh *this,UMaterialInterface *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xb0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb374b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xc40))(pUVar1,param_1);
  return;
}

// SetSecondaryBuffersVisibility @ 14cb376b0

void __thiscall UPreviewMesh::SetSecondaryBuffersVisibility(UPreviewMesh *this,bool param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb37702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xc30))(pUVar1,param_1);
  return;
}

// SetSecondaryRenderMaterial @ 14cb37710

void __thiscall
UPreviewMesh::SetSecondaryRenderMaterial(UPreviewMesh *this,UMaterialInterface *param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xa4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb37761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xc10))(pUVar1,param_1);
  return;
}

// SetShadowsEnabled @ 14cb379d0

void __thiscall UPreviewMesh::SetShadowsEnabled(UPreviewMesh *this,bool param_1)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,300,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb37a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0xbd0))(pUVar1,param_1);
  return;
}

// SetTangentsMode @ 14cb38020

void __thiscall
UPreviewMesh::SetTangentsMode(UPreviewMesh *this,EDynamicMeshComponentTangentsMode param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicMeshComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                       ,0xe0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UDynamicMeshComponent::SetTangentsType((this->DynamicMeshComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetTransform @ 14cb38350

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewMesh::SetTransform(UPreviewMesh *this,TTransform<double> *param_1)

{
  APreviewMeshActor *this_00;
  USceneComponent *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TTransform<double> *pTVar10;
  TTransform<double> *pTVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  VectorRegister4Double *pVVar16;
  VectorRegister4Double *pVVar17;
  TTransform<double> *pTVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  this_00 = this->TemporaryParentActor;
  if (this_00 == (APreviewMeshActor *)0x0) {
    return;
  }
  pUVar1 = (((TObjectPtr<USceneComponent> *)&this_00->field_0x1b8)->field0_0x0).DebugPtr;
  if (pUVar1 == (USceneComponent *)0x0) {
    pTVar18 = &UE::Math::TTransform<double>::Identity;
    pTVar10 = &UE::Math::TTransform<double>::Identity;
    pTVar11 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar18 = &pUVar1->ComponentToWorld;
    pTVar10 = &pUVar1->ComponentToWorld;
    pTVar11 = &pUVar1->ComponentToWorld;
  }
  pVVar17 = &pTVar11->Scale3D;
  pVVar16 = &pTVar10->Translation;
  dVar20 = (pVVar16->ZW).m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar22 = (pVVar16->ZW).m128d_f64[1] - (param_1->Translation).ZW.m128d_f64[1];
  dVar24 = (pVVar16->XY).m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar26 = (pVVar16->XY).m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  lVar19 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar22,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar19;
  auVar2._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
  uVar13 = movmskpd((int)this,auVar2);
  lVar19 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar26,0) & _UNK_15061cc88));
  auVar7._8_4_ = (int)lVar19;
  auVar7._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
  iVar12 = movmskpd((int)pUVar1,auVar7);
  if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
    dVar24 = (pTVar18->Rotation).ZW.m128d_f64[0];
    dVar26 = (pTVar18->Rotation).ZW.m128d_f64[1];
    dVar20 = (pTVar18->Rotation).XY.m128d_f64[0];
    dVar22 = (pTVar18->Rotation).XY.m128d_f64[1];
    dVar21 = dVar24 - (param_1->Rotation).ZW.m128d_f64[0];
    dVar23 = dVar26 - (param_1->Rotation).ZW.m128d_f64[1];
    dVar24 = dVar24 + (param_1->Rotation).ZW.m128d_f64[0];
    dVar26 = dVar26 + (param_1->Rotation).ZW.m128d_f64[1];
    dVar25 = dVar20 - (param_1->Rotation).XY.m128d_f64[0];
    dVar27 = dVar22 - (param_1->Rotation).XY.m128d_f64[1];
    dVar20 = dVar20 + (param_1->Rotation).XY.m128d_f64[0];
    dVar22 = dVar22 + (param_1->Rotation).XY.m128d_f64[1];
    lVar19 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar23,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar19;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar14 = movmskpd(0,auVar3);
    lVar19 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar27,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar19;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar13 = movmskpd(iVar12,auVar4);
    uVar15 = iVar14 << 2 | uVar13;
    if (uVar15 != 0) {
      lVar19 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar26,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar19;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar24,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar15 = movmskpd(uVar15,auVar5);
      lVar19 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar22,0) & _UNK_15061cc88));
      auVar8._8_4_ = (int)lVar19;
      auVar8._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar20,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar13 = movmskpd(uVar13,auVar8);
      if ((uVar15 & 0x3fffffff) != 0 || uVar13 != 0) goto LAB_14cb384ac;
    }
    dVar20 = (pVVar17->ZW).m128d_f64[0] - (param_1->Scale3D).ZW.m128d_f64[0];
    dVar22 = (pVVar17->ZW).m128d_f64[1] - (param_1->Scale3D).ZW.m128d_f64[1];
    dVar24 = (pVVar17->XY).m128d_f64[0] - (param_1->Scale3D).XY.m128d_f64[0];
    dVar26 = (pVVar17->XY).m128d_f64[1] - (param_1->Scale3D).XY.m128d_f64[1];
    lVar19 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar6._8_4_ = (int)lVar19;
    auVar6._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar6._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar15 = movmskpd((int)pVVar16,auVar6);
    lVar19 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar26,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar19;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar12 = movmskpd(uVar13,auVar9);
    if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
      return;
    }
  }
LAB_14cb384ac:
  AActor::SetActorTransform((AActor *)this_00,param_1,false,(FHitResult *)0x0,None);
  NotifyWorldPathTracedOutputInvalidated(this);
  return;
}

// SetTriangleColorFunction @ 14cb38530

void __thiscall
UPreviewMesh::SetTriangleColorFunction
          (UPreviewMesh *this,
          TFunction<FColor___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *param_1,
          ERenderUpdateMode param_2)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong local_58 [2];
  undefined1 local_48 [24];
  undefined8 local_30;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_30 = 0;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0xce8);
  local_58[0] = *(longlong *)param_1;
  if (local_58[0] != 0) {
    puVar3 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,local_48);
  }
  (*pcVar2)(pUVar1,local_58,param_2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// SetVisible @ 14cb38630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPreviewMesh::SetVisible(UPreviewMesh *this,bool param_1)

{
  UDynamicMeshComponent *pUVar1;
  char cVar2;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x560))();
    if ((bool)cVar2 != param_1) {
      USceneComponent::SetVisibility
                ((USceneComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr,param_1,
                 Propagate);
      NotifyWorldPathTracedOutputInvalidated(this);
    }
  }
  return;
}

// StaticRegisterNativesUPreviewMesh @ 14cb3ec70

void __cdecl UPreviewMesh::StaticRegisterNativesUPreviewMesh(void)

{
  return;
}

// TestRayIntersection @ 14cb406a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UPreviewMesh::TestRayIntersection
          (UPreviewMesh *this,TRay<double> *param_1,TFunction<bool___cdecl(int)> *param_2)

{
  UDynamicMeshComponent *pUVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  TTransform<double> *pTVar7;
  longlong *plVar8;
  double *pdVar9;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 local_70 [32];
  double *local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UDynamicMeshComponent *)0x0) &&
       (cVar5 = (**(code **)(pUVar1->_padding_ + 0x560))(), cVar5 != '\0')) &&
      (this->TemporaryParentActor != (APreviewMeshActor *)0x0)) &&
     (this->bBuildSpatialDataStructure != false)) {
    lVar2 = *(longlong *)&this->TemporaryParentActor->field_0x1b8;
    if (lVar2 == 0) {
      pTVar7 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar7 = (TTransform<double> *)(lVar2 + 0x1f0);
    }
    local_b8._s_0.Z = (pTVar7->Translation).ZW.m128d_f64[0];
    dVar3 = (pTVar7->Translation).XY.m128d_f64[0];
    dVar4 = (pTVar7->Translation).XY.m128d_f64[1];
    local_70._0_8_ = (pTVar7->Rotation).XY.m128d_f64[0];
    local_70._8_8_ = (pTVar7->Rotation).XY.m128d_f64[1];
    local_70._16_8_ = (pTVar7->Rotation).ZW.m128d_f64[0];
    local_70._24_8_ = (pTVar7->Rotation).ZW.m128d_f64[1];
    local_88 = dVar3;
    dStack_80 = dVar4;
    local_78 = local_b8._s_0.Z;
    UE::Geometry::TQuaternion<double>::InverseMultiply
              ((TQuaternion<double> *)&((TQuaternion<double>_u_0 *)local_70)->_s_0,
               (TVector<double> *)&local_a0._s_0,&param_1->Direction);
    local_e8._s_0.X = (param_1->Origin).field0_0x0._s_0.X - dVar3;
    local_e8._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y - dVar4;
    local_e8._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z - local_b8._s_0.Z;
    UE::Geometry::TQuaternion<double>::InverseMultiply
              ((TQuaternion<double> *)&((TQuaternion<double>_u_0 *)local_70)->_s_0,
               (TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_e8._s_0);
    local_e8._s_0.Z = local_b8._s_0.Z;
    local_e8._s_0.X = local_b8._s_0.X;
    local_e8._s_0.Y = local_b8._s_0.Y;
    local_d0._s_0.Z = local_a0._s_0.Z;
    local_d0._s_0.X = local_a0._s_0.X;
    local_d0._s_0.Y = local_a0._s_0.Y;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_d0._s_0,__real_3e45798ee0000000);
    local_88 = __real_7fefffffffffffff;
    local_78 = 0.0;
    local_50 = (double *)0x0;
    local_48 = 0;
    TFunction<bool___cdecl(int)>::operator=((TFunction<bool___cdecl(int)> *)&local_78,param_2);
    iVar6 = (**(code **)((this->MeshAABBTree)._padding_ + 0x40))
                      (&this->MeshAABBTree,&local_e8,&local_88);
    if (iVar6 != -1) {
      if (local_78 != 0.0) {
        pdVar9 = &(((TQuaternion<double>_u_0 *)local_70)->_s_0).Y;
        if (local_50 != (double *)0x0) {
          pdVar9 = local_50;
        }
        (**(code **)((longlong)*pdVar9 + 0x10))();
      }
      if (*(longlong *)param_2 != 0) {
        plVar8 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar8 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      return true;
    }
    if (local_78 != 0.0) {
      pdVar9 = &(((TQuaternion<double>_u_0 *)local_70)->_s_0).Y;
      if (local_50 != (double *)0x0) {
        pdVar9 = local_50;
      }
      (**(code **)((longlong)*pdVar9 + 0x10))();
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return false;
}

// TrackedEditMesh @ 14cb41690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<FMeshChange,TDefaultDelete<FMeshChange>_> __thiscall
UPreviewMesh::TrackedEditMesh
          (UPreviewMesh *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&,UE::Geometry::FDynamicMeshChangeTracker_&)>
          *param_1)

{
  FDynamicMesh3 *pFVar1;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar2;
  FMeshChange *pFVar3;
  ulong64 uVar4;
  undefined8 *in_R8;
  undefined1 auStack_108 [32];
  FScriptContainerElement *local_e8;
  FDynamicMeshChange *local_e0;
  FDynamicMeshChangeTracker local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar1 = (FDynamicMesh3 *)
           (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_d8,pFVar1);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_d8);
  (*(code *)*in_R8)(in_R8[1],pFVar1,&local_d8);
  TVar2 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_d8);
  pFVar3 = ::operator_new(0x40);
  if (pFVar3 == (FMeshChange *)0x0) {
    pFVar3 = (FMeshChange *)0x0;
  }
  else {
    local_e8 = ((TVar2.Ptr)->OldVertices).AllocatorInstance.Data;
    ((TVar2.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3 = FMeshChange::FMeshChange(pFVar3,(FDynamicMeshChange *)&local_e8);
  }
  if (local_e0 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_e0);
    ::operator_delete(local_e0,0x48);
  }
  (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
  if (this->bBuildSpatialDataStructure != false) {
    pFVar1 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    (this->MeshAABBTree).MeshChangeStamp = 0;
    (this->MeshAABBTree).Mesh = pFVar1;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshAABBTree,false);
    uVar4 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshAABBTree).Mesh);
    (this->MeshAABBTree).MeshChangeStamp = uVar4;
  }
  if (this->bDecompositionEnabled != false) {
    UpdateRenderMeshDecomposition(this);
  }
  NotifyWorldPathTracedOutputInvalidated(this);
  *(FMeshChange **)param_1 = pFVar3;
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_d8);
  return (TUniquePtr<FMeshChange,TDefaultDelete<FMeshChange>_>)(FMeshChange *)param_1;
}

// UpdatePreview @ 14cb487f0

void __thiscall
UPreviewMesh::UpdatePreview
          (UPreviewMesh *this,FDynamicMesh3 *param_1,ERenderUpdateMode param_2,
          EMeshRenderAttributeFlags param_3)

{
  FDynamicMesh3 *this_00;
  
  this_00 = (FDynamicMesh3 *)
            (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  UE::Geometry::FDynamicMesh3::operator=(this_00,param_1);
  NotifyDeferredEditCompleted(this,param_2,param_3,this->bBuildSpatialDataStructure);
  return;
}

// UpdatePreview @ 14cb48860

void __thiscall
UPreviewMesh::UpdatePreview
          (UPreviewMesh *this,FDynamicMesh3 *param_1,ERenderUpdateMode param_2,
          EMeshRenderAttributeFlags param_3)

{
  FDynamicMesh3 *this_00;
  
  this_00 = (FDynamicMesh3 *)
            (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  UE::Geometry::FDynamicMesh3::Copy(this_00,param_1,true,true,true,true);
  NotifyDeferredEditCompleted(this,param_2,param_3,this->bBuildSpatialDataStructure);
  return;
}

// UpdateRenderMeshDecomposition @ 14cb48dc0

void __thiscall UPreviewMesh::UpdateRenderMeshDecomposition(UPreviewMesh *this)

{
  UDynamicMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDynamicMesh3 *pFVar5;
  FMeshRenderDecomposition *pFVar6;
  uint uVar7;
  FMeshRenderDecomposition *this_00;
  FMeshRenderDecomposition *local_res8;
  undefined8 local_28;
  FComponentMaterialSet local_20;
  
  if ((this->bDecompositionEnabled == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDecompositionEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                         ,0x2b7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (FDynamicMesh3 *)
           (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  this_00 = (FMeshRenderDecomposition *)0x0;
  local_20.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Materials.ArrayNum = 0;
  local_20.Materials.ArrayMax = 0;
  if (((this->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                         ,0x86,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x810))();
  pFVar6 = this_00;
  if (0 < iVar4) {
    do {
      pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      local_28 = (**(code **)(pUVar1->_padding_ + 0x690))(pUVar1,pFVar6);
      if (((local_20.Materials.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 <
           local_20.Materials.AllocatorInstance.Data + (longlong)local_20.Materials.ArrayMax * 8))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = local_20.Materials.ArrayNum;
      if (local_20.Materials.ArrayNum == local_20.Materials.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&local_20,&local_20.Materials.ArrayMax);
      }
      uVar7 = (int)pFVar6 + 1;
      local_20.Materials.ArrayNum = iVar4 + 1;
      *(undefined8 *)(local_20.Materials.AllocatorInstance.Data + (longlong)iVar4 * 8) = local_28;
      iVar4 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x810))()
      ;
      pFVar6 = (FMeshRenderDecomposition *)(ulonglong)uVar7;
    } while ((int)uVar7 < iVar4);
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FMeshRenderDecomposition *)0x0) {
    (pFVar6->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Groups).ArrayNum = 0;
    (pFVar6->Groups).ArrayMax = 0;
    (pFVar6->TriangleToGroupMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->TriangleToGroupMap).ArrayNum = 0;
    (pFVar6->TriangleToGroupMap).ArrayMax = 0;
    this_00 = pFVar6;
  }
  FMeshRenderDecomposition::BuildChunkedDecomposition(pFVar5,&local_20,this_00,0x4000);
  FMeshRenderDecomposition::BuildAssociations(this_00,pFVar5);
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_res8 = this_00;
  (**(code **)(pUVar1->_padding_ + 0xd28))(pUVar1,&local_res8);
  if (local_20.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Materials.AllocatorInstance.Data);
  }
  return;
}

// _getUObject @ 14cb4bd80

UObject * __thiscall UPreviewMesh::_getUObject(UPreviewMesh *this)

{
  return (UObject *)&this[-1].MeshAABBTree.IndexList.Blocks;
}

// _getUObject`adjustor{8}' @ 14cb4bd8c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UPreviewMesh::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UPreviewMesh::_getUObject_adjustor_8__(UPreviewMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPreviewMesh *)&this[-1].field_0x128);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14cb4bd9c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UPreviewMesh::_getUObject`adjustor{16}'
   (void)const __ptr64 */

UObject * __thiscall UPreviewMesh::_getUObject_adjustor_16__(UPreviewMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPreviewMesh *)&this[-1].bDecompositionEnabled);
  return (UObject *)pUVar1;
}

