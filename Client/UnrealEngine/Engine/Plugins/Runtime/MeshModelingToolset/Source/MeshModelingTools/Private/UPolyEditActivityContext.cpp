// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd0050

UClass * __cdecl UPolyEditActivityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditActivityContext",
               &Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton,
               StaticRegisterNativesUPolyEditActivityContext,0x100,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditActivityContext>,
               InternalVTableHelperCtorCaller<UPolyEditActivityContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton;
}

// UPolyEditActivityContext @ 14cbddea0

UPolyEditActivityContext * __thiscall
UPolyEditActivityContext::UPolyEditActivityContext
          (UPolyEditActivityContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPolyEditActivityContext__6B_;
  (this->CommonProperties).field0_0x0.DebugPtr = (UPolyEditCommonProperties *)0x0;
  (this->CurrentMesh).Object = (FDynamicMesh3 *)0x0;
  (this->CurrentMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->CurrentTopology).Object = (FGroupTopology *)0x0;
  (this->CurrentTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->MeshSpatial).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bTriangleMode = false;
  (this->SelectionMechanic).field0_0x0.DebugPtr = (UPolygonSelectionMechanic *)0x0;
  *(undefined8 *)&this->EmitCurrentMeshChangeAndUpdate = 0;
  *(undefined8 *)&(this->EmitCurrentMeshChangeAndUpdate).field_0x28 = 0;
  *(undefined8 *)&this->EmitActivityStart = 0;
  *(undefined8 *)&(this->EmitActivityStart).field_0x28 = 0;
  *(undefined8 *)&this->OnUndoRedo = 0;
  *(undefined8 *)&(this->OnUndoRedo).field_0x8 = 0;
  *(undefined8 *)&(this->OnUndoRedo).field_0x10 = 0;
  *(undefined8 *)&(this->OnUndoRedo).field_0x18 = 2;
  return this;
}

// UPolyEditActivityContext @ 14cbddf30

UPolyEditActivityContext * __thiscall
UPolyEditActivityContext::UPolyEditActivityContext
          (UPolyEditActivityContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPolyEditActivityContext__6B_;
  (this->CommonProperties).field0_0x0.DebugPtr = (UPolyEditCommonProperties *)0x0;
  (this->CurrentMesh).Object = (FDynamicMesh3 *)0x0;
  (this->CurrentMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->CurrentTopology).Object = (FGroupTopology *)0x0;
  (this->CurrentTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->MeshSpatial).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bTriangleMode = false;
  (this->SelectionMechanic).field0_0x0.DebugPtr = (UPolygonSelectionMechanic *)0x0;
  *(undefined8 *)&this->EmitCurrentMeshChangeAndUpdate = 0;
  *(undefined8 *)&(this->EmitCurrentMeshChangeAndUpdate).field_0x28 = 0;
  *(undefined8 *)&this->EmitActivityStart = 0;
  *(undefined8 *)&(this->EmitActivityStart).field_0x28 = 0;
  *(undefined8 *)&this->OnUndoRedo = 0;
  *(undefined8 *)&(this->OnUndoRedo).field_0x8 = 0;
  *(undefined8 *)&(this->OnUndoRedo).field_0x10 = 0;
  *(undefined8 *)&(this->OnUndoRedo).field_0x18 = 2;
  return this;
}

// ~UPolyEditActivityContext @ 14cbe0590

void __thiscall UPolyEditActivityContext::~UPolyEditActivityContext(UPolyEditActivityContext *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UPolyEditActivityContext__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnUndoRedo).field_0x8,
             *(int *)&(this->OnUndoRedo).field_0x10);
  pvVar1 = *(void **)&(this->OnUndoRedo).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUndoRedo);
  if (*(longlong *)&this->EmitActivityStart != 0) {
    plVar2 = *(longlong **)&(this->EmitActivityStart).field_0x28;
    plVar3 = (longlong *)&(this->EmitActivityStart).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->EmitCurrentMeshChangeAndUpdate != 0) {
    plVar2 = *(longlong **)&(this->EmitCurrentMeshChangeAndUpdate).field_0x28;
    plVar3 = (longlong *)&(this->EmitCurrentMeshChangeAndUpdate).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshSpatial).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentMesh).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf0630

UClass * __cdecl UPolyEditActivityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditActivityContext",
               &Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton,
               StaticRegisterNativesUPolyEditActivityContext,0x100,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPolyEditActivityContext>,
               InternalVTableHelperCtorCaller<UPolyEditActivityContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditActivityContext.InnerSingleton;
}

// StaticRegisterNativesUPolyEditActivityContext @ 14cbf6ca0

void __cdecl UPolyEditActivityContext::StaticRegisterNativesUPolyEditActivityContext(void)

{
  return;
}

