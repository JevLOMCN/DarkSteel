// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 15

// StaticClass @ 14ca3f860

UClass * __cdecl USingleTargetWithSelectionTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleTargetWithSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleTargetWithSelectionTool",
               &Z_Registration_Info_UClass_USingleTargetWithSelectionTool.InnerSingleton,
               StaticRegisterNativesUSingleTargetWithSelectionTool,0x148,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleTargetWithSelectionTool>,
               InternalVTableHelperCtorCaller<USingleTargetWithSelectionTool>,local_res8,
               USingleSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleTargetWithSelectionTool.InnerSingleton;
}

// USingleTargetWithSelectionTool @ 14ca68ee0

USingleTargetWithSelectionTool * __thiscall
USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
          (USingleTargetWithSelectionTool *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  USingleSelectionTool::USingleSelectionTool((USingleSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleTargetWithSelectionTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)&local_res8);
  (this->GeometrySelection).ElementType = Face;
  (this->GeometrySelection).TopologyType = Triangle;
  *(undefined8 *)&(this->GeometrySelection).Selection.Elements = 0;
  *(undefined8 *)&(this->GeometrySelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeometrySelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x34 = 0;
  (this->GeometrySelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeometrySelection).Selection.HashSize = 0;
  this->bGeometrySelectionInitialized = false;
  (this->GeometrySelectionVizProperties).field0_0x0.DebugPtr =
       (UGeometrySelectionVisualizationProperties *)0x0;
  (this->GeometrySelectionViz).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  return this;
}

// USingleTargetWithSelectionTool @ 14ca68fb0

USingleTargetWithSelectionTool * __thiscall
USingleTargetWithSelectionTool::USingleTargetWithSelectionTool(USingleTargetWithSelectionTool *this)

{
  undefined8 local_res8;
  
  USingleSelectionTool::USingleSelectionTool((USingleSelectionTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleTargetWithSelectionTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)&local_res8);
  (this->GeometrySelection).ElementType = Face;
  (this->GeometrySelection).TopologyType = Triangle;
  *(undefined8 *)&(this->GeometrySelection).Selection.Elements = 0;
  *(undefined8 *)&(this->GeometrySelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GeometrySelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySelection).Selection.Elements.field_0x34 = 0;
  (this->GeometrySelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GeometrySelection).Selection.HashSize = 0;
  this->bGeometrySelectionInitialized = false;
  (this->GeometrySelectionVizProperties).field0_0x0.DebugPtr =
       (UGeometrySelectionVisualizationProperties *)0x0;
  (this->GeometrySelectionViz).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  return this;
}

// ~USingleTargetWithSelectionTool @ 14ca6bbd0

void __thiscall
USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
          (USingleTargetWithSelectionTool *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7USingleTargetWithSelectionTool__6B_;
  (this->GeometrySelection).Selection.HashSize = 0;
  FVar1 = (this->GeometrySelection).Selection.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GeometrySelection).Selection.Elements);
  USingleSelectionTool::~USingleSelectionTool((USingleSelectionTool *)this);
  return;
}

// GetGeometrySelection @ 14ca8fe60

FGeometrySelection * __thiscall
USingleTargetWithSelectionTool::GetGeometrySelection(USingleTargetWithSelectionTool *this)

{
  return &this->GeometrySelection;
}

// GetPrivateStaticClass @ 14ca921b0

UClass * __cdecl USingleTargetWithSelectionTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleTargetWithSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SingleTargetWithSelectionTool",
               &Z_Registration_Info_UClass_USingleTargetWithSelectionTool.InnerSingleton,
               StaticRegisterNativesUSingleTargetWithSelectionTool,0x148,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleTargetWithSelectionTool>,
               InternalVTableHelperCtorCaller<USingleTargetWithSelectionTool>,local_res8,
               USingleSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleTargetWithSelectionTool.InnerSingleton;
}

// GetTargetWorld @ 14ca93790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
USingleTargetWithSelectionTool::GetTargetWorld(USingleTargetWithSelectionTool *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->TargetWorld).WeakPtr);
  return pUVar1;
}

// HasGeometrySelection @ 14ca94cb0

bool __thiscall
USingleTargetWithSelectionTool::HasGeometrySelection(USingleTargetWithSelectionTool *this)

{
  return this->bGeometrySelectionInitialized;
}

// OnShutdown @ 14ca9c4b0

void __thiscall
USingleTargetWithSelectionTool::OnShutdown
          (USingleTargetWithSelectionTool *this,EToolShutdownType param_1)

{
  UPreviewGeometry *this_00;
  UGeometrySelectionVisualizationProperties *pUVar1;
  code *pcVar2;
  FString local_18;
  
  this_00 = (this->GeometrySelectionViz).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::Disconnect(this_00);
  }
  pUVar1 = (this->GeometrySelectionVizProperties).field0_0x0.DebugPtr;
  if (pUVar1 != (UGeometrySelectionVisualizationProperties *)0x0) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
    ::FString::FString(&local_18,L"");
    (*pcVar2)(pUVar1,this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnTick @ 14ca9c7c0

void __thiscall
USingleTargetWithSelectionTool::OnTick(USingleTargetWithSelectionTool *this,float param_1)

{
  UPreviewGeometry *pUVar1;
  
  pUVar1 = (this->GeometrySelectionViz).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    UE::Geometry::UpdateGeometrySelectionVisualization
              (pUVar1,(this->GeometrySelectionVizProperties).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// SetGeometrySelection @ 14caa3820

void __thiscall
USingleTargetWithSelectionTool::SetGeometrySelection
          (USingleTargetWithSelectionTool *this,FGeometrySelection *param_1)

{
  UE::Geometry::FGeometrySelection::operator=(&this->GeometrySelection,param_1);
  this->bGeometrySelectionInitialized = true;
  return;
}

// SetGeometrySelection @ 14caa3850

void __thiscall
USingleTargetWithSelectionTool::SetGeometrySelection
          (USingleTargetWithSelectionTool *this,FGeometrySelection *param_1)

{
  UE::Geometry::FGeometrySelection::operator=(&this->GeometrySelection,param_1);
  this->bGeometrySelectionInitialized = true;
  return;
}

// SetTargetWorld @ 14caa4350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
USingleTargetWithSelectionTool::SetTargetWorld(USingleTargetWithSelectionTool *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// Shutdown @ 14caa6700

void __thiscall
USingleTargetWithSelectionTool::Shutdown
          (USingleTargetWithSelectionTool *this,EToolShutdownType param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  (**(code **)(this->_padding_ + 0x3b0))();
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->TargetWorld).WeakPtr = local_res8;
  UInteractiveTool::Shutdown((UInteractiveTool *)this,param_1);
  return;
}

// StaticRegisterNativesUSingleTargetWithSelectionTool @ 14caa72f0

void __cdecl
USingleTargetWithSelectionTool::StaticRegisterNativesUSingleTargetWithSelectionTool(void)

{
  return;
}

