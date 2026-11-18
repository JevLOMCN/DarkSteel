// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 87

// StaticClass @ 14cb58c90

UClass * __cdecl UGeometrySelectionManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionManager",
               &Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionManager,0x4d0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGeometrySelectionManager>,
               InternalVTableHelperCtorCaller<UGeometrySelectionManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton;
}

// UGeometrySelectionManager @ 14cb626c0

UGeometrySelectionManager * __thiscall
UGeometrySelectionManager::UGeometrySelectionManager
          (UGeometrySelectionManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SelectionElementType = Face;
  this->MeshTopologyMode = None;
  this->_padding_ = (longlong)&___7UGeometrySelectionManager__6B_;
  *(undefined8 *)&this->OnSelectionModified = 0;
  *(undefined8 *)&(this->OnSelectionModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectionModified).field_0x18 = 2;
  (this->ActiveTransformations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTransformations).ArrayNum = 0;
  (this->ActiveTransformations).ArrayMax = 0;
  (this->SelectionArguments).field0_0x0.DebugPtr = (UGeometrySelectionEditCommandArguments *)0x0;
  (this->ToolsContext).field0_0x0.DebugPtr = (UInteractiveToolsContext *)0x0;
  (this->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Factories).ArrayNum = 0;
  (this->Factories).ArrayMax = 0;
  (this->ActiveTargetReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTargetReferences).ArrayNum = 0;
  (this->ActiveTargetReferences).ArrayMax = 0;
  *(undefined8 *)&this->ActiveTargetMap = 0;
  *(undefined8 *)&(this->ActiveTargetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveTargetMap).field_0x20 = 0;
  this->bHitBackFaces = true;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveTargetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x48 = 0;
  (this->UnlockedTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnlockedTargets).ArrayNum = 0;
  (this->UnlockedTargets).ArrayMax = 0;
  *(undefined8 *)&this->TargetCache = 0;
  *(undefined8 *)&(this->TargetCache).field_0x8 = 0;
  *(undefined8 *)&(this->TargetCache).field_0x20 = 0;
  *(undefined4 *)&(this->TargetCache).field_0x28 = 0;
  *(undefined4 *)&(this->TargetCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetCache).field_0x34 = 0;
  *(undefined8 *)&(this->TargetCache).field_0x40 = 0;
  *(undefined4 *)&(this->TargetCache).field_0x48 = 0;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->CachedSelectionRenderElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSelectionRenderElements).ArrayNum = 0;
  (this->CachedSelectionRenderElements).ArrayMax = 0;
  (this->ActivePreviewSelection).ElementType = Face;
  (this->ActivePreviewSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->ActivePreviewSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x34 = 0;
  (this->ActivePreviewSelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActivePreviewSelection).Selection.HashSize = 0;
  (this->SelectedActivePreviewSelection).ElementType = Face;
  (this->SelectedActivePreviewSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->SelectedActivePreviewSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x34 = 0;
  (this->SelectedActivePreviewSelection).Selection.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SelectedActivePreviewSelection).Selection.HashSize = 0;
  (this->UnselectedActivePreviewSelection).ElementType = Face;
  (this->UnselectedActivePreviewSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->UnselectedActivePreviewSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x34 = 0;
  (this->UnselectedActivePreviewSelection).Selection.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->UnselectedActivePreviewSelection).Selection.HashSize = 0;
  (this->CachedSelectedPreviewRenderElements).Triangles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSelectedPreviewRenderElements).Triangles.ArrayNum = 0;
  (this->CachedSelectedPreviewRenderElements).Triangles.ArrayMax = 0;
  (this->CachedSelectedPreviewRenderElements).Segments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSelectedPreviewRenderElements).Segments.ArrayNum = 0;
  (this->CachedSelectedPreviewRenderElements).Segments.ArrayMax = 0;
  (this->CachedSelectedPreviewRenderElements).Points.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSelectedPreviewRenderElements).Points.ArrayNum = 0;
  (this->CachedSelectedPreviewRenderElements).Points.ArrayMax = 0;
  (this->CachedUnselectedPreviewRenderElements).Triangles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedUnselectedPreviewRenderElements).Triangles.ArrayNum = 0;
  (this->CachedUnselectedPreviewRenderElements).Triangles.ArrayMax = 0;
  (this->CachedUnselectedPreviewRenderElements).Segments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedUnselectedPreviewRenderElements).Segments.ArrayNum = 0;
  (this->CachedUnselectedPreviewRenderElements).Segments.ArrayMax = 0;
  (this->CachedUnselectedPreviewRenderElements).Points.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedUnselectedPreviewRenderElements).Points.ArrayNum = 0;
  (this->CachedUnselectedPreviewRenderElements).Points.ArrayMax = 0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->UnselectedParams).Identifiers,&UnselectedSetIds);
  (this->UnselectedParams).DepthBias = 5.0;
  (this->UnselectedParams).LineThickness = 2.0;
  (this->UnselectedParams).PointSize = 8.0;
  (this->UnselectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->UnselectedParams).SelectionFillColor.field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->HoverOverSelectedParams).Identifiers,&HoverOverSelectedSetIds);
  (this->HoverOverSelectedParams).DepthBias = 10.0;
  (this->HoverOverSelectedParams).LineThickness = 6.0;
  (this->HoverOverSelectedParams).PointSize = 10.0;
  (this->HoverOverSelectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->HoverOverSelectedParams).SelectionFillColor.field0_0x0.DebugPtr =
       (UMaterialInstanceDynamic *)0x0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->HoverOverUnselectedParams).Identifiers,&HoverOverUnselectedSetIds);
  (this->HoverOverUnselectedParams).DepthBias = 10.0;
  (this->HoverOverUnselectedParams).LineThickness = 6.0;
  (this->HoverOverUnselectedParams).PointSize = 10.0;
  (this->HoverOverUnselectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->HoverOverUnselectedParams).SelectionFillColor.field0_0x0.DebugPtr =
       (UMaterialInstanceDynamic *)0x0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->SelectedParams).Identifiers,&SelectedSetIds);
  (this->SelectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->SelectedParams).SelectionFillColor.field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->ActiveTrackedUpdateConfig).ChangeType = Add;
  (this->ActiveTrackedSelection).ElementType = Face;
  (this->ActiveTrackedSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->ActiveTrackedSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x20 = 0;
  (this->SelectedParams).DepthBias = 6.0;
  (this->SelectedParams).LineThickness = 6.0;
  (this->SelectedParams).PointSize = 10.0;
  this->bInTrackedSelectionChange = false;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x34 = 0;
  (this->ActiveTrackedSelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveTrackedSelection).Selection.HashSize = 0;
  (this->InitialTrackedDelta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialTrackedDelta).Removed.ArrayNum = 0;
  (this->InitialTrackedDelta).Removed.ArrayMax = 0;
  (this->InitialTrackedDelta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialTrackedDelta).Added.ArrayNum = 0;
  (this->InitialTrackedDelta).Added.ArrayMax = 0;
  (this->ActiveTrackedDelta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTrackedDelta).Removed.ArrayNum = 0;
  (this->ActiveTrackedDelta).Removed.ArrayMax = 0;
  (this->ActiveTrackedDelta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTrackedDelta).Added.ArrayNum = 0;
  (this->ActiveTrackedDelta).Added.ArrayMax = 0;
  this->bSelectionModifiedDuringTrackedChange = false;
  (this->CachedSelectableRenderElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSelectableRenderElements).ArrayNum = 0;
  (this->CachedSelectableRenderElements).ArrayMax = 0;
  this->RenderCachesDirtyFlags = None;
  (this->SavedSelection).Targets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedSelection).Targets.ArrayNum = 0;
  (this->SavedSelection).Targets.ArrayMax = 0;
  (this->SavedSelection).Selections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedSelection).Selections.ArrayNum = 0;
  (this->SavedSelection).Selections.ArrayMax = 0;
  return this;
}

// UGeometrySelectionManager @ 14cb62b20

UGeometrySelectionManager * __thiscall
UGeometrySelectionManager::UGeometrySelectionManager
          (UGeometrySelectionManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SelectionElementType = Face;
  this->MeshTopologyMode = None;
  this->_padding_ = (longlong)&___7UGeometrySelectionManager__6B_;
  *(undefined8 *)&this->OnSelectionModified = 0;
  *(undefined8 *)&(this->OnSelectionModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectionModified).field_0x18 = 2;
  (this->ActiveTransformations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTransformations).ArrayNum = 0;
  (this->ActiveTransformations).ArrayMax = 0;
  (this->SelectionArguments).field0_0x0.DebugPtr = (UGeometrySelectionEditCommandArguments *)0x0;
  (this->ToolsContext).field0_0x0.DebugPtr = (UInteractiveToolsContext *)0x0;
  (this->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Factories).ArrayNum = 0;
  (this->Factories).ArrayMax = 0;
  (this->ActiveTargetReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTargetReferences).ArrayNum = 0;
  (this->ActiveTargetReferences).ArrayMax = 0;
  *(undefined8 *)&this->ActiveTargetMap = 0;
  *(undefined8 *)&(this->ActiveTargetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveTargetMap).field_0x20 = 0;
  this->bHitBackFaces = true;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveTargetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveTargetMap).field_0x48 = 0;
  (this->UnlockedTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnlockedTargets).ArrayNum = 0;
  (this->UnlockedTargets).ArrayMax = 0;
  *(undefined8 *)&this->TargetCache = 0;
  *(undefined8 *)&(this->TargetCache).field_0x8 = 0;
  *(undefined8 *)&(this->TargetCache).field_0x20 = 0;
  *(undefined4 *)&(this->TargetCache).field_0x28 = 0;
  *(undefined4 *)&(this->TargetCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetCache).field_0x34 = 0;
  *(undefined8 *)&(this->TargetCache).field_0x40 = 0;
  *(undefined4 *)&(this->TargetCache).field_0x48 = 0;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->CachedSelectionRenderElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSelectionRenderElements).ArrayNum = 0;
  (this->CachedSelectionRenderElements).ArrayMax = 0;
  (this->ActivePreviewSelection).ElementType = Face;
  (this->ActivePreviewSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->ActivePreviewSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActivePreviewSelection).Selection.Elements.field_0x34 = 0;
  (this->ActivePreviewSelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActivePreviewSelection).Selection.HashSize = 0;
  (this->SelectedActivePreviewSelection).ElementType = Face;
  (this->SelectedActivePreviewSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->SelectedActivePreviewSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedActivePreviewSelection).Selection.Elements.field_0x34 = 0;
  (this->SelectedActivePreviewSelection).Selection.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SelectedActivePreviewSelection).Selection.HashSize = 0;
  (this->UnselectedActivePreviewSelection).ElementType = Face;
  (this->UnselectedActivePreviewSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->UnselectedActivePreviewSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->UnselectedActivePreviewSelection).Selection.Elements.field_0x34 = 0;
  (this->UnselectedActivePreviewSelection).Selection.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->UnselectedActivePreviewSelection).Selection.HashSize = 0;
  (this->CachedSelectedPreviewRenderElements).Triangles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSelectedPreviewRenderElements).Triangles.ArrayNum = 0;
  (this->CachedSelectedPreviewRenderElements).Triangles.ArrayMax = 0;
  (this->CachedSelectedPreviewRenderElements).Segments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSelectedPreviewRenderElements).Segments.ArrayNum = 0;
  (this->CachedSelectedPreviewRenderElements).Segments.ArrayMax = 0;
  (this->CachedSelectedPreviewRenderElements).Points.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSelectedPreviewRenderElements).Points.ArrayNum = 0;
  (this->CachedSelectedPreviewRenderElements).Points.ArrayMax = 0;
  (this->CachedUnselectedPreviewRenderElements).Triangles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedUnselectedPreviewRenderElements).Triangles.ArrayNum = 0;
  (this->CachedUnselectedPreviewRenderElements).Triangles.ArrayMax = 0;
  (this->CachedUnselectedPreviewRenderElements).Segments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedUnselectedPreviewRenderElements).Segments.ArrayNum = 0;
  (this->CachedUnselectedPreviewRenderElements).Segments.ArrayMax = 0;
  (this->CachedUnselectedPreviewRenderElements).Points.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedUnselectedPreviewRenderElements).Points.ArrayNum = 0;
  (this->CachedUnselectedPreviewRenderElements).Points.ArrayMax = 0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->UnselectedParams).Identifiers,&UnselectedSetIds);
  (this->UnselectedParams).DepthBias = 5.0;
  (this->UnselectedParams).LineThickness = 2.0;
  (this->UnselectedParams).PointSize = 8.0;
  (this->UnselectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->UnselectedParams).SelectionFillColor.field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->HoverOverSelectedParams).Identifiers,&HoverOverSelectedSetIds);
  (this->HoverOverSelectedParams).DepthBias = 10.0;
  (this->HoverOverSelectedParams).LineThickness = 6.0;
  (this->HoverOverSelectedParams).PointSize = 10.0;
  (this->HoverOverSelectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->HoverOverSelectedParams).SelectionFillColor.field0_0x0.DebugPtr =
       (UMaterialInstanceDynamic *)0x0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->HoverOverUnselectedParams).Identifiers,&HoverOverUnselectedSetIds);
  (this->HoverOverUnselectedParams).DepthBias = 10.0;
  (this->HoverOverUnselectedParams).LineThickness = 6.0;
  (this->HoverOverUnselectedParams).PointSize = 10.0;
  (this->HoverOverUnselectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->HoverOverUnselectedParams).SelectionFillColor.field0_0x0.DebugPtr =
       (UMaterialInstanceDynamic *)0x0;
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&(this->SelectedParams).Identifiers,&SelectedSetIds);
  (this->SelectedParams).Color.field0_0x0.Bits = 0xff000000;
  (this->SelectedParams).SelectionFillColor.field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->ActiveTrackedUpdateConfig).ChangeType = Add;
  (this->ActiveTrackedSelection).ElementType = Face;
  (this->ActiveTrackedSelection).TopologyType = Triangle;
  *(undefined8 *)&(this->ActiveTrackedSelection).Selection.Elements = 0;
  *(undefined8 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x20 = 0;
  (this->SelectedParams).DepthBias = 6.0;
  (this->SelectedParams).LineThickness = 6.0;
  (this->SelectedParams).PointSize = 10.0;
  this->bInTrackedSelectionChange = false;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveTrackedSelection).Selection.Elements.field_0x34 = 0;
  (this->ActiveTrackedSelection).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveTrackedSelection).Selection.HashSize = 0;
  (this->InitialTrackedDelta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialTrackedDelta).Removed.ArrayNum = 0;
  (this->InitialTrackedDelta).Removed.ArrayMax = 0;
  (this->InitialTrackedDelta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialTrackedDelta).Added.ArrayNum = 0;
  (this->InitialTrackedDelta).Added.ArrayMax = 0;
  (this->ActiveTrackedDelta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTrackedDelta).Removed.ArrayNum = 0;
  (this->ActiveTrackedDelta).Removed.ArrayMax = 0;
  (this->ActiveTrackedDelta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTrackedDelta).Added.ArrayNum = 0;
  (this->ActiveTrackedDelta).Added.ArrayMax = 0;
  this->bSelectionModifiedDuringTrackedChange = false;
  (this->CachedSelectableRenderElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSelectableRenderElements).ArrayNum = 0;
  (this->CachedSelectableRenderElements).ArrayMax = 0;
  this->RenderCachesDirtyFlags = None;
  (this->SavedSelection).Targets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedSelection).Targets.ArrayNum = 0;
  (this->SavedSelection).Targets.ArrayMax = 0;
  (this->SavedSelection).Selections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedSelection).Selections.ArrayNum = 0;
  (this->SavedSelection).Selections.ArrayMax = 0;
  return this;
}

// ~UGeometrySelectionManager @ 14cb64cb0

void __thiscall
UGeometrySelectionManager::~UGeometrySelectionManager(UGeometrySelectionManager *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  longlong lVar4;
  FString *pFVar5;
  longlong lVar6;
  
  this->_padding_ = (longlong)&___7UGeometrySelectionManager__6B_;
  DestructItems<UE::Geometry::FGeometrySelection,int>
            ((FGeometrySelection *)(this->SavedSelection).Selections.AllocatorInstance.Data,
             (this->SavedSelection).Selections.ArrayNum);
  pFVar1 = (this->SavedSelection).Selections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SavedSelection).Targets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FGeometrySelectionElements,int>
            ((FGeometrySelectionElements *)
             (this->CachedSelectableRenderElements).AllocatorInstance.Data,
             (this->CachedSelectableRenderElements).ArrayNum);
  pFVar1 = (this->CachedSelectableRenderElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveTrackedDelta).Added.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveTrackedDelta).Removed.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitialTrackedDelta).Added.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InitialTrackedDelta).Removed.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ActiveTrackedSelection).Selection.HashSize = 0;
  FVar2 = (this->ActiveTrackedSelection).Selection.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveTrackedSelection).Selection.Elements);
  lVar6 = 3;
  pFVar5 = (FString *)&(this->SelectedParams).DepthBias;
  lVar4 = 3;
  do {
    pFVar1 = pFVar5[-1].Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pFVar5 = (FString *)&(this->HoverOverUnselectedParams).DepthBias;
  lVar4 = 3;
  do {
    pFVar1 = pFVar5[-1].Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  lVar4 = 3;
  pFVar5 = (FString *)&(this->HoverOverSelectedParams).DepthBias;
  do {
    pFVar1 = pFVar5[-1].Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pFVar5 = (FString *)&(this->UnselectedParams).DepthBias;
  do {
    pFVar1 = pFVar5[-1].Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pFVar1 = (this->CachedUnselectedPreviewRenderElements).Points.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedUnselectedPreviewRenderElements).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedUnselectedPreviewRenderElements).Triangles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSelectedPreviewRenderElements).Points.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSelectedPreviewRenderElements).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedSelectedPreviewRenderElements).Triangles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->UnselectedActivePreviewSelection).Selection.HashSize = 0;
  FVar2 = (this->UnselectedActivePreviewSelection).Selection.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UnselectedActivePreviewSelection).Selection.Elements);
  (this->SelectedActivePreviewSelection).Selection.HashSize = 0;
  FVar2 = (this->SelectedActivePreviewSelection).Selection.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedActivePreviewSelection).Selection.Elements);
  (this->ActivePreviewSelection).Selection.HashSize = 0;
  FVar2 = (this->ActivePreviewSelection).Selection.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActivePreviewSelection).Selection.Elements);
  DestructItems<UE::Geometry::FGeometrySelectionElements,int>
            ((FGeometrySelectionElements *)
             (this->CachedSelectionRenderElements).AllocatorInstance.Data,
             (this->CachedSelectionRenderElements).ArrayNum);
  pFVar1 = (this->CachedSelectionRenderElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TargetCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TargetCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetCache);
  pFVar1 = (this->UnlockedTargets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ActiveTargetMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ActiveTargetMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveTargetMap);
  DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
            ((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
             (this->ActiveTargetReferences).AllocatorInstance.Data,
             (this->ActiveTargetReferences).ArrayNum);
  pFVar1 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_>,int>
            ((TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_> *)
             (this->Factories).AllocatorInstance.Data,(this->Factories).ArrayNum);
  pFVar1 = (this->Factories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveTransformations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectionModified).field_0x8,*(int *)&(this->OnSelectionModified).field_0x10
            );
  pvVar3 = *(void **)&(this->OnSelectionModified).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionModified);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14cb68d30

void __thiscall
`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar12 = *(longlong *)this;
  uVar9 = 0;
  if (param_1 < *(int *)(lVar12 + 0x18)) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar12 = *(longlong *)(lVar12 + 0x10);
  pFVar3 = (param_2->AllocatorInstance).Data;
  lVar11 = (longlong)param_1 * 0x38;
  pdVar1 = (double *)(lVar11 + 0x10 + lVar12);
  dVar5 = *pdVar1;
  dStack_58 = *(double *)(lVar11 + 0x30 + lVar12);
  dVar6 = *(double *)(lVar11 + lVar12);
  dVar7 = ((double *)(lVar11 + lVar12))[1];
  pdVar2 = (double *)(lVar11 + 0x20 + lVar12);
  lVar12 = *(longlong *)((longlong)this + 8);
  dStack_68 = pdVar1[1] * dStack_58;
  uStack_48 = *(undefined4 *)(lVar12 + 0x30);
  uStack_4c = *(undefined4 *)(lVar12 + 0x34);
  local_60 = *pdVar2 * dStack_58;
  dStack_58 = pdVar2[1] * dStack_58;
  local_80 = dVar6 - dStack_68;
  dStack_68 = dStack_68 + dVar6;
  dStack_78 = dVar7 - local_60;
  local_60 = local_60 + dVar7;
  local_70 = dVar5 - dStack_58;
  dStack_58 = dStack_58 + dVar5;
  local_50 = *(undefined4 *)(lVar12 + 0x3c);
  if ((pFVar3 <= (FScriptContainerElement *)&local_80) &&
     ((FScriptContainerElement *)&local_80 < pFVar3 + (longlong)param_2->ArrayMax * 0x40)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar10 = param_2->ArrayNum;
  if (iVar10 == param_2->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar10 + 1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  lVar12 = (longlong)iVar10 * 0x40;
  *(double *)(pFVar3 + lVar12) = local_80;
  *(double *)(pFVar3 + lVar12 + 8) = dStack_78;
  *(double *)(pFVar3 + lVar12 + 0x10) = local_70;
  *(double *)(pFVar3 + lVar12 + 0x10 + 8) = dStack_68;
  *(double *)(pFVar3 + lVar12 + 0x20) = local_60;
  *(double *)(pFVar3 + lVar12 + 0x20 + 8) = dStack_58;
  *(ulonglong *)(pFVar3 + lVar12 + 0x30) = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(pFVar3 + lVar12 + 0x30 + 8) = CONCAT44(uStack_44,uStack_48);
  return;
}

// operator() @ 14cb6ca10

void __thiscall
`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_2>::operator()
          (void *this,int param_1,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar5;
  code *pcVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 TStack_290;
  TVector<double>_u_0 local_278 [2];
  undefined8 local_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 local_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  TObjectPtr<UMaterialInterface>_u_0 local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  
  plVar3 = *(longlong **)this;
  lVar20 = (longlong)param_1;
  uVar18 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + lVar20 * 0x48);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  pdVar1 = (double *)(lVar4 + 0x10 + lVar20 * 0x48);
  dVar7 = *pdVar1;
  TStack_290._s_0.X = pdVar1[1];
  pdVar1 = (double *)(lVar4 + 0x20 + lVar20 * 0x48);
  TStack_290._s_0.Y = *pdVar1;
  uVar8 = *(undefined4 *)(pdVar1 + 1);
  uVar9 = *(undefined4 *)((longlong)pdVar1 + 0xc);
  pdVar1 = (double *)(lVar4 + 0x30 + lVar20 * 0x48);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  puVar2 = (undefined4 *)(lVar4 + 0x40 + lVar20 * 0x48);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  local_2a8._s_0.X = dVar12;
  local_2a8._s_0.Y = dVar13;
  local_2a8._s_0.Z = dVar7;
  TStack_290._16_4_ = uVar8;
  TStack_290._20_4_ = uVar9;
  local_278[0]._0_8_ = dVar14;
  local_278[0]._8_8_ = dVar15;
  local_278[0]._16_4_ = uVar10;
  local_278[0]._20_4_ = uVar11;
  UE::Geometry::VectorUtil::Normal<double>
            ((TVector<double> *)&local_2c8._s_0,(TVector<double> *)&local_2a8._s_0,
             (TVector<double> *)&TStack_290._s_0,(TVector<double> *)&local_278[0]._s_0);
  dStack_110 = TStack_290._s_0.Y;
  local_118 = TStack_290._s_0.X;
  uVar16 = __real_3ff0000000000000;
  local_218 = *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x3c);
  local_168 = (TObjectPtr<UMaterialInterface>_u_0)
              ((TObjectPtr<UMaterialInterface>_u_0 *)(*(longlong *)((longlong)this + 8) + 0x40))->
              DebugPtr;
  local_238 = 0;
  local_1e8 = 0;
  local_198 = __real_3ff0000000000000;
  dStack_230 = local_2c8._s_0.X;
  dStack_228 = local_2c8._s_0.Y;
  dStack_220 = local_2c8._s_0.Z;
  dStack_1e0 = local_2c8._s_0.X;
  dStack_1d8 = local_2c8._s_0.Y;
  dStack_1d0 = local_2c8._s_0.Z;
  dStack_190 = local_2c8._s_0.X;
  dStack_188 = local_2c8._s_0.Y;
  dStack_180 = local_2c8._s_0.Z;
  local_1c8 = local_218;
  local_178 = local_218;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_168.DebugPtr != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168.DebugPtr);
  }
  pTVar5 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_2->AllocatorInstance).Data;
  uStack_100 = (undefined4)uVar16;
  uStack_fc = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_140 = local_238;
  dStack_138 = dStack_230;
  local_120 = CONCAT44(uStack_214,local_218);
  local_f8 = local_1e8;
  dStack_f0 = dStack_1e0;
  local_d8 = CONCAT44(uStack_1c4,local_1c8);
  local_130 = dStack_228;
  dStack_128 = dStack_220;
  local_b0 = local_198;
  dStack_a8 = dStack_190;
  local_90 = CONCAT44(uStack_174,local_178);
  local_e8 = dStack_1d8;
  dStack_e0 = dStack_1d0;
  uStack_148 = 0;
  local_a0 = dStack_188;
  dStack_98 = dStack_180;
  local_160 = dVar12;
  dStack_158 = dVar13;
  local_150 = dVar7;
  local_108 = uVar8;
  uStack_104 = uVar9;
  local_d0 = dVar14;
  dStack_c8 = dVar15;
  local_c0 = uVar10;
  uStack_bc = uVar11;
  uStack_b8 = uStack_100;
  uStack_b4 = uStack_fc;
  if ((pTVar5 <= &local_168) && (&local_168 < pTVar5 + (longlong)param_2->ArrayMax * 0x1c)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar19 = param_2->ArrayNum;
  if (iVar19 == param_2->ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e0,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar19 + 1;
  FRenderableTriangle::FRenderableTriangle
            ((FRenderableTriangle *)((param_2->AllocatorInstance).Data + (longlong)iVar19 * 0xe0),
             (FRenderableTriangle *)&local_168.ObjectPtr);
  return;
}

// operator() @ 14cb6e180

void __thiscall
`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_3>::operator()
          (void *this,int param_1,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar8 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar8 + 0x28)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x20);
  lVar2 = *(longlong *)((longlong)this + 8);
  pFVar3 = (param_2->AllocatorInstance).Data;
  puVar1 = (undefined8 *)(lVar8 + (longlong)param_1 * 0x18);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  local_18 = *(undefined4 *)(lVar2 + 0x30);
  uStack_1c = *(undefined4 *)(lVar2 + 0x38);
  local_28 = *(undefined8 *)(lVar8 + 0x10 + (longlong)param_1 * 0x18);
  uStack_20 = *(undefined4 *)(lVar2 + 0x3c);
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_2->ArrayMax * 0x28)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar8 = (longlong)iVar7;
  param_2->ArrayNum = iVar7 + 1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar8 * 0x28) = local_38;
  *(undefined8 *)(pFVar3 + lVar8 * 0x28 + 8) = uStack_30;
  *(undefined8 *)(pFVar3 + lVar8 * 0x28 + 0x10) = local_28;
  *(ulonglong *)(pFVar3 + lVar8 * 0x28 + 0x10 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(pFVar3 + lVar8 * 0x28 + 0x20) = CONCAT44(uStack_14,local_18);
  return;
}

// AccumulateSelectionUpdate_Raycast @ 14cb72860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::AccumulateSelectionUpdate_Raycast
          (UGeometrySelectionManager *this,TRay<double> *param_1,
          FGeometrySelectionUpdateResult *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined8 local_18;
  
  if (this->bInTrackedSelectionChange == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054739449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x407,"bInTrackedSelectionChange");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (((this->ActiveTargetReferences).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = *(longlong *)(this->ActiveTargetReferences).AllocatorInstance.Data;
    local_58 = 0;
    local_38 = ___xmm_3ff00000000000000000000000000000;
    uStack_30 = _UNK_15061cbc8;
    local_98 = (param_1->Origin).field0_0x0._s_0.X;
    dStack_90 = (param_1->Origin).field0_0x0._s_0.Y;
    local_28 = 0x42b40000;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = (param_1->Direction).field0_0x0._s_0.Y;
    dStack_70 = (param_1->Direction).field0_0x0._s_0.Z;
    local_24 = 0x42c80000;
    local_18 = __real_3ff0000000000000;
    local_88 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x10);
    uStack_84 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x14);
    uStack_80 = *(undefined4 *)&(param_1->Direction).field0_0x0;
    uStack_7c = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 4);
    local_20 = 0x3f800000;
    local_1c = 0;
    plVar4 = (longlong *)
             (**(code **)(((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                          DebugPtr)->_padding_ + 0x398))();
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
    plVar4 = *(longlong **)(lVar1 + 0x20);
    (**(code **)(*plVar4 + 0x60))
              (plVar4,&local_98,*(undefined8 *)(lVar1 + 0x80),&this->ActiveTrackedUpdateConfig,
               param_2);
    if (param_2->bSelectionModified != false) {
      this->bSelectionModifiedDuringTrackedChange = true;
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
      Append<unsigned___int64,TSizedDefaultAllocator<32>_>
                (&(this->ActiveTrackedDelta).Added,&(param_2->SelectionDelta).Added);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
      Append<unsigned___int64,TSizedDefaultAllocator<32>_>
                (&(this->ActiveTrackedDelta).Removed,&(param_2->SelectionDelta).Removed);
      this->RenderCachesDirtyFlags =
           this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnSelectionModified);
    }
  }
  return;
}

// AddActiveTarget @ 14cb72e30

bool __thiscall
UGeometrySelectionManager::AddActiveTarget
          (UGeometrySelectionManager *this,FGeometryIdentifier *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *pTVar3;
  ulong64 uVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FDelegateHandle FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [16];
  TPairInitializer<FGeometryIdentifier_const_&,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_&>
  local_res18;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> local_78;
  FGeometryIdentifier *local_68;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *local_60;
  ETargetType local_58;
  EObjectType EStack_54;
  int iStack_50;
  int iStack_4c;
  FGeometryIdentifier local_48;
  
  uVar9 = ::GetTypeHash(param_1);
  iVar10 = TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FGeometryIdentifier>
                     ((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
                       *)&this->ActiveTargetMap,uVar9,param_1);
  if (iVar10 == -1) {
    pFVar13 = (this->Factories).AllocatorInstance.Data;
    iVar10 = (this->Factories).ArrayNum;
    pFVar12 = pFVar13 + (longlong)iVar10 * 8;
    while( true ) {
      if ((this->Factories).ArrayNum != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar12) {
        return false;
      }
      local_58 = param_1->TargetType;
      EStack_54 = param_1->ObjectType;
      iStack_50 = (param_1->TargetObject).WeakPtr.ObjectIndex;
      iStack_4c = (param_1->TargetObject).WeakPtr.ObjectSerialNumber;
      cVar6 = (**(code **)(**(longlong **)pFVar13 + 8))(*(longlong **)pFVar13,&local_58);
      if (cVar6 != '\0') break;
      pFVar13 = pFVar13 + 8;
    }
    if (*(IGeometrySelectorFactory **)pFVar13 != (IGeometrySelectorFactory *)0x0) {
      local_48.TargetType = param_1->TargetType;
      local_48.ObjectType = param_1->ObjectType;
      local_48.TargetObject.WeakPtr = (param_1->TargetObject).WeakPtr;
      GetCachedTarget(this,&local_78,&local_48,*(IGeometrySelectorFactory **)pFVar13);
      if (local_78.Object == (FGeometrySelectionTarget *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        return false;
      }
      local_60 = &local_78;
      local_68 = param_1;
      TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FGeometryIdentifier_const_&,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_&>_>
                ((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
                  *)&this->ActiveTargetMap,&local_res18,(bool *)&local_68);
      pTVar2 = &this->ActiveTargetReferences;
      pTVar3 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
               (pTVar2->AllocatorInstance).Data;
      if (((pTVar3 <= &local_78) && (&local_78 < pTVar3 + (this->ActiveTargetReferences).ArrayMax))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar10 = (this->ActiveTargetReferences).ArrayNum;
      piVar1 = &(this->ActiveTargetReferences).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      (this->ActiveTargetReferences).ArrayNum = iVar10 + 1;
      *(FGeometrySelectionTarget **)pFVar12 = local_78.Object;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_78.Object == (FGeometrySelectionTarget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      FVar11 = TMulticastDelegateRegistration<void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy>
               ::AddUObject<UGeometrySelectionManager>
                         ((TMulticastDelegateRegistration<void___cdecl(IGeometrySelector_*),FDefaultDelegateUserPolicy>
                           *)&(((local_78.Object)->Selector).Ptr)->OnGeometryModifed,
                          (UGeometrySelectionManager *)&local_res18.Value,(pmf_b361eaac)this);
                    /* WARNING: Load size is inaccurate */
      uVar4 = *FVar11.ID;
      if ((local_78.Object == (FGeometrySelectionTarget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      ((local_78.Object)->OnGeometryModifiedHandle).ID = uVar4;
      UpdateSelectionRenderCacheOnTargetChange(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  return false;
}

// ApplyChange @ 14cb74310

void __thiscall
UGeometrySelectionManager::ApplyChange
          (UGeometrySelectionManager *this,IGeometrySelectionChange *param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  int local_48;
  int local_44;
  TWeakObjectPtr<UObject,FWeakObjectPtr> local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  cVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (cVar3 == '\0') {
    (**(code **)((longlong)*param_1 + 8))(param_1,&local_48);
    uVar7 = 0;
    uVar9 = uVar7;
    if (0 < (this->ActiveTargetReferences).ArrayNum) {
      do {
        uVar6 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar6 < (this->ActiveTargetReferences).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (this->ActiveTargetReferences).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar8 + uVar9) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        piVar1 = *(int **)(pFVar8 + uVar9);
        if (((*piVar1 == local_48) && (piVar1[1] == local_44)) &&
           (bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                              ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(piVar1 + 2),&local_40),
           bVar4)) {
          local_38 = (void *)0x0;
          local_30 = 0;
          local_28 = (void *)0x0;
          pcVar2 = *(code **)((longlong)*param_1 + 0x10);
          local_20 = 0;
          uVar5 = 0;
          if ((int)uVar6 < (this->ActiveTargetReferences).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = (this->ActiveTargetReferences).AllocatorInstance.Data +
                   (longlong)(int)uVar6 * 0x10;
          if ((*(longlong *)pFVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (*pcVar2)(param_1,*(undefined8 *)(*(longlong *)pFVar8 + 0x80),&local_38);
          if (((int)local_30 != 0) || ((int)local_20 != 0)) {
            this->RenderCachesDirtyFlags =
                 this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&this->OnSelectionModified);
          }
          if (local_28 != (void *)0x0) {
            FMemory::Free(local_28);
          }
          if (local_38 == (void *)0x0) {
            return;
          }
          FMemory::Free(local_38);
          return;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar6 + 1) < (this->ActiveTargetReferences).ArrayNum);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054738928>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x610,"HasBeenShutDown() == false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// BeginTrackedSelectionChange @ 14cb74a90

bool __thiscall
UGeometrySelectionManager::BeginTrackedSelectionChange
          (UGeometrySelectionManager *this,FGeometrySelectionUpdateConfig param_1,bool param_2)

{
  IToolsContextTransactionsAPI *pIVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  FText *pFVar7;
  char local_res8 [8];
  FText local_68;
  FGeometrySelectionDelta local_58;
  FGeometrySelectionDelta local_38;
  
  cVar4 = (**(code **)(this->_padding_ + 0x348))();
  if (cVar4 == '\0') {
    local_res8[0] = cVar4;
    bVar5 = `UGeometrySelectionManager::BeginTrackedSelectionChange'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar5) {
      return false;
    }
  }
  pIVar1 = this->TransactionsAPI;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x18);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UGeometrySelectionManager",L"ChangeSelection",L"Change Selection")
  ;
  (*pcVar2)(pIVar1,pFVar7);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  this->bInTrackedSelectionChange = true;
  if ((this->ActiveTargetReferences).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  local_58.Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Removed.ArrayNum = 0;
  local_58.Removed.ArrayMax = 0;
  local_58.Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar3 = *(longlong *)(this->ActiveTargetReferences).AllocatorInstance.Data;
  (this->ActiveTrackedUpdateConfig).ChangeType = param_1.ChangeType;
  this->bSelectionModifiedDuringTrackedChange = false;
  local_58.Added.ArrayNum = 0;
  local_58.Added.ArrayMax = 0;
  UE::Geometry::FGeometrySelectionDelta::operator=(&this->InitialTrackedDelta,&local_58);
  if (local_58.Added.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Added.AllocatorInstance.Data);
  }
  if (local_58.Removed.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Removed.AllocatorInstance.Data);
  }
  if (param_2) {
    UE::Geometry::FGeometrySelectionEditor::ClearSelection
              (*(FGeometrySelectionEditor **)(lVar3 + 0x80),&this->InitialTrackedDelta);
    this->bSelectionModifiedDuringTrackedChange = true;
  }
  (this->ActiveTrackedSelection).ElementType = *(EGeometryElementType *)(lVar3 + 0x28);
  (this->ActiveTrackedSelection).TopologyType = *(EGeometryTopologyType *)(lVar3 + 0x2c);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
            (&(this->ActiveTrackedSelection).Selection,
             (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
             (lVar3 + 0x30));
  local_38.Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Removed.ArrayNum = 0;
  local_38.Removed.ArrayMax = 0;
  local_38.Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Added.ArrayNum = 0;
  local_38.Added.ArrayMax = 0;
  UE::Geometry::FGeometrySelectionDelta::operator=(&this->ActiveTrackedDelta,&local_38);
  if (local_38.Added.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Added.AllocatorInstance.Data);
  }
  if (local_38.Removed.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Removed.AllocatorInstance.Data);
  }
  if ((param_2) &&
     (((this->InitialTrackedDelta).Removed.ArrayNum != 0 ||
      ((this->InitialTrackedDelta).Added.ArrayNum != 0)))) {
    this->RenderCachesDirtyFlags =
         this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionModified);
  }
  return true;
}

// BeginTransformation @ 14cb75190

bool __thiscall UGeometrySelectionManager::BeginTransformation(UGeometrySelectionManager *this)

{
  TArray<IGeometrySelectionTransformer_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  longlong *local_48;
  undefined8 local_40;
  
  cVar8 = (**(code **)(this->_padding_ + 0x3c0))();
  if (cVar8 == '\0') {
    cVar8 = (**(code **)(this->_padding_ + 0x388))(this);
    if (cVar8 != '\0') {
      local_res10 = (this->ActiveTargetReferences).ArrayNum;
      uVar13 = (ulonglong)(int)local_res10;
      bVar9 = false;
      pFVar14 = (this->ActiveTargetReferences).AllocatorInstance.Data;
      local_res18 = pFVar14 + uVar13 * 0x10;
      while( true ) {
        pFVar6 = local_res18;
        if ((this->ActiveTargetReferences).ArrayNum != (int)uVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar14 == pFVar6) break;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
        lVar4 = *(longlong *)pFVar14;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar4 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
        plVar5 = *(longlong **)(lVar4 + 0x20);
        pcVar7 = *(code **)(*plVar5 + 0xb8);
        if (lVar4 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
        local_48 = (longlong *)(*pcVar7)(plVar5,lVar4 + 0x28);
        pTVar1 = &this->ActiveTransformations;
        if (local_48 == (longlong *)0x0) {
          pFVar6 = (pTVar1->AllocatorInstance).Data;
          local_40 = 0;
          if ((pFVar6 <= (FScriptContainerElement *)&local_40) &&
             ((FScriptContainerElement *)&local_40 <
              pFVar6 + (longlong)(this->ActiveTransformations).ArrayMax * 8)) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
          }
          iVar12 = (this->ActiveTransformations).ArrayNum;
          piVar2 = &(this->ActiveTransformations).ArrayMax;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->ActiveTransformations).ArrayNum = iVar12 + 1;
          *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_40;
        }
        else {
          (**(code **)(*local_48 + 0x10))(local_48,lVar4 + 0x28);
          pFVar6 = (pTVar1->AllocatorInstance).Data;
          if ((pFVar6 <= (FScriptContainerElement *)&local_48) &&
             ((FScriptContainerElement *)&local_48 <
              pFVar6 + (longlong)(this->ActiveTransformations).ArrayMax * 8)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
          }
          iVar12 = (this->ActiveTransformations).ArrayNum;
          piVar2 = &(this->ActiveTransformations).ArrayMax;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar1->AllocatorInstance,piVar2);
          }
          bVar9 = true;
          (this->ActiveTransformations).ArrayNum = iVar12 + 1;
          *(longlong **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_48;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar13 = (ulonglong)local_res10;
        pFVar14 = pFVar14 + 0x10;
      }
      if (bVar9) {
        return true;
      }
      (this->ActiveTransformations).ArrayNum = 0;
      if ((this->ActiveTransformations).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ActiveTransformations).AllocatorInstance,0,
                   &(this->ActiveTransformations).ArrayMax);
        return false;
      }
    }
  }
  else {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054739126>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x54a,"IsInActiveTransformation() == false");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  return false;
}

// CanBeginTrackedSelectionChange @ 14cb77770

bool __thiscall
UGeometrySelectionManager::CanBeginTrackedSelectionChange(UGeometrySelectionManager *this)

{
  if ((0 < (this->ActiveTargetReferences).ArrayNum) && (this->bInTrackedSelectionChange == false)) {
    return true;
  }
  return false;
}

// CanExecuteSelectionCommand @ 14cb777c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGeometrySelectionManager::CanExecuteSelectionCommand
          (UGeometrySelectionManager *this,UGeometrySelectionEditCommand *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  ETargetType EVar6;
  int iVar7;
  ETargetType EVar8;
  bool bVar9;
  undefined8 uVar10;
  FWeakObjectPtr FVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  char cVar15;
  UObject *pUVar16;
  UGeometrySelectionEditCommandArguments *pUVar17;
  ETargetType *pEVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  FWeakObjectPtr FStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((this->SelectionArguments).field0_0x0.DebugPtr ==
      (UGeometrySelectionEditCommandArguments *)0x0) {
    pUVar16 = GetTransientPackageAsObject();
    pUVar17 = NewObject<UGeometrySelectionEditCommandArguments>(pUVar16);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 != (UGeometrySelectionEditCommandArguments *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    (this->SelectionArguments).field0_0x0.DebugPtr = pUVar17;
  }
  FVar11 = _UNK_150ebf528;
  uVar10 = ___xmm_00000000000000000000000000000001;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar19 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar20 = pFVar19 + (longlong)iVar1 * 0x10;
  bVar9 = true;
  bVar14 = false;
  do {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar19 == pFVar20) {
      if (!bVar14) {
        cVar15 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
        if (cVar15 == '\0') {
          return false;
        }
        if ((this->ActiveTargetReferences).ArrayNum < 1) {
          return false;
        }
        if (this->MeshTopologyMode == None) {
          return false;
        }
      }
      if (!bVar9) {
        return false;
      }
      return true;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
    lVar3 = *(longlong *)pFVar19;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar3 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
      local_98 = 0;
      local_80 = uVar10;
      FStack_78 = FVar11;
      FWeakObjectPtr::operator=(&FStack_78,(FObjectPtr)&local_98);
      uStack_68 = 0;
      if ((lVar3 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      local_70 = lVar3 + 0x28;
      if ((lVar3 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      pEVar18 = (ETargetType *)
                (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x28))
                          (*(longlong **)(lVar3 + 0x20),local_90);
      EVar6 = pEVar18[1];
      local_80 = *(undefined8 *)pEVar18;
      iVar7 = ((FWeakObjectPtr *)(pEVar18 + 2))->ObjectIndex;
      EVar8 = pEVar18[3];
      FStack_78 = *(FWeakObjectPtr *)(pEVar18 + 2);
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      pUVar17 = (this->SelectionArguments).field0_0x0.DebugPtr;
      uStack_68._0_4_ = (undefined4)uVar4;
      uStack_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      (pUVar17->SelectionHandle).Identifier.TargetType = *pEVar18;
      (pUVar17->SelectionHandle).Identifier.ObjectType = EVar6;
      (pUVar17->SelectionHandle).Identifier.TargetObject.WeakPtr.ObjectIndex = iVar7;
      (pUVar17->SelectionHandle).Identifier.TargetObject.WeakPtr.ObjectSerialNumber = EVar8;
      *(undefined4 *)&(pUVar17->SelectionHandle).Selection = (undefined4)local_70;
      *(undefined4 *)((longlong)&(pUVar17->SelectionHandle).Selection + 4) = local_70._4_4_;
      *(undefined4 *)&(pUVar17->SelectionHandle).Selector = (undefined4)uStack_68;
      *(undefined4 *)((longlong)&(pUVar17->SelectionHandle).Selector + 4) = uStack_68._4_4_;
      pUVar17 = (this->SelectionArguments).field0_0x0.DebugPtr;
      uStack_68 = uVar4;
      (**(code **)(pUVar17->_padding_ + 0x2b0))(pUVar17,this->TransactionsAPI);
      if ((bVar9) &&
         (cVar15 = (**(code **)(*(longlong *)param_1 + 0x2b8))
                             (param_1,(this->SelectionArguments).field0_0x0.DebugPtr),
         cVar15 != '\0')) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      bVar14 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar19 = pFVar19 + 0x10;
  } while( true );
}

// ClearActivePreview @ 14cb79cd0

void __thiscall UGeometrySelectionManager::ClearActivePreview(UGeometrySelectionManager *this)

{
  UPreviewGeometry *pUVar1;
  
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
            (&(this->ActivePreviewSelection).Selection);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
            (&(this->SelectedActivePreviewSelection).Selection);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
            (&(this->UnselectedActivePreviewSelection).Selection);
  UE::Geometry::FGeometrySelectionElements::Reset(&this->CachedSelectedPreviewRenderElements);
  UE::Geometry::FGeometrySelectionElements::Reset(&this->CachedUnselectedPreviewRenderElements);
  this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | PreviewCachesDirty;
  pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveLineSet
              (pUVar1,(this->HoverOverSelectedParams).Identifiers.Elements + 1,true);
    UPreviewGeometry::RemovePointSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)&this->HoverOverSelectedParams
               ,true);
    UPreviewGeometry::RemoveTriangleSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (this->HoverOverSelectedParams).Identifiers.Elements + 2,true);
  }
  pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveLineSet
              (pUVar1,(this->HoverOverUnselectedParams).Identifiers.Elements + 1,true);
    UPreviewGeometry::RemovePointSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (FString *)&this->HoverOverUnselectedParams,true);
    UPreviewGeometry::RemoveTriangleSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (this->HoverOverUnselectedParams).Identifiers.Elements + 2,true);
  }
  return;
}

// ClearActiveTargets @ 14cb79dd0

void __thiscall UGeometrySelectionManager::ClearActiveTargets(UGeometrySelectionManager *this)

{
  int *piVar1;
  TArray<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *pTVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> local_28;
  
  cVar7 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar7 != '\0') {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054739949>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x213,"HasSelection() == false");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x328))(this);
  pTVar2 = &this->ActiveTargetReferences;
  iVar3 = (this->ActiveTargetReferences).ArrayNum;
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    local_28.Object = *(FGeometrySelectionTarget **)pFVar10;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar4;
    SleepOrShutdownTarget(this,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar10 = pFVar10 + 0x10;
  }
  piVar1 = &(this->ActiveTargetReferences).ArrayMax;
  pTVar5 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
           (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->ActiveTargetReferences).ArrayNum;
  if ((this->ActiveTargetReferences).ArrayMax < 0) {
    DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
              (pTVar5,iVar3);
    (this->ActiveTargetReferences).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
              (pTVar5,iVar3);
    (this->ActiveTargetReferences).ArrayNum = 0;
  }
  TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
           *)&this->ActiveTargetMap);
  UpdateSelectionRenderCacheOnTargetChange(this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionModified);
  return;
}

// ClearSelection @ 14cb7a050

void __thiscall
UGeometrySelectionManager::ClearSelection(UGeometrySelectionManager *this,bool param_1)

{
  FGeometrySelectionDelta *pFVar1;
  uint uVar2;
  IToolsContextTransactionsAPI *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  FWeakObjectPtr FVar9;
  char cVar10;
  bool bVar11;
  FText *pFVar12;
  ulonglong uVar13;
  FGeometrySelectionDeltaChange *this_00;
  FGeometrySelectionDeltaChange *pFVar14;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  FGeometrySelectionDeltaChange *local_res20;
  FText local_78;
  FText local_68;
  FGeometrySelectionDelta local_58;
  
  cVar10 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar10 != '\0') {
    if (param_1) {
      (**(code **)(this->_padding_ + 0x318))(this);
    }
    pIVar3 = this->TransactionsAPI;
    pcVar4 = *(code **)((longlong)*pIVar3 + 0x18);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"UGeometrySelectionManager",L"ClearSelection",L"Clear Selection"
                        );
    (*pcVar4)(pIVar3,pFVar12);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    uVar2 = (this->ActiveTargetReferences).ArrayNum;
    uVar13 = (ulonglong)(int)uVar2;
    pFVar17 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pFVar16 = pFVar17 + uVar13 * 0x10;
    while( true ) {
      pFVar14 = (FGeometrySelectionDeltaChange *)0x0;
      if ((this->ActiveTargetReferences).ArrayNum != (int)uVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar16) break;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
      puVar6 = *(undefined8 **)pFVar17;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Removed.ArrayNum = 0;
      local_58.Removed.ArrayMax = 0;
      local_58.Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Added.ArrayNum = 0;
      local_58.Added.ArrayMax = 0;
      if ((puVar6 == (undefined8 *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Geometry::FGeometrySelectionEditor::ClearSelection
                ((FGeometrySelectionEditor *)puVar6[0x10],&local_58);
      if ((local_58.Removed.ArrayNum != 0) || (local_58.Added.ArrayNum != 0)) {
        this_00 = ::operator_new(0x40);
        if (this_00 != (FGeometrySelectionDeltaChange *)0x0) {
          this_00->_padding_ = 0;
          this_00->_padding_ = 0;
          (this_00->Identifier).TargetType = Unknown;
          (this_00->Identifier).ObjectType = Unknown;
          (this_00->Identifier).TargetObject.WeakPtr = (FWeakObjectPtr)0x0;
          (this_00->Delta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_00->Delta).Removed.ArrayNum = 0;
          (this_00->Delta).Removed.ArrayMax = 0;
          (this_00->Delta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_00->Delta).Added.ArrayNum = 0;
          (this_00->Delta).Added.ArrayMax = 0;
          pFVar14 = FGeometrySelectionDeltaChange::FGeometrySelectionDeltaChange(this_00);
        }
        uVar8 = *puVar6;
        FVar9 = *(FWeakObjectPtr *)(puVar6 + 1);
        pFVar1 = &pFVar14->Delta;
        (pFVar14->Identifier).TargetType = (int)uVar8;
        (pFVar14->Identifier).ObjectType = (int)((ulonglong)uVar8 >> 0x20);
        (pFVar14->Identifier).TargetObject.WeakPtr = FVar9;
        if (pFVar1 != &local_58) {
          pFVar7 = (pFVar1->Removed).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pFVar1->Removed).AllocatorInstance.Data = local_58.Removed.AllocatorInstance.Data;
          local_58.Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->Delta).Removed.ArrayNum = local_58.Removed.ArrayNum;
          (pFVar14->Delta).Removed.ArrayMax = local_58.Removed.ArrayMax;
          local_58.Removed.ArrayNum = 0;
          local_58.Removed.ArrayMax = 0;
        }
        pTVar15 = &(pFVar14->Delta).Added;
        if (pTVar15 != &local_58.Added) {
          pFVar7 = (pTVar15->AllocatorInstance).Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pTVar15->AllocatorInstance).Data = local_58.Added.AllocatorInstance.Data;
          local_58.Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->Delta).Added.ArrayNum = local_58.Added.ArrayNum;
          (pFVar14->Delta).Added.ArrayMax = local_58.Added.ArrayMax;
          local_58.Added.ArrayNum = 0;
          local_58.Added.ArrayMax = 0;
        }
        pIVar3 = this->TransactionsAPI;
        pcVar4 = *(code **)((longlong)*pIVar3 + 0x28);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_68,L"UGeometrySelectionManager",L"ClearSelection",
                             L"Clear Selection");
        local_res20 = pFVar14;
        (*pcVar4)(pIVar3,this,&local_res20,pFVar12);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
      }
      if (local_58.Added.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Added.AllocatorInstance.Data);
      }
      if (local_58.Removed.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Removed.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      uVar13 = (ulonglong)uVar2;
      pFVar17 = pFVar17 + 0x10;
    }
    (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
    this->RenderCachesDirtyFlags =
         this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionModified);
  }
  return;
}

// ClearSelectionPreview @ 14cb7a360

void __thiscall UGeometrySelectionManager::ClearSelectionPreview(UGeometrySelectionManager *this)

{
  UPreviewGeometry *pUVar1;
  
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
            (&(this->ActivePreviewSelection).Selection);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
            (&(this->SelectedActivePreviewSelection).Selection);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
            (&(this->UnselectedActivePreviewSelection).Selection);
  UE::Geometry::FGeometrySelectionElements::Reset(&this->CachedSelectedPreviewRenderElements);
  UE::Geometry::FGeometrySelectionElements::Reset(&this->CachedUnselectedPreviewRenderElements);
  this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | PreviewCachesDirty;
  pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveLineSet
              (pUVar1,(this->HoverOverSelectedParams).Identifiers.Elements + 1,true);
    UPreviewGeometry::RemovePointSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)&this->HoverOverSelectedParams
               ,true);
    UPreviewGeometry::RemoveTriangleSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (this->HoverOverSelectedParams).Identifiers.Elements + 2,true);
  }
  pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveLineSet
              (pUVar1,(this->HoverOverUnselectedParams).Identifiers.Elements + 1,true);
    UPreviewGeometry::RemovePointSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (FString *)&this->HoverOverUnselectedParams,true);
    UPreviewGeometry::RemoveTriangleSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (this->HoverOverUnselectedParams).Identifiers.Elements + 2,true);
  }
  return;
}

// CreateOrUpdateAllSets @ 14cb80350

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
UGeometrySelectionManager::CreateOrUpdateAllSets
          (UGeometrySelectionManager *this,FGeometrySelectionElements *param_1,
          FMeshElementSelectionParams *param_2)

{
  UPreviewGeometry *this_00;
  FScriptContainerElement *pFVar1;
  UWorld *pUVar2;
  longlong lVar3;
  FString *pFVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if ((pUVar2 != (UWorld *)0x0) &&
     (this_00 = (this->PreviewGeometry).field0_0x0.DebugPtr,
     (this_00->ParentActor).field0_0x0.DebugPtr == (APreviewGeometryActor *)0x0)) {
    UPreviewGeometry::CreateInWorld(this_00,pUVar2,&UE::Math::TTransform<double>::Identity);
  }
  local_28._8_8_ = local_38;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_1>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
       ::Call;
  local_38._0_8_ = param_1;
  local_38._8_8_ = param_2;
  UPreviewGeometry::CreateOrUpdateLineSet
            ((this->PreviewGeometry).field0_0x0.DebugPtr,(param_2->Identifiers).Elements + 1,
             (param_1->Segments).ArrayNum,
             (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
              *)local_28,1);
  local_38._8_8_ = local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_2>,void,int,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_>_&>
       ::Call;
  local_28._0_8_ = param_1;
  local_28._8_8_ = param_2;
  UPreviewGeometry::CreateOrUpdateTriangleSet
            ((this->PreviewGeometry).field0_0x0.DebugPtr,(param_2->Identifiers).Elements + 2,
             (param_1->Triangles).ArrayNum,
             (TFunctionRef<void___cdecl(int,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_>_&)>
              *)local_38,1);
  local_38._8_8_ = local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometrySelectionManager::CreateOrUpdateAllSets'::__l2::<lambda_3>,void,int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&>
       ::Call;
  local_28._0_8_ = param_1;
  local_28._8_8_ = param_2;
  UPreviewGeometry::CreateOrUpdatePointSet
            ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)param_2,
             (param_1->Points).ArrayNum,
             (TFunctionRef<void___cdecl(int,TArray<FRenderablePoint,TSizedDefaultAllocator<32>_>_&)>
              *)local_38,-1);
  pFVar4 = (FString *)&param_2->DepthBias;
  lVar3 = 3;
  do {
    pFVar1 = pFVar4[-1].Data.AllocatorInstance.Data;
    pFVar4 = pFVar4 + -1;
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  return;
}

// DebugPrintSelection @ 14cb80490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGeometrySelectionManager::DebugPrintSelection(UGeometrySelectionManager *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  if (iVar1 == 0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    pFVar6 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      lVar3 = *(longlong *)pFVar6;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar3 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar6 = pFVar6 + 0x10;
    }
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  return;
}

// DebugRender @ 14cb81930

void __thiscall
UGeometrySelectionManager::DebugRender
          (UGeometrySelectionManager *this,IToolsContextRenderAPI *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  cVar3 = (**(code **)(this->_padding_ + 0x3c0))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                         DebugPtr)->_padding_ + 0x318))();
    if (cVar3 != '\0') {
      RemoveAllSets(this);
      this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | UnselectedCachesDirty;
      return;
    }
    RebuildSelectionRenderCache(this);
    RebuildSelectableRenderCache(this);
    RebuildPreviewRenderCache(this);
    return;
  }
  uVar6 = 0;
  if (0 < (this->ActiveTargetReferences).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->ActiveTransformations).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->ActiveTransformations).AllocatorInstance.Data + lVar7) != 0) {
        uVar5 = 0;
        if ((int)uVar6 < (this->ActiveTransformations).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->ActiveTransformations).AllocatorInstance.Data + lVar7);
        (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->ActiveTargetReferences).ArrayNum);
  }
  return;
}

// DiscardSavedSelection @ 14cb82550

void __thiscall UGeometrySelectionManager::DiscardSavedSelection(UGeometrySelectionManager *this)

{
  int *piVar1;
  
  piVar1 = &(this->SavedSelection).Targets.ArrayMax;
  (this->SavedSelection).Targets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->SavedSelection,0,piVar1);
  }
  DestructItems<UE::Geometry::FGeometrySelection,int>
            ((FGeometrySelection *)(this->SavedSelection).Selections.AllocatorInstance.Data,
             (this->SavedSelection).Selections.ArrayNum);
  piVar1 = &(this->SavedSelection).Selections.ArrayMax;
  (this->SavedSelection).Selections.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&(this->SavedSelection).Selections.AllocatorInstance,0,piVar1);
  }
  return;
}

// DisconnectPreviewGeometry @ 14cb825e0

void __thiscall
UGeometrySelectionManager::DisconnectPreviewGeometry(UGeometrySelectionManager *this)

{
  if ((this->PreviewGeometry).field0_0x0.DebugPtr != (UPreviewGeometry *)0x0) {
    RemoveAllSets(this);
    UPreviewGeometry::Disconnect((this->PreviewGeometry).field0_0x0.DebugPtr);
    (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  }
  return;
}

// EndTrackedSelectionChange @ 14cb89090

void __thiscall
UGeometrySelectionManager::EndTrackedSelectionChange(UGeometrySelectionManager *this)

{
  undefined8 *puVar1;
  IToolsContextTransactionsAPI *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  FGeometrySelectionDeltaChange *this_00;
  FGeometrySelectionDeltaChange *pFVar7;
  FGeometrySelectionDeltaChange *pFVar8;
  FText *pFVar9;
  FGeometrySelectionDeltaChange *local_res8;
  FGeometrySelectionDeltaChange *local_res10;
  FText local_48;
  FText local_38;
  
  if (this->bInTrackedSelectionChange == false) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054739423>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x421,"bInTrackedSelectionChange");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (this->bSelectionModifiedDuringTrackedChange != false) {
      pFVar8 = (FGeometrySelectionDeltaChange *)0x0;
      if (((this->ActiveTargetReferences).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar1 = *(undefined8 **)(this->ActiveTargetReferences).AllocatorInstance.Data;
      if (((this->InitialTrackedDelta).Removed.ArrayNum != 0) ||
         ((this->InitialTrackedDelta).Added.ArrayNum != 0)) {
        this_00 = ::operator_new(0x40);
        pFVar7 = pFVar8;
        if (this_00 != (FGeometrySelectionDeltaChange *)0x0) {
          this_00->_padding_ = 0;
          this_00->_padding_ = 0;
          (this_00->Identifier).TargetType = Unknown;
          (this_00->Identifier).ObjectType = Unknown;
          (this_00->Identifier).TargetObject.WeakPtr = (FWeakObjectPtr)0x0;
          (this_00->Delta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_00->Delta).Removed.ArrayNum = 0;
          (this_00->Delta).Removed.ArrayMax = 0;
          (this_00->Delta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_00->Delta).Added.ArrayNum = 0;
          (this_00->Delta).Added.ArrayMax = 0;
          pFVar7 = FGeometrySelectionDeltaChange::FGeometrySelectionDeltaChange(this_00);
        }
        uVar4 = *puVar1;
        FVar5 = *(FWeakObjectPtr *)(puVar1 + 1);
        (pFVar7->Identifier).TargetType = (int)uVar4;
        (pFVar7->Identifier).ObjectType = (int)((ulonglong)uVar4 >> 0x20);
        (pFVar7->Identifier).TargetObject.WeakPtr = FVar5;
        UE::Geometry::FGeometrySelectionDelta::operator=(&pFVar7->Delta,&this->InitialTrackedDelta);
        pIVar2 = this->TransactionsAPI;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"UGeometrySelectionManager",L"ChangeSelection",
                            L"Change Selection");
        local_res8 = pFVar7;
        (*pcVar3)(pIVar2,this,&local_res8,pFVar9);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
      }
      if (((this->ActiveTrackedDelta).Removed.ArrayNum != 0) ||
         ((this->ActiveTrackedDelta).Added.ArrayNum != 0)) {
        pFVar7 = ::operator_new(0x40);
        if (pFVar7 != (FGeometrySelectionDeltaChange *)0x0) {
          pFVar7->_padding_ = 0;
          pFVar7->_padding_ = 0;
          (pFVar7->Identifier).TargetType = Unknown;
          (pFVar7->Identifier).ObjectType = Unknown;
          (pFVar7->Identifier).TargetObject.WeakPtr = (FWeakObjectPtr)0x0;
          (pFVar7->Delta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->Delta).Removed.ArrayNum = 0;
          (pFVar7->Delta).Removed.ArrayMax = 0;
          (pFVar7->Delta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->Delta).Added.ArrayNum = 0;
          (pFVar7->Delta).Added.ArrayMax = 0;
          pFVar8 = FGeometrySelectionDeltaChange::FGeometrySelectionDeltaChange(pFVar7);
        }
        uVar4 = *puVar1;
        FVar5 = *(FWeakObjectPtr *)(puVar1 + 1);
        (pFVar8->Identifier).TargetType = (int)uVar4;
        (pFVar8->Identifier).ObjectType = (int)((ulonglong)uVar4 >> 0x20);
        (pFVar8->Identifier).TargetObject.WeakPtr = FVar5;
        UE::Geometry::FGeometrySelectionDelta::operator=(&pFVar8->Delta,&this->ActiveTrackedDelta);
        pIVar2 = this->TransactionsAPI;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_38,L"UGeometrySelectionManager",L"ChangeSelection",
                            L"Change Selection");
        local_res10 = pFVar8;
        (*pcVar3)(pIVar2,this,&local_res10,pFVar9);
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
      }
    }
    (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
    this->bInTrackedSelectionChange = false;
  }
  return;
}

// EndTransformation @ 14cb895e0

void __thiscall UGeometrySelectionManager::EndTransformation(UGeometrySelectionManager *this)

{
  TArray<IGeometrySelectionTransformer_*,TSizedDefaultAllocator<32>_> *pTVar1;
  IToolsContextTransactionsAPI *pIVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  FText *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FText local_38;
  
  cVar6 = (**(code **)(this->_padding_ + 0x3c0))();
  if (cVar6 == '\0') {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054739074>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x57e,"IsInActiveTransformation()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pIVar2 = this->TransactionsAPI;
    pcVar5 = *(code **)((longlong)*pIVar2 + 0x18);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometrySelectionManager",L"EndTransformation",
                        L"Transform Selection");
    (*pcVar5)(pIVar2,pFVar9);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    uVar10 = 0;
    pTVar1 = &this->ActiveTransformations;
    if (0 < (this->ActiveTargetReferences).ArrayNum) {
      lVar12 = 0;
      lVar13 = 0;
      do {
        uVar11 = ~uVar10 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar10 < (this->ActiveTransformations).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar12 * 8) != 0) {
          uVar8 = 0;
          if ((int)uVar10 < (this->ActiveTransformations).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar3 = *(longlong **)((pTVar1->AllocatorInstance).Data + lVar12 * 8);
          (**(code **)(*plVar3 + 0x28))(plVar3,this->TransactionsAPI);
          uVar8 = 0;
          if ((int)uVar10 < (this->ActiveTargetReferences).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->ActiveTargetReferences).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar4 + lVar13) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar3 = *(longlong **)(*(longlong *)(pFVar4 + lVar13) + 0x20);
          pcVar5 = *(code **)(*plVar3 + 0xc0);
          uVar8 = 0;
          if ((int)uVar10 < (this->ActiveTransformations).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*pcVar5)(plVar3,*(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar12 * 8));
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((int)uVar10 < (this->ActiveTargetReferences).ArrayNum);
    }
    (this->ActiveTransformations).ArrayNum = 0;
    if ((this->ActiveTransformations).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,&(this->ActiveTransformations).ArrayMax);
    }
    (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
    this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | SelectionCachesDirty;
  }
  return;
}

// ExecuteSelectionCommand @ 14cb8bb20

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UGeometrySelectionManager::ExecuteSelectionCommand
          (UGeometrySelectionManager *this,UGeometrySelectionEditCommand *param_1)

{
  FGeometrySelection *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  IToolsContextTransactionsAPI *pIVar5;
  undefined8 uVar6;
  code *pcVar7;
  FWeakObjectPtr FVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  char cVar12;
  EGeometryTopologyType EVar13;
  UObject *pUVar14;
  UGeometrySelectionEditCommandArguments *pUVar15;
  ulonglong uVar16;
  FGeometrySelectionReplaceChange *pFVar17;
  FText *pFVar18;
  UClass *pUVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  UGeometrySelectionEditCommand *local_res10;
  undefined4 local_res18 [2];
  uint local_res20;
  longlong local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  FGeometrySelectionDelta local_d0;
  FGeometrySelectionReplaceChange *local_b0;
  FGeometrySelectionReplaceChange *local_a8;
  FScriptContainerElement *local_a0;
  longlong *local_98 [2];
  ETargetType local_88;
  EObjectType EStack_84;
  int iStack_80;
  int iStack_7c;
  FGeometrySelection *local_78;
  undefined8 uStack_70;
  FText local_68;
  FText local_58;
  
  local_res10 = param_1;
  if ((this->SelectionArguments).field0_0x0.DebugPtr ==
      (UGeometrySelectionEditCommandArguments *)0x0) {
    pUVar14 = GetTransientPackageAsObject();
    pUVar15 = NewObject<UGeometrySelectionEditCommandArguments>(pUVar14);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UGeometrySelectionEditCommandArguments *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->SelectionArguments).field0_0x0.DebugPtr = pUVar15;
  }
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_98);
  (**(code **)((longlong)*this->TransactionsAPI + 0x18))();
  local_res20 = (this->ActiveTargetReferences).ArrayNum;
  uVar16 = (ulonglong)(int)local_res20;
  pFVar20 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  local_a0 = pFVar20 + uVar16 * 0x10;
  while( true ) {
    pFVar10 = local_a0;
    if ((this->ActiveTargetReferences).ArrayNum != (int)uVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar20 == pFVar10) {
      (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
      this->RenderCachesDirtyFlags =
           this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnSelectionModified);
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      return;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar20 + 8);
    puVar4 = *(undefined8 **)pFVar20;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((puVar4 == (undefined8 *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) break;
    if ((*(int *)(puVar4 + 7) != *(int *)((longlong)puVar4 + 100)) ||
       (cVar12 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1), cVar12 != '\0')) {
      pFVar17 = ::operator_new(0xd0);
      if (pFVar17 == (FGeometrySelectionReplaceChange *)0x0) {
        pFVar17 = (FGeometrySelectionReplaceChange *)0x0;
      }
      else {
        memset(pFVar17,0,0xd0);
        pFVar17 = FGeometrySelectionReplaceChange::FGeometrySelectionReplaceChange(pFVar17);
      }
      if ((puVar4 == (undefined8 *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar6 = *puVar4;
      FVar8 = *(FWeakObjectPtr *)(puVar4 + 1);
      (pFVar17->Identifier).TargetType = (int)uVar6;
      (pFVar17->Identifier).ObjectType = (int)((ulonglong)uVar6 >> 0x20);
      (pFVar17->Identifier).TargetObject.WeakPtr = FVar8;
      (pFVar17->Before).ElementType = *(EGeometryElementType *)(puVar4 + 5);
      (pFVar17->Before).TopologyType = *(EGeometryTopologyType *)((longlong)puVar4 + 0x2c);
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                (&(pFVar17->Before).Selection,
                 (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 (puVar4 + 6));
      (pFVar17->After).ElementType = (pFVar17->Before).ElementType;
      (pFVar17->After).TopologyType = (pFVar17->Before).TopologyType;
      pIVar5 = this->TransactionsAPI;
      pcVar7 = *(code **)((longlong)*pIVar5 + 0x28);
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_68,L"UGeometrySelectionManager",L"ClearSelection",
                           L"Clear Selection");
      local_b0 = pFVar17;
      (*pcVar7)(pIVar5,this,&local_b0,pFVar18);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      local_f8 = 0;
      (**(code **)(*(longlong *)puVar4[4] + 0x28))((longlong *)puVar4[4],&local_88);
      pFVar1 = (FGeometrySelection *)(puVar4 + 5);
      uVar6 = puVar4[4];
      pUVar15 = (this->SelectionArguments).field0_0x0.DebugPtr;
      uStack_70._0_4_ = (undefined4)uVar6;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      (pUVar15->SelectionHandle).Identifier.TargetType = local_88;
      (pUVar15->SelectionHandle).Identifier.ObjectType = EStack_84;
      (pUVar15->SelectionHandle).Identifier.TargetObject.WeakPtr.ObjectIndex = iStack_80;
      (pUVar15->SelectionHandle).Identifier.TargetObject.WeakPtr.ObjectSerialNumber = iStack_7c;
      (pUVar15->SelectionHandle).Selection = pFVar1;
      *(undefined4 *)&(pUVar15->SelectionHandle).Selector = (undefined4)uStack_70;
      *(undefined4 *)((longlong)&(pUVar15->SelectionHandle).Selector + 4) = uStack_70._4_4_;
      ((this->SelectionArguments).field0_0x0.DebugPtr)->ElementType = this->SelectionElementType;
      local_78 = pFVar1;
      uStack_70 = uVar6;
      EVar13 = (**(code **)(this->_padding_ + 0x2f8))(this);
      ((this->SelectionArguments).field0_0x0.DebugPtr)->TopologyMode = EVar13;
      pUVar15 = (this->SelectionArguments).field0_0x0.DebugPtr;
      (**(code **)(pUVar15->_padding_ + 0x2b0))(pUVar15,this->TransactionsAPI);
      param_1 = local_res10;
      cVar12 = (**(code **)(*(longlong *)local_res10 + 0x2b8))
                         (local_res10,(this->SelectionArguments).field0_0x0.DebugPtr);
      if (cVar12 != '\0') {
        (**(code **)(*(longlong *)param_1 + 0x2c0))
                  (param_1,(this->SelectionArguments).field0_0x0.DebugPtr,&local_f8);
      }
      local_d0.Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Removed.ArrayNum = 0;
      local_d0.Removed.ArrayMax = 0;
      local_d0.Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Added.ArrayNum = 0;
      local_d0.Added.ArrayMax = 0;
      UE::Geometry::FGeometrySelectionEditor::ClearSelection
                ((FGeometrySelectionEditor *)puVar4[0x10],&local_d0);
      lVar9 = local_f8;
      if (local_f8 != 0) {
        pUVar19 = Z_Construct_UClass_UGeometrySelectionEditCommandResult_NoRegister();
        iVar2 = (int)pUVar19->_padding_;
        if (((iVar2 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar19->_padding_)) && (*(int *)(lVar9 + 0x58) != *(int *)(lVar9 + 0x84))) {
          local_f0 = (void *)0x0;
          local_e8 = 0;
          local_e0 = (void *)0x0;
          local_d8 = 0;
          local_res18[0] = 0;
          (**(code **)(*(longlong *)puVar4[4] + 0x50))
                    ((longlong *)puVar4[4],lVar9 + 0x48,
                     CONCAT71((int7)((ulonglong)local_res18 >> 8),1),puVar4[0x10],local_res18,
                     &local_f0);
          if (*(int *)(puVar4 + 7) != *(int *)((longlong)puVar4 + 100)) {
            pFVar17 = ::operator_new(0xd0);
            if (pFVar17 == (FGeometrySelectionReplaceChange *)0x0) {
              pFVar17 = (FGeometrySelectionReplaceChange *)0x0;
            }
            else {
              memset(pFVar17,0,0xd0);
              pFVar17 = FGeometrySelectionReplaceChange::FGeometrySelectionReplaceChange(pFVar17);
            }
            uVar6 = *puVar4;
            FVar8 = *(FWeakObjectPtr *)(puVar4 + 1);
            (pFVar17->Identifier).TargetType = (int)uVar6;
            (pFVar17->Identifier).ObjectType = (int)((ulonglong)uVar6 >> 0x20);
            (pFVar17->Identifier).TargetObject.WeakPtr = FVar8;
            (pFVar17->After).ElementType = pFVar1->ElementType;
            (pFVar17->After).TopologyType = *(EGeometryTopologyType *)((longlong)puVar4 + 0x2c);
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            operator=(&(pFVar17->After).Selection,
                      (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                       *)(puVar4 + 6));
            (pFVar17->Before).ElementType = pFVar1->ElementType;
            (pFVar17->Before).TopologyType = *(EGeometryTopologyType *)((longlong)puVar4 + 0x2c);
            pIVar5 = this->TransactionsAPI;
            pcVar7 = *(code **)((longlong)*pIVar5 + 0x28);
            pFVar18 = FText::AsLocalizable_Advanced_LocText
                                (&local_58,L"UGeometrySelectionManager",L"NewSelection",
                                 L"New Selection");
            local_a8 = pFVar17;
            (*pcVar7)(pIVar5,this,&local_a8,pFVar18);
            param_1 = local_res10;
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
              param_1 = local_res10;
            }
          }
          if (local_e0 != (void *)0x0) {
            FMemory::Free(local_e0);
          }
          if (local_f0 != (void *)0x0) {
            FMemory::Free(local_f0);
          }
        }
      }
      if (local_d0.Added.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Added.AllocatorInstance.Data);
      }
      if (local_d0.Removed.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Removed.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar16 = (ulonglong)local_res20;
    pFVar20 = pFVar20 + 0x10;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// GetActiveSelectionInfo @ 14cb94370

void __thiscall
UGeometrySelectionManager::GetActiveSelectionInfo
          (UGeometrySelectionManager *this,EGeometryTopologyType *param_1,
          EGeometryElementType *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  EGeometryTopologyType EVar6;
  EGeometryElementType EVar7;
  
  EVar6 = (**(code **)(this->_padding_ + 0x2f8))();
  EVar7 = (**(code **)(this->_padding_ + 0x2e0))(this);
  *param_1 = EVar6;
  *param_2 = EVar7;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  *param_3 = iVar1;
  if (iVar1 != 0) {
    if (((this->ActiveTargetReferences).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)pFVar2;
    if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
      *param_4 = false;
      return;
    }
  }
  *param_4 = true;
  return;
}

// GetAnyCurrentTargetsLockable @ 14cb94640

bool __thiscall
UGeometrySelectionManager::GetAnyCurrentTargetsLockable(UGeometrySelectionManager *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar8 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) {
      return false;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    lVar3 = *(longlong *)pFVar8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x30))();
    if (cVar7 != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// GetAnyCurrentTargetsLocked @ 14cb94720

bool __thiscall
UGeometrySelectionManager::GetAnyCurrentTargetsLocked(UGeometrySelectionManager *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar8 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) {
      return false;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    lVar3 = *(longlong *)pFVar8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x30))();
    if ((cVar7 != '\0') &&
       (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x38))(), cVar7 != '\0')) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = pFVar8 + 0x10;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// GetCachedTarget @ 14cb94ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> * __thiscall
UGeometrySelectionManager::GetCachedTarget
          (UGeometrySelectionManager *this,
          TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *__return_storage_ptr__,
          FGeometryIdentifier *param_1,IGeometrySelectorFactory *param_2)

{
  bool *this_00;
  TMap<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
  *this_01;
  TReferenceControllerBase<1> *pTVar1;
  FGeometrySelectionTarget *pFVar2;
  IGeometrySelector *pIVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  undefined8 uVar6;
  ETargetType EVar7;
  EObjectType EVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  EGeometryElementType EVar14;
  EGeometryTopologyType EVar15;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *pTVar16;
  FGeometrySelectionEditor *pFVar17;
  undefined8 *puVar18;
  FGeometrySelectionEditor *pFVar19;
  TUniquePtr<UE::Geometry::FGeometrySelectionEditor,TDefaultDelete<UE::Geometry::FGeometrySelectionEditor>_>
  *pTVar20;
  TUniquePtr<IGeometrySelector,TDefaultDelete<IGeometrySelector>_> *pTVar21;
  FGeometrySelectionEditor *pFVar22;
  FGeometrySelectionTarget *local_c8;
  FGeometrySelectionEditor *pFStack_c0;
  IGeometrySelector *local_b8;
  FGeometrySelectionHitQueryConfig local_b0;
  FGeometrySelectionHitQueryConfig local_a0;
  undefined8 local_90;
  undefined8 local_88;
  UGeometrySelectionManager *local_80;
  FGeometryIdentifier *local_78;
  FGeometrySelectionTarget **local_70;
  undefined1 local_68 [8];
  undefined8 local_58;
  FWeakObjectPtr FStack_50;
  
  uVar12 = ::GetTypeHash(param_1);
  this_01 = &this->TargetCache;
  iVar13 = TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FGeometryIdentifier>
                     ((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
                       *)this_01,uVar12,param_1);
  if (iVar13 != -1) {
    pTVar16 = TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
              ::FindChecked((TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
                             *)this_01,param_1);
    pTVar1 = (pTVar16->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar16->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar2 == (FGeometrySelectionTarget *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
      return pTVar16;
    }
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
              (&(pFVar2->Selection).Selection);
    if ((pFVar2 == (FGeometrySelectionTarget *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
      return pTVar16;
    }
    cVar10 = (**(code **)(((pFVar2->Selector).Ptr)->_padding_ + 0x20))();
    if (cVar10 != '\0') {
      EVar14 = (**(code **)(this->_padding_ + 0x2e0))(this);
      (pFVar2->Selection).ElementType = EVar14;
      EVar15 = (**(code **)(this->_padding_ + 0x2f8))(this);
      (pFVar2->Selection).TopologyType = EVar15;
      if ((EVar15 == Polygroup) && ((pFVar2->Selection).ElementType != Vertex)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      pFVar17 = (pFVar2->SelectionEditor).Ptr;
      local_a0.TopologyType = (**(code **)(this->_padding_ + 0x2f8))(this);
      local_a0.ElementType = (**(code **)(this->_padding_ + 0x2e0))(this);
      local_a0.bOnlyVisible = true;
      local_a0.bHitBackFaces = this->bHitBackFaces;
      UE::Geometry::FGeometrySelectionEditor::UpdateQueryConfig(pFVar17,&local_a0,bVar9);
      __return_storage_ptr__->Object = pFVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    if (*(int *)&(this->TargetCache).field_0x8 != *(int *)&(this->TargetCache).field_0x34) {
      uVar12 = ::GetTypeHash(param_1);
      TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FGeometryIdentifier>
                ((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
                  *)this_01,uVar12,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  if (param_2 != (IGeometrySelectorFactory *)0x0) {
    local_58._0_4_ = param_1->TargetType;
    local_58._4_4_ = param_1->ObjectType;
    FStack_50 = (param_1->TargetObject).WeakPtr;
    (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_b8,&local_58);
    if (local_b8 != (IGeometrySelector *)0x0) {
      pFVar17 = ::operator_new(0xa0);
      pFVar22 = (FGeometrySelectionEditor *)0x0;
      if (pFVar17 == (FGeometrySelectionEditor *)0x0) {
        local_c8 = ___xmm_00000000000000000000000000000010;
        pFStack_c0 = _UNK_150651568;
        pFVar17 = pFVar22;
      }
      else {
        (pFVar17->QueryConfig).TopologyType = Triangle;
        (pFVar17->QueryConfig).ElementType = Vertex;
        local_90 = 0;
        pFVar17->TargetSelection =
             (FGeometrySelection *)
             &
             ___7__TIntrusiveReferenceController_UFGeometrySelectionTarget_UGeometrySelectionManager___00_SharedPointerInternals__6B_
        ;
        pFVar17[1].QueryConfig.TopologyType = 0;
        pFVar17[1].QueryConfig.ElementType = 0;
        *(undefined8 *)&pFVar17[1].QueryConfig.bOnlyVisible = 0;
        pFVar17[2].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[2].QueryConfig.TopologyType = 0;
        pFVar17[2].QueryConfig.ElementType = 0;
        *(undefined8 *)&pFVar17[2].QueryConfig.bOnlyVisible = 0;
        pFVar17[3].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[3].QueryConfig.TopologyType = 0;
        pFVar17[3].QueryConfig.ElementType = 0;
        *(undefined8 *)&pFVar17[3].QueryConfig.bOnlyVisible = 0;
        pFVar17[4].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[4].QueryConfig.TopologyType = 0;
        pFVar17[4].QueryConfig.ElementType = 0;
        *(undefined8 *)&pFVar17[4].QueryConfig.bOnlyVisible = 0;
        pFVar17[5].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[5].QueryConfig.TopologyType = 0;
        pFVar17[5].QueryConfig.ElementType = 0;
        *(undefined8 *)&pFVar17[5].QueryConfig.bOnlyVisible = 0;
        pFVar17[6].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[6].QueryConfig.TopologyType = 0;
        pFVar17[6].QueryConfig.ElementType = 0;
        *(undefined8 *)&(pFVar17->QueryConfig).bOnlyVisible = 1;
        pFVar17[1].TargetSelection = (FGeometrySelection *)0x0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar17 + 1),(FObjectPtr)&local_90);
        this_00 = &pFVar17[1].QueryConfig.bOnlyVisible;
        pFVar17[1].QueryConfig.TopologyType = Triangle;
        pFVar17[1].QueryConfig.ElementType = 0;
        *(undefined8 *)this_00 = 0;
        local_88 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_88);
        pFVar17[2].TargetSelection = (FGeometrySelection *)0x0;
        local_c8 = (FGeometrySelectionTarget *)&(pFVar17->QueryConfig).bOnlyVisible;
        pFVar17[2].QueryConfig.TopologyType = 4;
        pFVar17[2].QueryConfig.ElementType = Vertex;
        *(undefined8 *)&pFVar17[2].QueryConfig.bOnlyVisible = 0;
        pFVar17[3].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[4].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[4].QueryConfig.TopologyType = 0;
        pFVar17[4].QueryConfig.ElementType = 0x80;
        pFVar17[4].QueryConfig.bOnlyVisible = true;
        pFVar17[4].QueryConfig.bHitBackFaces = true;
        *(undefined2 *)&pFVar17[4].QueryConfig.field_0xa = 0xffff;
        *(undefined4 *)&pFVar17[4].bEnableTopologyIDFiltering = 0;
        pFVar17[5].QueryConfig.TopologyType = 0;
        pFVar17[5].QueryConfig.ElementType = 0;
        pFVar17[5].QueryConfig.bOnlyVisible = false;
        pFVar17[5].QueryConfig.bHitBackFaces = false;
        *(undefined2 *)&pFVar17[5].QueryConfig.field_0xa = 0;
        pFVar17[6].TargetSelection = (FGeometrySelection *)0x0;
        pFVar17[6].QueryConfig.TopologyType = 0;
        pFVar17[6].QueryConfig.ElementType = 0;
        if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)()
          ;
          return pTVar16;
        }
        LOCK();
        (pFVar17->QueryConfig).TopologyType = (pFVar17->QueryConfig).TopologyType + Triangle;
        UNLOCK();
        pFStack_c0 = pFVar17;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar17);
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      pTVar21 = &local_c8->Selector;
      if (pTVar21 != (TUniquePtr<IGeometrySelector,TDefaultDelete<IGeometrySelector>_> *)&local_b8)
      {
        pIVar3 = pTVar21->Ptr;
        pTVar21->Ptr = local_b8;
        local_b8 = (IGeometrySelector *)0x0;
        if (pIVar3 != (IGeometrySelector *)0x0) {
          (**(code **)pIVar3->_padding_)(pIVar3,1);
        }
      }
      EVar7 = param_1->TargetType;
      EVar8 = param_1->ObjectType;
      FVar5 = (param_1->TargetObject).WeakPtr;
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      (local_c8->TargetIdentifier).TargetType = EVar7;
      (local_c8->TargetIdentifier).ObjectType = EVar8;
      (local_c8->TargetIdentifier).TargetObject.WeakPtr = FVar5;
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      pIVar3 = (local_c8->Selector).Ptr;
      puVar18 = (undefined8 *)
                (**(code **)(pIVar3->_padding_ + 0x28))(pIVar3,&stack0xffffffffffffffb8);
      uVar6 = *puVar18;
      FVar5 = *(FWeakObjectPtr *)(puVar18 + 1);
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      (local_c8->SelectionIdentifer).TargetType = (int)uVar6;
      (local_c8->SelectionIdentifer).ObjectType = (int)((ulonglong)uVar6 >> 0x20);
      (local_c8->SelectionIdentifer).TargetObject.WeakPtr = FVar5;
      EVar14 = (**(code **)(this->_padding_ + 0x2e0))(this);
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      (local_c8->Selection).ElementType = EVar14;
      EVar15 = (**(code **)(this->_padding_ + 0x2f8))(this);
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      (local_c8->Selection).TopologyType = EVar15;
      pFVar19 = ::operator_new(0x18);
      pFVar17 = pFVar22;
      if (pFVar19 != (FGeometrySelectionEditor *)0x0) {
        pFVar19->TargetSelection = (FGeometrySelection *)0x0;
        (pFVar19->QueryConfig).TopologyType = 0;
        (pFVar19->QueryConfig).ElementType = 0;
        *(undefined8 *)&(pFVar19->QueryConfig).bOnlyVisible = 0;
        (pFVar19->QueryConfig).TopologyType = Polygroup;
        (pFVar19->QueryConfig).ElementType = Face;
        (pFVar19->QueryConfig).bOnlyVisible = true;
        pFVar17 = pFVar19;
      }
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      pTVar20 = &local_c8->SelectionEditor;
      if (pTVar20 !=
          (TUniquePtr<UE::Geometry::FGeometrySelectionEditor,TDefaultDelete<UE::Geometry::FGeometrySelectionEditor>_>
           *)local_68) {
        pFVar19 = pTVar20->Ptr;
        pTVar20->Ptr = pFVar17;
        ::operator_delete(pFVar19,0x18);
        pFVar17 = pFVar22;
      }
      ::operator_delete(pFVar17,0x18);
      local_b0.TopologyType = (**(code **)(this->_padding_ + 0x2f8))(this);
      local_b0.ElementType = (**(code **)(this->_padding_ + 0x2e0))(this);
      local_b0.bHitBackFaces = this->bHitBackFaces;
      local_b0.bOnlyVisible = true;
      if ((local_b0.TopologyType == Polygroup) && (local_b0.ElementType != Vertex)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      UE::Geometry::FGeometrySelectionEditor::Initialize
                ((local_c8->SelectionEditor).Ptr,&local_c8->Selection,&local_b0,bVar9);
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      cVar10 = (**(code **)(((local_c8->Selector).Ptr)->_padding_ + 0x10))();
      if (cVar10 != '\0') {
        local_70 = &local_c8;
        local_78 = param_1;
        TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FGeometryIdentifier_const_&,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_&>_>
                  ((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
                    *)&this->TargetCache,
                   (TPairInitializer<FGeometryIdentifier_const_&,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_&>
                    *)&stack0x00000008,(bool *)&local_78);
      }
      if ((local_c8 == (FGeometrySelectionTarget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)(*pcVar4)();
        return pTVar16;
      }
      local_80 = this;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddWeakLambda<UGeometrySelectionManager,_UGeometrySelectionManager::GetCachedTarget_::__l2::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &((local_c8->Selector).Ptr)->OnSelectableElementsChanged,
                 (UGeometrySelectionManager *)(local_68 + 8),(<lambda_1> *)this);
      __return_storage_ptr__->Object = local_c8;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)pFStack_c0;
      pFStack_c0 = (FGeometrySelectionEditor *)0x0;
      local_c8 = (FGeometrySelectionTarget *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (local_b8 == (IGeometrySelector *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)local_b8->_padding_)(local_b8,1);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FGeometrySelectionTarget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCurrentSelectionQueryConfig @ 14cb95520

FGeometrySelectionHitQueryConfig * __thiscall
UGeometrySelectionManager::GetCurrentSelectionQueryConfig
          (UGeometrySelectionManager *this,FGeometrySelectionHitQueryConfig *__return_storage_ptr__)

{
  longlong lVar1;
  EGeometryTopologyType EVar2;
  EGeometryElementType EVar3;
  
  lVar1 = this->_padding_;
  __return_storage_ptr__->TopologyType = Polygroup;
  __return_storage_ptr__->ElementType = Face;
  __return_storage_ptr__->bOnlyVisible = true;
  __return_storage_ptr__->bHitBackFaces = false;
  EVar2 = (**(code **)(lVar1 + 0x2f8))();
  __return_storage_ptr__->TopologyType = EVar2;
  EVar3 = (**(code **)(this->_padding_ + 0x2e0))(this);
  __return_storage_ptr__->ElementType = EVar3;
  __return_storage_ptr__->bHitBackFaces = this->bHitBackFaces;
  __return_storage_ptr__->bOnlyVisible = true;
  return __return_storage_ptr__;
}

// GetCurrentTargetIdentifiers @ 14cb95a90

TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> * __thiscall
UGeometrySelectionManager::GetCurrentTargetIdentifiers
          (UGeometrySelectionManager *this,
          TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar11 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar10) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
    pFVar3 = *(FScriptContainerElement **)pFVar11;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FScriptContainerElement *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x10))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    uVar6 = *(undefined8 *)(pFVar3 + 8);
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
    *(undefined8 *)(pFVar4 + 8) = uVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar11 = pFVar11 + 0x10;
  }
  return __return_storage_ptr__;
}

// GetMeshTopologyMode @ 14cb98750

EMeshTopologyMode __thiscall
UGeometrySelectionManager::GetMeshTopologyMode(UGeometrySelectionManager *this)

{
  return this->MeshTopologyMode;
}

// GetPrivateStaticClass @ 14cb99050

UClass * __cdecl UGeometrySelectionManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionManager",
               &Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionManager,0x4d0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGeometrySelectionManager>,
               InternalVTableHelperCtorCaller<UGeometrySelectionManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionManager.InnerSingleton;
}

// GetSelectionBounds @ 14cb9bab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGeometrySelectionManager::GetSelectionBounds
          (UGeometrySelectionManager *this,FGeometrySelectionBounds *param_1)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar16 = _UNK_150a9e6d8;
  uVar15 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar14 = _UNK_150a9e648;
  uVar13 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar18 = _UNK_1508ffb58;
  uVar17 = ___xmm_ffefffffffffffffffefffffffffffff;
  (param_1->WorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (param_1->WorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (param_1->WorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (param_1->WorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (param_1->WorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (param_1->WorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  local_res10 = (this->ActiveTargetReferences).ArrayNum;
  uVar10 = (ulonglong)(int)local_res10;
  pFVar12 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar11 = pFVar12 + uVar10 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar11) break;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    lVar5 = *(longlong *)pFVar12;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar5 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    plVar6 = *(longlong **)(lVar5 + 0x20);
    pcVar7 = *(code **)(*plVar6 + 0x98);
    if (lVar5 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    (*pcVar7)(plVar6,lVar5 + 0x28,param_1,1,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    uVar10 = (ulonglong)local_res10;
    pFVar12 = pFVar12 + 0x10;
  }
  dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  pTVar1 = &(param_1->WorldBounds).Max;
  if (((dVar3 < (pTVar1->field0_0x0)._s_0.X || dVar3 == (pTVar1->field0_0x0)._s_0.X) &&
      (dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y,
      pdVar2 = &(param_1->WorldBounds).Max.field0_0x0._s_0.Y, dVar3 < *pdVar2 || dVar3 == *pdVar2))
     && (dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.Z,
        pdVar2 = &(param_1->WorldBounds).Max.field0_0x0._s_0.Z, dVar3 < *pdVar2 || dVar3 == *pdVar2)
     ) {
    return true;
  }
  return false;
}

// GetSelectionElementType @ 14cb9be40

EGeometryElementType __thiscall
UGeometrySelectionManager::GetSelectionElementType(UGeometrySelectionManager *this)

{
  return this->SelectionElementType;
}

// GetSelectionForComponent @ 14cb9be50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UGeometrySelectionManager::GetSelectionForComponent
          (UGeometrySelectionManager *this,UPrimitiveComponent *param_1,FGeometrySelection *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  cVar6 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar6 == '\0') {
LAB_14cb9bfa0:
    bVar7 = false;
  }
  else {
    iVar1 = (this->ActiveTargetReferences).ArrayNum;
    pFVar10 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar9) goto LAB_14cb9bfa0;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      lVar4 = *(longlong *)pFVar10;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar4 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      bVar7 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(lVar4 + 8),param_1);
      if (bVar7) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar10 = pFVar10 + 0x10;
    }
    if (lVar4 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    param_2->ElementType = *(EGeometryElementType *)(lVar4 + 0x28);
    param_2->TopologyType = *(EGeometryTopologyType *)(lVar4 + 0x2c);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
              (&param_2->Selection,
               (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (lVar4 + 0x30));
    if (lVar4 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    iVar1 = *(int *)(lVar4 + 100);
    iVar2 = *(int *)(lVar4 + 0x38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar7 = iVar2 != iVar1;
  }
  return bVar7;
}

// GetSelectionTopologyType @ 14cb9d6b0

EGeometryTopologyType __thiscall
UGeometrySelectionManager::GetSelectionTopologyType(UGeometrySelectionManager *this)

{
  return (this->MeshTopologyMode == Polygroup) + Triangle;
}

// GetSelectionWorldFrame @ 14cb9d6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::GetSelectionWorldFrame
          (UGeometrySelectionManager *this,TFrame3<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  dVar8 = _UNK_15061cbc8;
  uVar7 = ___xmm_3ff00000000000000000000000000000;
  *(undefined4 *)&(param_1->Origin).field0_0x0 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 4) = uVar9;
  *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 8) = uVar10;
  *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0xc) = uVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  *(undefined1 (*) [16])((longlong)&(param_1->Origin).field0_0x0 + 0x10) = auVar6;
  local_20 = (undefined4)uVar7;
  uStack_1c = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x10) = local_20;
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x14) = uStack_1c;
  (param_1->Rotation).field0_0x0._s_0.W = dVar8;
  cVar13 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar13 != '\0') {
    if ((this->ActiveTargetReferences).ArrayNum < 1) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar1 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 8);
    lVar3 = *(longlong *)pFVar1;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)(lVar3 + 0x20);
    pcVar5 = *(code **)(*plVar4 + 0x88);
    if (lVar3 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (*pcVar5)(plVar4,lVar3 + 0x28,param_1,1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// GetTargetWorldFrame @ 14cb9ffe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::GetTargetWorldFrame
          (UGeometrySelectionManager *this,TFrame3<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  dVar8 = _UNK_15061cbc8;
  uVar7 = ___xmm_3ff00000000000000000000000000000;
  *(undefined4 *)&(param_1->Origin).field0_0x0 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 4) = uVar9;
  *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 8) = uVar10;
  *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0xc) = uVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  *(undefined1 (*) [16])((longlong)&(param_1->Origin).field0_0x0 + 0x10) = auVar6;
  local_20 = (undefined4)uVar7;
  uStack_1c = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0xc) = 0;
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x10) = local_20;
  *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x14) = uStack_1c;
  (param_1->Rotation).field0_0x0._s_0.W = dVar8;
  cVar13 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar13 != '\0') {
    if ((this->ActiveTargetReferences).ArrayNum < 1) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar1 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 8);
    lVar3 = *(longlong *)pFVar1;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    plVar4 = *(longlong **)(lVar3 + 0x20);
    pcVar5 = *(code **)(*plVar4 + 0x90);
    if (lVar3 == 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (*pcVar5)(plVar4,lVar3 + 0x28,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// HasActiveTargets @ 14cba0e30

bool __thiscall UGeometrySelectionManager::HasActiveTargets(UGeometrySelectionManager *this)

{
  return 0 < (this->ActiveTargetReferences).ArrayNum;
}

// HasBeenShutDown @ 14cba0e50

bool __thiscall UGeometrySelectionManager::HasBeenShutDown(UGeometrySelectionManager *this)

{
  return (this->ToolsContext).field0_0x0.DebugPtr == (UInteractiveToolsContext *)0x0;
}

// HasSavedSelection @ 14cba1170

bool __thiscall UGeometrySelectionManager::HasSavedSelection(UGeometrySelectionManager *this)

{
  return (this->SavedSelection).Selections.ArrayNum != 0;
}

// HasSelection @ 14cba1190

bool __thiscall UGeometrySelectionManager::HasSelection(UGeometrySelectionManager *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar7 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      return false;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    lVar3 = *(longlong *)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// HasSelectionForComponent @ 14cba12a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UGeometrySelectionManager::HasSelectionForComponent
          (UGeometrySelectionManager *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  cVar5 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar5 == '\0') {
LAB_14cba13a0:
    bVar6 = false;
  }
  else {
    iVar1 = (this->ActiveTargetReferences).ArrayNum;
    pFVar8 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar9) goto LAB_14cba13a0;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
      lVar3 = *(longlong *)pFVar8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar3 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      bVar6 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(lVar3 + 8),param_1);
      if (bVar6) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar8 = pFVar8 + 0x10;
    }
    if (lVar3 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    bVar6 = *(int *)(lVar3 + 0x38) == *(int *)(lVar3 + 100);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return bVar6;
}

// Initialize @ 14cba1ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UGeometrySelectionManager::Initialize
          (UGeometrySelectionManager *this,UInteractiveToolsContext *param_1,
          IToolsContextTransactionsAPI *param_2)

{
  UClass *pUVar1;
  UPreviewGeometry *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveToolsContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ToolsContext).field0_0x0.DebugPtr = param_1;
  this->TransactionsAPI = param_2;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UPreviewGeometry_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UPreviewGeometry *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPreviewGeometry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PreviewGeometry).field0_0x0.DebugPtr = pUVar2;
  return;
}

// IsInActiveTransformation @ 14cba4210

bool __thiscall UGeometrySelectionManager::IsInActiveTransformation(UGeometrySelectionManager *this)

{
  return 0 < (this->ActiveTransformations).ArrayNum;
}

// IsInTrackedSelectionChange @ 14cba4220

bool __thiscall
UGeometrySelectionManager::IsInTrackedSelectionChange(UGeometrySelectionManager *this)

{
  return this->bInTrackedSelectionChange;
}

// MarkRenderCachesDirty @ 14cba50d0

void __thiscall
UGeometrySelectionManager::MarkRenderCachesDirty(UGeometrySelectionManager *this,bool param_1)

{
  if (param_1) {
    this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | Default;
    return;
  }
  this->RenderCachesDirtyFlags =
       this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
  return;
}

// OnTargetGeometryModified @ 14cba68f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UGeometrySelectionManager::OnTargetGeometryModified
          (UGeometrySelectionManager *this,IGeometrySelector *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::FGeometrySelectionElements,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  FGeometrySelectionElements *pFVar3;
  UPreviewGeometry *this_01;
  
  this_00 = &this->CachedSelectableRenderElements;
  piVar1 = &(this->CachedSelectableRenderElements).ArrayMax;
  pFVar3 = (FGeometrySelectionElements *)(this_00->AllocatorInstance).Data;
  iVar2 = (this->CachedSelectableRenderElements).ArrayNum;
  if ((this->CachedSelectableRenderElements).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGeometrySelectionElements,int>(pFVar3,iVar2);
    (this->CachedSelectableRenderElements).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGeometrySelectionElements,int>(pFVar3,iVar2);
    (this->CachedSelectableRenderElements).ArrayNum = 0;
  }
  TArray<UE::Geometry::FGeometrySelectionElements,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,(this->ActiveTargetReferences).ArrayNum,Default);
  this_01 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (this_01 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveLineSet(this_01,(this->UnselectedParams).Identifiers.Elements + 1,true);
    UPreviewGeometry::RemovePointSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)&this->UnselectedParams,true);
    UPreviewGeometry::RemoveTriangleSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (this->UnselectedParams).Identifiers.Elements + 2,true);
  }
  this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | Default;
  ClearActivePreview(this);
  return;
}

// ProcessActiveSelections @ 14cba7e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::ProcessActiveSelections
          (UGeometrySelectionManager *this,
          TFunctionRef<void___cdecl(FGeometrySelectionHandle)> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  undefined1 local_98 [16];
  undefined8 local_88;
  FWeakObjectPtr FStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  FWeakObjectPtr FStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  FVar7 = _UNK_150ebf528;
  uVar6 = ___xmm_00000000000000000000000000000001;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar10 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    lVar3 = *(longlong *)pFVar10;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
      local_res18[0] = 0;
      local_88 = uVar6;
      FStack_80 = FVar7;
      FWeakObjectPtr::operator=(&FStack_80,(FObjectPtr)local_res18);
      uStack_70 = 0;
      if (lVar3 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_78 = lVar3 + 0x28;
      if (lVar3 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar9 = (undefined8 *)
               (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x28))
                         (*(longlong **)(lVar3 + 0x20),local_98);
      local_88 = *puVar9;
      FStack_80 = *(FWeakObjectPtr *)(puVar9 + 1);
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      uStack_70._0_4_ = (undefined4)uVar4;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
      uStack_70 = uVar4;
      local_68 = local_88;
      FStack_60 = FStack_80;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// RayHitTest @ 14cba8ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGeometrySelectionManager::RayHitTest
          (UGeometrySelectionManager *this,TRay<double> *param_1,FInputRayHit *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  FGeometrySelectionTarget *pFVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  undefined4 local_130;
  undefined8 local_128 [2];
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  uint local_e0;
  undefined4 local_dc;
  void *local_d8;
  FWeakObjectPtr FStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  dVar5 = _UNK_15061cbc8;
  dVar4 = ___xmm_3ff00000000000000000000000000000;
  local_108 = 0;
  local_e0 = local_e0 & 0xffffff00;
  dStack_f0 = ___xmm_3ff00000000000000000000000000000;
  dStack_e8 = _UNK_15061cbc8;
  local_dc = 0;
  dStack_100 = ___xmm_000000000000000047efffffe0000000;
  dStack_f8 = _UNK_1506c8f58;
  local_d8 = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  FStack_d0 = local_res8;
  *(ulonglong *)param_2 = CONCAT71(uStack_107,local_108);
  param_2->HitDepth = dStack_100;
  (param_2->HitNormal).field0_0x0._s_0.X = dStack_f8;
  (param_2->HitNormal).field0_0x0._s_0.Y = dStack_f0;
  (param_2->HitNormal).field0_0x0._s_0.Z = dStack_e8;
  param_2->bHasHitNormal = (bool)(char)local_e0;
  *(int3 *)&param_2->field_0x29 = (int3)(local_e0 >> 8);
  param_2->HitIdentifier = local_dc;
  param_2->HitOwner = local_d8;
  (param_2->HitObject).WeakPtr = local_res8;
  if ((this->ActiveTargetReferences).ArrayNum == 0) {
    cVar8 = '\0';
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_c8 = (param_1->Origin).field0_0x0._s_0.X;
    dStack_c0 = (param_1->Origin).field0_0x0._s_0.Y;
    local_58 = 0x42b40000;
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 8);
    uStack_a4 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0xc);
    uStack_a0 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0x10);
    uStack_9c = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0x14);
    local_54 = 0x42c80000;
    local_48 = __real_3ff0000000000000;
    local_b8 = (param_1->Origin).field0_0x0._s_0.Z;
    dStack_b0 = (param_1->Direction).field0_0x0._s_0.X;
    local_50 = 0x3f800000;
    local_68 = dVar4;
    dStack_60 = dVar5;
    local_4c = 0;
    plVar11 = (longlong *)
              (**(code **)(((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                           DebugPtr)->_padding_ + 0x398))();
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_98);
    if (((this->ActiveTargetReferences).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    lVar1 = *(longlong *)(this->ActiveTargetReferences).AllocatorInstance.Data;
    uVar9 = (**(code **)(this->_padding_ + 0x2f8))(this);
    uVar10 = (**(code **)(this->_padding_ + 0x2e0))(this);
    plVar11 = *(longlong **)(lVar1 + 0x20);
    local_118 = CONCAT44(uVar10,uVar9);
    local_130 = CONCAT31(CONCAT21(local_130._2_2_,this->bHitBackFaces),1);
    local_110 = local_130;
    cVar8 = (**(code **)(*plVar11 + 0x58))(plVar11,&local_c8,&local_118,param_2);
    if (cVar8 != '\0') {
      if (((this->ActiveTargetReferences).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      param_2->HitOwner = *(void **)(this->ActiveTargetReferences).AllocatorInstance.Data;
      if (((this->ActiveTargetReferences).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar2 = (this->ActiveTargetReferences).AllocatorInstance.Data;
      if ((*(longlong *)pFVar2 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (**(int **)pFVar2 == 1) {
        if (((this->ActiveTargetReferences).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar12 = TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>::operator->
                            ((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
                             (this->ActiveTargetReferences).AllocatorInstance.Data);
        local_res18 = (pFVar12->TargetIdentifier).TargetObject.WeakPtr;
      }
      else {
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_128[0] = 0;
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_128);
      }
      (param_2->HitObject).WeakPtr = local_res18;
    }
  }
  return (bool)cVar8;
}

// RebuildPreviewRenderCache @ 14cba91f0

void __thiscall
UGeometrySelectionManager::RebuildPreviewRenderCache(UGeometrySelectionManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  FMeshElementSelectionParams *pFVar8;
  char cVar9;
  FMeshElementSelectionParams local_98;
  FMeshElementSelectionParams local_50;
  
  if ((this->RenderCachesDirtyFlags & PreviewCachesDirty) != None) {
    iVar1 = (this->ActiveTargetReferences).ArrayNum;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar2 = (this->ActiveTargetReferences).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
      lVar4 = *(longlong *)pFVar2;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = CVarGeometrySelectionManager_FullSelectionHoverHighlights.Ref;
      if (*(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x8 !=
          *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x34) {
        bVar7 = IsInParallelGameThread();
        if (!bVar7) {
          bVar7 = IsInGameThread();
          if (!bVar7) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        cVar9 = (pTVar6->ShadowedValue[0] != 0) + '\x02';
        if (lVar4 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        (**(code **)(**(longlong **)(lVar4 + 0x20) + 0xa0))
                  (*(longlong **)(lVar4 + 0x20),&this->SelectedActivePreviewSelection,
                   &this->CachedSelectedPreviewRenderElements,1,cVar9);
        (**(code **)(**(longlong **)(lVar4 + 0x20) + 0xa0))
                  (*(longlong **)(lVar4 + 0x20),&this->UnselectedActivePreviewSelection,
                   &this->CachedUnselectedPreviewRenderElements,1,cVar9);
        pFVar8 = FMeshElementSelectionParams::FMeshElementSelectionParams
                           (&local_98,&this->HoverOverSelectedParams);
        CreateOrUpdateAllSets(this,&this->CachedSelectedPreviewRenderElements,pFVar8);
        pFVar8 = FMeshElementSelectionParams::FMeshElementSelectionParams
                           (&local_50,&this->HoverOverUnselectedParams);
        CreateOrUpdateAllSets(this,&this->CachedUnselectedPreviewRenderElements,pFVar8);
      }
      this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags & ~PreviewCachesDirty;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return;
}

// RebuildSelectable @ 14cba93e0

void __thiscall UGeometrySelectionManager::RebuildSelectable(UGeometrySelectionManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FMeshElementSelectionParams local_58;
  
  uVar4 = 0;
  if (0 < (this->ActiveTargetReferences).ArrayNum) {
    do {
      TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
                (&local_58.Identifiers,&(this->UnselectedParams).Identifiers);
      local_58.DepthBias = (this->UnselectedParams).DepthBias;
      local_58.LineThickness = (this->UnselectedParams).LineThickness;
      local_58.SelectionFillColor.field0_0x0 =
           (TObjectPtr<UMaterialInstanceDynamic>_u_0)
           (this->UnselectedParams).SelectionFillColor.field0_0x0.DebugPtr;
      local_58.Color.field0_0x0 = (this->UnselectedParams).Color.field0_0x0;
      local_58.PointSize = (this->UnselectedParams).PointSize;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_58.SelectionFillColor.field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_58.SelectionFillColor.field0_0x0);
      }
      uVar3 = 0;
      if ((int)uVar4 < (this->CachedSelectableRenderElements).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      CreateOrUpdateAllSets
                (this,(FGeometrySelectionElements *)
                      ((this->CachedSelectableRenderElements).AllocatorInstance.Data +
                      (longlong)(int)uVar4 * 0x30),&local_58);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->ActiveTargetReferences).ArrayNum);
  }
  return;
}

// RebuildSelectableRenderCache @ 14cba9500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::RebuildSelectableRenderCache(UGeometrySelectionManager *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  FGeometrySelectionElements *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  longlong local_110;
  code *local_108;
  undefined1 *local_100;
  FMeshElementSelectionParams local_f8;
  undefined4 local_a8;
  undefined4 local_a4;
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((this->RenderCachesDirtyFlags & UnselectedCachesDirty) != None) &&
     (this->MeshTopologyMode != None)) {
    if (((this->ActiveTargetReferences).ArrayNum != (this->CachedSelectionRenderElements).ArrayNum)
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveTargetReferences.Num() == CachedSelectionRenderElements.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                              ,0x6d2,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = _UNK_150631d98;
    uVar5 = ___xmm_00000000ffffffff0000008000000000;
    uVar12 = 0;
    if (0 < (this->ActiveTargetReferences).ArrayNum) {
      local_110 = 0;
      uVar14 = uVar12;
      uVar15 = uVar12;
      do {
        uVar11 = (uint)uVar12;
        uVar10 = 0;
        if ((int)uVar11 < (this->ActiveTargetReferences).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (this->ActiveTargetReferences).AllocatorInstance.Data;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + uVar14 + 8);
        lVar3 = *(longlong *)(pFVar1 + uVar14);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar10 = 0;
        if ((int)uVar11 < (this->CachedSelectableRenderElements).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (FGeometrySelectionElements *)
                  ((this->CachedSelectableRenderElements).AllocatorInstance.Data + uVar15);
        (pFVar13->Triangles).ArrayNum = 0;
        if ((pFVar13->Triangles).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,0,(ForAnyElementType *)pFVar13,0,&(pFVar13->Triangles).ArrayMax);
        }
        (pFVar13->Segments).ArrayNum = 0;
        if ((pFVar13->Segments).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&(pFVar13->Segments).AllocatorInstance,0,&(pFVar13->Segments).ArrayMax
                    );
        }
        (pFVar13->Points).ArrayNum = 0;
        if ((pFVar13->Points).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(pFVar13->Points).AllocatorInstance,0,&(pFVar13->Points).ArrayMax);
        }
        uVar6 = ___xmm_00000000ffffffff0000008000000000;
        local_a8 = 4;
        local_a4 = 1;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_98 = 0;
        local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        ___xmm_00000000ffffffff0000008000000000 = (int)uVar5;
        _UNK_150631d94 = SUB84(uVar5,4);
        local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
        local_90.MaxBits = _UNK_150631d94;
        uStack_70 = uVar7;
        local_60 = (void *)0x0;
        local_58 = 0;
        ___xmm_00000000ffffffff0000008000000000 = uVar6;
        local_a8 = (**(code **)(this->_padding_ + 0x2e0))(this);
        local_a4 = (**(code **)(this->_padding_ + 0x2f8))(this);
        if ((lVar3 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_100 = local_118;
        local_108 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometrySelectionManager::RebuildSelectableRenderCache'::__l14::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
                    ::Call;
        (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x48))
                  (*(longlong **)(lVar3 + 0x20),&local_a8,&local_108,0);
        (**(code **)(**(longlong **)(lVar3 + 0x20) + 0xa0))
                  (*(longlong **)(lVar3 + 0x20),&local_a8,pFVar13,1);
        TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
                  (&local_f8.Identifiers,&(this->UnselectedParams).Identifiers);
        local_f8.DepthBias = (this->UnselectedParams).DepthBias;
        local_f8.LineThickness = (this->UnselectedParams).LineThickness;
        local_f8.SelectionFillColor.field0_0x0 =
             (TObjectPtr<UMaterialInstanceDynamic>_u_0)
             (this->UnselectedParams).SelectionFillColor.field0_0x0.DebugPtr;
        local_f8.Color.field0_0x0 = (this->UnselectedParams).Color.field0_0x0;
        local_f8.PointSize = (this->UnselectedParams).PointSize;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_f8.SelectionFillColor.field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_f8.SelectionFillColor.field0_0x0);
        }
        CreateOrUpdateAllSets(this,pFVar13,&local_f8);
        local_58 = 0;
        if (local_60 != (void *)0x0) {
          FMemory::Free(local_60);
        }
        uVar12 = local_98 >> 0x20;
        local_98 = local_98 & 0xffffffff00000000;
        if ((int)uVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
        }
        iVar8 = local_90.MaxBits;
        uStack_70 = 0xffffffff;
        local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
        if (0x80 < (uint)iVar8) {
          local_90.NumBits = 0;
          local_90.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
        }
        if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
        }
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        uVar12 = (ulonglong)(uVar11 + 1);
        local_110 = local_110 + 1;
        uVar14 = uVar14 + 0x10;
        uVar15 = uVar15 + 0x30;
      } while ((int)(uVar11 + 1) < (this->ActiveTargetReferences).ArrayNum);
    }
    this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags & ~UnselectedCachesDirty;
  }
  return;
}

// RebuildSelectionRenderCache @ 14cba9970

void __thiscall
UGeometrySelectionManager::RebuildSelectionRenderCache(UGeometrySelectionManager *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FGeometrySelectionElements *pFVar8;
  longlong lVar9;
  longlong lVar10;
  FMeshElementSelectionParams local_78;
  
  if ((this->RenderCachesDirtyFlags & SelectionCachesDirty) != None) {
    if (((this->ActiveTargetReferences).ArrayNum != (this->CachedSelectionRenderElements).ArrayNum)
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveTargetReferences.Num() == CachedSelectionRenderElements.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                              ,0x6bd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = 0;
    if (0 < (this->ActiveTargetReferences).ArrayNum) {
      lVar9 = 0;
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->ActiveTargetReferences).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (this->ActiveTargetReferences).AllocatorInstance.Data;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 8);
        lVar3 = *(longlong *)(pFVar1 + lVar10);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar6 = 0;
        if ((int)uVar7 < (this->CachedSelectionRenderElements).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = (FGeometrySelectionElements *)
                 ((this->CachedSelectionRenderElements).AllocatorInstance.Data + lVar9);
        (pFVar8->Triangles).ArrayNum = 0;
        if ((pFVar8->Triangles).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,0,(ForAnyElementType *)pFVar8,0,&(pFVar8->Triangles).ArrayMax);
        }
        (pFVar8->Segments).ArrayNum = 0;
        if ((pFVar8->Segments).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&(pFVar8->Segments).AllocatorInstance,0,&(pFVar8->Segments).ArrayMax);
        }
        (pFVar8->Points).ArrayNum = 0;
        if ((pFVar8->Points).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(pFVar8->Points).AllocatorInstance,0,&(pFVar8->Points).ArrayMax);
        }
        if ((lVar3 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(**(longlong **)(lVar3 + 0x20) + 0xa0))
                  (*(longlong **)(lVar3 + 0x20),lVar3 + 0x28,pFVar8,1,1);
        TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
                  (&local_78.Identifiers,&(this->SelectedParams).Identifiers);
        local_78.DepthBias = (this->SelectedParams).DepthBias;
        local_78.LineThickness = (this->SelectedParams).LineThickness;
        local_78.SelectionFillColor.field0_0x0 =
             (TObjectPtr<UMaterialInstanceDynamic>_u_0)
             (this->SelectedParams).SelectionFillColor.field0_0x0.DebugPtr;
        local_78.Color.field0_0x0 = (this->SelectedParams).Color.field0_0x0;
        local_78.PointSize = (this->SelectedParams).PointSize;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_78.SelectionFillColor.field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_78.SelectionFillColor.field0_0x0);
        }
        CreateOrUpdateAllSets(this,pFVar8,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0x10;
        lVar9 = lVar9 + 0x30;
      } while ((int)uVar7 < (this->ActiveTargetReferences).ArrayNum);
    }
    this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags & ~SelectionCachesDirty;
  }
  return;
}

// RebuildSelectionRenderCaches @ 14cba9c90

void __thiscall
UGeometrySelectionManager::RebuildSelectionRenderCaches(UGeometrySelectionManager *this)

{
  RebuildSelectionRenderCache(this);
  RebuildSelectableRenderCache(this);
  RebuildPreviewRenderCache(this);
  return;
}

// RegisterSelectorFactory @ 14cbaaf10

void __thiscall
UGeometrySelectionManager::RegisterSelectorFactory
          (UGeometrySelectionManager *this,
          TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_> param_1)

{
  int *piVar1;
  TArray<TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  IGeometrySelectorFactory *pIVar3;
  IGeometrySelectorFactory IVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pTVar2 = &this->Factories;
  pIVar3 = (IGeometrySelectorFactory *)(pTVar2->AllocatorInstance).Data;
  if ((pIVar3 <= param_1.Ptr) && (param_1.Ptr < pIVar3 + (this->Factories).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Factories).ArrayNum;
  piVar1 = &(this->Factories).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Factories).ArrayNum = iVar7 + 1;
  *(IGeometrySelectorFactory *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
       *param_1.Ptr;
  *param_1.Ptr = (IGeometrySelectorFactory)0x0;
  ResetTargetCache(this);
  IVar4 = *param_1.Ptr;
  if (IVar4 != (IGeometrySelectorFactory)0x0) {
    (*(code *)**(undefined8 **)IVar4)(IVar4,1);
  }
  return;
}

// RemoveAllSets @ 14cbabce0

void __thiscall UGeometrySelectionManager::RemoveAllSets(UGeometrySelectionManager *this)

{
  UPreviewGeometry *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveAllLineSets(this_00,true);
    UPreviewGeometry::RemoveAllPointSets((this->PreviewGeometry).field0_0x0.DebugPtr,true);
    UPreviewGeometry::RemoveAllTriangleSets((this->PreviewGeometry).field0_0x0.DebugPtr,true);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1829034393054738812>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                     ,0x684,"PreviewGeometry");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveSets @ 14cbac3c0

void __thiscall
UGeometrySelectionManager::RemoveSets
          (UGeometrySelectionManager *this,TArrayView<FString,int> *param_1)

{
  UPreviewGeometry *pUVar1;
  FString *pFVar2;
  
  pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    pFVar2 = TArrayView<FString,int>::operator[](param_1,1);
    UPreviewGeometry::RemoveLineSet(pUVar1,pFVar2,true);
    pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
    pFVar2 = TArrayView<FString,int>::operator[](param_1,0);
    UPreviewGeometry::RemovePointSet(pUVar1,pFVar2,true);
    pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
    pFVar2 = TArrayView<FString,int>::operator[](param_1,2);
    UPreviewGeometry::RemoveTriangleSet(pUVar1,pFVar2,true);
  }
  return;
}

// ResetTargetCache @ 14cbad0b0

void __thiscall UGeometrySelectionManager::ResetTargetCache(UGeometrySelectionManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  ulonglong uVar3;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *pTVar4;
  ForAnyElementType FVar5;
  undefined1 local_res8 [8];
  TArray<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,TSizedDefaultAllocator<32>_>
  local_38;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>_>
              *)&this->TargetCache,&local_38);
  iVar2 = local_38.ArrayNum;
  uVar3 = (ulonglong)local_38.ArrayNum;
  pTVar4 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
           (local_38.AllocatorInstance.Data + uVar3 * 0x10);
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)FVar5.Data == pTVar4)
    break;
    pTVar1 = (((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)FVar5.Data)->
             SharedReferenceCount).ReferenceController;
    local_28.Object =
         ((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)FVar5.Data)->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar1;
    SleepOrShutdownTarget(this,&local_28,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    uVar3 = local_38._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0x10;
  }
  TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
           *)&this->TargetCache);
  DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
            ((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
             local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
      local_38.AllocatorInstance.Data !=
      (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RestoreSavedSelection @ 14cbad4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UGeometrySelectionManager::RestoreSavedSelection(UGeometrySelectionManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  IToolsContextTransactionsAPI *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  FWeakObjectPtr FVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  FText *pFVar18;
  ulonglong uVar19;
  FGeometrySelectionReplaceChange *this_00;
  FGeometrySelectionReplaceChange *pFVar20;
  uint uVar21;
  undefined4 *puVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  void **local_130;
  undefined1 local_128;
  undefined1 local_127 [3];
  uint local_124;
  uint local_120;
  undefined4 local_11c;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  longlong local_f8;
  FScriptContainerElement *local_f0;
  FGeometrySelectionReplaceChange *local_e8;
  FDestructionSentinel local_e0;
  FText local_c8;
  FText local_b8;
  EGeometryElementType local_a8;
  EGeometryTopologyType local_a4;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (((this->SavedSelection).Targets.ArrayNum != (this->SavedSelection).Selections.ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SavedSelection.Targets.Num() == SavedSelection.Selections.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                          ,0x46f,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  pIVar3 = this->TransactionsAPI;
  pcVar8 = *(code **)((longlong)*pIVar3 + 0x18);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_c8,L"UGeometrySelectionManager",L"RestoreSelection",
                       L"Restore Selection");
  (*pcVar8)(pIVar3,pFVar18);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  uVar12 = _UNK_150631d98;
  uVar11 = ___xmm_00000000ffffffff0000008000000000;
  local_128 = 1;
  local_124 = 0;
  if (0 < (this->SavedSelection).Targets.ArrayNum) {
    do {
      uVar21 = local_124;
      iVar2 = (this->SavedSelection).Targets.ArrayNum;
      uVar26 = ~local_124 >> 0x1f;
      uVar17 = 0;
      if ((int)local_124 < iVar2) {
        uVar17 = uVar26;
      }
      if (uVar17 == 0) {
        local_138 = (undefined4 *)(longlong)(int)local_124;
        local_130 = (void **)(longlong)iVar2;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
      }
      puVar22 = (undefined4 *)(longlong)(int)uVar21;
      local_f8 = (longlong)puVar22 * 8;
      bVar13 = FWeakObjectPtr::IsValid
                         ((FWeakObjectPtr *)
                          ((this->SavedSelection).Targets.AllocatorInstance.Data + local_f8));
      if (bVar13) {
        iVar2 = (this->SavedSelection).Selections.ArrayNum;
        uVar17 = 0;
        if ((int)uVar21 < iVar2) {
          uVar17 = uVar26;
        }
        if ((uVar17 == 0) &&
           (local_138 = puVar22, local_130 = (void **)(longlong)iVar2,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        pFVar23 = (this->ActiveTargetReferences).AllocatorInstance.Data;
        local_f0 = (this->SavedSelection).Selections.AllocatorInstance.Data +
                   (longlong)puVar22 * 0x58;
        local_120 = (this->ActiveTargetReferences).ArrayNum;
        uVar19 = (ulonglong)(int)local_120;
        pFVar25 = pFVar23 + uVar19 * 0x10;
        while( true ) {
          if ((this->ActiveTargetReferences).ArrayNum != (int)uVar19) {
            local_127[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_127);
          }
          uVar21 = local_124;
          if (pFVar23 == pFVar25) goto LAB_14cbada1b;
          pTVar4 = *(TReferenceControllerBase<1> **)(pFVar23 + 8);
          puVar5 = *(undefined8 **)pFVar23;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((puVar5 == (undefined8 *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
          iVar2 = (this->SavedSelection).Targets.ArrayNum;
          uVar21 = 0;
          if ((int)local_124 < iVar2) {
            uVar21 = uVar26;
          }
          if ((uVar21 == 0) &&
             (local_138 = (undefined4 *)(longlong)(int)local_124,
             local_130 = (void **)(longlong)iVar2,
             bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
          bVar13 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                             ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)
                              ((this->SavedSelection).Targets.AllocatorInstance.Data + local_f8),
                              (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(puVar5 + 1));
          if (bVar13) break;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          uVar19 = (ulonglong)local_120;
          pFVar23 = pFVar23 + 0x10;
        }
        if ((puVar5 == (undefined8 *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        local_a8 = *(EGeometryElementType *)(puVar5 + 5);
        pFVar20 = (FGeometrySelectionReplaceChange *)0x0;
        local_a4 = *(EGeometryTopologyType *)((longlong)puVar5 + 0x2c);
        local_a0.Elements._0_8_ = 0;
        local_a0.Elements._8_8_ = 0;
        local_a0.Elements._32_8_ = 0;
        local_a0.Elements._40_8_ = uVar11;
        local_a0.Elements._48_8_ = uVar12;
        local_a0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_a0.HashSize = 0;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                  (&local_a0,
                   (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)(puVar5 + 6));
        local_118 = (void *)0x0;
        local_110 = 0;
        local_108 = (void *)0x0;
        local_100 = 0;
        if ((puVar5 == (undefined8 *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        local_130 = &local_118;
        local_138 = &local_11c;
        local_11c = 2;
        (**(code **)(*(longlong *)puVar5[4] + 0x50))((longlong *)puVar5[4],local_f0,1,puVar5[0x10]);
        if (((int)local_110 != 0) || ((int)local_100 != 0)) {
          this_00 = ::operator_new(0xd0);
          if (this_00 != (FGeometrySelectionReplaceChange *)0x0) {
            memset(this_00,0,0xd0);
            pFVar20 = FGeometrySelectionReplaceChange::FGeometrySelectionReplaceChange(this_00);
          }
          uVar9 = *puVar5;
          FVar10 = *(FWeakObjectPtr *)(puVar5 + 1);
          (pFVar20->Identifier).TargetType = (int)uVar9;
          (pFVar20->Identifier).ObjectType = (int)((ulonglong)uVar9 >> 0x20);
          (pFVar20->Identifier).TargetObject.WeakPtr = FVar10;
          (pFVar20->After).ElementType = *(EGeometryElementType *)(puVar5 + 5);
          (pFVar20->After).TopologyType = *(EGeometryTopologyType *)((longlong)puVar5 + 0x2c);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                    (&(pFVar20->After).Selection,
                     (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(puVar5 + 6));
          (pFVar20->Before).ElementType = local_a8;
          (pFVar20->Before).TopologyType = local_a4;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                    (&(pFVar20->Before).Selection,&local_a0);
          pIVar3 = this->TransactionsAPI;
          pcVar8 = *(code **)((longlong)*pIVar3 + 0x28);
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_b8,L"UGeometrySelectionManager",L"RestoreSelection",
                               L"Restore Selection");
          local_e8 = pFVar20;
          (*pcVar8)(pIVar3,this,&local_e8,pFVar18);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          this->RenderCachesDirtyFlags =
               this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->OnSelectionModified,(FWriteAccessScope *)&local_e0);
          puVar1 = &(this->OnSelectionModified).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar13 = false;
          uVar21 = *(int *)&(this->OnSelectionModified).field_0x10 - 1;
          if (-1 < (int)uVar21) {
            puVar22 = (undefined4 *)(longlong)(int)uVar21;
            lVar24 = (longlong)puVar22 << 4;
            bVar13 = false;
            do {
              iVar2 = *(int *)&(this->OnSelectionModified).field_0x10;
              uVar17 = 0;
              if ((int)uVar21 < iVar2) {
                uVar17 = ~uVar21 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (local_138 = puVar22, local_130 = (void **)(longlong)iVar2,
                 bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              lVar6 = *(longlong *)&(this->OnSelectionModified).field_0x8;
              if (((*(int *)(lVar24 + 8 + lVar6) == 0) ||
                  (plVar7 = *(longlong **)(lVar24 + lVar6), plVar7 == (longlong *)0x0)) ||
                 (cVar16 = (**(code **)(*plVar7 + 0x68))(), cVar16 == '\0')) {
                bVar13 = true;
              }
              puVar22 = (undefined4 *)((longlong)puVar22 + -1);
              lVar24 = lVar24 + -0x10;
              uVar21 = uVar21 - 1;
            } while (-1 < (int)uVar21);
          }
          puVar1 = &(this->OnSelectionModified).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar13) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnSelectionModified,false);
          }
          if (local_e0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
          }
        }
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        local_a0.HashSize = 0;
        if (local_a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_a0.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_a0.Elements);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      else {
LAB_14cbada1b:
        local_124 = uVar21;
        local_128 = 0;
      }
      local_124 = local_124 + 1;
    } while ((int)local_124 < (this->SavedSelection).Targets.ArrayNum);
  }
  uVar14 = local_128;
  (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
  (**(code **)(this->_padding_ + 0x328))(this);
  return (bool)uVar14;
}

// RevertChange @ 14cbadf00

void __thiscall
UGeometrySelectionManager::RevertChange
          (UGeometrySelectionManager *this,IGeometrySelectionChange *param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  int local_48;
  int local_44;
  TWeakObjectPtr<UObject,FWeakObjectPtr> local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  cVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (cVar3 == '\0') {
    (**(code **)((longlong)*param_1 + 8))(param_1,&local_48);
    uVar7 = 0;
    uVar9 = uVar7;
    if (0 < (this->ActiveTargetReferences).ArrayNum) {
      do {
        uVar6 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar6 < (this->ActiveTargetReferences).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (this->ActiveTargetReferences).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar8 + uVar9) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        piVar1 = *(int **)(pFVar8 + uVar9);
        if (((*piVar1 == local_48) && (piVar1[1] == local_44)) &&
           (bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                              ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(piVar1 + 2),&local_40),
           bVar4)) {
          local_38 = (void *)0x0;
          local_30 = 0;
          local_28 = (void *)0x0;
          pcVar2 = *(code **)((longlong)*param_1 + 0x18);
          local_20 = 0;
          uVar5 = 0;
          if ((int)uVar6 < (this->ActiveTargetReferences).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = (this->ActiveTargetReferences).AllocatorInstance.Data +
                   (longlong)(int)uVar6 * 0x10;
          if ((*(longlong *)pFVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (*pcVar2)(param_1,*(undefined8 *)(*(longlong *)pFVar8 + 0x80),&local_38);
          if (((int)local_30 != 0) || ((int)local_20 != 0)) {
            this->RenderCachesDirtyFlags =
                 this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&this->OnSelectionModified);
          }
          if (local_28 != (void *)0x0) {
            FMemory::Free(local_28);
          }
          if (local_38 == (void *)0x0) {
            return;
          }
          FMemory::Free(local_38);
          return;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 + 0x10;
      } while ((int)(uVar6 + 1) < (this->ActiveTargetReferences).ArrayNum);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054738899>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x62d,"HasBeenShutDown() == false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SaveCurrentSelection @ 14cbae180

void __thiscall UGeometrySelectionManager::SaveCurrentSelection(UGeometrySelectionManager *this)

{
  int *piVar1;
  int *piVar2;
  FSavedSelection *pFVar3;
  TArray<UE::Geometry::FGeometrySelection,TSizedDefaultAllocator<32>_> *pTVar4;
  FGeometrySelection *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  
  pFVar3 = &this->SavedSelection;
  iVar10 = (this->SavedSelection).Targets.ArrayMax;
  piVar1 = &(this->SavedSelection).Targets.ArrayMax;
  (this->SavedSelection).Targets.ArrayNum = 0;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)pFVar3,0,piVar1);
  }
  piVar2 = &(this->SavedSelection).Selections.ArrayMax;
  pFVar5 = (FGeometrySelection *)(this->SavedSelection).Selections.AllocatorInstance.Data;
  iVar10 = (this->SavedSelection).Selections.ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<UE::Geometry::FGeometrySelection,int>(pFVar5,iVar10);
    (this->SavedSelection).Selections.ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&(this->SavedSelection).Selections.AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<UE::Geometry::FGeometrySelection,int>(pFVar5,iVar10);
    (this->SavedSelection).Selections.ArrayNum = 0;
  }
  local_res10 = (this->ActiveTargetReferences).ArrayNum;
  uVar11 = (ulonglong)(int)local_res10;
  pFVar15 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar14 = pFVar15 + uVar11 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar14) break;
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
    lVar7 = *(longlong *)pFVar15;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar7 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar13 = (pFVar3->Targets).AllocatorInstance.Data;
    pFVar12 = (FScriptContainerElement *)(lVar7 + 8);
    if ((pFVar13 <= pFVar12) && (pFVar12 < pFVar13 + (longlong)*piVar1 * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->SavedSelection).Targets.ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,(ForAnyElementType *)pFVar3,piVar1);
    }
    (this->SavedSelection).Targets.ArrayNum = iVar10 + 1;
    pTVar4 = &(this->SavedSelection).Selections;
    *(undefined8 *)((pFVar3->Targets).AllocatorInstance.Data + (longlong)iVar10 * 8) =
         *(undefined8 *)pFVar12;
    if (lVar7 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    pFVar13 = (FScriptContainerElement *)(lVar7 + 0x28);
    if ((pFVar12 <= pFVar13) &&
       (pFVar13 < pFVar12 + (longlong)(this->SavedSelection).Selections.ArrayMax * 0x58)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->SavedSelection).Selections.ArrayNum;
    piVar2 = &(this->SavedSelection).Selections.ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,&pTVar4->AllocatorInstance,piVar2);
    }
    (this->SavedSelection).Selections.ArrayNum = iVar10 + 1;
    pFVar12 = (pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 0x58;
    *(undefined4 *)pFVar12 = *(undefined4 *)pFVar13;
    *(undefined4 *)(pFVar12 + 4) = *(undefined4 *)(lVar7 + 0x2c);
    *(undefined8 *)
     &((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
      (pFVar12 + 8))->Elements = 0;
    *(undefined8 *)(pFVar12 + 0x10) = 0;
    *(undefined8 *)(pFVar12 + 0x28) = 0;
    *(undefined4 *)(pFVar12 + 0x30) = 0;
    *(undefined4 *)(pFVar12 + 0x34) = 0x80;
    *(undefined4 *)(pFVar12 + 0x38) = 0xffffffff;
    *(undefined4 *)(pFVar12 + 0x3c) = 0;
    *(undefined8 *)(pFVar12 + 0x48) = 0;
    *(undefined4 *)(pFVar12 + 0x50) = 0;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
              ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (pFVar12 + 8),
               (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (lVar7 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    uVar11 = (ulonglong)local_res10;
    pFVar15 = pFVar15 + 0x10;
  }
  return;
}

// SetCurrentTargetsLockState @ 14cbaed20

void __thiscall
UGeometrySelectionManager::SetCurrentTargetsLockState(UGeometrySelectionManager *this,bool param_1)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  IToolsContextTransactionsAPI *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  ulonglong uVar12;
  FText *pFVar13;
  undefined8 *puVar14;
  byte bVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res20 [8];
  undefined8 local_88;
  undefined8 *local_80;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  bVar15 = 0;
  bVar7 = false;
  pFVar18 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  bVar9 = false;
  uVar1 = (this->ActiveTargetReferences).ArrayNum;
  uVar12 = (ulonglong)(int)uVar1;
  pFVar16 = pFVar18 + uVar12 * 0x10;
  bVar8 = false;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != (int)uVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar18 == pFVar16) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
    puVar3 = *(undefined8 **)pFVar18;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar11 = (**(code **)(*(longlong *)puVar3[4] + 0x30))();
    if ((cVar11 != '\0') &&
       (cVar11 = (**(code **)(*(longlong *)puVar3[4] + 0x38))(), (bool)cVar11 != param_1)) {
      (**(code **)(*(longlong *)puVar3[4] + 0x40))((longlong *)puVar3[4],param_1);
      bVar9 = true;
      bVar10 = !bVar7;
      bVar7 = bVar8;
      if (bVar10) {
        pIVar4 = this->TransactionsAPI;
        pwVar17 = L"Lock Target";
        pcVar5 = *(code **)((longlong)*pIVar4 + 0x18);
        if (!param_1) {
          pwVar17 = L"Unlock Target";
        }
        bVar15 = !param_1 + 1U | bVar15;
        pFVar13 = &local_78;
        if (param_1) {
          pFVar13 = &local_68;
        }
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (pFVar13,L"UGeometrySelectionManager",pwVar17,pwVar17);
        (*pcVar5)(pIVar4,pFVar13);
        if (((bVar15 & 2) != 0) &&
           (bVar15 = bVar15 & 0xfd, local_78.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if ((param_1) && (bVar15 = bVar15 & 0xfe, local_68.TextData.Reference != (ITextData *)0x0))
        {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        bVar7 = true;
      }
      puVar14 = ::operator_new(0x20);
      if (puVar14 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        puVar14[3] = 0;
        *puVar14 = &___7FGeometrySelectionManager_TargetLockStateChange__6B_;
        puVar14[1] = 1;
        ((FWeakObjectPtr *)(puVar14 + 2))->ObjectIndex = 0;
        *(undefined4 *)((longlong)puVar14 + 0x14) = 0;
        local_88 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 2),(FObjectPtr)&local_88);
      }
      uVar6 = puVar3[1];
      puVar14[1] = *puVar3;
      puVar14[2] = uVar6;
      *(bool *)(puVar14 + 3) = param_1;
      pIVar4 = this->TransactionsAPI;
      pcVar5 = *(code **)((longlong)*pIVar4 + 0x28);
      if (param_1) {
        bVar15 = bVar15 | 4;
      }
      else {
        bVar15 = bVar15 | 8;
      }
      pwVar17 = L"Lock Target";
      pFVar13 = &local_48;
      if (!param_1) {
        pwVar17 = L"Unlock Target";
        pFVar13 = &local_58;
      }
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (pFVar13,L"UGeometrySelectionManager",pwVar17,pwVar17);
      local_80 = puVar14;
      (*pcVar5)(pIVar4,this,&local_80,pFVar13);
      if (((bVar15 & 8) != 0) &&
         (bVar15 = bVar15 & 0xf7, local_58.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      bVar8 = bVar7;
      if (((bVar15 & 4) != 0) &&
         (bVar15 = bVar15 & 0xfb, local_48.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar12 = (ulonglong)uVar1;
    pFVar18 = pFVar18 + 0x10;
  }
  if (bVar9) {
    (**(code **)(this->_padding_ + 0x310))(this,0);
  }
  if (bVar7) {
    (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
  }
  return;
}

// SetHitBackFaces @ 14cbaf4b0

void __thiscall
UGeometrySelectionManager::SetHitBackFaces(UGeometrySelectionManager *this,bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  FGeometrySelectionEditor *this_00;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FGeometrySelectionHitQueryConfig local_28;
  
  this->bHitBackFaces = param_1;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar6 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) break;
    if (*(longlong *)pFVar6 == 0) {
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
    lVar3 = *(longlong *)(*(longlong *)pFVar6 + 0x80);
    local_28._0_8_ = *(undefined8 *)(lVar3 + 8);
    uVar2 = *(undefined4 *)(lVar3 + 0x10);
    local_28._10_2_ = SUB42((uint)uVar2 >> 0x10,0);
    local_28.bOnlyVisible = SUB41(uVar2,0);
    local_28.bHitBackFaces = this->bHitBackFaces;
    if (*(longlong *)pFVar6 == 0) {
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
    this_00 = *(FGeometrySelectionEditor **)(*(longlong *)pFVar6 + 0x80);
    if (*(longlong *)pFVar6 == 0) {
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
    UE::Geometry::FGeometrySelectionEditor::UpdateQueryConfig
              (this_00,&local_28,*(bool *)(*(longlong *)(*(longlong *)pFVar6 + 0x80) + 0x14));
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// SetMeshSelectionTypeAndMode @ 14cbaf630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::SetMeshSelectionTypeAndMode
          (UGeometrySelectionManager *this,EGeometryElementType param_1,EMeshTopologyMode param_2,
          bool param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  IToolsContextTransactionsAPI *pIVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  FWeakObjectPtr FVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  FText *pFVar14;
  FGeometrySelectionReplaceChange *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FGeometrySelection *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_188 [32];
  undefined1 local_138;
  char local_137;
  char local_136;
  ForAnyElementType local_130;
  int local_128;
  int iStack_124;
  longlong local_120;
  undefined4 local_118;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  FGeometrySelectionReplaceChange *local_e8;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  EGeometryElementType local_a8;
  EGeometryTopologyType local_a4;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_120 = CONCAT44(local_120._4_4_,param_2);
  if ((this->MeshTopologyMode == param_2) && (this->SelectionElementType == param_1)) {
    return;
  }
  local_136 = param_3;
  local_137 = (**(code **)(this->_padding_ + 0x388))();
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 0;
  iStack_124 = 0;
  if ((local_137 != '\0') && (param_3)) {
    iVar1 = (this->ActiveTargetReferences).ArrayNum;
    pFVar19 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pFVar21 = pFVar19 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
        local_138 = 0;
        `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_138);
      }
      if (pFVar19 == pFVar21) break;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
      lVar3 = *(longlong *)pFVar19;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar3 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar18 = (FGeometrySelection *)(lVar3 + 0x28);
      if (((local_130.Data <= pFVar18) &&
          (pFVar18 < (FGeometrySelection *)(local_130.Data + (longlong)iStack_124 * 0x58))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_128 == iStack_124) {
        local_128 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x858,&local_130,&iStack_124);
      }
      lVar16 = (longlong)local_128;
      local_128 = local_128 + 1;
      pFVar17 = local_130.Data + lVar16 * 0x58;
      *(EGeometryElementType *)&pFVar17->field_0x0 = pFVar18->ElementType;
      *(undefined4 *)(pFVar17 + 4) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined8 *)
       &((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
        (pFVar17 + 8))->Elements = 0;
      *(undefined8 *)(pFVar17 + 0x10) = 0;
      *(undefined8 *)(pFVar17 + 0x28) = 0;
      *(undefined4 *)(pFVar17 + 0x30) = 0;
      *(undefined4 *)(pFVar17 + 0x34) = 0x80;
      *(undefined4 *)(pFVar17 + 0x38) = 0xffffffff;
      *(undefined4 *)(pFVar17 + 0x3c) = 0;
      *(undefined8 *)(pFVar17 + 0x48) = 0;
      *(undefined4 *)(pFVar17 + 0x50) = 0;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 (pFVar17 + 8),
                 (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 (lVar3 + 0x30));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar19 = pFVar19 + 0x10;
    }
    param_2 = (EMeshTopologyMode)local_120;
  }
  (**(code **)(this->_padding_ + 0x310))(this,0);
  if ((param_2 == None) && ((this->PreviewGeometry).field0_0x0.DebugPtr != (UPreviewGeometry *)0x0))
  {
    RemoveAllSets(this);
  }
  bVar12 = false;
  if (param_1 == Vertex) {
    if ((this->SelectionElementType - Edge & 0xfffffffd) != 0) goto LAB_14cbaf87e;
  }
  else if (((param_1 - Edge & 0xfffffffd) != 0) || (this->SelectionElementType != Vertex))
  goto LAB_14cbaf87e;
  if (param_2 != None) {
    RemoveAllSets(this);
    bVar12 = true;
  }
LAB_14cbaf87e:
  pIVar4 = this->TransactionsAPI;
  pcVar8 = *(code **)((longlong)*pIVar4 + 0x18);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_e0,L"UGeometrySelectionManager",L"ChangeElementMethod",
                       L"Change Selection Method");
  (*pcVar8)(pIVar4,pFVar14);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  local_f0 = ::operator_new(0x18);
  if (local_f0 == (undefined8 *)0x0) {
    local_f0 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(local_f0 + 1) = 4;
    *local_f0 = &___7FGeometrySelectionManager_SelectionTypeChange__6B_;
    *(undefined4 *)((longlong)local_f0 + 0x14) = 0;
    *(undefined8 *)((longlong)local_f0 + 0xc) = 4;
  }
  *(EGeometryElementType *)(local_f0 + 1) = this->SelectionElementType;
  *(EGeometryElementType *)((longlong)local_f0 + 0xc) = param_1;
  *(EMeshTopologyMode *)(local_f0 + 2) = this->MeshTopologyMode;
  *(EMeshTopologyMode *)((longlong)local_f0 + 0x14) = param_2;
  pIVar4 = this->TransactionsAPI;
  pcVar8 = *(code **)((longlong)*pIVar4 + 0x28);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_d0,L"UGeometrySelectionManager",L"ChangeElementMethod",
                       L"Change Selection Method");
  (*pcVar8)(pIVar4,this,&local_f0,pFVar14);
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  SetSelectionElementTypeInternal(this,param_1);
  SetMeshTopologyModeInternal(this,param_2);
  if (bVar12) {
    RebuildSelectable(this);
  }
  uVar11 = _UNK_150631d98;
  uVar10 = ___xmm_00000000ffffffff0000008000000000;
  if ((local_137 != '\0') && (local_136 != '\0')) {
    iVar1 = (this->ActiveTargetReferences).ArrayNum;
    if (iVar1 == local_128) {
      uVar20 = 0;
      if (0 < iVar1) {
        local_120 = 0;
        do {
          lVar3 = local_120;
          uVar13 = 0;
          if ((int)uVar20 < (this->ActiveTargetReferences).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar19 = (this->ActiveTargetReferences).AllocatorInstance.Data;
          pTVar2 = *(TReferenceControllerBase<1> **)(pFVar19 + lVar3 + 8);
          puVar5 = *(undefined8 **)(pFVar19 + lVar3);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((puVar5 == (undefined8 *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_a8 = *(EGeometryElementType *)(puVar5 + 5);
          local_a4 = *(EGeometryTopologyType *)((longlong)puVar5 + 0x2c);
          local_a0._0_8_ = (FScriptContainerElement *)0x0;
          local_a0._8_8_ = 0;
          local_80 = (void *)0x0;
          local_78 = uVar10;
          uStack_70 = uVar11;
          local_60 = (ForElementType<FSetElementId>)0x0;
          local_58 = 0;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                    ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)local_a0,
                     (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                      *)(puVar5 + 6));
          local_110 = (void *)0x0;
          local_108 = 0;
          local_100 = (void *)0x0;
          local_f8 = 0;
          if ((puVar5 == (undefined8 *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar6 = (longlong *)puVar5[4];
          local_118 = 2;
          uVar7 = puVar5[0x10];
          pcVar8 = *(code **)(*plVar6 + 0x50);
          uVar13 = 0;
          if ((int)uVar20 < local_128) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (*pcVar8)(plVar6,local_130.Data + (longlong)(int)uVar20 * 0x58,1,uVar7);
          if (((int)local_108 != 0) || ((int)local_f8 != 0)) {
            pFVar15 = ::operator_new(0xd0);
            if (pFVar15 == (FGeometrySelectionReplaceChange *)0x0) {
              pFVar15 = (FGeometrySelectionReplaceChange *)0x0;
            }
            else {
              memset(pFVar15,0,0xd0);
              pFVar15 = FGeometrySelectionReplaceChange::FGeometrySelectionReplaceChange(pFVar15);
            }
            uVar7 = *puVar5;
            FVar9 = *(FWeakObjectPtr *)(puVar5 + 1);
            (pFVar15->Identifier).TargetType = (int)uVar7;
            (pFVar15->Identifier).ObjectType = (int)((ulonglong)uVar7 >> 0x20);
            (pFVar15->Identifier).TargetObject.WeakPtr = FVar9;
            (pFVar15->After).ElementType = *(EGeometryElementType *)(puVar5 + 5);
            (pFVar15->After).TopologyType = *(EGeometryTopologyType *)((longlong)puVar5 + 0x2c);
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            operator=(&(pFVar15->After).Selection,
                      (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                       *)(puVar5 + 6));
            (pFVar15->Before).ElementType = local_a8;
            (pFVar15->Before).TopologyType = local_a4;
            TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
            operator=(&(pFVar15->Before).Selection,
                      (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                       *)local_a0);
            pIVar4 = this->TransactionsAPI;
            pcVar8 = *(code **)((longlong)*pIVar4 + 0x28);
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_c0,L"UGeometrySelectionManager",L"ConvertSelection",
                                 L"Convert Selection");
            local_e8 = pFVar15;
            (*pcVar8)(pIVar4,this,&local_e8,pFVar14);
            if (local_c0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
            }
          }
          if (local_100 != (void *)0x0) {
            FMemory::Free(local_100);
          }
          if (local_110 != (void *)0x0) {
            FMemory::Free(local_110);
          }
          local_58 = 0;
          if (local_60 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_60);
          }
          iVar1 = SUB84(local_a0._8_8_,4);
          local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
          if (iVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
          }
          uVar13 = local_78._4_4_;
          uStack_70 = 0xffffffff;
          local_78 = (ulonglong)local_78._4_4_ << 0x20;
          if (0x80 < uVar13) {
            local_78 = 0x8000000000;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
          }
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
          if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_a0._0_8_);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          uVar20 = uVar20 + 1;
          local_120 = local_120 + 0x10;
        } while ((int)uVar20 < (this->ActiveTargetReferences).ArrayNum);
      }
    }
    else {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1829034393054740121>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                          ,0x167,"ActiveTargetReferences.Num() == OldTypeSelections.Num()");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionModified);
  DestructItems<UE::Geometry::FGeometrySelection,int>
            ((FGeometrySelection *)local_130.Data,local_128);
  if ((FGeometrySelection *)local_130.Data != (FGeometrySelection *)0x0) {
    FMemory::Free(local_130.Data);
  }
  return;
}

// SetMeshTopologyMode @ 14cbafdb0

void __thiscall
UGeometrySelectionManager::SetMeshTopologyMode
          (UGeometrySelectionManager *this,EMeshTopologyMode param_1)

{
  EGeometryElementType EVar1;
  IToolsContextTransactionsAPI *pIVar2;
  code *pcVar3;
  char cVar4;
  FText *pFVar5;
  undefined8 *local_res8;
  FText local_28;
  
  if (this->MeshTopologyMode != param_1) {
    pIVar2 = this->TransactionsAPI;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x18);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UGeometrySelectionManager",L"ChangeSelectionMode",
                        L"Selection Mode");
    (*pcVar3)(pIVar2,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    cVar4 = (**(code **)(this->_padding_ + 0x388))(this);
    if (cVar4 != '\0') {
      (**(code **)(this->_padding_ + 0x310))(this,0);
    }
    local_res8 = ::operator_new(0x18);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(local_res8 + 1) = 4;
      *local_res8 = &___7FGeometrySelectionManager_SelectionTypeChange__6B_;
      *(undefined8 *)((longlong)local_res8 + 0xc) = 4;
      *(undefined4 *)((longlong)local_res8 + 0x14) = 0;
    }
    *(EMeshTopologyMode *)(local_res8 + 2) = this->MeshTopologyMode;
    *(EMeshTopologyMode *)((longlong)local_res8 + 0x14) = param_1;
    EVar1 = this->SelectionElementType;
    *(EGeometryElementType *)((longlong)local_res8 + 0xc) = EVar1;
    *(EGeometryElementType *)(local_res8 + 1) = EVar1;
    pIVar2 = this->TransactionsAPI;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UGeometrySelectionManager",L"ChangeSelectionMode",
                        L"Selection Mode");
    (*pcVar3)(pIVar2,this,&local_res8,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    SetMeshTopologyModeInternal(this,param_1);
    (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
  }
  return;
}

// SetMeshTopologyModeInternal @ 14cbaff10

void __thiscall
UGeometrySelectionManager::SetMeshTopologyModeInternal
          (UGeometrySelectionManager *this,EMeshTopologyMode param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FGeometrySelectionEditor *this_00;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FGeometrySelectionHitQueryConfig local_38;
  
  if (this->MeshTopologyMode != param_1) {
    this->MeshTopologyMode = param_1;
    iVar1 = (this->ActiveTargetReferences).ArrayNum;
    pFVar7 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar8) break;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      lVar3 = *(longlong *)pFVar7;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar6 = (**(code **)(this->_padding_ + 0x2f8))(this);
      if (lVar3 == 0) {
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
      *(undefined4 *)(lVar3 + 0x2c) = uVar6;
      if (lVar3 == 0) {
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
      if ((*(int *)(lVar3 + 0x2c) == 2) && (*(int *)(lVar3 + 0x28) != 1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      this_00 = *(FGeometrySelectionEditor **)(lVar3 + 0x80);
      local_38.TopologyType = (**(code **)(this->_padding_ + 0x2f8))(this);
      local_38.ElementType = (**(code **)(this->_padding_ + 0x2e0))(this);
      local_38.bOnlyVisible = true;
      local_38.bHitBackFaces = this->bHitBackFaces;
      UE::Geometry::FGeometrySelectionEditor::UpdateQueryConfig(this_00,&local_38,bVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar7 = pFVar7 + 0x10;
    }
    this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | Default;
    ClearActivePreview(this);
  }
  return;
}

// SetSelectionColors @ 14cbb0440

void __thiscall
UGeometrySelectionManager::SetSelectionColors
          (UGeometrySelectionManager *this,FLinearColor *param_1,FLinearColor *param_2,
          FLinearColor *param_3,FLinearColor *param_4)

{
  FColor *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UMaterialInstanceDynamic *pUVar6;
  FName *pFVar7;
  UTriangleSetComponent *pUVar8;
  ULineSetComponent *pUVar9;
  UPointSetComponent *pUVar10;
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_res8;
  FLinearColor_u_0 local_78;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58 [2];
  
  FLinearColor::ToFColorSRGB(param_1);
  (this->UnselectedParams).Color.field0_0x0 = (FColor_u_0)local_res8._0_4_;
  FLinearColor::ToFColorSRGB(param_2);
  (this->HoverOverSelectedParams).Color.field0_0x0 = (FColor_u_0)local_res8._0_4_;
  FLinearColor::ToFColorSRGB(param_3);
  (this->HoverOverUnselectedParams).Color.field0_0x0 = (FColor_u_0)local_res8._0_4_;
  FLinearColor::ToFColorSRGB(param_4);
  pFVar1 = &(this->SelectedParams).Color;
  pFVar1->field0_0x0 = (FColor_u_0)local_res8._0_4_;
  local_res8 = (TObjectPtr<UMaterialInstanceDynamic>_u_0)
               (this->UnselectedParams).SelectionFillColor.field0_0x0.DebugPtr;
  if (local_res8.DebugPtr == (UMaterialInstanceDynamic *)0x0) {
    local_78._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_78._s_0.B = (param_1->field0_0x0)._s_0.B;
    local_78._s_0.A = (param_1->field0_0x0)._s_0.A;
    pUVar6 = ToolSetupUtil::GetCustomTwoSidedDepthOffsetMaterial
                       ((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                        DebugPtr,(FLinearColor *)&local_78._s_0,(this->UnselectedParams).DepthBias,
                        local_78._s_0.A);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    fVar2 = (this->HoverOverUnselectedParams).DepthBias;
    (this->UnselectedParams).SelectionFillColor.field0_0x0.DebugPtr = pUVar6;
    local_68._s_0.R = (param_3->field0_0x0)._s_0.R;
    local_68._s_0.G = (param_3->field0_0x0)._s_0.G;
    local_68._s_0.B = (param_3->field0_0x0)._s_0.B;
    local_68._s_0.A = (param_3->field0_0x0)._s_0.A;
    pUVar6 = ToolSetupUtil::GetCustomTwoSidedDepthOffsetMaterial
                       ((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                        DebugPtr,(FLinearColor *)&local_68._s_0,fVar2,local_68._s_0.A);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    fVar2 = (this->SelectedParams).DepthBias;
    (this->HoverOverUnselectedParams).SelectionFillColor.field0_0x0.DebugPtr = pUVar6;
    local_58[0]._0_4_ = (param_4->field0_0x0)._s_0.R;
    local_58[0]._4_4_ = (param_4->field0_0x0)._s_0.G;
    local_58[0]._8_4_ = (param_4->field0_0x0)._s_0.B;
    local_58[0]._12_4_ = (param_4->field0_0x0)._s_0.A;
    pUVar6 = ToolSetupUtil::GetCustomTwoSidedDepthOffsetMaterial
                       ((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                        DebugPtr,(FLinearColor *)&local_58[0]._s_0,fVar2,(float)local_58[0]._12_4_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->SelectedParams).SelectionFillColor.field0_0x0.DebugPtr = pUVar6;
    pUVar6 = ToolSetupUtil::GetCustomTwoSidedDepthOffsetMaterial
                       ((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                        DebugPtr,param_2,(this->HoverOverSelectedParams).DepthBias);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->HoverOverSelectedParams).SelectionFillColor.field0_0x0.DebugPtr = pUVar6;
  }
  else {
    fVar2 = (param_1->field0_0x0)._s_0.R;
    fVar3 = (param_1->field0_0x0)._s_0.G;
    fVar4 = (param_1->field0_0x0)._s_0.B;
    fVar5 = (param_1->field0_0x0)._s_0.A;
    pFVar7 = ::FName::FName((FName *)&local_78._s_0,"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(local_res8.DebugPtr,*pFVar7,fVar5);
    pUVar6 = (this->UnselectedParams).SelectionFillColor.field0_0x0.DebugPtr;
    pFVar7 = ::FName::FName((FName *)&local_res8.ObjectPtr,"Color");
    local_58[0]._0_4_ = fVar2;
    local_58[0]._4_4_ = fVar3;
    local_58[0]._8_4_ = fVar4;
    local_58[0]._12_4_ = fVar5;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar6,*pFVar7,(FLinearColor *)&local_58[0]._s_0);
    pUVar6 = (this->HoverOverSelectedParams).SelectionFillColor.field0_0x0.DebugPtr;
    fVar2 = (param_2->field0_0x0)._s_0.R;
    fVar3 = (param_2->field0_0x0)._s_0.G;
    fVar4 = (param_2->field0_0x0)._s_0.B;
    fVar5 = (param_2->field0_0x0)._s_0.A;
    pFVar7 = ::FName::FName((FName *)&local_res8.ObjectPtr,"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar6,*pFVar7,fVar5);
    pUVar6 = (this->HoverOverSelectedParams).SelectionFillColor.field0_0x0.DebugPtr;
    pFVar7 = ::FName::FName((FName *)&local_res8.ObjectPtr,"Color");
    local_58[0]._0_4_ = fVar2;
    local_58[0]._4_4_ = fVar3;
    local_58[0]._8_4_ = fVar4;
    local_58[0]._12_4_ = fVar5;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar6,*pFVar7,(FLinearColor *)&local_58[0]._s_0);
    pUVar6 = (this->HoverOverUnselectedParams).SelectionFillColor.field0_0x0.DebugPtr;
    fVar2 = (param_3->field0_0x0)._s_0.R;
    fVar3 = (param_3->field0_0x0)._s_0.G;
    fVar4 = (param_3->field0_0x0)._s_0.B;
    fVar5 = (param_3->field0_0x0)._s_0.A;
    pFVar7 = ::FName::FName((FName *)&local_res8.ObjectPtr,"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar6,*pFVar7,fVar5);
    pUVar6 = (this->HoverOverUnselectedParams).SelectionFillColor.field0_0x0.DebugPtr;
    pFVar7 = ::FName::FName((FName *)&local_res8.ObjectPtr,"Color");
    local_58[0]._0_4_ = fVar2;
    local_58[0]._4_4_ = fVar3;
    local_58[0]._8_4_ = fVar4;
    local_58[0]._12_4_ = fVar5;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar6,*pFVar7,(FLinearColor *)&local_58[0]._s_0);
    pUVar6 = (this->SelectedParams).SelectionFillColor.field0_0x0.DebugPtr;
    fVar2 = (param_4->field0_0x0)._s_0.R;
    fVar3 = (param_4->field0_0x0)._s_0.G;
    fVar4 = (param_4->field0_0x0)._s_0.B;
    fVar5 = (param_4->field0_0x0)._s_0.A;
    pFVar7 = ::FName::FName((FName *)&local_res8.ObjectPtr,"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar6,*pFVar7,fVar5);
    pUVar6 = (this->SelectedParams).SelectionFillColor.field0_0x0.DebugPtr;
    pFVar7 = ::FName::FName((FName *)&local_res8.ObjectPtr,"Color");
    local_58[0]._0_4_ = fVar2;
    local_58[0]._4_4_ = fVar3;
    local_58[0]._8_4_ = fVar4;
    local_58[0]._12_4_ = fVar5;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar6,*pFVar7,(FLinearColor *)&local_58[0]._s_0);
  }
  local_res8.DebugPtr =
       (UMaterialInstanceDynamic *)
       UPreviewGeometry::FindPointSet
                 ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)&this->UnselectedParams);
  local_78._0_8_ =
       UPreviewGeometry::FindLineSet
                 ((this->PreviewGeometry).field0_0x0.DebugPtr,
                  (this->UnselectedParams).Identifiers.Elements + 1);
  pUVar8 = UPreviewGeometry::FindTriangleSet
                     ((this->PreviewGeometry).field0_0x0.DebugPtr,
                      (this->UnselectedParams).Identifiers.Elements + 2);
  if ((UPointSetComponent *)local_res8.DebugPtr != (UPointSetComponent *)0x0) {
    UPointSetComponent::SetAllPointsColor
              ((UPointSetComponent *)local_res8.DebugPtr,&(this->UnselectedParams).Color);
  }
  if ((ULineSetComponent *)local_78._0_8_ != (ULineSetComponent *)0x0) {
    ULineSetComponent::SetAllLinesColor
              ((ULineSetComponent *)local_78._0_8_,&(this->UnselectedParams).Color);
  }
  if (pUVar8 != (UTriangleSetComponent *)0x0) {
    UTriangleSetComponent::SetAllTrianglesColor(pUVar8,&(this->UnselectedParams).Color);
  }
  local_res8.DebugPtr =
       (UMaterialInstanceDynamic *)
       UPreviewGeometry::FindPointSet
                 ((this->PreviewGeometry).field0_0x0.DebugPtr,
                  (FString *)&this->HoverOverSelectedParams);
  pUVar9 = UPreviewGeometry::FindLineSet
                     ((this->PreviewGeometry).field0_0x0.DebugPtr,
                      (this->HoverOverSelectedParams).Identifiers.Elements + 1);
  pUVar8 = UPreviewGeometry::FindTriangleSet
                     ((this->PreviewGeometry).field0_0x0.DebugPtr,
                      (this->HoverOverSelectedParams).Identifiers.Elements + 2);
  if ((UPointSetComponent *)local_res8.DebugPtr != (UPointSetComponent *)0x0) {
    UPointSetComponent::SetAllPointsColor
              ((UPointSetComponent *)local_res8.DebugPtr,&(this->HoverOverSelectedParams).Color);
  }
  if (pUVar9 != (ULineSetComponent *)0x0) {
    ULineSetComponent::SetAllLinesColor(pUVar9,&(this->HoverOverSelectedParams).Color);
  }
  if (pUVar8 != (UTriangleSetComponent *)0x0) {
    UTriangleSetComponent::SetAllTrianglesColor(pUVar8,&(this->HoverOverSelectedParams).Color);
  }
  pUVar10 = UPreviewGeometry::FindPointSet
                      ((this->PreviewGeometry).field0_0x0.DebugPtr,
                       (FString *)&this->HoverOverUnselectedParams);
  pUVar9 = UPreviewGeometry::FindLineSet
                     ((this->PreviewGeometry).field0_0x0.DebugPtr,
                      (this->HoverOverUnselectedParams).Identifiers.Elements + 1);
  pUVar8 = UPreviewGeometry::FindTriangleSet
                     ((this->PreviewGeometry).field0_0x0.DebugPtr,
                      (this->HoverOverUnselectedParams).Identifiers.Elements + 2);
  if (pUVar10 != (UPointSetComponent *)0x0) {
    UPointSetComponent::SetAllPointsColor(pUVar10,&(this->HoverOverUnselectedParams).Color);
  }
  if (pUVar9 != (ULineSetComponent *)0x0) {
    ULineSetComponent::SetAllLinesColor(pUVar9,&(this->HoverOverUnselectedParams).Color);
  }
  if (pUVar8 != (UTriangleSetComponent *)0x0) {
    UTriangleSetComponent::SetAllTrianglesColor(pUVar8,&(this->HoverOverUnselectedParams).Color);
  }
  pUVar10 = UPreviewGeometry::FindPointSet
                      ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)&this->SelectedParams)
  ;
  pUVar9 = UPreviewGeometry::FindLineSet
                     ((this->PreviewGeometry).field0_0x0.DebugPtr,
                      (this->SelectedParams).Identifiers.Elements + 1);
  pUVar8 = UPreviewGeometry::FindTriangleSet
                     ((this->PreviewGeometry).field0_0x0.DebugPtr,
                      (this->SelectedParams).Identifiers.Elements + 2);
  if (pUVar10 != (UPointSetComponent *)0x0) {
    UPointSetComponent::SetAllPointsColor(pUVar10,pFVar1);
  }
  if (pUVar9 != (ULineSetComponent *)0x0) {
    ULineSetComponent::SetAllLinesColor(pUVar9,pFVar1);
  }
  if (pUVar8 != (UTriangleSetComponent *)0x0) {
    UTriangleSetComponent::SetAllTrianglesColor(pUVar8,pFVar1);
  }
  return;
}

// SetSelectionElementType @ 14cbb0990

void __thiscall
UGeometrySelectionManager::SetSelectionElementType
          (UGeometrySelectionManager *this,EGeometryElementType param_1)

{
  EMeshTopologyMode EVar1;
  IToolsContextTransactionsAPI *pIVar2;
  code *pcVar3;
  char cVar4;
  FText *pFVar5;
  undefined8 *local_res8;
  FText local_28;
  
  if (this->SelectionElementType != param_1) {
    pIVar2 = this->TransactionsAPI;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x18);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UGeometrySelectionManager",L"ChangeElementType",
                        L"Selection Type");
    (*pcVar3)(pIVar2,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    cVar4 = (**(code **)(this->_padding_ + 0x388))(this);
    if (cVar4 != '\0') {
      (**(code **)(this->_padding_ + 0x310))(this,0);
    }
    local_res8 = ::operator_new(0x18);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(local_res8 + 1) = 4;
      *local_res8 = &___7FGeometrySelectionManager_SelectionTypeChange__6B_;
      *(undefined8 *)((longlong)local_res8 + 0xc) = 4;
      *(undefined4 *)((longlong)local_res8 + 0x14) = 0;
    }
    *(EGeometryElementType *)(local_res8 + 1) = this->SelectionElementType;
    *(EGeometryElementType *)((longlong)local_res8 + 0xc) = param_1;
    EVar1 = this->MeshTopologyMode;
    *(EMeshTopologyMode *)((longlong)local_res8 + 0x14) = EVar1;
    *(EMeshTopologyMode *)(local_res8 + 2) = EVar1;
    pIVar2 = this->TransactionsAPI;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UGeometrySelectionManager",L"ChangeElementType",
                        L"Selection Type");
    (*pcVar3)(pIVar2,this,&local_res8,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    SetSelectionElementTypeInternal(this,param_1);
    (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
  }
  return;
}

// SetSelectionElementTypeInternal @ 14cbb0af0

void __thiscall
UGeometrySelectionManager::SetSelectionElementTypeInternal
          (UGeometrySelectionManager *this,EGeometryElementType param_1)

{
  int iVar1;
  EGeometryElementType EVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FGeometrySelectionEditor *this_00;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FGeometrySelectionHitQueryConfig local_38;
  
  if (this->SelectionElementType != param_1) {
    this->SelectionElementType = param_1;
    iVar1 = (this->ActiveTargetReferences).ArrayNum;
    pFVar7 = (this->ActiveTargetReferences).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar8) break;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      lVar4 = *(longlong *)pFVar7;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      EVar2 = this->SelectionElementType;
      if (lVar4 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(EGeometryElementType *)(lVar4 + 0x28) = EVar2;
      if (lVar4 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((*(int *)(lVar4 + 0x2c) == 2) && (*(int *)(lVar4 + 0x28) != 1)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      this_00 = *(FGeometrySelectionEditor **)(lVar4 + 0x80);
      local_38.TopologyType = (**(code **)(this->_padding_ + 0x2f8))(this);
      local_38.ElementType = (**(code **)(this->_padding_ + 0x2e0))(this);
      local_38.bOnlyVisible = true;
      local_38.bHitBackFaces = this->bHitBackFaces;
      UE::Geometry::FGeometrySelectionEditor::UpdateQueryConfig(this_00,&local_38,bVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar7 = pFVar7 + 0x10;
    }
    this->RenderCachesDirtyFlags =
         this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
    ClearActivePreview(this);
  }
  return;
}

// SetSelectionForComponent @ 14cbb0c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UGeometrySelectionManager::SetSelectionForComponent
          (UGeometrySelectionManager *this,UPrimitiveComponent *param_1,FGeometrySelection *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  IToolsContextTransactionsAPI *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  FWeakObjectPtr FVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  FGeometrySelectionReplaceChange *this_00;
  FGeometrySelectionReplaceChange *pFVar11;
  FText *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  FGeometrySelection *local_d0;
  FGeometrySelectionReplaceChange *local_c8;
  FText local_c0;
  EGeometryElementType local_a8;
  EGeometryTopologyType local_a4;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar13 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar1 * 0x10;
  local_d0 = param_2;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_f8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (pFVar13 == pFVar14) {
      return false;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
    puVar3 = *(undefined8 **)pFVar13;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) break;
    bVar9 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UPrimitiveComponent,bool>
                      ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(puVar3 + 1),param_1);
    if (bVar9) {
      if ((puVar3 == (undefined8 *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      local_a8 = *(EGeometryElementType *)(puVar3 + 5);
      pFVar11 = (FGeometrySelectionReplaceChange *)0x0;
      local_a4 = *(EGeometryTopologyType *)((longlong)puVar3 + 0x2c);
      local_a0._0_8_ = (FScriptContainerElement *)0x0;
      local_a0._8_8_ = 0;
      local_80 = (void *)0x0;
      local_78 = ___xmm_00000000ffffffff0000008000000000;
      uStack_70 = _UNK_150631d98;
      local_60 = (ForElementType<FSetElementId>)0x0;
      local_58 = 0;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
                 local_a0,(TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                           *)(puVar3 + 6));
      local_f0 = (void *)0x0;
      local_e8 = 0;
      local_e0 = (void *)0x0;
      local_d8 = 0;
      if ((puVar3 == (undefined8 *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      local_f4 = 2;
      (**(code **)(*(longlong *)puVar3[4] + 0x50))();
      if (((int)local_e8 != 0) || ((int)local_d8 != 0)) {
        this_00 = ::operator_new(0xd0);
        if (this_00 != (FGeometrySelectionReplaceChange *)0x0) {
          memset(this_00,0,0xd0);
          pFVar11 = FGeometrySelectionReplaceChange::FGeometrySelectionReplaceChange(this_00);
        }
        uVar6 = *puVar3;
        FVar7 = *(FWeakObjectPtr *)(puVar3 + 1);
        (pFVar11->Identifier).TargetType = (int)uVar6;
        (pFVar11->Identifier).ObjectType = (int)((ulonglong)uVar6 >> 0x20);
        (pFVar11->Identifier).TargetObject.WeakPtr = FVar7;
        (pFVar11->After).ElementType = *(EGeometryElementType *)(puVar3 + 5);
        (pFVar11->After).TopologyType = *(EGeometryTopologyType *)((longlong)puVar3 + 0x2c);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                  (&(pFVar11->After).Selection,
                   (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)(puVar3 + 6));
        (pFVar11->Before).ElementType = local_a8;
        (pFVar11->Before).TopologyType = local_a4;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
                  (&(pFVar11->Before).Selection,
                   (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                    *)local_a0);
        pIVar4 = this->TransactionsAPI;
        pcVar5 = *(code **)((longlong)*pIVar4 + 0x28);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_c0,L"UGeometrySelectionManager",L"NewSelection",L"New Selection"
                            );
        local_c8 = pFVar11;
        (*pcVar5)(pIVar4,this,&local_c8,pFVar12);
        if (local_c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
        }
        this->RenderCachesDirtyFlags =
             this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnSelectionModified);
      }
      if (local_e0 != (void *)0x0) {
        FMemory::Free(local_e0);
      }
      if (local_f0 != (void *)0x0) {
        FMemory::Free(local_f0);
      }
      local_58 = 0;
      if (local_60 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_60);
      }
      iVar1 = SUB84(local_a0._8_8_,4);
      local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
      }
      uVar8 = local_78._4_4_;
      uStack_70 = 0xffffffff;
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      if (0x80 < uVar8) {
        local_78 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
      }
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a0._0_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar13 = pFVar13 + 0x10;
  }
  pcVar5 = (code *)swi(3);
  uVar10 = (*pcVar5)();
  return (bool)uVar10;
}

// SetTargetLockStateOnUndoRedo @ 14cbb1fb0

void __thiscall
UGeometrySelectionManager::SetTargetLockStateOnUndoRedo
          (UGeometrySelectionManager *this,FGeometryIdentifier *param_1,bool param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  ETargetType *pEVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar7 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    pEVar3 = *(ETargetType **)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pEVar3 == (ETargetType *)0x0) {
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
    if ((*pEVar3 == param_1->TargetType) && (pEVar3[1] == param_1->ObjectType)) {
      bVar5 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)(pEVar3 + 2),
                         &param_1->TargetObject);
      if (bVar5) {
        if (pEVar3 == (ETargetType *)0x0) {
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
        (**(code **)(**(longlong **)(pEVar3 + 8) + 0x40))(*(longlong **)(pEVar3 + 8),param_2);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// SetTargetsOnUndoRedo @ 14cbb20e0

void __thiscall
UGeometrySelectionManager::SetTargetsOnUndoRedo
          (UGeometrySelectionManager *this,
          TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FGeometryIdentifier local_28;
  
  ClearActiveTargets(this);
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGeometryIdentifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar2 == pFVar3) break;
    local_28._0_8_ = *(undefined8 *)pFVar2;
    local_28.TargetObject.WeakPtr = *(FWeakObjectPtr *)(pFVar2 + 8);
    AddActiveTarget(this,&local_28);
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Shutdown @ 14cbb2ff0

void __thiscall UGeometrySelectionManager::Shutdown(UGeometrySelectionManager *this)

{
  int *piVar1;
  TArray<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *pTVar5;
  ForAnyElementType *this_00;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FDestructionSentinel local_48;
  
  (**(code **)(this->_padding_ + 0x328))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionModified,
             (FWriteAccessScope *)&local_48);
  iVar3 = *(int *)&(this->OnSelectionModified).field_0x10;
  this_00 = *(ForAnyElementType **)&(this->OnSelectionModified).field_0x8;
  pFVar6 = this_00 + (longlong)iVar3 * 2;
  while( true ) {
    if (*(int *)&(this->OnSelectionModified).field_0x10 != iVar3) {
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar6) break;
    if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)this_00->Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
      *(undefined4 *)&this_00[1].Data = 0;
    }
    this_00 = this_00 + 2;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnSelectionModified,false)
  ;
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  (this->ToolsContext).field0_0x0.DebugPtr = (UInteractiveToolsContext *)0x0;
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  if ((this->PreviewGeometry).field0_0x0.DebugPtr != (UPreviewGeometry *)0x0) {
    RemoveAllSets(this);
    UPreviewGeometry::Disconnect((this->PreviewGeometry).field0_0x0.DebugPtr);
    (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  }
  pTVar2 = &this->ActiveTargetReferences;
  iVar3 = (this->ActiveTargetReferences).ArrayNum;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    local_48._0_8_ = *(undefined8 *)pFVar8;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Accessor = (FMRSWRecursiveAccessDetector *)pTVar4;
    SleepOrShutdownTarget
              (this,(TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)&local_48,
               false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar8 = pFVar8 + 0x10;
  }
  ResetTargetCache(this);
  piVar1 = &(this->ActiveTargetReferences).ArrayMax;
  pTVar5 = (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *)
           (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->ActiveTargetReferences).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
              (pTVar5,iVar3);
    (this->ActiveTargetReferences).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,int>
              (pTVar5,iVar3);
    (this->ActiveTargetReferences).ArrayNum = 0;
  }
  TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
           *)&this->ActiveTargetMap);
  UpdateSelectionRenderCacheOnTargetChange(this);
  return;
}

// SleepOrShutdownTarget @ 14cbb34d0

void __thiscall
UGeometrySelectionManager::SleepOrShutdownTarget
          (UGeometrySelectionManager *this,
          TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *param_1,bool param_2)

{
  FGeometrySelectionTarget *pFVar1;
  IGeometrySelector *pIVar2;
  FDelegateHandle FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  
  if (param_1->Object == (FGeometrySelectionTarget *)0x0) {
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
  cVar6 = (**(code **)(((param_1->Object->Selector).Ptr)->_padding_ + 0x10))();
  if ((cVar6 != '\0') && (!param_2)) {
    if (param_1->Object == (FGeometrySelectionTarget *)0x0) {
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
    cVar6 = (**(code **)(((param_1->Object->Selector).Ptr)->_padding_ + 0x18))();
    if (cVar6 != '\0') goto LAB_14cbb366e;
  }
  if (param_1->Object == (FGeometrySelectionTarget *)0x0) {
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
  pFVar1 = param_1->Object;
  if (*(int *)&(this->TargetCache).field_0x8 != *(int *)&(this->TargetCache).field_0x34) {
    uVar7 = ::GetTypeHash(&pFVar1->TargetIdentifier);
    TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGeometryIdentifier>
              ((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
                *)&this->TargetCache,uVar7,&pFVar1->TargetIdentifier);
  }
  if (param_1->Object == (FGeometrySelectionTarget *)0x0) {
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
  pIVar2 = (param_1->Object->Selector).Ptr;
  if (param_1->Object == (FGeometrySelectionTarget *)0x0) {
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
  FVar3.ID = (param_1->Object->OnGeometryModifiedHandle).ID;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pIVar2->OnGeometryModifed,
               FVar3);
  }
  if (param_1->Object == (FGeometrySelectionTarget *)0x0) {
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
  (**(code **)(((param_1->Object->Selector).Ptr)->_padding_ + 8))();
LAB_14cbb366e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUGeometrySelectionManager @ 14cbb45b0

void __cdecl UGeometrySelectionManager::StaticRegisterNativesUGeometrySelectionManager(void)

{
  return;
}

// SynchronizeActiveTargets @ 14cbb4670

void __thiscall
UGeometrySelectionManager::SynchronizeActiveTargets
          (UGeometrySelectionManager *this,
          TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<void___cdecl(void)> *param_2)

{
  TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  IToolsContextTransactionsAPI *pIVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  FText *pFVar11;
  undefined8 *puVar12;
  undefined8 *local_res10;
  TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> local_58;
  TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> local_48;
  FGeometryIdentifier local_38;
  FText local_28;
  
  GetCurrentTargetIdentifiers(this,&local_48);
  puVar12 = (undefined8 *)0x0;
  if (param_1->ArrayNum == 1) {
    uVar8 = ::GetTypeHash((FGeometryIdentifier *)(param_1->AllocatorInstance).Data);
    iVar9 = TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGeometryIdentifier>
                      ((TSet<TTuple<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_>,TDefaultMapHashableKeyFuncs<FGeometryIdentifier,TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>,0>,FDefaultSetAllocator>
                        *)&this->ActiveTargetMap,uVar8,
                       (FGeometryIdentifier *)(param_1->AllocatorInstance).Data);
    if (iVar9 == -1) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      ClearActiveTargets(this);
      if ((param_1->ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_38._0_8_ = *(undefined8 *)pFVar3;
      local_38.TargetObject.WeakPtr = *(FWeakObjectPtr *)(pFVar3 + 8);
      AddActiveTarget(this,&local_38);
    }
  }
  else {
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
    ClearActiveTargets(this);
  }
  GetCurrentTargetIdentifiers(this,&local_58);
  if ((local_48.ArrayNum != local_58.ArrayNum) ||
     (bVar7 = CompareItems<FGeometryIdentifier,int>
                        ((FGeometryIdentifier *)local_48.AllocatorInstance.Data,
                         (FGeometryIdentifier *)local_58.AllocatorInstance.Data,local_48.ArrayNum),
     !bVar7)) {
    puVar10 = ::operator_new(0x28);
    FVar6.Data = local_48.AllocatorInstance.Data;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = 0;
      *puVar10 = &___7FGeometrySelectionManager_ActiveTargetsChange__6B_;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar12 = puVar10;
    }
    pTVar1 = (TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *)(puVar12 + 1);
    if (pTVar1 != &local_48) {
      piVar2 = (int *)((longlong)puVar12 + 0x14);
      *(int *)(puVar12 + 2) = local_48.ArrayNum;
      if ((local_48.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_48.ArrayNum,*piVar2,(ForAnyElementType *)pTVar1,local_48.ArrayNum,
                   piVar2);
        if (local_48.ArrayNum != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar6.Data,(longlong)local_48.ArrayNum << 4);
        }
      }
    }
    FVar6.Data = local_58.AllocatorInstance.Data;
    pTVar1 = (TArray<FGeometryIdentifier,TSizedDefaultAllocator<32>_> *)(puVar12 + 3);
    if (pTVar1 != &local_58) {
      piVar2 = (int *)((longlong)puVar12 + 0x24);
      *(int *)(puVar12 + 4) = local_58.ArrayNum;
      if ((local_58.ArrayNum == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_58.ArrayNum,*piVar2,(ForAnyElementType *)pTVar1,local_58.ArrayNum,
                   piVar2);
        if (local_58.ArrayNum != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar6.Data,(longlong)local_58.ArrayNum << 4);
        }
      }
    }
    pIVar4 = this->TransactionsAPI;
    pcVar5 = *(code **)((longlong)*pIVar4 + 0x28);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"UGeometrySelectionManager",L"Change Targets",L"Change Targets")
    ;
    local_res10 = puVar12;
    (*pcVar5)(pIVar4,this,&local_res10,pFVar11);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((FGeometryIdentifier *)local_58.AllocatorInstance.Data != (FGeometryIdentifier *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if ((FGeometryIdentifier *)local_48.AllocatorInstance.Data != (FGeometryIdentifier *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// UnregisterSelectorFactories @ 14cbb7060

void __thiscall
UGeometrySelectionManager::UnregisterSelectorFactories(UGeometrySelectionManager *this)

{
  int *piVar1;
  
  DestructItems<TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_>,int>
            ((TUniquePtr<IGeometrySelectorFactory,TDefaultDelete<IGeometrySelectorFactory>_> *)
             (this->Factories).AllocatorInstance.Data,(this->Factories).ArrayNum);
  piVar1 = &(this->Factories).ArrayMax;
  (this->Factories).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Factories).AllocatorInstance,0,piVar1);
  }
  ResetTargetCache(this);
  return;
}

// UpdateSelectionPreviewViaRaycast @ 14cbb9f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UGeometrySelectionManager::UpdateSelectionPreviewViaRaycast
          (UGeometrySelectionManager *this,TRay<double> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  UPreviewGeometry *pUVar8;
  code *pcVar9;
  FGeometrySelection *pFVar10;
  longlong *plVar11;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  ForElementType<FSetElementId> FVar19;
  ulong64 *puVar20;
  int iVar21;
  int iVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 *puVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  ulonglong local_320;
  undefined1 local_318;
  undefined1 local_317;
  undefined1 local_316 [6];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_310;
  int iStack_308;
  uint uStack_304;
  TBitArray<FDefaultBitArrayAllocator> *local_300;
  undefined4 uStack_2f8;
  int iStack_2f4;
  int local_2f0;
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  ulonglong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  int local_2c0;
  int local_2bc;
  uint local_2b8;
  int local_2b4;
  undefined1 local_2b0 [8];
  int local_2a8;
  undefined1 local_2a4 [12];
  longlong *local_298;
  longlong *local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_288;
  undefined8 uStack_268;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  double local_1f8;
  double dStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined2 local_17c;
  undefined8 local_178;
  undefined4 local_14c;
  undefined4 local_12c;
  undefined4 local_10c;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> local_108;
  FGeometrySelectionEditor local_b8;
  FGeometrySelection local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  iVar25 = (this->ActiveTargetReferences).ArrayNum;
  uVar15 = (ulonglong)iVar25;
  if (iVar25 != 0) {
    iVar22 = 0;
    iVar21 = 0;
    if (iVar25 < 1) {
      local_328 = 0;
      local_320 = uVar15;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
    }
    lVar18 = *(longlong *)(this->ActiveTargetReferences).AllocatorInstance.Data;
    local_1b8 = 0;
    local_198 = ___xmm_3ff00000000000000000000000000000;
    uStack_190 = _UNK_15061cbc8;
    local_1f8 = (param_1->Origin).field0_0x0._s_0.X;
    dStack_1f0 = (param_1->Origin).field0_0x0._s_0.Y;
    local_188 = 0x42b40000;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1d8 = (param_1->Direction).field0_0x0._s_0.Y;
    dStack_1d0 = (param_1->Direction).field0_0x0._s_0.Z;
    local_184 = 0x42c80000;
    local_178 = __real_3ff0000000000000;
    local_1e8 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x10);
    uStack_1e4 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x14);
    uStack_1e0 = *(undefined4 *)&(param_1->Direction).field0_0x0;
    uStack_1dc = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 4);
    local_180 = 0x3f800000;
    local_17c = 0;
    plVar16 = (longlong *)
              (**(code **)(((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                           DebugPtr)->_padding_ + 0x398))();
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_1c8);
    puVar6 = *(undefined8 **)(lVar18 + 0x80);
    local_b8.TargetSelection = (FGeometrySelection *)0x0;
    local_b8.QueryConfig.TopologyType = Polygroup;
    local_b8.QueryConfig.ElementType = Face;
    local_b8.QueryConfig.bOnlyVisible = true;
    local_b8.QueryConfig.bHitBackFaces = false;
    local_b8.bEnableTopologyIDFiltering = false;
    local_a0.Selection.Elements._0_8_ = 0;
    local_a0.Selection.Elements._8_8_ = 0;
    local_a0.Selection.Elements._32_8_ = 0;
    local_a0.Selection.Elements._40_4_ = 0;
    local_a0.Selection.Elements._44_4_ = 0x80;
    local_a0.Selection.Elements._48_4_ = 0xffffffff;
    local_a0.Selection.Elements._52_4_ = 0;
    local_a0.Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a0.Selection.HashSize = 0;
    local_a0.ElementType = *(EGeometryElementType *)*puVar6;
    local_a0.TopologyType = ((EGeometryElementType *)*puVar6)[1];
    UE::Geometry::FGeometrySelectionEditor::Initialize
              (&local_b8,&local_a0,(FGeometrySelectionHitQueryConfig *)(puVar6 + 1),
               *(bool *)((longlong)puVar6 + 0x14));
    (**(code **)(**(longlong **)(lVar18 + 0x20) + 0x70))
              (*(longlong **)(lVar18 + 0x20),&local_1f8,&local_b8,lVar18 + 0x28);
    bVar13 = UE::Geometry::AreSelectionsIdentical(&local_a0,&this->ActivePreviewSelection);
    if (!bVar13) {
      UE::Geometry::FGeometrySelection::operator=(&this->ActivePreviewSelection,&local_a0);
      UE::Geometry::FGeometrySelection::operator=(&this->SelectedActivePreviewSelection,&local_a0);
      UE::Geometry::FGeometrySelection::operator=(&this->UnselectedActivePreviewSelection,&local_a0)
      ;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
                (&(this->SelectedActivePreviewSelection).Selection);
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
                (&(this->UnselectedActivePreviewSelection).Selection);
      iVar25 = 0;
      if (this->MeshTopologyMode == Polygroup) {
        local_108.Elements._0_8_ = 0;
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar18 + 0x40);
        local_108.Elements._8_8_ = 0;
        local_108.Elements._32_8_ = 0;
        local_310 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     *)(lVar18 + 0x30);
        local_108.Elements._40_4_ = 0;
        local_108.Elements._44_4_ = 0x80;
        local_108.Elements._48_4_ = 0xffffffff;
        local_108.Elements._52_4_ = 0;
        local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_108.HashSize = 0;
        iVar4 = *(int *)(lVar18 + 0x58);
        local_2d8 = 1;
        uStack_304 = 1;
        iStack_2f4 = 0;
        if (iVar4 != 0) {
          pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x50);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x50) ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar23 = pTVar1;
          }
          uStack_304 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
          iVar25 = iVar21;
          while (uStack_304 == 0) {
            lVar17 = (longlong)iVar22;
            iVar25 = iVar25 + 0x20;
            iVar22 = iVar22 + 1;
            uStack_304 = 1;
            iStack_2f4 = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14cbba2cf;
            uStack_304 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar17 * 4 + 4);
          }
          uStack_304 = -uStack_304 & uStack_304;
          uVar15 = (ulonglong)uStack_304 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_2c0 = (int)lVar17;
          iStack_2f4 = iVar25 + -1 + local_2c0;
          if (iVar4 < iStack_2f4) {
            iStack_2f4 = iVar4;
          }
        }
LAB_14cbba2cf:
        uVar27 = *(uint *)(lVar18 + 0x58);
        uStack_2ec = local_14c;
        iStack_2e8 = *(int *)(lVar18 + 0x38) - *(int *)(lVar18 + 100);
        uVar28 = uVar27 & 0xffffffe0;
        TStack_288._padding_ = CONCAT44(uStack_304,iVar22);
        uStack_2f8 = 0xffffffff;
        TStack_288.CurrentBitIndex = iStack_2f4;
        TStack_288.UnvisitedBitMask = 0xffffffff;
        iVar21 = (int)uVar27 >> 5;
        TStack_288._28_4_ = local_14c;
        TStack_288.BaseBitIndex = iVar25;
        uStack_268 = CONCAT44(uStack_2e4,iStack_2e8);
        local_2f0 = iVar25;
        iStack_308 = iVar22;
        local_300 = pTVar1;
        local_298 = (longlong *)local_310;
        local_290 = (longlong *)local_310;
        TStack_288.Array = pTVar1;
        if ((((int)uVar27 < 0) || (iVar4 < (int)uVar27)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        plVar16 = local_298;
        uVar5 = *(uint *)(lVar18 + 0x58);
        if (uVar27 != uVar5) {
          pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x50);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar18 + 0x50) ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar23 = pTVar1;
          }
          uVar27 = -1 << ((byte)uVar27 & 0x1f) &
                   *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
          while (uVar27 == 0) {
            lVar18 = (longlong)iVar21;
            uVar28 = uVar28 + 0x20;
            iVar21 = iVar21 + 1;
            uVar27 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
            goto LAB_14cbba3f0;
            uVar27 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar18 * 4 + 4);
          }
          uVar15 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_2bc = (int)lVar18;
          uVar27 = local_2bc + -1 + uVar28;
          if ((int)uVar5 < (int)uVar27) {
            uVar27 = uVar5;
          }
        }
LAB_14cbba3f0:
        while( true ) {
          plVar11 = local_290;
          if ((int)local_290[1] - *(int *)((longlong)local_290 + 0x34) != (int)uStack_268) {
            local_318 = 0;
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_318);
          }
          if (((TStack_288.CurrentBitIndex == uVar27) && (TStack_288.Array == pTVar1)) &&
             (plVar11 == plVar16)) break;
          uVar7 = *(undefined8 *)(*plVar11 + (longlong)TStack_288.CurrentBitIndex * 0x10);
          local_2dc = (undefined4)uVar7;
          local_2e0 = (undefined4)((ulonglong)uVar7 >> 0x20);
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
          Emplace<unsigned_int>(&local_108,&local_2b8,(bool *)&local_2e0);
          TStack_288.UnvisitedBitMask = TStack_288.UnvisitedBitMask & ~TStack_288._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_288);
        }
        puVar2 = &(this->ActivePreviewSelection).Selection.Elements.field_0x10;
        iStack_308 = 0;
        iVar25 = *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28;
        pTVar3 = &(this->ActivePreviewSelection).Selection;
        local_2f0 = 0;
        iStack_2f4 = 0;
        if (iVar25 != 0) {
          puVar26 = *(uint **)&(this->ActivePreviewSelection).Selection.Elements.field_0x20;
          if (puVar26 == (uint *)0x0) {
            puVar26 = (uint *)puVar2;
          }
          uVar27 = *puVar26;
          while (uVar27 == 0) {
            lVar18 = (longlong)iStack_308;
            local_2f0 = local_2f0 + 0x20;
            iStack_308 = iStack_308 + 1;
            iStack_2f4 = iVar25;
            if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_308)
            goto LAB_14cbba4f1;
            uVar27 = puVar26[lVar18 + 1];
          }
          local_2d8 = (ulonglong)(-uVar27 & uVar27);
          uVar15 = local_2d8 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_2b4 = (int)lVar18;
          iStack_2f4 = local_2f0 + -1 + local_2b4;
          if (iVar25 < iStack_2f4) {
            iStack_2f4 = iVar25;
          }
        }
LAB_14cbba4f1:
        uStack_2ec = local_12c;
        iStack_2e8 = *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x8 -
                     *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x34;
        uStack_304 = (uint)local_2d8;
        uVar27 = *(uint *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28;
        uStack_2f8 = 0xffffffff;
        uVar28 = uVar27 & 0xffffffe0;
        TStack_258._padding_ = CONCAT44(uStack_304,iStack_308);
        TStack_258.CurrentBitIndex = iStack_2f4;
        TStack_258.UnvisitedBitMask = 0xffffffff;
        TStack_258._28_4_ = local_12c;
        TStack_258.BaseBitIndex = local_2f0;
        uStack_238 = CONCAT44(uStack_2e4,iStack_2e8);
        iVar22 = (int)uVar27 >> 5;
        local_310 = pTVar3;
        local_300 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        local_260 = pTVar3;
        TStack_258.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar27 < 0) || (iVar25 < (int)uVar27)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        uVar5 = *(uint *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28;
        if (uVar27 != uVar5) {
          puVar24 = *(undefined1 **)&(this->ActivePreviewSelection).Selection.Elements.field_0x20;
          if (puVar24 == (undefined1 *)0x0) {
            puVar24 = puVar2;
          }
          uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar22 * 4);
          while (uVar27 == 0) {
            lVar18 = (longlong)iVar22;
            uVar28 = uVar28 + 0x20;
            iVar22 = iVar22 + 1;
            uVar27 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
            goto LAB_14cbba600;
            uVar27 = *(uint *)(puVar24 + lVar18 * 4 + 4);
          }
          uVar15 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar27 = (uVar28 - 1) + (int)lVar18;
          if ((int)uVar5 < (int)uVar27) {
            uVar27 = uVar5;
          }
        }
LAB_14cbba600:
        while( true ) {
          pTVar12 = local_260;
          if (*(int *)&(local_260->Elements).field_0x8 - *(int *)&(local_260->Elements).field_0x34
              != (int)uStack_238) {
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_317);
          }
          if (((TStack_258.CurrentBitIndex == uVar27) &&
              (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (pTVar12 == pTVar3)) break;
          local_2d0 = *(ulonglong *)
                       (*(longlong *)&pTVar12->Elements +
                       (longlong)TStack_258.CurrentBitIndex * 0x10);
          if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
            FVar19 = (ForElementType<FSetElementId>)&local_108.Hash;
            if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_108.Hash.SecondaryData;
            }
            for (iVar25 = *(int *)((longlong)FVar19 +
                                  ((ulonglong)(local_108.HashSize - 1) & local_2d0 >> 0x20) * 4);
                iVar25 != -1;
                iVar25 = *(int *)(local_108.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
              if (*(int *)(local_108.Elements._0_8_ + (longlong)iVar25 * 0xc) ==
                  (int)(local_2d0 >> 0x20)) {
                pFVar10 = &this->SelectedActivePreviewSelection;
                puVar20 = (ulong64 *)local_2b0;
                goto LAB_14cbba6a4;
              }
            }
          }
          pFVar10 = &this->UnselectedActivePreviewSelection;
          puVar20 = (ulong64 *)(local_2b0 + 4);
LAB_14cbba6a4:
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64_const_&>(&pFVar10->Selection,puVar20,(bool *)&local_2d0);
          TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
        }
        local_108.HashSize = 0;
        if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_108.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_108.Elements);
      }
      else if (this->MeshTopologyMode == Triangle) {
        puVar2 = &(this->ActivePreviewSelection).Selection.Elements.field_0x10;
        iVar22 = *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28;
        local_310 = &(this->ActivePreviewSelection).Selection;
        uStack_304 = 1;
        iStack_2f4 = iVar25;
        local_2f0 = iVar25;
        if (iVar22 != 0) {
          puVar26 = *(uint **)&(this->ActivePreviewSelection).Selection.Elements.field_0x20;
          if (puVar26 == (uint *)0x0) {
            puVar26 = (uint *)puVar2;
          }
          uVar27 = *puVar26;
          local_2f0 = iVar21;
          iVar25 = iVar21;
          while (uVar27 == 0) {
            lVar17 = (longlong)iVar25;
            local_2f0 = local_2f0 + 0x20;
            iVar25 = iVar25 + 1;
            iStack_2f4 = iVar22;
            if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25)
            goto LAB_14cbba78f;
            uVar27 = puVar26[lVar17 + 1];
          }
          uStack_304 = -uVar27 & uVar27;
          uVar15 = (ulonglong)uStack_304 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_2a8 = (int)lVar17;
          iStack_2f4 = local_2a8 + -1 + local_2f0;
          if (iVar22 < iStack_2f4) {
            iStack_2f4 = iVar22;
          }
        }
LAB_14cbba78f:
        uVar27 = *(uint *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28;
        uStack_2ec = local_10c;
        iStack_2e8 = *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x8 -
                     *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x34;
        uVar28 = uVar27 & 0xffffffe0;
        uStack_2f8 = 0xffffffff;
        TStack_228._padding_ = CONCAT44(uStack_304,iVar25);
        TStack_228.CurrentBitIndex = iStack_2f4;
        TStack_228.UnvisitedBitMask = 0xffffffff;
        iVar21 = (int)uVar27 >> 5;
        TStack_228._28_4_ = local_10c;
        TStack_228.BaseBitIndex = local_2f0;
        uStack_208 = CONCAT44(uStack_2e4,iStack_2e8);
        iStack_308 = iVar25;
        local_300 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        local_230 = local_310;
        TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar27 < 0) || (iVar22 < (int)uVar27)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        uVar5 = *(uint *)&(this->ActivePreviewSelection).Selection.Elements.field_0x28;
        if (uVar27 != uVar5) {
          puVar24 = *(undefined1 **)&(this->ActivePreviewSelection).Selection.Elements.field_0x20;
          if (puVar24 == (undefined1 *)0x0) {
            puVar24 = puVar2;
          }
          uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
          while (uVar27 == 0) {
            lVar17 = (longlong)iVar21;
            uVar28 = uVar28 + 0x20;
            iVar21 = iVar21 + 1;
            uVar27 = uVar5;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
            goto LAB_14cbba89b;
            uVar27 = *(uint *)(puVar24 + lVar17 * 4 + 4);
          }
          uVar15 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar27 = (int)lVar17 + -1 + uVar28;
          if ((int)uVar5 < (int)uVar27) {
            uVar27 = uVar5;
          }
        }
LAB_14cbba89b:
        while( true ) {
          pTVar3 = local_230;
          if (*(int *)&(local_230->Elements).field_0x8 - *(int *)&(local_230->Elements).field_0x34
              != (int)uStack_208) {
            `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_316);
          }
          if (((TStack_228.CurrentBitIndex == uVar27) &&
              (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (pTVar3 == &(this->ActivePreviewSelection).Selection)) break;
          local_2c8 = *(ulonglong *)
                       (*(longlong *)&pTVar3->Elements + (longlong)TStack_228.CurrentBitIndex * 0x10
                       );
          if (*(int *)(lVar18 + 0x38) != *(int *)(lVar18 + 100)) {
            lVar17 = lVar18 + 0x68;
            if (*(longlong *)(lVar18 + 0x70) != 0) {
              lVar17 = *(longlong *)(lVar18 + 0x70);
            }
            iVar25 = *(int *)(lVar17 + ((ulonglong)(*(int *)(lVar18 + 0x78) - 1) &
                                       (local_2c8 >> 0x20) * 0x17 + local_2c8) * 4);
            if (iVar25 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar25 * 0x10) ==
                    local_2c8) {
                  pFVar10 = &this->SelectedActivePreviewSelection;
                  puVar20 = (ulong64 *)local_2a4;
                  goto LAB_14cbba94f;
                }
                iVar25 = *(int *)(*(longlong *)(lVar18 + 0x30) + 8 + (longlong)iVar25 * 0x10);
              } while (iVar25 != -1);
            }
          }
          pFVar10 = &this->UnselectedActivePreviewSelection;
          puVar20 = (ulong64 *)(local_2a4 + 4);
LAB_14cbba94f:
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64_const_&>(&pFVar10->Selection,puVar20,(bool *)&local_2c8);
          TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
        }
      }
      UE::Geometry::FGeometrySelectionElements::Reset(&this->CachedSelectedPreviewRenderElements);
      UE::Geometry::FGeometrySelectionElements::Reset(&this->CachedUnselectedPreviewRenderElements);
      this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | PreviewCachesDirty;
      pUVar8 = (this->PreviewGeometry).field0_0x0.DebugPtr;
      if (pUVar8 != (UPreviewGeometry *)0x0) {
        UPreviewGeometry::RemoveLineSet
                  (pUVar8,(this->HoverOverSelectedParams).Identifiers.Elements + 1,true);
        UPreviewGeometry::RemovePointSet
                  ((this->PreviewGeometry).field0_0x0.DebugPtr,
                   (FString *)&this->HoverOverSelectedParams,true);
        UPreviewGeometry::RemoveTriangleSet
                  ((this->PreviewGeometry).field0_0x0.DebugPtr,
                   (this->HoverOverSelectedParams).Identifiers.Elements + 2,true);
      }
      pUVar8 = (this->PreviewGeometry).field0_0x0.DebugPtr;
      if (pUVar8 != (UPreviewGeometry *)0x0) {
        UPreviewGeometry::RemoveLineSet
                  (pUVar8,(this->HoverOverUnselectedParams).Identifiers.Elements + 1,true);
        UPreviewGeometry::RemovePointSet
                  ((this->PreviewGeometry).field0_0x0.DebugPtr,
                   (FString *)&this->HoverOverUnselectedParams,true);
        UPreviewGeometry::RemoveTriangleSet
                  ((this->PreviewGeometry).field0_0x0.DebugPtr,
                   (this->HoverOverUnselectedParams).Identifiers.Elements + 2,true);
      }
    }
    iVar25 = *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x34;
    iVar22 = *(int *)&(this->ActivePreviewSelection).Selection.Elements.field_0x8;
    local_a0.Selection.HashSize = 0;
    if (local_a0.Selection.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a0.Selection.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a0.Selection.Elements);
    uVar15 = (ulonglong)(iVar22 != iVar25);
  }
  return SUB81(uVar15,0);
}

// UpdateSelectionRenderCacheOnTargetChange @ 14cbbaab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UGeometrySelectionManager::UpdateSelectionRenderCacheOnTargetChange(UGeometrySelectionManager *this)

{
  int *piVar1;
  TArray<UE::Geometry::FGeometrySelectionElements,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UE::Geometry::FGeometrySelectionElements,TSizedDefaultAllocator<32>_> *this_01;
  int iVar2;
  FGeometrySelectionElements *pFVar3;
  UPreviewGeometry *pUVar4;
  
  this_00 = &this->CachedSelectionRenderElements;
  piVar1 = &(this->CachedSelectionRenderElements).ArrayMax;
  pFVar3 = (FGeometrySelectionElements *)(this_00->AllocatorInstance).Data;
  iVar2 = (this->CachedSelectionRenderElements).ArrayNum;
  if ((this->CachedSelectionRenderElements).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGeometrySelectionElements,int>(pFVar3,iVar2);
    (this->CachedSelectionRenderElements).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGeometrySelectionElements,int>(pFVar3,iVar2);
    (this->CachedSelectionRenderElements).ArrayNum = 0;
  }
  this_01 = &this->CachedSelectableRenderElements;
  piVar1 = &(this->CachedSelectableRenderElements).ArrayMax;
  pFVar3 = (FGeometrySelectionElements *)(this_01->AllocatorInstance).Data;
  iVar2 = (this->CachedSelectableRenderElements).ArrayNum;
  if ((this->CachedSelectableRenderElements).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGeometrySelectionElements,int>(pFVar3,iVar2);
    (this->CachedSelectableRenderElements).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&this_01->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FGeometrySelectionElements,int>(pFVar3,iVar2);
    (this->CachedSelectableRenderElements).ArrayNum = 0;
  }
  TArray<UE::Geometry::FGeometrySelectionElements,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,(this->ActiveTargetReferences).ArrayNum,Default);
  TArray<UE::Geometry::FGeometrySelectionElements,TSizedDefaultAllocator<32>_>::SetNum
            (this_01,(this->ActiveTargetReferences).ArrayNum,Default);
  pUVar4 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar4 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveLineSet(pUVar4,(this->SelectedParams).Identifiers.Elements + 1,true);
    UPreviewGeometry::RemovePointSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)&this->SelectedParams,true);
    UPreviewGeometry::RemoveTriangleSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (this->SelectedParams).Identifiers.Elements + 2,true);
  }
  pUVar4 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar4 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::RemoveLineSet(pUVar4,(this->UnselectedParams).Identifiers.Elements + 1,true);
    UPreviewGeometry::RemovePointSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,(FString *)&this->UnselectedParams,true);
    UPreviewGeometry::RemoveTriangleSet
              ((this->PreviewGeometry).field0_0x0.DebugPtr,
               (this->UnselectedParams).Identifiers.Elements + 2,true);
  }
  this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | Default;
  ClearActivePreview(this);
  return;
}

// UpdateSelectionViaConvex @ 14cbbac50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::UpdateSelectionViaConvex
          (UGeometrySelectionManager *this,FConvexVolume *param_1,
          FGeometrySelectionUpdateConfig *param_2,FGeometrySelectionUpdateResult *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  IToolsContextTransactionsAPI *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  longlong *plVar8;
  FGeometrySelectionDeltaChange *this_00;
  FGeometrySelectionDeltaChange *pFVar9;
  FText *pFVar10;
  undefined1 auStack_308 [32];
  FGeometrySelectionUpdateResult *local_2e8;
  longlong local_2e0;
  FGeometrySelectionDeltaChange *local_2d8;
  FText local_2d0;
  FText local_2c0;
  FConvexVolume local_2a8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  param_3->bSelectionModified = false;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  if (iVar1 != 0) {
    pFVar9 = (FGeometrySelectionDeltaChange *)0x0;
    if (iVar1 < 1) {
      local_2e8 = (FGeometrySelectionUpdateResult *)0x0;
      local_2e0 = (longlong)iVar1;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar2 = *(undefined8 **)(this->ActiveTargetReferences).AllocatorInstance.Data;
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_58 = __real_3ff0000000000000;
    local_78 = ___xmm_3ff00000000000000000000000000000;
    uStack_70 = _UNK_15061cbc8;
    local_2a8.Planes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    local_2a8.Planes.ArrayNum = 0;
    local_2a8.Planes.ArrayMax = 6;
    local_2a8.PermutedPlanes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    local_2a8.PermutedPlanes.ArrayNum = 0;
    local_2a8.PermutedPlanes.ArrayMax = 8;
    local_68 = 0x42b40000;
    local_64 = 0x42c80000;
    local_60 = 0x3f800000;
    local_5c = 0;
    FConvexVolume::operator=(&local_2a8,param_1);
    plVar8 = (longlong *)
             (**(code **)(((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                          DebugPtr)->_padding_ + 0x398))();
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_a8);
    local_2e8 = param_3;
    (**(code **)(*(longlong *)puVar2[4] + 0x78))
              ((longlong *)puVar2[4],&local_2a8,puVar2[0x10],param_2);
    if (param_3->bSelectionModified == false) {
      if ((param_3->bSelectionMissed != false) && (param_2->ChangeType == Replace)) {
        (**(code **)(this->_padding_ + 0x310))(this,0);
      }
    }
    else {
      this_00 = ::operator_new(0x40);
      if (this_00 != (FGeometrySelectionDeltaChange *)0x0) {
        this_00->_padding_ = 0;
        this_00->_padding_ = 0;
        (this_00->Identifier).TargetType = Unknown;
        (this_00->Identifier).ObjectType = Unknown;
        (this_00->Identifier).TargetObject.WeakPtr = (FWeakObjectPtr)0x0;
        (this_00->Delta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Delta).Removed.ArrayNum = 0;
        (this_00->Delta).Removed.ArrayMax = 0;
        (this_00->Delta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Delta).Added.ArrayNum = 0;
        (this_00->Delta).Added.ArrayMax = 0;
        pFVar9 = FGeometrySelectionDeltaChange::FGeometrySelectionDeltaChange(this_00);
      }
      uVar5 = *puVar2;
      FVar6 = *(FWeakObjectPtr *)(puVar2 + 1);
      (pFVar9->Identifier).TargetType = (int)uVar5;
      (pFVar9->Identifier).ObjectType = (int)((ulonglong)uVar5 >> 0x20);
      (pFVar9->Identifier).TargetObject.WeakPtr = FVar6;
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
                (&(pFVar9->Delta).Removed,&(param_3->SelectionDelta).Removed);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
                (&(pFVar9->Delta).Added,&(param_3->SelectionDelta).Added);
      pIVar3 = this->TransactionsAPI;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x18);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_2d0,L"UGeometrySelectionManager",L"UpdateSelectionViaConvex",
                           L"Change Selection");
      (*pcVar4)(pIVar3,pFVar10);
      if (local_2d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
      }
      pIVar3 = this->TransactionsAPI;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x28);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_2c0,L"UGeometrySelectionManager",L"UpdateSelectionViaConvex",
                           L"Change Selection");
      local_2d8 = pFVar9;
      (*pcVar4)(pIVar3,this,&local_2d8,pFVar10);
      if (local_2c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2c0.TextData.Reference + 0x10))();
      }
      (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
      this->RenderCachesDirtyFlags =
           this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnSelectionModified);
    }
    if (local_2a8.PermutedPlanes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_2a8.PermutedPlanes.AllocatorInstance.SecondaryData);
    }
    if (local_2a8.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_2a8.Planes.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// UpdateSelectionViaRaycast @ 14cbbb090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UGeometrySelectionManager::UpdateSelectionViaRaycast
          (UGeometrySelectionManager *this,TRay<double> *param_1,
          FGeometrySelectionUpdateConfig *param_2,FGeometrySelectionUpdateResult *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  IToolsContextTransactionsAPI *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  longlong *plVar8;
  FGeometrySelectionDeltaChange *this_00;
  FGeometrySelectionDeltaChange *pFVar9;
  FText *pFVar10;
  FGeometrySelectionDeltaChange *local_res8;
  FText local_c8;
  FText local_b8;
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  param_3->bSelectionModified = false;
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  if (iVar1 != 0) {
    pFVar9 = (FGeometrySelectionDeltaChange *)0x0;
    if ((iVar1 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar2 = *(undefined8 **)(this->ActiveTargetReferences).AllocatorInstance.Data;
    local_68 = 0;
    local_48 = ___xmm_3ff00000000000000000000000000000;
    uStack_40 = _UNK_15061cbc8;
    local_a8 = (param_1->Origin).field0_0x0._s_0.X;
    dStack_a0 = (param_1->Origin).field0_0x0._s_0.Y;
    local_38 = 0x42b40000;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_88 = (param_1->Direction).field0_0x0._s_0.Y;
    dStack_80 = (param_1->Direction).field0_0x0._s_0.Z;
    local_34 = 0x42c80000;
    local_28 = __real_3ff0000000000000;
    local_98 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x10);
    uStack_94 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x14);
    uStack_90 = *(undefined4 *)&(param_1->Direction).field0_0x0;
    uStack_8c = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 4);
    local_30 = 0x3f800000;
    local_2c = 0;
    plVar8 = (longlong *)
             (**(code **)(((((this->ToolsContext).field0_0x0.DebugPtr)->ToolManager).field0_0x0.
                          DebugPtr)->_padding_ + 0x398))();
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
    (**(code **)(*(longlong *)puVar2[4] + 0x60))
              ((longlong *)puVar2[4],&local_a8,puVar2[0x10],param_2,param_3);
    if (param_3->bSelectionModified == false) {
      if ((param_3->bSelectionMissed != false) && (param_2->ChangeType == Replace)) {
        (**(code **)(this->_padding_ + 0x310))(this,0);
      }
    }
    else {
      this_00 = ::operator_new(0x40);
      if (this_00 != (FGeometrySelectionDeltaChange *)0x0) {
        this_00->_padding_ = 0;
        this_00->_padding_ = 0;
        (this_00->Identifier).TargetType = Unknown;
        (this_00->Identifier).ObjectType = Unknown;
        (this_00->Identifier).TargetObject.WeakPtr = (FWeakObjectPtr)0x0;
        (this_00->Delta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Delta).Removed.ArrayNum = 0;
        (this_00->Delta).Removed.ArrayMax = 0;
        (this_00->Delta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Delta).Added.ArrayNum = 0;
        (this_00->Delta).Added.ArrayMax = 0;
        pFVar9 = FGeometrySelectionDeltaChange::FGeometrySelectionDeltaChange(this_00);
      }
      uVar5 = *puVar2;
      FVar6 = *(FWeakObjectPtr *)(puVar2 + 1);
      (pFVar9->Identifier).TargetType = (int)uVar5;
      (pFVar9->Identifier).ObjectType = (int)((ulonglong)uVar5 >> 0x20);
      (pFVar9->Identifier).TargetObject.WeakPtr = FVar6;
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
                (&(pFVar9->Delta).Removed,&(param_3->SelectionDelta).Removed);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
                (&(pFVar9->Delta).Added,&(param_3->SelectionDelta).Added);
      pIVar3 = this->TransactionsAPI;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x18);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"UGeometrySelectionManager",L"UpdateSelectionViaRaycast",
                           L"Change Selection");
      (*pcVar4)(pIVar3,pFVar10);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      pIVar3 = this->TransactionsAPI;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x28);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"UGeometrySelectionManager",L"UpdateSelectionViaRaycast",
                           L"Change Selection");
      local_res8 = pFVar9;
      (*pcVar4)(pIVar3,this,&local_res8,pFVar10);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      (**(code **)((longlong)*this->TransactionsAPI + 0x20))();
      this->RenderCachesDirtyFlags =
           this->RenderCachesDirtyFlags | (PreviewCachesDirty|SelectionCachesDirty);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnSelectionModified);
    }
  }
  return;
}

// UpdateTransformation @ 14cbbcc20

void __thiscall
UGeometrySelectionManager::UpdateTransformation
          (UGeometrySelectionManager *this,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&,UE::Math::TTransform<double>_const_&)>
          *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar3 = (**(code **)(this->_padding_ + 0x3c0))();
  if (cVar3 == '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1829034393054739089>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GeometrySelectionManager.cpp"
                       ,0x56f,"IsInActiveTransformation()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar6 = 0;
    if (0 < (this->ActiveTargetReferences).ArrayNum) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->ActiveTransformations).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)((this->ActiveTransformations).AllocatorInstance.Data + lVar7) != 0) {
          uVar5 = 0;
          if ((int)uVar6 < (this->ActiveTransformations).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar1 = *(longlong **)((this->ActiveTransformations).AllocatorInstance.Data + lVar7);
          local_18 = *(undefined8 *)param_1;
          local_10 = *(undefined8 *)&param_1->field_0x8;
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_18);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->ActiveTargetReferences).ArrayNum);
    }
    this->RenderCachesDirtyFlags = this->RenderCachesDirtyFlags | SelectionCachesDirty;
  }
  return;
}

// ValidateSelectionState @ 14cbbcda0

bool __thiscall UGeometrySelectionManager::ValidateSelectionState(UGeometrySelectionManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveTargetReferences).ArrayNum;
  pFVar4 = (this->ActiveTargetReferences).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveTargetReferences).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      return true;
    }
    if ((*(longlong *)pFVar4 == 0) ||
       (bVar3 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)(*(longlong *)pFVar4 + 0x18),true,false),
       bVar3)) {
      return false;
    }
    if ((*(longlong *)pFVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    bVar3 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)(*(longlong *)pFVar4 + 8),true,false);
    if (bVar3) {
      return false;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  bVar3 = (bool)(*pcVar2)();
  return bVar3;
}

// operator() @ 150576cf0

bool __thiscall
`UGeometrySelectionManager::BeginTrackedSelectionChange'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1829034393054739487>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1829034393054739487>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

